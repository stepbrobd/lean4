/-
Copyright (c) 2025 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Init.Data.Nat.Lemmas
import Init.Data.Ord
import Init.Data.RArray
import Init.Grind.CommRing.Basic

namespace Lean.Grind
namespace CommRing

abbrev Var := Nat

inductive Expr where
  | num  (v : Int)
  | var  (i : Var)
  | neg (a : Expr)
  | add  (a b : Expr)
  | sub  (a b : Expr)
  | mul (a b : Expr)
  | pow (a : Expr) (k : Nat)
  deriving Inhabited, BEq

abbrev Context (α : Type u) := RArray α

def Var.denote {α} (ctx : Context α) (v : Var) : α :=
  ctx.get v

def Expr.denote {α} [CommRing α] (ctx : Context α) : Expr → α
  | .add a b  => denote ctx a + denote ctx b
  | .sub a b  => denote ctx a - denote ctx b
  | .mul a b  => denote ctx a * denote ctx b
  | .neg a    => -denote ctx a
  | .num k    => k
  | .var v    => v.denote ctx
  | .pow a k  => denote ctx a ^ k

structure Power where
  x : Var
  k : Nat
  deriving BEq, Repr

instance : LawfulBEq Power where
  eq_of_beq {a} := by cases a <;> intro b <;> cases b <;> simp_all! [BEq.beq]
  rfl := by intro a; cases a <;> simp! [BEq.beq]

def Power.varLt (p₁ p₂ : Power) : Bool :=
  p₁.x.blt p₂.x

def Power.denote {α} [CommRing α] (ctx : Context α) : Power → α
  | {x, k} =>
    match k with
    | 0 => 1
    | 1 => x.denote ctx
    | k => x.denote ctx ^ k

inductive Mon where
  | leaf (p : Power)
  | cons (p : Power) (m : Mon)
  deriving BEq, Repr

instance : LawfulBEq Mon where
  eq_of_beq {a} := by
    induction a <;> intro b <;> cases b <;> simp_all! [BEq.beq]
    next p₁ p₂ => cases p₁ <;> cases p₂ <;> simp <;> intros <;> simp [*]
    next p₁ m₁ p₂ m₂ ih =>
      cases p₁ <;> cases p₂ <;> simp <;> intros <;> simp [*]
      next h => exact ih h
  rfl := by
    intro a
    induction a <;> simp! [BEq.beq]
    assumption

def Mon.denote {α} [CommRing α] (ctx : Context α) : Mon → α
  | .leaf p => p.denote ctx
  | .cons p m => p.denote ctx * denote ctx m

def Mon.denote' {α} [CommRing α] (ctx : Context α) : Mon → α
  | .leaf p => p.denote ctx
  | .cons p m => go (p.denote ctx) m
where
  go (acc : α) : Mon → α
    | .leaf p => acc * p.denote ctx
    | .cons p m => go (acc * p.denote ctx) m

def Mon.ofVar (x : Var) : Mon :=
  .leaf { x, k := 1 }

def Mon.concat (m₁ m₂ : Mon) : Mon :=
  match m₁ with
  | .leaf p => .cons p m₂
  | .cons p m₁ => .cons p (concat m₁ m₂)

