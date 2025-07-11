/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Init.Control.Lawful.Basic

public section

set_option linter.missingDocs true

/-!
The State monad transformer using CPS style.
-/

/--
An alternative implementation of a state monad transformer that internally uses continuation passing
style instead of tuples.
-/
@[expose] def StateCpsT (σ : Type u) (m : Type u → Type v) (α : Type u) := (δ : Type u) → σ → (α → σ → m δ) → m δ

namespace StateCpsT

variable {α σ : Type u} {m : Type u → Type v}

/--
Runs a stateful computation that's represented using continuation passing style by providing it with
an initial state and a continuation.
-/
@[always_inline, inline, expose]
def runK (x : StateCpsT σ m α) (s : σ) (k : α → σ → m β) : m β :=
  x _ s k

/--
Executes an action from a monad with added state in the underlying monad `m`. Given an initial
state, it returns a value paired with the final state.

While the state is internally represented in continuation passing style, the resulting value is the
same as for a non-CPS state monad.
-/
@[always_inline, inline, expose]
def run [Monad m] (x : StateCpsT σ m α) (s : σ) : m (α × σ) :=
  runK x s (fun a s => pure (a, s))

/--
Executes an action from a monad with added state in the underlying monad `m`. Given an initial
state, it returns a value, discarding the final state.
-/
@[always_inline, inline, expose]
def run' [Monad m] (x : StateCpsT σ m α) (s : σ) : m α :=
  runK x s (fun a _ => pure a)

@[always_inline]
instance : Monad (StateCpsT σ m) where
  map  f x := fun δ s k => x δ s fun a s => k (f a) s
  pure a   := fun _ s k => k a s
  bind x f := fun δ s k => x δ s fun a s => f a δ s k

instance : LawfulMonad (StateCpsT σ m) := by
  refine LawfulMonad.mk' _ ?_ ?_ ?_ <;> intros <;> rfl

@[always_inline]
instance : MonadStateOf σ (StateCpsT σ m) where
  get   := fun _ s k => k s s
  set s := fun _ _ k => k ⟨⟩ s
  modifyGet f := fun _ s k => let (a, s) := f s; k a s

/--
Runs an action from the underlying monad in the monad with state. The state is not modified.

This function is typically implicitly accessed via a `MonadLiftT` instance as part of [automatic
lifting](lean-manual://section/monad-lifting).
-/
@[always_inline, inline, expose]
protected def lift [Monad m] (x : m α) : StateCpsT σ m α :=
  fun _ s k => x >>= (k . s)

instance [Monad m] : MonadLift m (StateCpsT σ m) where
  monadLift := StateCpsT.lift

@[simp] theorem runK_pure (a : α) (s : σ) (k : α → σ → m β) : (pure a : StateCpsT σ m α).runK s k = k a s := rfl

@[simp] theorem runK_get (s : σ) (k : σ → σ → m β) : (get : StateCpsT σ m σ).runK s k = k s s := rfl

@[simp] theorem runK_set (s s' : σ) (k : PUnit → σ → m β) : (set s' : StateCpsT σ m PUnit).runK s k = k ⟨⟩ s' := rfl

@[simp] theorem runK_modify (f : σ → σ) (s : σ) (k : PUnit → σ → m β) : (modify f : StateCpsT σ m PUnit).runK s k = k ⟨⟩ (f s) := rfl

@[simp] theorem runK_lift [Monad m] (x : m α) (s : σ) (k : α → σ → m β) : (StateCpsT.lift x : StateCpsT σ m α).runK s k = x >>= (k . s) := rfl

@[simp] theorem runK_monadLift [Monad m] [MonadLiftT n m] (x : n α) (s : σ) (k : α → σ → m β)
    : (monadLift x : StateCpsT σ m α).runK s k = (monadLift x : m α) >>= (k . s) := rfl

@[simp] theorem runK_bind_pure (a : α) (f : α → StateCpsT σ m β) (s : σ) (k : β → σ → m γ) : (pure a >>= f).runK s k = (f a).runK s k := rfl

@[simp] theorem runK_bind_lift [Monad m] (x : m α) (f : α → StateCpsT σ m β) (s : σ) (k : β → σ → m γ)
    : (StateCpsT.lift x >>= f).runK s k = x >>= fun a => (f a).runK s k := rfl

@[simp] theorem runK_bind_get (f : σ → StateCpsT σ m β) (s : σ) (k : β → σ → m γ) : (get >>= f).runK s k = (f s).runK s k := rfl

@[simp] theorem runK_bind_set (f : PUnit → StateCpsT σ m β) (s s' : σ) (k : β → σ → m γ) : (set s' >>= f).runK s k = (f ⟨⟩).runK s' k := rfl

@[simp] theorem runK_bind_modify (f : σ → σ) (g : PUnit → StateCpsT σ m β) (s : σ) (k : β → σ → m γ) : (modify f >>= g).runK s k = (g ⟨⟩).runK (f s) k := rfl

@[simp] theorem run_eq [Monad m] (x : StateCpsT σ m α) (s : σ) : x.run s = x.runK s (fun a s => pure (a, s)) := rfl

@[simp] theorem run'_eq [Monad m] (x : StateCpsT σ m α) (s : σ) : x.run' s = x.runK s (fun a _ => pure a) := rfl

end StateCpsT
