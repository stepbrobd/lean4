/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Markus Himmel, Paul Reichert
-/
module

prelude
public import Std.Data.DTreeMap.Internal.WF.Defs
public import Std.Data.DTreeMap.Internal.Cell
public import Std.Data.Internal.Cut

@[expose] public section

/-!
# Model implementations of tree map functions
-/

set_option autoImplicit false
set_option linter.all true

universe u v w

variable {α : Type u} {β : α → Type v} {γ : α → Type w} {δ : Type w}

namespace Std.DTreeMap.Internal
open Std.Internal (IsStrictCut)

namespace Impl

/-!
## General infrastructure
-/

/-- Internal implementation detail of the tree map -/
def contains' [Ord α] (k : α → Ordering) (l : Impl α β) : Bool :=
  match l with
  | .leaf => false
  | .inner _ k' _ l r =>
    match k k' with
    | .lt => contains' k l
    | .gt => contains' k r
    | .eq => true

theorem contains'_compare [Ord α] {k : α} {l : Impl α β} :
    l.contains' (compare k) = l.contains k := by
  induction l <;> simp_all only [contains', contains] <;> rfl

/-- General tree-traversal function. Internal implementation detail of the tree map -/
def applyPartition [Ord α] (k : α → Ordering) (l : Impl α β)
    (f : List ((a : α) × β a) → (c : Cell α β k) → (l.contains' k → c.contains) → List ((a : α) × β a) → δ) : δ :=
  go [] l id []
where
  go (ll : List ((a : α) × β a)) (m : Impl α β) (hm : l.contains' k → m.contains' k) (rr : List ((a : α) × β a)) : δ :=
  match m with
  | .leaf => f ll .empty (by simp_all [contains']) rr
  | .inner _ k' v' l r =>
    match h : k k' with
    | .lt =>
      go ll l (fun hc => have := hm hc; by rw [← this, contains']; simp_all)
        (⟨k', v'⟩ :: r.toListModel ++ rr)
    | .eq => f (ll ++ l.toListModel) (.ofEq k' v' h) (by simp) (r.toListModel ++ rr)
    | .gt =>
      go (ll ++ l.toListModel ++ [⟨k', v'⟩]) r
        (fun hc => have := hm hc; by rw [← this, contains']; simp_all) rr

/-- Internal implementation detail of the tree map -/
def applyCell [Ord α] (k : α) (l : Impl α β)
    (f : (c : Cell α β (compare k)) → (l.contains' (compare k) → c.contains) → δ) : δ :=
  match l with
  | .leaf => f .empty (by simp [contains'])
  | .inner _ k' v' l r =>
    match hcmp : compare k k' with
    | .lt => applyCell k l (fun c h => f c fun h' => h (by simpa [contains', hcmp] using h'))
    | .eq => f (.ofEq k' v' hcmp) (by simp)
    | .gt => applyCell k r (fun c h => f c fun h' => h (by simpa [contains', hcmp] using h'))

/-- Internal implementation detail of the tree map -/
theorem applyCell_eq_applyPartition [Ord α] (k : α) (l : Impl α β)
    (f : (c : Cell α β (compare k)) → (l.contains' (compare k) → c.contains) → δ) :
    applyCell k l f = applyPartition (compare k) l (fun _ c hc _ => f c hc) := by
  rw [applyPartition]
  suffices ∀ L u v, (hL : l.contains' (compare k) ↔ L.contains' (compare k)) →
      applyCell k l f = applyPartition.go (compare k) L (fun _ c hc _ => f c (hc ∘ hL.1)) u l hL.2 v from
    this l [] [] Iff.rfl
  intro L u v hL
  induction l generalizing u v L
  · rename_i sz k' v' l r ih₁ ih₂
    simp only [applyCell, applyPartition.go]
    split <;> rename_i hcmp
    · exact ih₁ _ _ _ _ (by simpa [contains', hcmp] using hL)
    · rfl
    · exact ih₂ _ _ _ _ (by simpa [contains', hcmp] using hL)
  · simp [applyCell, applyPartition.go]

variable (α β) in
/--
Data structure used by the general tree-traversal function `explore`.
Internal implementation detail of the tree map
-/
inductive ExplorationStep [Ord α] (k : α → Ordering) where
  /-- Needle was less than key at this node: return key-value pair and unexplored right subtree,
      recursion will continue in left subtree. -/
  | lt : (a : α) → k a = .lt → β a → List ((a : α) × β a) → ExplorationStep k
  /-- Needle was equal to key at this node: return key-value pair and both unexplored subtrees,
      recursion will terminate. -/
  | eq : List ((a : α) × β a) → Cell α β k → List ((a : α) × β a) → ExplorationStep k
  /-- Needle was larger than key at this node: return key-value pair and unexplored left subtree,
      recursion will continue in right subtree. -/
  | gt : List ((a : α) × β a) → (a : α) → k a = .gt → β a → ExplorationStep k

/-- General tree-traversal function. Internal implementation detail of the tree map -/
def explore {γ : Type w} [Ord α] (k : α → Ordering) (init : γ)
    (inner : γ → ExplorationStep α β k → γ) (l : Impl α β) : γ :=
  match l with
  | .leaf => inner init (.eq [] .empty [])
  | .inner _ ky y l r =>
    match h : k ky with
    | .lt => explore k (inner init <| .lt ky h y r.toListModel) inner l
    | .eq => inner init <| .eq l.toListModel (Cell.ofEq ky y h) r.toListModel
    | .gt => explore k (inner init <| .gt l.toListModel ky h y) inner r

/-
Note: these congruence lemmas are proven manually because `simp` currently can't handle
matches with hypotheses on discriminants properly.
-/

@[congr]
theorem applyPartition.go.match_1.congr {α : Sort u} {o o' : Ordering}
    {lt : o = .lt → α} {eq : o = .eq → α} {gt : o = .gt → α}
    {lt' : o' = .lt → α} {eq' : o' = .eq → α} {gt' : o' = .gt → α}
    (ho : o = o')
    (hlt : ∀ h, lt (ho.trans h) = lt' h)
    (heq : ∀ h, eq (ho.trans h) = eq' h)
    (hgt : ∀ h, gt (ho.trans h) = gt' h) :
    (match (generalizing := false) h : o with | .lt => lt h | .eq => eq h | .gt => gt h) =
      (match (generalizing := false) h : o' with | .lt => lt' h | .eq => eq' h | .gt => gt' h) := by
  induction ho; induction funext hlt; induction funext heq; induction funext hgt
  rfl

@[congr]
theorem entryAtIdx.match_1.congr {α : Sort u} {o o' : Ordering}
    {lt : o = .lt → α} {eq : o = .eq → α} {gt : o = .gt → α}
    {lt' : o' = .lt → α} {eq' : o' = .eq → α} {gt' : o' = .gt → α}
    (ho : o = o')
    (hlt : ∀ h, lt (ho.trans h) = lt' h)
    (heq : ∀ h, eq (ho.trans h) = eq' h)
    (hgt : ∀ h, gt (ho.trans h) = gt' h) :
    entryAtIdx.match_1 (fun _ => α) o lt eq gt = entryAtIdx.match_1 (fun _ => α) o' lt' eq' gt' := by
  induction ho; induction funext hlt; induction funext heq; induction funext hgt
  rfl

@[congr]
theorem getEntryLE.match_1.congr {α : Sort u} {o o' : Ordering}
    {lt : o = .lt → α} {eq : o = .eq → α} {gt : o = .gt → α}
    {lt' : o' = .lt → α} {eq' : o' = .eq → α} {gt' : o' = .gt → α}
    (ho : o = o')
    (hlt : ∀ h, lt (ho.trans h) = lt' h)
    (heq : ∀ h, eq (ho.trans h) = eq' h)
    (hgt : ∀ h, gt (ho.trans h) = gt' h) :
    getEntryLE.match_1 (fun _ => α) o gt eq lt = getEntryLE.match_1 (fun _ => α) o' gt' eq' lt' := by
  induction ho; induction funext hlt; induction funext heq; induction funext hgt
  rfl

@[congr]
theorem get?.match_1.congr {α : Sort u} {o o' : Ordering}
    {lt : o = .lt → α} {eq : o = .eq → α} {gt : o = .gt → α}
    {lt' : o' = .lt → α} {eq' : o' = .eq → α} {gt' : o' = .gt → α}
    (ho : o = o')
    (hlt : ∀ h, lt (ho.trans h) = lt' h)
    (heq : ∀ h, eq (ho.trans h) = eq' h)
    (hgt : ∀ h, gt (ho.trans h) = gt' h) :
    get?.match_1 (fun _ => α) o lt gt eq = get?.match_1 (fun _ => α) o' lt' gt' eq' := by
  induction ho; induction funext hlt; induction funext heq; induction funext hgt
  rfl

/--
Induction principle on `Impl` with an additional case split on `k ky` for
`Impl.inner _ ky _ _ _` without generalization.
-/
@[elab_as_elim]
theorem tree_split_ind_no_gen [Ord α] (k : α → Ordering)
    {motive : (l : Impl α β) → Prop}
    (leaf : motive .leaf)
    (lt : ∀ n ky y l r, (h : k ky = .lt) →
      motive l → motive (.inner n ky y l r))
    (eq : ∀ n ky y l r, (h : k ky = .eq) →
      motive l → motive r → motive (.inner n ky y l r))
    (gt : ∀ n ky y l r, (h : k ky = .gt) →
      motive r → motive (.inner n ky y l r))
    (t : Impl α β) : motive t := by
  induction t with
  | leaf => exact leaf
  | inner n ky v l r ih ih' =>
    cases h : k ky
    · exact lt n ky v l r h ih
    · exact eq n ky v l r h ih ih'
    · exact gt n ky v l r h ih'

/--
Induction principle on `Impl` with an additional case split on `k ky` for
`Impl.inner _ ky _ _ _` and a generalization built in for convenience.
-/
@[elab_as_elim]
theorem tree_split_ind {γ : Sort w} [Ord α] (k : α → Ordering)
    {motive : (l : Impl α β) → γ → Prop}
    (leaf : ∀ x, motive .leaf x)
    (lt : ∀ n ky y l r, (h : k ky = .lt) →
      (∀ x, motive l x) → ∀ x, motive (.inner n ky y l r) x)
    (eq : ∀ n ky y l r, (h : k ky = .eq) →
      (∀ x, motive l x) → (∀ x, motive r x) → ∀ x, motive (.inner n ky y l r) x)
    (gt : ∀ n ky y l r, (h : k ky = .gt) →
      (∀ x, motive r x) → ∀ x, motive (.inner n ky y l r) x)
    (t : Impl α β) : (x : γ) → motive t x :=
  tree_split_ind_no_gen k leaf lt eq gt t

open ExplorationStep

theorem applyPartition_go_step [Ord α] {k : α → Ordering} {init : δ} (l₁ l₂) (l l' : Impl α β) (h)
  (f : δ → ExplorationStep α β k → δ) :
    applyPartition.go k l' (fun l' c _ r' => f init (.eq l' c r')) l₁ l h l₂ =
    applyPartition.go k l' (fun l' c _ r' => f init (.eq (l₁ ++ l') c (r' ++ l₂))) [] l h [] := by
  suffices ∀ l₃ l₄,
    applyPartition.go k l' (fun l' c _ r' => f init (.eq (l₃ ++ l') c (r' ++ l₄))) l₁ l h l₂ =
    applyPartition.go k l' (fun l' c _ r' => f init (.eq (l₃ ++ l₁ ++ l') c (r' ++ l₂ ++ l₄))) [] l h [] by
    simpa using this [] []
  intro l₃ l₄
  induction l generalizing l₁ l₂ l₃ l₄
  · rename_i sz k' v' l r ih₁ ih₂
    simp only [applyPartition.go]
    split
    · simp only [List.cons_append, List.append_assoc, List.append_nil]
      simp only [ih₁, ← List.append_assoc l₃]
      simp
    · simp
    · simp only [List.append_assoc, List.nil_append]
      simp only [ih₂, ← List.append_assoc l₃]
      simp
  · simp [applyPartition.go]

theorem explore_eq_applyPartition [Ord α] {k : α → Ordering} (init : δ) (l : Impl α β)
    (f : δ → ExplorationStep α β k → δ)
    (hfr : ∀ {k hk v ll c rr r init}, f (f init (.lt k hk v r)) (.eq ll c rr) = f init (.eq ll c (rr ++ ⟨k, v⟩ :: r)))
    (hfl : ∀ {k hk v ll c rr l init}, f (f init (.gt l k hk v)) (.eq ll c rr) = f init (.eq (l ++ ⟨k, v⟩ :: ll) c rr)) :
    explore k init f l = applyPartition k l fun l c _ r => f init (.eq l c r) := by
  rw [applyPartition]
  suffices ∀ L, (h : L.contains' k → l.contains' k) →
    explore k init f l = applyPartition.go k L (fun l_1 c x r => f init (eq l_1 c r)) [] l h [] from this l id
  intro L hL
  induction l generalizing init
  · rename_i sz k' v' l r ih₁ ih₂
    rw [explore, applyPartition.go]
    split <;> rename_i hcmp
    · simp only [hcmp, contains'] at hL
      rw [ih₁ _ hL]
      conv => rhs; rw [applyPartition_go_step]
      simp only [List.nil_append, List.append_nil]
      congr
      ext ll c hc rr
      apply hfr
    · simp
    · simp only [hcmp, contains'] at hL
      rw [ih₂ _ hL]
      conv => rhs; rw [applyPartition_go_step]
      simp only [List.nil_append, List.append_assoc, List.singleton_append, List.append_nil]
      congr
      ext ll c hc rr
      apply hfl
  · simp [explore, applyPartition.go]

/--
General "update the mapping for a given key" function.
Internal implementation detail of the tree map
-/
noncomputable def updateCell [Ord α] (k : α) (f : Cell α β (compare k) → Cell α β (compare k))
    (l : Impl α β) (hl : Balanced l) : SizedBalancedTree α β (l.size - 1) (l.size + 1) :=
  match l with
  | leaf => match (f .empty).inner with
    | none => ⟨.leaf, ✓, ✓, ✓⟩
    | some ⟨k', v'⟩ => ⟨.inner 1 k' v' .leaf .leaf, ✓, ✓, ✓⟩
  | inner sz ky y l r =>
    match h : compare k ky with
    | .lt =>
      let ⟨newL, h₁, h₂, h₃⟩ := updateCell k f l ✓
      ⟨balance ky y newL r ✓ ✓ ✓, ✓, ✓, ✓⟩
    | .eq => match (f (.ofEq ky y h)).inner with
      | none =>
        ⟨glue l r ✓ ✓ ✓, ✓, ✓, ✓⟩
      | some ⟨ky', y'⟩ => ⟨.inner sz ky' y' l r, ✓, ✓, ✓⟩
    | .gt =>
      let ⟨newR, h₁, h₂, h₃⟩ := updateCell k f r ✓
      ⟨balance ky y l newR ✓ ✓ ✓, ✓, ✓, ✓⟩

/-!
## Model functions
-/

/--
Model implementation of the `contains` function.
Internal implementation detail of the tree map
-/
def containsₘ [Ord α] (l : Impl α β) (k : α) : Bool :=
  applyCell k l fun c _ => c.contains

/--
Model implementation of the `get?` function.
Internal implementation detail of the tree map
-/
def get?ₘ [Ord α] [OrientedOrd α] [LawfulEqOrd α] (l : Impl α β) (k : α) : Option (β k) :=
  applyCell k l fun c _ => c.get?

/--
Model implementation of the `get` function.
Internal implementation detail of the tree map
-/
def getₘ [Ord α] [OrientedOrd α] [LawfulEqOrd α] (l : Impl α β) (k : α) (h : (get?ₘ l k).isSome) :
    β k :=
  get?ₘ l k |>.get h

/--
Model implementation of the `get!` function.
Internal implementation detail of the tree map
-/
def get!ₘ [Ord α] [OrientedOrd α] [LawfulEqOrd α] (l : Impl α β) (k : α) [Inhabited (β k)] : β k :=
  get?ₘ l k |>.get!

/--
Model implementation of the `getD` function.
Internal implementation detail of the tree map
-/
def getDₘ [Ord α] [OrientedOrd α] [LawfulEqOrd α] (k : α) (l : Impl α β) (fallback : β k) : β k :=
  get?ₘ l k |>.getD fallback

/--
Model implementation of the `getKey?` function.
Internal implementation detail of the tree map
-/
def getKey?ₘ [Ord α] (l : Impl α β) (k : α) : Option α :=
  applyCell k l fun c _ => c.getKey?

/--
Model implementation of the `getKey` function.
Internal implementation detail of the tree map
-/
def getKeyₘ [Ord α] (l : Impl α β) (k : α) (h : (getKey?ₘ l k).isSome) : α :=
  getKey?ₘ l k |>.get h

/--
Model implementation of the `getKey!` function.
Internal implementation detail of the tree map
-/
def getKey!ₘ [Ord α] (l : Impl α β) (k : α) [Inhabited α] : α :=
  getKey?ₘ l k |>.get!

/--
Model implementation of the `getKeyD` function.
Internal implementation detail of the tree map
-/
def getKeyDₘ [Ord α] (k : α) (l : Impl α β) (fallback : α) : α :=
  getKey?ₘ l k |>.getD fallback

/-- Internal implementation detail of the tree map -/
def minEntry?ₘ' [Ord α] (l : Impl α β) : Option ((a : α) × β a) :=
  explore (fun (_ : α) => .lt) none (fun sofar step =>
    match step with
    | .lt ky _ y _ => some ⟨ky, y⟩
    | .eq _ _ r => r.head?.or sofar) l

/-- Internal implementation detail of the tree map -/
def minEntry?ₘ [Ord α] (l : Impl α β) : Option ((a : α) × β a) :=
  applyPartition (fun (_ : α) => .lt) l fun _ _ _ r => r.head?

/-- Internal implementation detail of the tree map -/
def reverse : Impl α β → Impl α β
  | .leaf => .leaf
  | .inner sz k v l r => .inner sz k v (reverse r) (reverse l)

/--
Model implementation of the `insert` function.
Internal implementation detail of the tree map
-/
noncomputable def insertₘ [Ord α] (k : α) (v : β k) (l : Impl α β) (h : l.Balanced) : Impl α β :=
  updateCell k (fun _ => .of k v) l h |>.impl

/--
Model implementation of the `erase` function.
Internal implementation detail of the tree map
-/
noncomputable def eraseₘ [Ord α] (k : α) (t : Impl α β) (h : t.Balanced) : Impl α β :=
  updateCell k (fun _ => .empty) t h |>.impl

/--
Model implementation of the `insertIfNew` function.
Internal implementation detail of the tree map
-/
noncomputable def insertIfNewₘ [Ord α] (k : α) (v : β k) (l : Impl α β) (h : l.Balanced) : Impl α β :=
  updateCell k (fun
    | ⟨.none, _⟩ => .of k v
    | c => c) l h |>.impl

/--
Model implementation of the `alter` function.
Internal implementation detail of the tree map
-/
noncomputable def alterₘ [Ord α] [OrientedOrd α] [LawfulEqOrd α] (k : α) (f : Option (β k) → Option (β k))
    (t : Impl α β) (h : t.Balanced) : Impl α β :=
  updateCell k (·.alter f) t h |>.impl

namespace Const

variable {β : Type v}

/--
Model implementation of the `get?` function.
Internal implementation detail of the tree map
-/
def get?ₘ [Ord α] (l : Impl α (fun _ => β)) (k : α) : Option β :=
  applyCell k l fun c _ => Cell.Const.get? c

/--
Model implementation of the `get` function.
Internal implementation detail of the tree map
-/
def getₘ [Ord α] (l : Impl α (fun _ => β)) (k : α) (h : (get?ₘ l k).isSome) :
    β :=
  get?ₘ l k |>.get h

/--
Model implementation of the `get!` function.
Internal implementation detail of the tree map
-/
def get!ₘ [Ord α] (l : Impl α (fun _ => β)) (k : α) [Inhabited β] : β :=
  get?ₘ l k |>.get!

/--
Model implementation of the `getD` function.
Internal implementation detail of the tree map
-/
def getDₘ [Ord α] (l : Impl α (fun _ => β)) (k : α) (fallback : β) : β :=
  get?ₘ l k |>.getD fallback

/--
Model implementation of the `alter` function.
Internal implementation detail of the tree map
-/
noncomputable def alterₘ [Ord α] [OrientedOrd α] (k : α) (f : Option β → Option β)
    (t : Impl α (fun _ => β)) (h : t.Balanced) : Impl α (fun _ => β) :=
  updateCell k (Cell.Const.alter f) t h |>.impl

end Const

/-!
## Helper theorems for reasoning with key-value pairs
-/

theorem balanceL!_pair_congr {k : α} {v : β k} {k' : α} {v' : β k'}
    (h : (⟨k, v⟩ : (a : α) × β a) = ⟨k', v'⟩) {l l' r r' : Impl α β}
    (hl : l = l') (hr : r = r') :
    balanceL! k v l r = balanceL! k' v' l' r' := by
  cases h; cases hl; cases hr; rfl

theorem balanceR!_pair_congr {k : α} {v : β k} {k' : α} {v' : β k'}
    (h : (⟨k, v⟩ : (a : α) × β a) = ⟨k', v'⟩) {l l' r r' : Impl α β}
    (hl : l = l') (hr : r = r') :
    balanceR! k v l r = balanceR! k' v' l' r' := by
  cases h; cases hl; cases hr; rfl

/-!
## Equivalence of function to model functions
-/

theorem contains_eq_containsₘ [Ord α] (k : α) (l : Impl α β) :
    l.contains k = l.containsₘ k := by
  simp only [containsₘ]
  induction l
  · simp only [contains, applyCell]
    split <;> simp_all
  · simp [contains, applyCell]

theorem get?_eq_get?ₘ [Ord α] [OrientedOrd α] [LawfulEqOrd α] (k : α) (l : Impl α β) :
    l.get? k = l.get?ₘ k := by
  simp only [get?ₘ]
  induction l
  · simp only [applyCell, get?]
    split <;> simp_all [Cell.get?, Cell.ofEq]
  · simp [get?, applyCell]

theorem get_eq_get? [Ord α] [OrientedOrd α] [LawfulEqOrd α] (k : α) (l : Impl α β) {h} :
    some (l.get k h) = l.get? k := by
  induction l
  · simp only [get, get?]
    split <;> simp_all
  · contradiction

theorem get_eq_getₘ [Ord α] [OrientedOrd α] [LawfulEqOrd α] (k : α) (l : Impl α β) {h} (h') :
    l.get k h = l.getₘ k h' := by
  apply Option.some.inj
  simp [get_eq_get?, get?_eq_get?ₘ, getₘ]

theorem get!_eq_get!ₘ [Ord α] [OrientedOrd α] [LawfulEqOrd α] (k : α) [Inhabited (β k)] (l : Impl α β) :
    l.get! k = l.get!ₘ k := by
  simp only [get!ₘ, get?ₘ]
  induction l
  · simp only [applyCell, get!]
    split <;> simp_all [Cell.get?, Cell.ofEq]
  · simp only [get!, applyCell, Cell.get?_empty, Option.get!_none]; rfl

theorem getD_eq_getDₘ [Ord α] [OrientedOrd α] [LawfulEqOrd α] (k : α) (l : Impl α β)
    (fallback : β k) : l.getD k fallback = l.getDₘ k fallback := by
  simp only [getDₘ, get?ₘ]
  induction l
  · simp only [applyCell, getD]
    split <;> simp_all [Cell.get?, Cell.ofEq]
  · simp only [getD, applyCell, Cell.get?_empty, Option.getD_none]

theorem getKey?_eq_getKey?ₘ [Ord α] (k : α) (l : Impl α β) :
    l.getKey? k = l.getKey?ₘ k := by
  simp only [getKey?ₘ]
  induction l
  · simp only [applyCell, getKey?]
    split <;> simp_all [Cell.getKey?, Cell.ofEq]
  · simp [getKey?, applyCell]

theorem getKey_eq_getKey? [Ord α] (k : α) (l : Impl α β) {h} :
    some (l.getKey k h) = l.getKey? k := by
  induction l
  · simp only [getKey, getKey?]
    split <;> simp_all
  · contradiction

theorem getKey_eq_getKeyₘ [Ord α] (k : α) (l : Impl α β) {h} (h') :
    l.getKey k h = l.getKeyₘ k h' := by
  apply Option.some.inj
  simp [getKey_eq_getKey?, getKey?_eq_getKey?ₘ, getKeyₘ]

theorem getKey!_eq_getKey!ₘ [Ord α] (k : α) [Inhabited α] (l : Impl α β) :
    l.getKey! k = l.getKey!ₘ k := by
  simp only [getKey!ₘ, getKey?ₘ]
  induction l
  · simp only [applyCell, getKey!]
    split <;> simp_all [Cell.getKey?, Cell.ofEq]
  · simp only [getKey!, applyCell, Cell.getKey?_empty, Option.get!_none]; rfl

theorem getKeyD_eq_getKeyDₘ [Ord α] (k : α) (l : Impl α β)
    (fallback : α) : l.getKeyD k fallback = l.getKeyDₘ k fallback := by
  simp only [getKeyDₘ, getKey?ₘ]
  induction l
  · simp only [applyCell, getKeyD]
    split <;> simp_all [Cell.getKey?, Cell.ofEq]
  · simp only [getKeyD, applyCell, Cell.getKey?_empty, Option.getD_none]

theorem minEntry?_eq_minEntry?ₘ' [Ord α] {l : Impl α β} : l.minEntry? = l.minEntry?ₘ' := by
  rw [minEntry?ₘ']
  induction l using minEntry?.induct <;> simp_all [minEntry?, explore]

theorem minEntry?ₘ'_eq_minEntry?ₘ [Ord α] {l : Impl α β} : l.minEntry?ₘ' = l.minEntry?ₘ := by
  rw [minEntry?ₘ', explore_eq_applyPartition, minEntry?ₘ] <;> simp

theorem minEntry?_eq_minEntry?ₘ [Ord α] {l : Impl α β} : l.minEntry? = l.minEntry?ₘ := by
  rw [minEntry?_eq_minEntry?ₘ', minEntry?ₘ'_eq_minEntry?ₘ]

theorem minEntry!_eq_get!_minEntry? [Inhabited ((a : α) × β a)] {l : Impl α β} :
    l.minEntry! = l.minEntry?.get! := by
  induction l using minEntry?.induct_unfolding <;> simp only [minEntry!] <;> trivial

theorem minEntryD_eq_getD_minEntry? {l : Impl α β} {fallback : (a : α) × β a} :
    l.minEntryD fallback = l.minEntry?.getD fallback := by
  induction l using minEntry?.induct_unfolding <;> simp only [minEntryD] <;> trivial

theorem some_minEntry_eq_minEntry? {l : Impl α β} {he} :
    some (l.minEntry he) = l.minEntry? := by
  induction l, he using minEntry.induct_unfolding <;> simp only [minEntry?] <;> assumption

theorem minEntry_eq_get_minEntry? {l : Impl α β} {he} :
    l.minEntry he = l.minEntry?.get (by simp [← some_minEntry_eq_minEntry? (he := he)]) := by
  simp [← some_minEntry_eq_minEntry? (he := he)]

theorem maxEntry?_eq_minEntry?_reverse {l : Impl α β} : l.maxEntry? = l.reverse.minEntry? := by
  induction l using maxEntry?.induct_unfolding <;> simp only [minEntry?, reverse] <;> assumption

theorem maxEntry!_eq_get!_maxEntry? [Inhabited ((a : α) × β a)] {l : Impl α β} :
    l.maxEntry! = l.maxEntry?.get! := by
  induction l using maxEntry?.induct_unfolding <;> simp only [maxEntry!] <;> trivial

theorem maxEntryD_eq_getD_maxEntry? {l : Impl α β} {fallback : (a : α) × β a} :
    l.maxEntryD fallback = l.maxEntry?.getD fallback := by
  induction l using maxEntry?.induct_unfolding <;> simp only [maxEntryD] <;> trivial

theorem some_maxEntry_eq_maxEntry? {l : Impl α β} {he} : some (l.maxEntry he) = l.maxEntry? := by
  induction l, he using maxEntry.induct_unfolding <;> simp only [maxEntry?] <;> assumption

theorem minKey?_eq_minEntry?_map_fst {l : Impl α β} : l.minKey? = l.minEntry?.map Sigma.fst := by
  induction l using minKey?.induct_unfolding <;> simp only [minEntry?] <;> trivial

theorem minKey_eq_minEntry_fst {l : Impl α β} {he} : l.minKey he = (l.minEntry he).fst := by
  induction l, he using minKey.induct_unfolding <;> simp only [minEntry] <;> trivial

theorem minKey!_eq_get!_minKey? [Inhabited α] {l : Impl α β} :
    l.minKey! = l.minKey?.get! := by
  induction l using minKey!.induct_unfolding <;> simp only [minKey?] <;> trivial

theorem minKeyD_eq_getD_minKey? {l : Impl α β} {fallback} :
    l.minKeyD fallback = l.minKey?.getD fallback := by
  induction l, fallback using minKeyD.induct_unfolding <;> simp only [minKey?] <;> trivial

theorem maxKey?_eq_minKey?_reverse {l : Impl α β} : l.maxKey? = l.reverse.minKey? := by
  induction l using maxKey?.induct_unfolding <;> simp only [minKey?, reverse] <;> assumption

theorem some_maxKey_eq_maxKey? {l : Impl α β} {he} : some (l.maxKey he) = l.maxKey? := by
  induction l, he using maxKey.induct_unfolding <;> simp only [maxKey?] <;> assumption

theorem maxKey_eq_get_maxKey? {l : Impl α β} {he} :
    l.maxKey he = l.maxKey?.get (by simp [← some_maxKey_eq_maxKey? (he := he)]) := by
  simp [← some_maxKey_eq_maxKey? (he := he)]

theorem maxKey!_eq_get!_maxKey? [Inhabited α] {l : Impl α β} :
    l.maxKey! = l.maxKey?.get! := by
  induction l using maxKey!.induct_unfolding <;> simp only [maxKey?] <;> trivial

theorem maxKeyD_eq_getD_maxKey? {l : Impl α β} {fallback} :
    l.maxKeyD fallback = l.maxKey?.getD fallback := by
  induction l using maxKey?.induct_unfolding <;> simp only [maxKeyD] <;> trivial

namespace Const

variable {β : Type v}

theorem minEntry?_eq_minEntry? [Ord α] {l : Impl α fun _ => β} :
    minEntry? l = l.minEntry?.map (fun x => (x.1, x.2)) := by
  induction l using minEntry?.induct_unfolding <;> simp only [Impl.minEntry?] <;> trivial

theorem minEntry!_eq_get!_minEntry? [Ord α] {l : Impl α fun _ => β} [Inhabited (α × β)] :
    minEntry! l = (minEntry? l).get! := by
  induction l using minEntry?.induct_unfolding <;> simp only [minEntry!] <;> trivial

theorem minEntryD_eq_getD_minEntry? [Ord α] {l : Impl α fun _ => β} {fallback : α × β} :
    minEntryD l fallback = (minEntry? l).getD fallback := by
  induction l using minEntry?.induct_unfolding <;> simp only [minEntryD] <;> trivial

theorem some_minEntry_eq_minEntry? [Ord α] {l : Impl α fun _ => β} {he} :
    some (minEntry l he) = minEntry? l := by
  induction l, he using minEntry.induct_unfolding <;> simp only [minEntry?] <;> trivial

theorem maxEntry?_eq_maxEntry? [Ord α] {l : Impl α fun _ => β} :
    maxEntry? l = l.maxEntry?.map (fun x => (x.1, x.2)) := by
  induction l using maxEntry?.induct_unfolding <;> simp only [Impl.maxEntry?] <;> trivial

theorem maxEntry!_eq_get!_maxEntry? [Ord α] {l : Impl α fun _ => β} [Inhabited (α × β)] :
    maxEntry! l = (maxEntry? l).get! := by
  induction l using maxEntry?.induct_unfolding <;> simp only [maxEntry!] <;> trivial

theorem maxEntryD_eq_getD_maxEntry? [Ord α] {l : Impl α fun _ => β} {fallback : α × β} :
    maxEntryD l fallback = (maxEntry? l).getD fallback := by
  induction l using maxEntry?.induct_unfolding <;> simp only [maxEntryD] <;> trivial

theorem some_maxEntry_eq_maxEntry? [Ord α] {l : Impl α fun _ => β} {he} :
    some (maxEntry l he) = maxEntry? l := by
  induction l, he using maxEntry.induct_unfolding <;> simp only [maxEntry?] <;> trivial

end Const

theorem balanceL_eq_balance {k : α} {v : β k} {l r : Impl α β} {hlb hrb hlr} :
    balanceL k v l r hlb hrb hlr = balance k v l r hlb hrb (Or.inl hlr.erase) := by
  rw [balanceL_eq_balanceLErase, balanceLErase_eq_balanceL!,
    balanceL!_eq_balance! hlb hrb hlr.erase, balance_eq_balance!]

theorem balanceR_eq_balance {k : α} {v : β k} {l r : Impl α β} {hlb hrb hlr} :
    balanceR k v l r hlb hrb hlr = balance k v l r hlb hrb (Or.inr hlr.erase) := by
  rw [balanceR_eq_balanceRErase, balanceRErase_eq_balanceR!,
    balanceR!_eq_balance! hlb hrb hlr.erase, balance_eq_balance!]

theorem balanceLErase_eq_balance {k : α} {v : β k} {l r : Impl α β} {hlb hrb hlr} :
    balanceLErase k v l r hlb hrb hlr = balance k v l r hlb hrb (Or.inl hlr) := by
  rw [balanceLErase_eq_balanceL!,
    balanceL!_eq_balance! hlb hrb hlr, balance_eq_balance!]

theorem balanceRErase_eq_balance {k : α} {v : β k} {l r : Impl α β} {hlb hrb hlr} :
    balanceRErase k v l r hlb hrb hlr = balance k v l r hlb hrb (Or.inr hlr) := by
  rw [balanceRErase_eq_balanceR!,
    balanceR!_eq_balance! hlb hrb hlr, balance_eq_balance!]

theorem balanceL_eq_balanceL! {k : α} {v : β k} {l r : Impl α β} {hlb hrb hlr} :
    balanceL k v l r hlb hrb hlr = balanceL! k v l r := by
  rw [balanceL_eq_balanceLErase, balanceLErase_eq_balanceL!]

theorem balanceR_eq_balanceR! {k : α} {v : β k} {l r : Impl α β} {hlb hrb hlr} :
    balanceR k v l r hlb hrb hlr = balanceR! k v l r := by
  rw [balanceR_eq_balanceRErase, balanceRErase_eq_balanceR!]

theorem minView_k_eq_minView! {k : α} {v : β k} {l r : Impl α β} {hl hr hlr} :
    (minView k v l r hl hr hlr).k = (minView! k v l r).k := by
  induction k, v, l, r, hl, hr, hlr using minView.induct <;> simp_all [minView, minView!]

theorem minView_kv_eq_minView! {k : α} {v : β k} {l r : Impl α β} {hl hr hlr} :
    (⟨(minView k v l r hl hr hlr).k, (minView k v l r hl hr hlr).v⟩ : (a : α) × β a) =
      ⟨(minView! k v l r).k, (minView! k v l r).v⟩ := by
  induction k, v, l, r, hl, hr, hlr using minView.induct <;>
    simp_all [minView, minView!]

theorem minView_tree_impl_eq_minView! {k : α} {v : β k} {l r : Impl α β} {hl hr hlr} :
    (minView k v l r hl hr hlr).tree.impl = (minView! k v l r).tree := by
  induction k, v, l, r, hl, hr, hlr using minView.induct <;>
    simp_all [minView, minView!, balanceRErase_eq_balanceR!]

theorem maxView_k_eq_maxView! {k : α} {v : β k} {l r : Impl α β} {hl hr hlr} :
    (maxView k v l r hl hr hlr).k = (maxView! k v l r).k := by
  induction k, v, l, r, hl, hr, hlr using maxView.induct <;> simp_all [maxView, maxView!]

theorem maxView_kv_eq_maxView! {k : α} {v : β k} {l r : Impl α β} {hl hr hlr} :
    (⟨(maxView k v l r hl hr hlr).k, (maxView k v l r hl hr hlr).v⟩ : (a : α) × β a) =
      ⟨(maxView! k v l r).k, (maxView! k v l r).v⟩ := by
  induction k, v, l, r, hl, hr, hlr using maxView.induct <;>
    simp_all [maxView, maxView!]

theorem maxView_tree_impl_eq_maxView! {k : α} {v : β k} {l r : Impl α β} {hl hr hlr} :
    (maxView k v l r hl hr hlr).tree.impl = (maxView! k v l r).tree := by
  induction k, v, l, r, hl, hr, hlr using maxView.induct <;>
    simp_all [maxView, maxView!, balanceLErase_eq_balanceL!]

theorem glue_eq_glue! {l r : Impl α β} {hl hr hlr} :
    glue l r hl hr hlr = glue! l r := by
  rw [glue.eq_def, glue!.eq_def]
  split
  · simp
  split
  · simp
  split
  · simpa [*, balanceLErase_eq_balanceL!] using balanceL!_pair_congr
      minView_kv_eq_minView! rfl minView_tree_impl_eq_minView!
  · simpa [*, balanceRErase_eq_balanceR!] using balanceR!_pair_congr
      maxView_kv_eq_maxView! maxView_tree_impl_eq_maxView! rfl

theorem insert_eq_insert! [Ord α] {k : α} {v : β k} {l : Impl α β} {h} :
    (insert k v l h).impl = insert! k v l := by
  induction l, h using insert.induct k v <;>
    simp_all [insert, insert!, balanceL_eq_balanceL!, balanceR_eq_balanceR!]

theorem insert_eq_insertₘ [Ord α] {k : α} {v : β k} {l : Impl α β} {h} :
    (insert k v l h).impl = insertₘ k v l h := by
  simp only [insertₘ]
  induction l
  · simp only [insert, updateCell]
    split <;> split <;> simp_all [balanceL_eq_balance, balanceR_eq_balance]
  · simp [insert, updateCell]

theorem insert!_eq_insertₘ [Ord α] {k : α} {v : β k} {l : Impl α β} (h : l.Balanced) :
    insert! k v l = insertₘ k v l h := by
  rw [← insert_eq_insert! (h := h), insert_eq_insertₘ]

theorem erase_eq_erase! [Ord α] {k : α} {t : Impl α β} {h} :
    (erase k t h).impl = erase! k t := by
  induction t, h using erase.induct k <;>
    simp_all [erase, erase!, balanceLErase_eq_balanceL!, balanceRErase_eq_balanceR!,
      glue_eq_glue!]

theorem erase_eq_eraseₘ [Ord α] {k : α} {t : Impl α β} {h} :
    (erase k t h).impl = eraseₘ k t h := by
  simp only [eraseₘ]
  induction t using tree_split_ind_no_gen (compare k) <;>
    simp only [erase, updateCell, *, Cell.empty_inner, balanceRErase_eq_balance, balanceLErase_eq_balance]

theorem erase!_eq_eraseₘ [Ord α] {k : α} {t : Impl α β} (h : t.Balanced) :
    erase! k t = eraseₘ k t h := by
  rw [← erase_eq_erase! (h := h), erase_eq_eraseₘ]

theorem containsThenInsert!_fst_eq_containsThenInsert_fst [Ord α] (t : Impl α β) (htb : t.Balanced) (a : α) (b : β a) :
    (t.containsThenInsert! a b).1 = (t.containsThenInsert a b htb).1 := by
  cases t <;> simp [containsThenInsert, containsThenInsert.size,
    containsThenInsert!, containsThenInsert!.size, insert!_eq_insertₘ, insert_eq_insertₘ, htb]

theorem containsThenInsert!_snd_eq_containsThenInsert_snd [Ord α] (t : Impl α β) (htb : t.Balanced) (a : α) (b : β a) :
    (t.containsThenInsert! a b).2 = (t.containsThenInsert a b htb).2.impl := by
  cases t <;> simp [containsThenInsert, containsThenInsert!, insert!_eq_insertₘ htb,
    insert_eq_insertₘ]

theorem containsThenInsert_snd_eq_insertₘ [Ord α] (t : Impl α β) (htb : t.Balanced) (a : α) (b : β a) :
    (t.containsThenInsert a b htb).2.impl = t.insertₘ a b htb := by
  rw [containsThenInsert, insert_eq_insertₘ]

theorem containsThenInsert!_snd_eq_insertₘ [Ord α] (t : Impl α β) (htb : t.Balanced) (a : α) (b : β a) :
    (t.containsThenInsert! a b).2 = t.insertₘ a b htb := by
  rw [containsThenInsert!_snd_eq_containsThenInsert_snd, containsThenInsert_snd_eq_insertₘ]

theorem insertIfNew_eq_insertIfNew! [Ord α] {k : α} {v : β k} {l : Impl α β} {h} :
    (insertIfNew k v l h).impl = insertIfNew! k v l := by
  simp only [insertIfNew, insertIfNew!]
  split
  · rfl
  · simp [insert_eq_insert!]

theorem containsThenInsertIfNew!_fst_eq_containsThenInsertIfNew_fst [Ord α] (t : Impl α β) (htb : t.Balanced) (a : α) (b : β a) :
    (t.containsThenInsertIfNew! a b).1 = (t.containsThenInsertIfNew a b htb).1 := by
  simp only [containsThenInsertIfNew!, containsThenInsertIfNew]
  split <;> rfl

theorem containsThenInsertIfNew!_snd_eq_containsThenInsertIfNew_snd [Ord α] (t : Impl α β) (htb : t.Balanced) (a : α) (b : β a) :
    (t.containsThenInsertIfNew! a b).2 = (t.containsThenInsertIfNew a b htb).2.impl := by
  simp only [containsThenInsertIfNew!, containsThenInsertIfNew]
  split
  · rfl
  · simp [insert!_eq_insertₘ, insert_eq_insertₘ, htb]

theorem containsThenInsertIfNew_fst_eq_containsₘ [Ord α] [TransOrd α] (t : Impl α β) (htb : t.Balanced)
    (a : α) (b : β a) : (t.containsThenInsertIfNew a b htb).1 = t.containsₘ a := by
  simp only [containsThenInsertIfNew, contains_eq_containsₘ]
  split <;> next h => simp only [h]

theorem containsThenInsertIfNew_snd_eq_insertIfNew [Ord α] (t : Impl α β) (htb : t.Balanced) (a : α) (b : β a) :
    (t.containsThenInsertIfNew a b htb).2 = (t.insertIfNew a b htb) := by
  rw [containsThenInsertIfNew, insertIfNew]
  split <;> rfl

theorem containsThenInsertIfNew!_fst_eq_containsₘ [Ord α] [TransOrd α] (t : Impl α β)
    (a : α) (b : β a) : (t.containsThenInsertIfNew! a b).1 = t.containsₘ a := by
  simp only [containsThenInsertIfNew!, contains_eq_containsₘ]
  split <;> next h => simp only [h]

theorem containsThenInsertIfNew!_snd_eq_insertIfNew! [Ord α] (t : Impl α β) (a : α) (b : β a) :
    (t.containsThenInsertIfNew! a b).2 = t.insertIfNew! a b:= by
  rw [containsThenInsertIfNew!, insertIfNew!]
  split <;> rfl

theorem insertMin_eq_insertMin! [Ord α] {a b} {t : Impl α β} (htb) :
    (t.insertMin a b htb).impl = t.insertMin! a b := by
  fun_cases insertMin!
  · rfl
  · simp only [insertMin, balanceL_eq_balanceL!, insertMin_eq_insertMin! htb.left]

theorem insertMax_eq_insertMax! [Ord α] {a b} {t : Impl α β} (htb) :
    (t.insertMax a b htb).impl = t.insertMax! a b := by
  fun_cases insertMax!
  · rfl
  · simp only [insertMax, balanceR_eq_balanceR!, insertMax_eq_insertMax! htb.right]

theorem link_eq_link! [Ord α] {k v} {l r : Impl α β} (hlb hrb) :
    (link k v l r hlb hrb).impl = link! k v l r := by
  fun_induction link! <;>
    simp [*, link, balanceLErase_eq_balanceL!, balanceRErase_eq_balanceR!, insertMin_eq_insertMin!, insertMax_eq_insertMax!, size]

theorem link2_eq_link2! [Ord α] {l r : Impl α β} (hlb hrb) :
    (link2 l r hlb hrb).impl = link2! l r := by
  fun_induction link2! <;>
    simp [*, link2, balanceLErase_eq_balanceL!, balanceRErase_eq_balanceR!, glue_eq_glue!]

namespace Const

variable {β : Type v}

theorem get?_eq_get?ₘ [Ord α] (k : α) (l : Impl α (fun _ => β)) :
    Const.get? l k = Const.get?ₘ l k := by
  simp only [Const.get?ₘ]
  induction l using tree_split_ind_no_gen (compare k) <;>
    simp only [*, get?, applyCell, Cell.Const.get?, Cell.empty_inner, Cell.ofEq_inner]

theorem get_eq_get? [Ord α] (k : α) (l : Impl α (fun _ => β)) {h} :
    some (get l k h) = get? l k := by
  induction l using tree_split_ind_no_gen (compare k) <;> simp only [*, get, get?] <;> contradiction

theorem get_eq_getₘ [Ord α] (k : α) (l : Impl α (fun _ => β)) {h} (h') :
    get l k h = getₘ l k h' := by
  apply Option.some.inj
  simp [get_eq_get?, get?_eq_get?ₘ, getₘ]

theorem get!_eq_get!ₘ [Ord α] (k : α) [Inhabited β] (l : Impl α (fun _ => β)) :
    get! l k = get!ₘ l k := by
  rw [get!ₘ, get?ₘ]
  induction l using tree_split_ind_no_gen (compare k) <;>
    simp only [*, get!, applyCell, Cell.Const.get?, Cell.ofEq, Option.get!_some]
  · rfl

theorem getD_eq_getDₘ [Ord α] (k : α) (l : Impl α (fun _ => β))
    (fallback : β) : getD l k fallback = getDₘ l k fallback := by
  rw [getDₘ, get?ₘ]
  induction l using tree_split_ind_no_gen (compare k) <;>
    simp only [*, getD, applyCell, Cell.Const.get?, Cell.ofEq, Option.getD_some]
  · rfl

end Const

theorem entryAtIdx?_eq_some_entryAtIdx {t : Impl α β} (htb : t.Balanced) {i : Nat} (h) :
    t.entryAtIdx? i = some (t.entryAtIdx htb i h) := by
  induction t, htb, i, h using entryAtIdx.induct_unfolding <;> simp only [entryAtIdx?, *]

theorem entryAtIdx!_eq_get!_entryAtIdx? {t : Impl α β} {i : Nat} [Inhabited ((a : α) × β a)] :
    t.entryAtIdx! i = (t.entryAtIdx? i).get! := by
  induction t, i using entryAtIdx?.induct_unfolding <;> simp only [entryAtIdx!, *] <;> trivial

theorem entryAtIdxD_eq_getD_entryAtIdx? {t : Impl α β} {i : Nat} {fallback : (a : α) × β a} :
    t.entryAtIdxD i fallback = (t.entryAtIdx? i).getD fallback := by
  induction t, i using entryAtIdx?.induct_unfolding <;> simp only [entryAtIdxD, *] <;> trivial

theorem keyAtIdx?_eq_entryAtIdx? {t : Impl α β} {i : Nat} :
    t.keyAtIdx? i = (t.entryAtIdx? i).map (·.1) := by
  induction t, i using entryAtIdx?.induct_unfolding <;> simp only [keyAtIdx?, *] <;> trivial

theorem keyAtIdx_eq_entryAtIdx_fst {t : Impl α β} (htb : t.Balanced) {i : Nat} {h} :
    t.keyAtIdx htb i h = (t.entryAtIdx htb i h).1 := by
  induction t, htb, i, h using keyAtIdx.induct_unfolding <;> simp only [entryAtIdx, *]

theorem keyAtIdx!_eq_get!_keyAtIdx? [Inhabited α] {t : Impl α β} {i : Nat} :
    t.keyAtIdx! i = (t.keyAtIdx? i).get! := by
  induction t, i using keyAtIdx?.induct_unfolding <;> simp only [keyAtIdx!, *] <;> trivial

theorem keyAtIdxD_eq_getD_keyAtIdx? {t : Impl α β} {i : Nat} {fallback : α} :
    t.keyAtIdxD i fallback = (t.keyAtIdx? i).getD fallback := by
  induction t, i using keyAtIdx?.induct_unfolding <;> simp only [keyAtIdxD, *] <;> trivial

/-- Implementation detail of the tree map -/
def getEntryGE?ₘ [Ord α] (k : α) (t : Impl α β) : Option ((a : α) × β a) :=
  applyPartition (compare k) t fun _ c _ r => c.inner.or r.head?

/-- Implementation detail of the tree map -/
def getEntryGE?ₘ' [Ord α] (k : α) (t : Impl α β) : Option ((a : α) × β a) :=
  t.explore (compare k) none fun
  | _, .lt k' _ v _ => some ⟨k', v⟩
  | base, .eq _ c r => (c.inner.or r.head?).or base
  | base, .gt _ _ _ _ => base

theorem getEntryGE?_eq_getEntryGE?ₘ' [Ord α] (k : α) (t : Impl α β) :
    getEntryGE? k t = getEntryGE?ₘ' k t := by
  rw [getEntryGE?ₘ', getEntryGE?]
  induction t, none using tree_split_ind (compare k) <;> simp [*, getEntryGE?.go, explore]

theorem getEntryGE?_eq_getEntryGE?ₘ [Ord α] (k : α) (t : Impl α β) :
    getEntryGE? k t = getEntryGE?ₘ k t := by
  rw [getEntryGE?_eq_getEntryGE?ₘ', getEntryGE?ₘ', getEntryGE?ₘ, explore_eq_applyPartition] <;> simp

/-- Implementation detail of the tree map -/
def getEntryGT?ₘ [Ord α] (k : α) (t : Impl α β) : Option ((a : α) × β a) :=
  applyPartition (fun k' => (compare k k').then .gt) t fun _ _ _ r => r.head?

/-- Implementation detail of the tree map -/
def getEntryGT?ₘ' [Ord α] (k : α) (t : Impl α β) : Option ((a : α) × β a) :=
  t.explore (fun k' => (compare k k').then .gt) none fun
  | _, .lt k' _ v _ => some ⟨k', v⟩
  | base, .eq _ _ r => r.head?.or base
  | base, .gt _ _ _ _ => base

theorem getEntryGT?_eq_getEntryGT?ₘ' [Ord α] (k : α) (t : Impl α β) :
    getEntryGT? k t = getEntryGT?ₘ' k t := by
  rw [getEntryGT?ₘ', getEntryGT?]
  induction t, none using tree_split_ind (compare k) <;> simp [*, getEntryGT?.go, explore]

theorem getEntryGT?_eq_getEntryGT?ₘ [Ord α] (k : α) (t : Impl α β) :
    getEntryGT? k t = getEntryGT?ₘ k t := by
  rw [getEntryGT?_eq_getEntryGT?ₘ', getEntryGT?ₘ', getEntryGT?ₘ, explore_eq_applyPartition] <;> simp

theorem getEntryLT?_eq_getEntryGT?_reverse [o : Ord α] [TransOrd α] {t : Impl α β} {k : α} :
    getEntryLT? k t = @getEntryGT? α β o.opposite k t.reverse := by
  rw [getEntryLT?, @getEntryGT?.eq_def, Ord.opposite]
  induction t, none using tree_split_ind (compare k) <;>
    simp only [*, getEntryLT?.go, reverse, getEntryGT?.go, OrientedCmp.eq_swap (b := k),
      Ordering.swap]

theorem getEntryLE?_eq_getEntryGE?_reverse [o : Ord α] [TransOrd α] {t : Impl α β} {k : α} :
    getEntryLE? k t = @getEntryGE? α β o.opposite k t.reverse := by
  rw [getEntryLE?, @getEntryGE?.eq_def, Ord.opposite]
  induction t, none using tree_split_ind (compare k) <;>
    simp only [*, getEntryLE?.go, reverse, getEntryGE?.go, OrientedCmp.eq_swap (b := k),
      Ordering.swap]

theorem getEntryGE!_eq_get!_getEntryGE? [Ord α] {t : Impl α β} {k : α} [Inhabited ((a : α) × β a)] :
    t.getEntryGE! k = (t.getEntryGE? k).get! := rfl

theorem getEntryGT!_eq_get!_getEntryGT? [Ord α] {t : Impl α β} {k : α} [Inhabited ((a : α) × β a)] :
    t.getEntryGT! k = (t.getEntryGT? k).get! := rfl

theorem getEntryLE!_eq_get!_getEntryLE? [Ord α] {t : Impl α β} {k : α} [Inhabited ((a : α) × β a)] :
    t.getEntryLE! k = (t.getEntryLE? k).get! := rfl

theorem getEntryLT!_eq_get!_getEntryLT? [Ord α] {t : Impl α β} {k : α} [Inhabited ((a : α) × β a)] :
    t.getEntryLT! k = (t.getEntryLT? k).get! := rfl

theorem getEntryGED_eq_getD_getEntryGE? [Ord α] {t : Impl α β} {k : α} {fallback : (a : α) × β a} :
    t.getEntryGED k fallback = (t.getEntryGE? k).getD fallback := rfl

theorem getEntryGTD_eq_getD_getEntryGT? [Ord α] {t : Impl α β} {k : α} {fallback : (a : α) × β a} :
    t.getEntryGTD k fallback = (t.getEntryGT? k).getD fallback := rfl

theorem getEntryLED_eq_getD_getEntryLE? [Ord α] {t : Impl α β} {k : α} {fallback : (a : α) × β a} :
    t.getEntryLED k fallback = (t.getEntryLE? k).getD fallback := rfl

theorem getEntryLTD_eq_getD_getEntryLT? [Ord α] {t : Impl α β} {k : α} {fallback : (a : α) × β a} :
    t.getEntryLTD k fallback = (t.getEntryLT? k).getD fallback := rfl

theorem getEntryGE?.eq_go [Ord α] (k : α) (x) (t : Impl α β) :
    (getEntryGE? k t).or x = getEntryGE?.go k x t := by
  rw [getEntryGE?]
  induction t, x using tree_split_ind (compare k) <;>
    simp only [go, Option.none_or, Option.some_or, *]
  case _ ih _ => rw [← ih, Option.or_assoc, Option.some_or]

theorem getEntryGT?.eq_go [Ord α] (k : α) (x) (t : Impl α β) :
    (getEntryGT? k t).or x = getEntryGT?.go k x t := by
  rw [getEntryGT?]
  induction t, x using tree_split_ind (compare k) <;>
    simp only [go, Option.none_or, *]
  case _ ih _ => rw [← ih, Option.or_assoc, Option.some_or]

theorem getEntryLE?.eq_go [Ord α] (k : α) (x) (t : Impl α β) :
    (getEntryLE? k t).or x = getEntryLE?.go k x t := by
  rw [getEntryLE?]
  induction t, x using tree_split_ind (compare k) <;>
    simp only [go, Option.none_or, Option.some_or, *]
  case _ ih _ => rw [← ih, Option.or_assoc, Option.some_or]

theorem getEntryLT?.eq_go [Ord α] (k : α) (x) (t : Impl α β) :
    (getEntryLT? k t).or x = getEntryLT?.go k x t := by
  rw [getEntryLT?]
  induction t, x using tree_split_ind (compare k) <;>
    simp only [go, Option.none_or, *]
  case _ ih _ => rw [← ih, Option.or_assoc, Option.some_or]

theorem some_getEntryGE_eq_getEntryGE? [Ord α] [TransOrd α] (k : α) (t : Impl α β) {ho he} :
    some (getEntryGE k t ho he) = getEntryGE? k t := by
  rw [getEntryGE?]; apply of_eq_true
  induction t, none using tree_split_ind (compare k) <;>
    simp only [*, getEntryGE?.go, getEntryGE, getEntryGED, ← Option.or_some,
      getEntryGE?.eq_go] <;> contradiction

theorem some_getEntryGT_eq_getEntryGT? [Ord α] [TransOrd α] (k : α) (t : Impl α β) {ho he} :
    some (getEntryGT k t ho he) = getEntryGT? k t := by
  rw [getEntryGT?]; apply of_eq_true
  induction t, none using tree_split_ind (compare k) <;>
    simp only [*, getEntryGT?.go, getEntryGT, getEntryGTD, ← Option.or_some,
      getEntryGT?.eq_go, ↓reduceDIte, reduceCtorEq] <;> contradiction

theorem some_getEntryLE_eq_getEntryLE? [Ord α] [TransOrd α] (k : α) (t : Impl α β) {ho he} :
    some (getEntryLE k t ho he) = getEntryLE? k t := by
  rw [getEntryLE?]; apply of_eq_true
  induction t, none using tree_split_ind (compare k) <;>
    simp only [*, getEntryLE?.go, getEntryLE, getEntryLED, ← Option.or_some,
      getEntryLE?.eq_go] <;> contradiction

theorem some_getEntryLT_eq_getEntryLT? [Ord α] [TransOrd α] (k : α) (t : Impl α β) {ho he} :
    some (getEntryLT k t ho he) = getEntryLT? k t := by
  rw [getEntryLT?]; apply of_eq_true
  induction t, none using tree_split_ind (compare k) <;>
    simp only [*, getEntryLT?.go, getEntryLT, getEntryLTD, ← Option.or_some,
      getEntryLT?.eq_go, ↓reduceDIte, reduceCtorEq] <;> contradiction

theorem getKeyGE?_eq_getEntryGE? [Ord α] {t : Impl α β} {k : α} :
    getKeyGE? k t = (getEntryGE? k t).map (·.1) := by
  rw [getKeyGE?, getEntryGE?]; symm
  change _ = getKeyGE?.go k (Option.map (·.1) (none : Option ((a : α) × β a))) _
  induction t, none using tree_split_ind (compare k) <;> simp [getKeyGE?.go, getEntryGE?.go, *]

theorem getKeyGT?_eq_getEntryGT? [Ord α] {t : Impl α β} {k : α} :
    getKeyGT? k t = (getEntryGT? k t).map (·.1) := by
  rw [getKeyGT?, getEntryGT?]; symm
  change _ = getKeyGT?.go k (Option.map (·.1) (none : Option ((a : α) × β a))) _
  induction t, none using tree_split_ind (compare k) <;> simp [getKeyGT?.go, getEntryGT?.go, *]

theorem getKeyLE?_eq_getEntryLE? [Ord α] {t : Impl α β} {k : α} :
    getKeyLE? k t = (getEntryLE? k t).map (·.1) := by
  rw [getKeyLE?, getEntryLE?]; symm
  change _ = getKeyLE?.go k (Option.map (·.1) (none : Option ((a : α) × β a))) _
  induction t, none using tree_split_ind (compare k) <;> simp [getKeyLE?.go, getEntryLE?.go, *]

theorem getKeyLT?_eq_getEntryLT? [Ord α] {t : Impl α β} {k : α} :
    getKeyLT? k t = (getEntryLT? k t).map (·.1) := by
  rw [getKeyLT?, getEntryLT?]; symm
  change _ = getKeyLT?.go k (Option.map (·.1) (none : Option ((a : α) × β a))) _
  induction t, none using tree_split_ind (compare k) <;> simp [getKeyLT?.go, getEntryLT?.go, *]

theorem getKeyGE!_eq_get!_getKeyGE? [Ord α] {t : Impl α β} {k : α} [Inhabited α] :
    t.getKeyGE! k = (t.getKeyGE? k).get! := rfl

theorem getKeyGT!_eq_get!_getKeyGT? [Ord α] {t : Impl α β} {k : α} [Inhabited α] :
    t.getKeyGT! k = (t.getKeyGT? k).get! := rfl

theorem getKeyLE!_eq_get!_getKeyLE? [Ord α] {t : Impl α β} {k : α} [Inhabited α] :
    t.getKeyLE! k = (t.getKeyLE? k).get! := rfl

theorem getKeyLT!_eq_get!_getKeyLT? [Ord α] {t : Impl α β} {k : α} [Inhabited α] :
    t.getKeyLT! k = (t.getKeyLT? k).get! := rfl

theorem getKeyGED_eq_getD_getKeyGE? [Ord α] {t : Impl α β} {k fallback : α} :
    t.getKeyGED k fallback = (t.getKeyGE? k).getD fallback := rfl

theorem getKeyGTD_eq_getD_getKeyGT? [Ord α] {t : Impl α β} {k fallback : α} :
    t.getKeyGTD k fallback = (t.getKeyGT? k).getD fallback := rfl

theorem getKeyLED_eq_getD_getKeyLE? [Ord α] {t : Impl α β} {k fallback : α} :
    t.getKeyLED k fallback = (t.getKeyLE? k).getD fallback := rfl

theorem getKeyLTD_eq_getD_getKeyLT? [Ord α] {t : Impl α β} {k fallback : α} :
    t.getKeyLTD k fallback = (t.getKeyLT? k).getD fallback := rfl

theorem getKeyGE_eq_getEntryGE [Ord α] [TransOrd α] {t : Impl α β} {k : α} {hto he} :
    getKeyGE k t hto he = (getEntryGE k t hto he).1 := by
  induction t using tree_split_ind_no_gen (compare k) <;> simp only [getKeyGE, getEntryGE, *]
  · contradiction
  · rw [getKeyGED, getEntryGED, getKeyGE?_eq_getEntryGE?]; symm
    exact (Option.getD_map _ _ _).symm

theorem getKeyGT_eq_getEntryGT [Ord α] [TransOrd α] {t : Impl α β} {k : α} {hto he} :
    getKeyGT k t hto he = (getEntryGT k t hto he).1 := by
  induction t using tree_split_ind_no_gen (compare k) <;>
    simp only [getKeyGT, getEntryGT, *, ↓reduceDIte, reduceCtorEq]
  · contradiction
  · rw [getKeyGTD, getEntryGTD, getKeyGT?_eq_getEntryGT?]; symm
    exact (Option.getD_map _ _ _).symm

theorem getKeyLE_eq_getEntryLE [Ord α] [TransOrd α] {t : Impl α β} {k : α} {hto he} :
    getKeyLE k t hto he = (getEntryLE k t hto he).1 := by
  induction t using tree_split_ind_no_gen (compare k) <;> simp only [getKeyLE, getEntryLE, *]
  · contradiction
  · rw [getKeyLED, getEntryLED, getKeyLE?_eq_getEntryLE?]; symm
    exact (Option.getD_map _ _ _).symm

theorem getKeyLT_eq_getEntryLT [Ord α] [TransOrd α] {t : Impl α β} {k : α} {hto he} :
    getKeyLT k t hto he = (getEntryLT k t hto he).1 := by
  induction t using tree_split_ind_no_gen (compare k) <;>
    simp only [getKeyLT, getEntryLT, *, ↓reduceDIte, reduceCtorEq]
  · contradiction
  · rw [getKeyLTD, getEntryLTD, getKeyLT?_eq_getEntryLT?]; symm
    exact (Option.getD_map _ _ _).symm

namespace Const

variable {β : Type v}

theorem entryAtIdx?_eq_map {t : Impl α fun _ => β} {i : Nat} :
    entryAtIdx? t i = (t.entryAtIdx? i).map (fun x => (x.1, x.2)) := by
  induction t, i using entryAtIdx?.induct_unfolding <;> simp only [Impl.entryAtIdx?, *] <;> rfl

theorem entryAtIdx_eq {t : Impl α fun _ => β} (htb : t.Balanced) {i : Nat} {h} :
    entryAtIdx t htb i h = ((t.entryAtIdx htb i h).1, (t.entryAtIdx htb i h).2) := by
  induction t, htb, i, h using entryAtIdx.induct_unfolding <;> simp only [Impl.entryAtIdx, *]

theorem entryAtIdx!_eq_get!_entryAtIdx? {t : Impl α fun _ => β} {i : Nat} [Inhabited (α × β)] :
    entryAtIdx! t i = (entryAtIdx? t i).get! := by
  induction t, i using entryAtIdx?.induct_unfolding <;> simp only [entryAtIdx!, *] <;> rfl

theorem entryAtIdxD_eq_getD_entryAtIdx? {t : Impl α fun _ => β} {i : Nat} {fallback : α × β} :
    entryAtIdxD t i fallback = (entryAtIdx? t i).getD fallback := by
  induction t, i using entryAtIdx?.induct_unfolding <;> simp only [entryAtIdxD, *] <;> rfl

theorem getEntryGE?_eq_map [Ord α] {t : Impl α fun _ => β} {k : α} :
    getEntryGE? k t = (Impl.getEntryGE? k t).map (fun x => (x.1, x.2)) := by
  rw [getEntryGE?, Impl.getEntryGE?]; symm
  change _ = getEntryGE?.go k (Option.map (fun x => (x.1, x.2)) (none : Option ((_ : α) × β))) _
  induction t, none using tree_split_ind (compare k) <;> simp [getEntryGE?.go, Impl.getEntryGE?.go, *]

theorem getEntryGT?_eq_map [Ord α] {t : Impl α fun _ => β} {k : α} :
    getEntryGT? k t = (Impl.getEntryGT? k t).map (fun x => (x.1, x.2)) := by
  rw [getEntryGT?, Impl.getEntryGT?]; symm
  change _ = getEntryGT?.go k (Option.map (fun x => (x.1, x.2)) (none : Option ((_ : α) × β))) _
  induction t, none using tree_split_ind (compare k) <;> simp [getEntryGT?.go, Impl.getEntryGT?.go, *]

theorem getEntryLE?_eq_map [Ord α] {t : Impl α fun _ => β} {k : α} :
    getEntryLE? k t = (Impl.getEntryLE? k t).map (fun x => (x.1, x.2)) := by
  rw [getEntryLE?, Impl.getEntryLE?]; symm
  change _ = getEntryLE?.go k (Option.map (fun x => (x.1, x.2)) (none : Option ((_ : α) × β))) _
  induction t, none using tree_split_ind (compare k) <;> simp [getEntryLE?.go, Impl.getEntryLE?.go, *]

theorem getEntryLT?_eq_map [Ord α] {t : Impl α fun _ => β} {k : α} :
    getEntryLT? k t = (Impl.getEntryLT? k t).map (fun x => (x.1, x.2)) := by
  rw [getEntryLT?, Impl.getEntryLT?]; symm
  change _ = getEntryLT?.go k (Option.map (fun x => (x.1, x.2)) (none : Option ((_ : α) × β))) _
  induction t, none using tree_split_ind (compare k) <;> simp [getEntryLT?.go, Impl.getEntryLT?.go, *]

theorem getEntryGE!_eq_get!_getEntryGE? [Ord α] {t : Impl α fun _ => β} {k : α} [Inhabited (α × β)] :
    getEntryGE! k t = (getEntryGE? k t).get! := rfl

theorem getEntryGT!_eq_get!_getEntryGT? [Ord α] {t : Impl α fun _ => β} {k : α} [Inhabited (α × β)] :
    getEntryGT! k t = (getEntryGT? k t).get! := rfl

theorem getEntryLE!_eq_get!_getEntryLE? [Ord α] {t : Impl α fun _ => β} {k : α} [Inhabited (α × β)] :
    getEntryLE! k t = (getEntryLE? k t).get! := rfl

theorem getEntryLT!_eq_get!_getEntryLT? [Ord α] {t : Impl α fun _ => β} {k : α} [Inhabited (α × β)] :
    getEntryLT! k t = (getEntryLT? k t).get! := rfl

theorem getEntryGED_eq_getD_getEntryGE? [Ord α] {t : Impl α fun _ => β} {k : α} {fallback : α × β} :
    getEntryGED k t fallback = (getEntryGE? k t).getD fallback := rfl

theorem getEntryGTD_eq_getD_getEntryGT? [Ord α] {t : Impl α fun _ => β} {k : α} {fallback : α × β} :
    getEntryGTD k t fallback = (getEntryGT? k t).getD fallback := rfl

theorem getEntryLED_eq_getD_getEntryLE? [Ord α] {t : Impl α fun _ => β} {k : α} {fallback : α × β} :
    getEntryLED k t fallback = (getEntryLE? k t).getD fallback := rfl

theorem getEntryLTD_eq_getD_getEntryLT? [Ord α] {t : Impl α fun _ => β} {k : α} {fallback : α × β} :
    getEntryLTD k t fallback = (getEntryLT? k t).getD fallback := rfl

theorem getEntryGE_eq [Ord α] [TransOrd α] {t : Impl α fun _ => β} (hto : t.Ordered) {k : α} (he) :
    getEntryGE k t hto he = (letI e := Impl.getEntryGE k t hto he; (e.1, e.2)) := by
  induction t using tree_split_ind_no_gen (compare k) <;> simp only [getEntryGE, Impl.getEntryGE, *]
  · contradiction
  · rename_i l _ _ _
    rw [getEntryGED, Impl.getEntryGED, getEntryGE?_eq_map]
    exact Option.getD_map (fun x => (x.1, x.2)) ⟨_, _⟩ (Impl.getEntryGE? k l)

theorem getEntryGT_eq [Ord α] [TransOrd α] {t : Impl α fun _ => β} (hto : t.Ordered) {k : α} (he) :
    getEntryGT k t hto he = (letI e := Impl.getEntryGT k t hto he; (e.1, e.2)) := by
  induction t using tree_split_ind_no_gen (compare k) <;>
    simp only [getEntryGT, Impl.getEntryGT, *, ↓reduceDIte, reduceCtorEq]
  · contradiction
  · rename_i l _ _ _
    rw [getEntryGTD, Impl.getEntryGTD, getEntryGT?_eq_map]
    exact Option.getD_map (fun x => (x.1, x.2)) ⟨_, _⟩ (Impl.getEntryGT? k l)

theorem getEntryLE_eq [Ord α] [TransOrd α] {t : Impl α fun _ => β} (hto : t.Ordered) {k : α} (he) :
    getEntryLE k t hto he = (letI e := Impl.getEntryLE k t hto he; (e.1, e.2)) := by
  induction t using tree_split_ind_no_gen (compare k) <;> simp only [getEntryLE, Impl.getEntryLE, *]
  · contradiction
  · rename_i r _ _
    rw [getEntryLED, Impl.getEntryLED, getEntryLE?_eq_map]
    exact Option.getD_map (fun x => (x.1, x.2)) ⟨_, _⟩ (Impl.getEntryLE? k r)

theorem getEntryLT_eq [Ord α] [TransOrd α] {t : Impl α fun _ => β} (hto : t.Ordered) {k : α} (he) :
    getEntryLT k t hto he = (letI e := Impl.getEntryLT k t hto he; (e.1, e.2)) := by
  induction t using tree_split_ind_no_gen (compare k) <;>
    simp only [getEntryLT, Impl.getEntryLT, *, ↓reduceDIte, reduceCtorEq]
  · contradiction
  · rename_i r _ _
    rw [getEntryLTD, Impl.getEntryLTD, getEntryLT?_eq_map]
    exact Option.getD_map (fun x => (x.1, x.2)) ⟨_, _⟩ (Impl.getEntryLT? k r)

end Const

end Impl

end Std.DTreeMap.Internal