def Mon.mulPow (p : Power) (m : Mon) : Mon :=
  match m with
  | .leaf p' =>
    bif p.varLt p' then
      .cons p m
    else bif p'.varLt p then
      .cons p' (.leaf p)
    else
      .leaf { x := p.x, k := p.k + p'.k }
  | .cons p' m =>
    bif p.varLt p' then
      .cons p (.cons p' m)
    else bif p'.varLt p then
      .cons p' (mulPow p m)
    else
      .cons { x := p.x, k := p.k + p'.k } m

def Mon.length : Mon → Nat
  | .leaf _ => 1
  | .cons _ m => 1 + length m

def hugeFuel := 1000000

def Mon.mul (m₁ m₂ : Mon) : Mon :=
  -- We could use `m₁.length + m₂.length` to avoid hugeFuel
  go hugeFuel m₁ m₂
where
  go (fuel : Nat) (m₁ m₂ : Mon) : Mon :=
    match fuel with
    | 0 => concat m₁ m₂
    | fuel + 1 =>
      match m₁, m₂ with
      | m₁, .leaf p => m₁.mulPow p
      | .leaf p, m₂ => m₂.mulPow p
      | .cons p₁ m₁, .cons p₂ m₂ =>
        bif p₁.varLt p₂ then
          .cons p₁ (go fuel m₁ (.cons p₂ m₂))
        else bif p₂.varLt p₁ then
          .cons p₂ (go fuel (.cons p₁ m₁) m₂)
        else
          .cons { x := p₁.x, k := p₁.k + p₂.k } (go fuel m₁ m₂)

def Mon.degree : Mon → Nat
  | .leaf p => p.k
  | .cons p m => p.k + degree m

def Var.revlex (x y : Var) : Ordering :=
  bif x.blt y then .gt
  else bif y.blt x then .lt
  else .eq

def powerRevlex (k₁ k₂ : Nat) : Ordering :=
  bif k₁.blt k₂ then .gt
  else bif k₂.blt k₁ then .lt
  else .eq

def Power.revlex (p₁ p₂ : Power) : Ordering :=
  p₁.x.revlex p₂.x |>.then (powerRevlex p₁.k p₂.k)

def Mon.revlexWF (m₁ m₂ : Mon) : Ordering :=
  match m₁, m₂ with
  | .leaf p₁, .leaf p₂ => p₁.revlex p₂
  | .leaf p₁, .cons p₂ m₂ =>
    bif p₁.x.ble p₂.x  then
      .gt
    else
      revlexWF (.leaf p₁) m₂ |>.then .gt
  | .cons p₁ m₁, .leaf p₂ =>
    bif p₂.x.ble p₁.x then
      .lt
    else
      revlexWF m₁ (.leaf p₂) |>.then .lt
  | .cons p₁ m₁, .cons p₂ m₂ =>
    bif p₁.x == p₂.x then
      revlexWF m₁ m₂ |>.then (powerRevlex p₁.k p₂.k)
    else bif p₁.x.blt p₂.x then
      revlexWF m₁ (.cons p₂ m₂) |>.then .gt
    else
      revlexWF (.cons p₁ m₁) m₂ |>.then .lt

def Mon.revlexFuel (fuel : Nat) (m₁ m₂ : Mon) : Ordering :=
  match fuel with
  | 0 =>
    -- This branch is not reachable in practice, but we add it here
    -- to ensure we can prove helper theorems
    revlexWF m₁ m₂
  | fuel + 1 =>
    match m₁, m₂ with
    | .leaf p₁, .leaf p₂ => p₁.revlex p₂
    | .leaf p₁, .cons p₂ m₂ =>
      bif p₁.x.ble p₂.x  then
        .gt
      else
        revlexFuel fuel (.leaf p₁) m₂ |>.then .gt
    | .cons p₁ m₁, .leaf p₂ =>
      bif p₂.x.ble p₁.x then
        .lt
      else
        revlexFuel fuel m₁ (.leaf p₂) |>.then .lt
    | .cons p₁ m₁, .cons p₂ m₂ =>
      bif p₁.x == p₂.x then
        revlexFuel fuel m₁ m₂ |>.then (powerRevlex p₁.k p₂.k)
      else bif p₁.x.blt p₂.x then
        revlexFuel fuel m₁ (.cons p₂ m₂) |>.then .gt
      else
        revlexFuel fuel (.cons p₁ m₁) m₂ |>.then .lt

def Mon.revlex (m₁ m₂ : Mon) : Ordering :=
  revlexFuel hugeFuel m₁ m₂

def Mon.grevlex (m₁ m₂ : Mon) : Ordering :=
  compare m₁.degree m₂.degree |>.then (revlex m₁ m₂)

inductive Poly where
  | num (k : Int)
  | add (k : Int) (v : Mon) (p : Poly)
  deriving BEq

instance : LawfulBEq Poly where
  eq_of_beq {a} := by
    induction a <;> intro b <;> cases b <;> simp_all! [BEq.beq]
    intro h₁ h₂ h₃
    next m₁ p₁ _ m₂ p₂ ih =>
    replace h₂ : m₁ == m₂ := h₂
    simp [ih h₃, eq_of_beq h₂]
  rfl := by
    intro a
    induction a <;> simp! [BEq.beq]
    next k m p ih =>
    show m == m ∧ p == p
    simp [ih]

def Poly.denote [CommRing α] (ctx : Context α) (p : Poly) : α :=
  match p with
  | .num k => Int.cast k
  | .add k m p => Int.cast k * m.denote ctx + denote ctx p

def Poly.ofMon (m : Mon) : Poly :=
  .add 1 m (.num 0)

def Poly.ofVar (x : Var) : Poly :=
  ofMon (Mon.ofVar x)

def Poly.isSorted : Poly → Bool
  | .num _ => true
  | .add _ _ (.num _) => true
  | .add _ m₁ (.add k m₂ p) => m₁.grevlex m₂ == .gt && (Poly.add k m₂ p).isSorted

def Poly.addConst (p : Poly) (k : Int) : Poly :=
  bif k == 0 then
    p
  else
    go p
where
  go : Poly → Poly
  | .num k' => .num (k' + k)
  | .add k' m p => .add k' m (go p)

def Poly.insert (k : Int) (m : Mon) (p : Poly) : Poly :=
  bif k == 0 then
    p
  else
    go p
where
  go : Poly → Poly
    | .num k' => .add k m (.num k')
    | .add k' m' p =>
      match m.grevlex m' with
      | .eq =>
        let k := k + k'
        bif k == 0 then
          p
        else
          .add k m p
      | .gt => .add k m (.add k' m' p)
      | .lt => .add k' m' (go p)

def Poly.concat (p₁ p₂ : Poly) : Poly :=
  match p₁ with
  | .num k₁ => p₂.addConst k₁
  | .add k m p₁ => .add k m (concat p₁ p₂)

def Poly.mulConst (k : Int) (p : Poly) : Poly :=
  bif k == 0 then
    .num 0
  else bif k == 1 then
    p
  else
    go p
where
  go : Poly → Poly
   | .num k' => .num (k*k')
   | .add k' m p => .add (k*k') m (go p)

