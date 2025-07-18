// Lean compiler output
// Module: Lean.Compiler.IR.LiveVars
// Imports: Lean.Compiler.IR.Basic Lean.Compiler.IR.FreeVars
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectVar___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_skip(lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArgs___closed__0;
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_IR_LiveVars_collectExpr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at___Lean_IR_IsLive_visitFnBody_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_accumulate_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitFnBody(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_RBNode_setBlack___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_FnBody_hasLiveVar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_accumulate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LiveVars_collectFnBody___lam__0(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_RBNode_appendTrees___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_mkLiveVarSet(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectVar___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitArgs___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitVar___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_RBNode_erase___at___Lean_IR_LocalContext_eraseJoinPointDecl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_RBNode_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_updateLiveVars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArgs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindParams_spec__0(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_RBNode_balRight___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LiveVars_updateJPLiveVarMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_skip___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LiveVars_updateJPLiveVarMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitFnBody___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindParams___boxed(lean_object*, lean_object*);
uint8_t l_Lean_RBNode_isBlack___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitJP___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArgs(lean_object*, lean_object*);
uint8_t l_Lean_IR_HasIndex_visitArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_RBNode_isRed___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitJP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at___Lean_IR_IsLive_visitFnBody_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitExpr___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_HasIndex_visitArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindParams(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitExpr(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_IR_HasIndex_visitExpr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_hasLiveVar___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitArg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LiveVars_collectFnBody(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_RBNode_balLeft___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitArgs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getJPBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_collectLiveVars(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitVar(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_nat_dec_eq(x_1, x_2);
x_5 = lean_box(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_IsLive_visitVar(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitJP(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_nat_dec_eq(x_1, x_2);
x_5 = lean_box(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitJP___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_IsLive_visitJP(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Lean_IR_HasIndex_visitArg(x_1, x_2);
x_5 = lean_box(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_IsLive_visitArg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Lean_IR_HasIndex_visitArgs(x_1, x_2);
x_5 = lean_box(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitArgs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_IsLive_visitArgs(x_1, x_2, x_3);
lean_dec_ref(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Lean_IR_HasIndex_visitExpr(x_1, x_2);
x_5 = lean_box(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitExpr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_IsLive_visitExpr(x_1, x_2, x_3);
lean_dec_ref(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at___Lean_IR_IsLive_visitFnBody_spec__0(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
uint8_t x_7; lean_object* x_8; lean_object* x_22; 
x_7 = 1;
x_22 = lean_array_uget(x_2, x_3);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec_ref(x_22);
x_24 = l_Lean_IR_IsLive_visitFnBody(x_1, x_23, x_5);
x_8 = x_24;
goto block_21;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
lean_dec_ref(x_22);
x_26 = l_Lean_IR_IsLive_visitFnBody(x_1, x_25, x_5);
x_8 = x_26;
goto block_21;
}
block_21:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; size_t x_12; size_t x_13; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec_ref(x_8);
x_12 = 1;
x_13 = lean_usize_add(x_3, x_12);
x_3 = x_13;
x_5 = x_11;
goto _start;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_8);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_8, 0);
lean_dec(x_16);
x_17 = lean_box(x_7);
lean_ctor_set(x_8, 0, x_17);
return x_8;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_dec(x_8);
x_19 = lean_box(x_7);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
}
}
else
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; 
x_27 = 0;
x_28 = lean_box(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_5);
return x_29;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitFnBody(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_2, 2);
lean_inc_ref(x_12);
x_13 = lean_ctor_get(x_2, 3);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_Lean_IR_HasIndex_visitExpr(x_1, x_12);
lean_dec_ref(x_12);
if (x_14 == 0)
{
x_2 = x_13;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_13);
x_16 = lean_box(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_3);
return x_17;
}
}
case 1:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_2, 2);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 3);
lean_inc(x_19);
lean_dec(x_2);
x_20 = l_Lean_IR_IsLive_visitFnBody(x_1, x_18, x_3);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec_ref(x_20);
x_2 = x_19;
x_3 = x_23;
goto _start;
}
else
{
lean_dec(x_19);
return x_20;
}
}
case 2:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_2, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_2, 2);
lean_inc(x_26);
x_27 = lean_ctor_get(x_2, 3);
lean_inc(x_27);
lean_dec(x_2);
x_28 = lean_nat_dec_eq(x_1, x_25);
lean_dec(x_25);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = l_Lean_IR_HasIndex_visitArg(x_1, x_26);
lean_dec(x_26);
if (x_29 == 0)
{
x_2 = x_27;
goto _start;
}
else
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_27);
x_31 = lean_box(x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_3);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_27);
lean_dec(x_26);
x_33 = lean_box(x_28);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_3);
return x_34;
}
}
case 3:
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_ctor_get(x_2, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_2, 2);
lean_inc(x_36);
lean_dec(x_2);
x_37 = lean_nat_dec_eq(x_1, x_35);
lean_dec(x_35);
if (x_37 == 0)
{
x_2 = x_36;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_36);
x_39 = lean_box(x_37);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_3);
return x_40;
}
}
case 4:
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = lean_ctor_get(x_2, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_2, 2);
lean_inc(x_42);
x_43 = lean_ctor_get(x_2, 3);
lean_inc(x_43);
lean_dec(x_2);
x_44 = lean_nat_dec_eq(x_1, x_41);
lean_dec(x_41);
if (x_44 == 0)
{
uint8_t x_45; 
x_45 = lean_nat_dec_eq(x_1, x_42);
lean_dec(x_42);
if (x_45 == 0)
{
x_2 = x_43;
goto _start;
}
else
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_43);
x_47 = lean_box(x_45);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_3);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_43);
lean_dec(x_42);
x_49 = lean_box(x_44);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_3);
return x_50;
}
}
case 5:
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_51 = lean_ctor_get(x_2, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_2, 3);
lean_inc(x_52);
x_53 = lean_ctor_get(x_2, 5);
lean_inc(x_53);
lean_dec(x_2);
x_54 = lean_nat_dec_eq(x_1, x_51);
lean_dec(x_51);
if (x_54 == 0)
{
uint8_t x_55; 
x_55 = lean_nat_dec_eq(x_1, x_52);
lean_dec(x_52);
if (x_55 == 0)
{
x_2 = x_53;
goto _start;
}
else
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_53);
x_57 = lean_box(x_55);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_3);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_53);
lean_dec(x_52);
x_59 = lean_box(x_54);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_3);
return x_60;
}
}
case 8:
{
uint8_t x_61; 
x_61 = !lean_is_exclusive(x_2);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_62 = lean_ctor_get(x_2, 0);
x_63 = lean_ctor_get(x_2, 1);
x_64 = lean_nat_dec_eq(x_1, x_62);
lean_dec(x_62);
if (x_64 == 0)
{
lean_free_object(x_2);
x_2 = x_63;
goto _start;
}
else
{
lean_object* x_66; 
lean_dec(x_63);
x_66 = lean_box(x_64);
lean_ctor_set_tag(x_2, 0);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_66);
return x_2;
}
}
else
{
lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_67 = lean_ctor_get(x_2, 0);
x_68 = lean_ctor_get(x_2, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_2);
x_69 = lean_nat_dec_eq(x_1, x_67);
lean_dec(x_67);
if (x_69 == 0)
{
x_2 = x_68;
goto _start;
}
else
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_68);
x_71 = lean_box(x_69);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_3);
return x_72;
}
}
}
case 9:
{
lean_object* x_73; 
x_73 = lean_ctor_get(x_2, 1);
lean_inc(x_73);
lean_dec(x_2);
x_2 = x_73;
goto _start;
}
case 10:
{
lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_75 = lean_ctor_get(x_2, 1);
lean_inc(x_75);
x_76 = lean_ctor_get(x_2, 3);
lean_inc_ref(x_76);
lean_dec(x_2);
x_77 = lean_nat_dec_eq(x_1, x_75);
lean_dec(x_75);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_78 = lean_unsigned_to_nat(0u);
x_79 = lean_array_get_size(x_76);
x_80 = lean_nat_dec_lt(x_78, x_79);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
lean_dec(x_79);
lean_dec_ref(x_76);
x_81 = lean_box(x_77);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_3);
return x_82;
}
else
{
if (x_80 == 0)
{
lean_object* x_83; lean_object* x_84; 
lean_dec(x_79);
lean_dec_ref(x_76);
x_83 = lean_box(x_77);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_3);
return x_84;
}
else
{
size_t x_85; size_t x_86; lean_object* x_87; 
x_85 = 0;
x_86 = lean_usize_of_nat(x_79);
lean_dec(x_79);
x_87 = l_Array_anyMUnsafe_any___at___Lean_IR_IsLive_visitFnBody_spec__0(x_1, x_76, x_85, x_86, x_3);
lean_dec_ref(x_76);
return x_87;
}
}
}
else
{
lean_object* x_88; lean_object* x_89; 
lean_dec_ref(x_76);
x_88 = lean_box(x_77);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_3);
return x_89;
}
}
case 11:
{
lean_object* x_90; uint8_t x_91; lean_object* x_92; lean_object* x_93; 
x_90 = lean_ctor_get(x_2, 0);
lean_inc(x_90);
lean_dec(x_2);
x_91 = l_Lean_IR_HasIndex_visitArg(x_1, x_90);
lean_dec(x_90);
x_92 = lean_box(x_91);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_3);
return x_93;
}
case 12:
{
uint8_t x_94; 
x_94 = !lean_is_exclusive(x_2);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; uint8_t x_97; lean_object* x_98; 
x_95 = lean_ctor_get(x_2, 0);
x_96 = lean_ctor_get(x_2, 1);
x_97 = l_Lean_IR_HasIndex_visitArgs(x_1, x_96);
lean_dec_ref(x_96);
x_98 = lean_box(x_97);
lean_inc(x_3);
lean_ctor_set_tag(x_2, 0);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_98);
if (x_97 == 0)
{
lean_object* x_99; 
x_99 = l_Lean_IR_LocalContext_getJPBody(x_3, x_95);
if (lean_obj_tag(x_99) == 0)
{
lean_dec(x_95);
lean_dec(x_3);
return x_2;
}
else
{
lean_object* x_100; lean_object* x_101; 
lean_dec_ref(x_2);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
lean_dec(x_99);
x_101 = l_Lean_RBNode_erase___at___Lean_IR_LocalContext_eraseJoinPointDecl_spec__0___redArg(x_95, x_3);
lean_dec(x_95);
x_2 = x_100;
x_3 = x_101;
goto _start;
}
}
else
{
lean_dec(x_95);
lean_dec(x_3);
return x_2;
}
}
else
{
lean_object* x_103; lean_object* x_104; uint8_t x_105; lean_object* x_106; lean_object* x_107; 
x_103 = lean_ctor_get(x_2, 0);
x_104 = lean_ctor_get(x_2, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_2);
x_105 = l_Lean_IR_HasIndex_visitArgs(x_1, x_104);
lean_dec_ref(x_104);
x_106 = lean_box(x_105);
lean_inc(x_3);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_3);
if (x_105 == 0)
{
lean_object* x_108; 
x_108 = l_Lean_IR_LocalContext_getJPBody(x_3, x_103);
if (lean_obj_tag(x_108) == 0)
{
lean_dec(x_103);
lean_dec(x_3);
return x_107;
}
else
{
lean_object* x_109; lean_object* x_110; 
lean_dec_ref(x_107);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
lean_dec(x_108);
x_110 = l_Lean_RBNode_erase___at___Lean_IR_LocalContext_eraseJoinPointDecl_spec__0___redArg(x_103, x_3);
lean_dec(x_103);
x_2 = x_109;
x_3 = x_110;
goto _start;
}
}
else
{
lean_dec(x_103);
lean_dec(x_3);
return x_107;
}
}
}
case 13:
{
uint8_t x_112; lean_object* x_113; lean_object* x_114; 
x_112 = 0;
x_113 = lean_box(x_112);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_3);
return x_114;
}
default: 
{
lean_object* x_115; lean_object* x_116; 
x_115 = lean_ctor_get(x_2, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_2, 2);
lean_inc(x_116);
lean_dec(x_2);
x_4 = x_115;
x_5 = x_116;
x_6 = x_3;
goto block_11;
}
}
block_11:
{
uint8_t x_7; 
x_7 = lean_nat_dec_eq(x_1, x_4);
lean_dec(x_4);
if (x_7 == 0)
{
x_2 = x_5;
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_9 = lean_box(x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_6);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at___Lean_IR_IsLive_visitFnBody_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_anyMUnsafe_any___at___Lean_IR_IsLive_visitFnBody_spec__0(x_1, x_2, x_6, x_7, x_5);
lean_dec_ref(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IsLive_visitFnBody___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_IsLive_visitFnBody(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_FnBody_hasLiveVar(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = l_Lean_IR_IsLive_visitFnBody(x_3, x_1, x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec_ref(x_4);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_hasLiveVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Lean_IR_FnBody_hasLiveVar(x_1, x_2, x_3);
lean_dec(x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_lt(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = lean_nat_dec_eq(x_1, x_2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 2;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_4; lean_object* x_5; 
x_4 = 0;
x_5 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_1);
lean_ctor_set_uint8(x_5, sizeof(void*)*4, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_ctor_get(x_1, 3);
x_12 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg___lam__0(x_2, x_9);
switch (x_12) {
case 0:
{
lean_object* x_13; 
x_13 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg(x_8, x_2, x_3);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
case 1:
{
lean_dec(x_10);
lean_dec(x_9);
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
default: 
{
lean_object* x_14; 
x_14 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg(x_11, x_2, x_3);
lean_ctor_set(x_1, 3, x_14);
return x_1;
}
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
x_17 = lean_ctor_get(x_1, 2);
x_18 = lean_ctor_get(x_1, 3);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_1);
x_19 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg___lam__0(x_2, x_16);
switch (x_19) {
case 0:
{
lean_object* x_20; lean_object* x_21; 
x_20 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg(x_15, x_2, x_3);
x_21 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_16);
lean_ctor_set(x_21, 2, x_17);
lean_ctor_set(x_21, 3, x_18);
lean_ctor_set_uint8(x_21, sizeof(void*)*4, x_6);
return x_21;
}
case 1:
{
lean_object* x_22; 
lean_dec(x_17);
lean_dec(x_16);
x_22 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_22, 0, x_15);
lean_ctor_set(x_22, 1, x_2);
lean_ctor_set(x_22, 2, x_3);
lean_ctor_set(x_22, 3, x_18);
lean_ctor_set_uint8(x_22, sizeof(void*)*4, x_6);
return x_22;
}
default: 
{
lean_object* x_23; lean_object* x_24; 
x_23 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg(x_18, x_2, x_3);
x_24 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_24, 0, x_15);
lean_ctor_set(x_24, 1, x_16);
lean_ctor_set(x_24, 2, x_17);
lean_ctor_set(x_24, 3, x_23);
lean_ctor_set_uint8(x_24, sizeof(void*)*4, x_6);
return x_24;
}
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 2);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 3);
lean_inc(x_28);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 x_29 = x_1;
} else {
 lean_dec_ref(x_1);
 x_29 = lean_box(0);
}
x_30 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg___lam__0(x_2, x_26);
switch (x_30) {
case 0:
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_31 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg(x_25, x_2, x_3);
x_32 = lean_ctor_get_uint8(x_31, sizeof(void*)*4);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_31, 2);
lean_inc(x_35);
x_36 = lean_ctor_get(x_31, 3);
lean_inc(x_36);
if (x_32 == 0)
{
if (lean_obj_tag(x_33) == 0)
{
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_51; 
lean_dec(x_29);
x_51 = !lean_is_exclusive(x_31);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_52 = lean_ctor_get(x_31, 3);
lean_dec(x_52);
x_53 = lean_ctor_get(x_31, 2);
lean_dec(x_53);
x_54 = lean_ctor_get(x_31, 1);
lean_dec(x_54);
x_55 = lean_ctor_get(x_31, 0);
lean_dec(x_55);
lean_ctor_set(x_31, 0, x_36);
x_56 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_56, 0, x_31);
lean_ctor_set(x_56, 1, x_26);
lean_ctor_set(x_56, 2, x_27);
lean_ctor_set(x_56, 3, x_28);
lean_ctor_set_uint8(x_56, sizeof(void*)*4, x_6);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_31);
x_57 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_57, 0, x_36);
lean_ctor_set(x_57, 1, x_34);
lean_ctor_set(x_57, 2, x_35);
lean_ctor_set(x_57, 3, x_36);
lean_ctor_set_uint8(x_57, sizeof(void*)*4, x_32);
x_58 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_26);
lean_ctor_set(x_58, 2, x_27);
lean_ctor_set(x_58, 3, x_28);
lean_ctor_set_uint8(x_58, sizeof(void*)*4, x_6);
return x_58;
}
}
else
{
uint8_t x_59; 
x_59 = lean_ctor_get_uint8(x_36, sizeof(void*)*4);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_31);
x_60 = lean_ctor_get(x_36, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_36, 1);
lean_inc(x_61);
x_62 = lean_ctor_get(x_36, 2);
lean_inc(x_62);
x_63 = lean_ctor_get(x_36, 3);
lean_inc(x_63);
lean_dec(x_36);
x_37 = x_33;
x_38 = x_34;
x_39 = x_35;
x_40 = x_60;
x_41 = x_61;
x_42 = x_62;
x_43 = x_63;
x_44 = x_26;
x_45 = x_27;
x_46 = x_28;
goto block_50;
}
else
{
uint8_t x_64; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_29);
x_64 = !lean_is_exclusive(x_36);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_36, 3);
lean_dec(x_65);
x_66 = lean_ctor_get(x_36, 2);
lean_dec(x_66);
x_67 = lean_ctor_get(x_36, 1);
lean_dec(x_67);
x_68 = lean_ctor_get(x_36, 0);
lean_dec(x_68);
lean_ctor_set(x_36, 3, x_28);
lean_ctor_set(x_36, 2, x_27);
lean_ctor_set(x_36, 1, x_26);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_6);
return x_36;
}
else
{
lean_object* x_69; 
lean_dec(x_36);
x_69 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_69, 0, x_31);
lean_ctor_set(x_69, 1, x_26);
lean_ctor_set(x_69, 2, x_27);
lean_ctor_set(x_69, 3, x_28);
lean_ctor_set_uint8(x_69, sizeof(void*)*4, x_6);
return x_69;
}
}
}
}
else
{
uint8_t x_70; 
x_70 = lean_ctor_get_uint8(x_33, sizeof(void*)*4);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_31);
x_71 = lean_ctor_get(x_33, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_33, 1);
lean_inc(x_72);
x_73 = lean_ctor_get(x_33, 2);
lean_inc(x_73);
x_74 = lean_ctor_get(x_33, 3);
lean_inc(x_74);
lean_dec(x_33);
x_37 = x_71;
x_38 = x_72;
x_39 = x_73;
x_40 = x_74;
x_41 = x_34;
x_42 = x_35;
x_43 = x_36;
x_44 = x_26;
x_45 = x_27;
x_46 = x_28;
goto block_50;
}
else
{
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_75; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_29);
x_75 = !lean_is_exclusive(x_33);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_76 = lean_ctor_get(x_33, 3);
lean_dec(x_76);
x_77 = lean_ctor_get(x_33, 2);
lean_dec(x_77);
x_78 = lean_ctor_get(x_33, 1);
lean_dec(x_78);
x_79 = lean_ctor_get(x_33, 0);
lean_dec(x_79);
lean_ctor_set(x_33, 3, x_28);
lean_ctor_set(x_33, 2, x_27);
lean_ctor_set(x_33, 1, x_26);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set_uint8(x_33, sizeof(void*)*4, x_6);
return x_33;
}
else
{
lean_object* x_80; 
lean_dec(x_33);
x_80 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_80, 0, x_31);
lean_ctor_set(x_80, 1, x_26);
lean_ctor_set(x_80, 2, x_27);
lean_ctor_set(x_80, 3, x_28);
lean_ctor_set_uint8(x_80, sizeof(void*)*4, x_6);
return x_80;
}
}
else
{
uint8_t x_81; 
x_81 = !lean_is_exclusive(x_31);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_82 = lean_ctor_get(x_31, 3);
lean_dec(x_82);
x_83 = lean_ctor_get(x_31, 2);
lean_dec(x_83);
x_84 = lean_ctor_get(x_31, 1);
lean_dec(x_84);
x_85 = lean_ctor_get(x_31, 0);
lean_dec(x_85);
x_86 = lean_ctor_get_uint8(x_36, sizeof(void*)*4);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_free_object(x_31);
x_87 = lean_ctor_get(x_36, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_36, 1);
lean_inc(x_88);
x_89 = lean_ctor_get(x_36, 2);
lean_inc(x_89);
x_90 = lean_ctor_get(x_36, 3);
lean_inc(x_90);
lean_dec(x_36);
x_37 = x_33;
x_38 = x_34;
x_39 = x_35;
x_40 = x_87;
x_41 = x_88;
x_42 = x_89;
x_43 = x_90;
x_44 = x_26;
x_45 = x_27;
x_46 = x_28;
goto block_50;
}
else
{
uint8_t x_91; 
lean_dec(x_29);
x_91 = !lean_is_exclusive(x_33);
if (x_91 == 0)
{
lean_object* x_92; 
lean_ctor_set_uint8(x_33, sizeof(void*)*4, x_86);
x_92 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_92, 0, x_31);
lean_ctor_set(x_92, 1, x_26);
lean_ctor_set(x_92, 2, x_27);
lean_ctor_set(x_92, 3, x_28);
lean_ctor_set_uint8(x_92, sizeof(void*)*4, x_6);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_93 = lean_ctor_get(x_33, 0);
x_94 = lean_ctor_get(x_33, 1);
x_95 = lean_ctor_get(x_33, 2);
x_96 = lean_ctor_get(x_33, 3);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_33);
x_97 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_97, 0, x_93);
lean_ctor_set(x_97, 1, x_94);
lean_ctor_set(x_97, 2, x_95);
lean_ctor_set(x_97, 3, x_96);
lean_ctor_set_uint8(x_97, sizeof(void*)*4, x_86);
lean_ctor_set(x_31, 0, x_97);
x_98 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_98, 0, x_31);
lean_ctor_set(x_98, 1, x_26);
lean_ctor_set(x_98, 2, x_27);
lean_ctor_set(x_98, 3, x_28);
lean_ctor_set_uint8(x_98, sizeof(void*)*4, x_6);
return x_98;
}
}
}
else
{
uint8_t x_99; 
lean_dec(x_31);
x_99 = lean_ctor_get_uint8(x_36, sizeof(void*)*4);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_100 = lean_ctor_get(x_36, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_36, 1);
lean_inc(x_101);
x_102 = lean_ctor_get(x_36, 2);
lean_inc(x_102);
x_103 = lean_ctor_get(x_36, 3);
lean_inc(x_103);
lean_dec(x_36);
x_37 = x_33;
x_38 = x_34;
x_39 = x_35;
x_40 = x_100;
x_41 = x_101;
x_42 = x_102;
x_43 = x_103;
x_44 = x_26;
x_45 = x_27;
x_46 = x_28;
goto block_50;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_29);
x_104 = lean_ctor_get(x_33, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_33, 1);
lean_inc(x_105);
x_106 = lean_ctor_get(x_33, 2);
lean_inc(x_106);
x_107 = lean_ctor_get(x_33, 3);
lean_inc(x_107);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 lean_ctor_release(x_33, 2);
 lean_ctor_release(x_33, 3);
 x_108 = x_33;
} else {
 lean_dec_ref(x_33);
 x_108 = lean_box(0);
}
if (lean_is_scalar(x_108)) {
 x_109 = lean_alloc_ctor(1, 4, 1);
} else {
 x_109 = x_108;
}
lean_ctor_set(x_109, 0, x_104);
lean_ctor_set(x_109, 1, x_105);
lean_ctor_set(x_109, 2, x_106);
lean_ctor_set(x_109, 3, x_107);
lean_ctor_set_uint8(x_109, sizeof(void*)*4, x_99);
x_110 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_34);
lean_ctor_set(x_110, 2, x_35);
lean_ctor_set(x_110, 3, x_36);
lean_ctor_set_uint8(x_110, sizeof(void*)*4, x_32);
x_111 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_26);
lean_ctor_set(x_111, 2, x_27);
lean_ctor_set(x_111, 3, x_28);
lean_ctor_set_uint8(x_111, sizeof(void*)*4, x_6);
return x_111;
}
}
}
}
}
}
else
{
lean_object* x_112; 
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_29);
x_112 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_112, 0, x_31);
lean_ctor_set(x_112, 1, x_26);
lean_ctor_set(x_112, 2, x_27);
lean_ctor_set(x_112, 3, x_28);
lean_ctor_set_uint8(x_112, sizeof(void*)*4, x_6);
return x_112;
}
block_50:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
if (lean_is_scalar(x_29)) {
 x_47 = lean_alloc_ctor(1, 4, 1);
} else {
 x_47 = x_29;
}
lean_ctor_set(x_47, 0, x_37);
lean_ctor_set(x_47, 1, x_38);
lean_ctor_set(x_47, 2, x_39);
lean_ctor_set(x_47, 3, x_40);
lean_ctor_set_uint8(x_47, sizeof(void*)*4, x_6);
x_48 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_48, 0, x_43);
lean_ctor_set(x_48, 1, x_44);
lean_ctor_set(x_48, 2, x_45);
lean_ctor_set(x_48, 3, x_46);
lean_ctor_set_uint8(x_48, sizeof(void*)*4, x_6);
x_49 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_41);
lean_ctor_set(x_49, 2, x_42);
lean_ctor_set(x_49, 3, x_48);
lean_ctor_set_uint8(x_49, sizeof(void*)*4, x_32);
return x_49;
}
}
case 1:
{
lean_object* x_113; 
lean_dec(x_27);
lean_dec(x_26);
if (lean_is_scalar(x_29)) {
 x_113 = lean_alloc_ctor(1, 4, 1);
} else {
 x_113 = x_29;
}
lean_ctor_set(x_113, 0, x_25);
lean_ctor_set(x_113, 1, x_2);
lean_ctor_set(x_113, 2, x_3);
lean_ctor_set(x_113, 3, x_28);
lean_ctor_set_uint8(x_113, sizeof(void*)*4, x_6);
return x_113;
}
default: 
{
lean_object* x_114; uint8_t x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_114 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg(x_28, x_2, x_3);
x_115 = lean_ctor_get_uint8(x_114, sizeof(void*)*4);
x_116 = lean_ctor_get(x_114, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_114, 1);
lean_inc(x_117);
x_118 = lean_ctor_get(x_114, 2);
lean_inc(x_118);
x_119 = lean_ctor_get(x_114, 3);
lean_inc(x_119);
if (x_115 == 0)
{
if (lean_obj_tag(x_116) == 0)
{
if (lean_obj_tag(x_119) == 0)
{
uint8_t x_134; 
lean_dec(x_29);
x_134 = !lean_is_exclusive(x_114);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_135 = lean_ctor_get(x_114, 3);
lean_dec(x_135);
x_136 = lean_ctor_get(x_114, 2);
lean_dec(x_136);
x_137 = lean_ctor_get(x_114, 1);
lean_dec(x_137);
x_138 = lean_ctor_get(x_114, 0);
lean_dec(x_138);
lean_ctor_set(x_114, 0, x_119);
x_139 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_139, 0, x_25);
lean_ctor_set(x_139, 1, x_26);
lean_ctor_set(x_139, 2, x_27);
lean_ctor_set(x_139, 3, x_114);
lean_ctor_set_uint8(x_139, sizeof(void*)*4, x_6);
return x_139;
}
else
{
lean_object* x_140; lean_object* x_141; 
lean_dec(x_114);
x_140 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_140, 0, x_119);
lean_ctor_set(x_140, 1, x_117);
lean_ctor_set(x_140, 2, x_118);
lean_ctor_set(x_140, 3, x_119);
lean_ctor_set_uint8(x_140, sizeof(void*)*4, x_115);
x_141 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_141, 0, x_25);
lean_ctor_set(x_141, 1, x_26);
lean_ctor_set(x_141, 2, x_27);
lean_ctor_set(x_141, 3, x_140);
lean_ctor_set_uint8(x_141, sizeof(void*)*4, x_6);
return x_141;
}
}
else
{
uint8_t x_142; 
x_142 = lean_ctor_get_uint8(x_119, sizeof(void*)*4);
if (x_142 == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_114);
x_143 = lean_ctor_get(x_119, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_119, 1);
lean_inc(x_144);
x_145 = lean_ctor_get(x_119, 2);
lean_inc(x_145);
x_146 = lean_ctor_get(x_119, 3);
lean_inc(x_146);
lean_dec(x_119);
x_120 = x_25;
x_121 = x_26;
x_122 = x_27;
x_123 = x_116;
x_124 = x_117;
x_125 = x_118;
x_126 = x_143;
x_127 = x_144;
x_128 = x_145;
x_129 = x_146;
goto block_133;
}
else
{
uint8_t x_147; 
lean_dec(x_118);
lean_dec(x_117);
lean_dec(x_29);
x_147 = !lean_is_exclusive(x_119);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_148 = lean_ctor_get(x_119, 3);
lean_dec(x_148);
x_149 = lean_ctor_get(x_119, 2);
lean_dec(x_149);
x_150 = lean_ctor_get(x_119, 1);
lean_dec(x_150);
x_151 = lean_ctor_get(x_119, 0);
lean_dec(x_151);
lean_ctor_set(x_119, 3, x_114);
lean_ctor_set(x_119, 2, x_27);
lean_ctor_set(x_119, 1, x_26);
lean_ctor_set(x_119, 0, x_25);
lean_ctor_set_uint8(x_119, sizeof(void*)*4, x_6);
return x_119;
}
else
{
lean_object* x_152; 
lean_dec(x_119);
x_152 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_152, 0, x_25);
lean_ctor_set(x_152, 1, x_26);
lean_ctor_set(x_152, 2, x_27);
lean_ctor_set(x_152, 3, x_114);
lean_ctor_set_uint8(x_152, sizeof(void*)*4, x_6);
return x_152;
}
}
}
}
else
{
uint8_t x_153; 
x_153 = lean_ctor_get_uint8(x_116, sizeof(void*)*4);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_dec(x_114);
x_154 = lean_ctor_get(x_116, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_116, 1);
lean_inc(x_155);
x_156 = lean_ctor_get(x_116, 2);
lean_inc(x_156);
x_157 = lean_ctor_get(x_116, 3);
lean_inc(x_157);
lean_dec(x_116);
x_120 = x_25;
x_121 = x_26;
x_122 = x_27;
x_123 = x_154;
x_124 = x_155;
x_125 = x_156;
x_126 = x_157;
x_127 = x_117;
x_128 = x_118;
x_129 = x_119;
goto block_133;
}
else
{
if (lean_obj_tag(x_119) == 0)
{
uint8_t x_158; 
lean_dec(x_118);
lean_dec(x_117);
lean_dec(x_29);
x_158 = !lean_is_exclusive(x_116);
if (x_158 == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_159 = lean_ctor_get(x_116, 3);
lean_dec(x_159);
x_160 = lean_ctor_get(x_116, 2);
lean_dec(x_160);
x_161 = lean_ctor_get(x_116, 1);
lean_dec(x_161);
x_162 = lean_ctor_get(x_116, 0);
lean_dec(x_162);
lean_ctor_set(x_116, 3, x_114);
lean_ctor_set(x_116, 2, x_27);
lean_ctor_set(x_116, 1, x_26);
lean_ctor_set(x_116, 0, x_25);
lean_ctor_set_uint8(x_116, sizeof(void*)*4, x_6);
return x_116;
}
else
{
lean_object* x_163; 
lean_dec(x_116);
x_163 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_163, 0, x_25);
lean_ctor_set(x_163, 1, x_26);
lean_ctor_set(x_163, 2, x_27);
lean_ctor_set(x_163, 3, x_114);
lean_ctor_set_uint8(x_163, sizeof(void*)*4, x_6);
return x_163;
}
}
else
{
uint8_t x_164; 
x_164 = !lean_is_exclusive(x_114);
if (x_164 == 0)
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; uint8_t x_169; 
x_165 = lean_ctor_get(x_114, 3);
lean_dec(x_165);
x_166 = lean_ctor_get(x_114, 2);
lean_dec(x_166);
x_167 = lean_ctor_get(x_114, 1);
lean_dec(x_167);
x_168 = lean_ctor_get(x_114, 0);
lean_dec(x_168);
x_169 = lean_ctor_get_uint8(x_119, sizeof(void*)*4);
if (x_169 == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_free_object(x_114);
x_170 = lean_ctor_get(x_119, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_119, 1);
lean_inc(x_171);
x_172 = lean_ctor_get(x_119, 2);
lean_inc(x_172);
x_173 = lean_ctor_get(x_119, 3);
lean_inc(x_173);
lean_dec(x_119);
x_120 = x_25;
x_121 = x_26;
x_122 = x_27;
x_123 = x_116;
x_124 = x_117;
x_125 = x_118;
x_126 = x_170;
x_127 = x_171;
x_128 = x_172;
x_129 = x_173;
goto block_133;
}
else
{
uint8_t x_174; 
lean_dec(x_29);
x_174 = !lean_is_exclusive(x_116);
if (x_174 == 0)
{
lean_object* x_175; 
lean_ctor_set_uint8(x_116, sizeof(void*)*4, x_169);
x_175 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_175, 0, x_25);
lean_ctor_set(x_175, 1, x_26);
lean_ctor_set(x_175, 2, x_27);
lean_ctor_set(x_175, 3, x_114);
lean_ctor_set_uint8(x_175, sizeof(void*)*4, x_6);
return x_175;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_176 = lean_ctor_get(x_116, 0);
x_177 = lean_ctor_get(x_116, 1);
x_178 = lean_ctor_get(x_116, 2);
x_179 = lean_ctor_get(x_116, 3);
lean_inc(x_179);
lean_inc(x_178);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_116);
x_180 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_180, 0, x_176);
lean_ctor_set(x_180, 1, x_177);
lean_ctor_set(x_180, 2, x_178);
lean_ctor_set(x_180, 3, x_179);
lean_ctor_set_uint8(x_180, sizeof(void*)*4, x_169);
lean_ctor_set(x_114, 0, x_180);
x_181 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_181, 0, x_25);
lean_ctor_set(x_181, 1, x_26);
lean_ctor_set(x_181, 2, x_27);
lean_ctor_set(x_181, 3, x_114);
lean_ctor_set_uint8(x_181, sizeof(void*)*4, x_6);
return x_181;
}
}
}
else
{
uint8_t x_182; 
lean_dec(x_114);
x_182 = lean_ctor_get_uint8(x_119, sizeof(void*)*4);
if (x_182 == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_183 = lean_ctor_get(x_119, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_119, 1);
lean_inc(x_184);
x_185 = lean_ctor_get(x_119, 2);
lean_inc(x_185);
x_186 = lean_ctor_get(x_119, 3);
lean_inc(x_186);
lean_dec(x_119);
x_120 = x_25;
x_121 = x_26;
x_122 = x_27;
x_123 = x_116;
x_124 = x_117;
x_125 = x_118;
x_126 = x_183;
x_127 = x_184;
x_128 = x_185;
x_129 = x_186;
goto block_133;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
lean_dec(x_29);
x_187 = lean_ctor_get(x_116, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_116, 1);
lean_inc(x_188);
x_189 = lean_ctor_get(x_116, 2);
lean_inc(x_189);
x_190 = lean_ctor_get(x_116, 3);
lean_inc(x_190);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 lean_ctor_release(x_116, 2);
 lean_ctor_release(x_116, 3);
 x_191 = x_116;
} else {
 lean_dec_ref(x_116);
 x_191 = lean_box(0);
}
if (lean_is_scalar(x_191)) {
 x_192 = lean_alloc_ctor(1, 4, 1);
} else {
 x_192 = x_191;
}
lean_ctor_set(x_192, 0, x_187);
lean_ctor_set(x_192, 1, x_188);
lean_ctor_set(x_192, 2, x_189);
lean_ctor_set(x_192, 3, x_190);
lean_ctor_set_uint8(x_192, sizeof(void*)*4, x_182);
x_193 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_117);
lean_ctor_set(x_193, 2, x_118);
lean_ctor_set(x_193, 3, x_119);
lean_ctor_set_uint8(x_193, sizeof(void*)*4, x_115);
x_194 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_194, 0, x_25);
lean_ctor_set(x_194, 1, x_26);
lean_ctor_set(x_194, 2, x_27);
lean_ctor_set(x_194, 3, x_193);
lean_ctor_set_uint8(x_194, sizeof(void*)*4, x_6);
return x_194;
}
}
}
}
}
}
else
{
lean_object* x_195; 
lean_dec(x_119);
lean_dec(x_118);
lean_dec(x_117);
lean_dec(x_116);
lean_dec(x_29);
x_195 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_195, 0, x_25);
lean_ctor_set(x_195, 1, x_26);
lean_ctor_set(x_195, 2, x_27);
lean_ctor_set(x_195, 3, x_114);
lean_ctor_set_uint8(x_195, sizeof(void*)*4, x_6);
return x_195;
}
block_133:
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
if (lean_is_scalar(x_29)) {
 x_130 = lean_alloc_ctor(1, 4, 1);
} else {
 x_130 = x_29;
}
lean_ctor_set(x_130, 0, x_120);
lean_ctor_set(x_130, 1, x_121);
lean_ctor_set(x_130, 2, x_122);
lean_ctor_set(x_130, 3, x_123);
lean_ctor_set_uint8(x_130, sizeof(void*)*4, x_6);
x_131 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_131, 0, x_126);
lean_ctor_set(x_131, 1, x_127);
lean_ctor_set(x_131, 2, x_128);
lean_ctor_set(x_131, 3, x_129);
lean_ctor_set_uint8(x_131, sizeof(void*)*4, x_6);
x_132 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_124);
lean_ctor_set(x_132, 2, x_125);
lean_ctor_set(x_132, 3, x_131);
lean_ctor_set_uint8(x_132, sizeof(void*)*4, x_115);
return x_132;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_RBNode_isRed___redArg(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg(x_1, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg(x_1, x_2, x_3);
x_7 = l_Lean_RBNode_setBlack___redArg(x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_mkLiveVarSet(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_2, x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0_spec__0___redArg___lam__0(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_skip(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_skip___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_skip(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectVar___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_lt(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = lean_nat_dec_eq(x_1, x_2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 2;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectVar(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectVar___lam__0___boxed), 2, 0);
x_4 = lean_box(0);
x_5 = l_Lean_RBNode_insert___redArg(x_3, x_2, x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectVar___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectVar___lam__0(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_box(0);
x_5 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_2, x_3, x_4);
return x_5;
}
else
{
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray_spec__0___redArg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_8 = lean_apply_2(x_1, x_7, x_5);
x_9 = 1;
x_10 = lean_usize_add(x_3, x_9);
x_3 = x_10;
x_5 = x_8;
goto _start;
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray_spec__0___redArg(x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_array_get_size(x_1);
x_6 = lean_nat_dec_lt(x_4, x_5);
if (x_6 == 0)
{
lean_dec(x_5);
lean_dec(x_2);
return x_3;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_5, x_5);
if (x_7 == 0)
{
lean_dec(x_5);
lean_dec(x_2);
return x_3;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_10 = l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray_spec__0___redArg(x_2, x_1, x_8, x_9, x_3);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray_spec__0___redArg(x_1, x_2, x_6, x_7, x_5);
lean_dec_ref(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray_spec__0(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec_ref(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray___redArg(x_1, x_2, x_3);
lean_dec_ref(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray(x_1, x_2, x_3, x_4);
lean_dec_ref(x_2);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArgs___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArgs(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArgs___closed__0;
x_4 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray___redArg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArgs___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArgs(x_1, x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_accumulate_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 3);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Lean_RBNode_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_accumulate_spec__0(x_1, x_3);
x_7 = lean_box(0);
x_8 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_6, x_4, x_7);
x_1 = x_8;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_accumulate(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_RBNode_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_accumulate_spec__0(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP_spec__0___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = lean_nat_dec_lt(x_2, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = lean_nat_dec_eq(x_2, x_5);
if (x_9 == 0)
{
x_1 = x_7;
goto _start;
}
else
{
lean_object* x_11; 
lean_inc(x_6);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_6);
return x_11;
}
}
else
{
x_1 = x_4;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_RBNode_find___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP_spec__0___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_RBNode_find___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP_spec__0___redArg(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Lean_RBNode_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_accumulate_spec__0(x_3, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_RBNode_find___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP_spec__0___redArg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_RBNode_find___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP_spec__0(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_ctor_get(x_2, 3);
x_8 = lean_nat_dec_lt(x_1, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = lean_nat_dec_eq(x_1, x_5);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = l_Lean_RBNode_isBlack___redArg(x_7);
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; 
x_11 = 0;
x_12 = l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___redArg(x_1, x_7);
lean_ctor_set(x_2, 3, x_12);
lean_ctor_set_uint8(x_2, sizeof(void*)*4, x_11);
return x_2;
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_free_object(x_2);
x_13 = l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___redArg(x_1, x_7);
x_14 = l_Lean_RBNode_balRight___redArg(x_4, x_5, x_6, x_13);
return x_14;
}
}
else
{
lean_object* x_15; 
lean_free_object(x_2);
lean_dec(x_6);
lean_dec(x_5);
x_15 = l_Lean_RBNode_appendTrees___redArg(x_4, x_7);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = l_Lean_RBNode_isBlack___redArg(x_4);
if (x_16 == 0)
{
uint8_t x_17; lean_object* x_18; 
x_17 = 0;
x_18 = l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___redArg(x_1, x_4);
lean_ctor_set(x_2, 0, x_18);
lean_ctor_set_uint8(x_2, sizeof(void*)*4, x_17);
return x_2;
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_free_object(x_2);
x_19 = l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___redArg(x_1, x_4);
x_20 = l_Lean_RBNode_balLeft___redArg(x_19, x_5, x_6, x_7);
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_ctor_get(x_2, 1);
x_23 = lean_ctor_get(x_2, 2);
x_24 = lean_ctor_get(x_2, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_2);
x_25 = lean_nat_dec_lt(x_1, x_22);
if (x_25 == 0)
{
uint8_t x_26; 
x_26 = lean_nat_dec_eq(x_1, x_22);
if (x_26 == 0)
{
uint8_t x_27; 
x_27 = l_Lean_RBNode_isBlack___redArg(x_24);
if (x_27 == 0)
{
uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_28 = 0;
x_29 = l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___redArg(x_1, x_24);
x_30 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_30, 0, x_21);
lean_ctor_set(x_30, 1, x_22);
lean_ctor_set(x_30, 2, x_23);
lean_ctor_set(x_30, 3, x_29);
lean_ctor_set_uint8(x_30, sizeof(void*)*4, x_28);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___redArg(x_1, x_24);
x_32 = l_Lean_RBNode_balRight___redArg(x_21, x_22, x_23, x_31);
return x_32;
}
}
else
{
lean_object* x_33; 
lean_dec(x_23);
lean_dec(x_22);
x_33 = l_Lean_RBNode_appendTrees___redArg(x_21, x_24);
return x_33;
}
}
else
{
uint8_t x_34; 
x_34 = l_Lean_RBNode_isBlack___redArg(x_21);
if (x_34 == 0)
{
uint8_t x_35; lean_object* x_36; lean_object* x_37; 
x_35 = 0;
x_36 = l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___redArg(x_1, x_21);
x_37 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_22);
lean_ctor_set(x_37, 2, x_23);
lean_ctor_set(x_37, 3, x_24);
lean_ctor_set_uint8(x_37, sizeof(void*)*4, x_35);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; 
x_38 = l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___redArg(x_1, x_21);
x_39 = l_Lean_RBNode_balLeft___redArg(x_38, x_22, x_23, x_24);
return x_39;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___redArg(x_1, x_2);
x_4 = l_Lean_RBNode_setBlack___redArg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0___redArg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___redArg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_RBNode_del___at___Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0_spec__0(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0___redArg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindParams_spec__0(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec_ref(x_6);
x_8 = l_Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0___redArg(x_7, x_4);
lean_dec(x_7);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_2 = x_10;
x_4 = x_8;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindParams(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_3, x_4);
if (x_5 == 0)
{
lean_dec(x_4);
return x_2;
}
else
{
uint8_t x_6; 
x_6 = lean_nat_dec_le(x_4, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
return x_2;
}
else
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = 0;
x_8 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_9 = l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindParams_spec__0(x_1, x_7, x_8, x_2);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindParams_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindParams_spec__0(x_1, x_5, x_6, x_4);
lean_dec_ref(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindParams___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindParams(x_1, x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LiveVars_collectExpr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_8; lean_object* x_9; 
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_dec_ref(x_1);
x_3 = x_13;
x_4 = x_2;
goto block_7;
}
case 2:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 2);
lean_inc_ref(x_15);
lean_dec_ref(x_1);
x_16 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArgs(x_15, x_2);
lean_dec_ref(x_15);
x_17 = lean_box(0);
x_18 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_16, x_14, x_17);
return x_18;
}
case 3:
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_dec_ref(x_1);
x_3 = x_19;
x_4 = x_2;
goto block_7;
}
case 4:
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_dec_ref(x_1);
x_3 = x_20;
x_4 = x_2;
goto block_7;
}
case 5:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_1, 2);
lean_inc(x_21);
lean_dec_ref(x_1);
x_22 = lean_box(0);
x_23 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_2, x_21, x_22);
return x_23;
}
case 8:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_25);
lean_dec_ref(x_1);
x_26 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArgs(x_25, x_2);
lean_dec_ref(x_25);
x_27 = lean_box(0);
x_28 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_26, x_24, x_27);
return x_28;
}
case 9:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
lean_dec_ref(x_1);
x_30 = lean_box(0);
x_31 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_2, x_29, x_30);
return x_31;
}
case 10:
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_1, 0);
lean_inc(x_32);
lean_dec_ref(x_1);
x_8 = x_32;
x_9 = x_2;
goto block_12;
}
case 11:
{
lean_dec_ref(x_1);
return x_2;
}
case 12:
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_1, 0);
lean_inc(x_33);
lean_dec_ref(x_1);
x_8 = x_33;
x_9 = x_2;
goto block_12;
}
default: 
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_34);
lean_dec_ref(x_1);
x_35 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArgs(x_34, x_2);
lean_dec_ref(x_34);
return x_35;
}
}
block_7:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_4, x_3, x_5);
return x_6;
}
block_12:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_9, x_8, x_10);
return x_11;
}
}
}
LEAN_EXPORT uint8_t l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_lt(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = lean_nat_dec_eq(x_1, x_2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 2;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_4; lean_object* x_5; 
x_4 = 0;
x_5 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_1);
lean_ctor_set_uint8(x_5, sizeof(void*)*4, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_ctor_get(x_1, 3);
x_12 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg___lam__0(x_2, x_9);
switch (x_12) {
case 0:
{
lean_object* x_13; 
x_13 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg(x_8, x_2, x_3);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
case 1:
{
lean_dec(x_10);
lean_dec(x_9);
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
default: 
{
lean_object* x_14; 
x_14 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg(x_11, x_2, x_3);
lean_ctor_set(x_1, 3, x_14);
return x_1;
}
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
x_17 = lean_ctor_get(x_1, 2);
x_18 = lean_ctor_get(x_1, 3);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_1);
x_19 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg___lam__0(x_2, x_16);
switch (x_19) {
case 0:
{
lean_object* x_20; lean_object* x_21; 
x_20 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg(x_15, x_2, x_3);
x_21 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_16);
lean_ctor_set(x_21, 2, x_17);
lean_ctor_set(x_21, 3, x_18);
lean_ctor_set_uint8(x_21, sizeof(void*)*4, x_6);
return x_21;
}
case 1:
{
lean_object* x_22; 
lean_dec(x_17);
lean_dec(x_16);
x_22 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_22, 0, x_15);
lean_ctor_set(x_22, 1, x_2);
lean_ctor_set(x_22, 2, x_3);
lean_ctor_set(x_22, 3, x_18);
lean_ctor_set_uint8(x_22, sizeof(void*)*4, x_6);
return x_22;
}
default: 
{
lean_object* x_23; lean_object* x_24; 
x_23 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg(x_18, x_2, x_3);
x_24 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_24, 0, x_15);
lean_ctor_set(x_24, 1, x_16);
lean_ctor_set(x_24, 2, x_17);
lean_ctor_set(x_24, 3, x_23);
lean_ctor_set_uint8(x_24, sizeof(void*)*4, x_6);
return x_24;
}
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 2);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 3);
lean_inc(x_28);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 x_29 = x_1;
} else {
 lean_dec_ref(x_1);
 x_29 = lean_box(0);
}
x_30 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg___lam__0(x_2, x_26);
switch (x_30) {
case 0:
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_31 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg(x_25, x_2, x_3);
x_32 = lean_ctor_get_uint8(x_31, sizeof(void*)*4);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_31, 2);
lean_inc(x_35);
x_36 = lean_ctor_get(x_31, 3);
lean_inc(x_36);
if (x_32 == 0)
{
if (lean_obj_tag(x_33) == 0)
{
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_51; 
lean_dec(x_29);
x_51 = !lean_is_exclusive(x_31);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_52 = lean_ctor_get(x_31, 3);
lean_dec(x_52);
x_53 = lean_ctor_get(x_31, 2);
lean_dec(x_53);
x_54 = lean_ctor_get(x_31, 1);
lean_dec(x_54);
x_55 = lean_ctor_get(x_31, 0);
lean_dec(x_55);
lean_ctor_set(x_31, 0, x_36);
x_56 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_56, 0, x_31);
lean_ctor_set(x_56, 1, x_26);
lean_ctor_set(x_56, 2, x_27);
lean_ctor_set(x_56, 3, x_28);
lean_ctor_set_uint8(x_56, sizeof(void*)*4, x_6);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_31);
x_57 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_57, 0, x_36);
lean_ctor_set(x_57, 1, x_34);
lean_ctor_set(x_57, 2, x_35);
lean_ctor_set(x_57, 3, x_36);
lean_ctor_set_uint8(x_57, sizeof(void*)*4, x_32);
x_58 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_26);
lean_ctor_set(x_58, 2, x_27);
lean_ctor_set(x_58, 3, x_28);
lean_ctor_set_uint8(x_58, sizeof(void*)*4, x_6);
return x_58;
}
}
else
{
uint8_t x_59; 
x_59 = lean_ctor_get_uint8(x_36, sizeof(void*)*4);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_31);
x_60 = lean_ctor_get(x_36, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_36, 1);
lean_inc(x_61);
x_62 = lean_ctor_get(x_36, 2);
lean_inc(x_62);
x_63 = lean_ctor_get(x_36, 3);
lean_inc(x_63);
lean_dec(x_36);
x_37 = x_33;
x_38 = x_34;
x_39 = x_35;
x_40 = x_60;
x_41 = x_61;
x_42 = x_62;
x_43 = x_63;
x_44 = x_26;
x_45 = x_27;
x_46 = x_28;
goto block_50;
}
else
{
uint8_t x_64; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_29);
x_64 = !lean_is_exclusive(x_36);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_36, 3);
lean_dec(x_65);
x_66 = lean_ctor_get(x_36, 2);
lean_dec(x_66);
x_67 = lean_ctor_get(x_36, 1);
lean_dec(x_67);
x_68 = lean_ctor_get(x_36, 0);
lean_dec(x_68);
lean_ctor_set(x_36, 3, x_28);
lean_ctor_set(x_36, 2, x_27);
lean_ctor_set(x_36, 1, x_26);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_6);
return x_36;
}
else
{
lean_object* x_69; 
lean_dec(x_36);
x_69 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_69, 0, x_31);
lean_ctor_set(x_69, 1, x_26);
lean_ctor_set(x_69, 2, x_27);
lean_ctor_set(x_69, 3, x_28);
lean_ctor_set_uint8(x_69, sizeof(void*)*4, x_6);
return x_69;
}
}
}
}
else
{
uint8_t x_70; 
x_70 = lean_ctor_get_uint8(x_33, sizeof(void*)*4);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_31);
x_71 = lean_ctor_get(x_33, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_33, 1);
lean_inc(x_72);
x_73 = lean_ctor_get(x_33, 2);
lean_inc(x_73);
x_74 = lean_ctor_get(x_33, 3);
lean_inc(x_74);
lean_dec(x_33);
x_37 = x_71;
x_38 = x_72;
x_39 = x_73;
x_40 = x_74;
x_41 = x_34;
x_42 = x_35;
x_43 = x_36;
x_44 = x_26;
x_45 = x_27;
x_46 = x_28;
goto block_50;
}
else
{
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_75; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_29);
x_75 = !lean_is_exclusive(x_33);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_76 = lean_ctor_get(x_33, 3);
lean_dec(x_76);
x_77 = lean_ctor_get(x_33, 2);
lean_dec(x_77);
x_78 = lean_ctor_get(x_33, 1);
lean_dec(x_78);
x_79 = lean_ctor_get(x_33, 0);
lean_dec(x_79);
lean_ctor_set(x_33, 3, x_28);
lean_ctor_set(x_33, 2, x_27);
lean_ctor_set(x_33, 1, x_26);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set_uint8(x_33, sizeof(void*)*4, x_6);
return x_33;
}
else
{
lean_object* x_80; 
lean_dec(x_33);
x_80 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_80, 0, x_31);
lean_ctor_set(x_80, 1, x_26);
lean_ctor_set(x_80, 2, x_27);
lean_ctor_set(x_80, 3, x_28);
lean_ctor_set_uint8(x_80, sizeof(void*)*4, x_6);
return x_80;
}
}
else
{
uint8_t x_81; 
x_81 = !lean_is_exclusive(x_31);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_82 = lean_ctor_get(x_31, 3);
lean_dec(x_82);
x_83 = lean_ctor_get(x_31, 2);
lean_dec(x_83);
x_84 = lean_ctor_get(x_31, 1);
lean_dec(x_84);
x_85 = lean_ctor_get(x_31, 0);
lean_dec(x_85);
x_86 = lean_ctor_get_uint8(x_36, sizeof(void*)*4);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_free_object(x_31);
x_87 = lean_ctor_get(x_36, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_36, 1);
lean_inc(x_88);
x_89 = lean_ctor_get(x_36, 2);
lean_inc(x_89);
x_90 = lean_ctor_get(x_36, 3);
lean_inc(x_90);
lean_dec(x_36);
x_37 = x_33;
x_38 = x_34;
x_39 = x_35;
x_40 = x_87;
x_41 = x_88;
x_42 = x_89;
x_43 = x_90;
x_44 = x_26;
x_45 = x_27;
x_46 = x_28;
goto block_50;
}
else
{
uint8_t x_91; 
lean_dec(x_29);
x_91 = !lean_is_exclusive(x_33);
if (x_91 == 0)
{
lean_object* x_92; 
lean_ctor_set_uint8(x_33, sizeof(void*)*4, x_86);
x_92 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_92, 0, x_31);
lean_ctor_set(x_92, 1, x_26);
lean_ctor_set(x_92, 2, x_27);
lean_ctor_set(x_92, 3, x_28);
lean_ctor_set_uint8(x_92, sizeof(void*)*4, x_6);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_93 = lean_ctor_get(x_33, 0);
x_94 = lean_ctor_get(x_33, 1);
x_95 = lean_ctor_get(x_33, 2);
x_96 = lean_ctor_get(x_33, 3);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_33);
x_97 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_97, 0, x_93);
lean_ctor_set(x_97, 1, x_94);
lean_ctor_set(x_97, 2, x_95);
lean_ctor_set(x_97, 3, x_96);
lean_ctor_set_uint8(x_97, sizeof(void*)*4, x_86);
lean_ctor_set(x_31, 0, x_97);
x_98 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_98, 0, x_31);
lean_ctor_set(x_98, 1, x_26);
lean_ctor_set(x_98, 2, x_27);
lean_ctor_set(x_98, 3, x_28);
lean_ctor_set_uint8(x_98, sizeof(void*)*4, x_6);
return x_98;
}
}
}
else
{
uint8_t x_99; 
lean_dec(x_31);
x_99 = lean_ctor_get_uint8(x_36, sizeof(void*)*4);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_100 = lean_ctor_get(x_36, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_36, 1);
lean_inc(x_101);
x_102 = lean_ctor_get(x_36, 2);
lean_inc(x_102);
x_103 = lean_ctor_get(x_36, 3);
lean_inc(x_103);
lean_dec(x_36);
x_37 = x_33;
x_38 = x_34;
x_39 = x_35;
x_40 = x_100;
x_41 = x_101;
x_42 = x_102;
x_43 = x_103;
x_44 = x_26;
x_45 = x_27;
x_46 = x_28;
goto block_50;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_29);
x_104 = lean_ctor_get(x_33, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_33, 1);
lean_inc(x_105);
x_106 = lean_ctor_get(x_33, 2);
lean_inc(x_106);
x_107 = lean_ctor_get(x_33, 3);
lean_inc(x_107);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 lean_ctor_release(x_33, 2);
 lean_ctor_release(x_33, 3);
 x_108 = x_33;
} else {
 lean_dec_ref(x_33);
 x_108 = lean_box(0);
}
if (lean_is_scalar(x_108)) {
 x_109 = lean_alloc_ctor(1, 4, 1);
} else {
 x_109 = x_108;
}
lean_ctor_set(x_109, 0, x_104);
lean_ctor_set(x_109, 1, x_105);
lean_ctor_set(x_109, 2, x_106);
lean_ctor_set(x_109, 3, x_107);
lean_ctor_set_uint8(x_109, sizeof(void*)*4, x_99);
x_110 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_34);
lean_ctor_set(x_110, 2, x_35);
lean_ctor_set(x_110, 3, x_36);
lean_ctor_set_uint8(x_110, sizeof(void*)*4, x_32);
x_111 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_26);
lean_ctor_set(x_111, 2, x_27);
lean_ctor_set(x_111, 3, x_28);
lean_ctor_set_uint8(x_111, sizeof(void*)*4, x_6);
return x_111;
}
}
}
}
}
}
else
{
lean_object* x_112; 
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_29);
x_112 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_112, 0, x_31);
lean_ctor_set(x_112, 1, x_26);
lean_ctor_set(x_112, 2, x_27);
lean_ctor_set(x_112, 3, x_28);
lean_ctor_set_uint8(x_112, sizeof(void*)*4, x_6);
return x_112;
}
block_50:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
if (lean_is_scalar(x_29)) {
 x_47 = lean_alloc_ctor(1, 4, 1);
} else {
 x_47 = x_29;
}
lean_ctor_set(x_47, 0, x_37);
lean_ctor_set(x_47, 1, x_38);
lean_ctor_set(x_47, 2, x_39);
lean_ctor_set(x_47, 3, x_40);
lean_ctor_set_uint8(x_47, sizeof(void*)*4, x_6);
x_48 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_48, 0, x_43);
lean_ctor_set(x_48, 1, x_44);
lean_ctor_set(x_48, 2, x_45);
lean_ctor_set(x_48, 3, x_46);
lean_ctor_set_uint8(x_48, sizeof(void*)*4, x_6);
x_49 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_41);
lean_ctor_set(x_49, 2, x_42);
lean_ctor_set(x_49, 3, x_48);
lean_ctor_set_uint8(x_49, sizeof(void*)*4, x_32);
return x_49;
}
}
case 1:
{
lean_object* x_113; 
lean_dec(x_27);
lean_dec(x_26);
if (lean_is_scalar(x_29)) {
 x_113 = lean_alloc_ctor(1, 4, 1);
} else {
 x_113 = x_29;
}
lean_ctor_set(x_113, 0, x_25);
lean_ctor_set(x_113, 1, x_2);
lean_ctor_set(x_113, 2, x_3);
lean_ctor_set(x_113, 3, x_28);
lean_ctor_set_uint8(x_113, sizeof(void*)*4, x_6);
return x_113;
}
default: 
{
lean_object* x_114; uint8_t x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_114 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg(x_28, x_2, x_3);
x_115 = lean_ctor_get_uint8(x_114, sizeof(void*)*4);
x_116 = lean_ctor_get(x_114, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_114, 1);
lean_inc(x_117);
x_118 = lean_ctor_get(x_114, 2);
lean_inc(x_118);
x_119 = lean_ctor_get(x_114, 3);
lean_inc(x_119);
if (x_115 == 0)
{
if (lean_obj_tag(x_116) == 0)
{
if (lean_obj_tag(x_119) == 0)
{
uint8_t x_134; 
lean_dec(x_29);
x_134 = !lean_is_exclusive(x_114);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_135 = lean_ctor_get(x_114, 3);
lean_dec(x_135);
x_136 = lean_ctor_get(x_114, 2);
lean_dec(x_136);
x_137 = lean_ctor_get(x_114, 1);
lean_dec(x_137);
x_138 = lean_ctor_get(x_114, 0);
lean_dec(x_138);
lean_ctor_set(x_114, 0, x_119);
x_139 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_139, 0, x_25);
lean_ctor_set(x_139, 1, x_26);
lean_ctor_set(x_139, 2, x_27);
lean_ctor_set(x_139, 3, x_114);
lean_ctor_set_uint8(x_139, sizeof(void*)*4, x_6);
return x_139;
}
else
{
lean_object* x_140; lean_object* x_141; 
lean_dec(x_114);
x_140 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_140, 0, x_119);
lean_ctor_set(x_140, 1, x_117);
lean_ctor_set(x_140, 2, x_118);
lean_ctor_set(x_140, 3, x_119);
lean_ctor_set_uint8(x_140, sizeof(void*)*4, x_115);
x_141 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_141, 0, x_25);
lean_ctor_set(x_141, 1, x_26);
lean_ctor_set(x_141, 2, x_27);
lean_ctor_set(x_141, 3, x_140);
lean_ctor_set_uint8(x_141, sizeof(void*)*4, x_6);
return x_141;
}
}
else
{
uint8_t x_142; 
x_142 = lean_ctor_get_uint8(x_119, sizeof(void*)*4);
if (x_142 == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_114);
x_143 = lean_ctor_get(x_119, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_119, 1);
lean_inc(x_144);
x_145 = lean_ctor_get(x_119, 2);
lean_inc(x_145);
x_146 = lean_ctor_get(x_119, 3);
lean_inc(x_146);
lean_dec(x_119);
x_120 = x_25;
x_121 = x_26;
x_122 = x_27;
x_123 = x_116;
x_124 = x_117;
x_125 = x_118;
x_126 = x_143;
x_127 = x_144;
x_128 = x_145;
x_129 = x_146;
goto block_133;
}
else
{
uint8_t x_147; 
lean_dec(x_118);
lean_dec(x_117);
lean_dec(x_29);
x_147 = !lean_is_exclusive(x_119);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_148 = lean_ctor_get(x_119, 3);
lean_dec(x_148);
x_149 = lean_ctor_get(x_119, 2);
lean_dec(x_149);
x_150 = lean_ctor_get(x_119, 1);
lean_dec(x_150);
x_151 = lean_ctor_get(x_119, 0);
lean_dec(x_151);
lean_ctor_set(x_119, 3, x_114);
lean_ctor_set(x_119, 2, x_27);
lean_ctor_set(x_119, 1, x_26);
lean_ctor_set(x_119, 0, x_25);
lean_ctor_set_uint8(x_119, sizeof(void*)*4, x_6);
return x_119;
}
else
{
lean_object* x_152; 
lean_dec(x_119);
x_152 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_152, 0, x_25);
lean_ctor_set(x_152, 1, x_26);
lean_ctor_set(x_152, 2, x_27);
lean_ctor_set(x_152, 3, x_114);
lean_ctor_set_uint8(x_152, sizeof(void*)*4, x_6);
return x_152;
}
}
}
}
else
{
uint8_t x_153; 
x_153 = lean_ctor_get_uint8(x_116, sizeof(void*)*4);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_dec(x_114);
x_154 = lean_ctor_get(x_116, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_116, 1);
lean_inc(x_155);
x_156 = lean_ctor_get(x_116, 2);
lean_inc(x_156);
x_157 = lean_ctor_get(x_116, 3);
lean_inc(x_157);
lean_dec(x_116);
x_120 = x_25;
x_121 = x_26;
x_122 = x_27;
x_123 = x_154;
x_124 = x_155;
x_125 = x_156;
x_126 = x_157;
x_127 = x_117;
x_128 = x_118;
x_129 = x_119;
goto block_133;
}
else
{
if (lean_obj_tag(x_119) == 0)
{
uint8_t x_158; 
lean_dec(x_118);
lean_dec(x_117);
lean_dec(x_29);
x_158 = !lean_is_exclusive(x_116);
if (x_158 == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_159 = lean_ctor_get(x_116, 3);
lean_dec(x_159);
x_160 = lean_ctor_get(x_116, 2);
lean_dec(x_160);
x_161 = lean_ctor_get(x_116, 1);
lean_dec(x_161);
x_162 = lean_ctor_get(x_116, 0);
lean_dec(x_162);
lean_ctor_set(x_116, 3, x_114);
lean_ctor_set(x_116, 2, x_27);
lean_ctor_set(x_116, 1, x_26);
lean_ctor_set(x_116, 0, x_25);
lean_ctor_set_uint8(x_116, sizeof(void*)*4, x_6);
return x_116;
}
else
{
lean_object* x_163; 
lean_dec(x_116);
x_163 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_163, 0, x_25);
lean_ctor_set(x_163, 1, x_26);
lean_ctor_set(x_163, 2, x_27);
lean_ctor_set(x_163, 3, x_114);
lean_ctor_set_uint8(x_163, sizeof(void*)*4, x_6);
return x_163;
}
}
else
{
uint8_t x_164; 
x_164 = !lean_is_exclusive(x_114);
if (x_164 == 0)
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; uint8_t x_169; 
x_165 = lean_ctor_get(x_114, 3);
lean_dec(x_165);
x_166 = lean_ctor_get(x_114, 2);
lean_dec(x_166);
x_167 = lean_ctor_get(x_114, 1);
lean_dec(x_167);
x_168 = lean_ctor_get(x_114, 0);
lean_dec(x_168);
x_169 = lean_ctor_get_uint8(x_119, sizeof(void*)*4);
if (x_169 == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_free_object(x_114);
x_170 = lean_ctor_get(x_119, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_119, 1);
lean_inc(x_171);
x_172 = lean_ctor_get(x_119, 2);
lean_inc(x_172);
x_173 = lean_ctor_get(x_119, 3);
lean_inc(x_173);
lean_dec(x_119);
x_120 = x_25;
x_121 = x_26;
x_122 = x_27;
x_123 = x_116;
x_124 = x_117;
x_125 = x_118;
x_126 = x_170;
x_127 = x_171;
x_128 = x_172;
x_129 = x_173;
goto block_133;
}
else
{
uint8_t x_174; 
lean_dec(x_29);
x_174 = !lean_is_exclusive(x_116);
if (x_174 == 0)
{
lean_object* x_175; 
lean_ctor_set_uint8(x_116, sizeof(void*)*4, x_169);
x_175 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_175, 0, x_25);
lean_ctor_set(x_175, 1, x_26);
lean_ctor_set(x_175, 2, x_27);
lean_ctor_set(x_175, 3, x_114);
lean_ctor_set_uint8(x_175, sizeof(void*)*4, x_6);
return x_175;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_176 = lean_ctor_get(x_116, 0);
x_177 = lean_ctor_get(x_116, 1);
x_178 = lean_ctor_get(x_116, 2);
x_179 = lean_ctor_get(x_116, 3);
lean_inc(x_179);
lean_inc(x_178);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_116);
x_180 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_180, 0, x_176);
lean_ctor_set(x_180, 1, x_177);
lean_ctor_set(x_180, 2, x_178);
lean_ctor_set(x_180, 3, x_179);
lean_ctor_set_uint8(x_180, sizeof(void*)*4, x_169);
lean_ctor_set(x_114, 0, x_180);
x_181 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_181, 0, x_25);
lean_ctor_set(x_181, 1, x_26);
lean_ctor_set(x_181, 2, x_27);
lean_ctor_set(x_181, 3, x_114);
lean_ctor_set_uint8(x_181, sizeof(void*)*4, x_6);
return x_181;
}
}
}
else
{
uint8_t x_182; 
lean_dec(x_114);
x_182 = lean_ctor_get_uint8(x_119, sizeof(void*)*4);
if (x_182 == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_183 = lean_ctor_get(x_119, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_119, 1);
lean_inc(x_184);
x_185 = lean_ctor_get(x_119, 2);
lean_inc(x_185);
x_186 = lean_ctor_get(x_119, 3);
lean_inc(x_186);
lean_dec(x_119);
x_120 = x_25;
x_121 = x_26;
x_122 = x_27;
x_123 = x_116;
x_124 = x_117;
x_125 = x_118;
x_126 = x_183;
x_127 = x_184;
x_128 = x_185;
x_129 = x_186;
goto block_133;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
lean_dec(x_29);
x_187 = lean_ctor_get(x_116, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_116, 1);
lean_inc(x_188);
x_189 = lean_ctor_get(x_116, 2);
lean_inc(x_189);
x_190 = lean_ctor_get(x_116, 3);
lean_inc(x_190);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 lean_ctor_release(x_116, 2);
 lean_ctor_release(x_116, 3);
 x_191 = x_116;
} else {
 lean_dec_ref(x_116);
 x_191 = lean_box(0);
}
if (lean_is_scalar(x_191)) {
 x_192 = lean_alloc_ctor(1, 4, 1);
} else {
 x_192 = x_191;
}
lean_ctor_set(x_192, 0, x_187);
lean_ctor_set(x_192, 1, x_188);
lean_ctor_set(x_192, 2, x_189);
lean_ctor_set(x_192, 3, x_190);
lean_ctor_set_uint8(x_192, sizeof(void*)*4, x_182);
x_193 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_117);
lean_ctor_set(x_193, 2, x_118);
lean_ctor_set(x_193, 3, x_119);
lean_ctor_set_uint8(x_193, sizeof(void*)*4, x_115);
x_194 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_194, 0, x_25);
lean_ctor_set(x_194, 1, x_26);
lean_ctor_set(x_194, 2, x_27);
lean_ctor_set(x_194, 3, x_193);
lean_ctor_set_uint8(x_194, sizeof(void*)*4, x_6);
return x_194;
}
}
}
}
}
}
else
{
lean_object* x_195; 
lean_dec(x_119);
lean_dec(x_118);
lean_dec(x_117);
lean_dec(x_116);
lean_dec(x_29);
x_195 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_195, 0, x_25);
lean_ctor_set(x_195, 1, x_26);
lean_ctor_set(x_195, 2, x_27);
lean_ctor_set(x_195, 3, x_114);
lean_ctor_set_uint8(x_195, sizeof(void*)*4, x_6);
return x_195;
}
block_133:
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
if (lean_is_scalar(x_29)) {
 x_130 = lean_alloc_ctor(1, 4, 1);
} else {
 x_130 = x_29;
}
lean_ctor_set(x_130, 0, x_120);
lean_ctor_set(x_130, 1, x_121);
lean_ctor_set(x_130, 2, x_122);
lean_ctor_set(x_130, 3, x_123);
lean_ctor_set_uint8(x_130, sizeof(void*)*4, x_6);
x_131 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_131, 0, x_126);
lean_ctor_set(x_131, 1, x_127);
lean_ctor_set(x_131, 2, x_128);
lean_ctor_set(x_131, 3, x_129);
lean_ctor_set_uint8(x_131, sizeof(void*)*4, x_6);
x_132 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_124);
lean_ctor_set(x_132, 2, x_125);
lean_ctor_set(x_132, 3, x_131);
lean_ctor_set_uint8(x_132, sizeof(void*)*4, x_115);
return x_132;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_RBNode_isRed___redArg(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg(x_1, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg(x_1, x_2, x_3);
x_7 = l_Lean_RBNode_setBlack___redArg(x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LiveVars_collectFnBody___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec_ref(x_2);
x_5 = l_Lean_IR_LiveVars_collectFnBody(x_4, x_1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec_ref(x_2);
x_7 = l_Lean_IR_LiveVars_collectFnBody(x_6, x_1, x_3);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LiveVars_collectFnBody(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_inc_ref(x_13);
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
lean_dec(x_1);
x_15 = l_Lean_IR_LiveVars_collectFnBody(x_14, x_2, x_3);
x_16 = l_Lean_RBNode_erase___at_____private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindVar_spec__0___redArg(x_12, x_15);
lean_dec(x_12);
x_17 = l_Lean_IR_LiveVars_collectExpr(x_13, x_16);
return x_17;
}
case 1:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_19);
x_20 = lean_ctor_get(x_1, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 3);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_box(0);
lean_inc(x_2);
x_23 = l_Lean_IR_LiveVars_collectFnBody(x_20, x_2, x_22);
x_24 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindParams(x_19, x_23);
lean_dec_ref(x_19);
x_25 = l_Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0___redArg(x_2, x_18, x_24);
x_1 = x_21;
x_2 = x_25;
goto _start;
}
case 2:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 2);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 3);
lean_inc(x_29);
lean_dec(x_1);
x_30 = l_Lean_IR_LiveVars_collectFnBody(x_29, x_2, x_3);
x_31 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArg(x_28, x_30);
x_32 = lean_box(0);
x_33 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_31, x_27, x_32);
return x_33;
}
case 3:
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_1, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_1, 2);
lean_inc(x_35);
lean_dec(x_1);
x_36 = l_Lean_IR_LiveVars_collectFnBody(x_35, x_2, x_3);
x_37 = lean_box(0);
x_38 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_36, x_34, x_37);
return x_38;
}
case 4:
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_39 = lean_ctor_get(x_1, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_1, 2);
lean_inc(x_40);
x_41 = lean_ctor_get(x_1, 3);
lean_inc(x_41);
lean_dec(x_1);
x_42 = l_Lean_IR_LiveVars_collectFnBody(x_41, x_2, x_3);
x_43 = lean_box(0);
x_44 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_42, x_40, x_43);
x_45 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_44, x_39, x_43);
return x_45;
}
case 5:
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_46 = lean_ctor_get(x_1, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_1, 3);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 5);
lean_inc(x_48);
lean_dec(x_1);
x_49 = l_Lean_IR_LiveVars_collectFnBody(x_48, x_2, x_3);
x_50 = lean_box(0);
x_51 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_49, x_47, x_50);
x_52 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_51, x_46, x_50);
return x_52;
}
case 8:
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_53 = lean_ctor_get(x_1, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_1, 1);
lean_inc(x_54);
lean_dec(x_1);
x_55 = l_Lean_IR_LiveVars_collectFnBody(x_54, x_2, x_3);
x_56 = lean_box(0);
x_57 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_55, x_53, x_56);
return x_57;
}
case 9:
{
lean_object* x_58; 
x_58 = lean_ctor_get(x_1, 1);
lean_inc(x_58);
lean_dec(x_1);
x_1 = x_58;
goto _start;
}
case 10:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_60 = lean_ctor_get(x_1, 1);
lean_inc(x_60);
x_61 = lean_ctor_get(x_1, 3);
lean_inc_ref(x_61);
lean_dec(x_1);
x_62 = lean_alloc_closure((void*)(l_Lean_IR_LiveVars_collectFnBody___lam__0), 3, 1);
lean_closure_set(x_62, 0, x_2);
x_63 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArray___redArg(x_61, x_62, x_3);
lean_dec_ref(x_61);
x_64 = lean_box(0);
x_65 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_63, x_60, x_64);
return x_65;
}
case 11:
{
lean_object* x_66; lean_object* x_67; 
lean_dec(x_2);
x_66 = lean_ctor_get(x_1, 0);
lean_inc(x_66);
lean_dec(x_1);
x_67 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArg(x_66, x_3);
return x_67;
}
case 12:
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_68 = lean_ctor_get(x_1, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_69);
lean_dec(x_1);
x_70 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArgs(x_69, x_3);
lean_dec_ref(x_69);
x_71 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectJP(x_2, x_68, x_70);
lean_dec(x_68);
lean_dec(x_2);
return x_71;
}
case 13:
{
lean_dec(x_2);
return x_3;
}
default: 
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_1, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_1, 2);
lean_inc(x_73);
lean_dec(x_1);
x_4 = x_72;
x_5 = x_73;
x_6 = x_2;
x_7 = x_3;
goto block_11;
}
}
block_11:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_IR_LiveVars_collectFnBody(x_5, x_6, x_7);
x_9 = lean_box(0);
x_10 = l_Lean_RBNode_insert___at___Lean_IR_mkLiveVarSet_spec__0___redArg(x_8, x_4, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_RBNode_ins___at___Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0_spec__0___redArg___lam__0(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LiveVars_updateJPLiveVarMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_box(0);
lean_inc(x_4);
x_6 = l_Lean_IR_LiveVars_collectFnBody(x_3, x_4, x_5);
x_7 = l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_bindParams(x_2, x_6);
x_8 = l_Lean_RBNode_insert___at___Lean_IR_LiveVars_collectFnBody_spec__0___redArg(x_4, x_1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LiveVars_updateJPLiveVarMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_LiveVars_updateJPLiveVarMap(x_1, x_2, x_3, x_4);
lean_dec_ref(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_updateLiveVars(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_LiveVars_collectExpr(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_collectLiveVars(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_LiveVars_collectFnBody(x_1, x_2, x_3);
return x_4;
}
}
lean_object* initialize_Lean_Compiler_IR_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_IR_FreeVars(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_IR_LiveVars(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_IR_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_FreeVars(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArgs___closed__0 = _init_l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArgs___closed__0();
lean_mark_persistent(l___private_Lean_Compiler_IR_LiveVars_0__Lean_IR_LiveVars_collectArgs___closed__0);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