def Poly.mulMon (k : Int) (m : Mon) (p : Poly) : Poly :=
  bif k == 0 then
    .num 0
  else
    go p
where
  go : Poly → Poly
   | .num k' =>
     bif k' == 0 then
       .num 0
     else
       .add (k*k') m (.num 0)
   | .add k' m' p => .add (k*k') (m.mul m') (go p)

def Poly.combine (p₁ p₂ : Poly) : Poly :=
  go hugeFuel p₁ p₂
where
  go (fuel : Nat) (p₁ p₂ : Poly) : Poly :=
    match fuel with
    | 0 => p₁.concat p₂
    | fuel + 1 => match p₁, p₂ with
      | .num k₁, .num k₂ => .num (k₁ + k₂)
      | .num k₁, .add k₂ m₂ p₂ => addConst (.add k₂ m₂ p₂) k₁
      | .add k₁ m₁ p₁, .num k₂ => addConst (.add k₁ m₁ p₁) k₂
      | .add k₁ m₁ p₁, .add k₂ m₂ p₂ =>
        match m₁.grevlex m₂ with
        | .eq =>
          let k := k₁ + k₂
          bif k == 0 then
            go fuel p₁ p₂
          else
            .add k m₁ (go fuel p₁ p₂)
        | .gt => .add k₁ m₁ (go fuel p₁ (.add k₂ m₂ p₂))
        | .lt => .add k₂ m₂ (go fuel (.add k₁ m₁ p₁) p₂)

def Poly.mul (p₁ : Poly) (p₂ : Poly) : Poly :=
  go p₁ (.num 0)
where
  go (p₁ : Poly) (acc : Poly) : Poly :=
    match p₁ with
    | .num k => acc.combine (p₂.mulConst k)
    | .add k m p₁ => go p₁ (acc.combine (p₂.mulMon k m))

def Poly.pow (p : Poly) (k : Nat) : Poly :=
  match k with
  | 0 => .num 1
  | 1 => p
  | k+1 => p.mul (pow p k)

def Expr.toPoly : Expr → Poly
  | .num n   => .num n
  | .var x   => Poly.ofVar x
  | .add a b => a.toPoly.combine b.toPoly
  | .mul a b => a.toPoly.mul b.toPoly
  | .neg a   => a.toPoly.mulConst (-1)
  | .sub a b => a.toPoly.combine (b.toPoly.mulConst (-1))
  | .pow a k =>
    match a with
    | .num n => .num (n^k)
    | .var x => Poly.ofMon (.leaf {x, k})
    | _ => a.toPoly.pow k

/-!
**Definitions for the `IsCharP` case**

We considered using a single set of definitions parameterized by `Option c`, but decided against it to avoid
unnecessary kernel‑reduction overhead. Once we can specialize definitions before they reach the kernel,
we can merge the two versions. Until then, the `IsCharP` definitions will carry the `C` suffix.
-/
def Poly.addConstC (p : Poly) (k : Int) (c : Nat) : Poly :=
  match p with
  | .num k' => .num ((k' + k) % c)
  | .add k' m p => .add k' m (addConstC p k c)

def Poly.insertC (k : Int) (m : Mon) (p : Poly) (c : Nat) : Poly :=
  let k := k % c
  bif k == 0 then
    p
  else
    go k p
where
  go (k : Int) : Poly → Poly
    | .num k' => .add k m (.num k')
    | .add k' m' p =>
      match m.grevlex m' with
      | .eq =>
        let k'' := (k + k') % c
        bif k'' == 0 then
          p
        else
          .add k'' m p
      | .gt => .add k m (.add k' m' p)
      | .lt => .add k' m' (go k p)

def Poly.mulConstC (k : Int) (p : Poly) (c : Nat) : Poly :=
  let k := k % c
  bif k == 0 then
    .num 0
  else bif k == 1 then
    p
  else
    go p
where
  go : Poly → Poly
   | .num k' => .num ((k*k') % c)
   | .add k' m p =>
     let k := (k*k') % c
     bif k == 0 then
      go p
    else
      .add k m (go p)

def Poly.mulMonC (k : Int) (m : Mon) (p : Poly) (c : Nat) : Poly :=
  let k := k % c
  bif k == 0 then
    .num 0
  else
    go p
where
  go : Poly → Poly
   | .num k' =>
     let k := (k*k') % c
     bif k == 0 then
       .num 0
     else
       .add k m (.num 0)
   | .add k' m' p =>
     let k := (k*k') % c
     bif k == 0 then
       go p
     else
       .add k (m.mul m') (go p)

def Poly.combineC (p₁ p₂ : Poly) (c : Nat) : Poly :=
  go hugeFuel p₁ p₂
where
  go (fuel : Nat) (p₁ p₂ : Poly) : Poly :=
    match fuel with
    | 0 => p₁.concat p₂
    | fuel + 1 => match p₁, p₂ with
      | .num k₁, .num k₂ => .num ((k₁ + k₂) % c)
      | .num k₁, .add k₂ m₂ p₂ => addConstC (.add k₂ m₂ p₂) k₁ c
      | .add k₁ m₁ p₁, .num k₂ => addConstC (.add k₁ m₁ p₁) k₂ c
      | .add k₁ m₁ p₁, .add k₂ m₂ p₂ =>
        match m₁.grevlex m₂ with
        | .eq =>
          let k := (k₁ + k₂) % c
          bif k == 0 then
            go fuel p₁ p₂
          else
            .add k m₁ (go fuel p₁ p₂)
        | .gt => .add k₁ m₁ (go fuel p₁ (.add k₂ m₂ p₂))
        | .lt => .add k₂ m₂ (go fuel (.add k₁ m₁ p₁) p₂)

def Poly.mulC (p₁ : Poly) (p₂ : Poly) (c : Nat) : Poly :=
  go p₁ (.num 0)
where
  go (p₁ : Poly) (acc : Poly) : Poly :=
    match p₁ with
    | .num k => acc.combineC (p₂.mulConstC k c) c
    | .add k m p₁ => go p₁ (acc.combineC (p₂.mulMonC k m c) c)

def Poly.powC (p : Poly) (k : Nat) (c : Nat) : Poly :=
  match k with
  | 0 => .num 1
  | 1 => p
  | k+1 => p.mulC (powC p k c) c

def Expr.toPolyC (e : Expr) (c : Nat) : Poly :=
  go e
where
  go : Expr → Poly
    | .num n   => .num (n % c)
    | .var x   => Poly.ofVar x
    | .add a b => (go a).combineC (go b) c
    | .mul a b => (go a).mulC (go b) c
    | .neg a   => (go a).mulConstC (-1) c
    | .sub a b => (go a).combineC ((go b).mulConstC (-1) c) c
    | .pow a k =>
      match a with
      | .num n => .num ((n^k) % c)
      | .var x => Poly.ofMon (.leaf {x, k})
      | _ => (go a).powC k c

/-!
Theorems for justifying the procedure for commutative rings in `grind`.
-/

theorem Power.denote_eq {α} [CommRing α] (ctx : Context α) (p : Power)
    : p.denote ctx = p.x.denote ctx ^ p.k := by
  cases p <;> simp [Power.denote] <;> split <;> simp [pow_zero, pow_succ, one_mul]

theorem Mon.denote'_go_eq_denote {α} [CommRing α] (ctx : Context α) (a : α) (m : Mon)
    : denote'.go ctx a m = a * denote ctx m := by
  induction m generalizing a <;> simp [Mon.denote, Mon.denote'.go]
  next p' m ih =>
    simp [Mon.denote] at ih
    rw [ih, mul_assoc]

theorem Mon.denote'_eq_denote {α} [CommRing α] (ctx : Context α) (m : Mon)
    : denote' ctx m = denote ctx m := by
  cases m <;> simp [Mon.denote, Mon.denote']
  next p m => apply denote'_go_eq_denote

theorem Mon.denote_ofVar {α} [CommRing α] (ctx : Context α) (x : Var)
    : denote ctx (ofVar x) = x.denote ctx := by
  simp [denote, ofVar, Power.denote_eq, pow_succ, pow_zero, one_mul]

theorem Mon.denote_concat {α} [CommRing α] (ctx : Context α) (m₁ m₂ : Mon)
    : denote ctx (concat m₁ m₂) = m₁.denote ctx * m₂.denote ctx := by
  induction m₁ <;> simp [concat, denote, *]
  next p₁ m₁ ih => rw [mul_assoc]

private theorem le_of_blt_false {a b : Nat} : a.blt b = false → b ≤ a := by
  intro h; apply Nat.le_of_not_gt; show ¬a < b
  rw [← Nat.blt_eq, h]; simp

private theorem eq_of_blt_false {a b : Nat} : a.blt b = false → b.blt a = false → a = b := by
  intro h₁ h₂
  replace h₁ := le_of_blt_false h₁
  replace h₂ := le_of_blt_false h₂
  exact Nat.le_antisymm h₂ h₁

theorem Mon.denote_mulPow {α} [CommRing α] (ctx : Context α) (p : Power) (m : Mon)
    : denote ctx (mulPow p m) = p.denote ctx * m.denote ctx := by
  fun_induction mulPow <;> simp [mulPow, *]
  next => simp [denote]
  next => simp [denote]; rw [mul_comm]
  next p' h₁ h₂ =>
    have := eq_of_blt_false h₁ h₂
    simp [denote, Power.denote_eq, this, pow_add]
  next => simp [denote]
  next => simp [denote, mul_assoc, mul_comm, mul_left_comm, *]
  next h₁ h₂ =>
    have := eq_of_blt_false h₁ h₂
    simp [denote, Power.denote_eq, pow_add, this, mul_assoc]

theorem Mon.denote_mul {α} [CommRing α] (ctx : Context α) (m₁ m₂ : Mon)
    : denote ctx (mul m₁ m₂) = m₁.denote ctx * m₂.denote ctx := by
  unfold mul
  generalize hugeFuel = fuel
  fun_induction mul.go <;> simp [mul.go, denote, denote_concat, denote_mulPow, *]
  next => rw [mul_comm]
  next => simp [mul_assoc]
  next => simp [mul_assoc, mul_left_comm, mul_comm]
  next h₁ h₂ _ =>
    have := eq_of_blt_false h₁ h₂
    simp [Power.denote_eq, pow_add, mul_assoc, mul_left_comm, mul_comm, this]

theorem Var.eq_of_revlex {x₁ x₂ : Var} : x₁.revlex x₂ = .eq → x₁ = x₂ := by
  simp [revlex, cond_eq_if] <;> split <;> simp
  next h₁ => intro h₂; exact Nat.le_antisymm h₂ (Nat.ge_of_not_lt h₁)

theorem eq_of_powerRevlex {k₁ k₂ : Nat} : powerRevlex k₁ k₂ = .eq → k₁ = k₂ := by
  simp [powerRevlex, cond_eq_if] <;> split <;> simp
  next h₁ => intro h₂; exact Nat.le_antisymm h₂ (Nat.ge_of_not_lt h₁)

theorem Power.eq_of_revlex (p₁ p₂ : Power) : p₁.revlex p₂ = .eq → p₁ = p₂ := by
  cases p₁; cases p₂; simp [revlex, Ordering.then]; split
  next h₁ => intro h₂; simp [Var.eq_of_revlex h₁, eq_of_powerRevlex h₂]
  next h₁ => intro h₂; simp [h₂] at h₁

private theorem then_gt (o : Ordering) : ¬ o.then .gt = .eq := by
  cases o <;> simp [Ordering.then]

private theorem then_lt (o : Ordering) : ¬ o.then .lt = .eq := by
  cases o <;> simp [Ordering.then]

private theorem then_eq (o₁ o₂ : Ordering) : o₁.then o₂ = .eq ↔ o₁ = .eq ∧ o₂ = .eq := by
  cases o₁ <;> cases o₂ <;> simp [Ordering.then]

theorem Mon.eq_of_revlexWF {m₁ m₂ : Mon} : m₁.revlexWF m₂ = .eq → m₁ = m₂ := by
  fun_induction revlexWF <;> simp [revlexWF, *, then_gt, then_lt, then_eq]
  next => apply Power.eq_of_revlex
  next p₁ m₁ p₂ m₂ h ih =>
    cases p₁; cases p₂; intro h₁ h₂; simp [ih h₁, h]
    simp at h h₂
    simp [h, eq_of_powerRevlex h₂]

theorem Mon.eq_of_revlexFuel {fuel : Nat} {m₁ m₂ : Mon} : revlexFuel fuel m₁ m₂ = .eq → m₁ = m₂ := by
  fun_induction revlexFuel <;> simp [revlexFuel, *, then_gt, then_lt, then_eq]
  next => apply eq_of_revlexWF
  next => apply Power.eq_of_revlex
  next p₁ m₁ p₂ m₂ h ih =>
    cases p₁; cases p₂; intro h₁ h₂; simp [ih h₁, h]
    simp at h h₂
    simp [h, eq_of_powerRevlex h₂]

theorem Mon.eq_of_revlex {m₁ m₂ : Mon} : revlex m₁ m₂ = .eq → m₁ = m₂ := by
  apply eq_of_revlexFuel

theorem Mon.eq_of_grevlex {m₁ m₂ : Mon} : grevlex m₁ m₂ = .eq → m₁ = m₂ := by
  simp [grevlex, then_eq]; intro; apply eq_of_revlex

theorem Poly.denote_ofMon {α} [CommRing α] (ctx : Context α) (m : Mon)
    : denote ctx (ofMon m) = m.denote ctx := by
  simp [ofMon, denote, intCast_one, intCast_zero, one_mul, add_zero]

theorem Poly.denote_ofVar {α} [CommRing α] (ctx : Context α) (x : Var)
    : denote ctx (ofVar x) = x.denote ctx := by
  simp [ofVar, denote_ofMon, Mon.denote_ofVar]

theorem Poly.denote_addConst {α} [CommRing α] (ctx : Context α) (p : Poly) (k : Int) : (addConst p k).denote ctx = p.denote ctx + k := by
  simp [addConst, cond_eq_if]; split
  next => simp [*, intCast_zero, add_zero]
  next =>
    fun_induction addConst.go <;> simp [addConst.go, denote, *]
    next => rw [intCast_add]
    next => simp [add_comm, add_left_comm, add_assoc]

theorem Poly.denote_insert {α} [CommRing α] (ctx : Context α) (k : Int) (m : Mon) (p : Poly)
    : (insert k m p).denote ctx = k * m.denote ctx + p.denote ctx := by
  simp [insert, cond_eq_if] <;> split
  next => simp [*, intCast_zero, zero_mul, zero_add]
  next =>
    fun_induction insert.go <;> simp_all +zetaDelta [insert.go, denote, cond_eq_if]
    next h₁ _ h₂ =>
      rw [← add_assoc, Mon.eq_of_grevlex h₁, ← right_distrib, ← intCast_add, h₂, intCast_zero, zero_mul, zero_add]
    next h₁ _ _ =>
      rw [intCast_add, right_distrib, add_assoc, Mon.eq_of_grevlex h₁]
    next =>
      rw [add_left_comm]

theorem Poly.denote_concat {α} [CommRing α] (ctx : Context α) (p₁ p₂ : Poly)
    : (concat p₁ p₂).denote ctx = p₁.denote ctx + p₂.denote ctx := by
  fun_induction concat <;> simp [concat, *, denote_addConst, denote]
  next => rw [add_comm]
  next => rw [add_assoc]

theorem Poly.denote_mulConst {α} [CommRing α] (ctx : Context α) (k : Int) (p : Poly)
    : (mulConst k p).denote ctx = k * p.denote ctx := by
  simp [mulConst, cond_eq_if] <;> split
  next => simp [denote, *, intCast_zero, zero_mul]
  next =>
    split <;> try simp [*, intCast_one, one_mul]
    fun_induction mulConst.go <;> simp [mulConst.go, denote, *]
    next => rw [intCast_mul]
    next => rw [intCast_mul, left_distrib, mul_assoc]

theorem Poly.denote_mulMon {α} [CommRing α] (ctx : Context α) (k : Int) (m : Mon) (p : Poly)
    : (mulMon k m p).denote ctx = k * m.denote ctx * p.denote ctx := by
  simp [mulMon, cond_eq_if] <;> split
  next => simp [denote, *, intCast_zero, zero_mul]
  next =>
    fun_induction mulMon.go <;> simp [mulMon.go, denote, *]
    next h => simp +zetaDelta at h; simp [*, intCast_zero, mul_zero]
    next => simp [intCast_mul, intCast_zero, add_zero, mul_comm, mul_left_comm, mul_assoc]
    next => simp [Mon.denote_mul, intCast_mul, left_distrib, mul_comm, mul_left_comm, mul_assoc]

theorem Poly.denote_combine {α} [CommRing α] (ctx : Context α) (p₁ p₂ : Poly)
    : (combine p₁ p₂).denote ctx = p₁.denote ctx + p₂.denote ctx := by
  unfold combine; generalize hugeFuel = fuel
  fun_induction combine.go
    <;> simp [combine.go, *, denote_concat, denote_addConst, denote, intCast_add, cond_eq_if, add_comm, add_left_comm, add_assoc]
  next hg _ h _ =>
    simp +zetaDelta at h; simp [*]
    rw [← add_assoc, Mon.eq_of_grevlex hg, ← right_distrib, ← intCast_add, h, intCast_zero, zero_mul, zero_add]
  next hg _ h _ =>
    simp +zetaDelta at h; simp [*, denote, intCast_add]
    rw [right_distrib, Mon.eq_of_grevlex hg, add_assoc]

theorem Poly.denote_mul_go {α} [CommRing α] (ctx : Context α) (p₁ p₂ acc : Poly)
    : (mul.go p₂ p₁ acc).denote ctx = acc.denote ctx + p₁.denote ctx * p₂.denote ctx := by
  fun_induction mul.go
    <;> simp [mul.go, denote_combine, denote_mulConst, denote, *, right_distrib, denote_mulMon, add_assoc]

theorem Poly.denote_mul {α} [CommRing α] (ctx : Context α) (p₁ p₂ : Poly)
    : (mul p₁ p₂).denote ctx = p₁.denote ctx * p₂.denote ctx := by
  simp [mul, denote_mul_go, denote, intCast_zero, zero_add]

theorem Poly.denote_pow {α} [CommRing α] (ctx : Context α) (p : Poly) (k : Nat)
   : (pow p k).denote ctx = p.denote ctx ^ k := by
 fun_induction pow <;> simp [pow, denote, intCast_one, pow_zero]
 next => simp [pow_succ, pow_zero, one_mul]
 next => simp [denote_mul, *, pow_succ, mul_comm]

theorem Expr.denote_toPoly {α} [CommRing α] (ctx : Context α) (e : Expr)
   : e.toPoly.denote ctx = e.denote ctx := by
  fun_induction toPoly
    <;> simp [toPoly, denote, Poly.denote, Poly.denote_ofVar, Poly.denote_combine,
          Poly.denote_mul, Poly.denote_mulConst, Poly.denote_pow, *]
  next => rw [intCast_neg, neg_mul, intCast_one, one_mul]
  next => rw [intCast_neg, neg_mul, intCast_one, one_mul, sub_eq_add_neg]
  next => rw [intCast_pow]
  next => simp [Poly.denote_ofMon, Mon.denote, Power.denote_eq]

theorem Expr.eq_of_toPoly_eq {α} [CommRing α] (ctx : Context α) (a b : Expr) (h : a.toPoly == b.toPoly) : a.denote ctx = b.denote ctx := by
  have h := congrArg (Poly.denote ctx) (eq_of_beq h)
  simp [denote_toPoly] at h
  assumption

theorem Poly.denote_addConstC {α c} [CommRing α] [IsCharP α c] (ctx : Context α) (p : Poly) (k : Int) : (addConstC p k c).denote ctx = p.denote ctx + k := by
  fun_induction addConstC <;> simp [addConstC, denote, *]
  next => rw [IsCharP.intCast_emod, intCast_add]
  next => simp [add_comm, add_left_comm, add_assoc]

theorem Poly.denote_insertC {α c} [CommRing α] [IsCharP α c] (ctx : Context α) (k : Int) (m : Mon) (p : Poly)
    : (insertC k m p c).denote ctx = k * m.denote ctx + p.denote ctx := by
  simp [insertC, cond_eq_if] <;> split
  next =>
    rw [← IsCharP.intCast_emod (p := c)]
    simp +zetaDelta [*, intCast_zero, zero_mul, zero_add]
  next =>
    fun_induction insertC.go <;> simp_all +zetaDelta [insertC.go, denote, cond_eq_if]
    next h₁ _ h₂ => rw [IsCharP.intCast_emod]
    next h₁ _ h₂ =>
      rw [← add_assoc, Mon.eq_of_grevlex h₁, ← right_distrib, ← intCast_add, ← IsCharP.intCast_emod (p := c), h₂,
          intCast_zero, zero_mul, zero_add]
    next h₁ _ _ =>
      rw [IsCharP.intCast_emod, intCast_add, right_distrib, add_assoc, Mon.eq_of_grevlex h₁]
    next => rw [IsCharP.intCast_emod]
    next => rw [add_left_comm]

theorem Poly.denote_mulConstC {α c} [CommRing α] [IsCharP α c] (ctx : Context α) (k : Int) (p : Poly)
    : (mulConstC k p c).denote ctx = k * p.denote ctx := by
  simp [mulConstC, cond_eq_if] <;> split
  next =>
    rw [← IsCharP.intCast_emod (p := c)]
    simp [denote, *, intCast_zero, zero_mul]
  next =>
    split
    next =>
      rw [← IsCharP.intCast_emod (p := c)]
      simp [*, intCast_one, one_mul]
    next =>
      fun_induction mulConstC.go <;> simp [mulConstC.go, denote, IsCharP.intCast_emod, cond_eq_if, *]
      next => rw [intCast_mul]
      next h _ =>
        simp +zetaDelta at h; simp [*]
        rw [left_distrib, ← mul_assoc, ← intCast_mul, ← IsCharP.intCast_emod (x := k * _) (p := c),
            h, intCast_zero, zero_mul, zero_add]
      next h _ =>
        simp +zetaDelta at h
        simp [*, denote, IsCharP.intCast_emod, intCast_mul, mul_assoc, left_distrib]

theorem Poly.denote_mulMonC {α c} [CommRing α] [IsCharP α c] (ctx : Context α) (k : Int) (m : Mon) (p : Poly)
    : (mulMonC k m p c).denote ctx = k * m.denote ctx * p.denote ctx := by
  simp [mulMonC, cond_eq_if] <;> split
  next =>
    rw [← IsCharP.intCast_emod (p := c)]
    simp [denote, *, intCast_zero, zero_mul]
  next =>
    fun_induction mulMonC.go <;> simp [mulMonC.go, denote, *, cond_eq_if]
    next h =>
      simp +zetaDelta at h; simp [*, denote]
      rw [mul_assoc, mul_left_comm, ← intCast_mul, ← IsCharP.intCast_emod (x := k * _) (p := c), h]
      simp [intCast_zero, mul_zero]
    next h =>
      simp +zetaDelta at h; simp [*, denote, IsCharP.intCast_emod]
      simp [intCast_mul, intCast_zero, add_zero, mul_comm, mul_left_comm, mul_assoc]
    next h _ =>
      simp +zetaDelta at h; simp [*, denote, left_distrib]
      rw [mul_left_comm]
      conv => rhs; rw [← mul_assoc, ← mul_assoc, ← intCast_mul, ← IsCharP.intCast_emod (p := c)]
      rw [Int.mul_comm] at h
      simp [h, intCast_zero, zero_mul, zero_add]
    next h _ =>
      simp +zetaDelta at h
      simp [*, denote, IsCharP.intCast_emod, Mon.denote_mul, intCast_mul, left_distrib,
        mul_comm, mul_left_comm, mul_assoc]

theorem Poly.denote_combineC {α c} [CommRing α] [IsCharP α c] (ctx : Context α) (p₁ p₂ : Poly)
    : (combineC p₁ p₂ c).denote ctx = p₁.denote ctx + p₂.denote ctx := by
  unfold combineC; generalize hugeFuel = fuel
  fun_induction combineC.go
    <;> simp [combineC.go, *, denote_concat, denote_addConstC, denote, intCast_add,
          cond_eq_if, add_comm, add_left_comm, add_assoc, IsCharP.intCast_emod]
  next hg _ h _ =>
    simp +zetaDelta at h; simp [*]
    rw [← add_assoc, Mon.eq_of_grevlex hg, ← right_distrib, ← intCast_add,
      ← IsCharP.intCast_emod (p := c),
      h, intCast_zero, zero_mul, zero_add]
  next hg _ h _ =>
    simp +zetaDelta at h; simp [*, denote, intCast_add, IsCharP.intCast_emod]
    rw [right_distrib, Mon.eq_of_grevlex hg, add_assoc]

theorem Poly.denote_mulC_go {α c} [CommRing α] [IsCharP α c] (ctx : Context α) (p₁ p₂ acc : Poly)
    : (mulC.go p₂ c p₁ acc).denote ctx = acc.denote ctx + p₁.denote ctx * p₂.denote ctx := by
  fun_induction mulC.go
    <;> simp [mulC.go, denote_combineC, denote_mulConstC, denote, *, right_distrib, denote_mulMonC, add_assoc]

theorem Poly.denote_mulC {α c} [CommRing α] [IsCharP α c] (ctx : Context α) (p₁ p₂ : Poly)
    : (mulC p₁ p₂ c).denote ctx = p₁.denote ctx * p₂.denote ctx := by
  simp [mulC, denote_mulC_go, denote, intCast_zero, zero_add]

theorem Poly.denote_powC {α c} [CommRing α] [IsCharP α c] (ctx : Context α) (p : Poly) (k : Nat)
   : (powC p k c).denote ctx = p.denote ctx ^ k := by
 fun_induction powC <;> simp [powC, denote, intCast_one, pow_zero]
 next => simp [pow_succ, pow_zero, one_mul]
 next => simp [denote_mulC, *, pow_succ, mul_comm]

theorem Expr.denote_toPolyC {α c} [CommRing α] [IsCharP α c] (ctx : Context α) (e : Expr)
   : (e.toPolyC c).denote ctx = e.denote ctx := by
  unfold toPolyC
  fun_induction toPolyC.go
    <;> simp [toPolyC.go, denote, Poly.denote, Poly.denote_ofVar, Poly.denote_combineC,
          Poly.denote_mulC, Poly.denote_mulConstC, Poly.denote_powC, *]
  next => rw [IsCharP.intCast_emod]
  next => rw [intCast_neg, neg_mul, intCast_one, one_mul]
  next => rw [intCast_neg, neg_mul, intCast_one, one_mul, sub_eq_add_neg]
  next => rw [IsCharP.intCast_emod, intCast_pow]
  next => simp [Poly.denote_ofMon, Mon.denote, Power.denote_eq]

theorem Expr.eq_of_toPolyC_eq {α c} [CommRing α] [IsCharP α c] (ctx : Context α) (a b : Expr)
    (h : a.toPolyC c == b.toPolyC c) : a.denote ctx = b.denote ctx := by
  have h := congrArg (Poly.denote ctx) (eq_of_beq h)
  simp [denote_toPolyC] at h
  assumption

end CommRing
end Lean.Grind
