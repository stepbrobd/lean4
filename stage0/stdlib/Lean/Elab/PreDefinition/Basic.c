// Lean compiler output
// Module: Lean.Elab.PreDefinition.Basic
// Imports: Init.ShareCommon Lean.Compiler.MetaAttr Lean.Compiler.NoncomputableAttr Lean.Util.CollectLevelParams Lean.Util.NumObjs Lean.Util.NumApps Lean.Meta.AbstractNestedProofs Lean.Meta.ForEachExpr Lean.Meta.Eqns Lean.Elab.RecAppSyntax Lean.Elab.DefView Lean.Elab.PreDefinition.TerminationHint
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
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_abstractNestedProofs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedPreDefinition;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_setMVarUserNamesAt___spec__3___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_set___at_Lean_Environment_realizeConst___spec__3(lean_object*, lean_object*, uint8_t);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__5;
lean_object* l_Lean_Elab_CommandContextInfo_save___at_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__2;
lean_object* l_Lean_Meta_generateEagerEqns(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_shareCommonPreDefs___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__12;
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_sortDeclLevelParams(lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_expandDeclId___spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_sharecommon_quick(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addNonRec(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_div(double, double);
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileNonRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1___lambda__1___boxed(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Core_wrapAsyncAsSnapshot___spec__3___rarg(lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__2;
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Elab_Term_mkCoe___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_fixLevelParams___spec__1(lean_object*, lean_object*, size_t, size_t);
uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_CollectFVars_visit___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_profileitM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__16___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_noncomputableExt;
lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at_Lean_Elab_Term_mkCoe___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_throwError___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__6;
lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instantiateMVarsAtPreDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_levelMVarToParamTypesPreDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_filterAttrs(lean_object*, lean_object*);
uint8_t lean_get_ir_phases(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_fixLevelParams___closed__3;
uint8_t lean_float_decLt(double, double);
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__9;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_shareCommonPreDefs___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_fixLevelParams___closed__5;
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, double, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo_go(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__3;
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
static lean_object* l_Lean_Elab_fixLevelParams___lambda__1___closed__1;
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PreDefinition_filterAttrs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_fixLevelParams___lambda__1___closed__2;
extern lean_object* l_Lean_maxRecDepth;
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__1(lean_object*, lean_object*, size_t, size_t);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_CollectFVars_visit___spec__2(lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___closed__1;
lean_object* l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_DefKind_isExample(uint8_t);
lean_object* l_Lean_CollectLevelParams_main(lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__2;
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
extern lean_object* l_instInhabitedNat;
lean_object* l_List_mapTR_loop___at_Lean_mkConstWithLevelParams___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_addAndCompileUnsafe___spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_shareCommonPreDefs___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withDeclNameForAuxNaming___at_Lean_Elab_abstractNestedProofs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1(double, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__8;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_fixLevelParams___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_levelMVarToParamTypesPreDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyAttributesOf(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static double l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1;
static lean_object* l_Lean_Elab_instInhabitedPreDefinition___closed__3;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_log___at_Lean_Elab_Term_exceptionToSorry___spec__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_replace_expr(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_instInhabitedPreDefinition___closed__4;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_instInhabitedPreDefinition___closed__1;
lean_object* l_Lean_getMaxHeight(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Term_withDeclName___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompileUnsafe___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, double, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyAttributesOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__14;
static lean_object* l_Lean_Elab_fixLevelParams___closed__2;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addNonRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1___lambda__1(lean_object*);
static lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__6;
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__4;
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__3;
lean_object* l_Lean_Elab_Term_applyAttributesAt(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__7;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_PersistentArray_append___rarg(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__6;
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_diagnostics_threshold_proofSize;
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_fixLevelParams___closed__1;
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_profileitM___at_Lean_traceBlock___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe___boxed__const__1;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_shareCommonPreDefs___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instantiateMVarsAtPreDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, double, double, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at_Lean_Core_wrapAsyncAsSnapshot___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__4;
lean_object* lean_io_mono_nanos_now(lean_object*);
static double l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__4;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_abstractNestedProofs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Elab_InfoTree_substitute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_hasRecAppSyntax(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__5(lean_object*, size_t, size_t);
static lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__2;
static lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__8;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_PrettyPrinter_Delaborator_returnsPi___spec__1___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_abstractNestedProofs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler_threshold;
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__6;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_diagnostics;
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__5;
static double l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__1;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__3;
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Elab_addAndCompileUnsafe___spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Elab_addAndCompileUnsafe___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__1;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1(lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ensureNoRecFn___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__9;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_ForEachExpr_visit___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__2;
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_hasRecAppSyntax___boxed(lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__1;
static lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__5;
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
static lean_object* l_Lean_Elab_shareCommonPreDefs___closed__3;
uint8_t l_Lean_Expr_isAutoParam(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompileUnsafe___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addTermInfo_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Lean_Elab_addAndCompileUnsafe___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__2;
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__16;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_fixLevelParams___closed__6;
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__1;
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forEachExpr___at_Lean_Meta_setMVarUserNamesAt___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_ForEachExpr_visit___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__13;
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_instInhabitedPreDefinition___closed__5;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__11(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_traceAtCmdPos___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_pp_sanitizeNames;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_addAndCompileUnsafe___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isMeta(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_instInhabitedPreDefinition___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntax(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___closed__1;
lean_object* l_Lean_indentExpr(lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__2;
lean_object* l_Lean_TagDeclarationExtension_tag(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3;
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__15;
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_contains___at_Lean_registerInternalExceptionId___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
lean_object* l_Lean_Expr_numApps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addAsAxiom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, double, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_ensureNoRecFn___lambda__1___closed__1;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_instInhabitedPreDefinition___closed__7;
static lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addAsAxiom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___closed__1;
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
static lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___closed__3;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__3;
size_t lean_usize_sub(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
extern lean_object* l_Lean_diagnostics_threshold;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__4;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_numObjs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe___lambda__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ensureNoRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isNoncomputable(lean_object*);
static lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__7;
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__4;
extern lean_object* l_Lean_trace_profiler;
static lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__1;
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__7;
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isTracingEnabledFor___at_Lean_Core_wrapAsyncAsSnapshot___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_instInhabitedPreDefinition___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_shareCommonPreDefs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor(lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__8;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__1;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__8;
uint8_t lean_usize_dec_lt(size_t, size_t);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814_(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Option_register___at_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_5____spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
static lean_object* l_Lean_Elab_ensureNoRecFn___lambda__1___closed__2;
lean_object* l_Lean_mkConstWithLevelParams___at_Lean_Elab_Term_expandDeclId___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdataExpr_x21(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__2;
static lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isDiagnosticsEnabled(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_shareCommonPreDefs___closed__1;
static lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__1;
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__3;
static lean_object* l_Lean_Elab_fixLevelParams___closed__4;
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__6;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__5;
lean_object* l_Lean_MessageData_ofName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ensureNoRecFn___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__11;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___boxed(lean_object**);
lean_object* l_Lean_addDecl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor___boxed(lean_object*);
size_t lean_usize_land(size_t, size_t);
static lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_sub(double, double);
static lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_metaExt;
static lean_object* _init_l_Lean_Elab_instInhabitedPreDefinition___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedPreDefinition___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; uint8_t x_4; uint8_t x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = 0;
x_4 = 0;
x_5 = 0;
x_6 = 0;
x_7 = l_Lean_Elab_instInhabitedPreDefinition___closed__1;
x_8 = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_1);
lean_ctor_set(x_8, 2, x_7);
lean_ctor_set_uint8(x_8, sizeof(void*)*3, x_3);
lean_ctor_set_uint8(x_8, sizeof(void*)*3 + 1, x_4);
lean_ctor_set_uint8(x_8, sizeof(void*)*3 + 2, x_5);
lean_ctor_set_uint8(x_8, sizeof(void*)*3 + 3, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedPreDefinition___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_inhabitedExprDummy", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedPreDefinition___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_instInhabitedPreDefinition___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedPreDefinition___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_instInhabitedPreDefinition___closed__4;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedPreDefinition___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_1);
lean_ctor_set(x_4, 2, x_1);
lean_ctor_set(x_4, 3, x_1);
lean_ctor_set(x_4, 4, x_1);
lean_ctor_set(x_4, 5, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedPreDefinition___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = 0;
x_4 = l_Lean_Elab_instInhabitedPreDefinition___closed__2;
x_5 = lean_box(0);
x_6 = l_Lean_Elab_instInhabitedPreDefinition___closed__5;
x_7 = l_Lean_Elab_instInhabitedPreDefinition___closed__6;
x_8 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_1);
lean_ctor_set(x_8, 2, x_4);
lean_ctor_set(x_8, 3, x_5);
lean_ctor_set(x_8, 4, x_6);
lean_ctor_set(x_8, 5, x_6);
lean_ctor_set(x_8, 6, x_7);
lean_ctor_set_uint8(x_8, sizeof(void*)*7, x_3);
return x_8;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedPreDefinition() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_instInhabitedPreDefinition___closed__7;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PreDefinition_filterAttrs(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
x_5 = l_Lean_Elab_Modifiers_filterAttrs(x_4, x_2);
lean_ctor_set(x_1, 2, x_5);
return x_1;
}
else
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
x_10 = lean_ctor_get(x_1, 3);
x_11 = lean_ctor_get(x_1, 4);
x_12 = lean_ctor_get(x_1, 5);
x_13 = lean_ctor_get(x_1, 6);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_6);
lean_dec(x_1);
x_14 = l_Lean_Elab_Modifiers_filterAttrs(x_9, x_2);
x_15 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_15, 0, x_6);
lean_ctor_set(x_15, 1, x_8);
lean_ctor_set(x_15, 2, x_14);
lean_ctor_set(x_15, 3, x_10);
lean_ctor_set(x_15, 4, x_11);
lean_ctor_set(x_15, 5, x_12);
lean_ctor_set(x_15, 6, x_13);
lean_ctor_set_uint8(x_15, sizeof(void*)*7, x_7);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_usize_dec_lt(x_2, x_1);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_array_uget(x_3, x_2);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_uset(x_3, x_2, x_14);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; lean_object* x_27; 
x_17 = lean_ctor_get(x_13, 4);
x_18 = lean_ctor_get(x_13, 5);
x_19 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_ctor_set(x_13, 5, x_23);
lean_ctor_set(x_13, 4, x_20);
x_25 = 1;
x_26 = lean_usize_add(x_2, x_25);
x_27 = lean_array_uset(x_15, x_2, x_13);
x_2 = x_26;
x_3 = x_27;
x_10 = x_24;
goto _start;
}
else
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; size_t x_44; size_t x_45; lean_object* x_46; 
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get_uint8(x_13, sizeof(void*)*7);
x_31 = lean_ctor_get(x_13, 1);
x_32 = lean_ctor_get(x_13, 2);
x_33 = lean_ctor_get(x_13, 3);
x_34 = lean_ctor_get(x_13, 4);
x_35 = lean_ctor_get(x_13, 5);
x_36 = lean_ctor_get(x_13, 6);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_29);
lean_dec(x_13);
x_37 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_34, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_35, x_4, x_5, x_6, x_7, x_8, x_9, x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_43, 0, x_29);
lean_ctor_set(x_43, 1, x_31);
lean_ctor_set(x_43, 2, x_32);
lean_ctor_set(x_43, 3, x_33);
lean_ctor_set(x_43, 4, x_38);
lean_ctor_set(x_43, 5, x_41);
lean_ctor_set(x_43, 6, x_36);
lean_ctor_set_uint8(x_43, sizeof(void*)*7, x_30);
x_44 = 1;
x_45 = lean_usize_add(x_2, x_44);
x_46 = lean_array_uset(x_15, x_2, x_43);
x_2 = x_45;
x_3 = x_46;
x_10 = x_42;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instantiateMVarsAtPreDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_array_size(x_1);
x_10 = 0;
x_11 = l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1(x_9, x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_instantiateMVarsAtPreDecls___spec__1(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instantiateMVarsAtPreDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_instantiateMVarsAtPreDecls(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT uint8_t l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_usize_dec_lt(x_2, x_1);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_array_uget(x_3, x_2);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_uset(x_3, x_2, x_14);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; 
x_17 = lean_ctor_get(x_13, 4);
x_18 = l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1___closed__1;
x_19 = l_Lean_Elab_Term_levelMVarToParam(x_17, x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_ctor_set(x_13, 4, x_20);
x_22 = 1;
x_23 = lean_usize_add(x_2, x_22);
x_24 = lean_array_uset(x_15, x_2, x_13);
x_2 = x_23;
x_3 = x_24;
x_10 = x_21;
goto _start;
}
else
{
lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; size_t x_39; size_t x_40; lean_object* x_41; 
x_26 = lean_ctor_get(x_13, 0);
x_27 = lean_ctor_get_uint8(x_13, sizeof(void*)*7);
x_28 = lean_ctor_get(x_13, 1);
x_29 = lean_ctor_get(x_13, 2);
x_30 = lean_ctor_get(x_13, 3);
x_31 = lean_ctor_get(x_13, 4);
x_32 = lean_ctor_get(x_13, 5);
x_33 = lean_ctor_get(x_13, 6);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_26);
lean_dec(x_13);
x_34 = l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1___closed__1;
x_35 = l_Lean_Elab_Term_levelMVarToParam(x_31, x_34, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_38, 0, x_26);
lean_ctor_set(x_38, 1, x_28);
lean_ctor_set(x_38, 2, x_29);
lean_ctor_set(x_38, 3, x_30);
lean_ctor_set(x_38, 4, x_36);
lean_ctor_set(x_38, 5, x_32);
lean_ctor_set(x_38, 6, x_33);
lean_ctor_set_uint8(x_38, sizeof(void*)*7, x_27);
x_39 = 1;
x_40 = lean_usize_add(x_2, x_39);
x_41 = lean_array_uset(x_15, x_2, x_38);
x_2 = x_40;
x_3 = x_41;
x_10 = x_37;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_levelMVarToParamTypesPreDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_array_size(x_1);
x_10 = 0;
x_11 = l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1(x_9, x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_levelMVarToParamTypesPreDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_levelMVarToParamTypesPreDecls(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_usize_dec_lt(x_5, x_4);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_6);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; 
x_16 = lean_array_uget(x_3, x_5);
x_17 = lean_ctor_get(x_16, 4);
lean_inc(x_17);
x_18 = l_Lean_CollectLevelParams_main(x_17, x_6);
x_19 = lean_ctor_get(x_16, 5);
lean_inc(x_19);
lean_dec(x_16);
x_20 = l_Lean_CollectLevelParams_main(x_19, x_18);
x_21 = 1;
x_22 = lean_usize_add(x_5, x_21);
x_5 = x_22;
x_6 = x_20;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Nat_nextPowerOfTwo_go(x_1, x_2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__1;
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__3;
x_2 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__4;
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = lean_box(0);
x_12 = lean_array_size(x_1);
x_13 = 0;
x_14 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__5;
x_15 = l_Array_forIn_x27Unsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1(x_1, x_11, x_1, x_12, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = lean_ctor_get(x_17, 2);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_sortDeclLevelParams(x_2, x_3, x_19);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
lean_free_object(x_15);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_ctor_set_tag(x_20, 3);
x_22 = l_Lean_MessageData_ofFormat(x_20);
x_23 = l_Lean_throwError___at_Lean_Elab_Term_expandDeclId___spec__16(x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_20, 0);
lean_inc(x_24);
lean_dec(x_20);
x_25 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = l_Lean_MessageData_ofFormat(x_25);
x_27 = l_Lean_throwError___at_Lean_Elab_Term_expandDeclId___spec__16(x_26, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
return x_27;
}
}
else
{
lean_object* x_28; 
lean_dec(x_4);
x_28 = lean_ctor_get(x_20, 0);
lean_inc(x_28);
lean_dec(x_20);
lean_ctor_set(x_15, 0, x_28);
return x_15;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_15, 0);
x_30 = lean_ctor_get(x_15, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_15);
x_31 = lean_ctor_get(x_29, 2);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Elab_sortDeclLevelParams(x_2, x_3, x_31);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 x_34 = x_32;
} else {
 lean_dec_ref(x_32);
 x_34 = lean_box(0);
}
if (lean_is_scalar(x_34)) {
 x_35 = lean_alloc_ctor(3, 1, 0);
} else {
 x_35 = x_34;
 lean_ctor_set_tag(x_35, 3);
}
lean_ctor_set(x_35, 0, x_33);
x_36 = l_Lean_MessageData_ofFormat(x_35);
x_37 = l_Lean_throwError___at_Lean_Elab_Term_expandDeclId___spec__16(x_36, x_4, x_5, x_6, x_7, x_8, x_9, x_30);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_4);
x_38 = lean_ctor_get(x_32, 0);
lean_inc(x_38);
lean_dec(x_32);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_30);
return x_39;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_16 = l_Array_forIn_x27Unsafe_loop___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__1(x_1, x_2, x_3, x_14, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_16;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_fixLevelParams___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_ctor_get(x_6, 3);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_name_eq(x_7, x_1);
lean_dec(x_7);
if (x_8 == 0)
{
size_t x_9; size_t x_10; 
x_9 = 1;
x_10 = lean_usize_add(x_3, x_9);
x_3 = x_10;
goto _start;
}
else
{
uint8_t x_12; 
x_12 = 1;
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 4)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_array_get_size(x_1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_box(0);
return x_8;
}
else
{
size_t x_9; size_t x_10; uint8_t x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_11 = l_Array_anyMUnsafe_any___at_Lean_Elab_fixLevelParams___spec__1(x_4, x_1, x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_2);
x_12 = lean_box(0);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_Expr_const___override(x_4, x_2);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
else
{
lean_object* x_15; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_box(0);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_5, x_4);
if (x_7 == 0)
{
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_uget(x_6, x_5);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_6, x_5, x_9);
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_8, 4);
x_13 = lean_ctor_get(x_8, 5);
x_14 = lean_ctor_get(x_8, 1);
lean_dec(x_14);
lean_inc(x_3);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___lambda__1___boxed), 3, 2);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_3);
x_16 = lean_replace_expr(x_15, x_12);
lean_dec(x_12);
x_17 = lean_replace_expr(x_15, x_13);
lean_dec(x_13);
lean_dec(x_15);
lean_inc(x_2);
lean_ctor_set(x_8, 5, x_17);
lean_ctor_set(x_8, 4, x_16);
lean_ctor_set(x_8, 1, x_2);
x_18 = 1;
x_19 = lean_usize_add(x_5, x_18);
x_20 = lean_array_uset(x_10, x_5, x_8);
x_5 = x_19;
x_6 = x_20;
goto _start;
}
else
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; size_t x_33; size_t x_34; lean_object* x_35; 
x_22 = lean_ctor_get(x_8, 0);
x_23 = lean_ctor_get_uint8(x_8, sizeof(void*)*7);
x_24 = lean_ctor_get(x_8, 2);
x_25 = lean_ctor_get(x_8, 3);
x_26 = lean_ctor_get(x_8, 4);
x_27 = lean_ctor_get(x_8, 5);
x_28 = lean_ctor_get(x_8, 6);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_22);
lean_dec(x_8);
lean_inc(x_3);
lean_inc(x_1);
x_29 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___lambda__1___boxed), 3, 2);
lean_closure_set(x_29, 0, x_1);
lean_closure_set(x_29, 1, x_3);
x_30 = lean_replace_expr(x_29, x_26);
lean_dec(x_26);
x_31 = lean_replace_expr(x_29, x_27);
lean_dec(x_27);
lean_dec(x_29);
lean_inc(x_2);
x_32 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_32, 0, x_22);
lean_ctor_set(x_32, 1, x_2);
lean_ctor_set(x_32, 2, x_24);
lean_ctor_set(x_32, 3, x_25);
lean_ctor_set(x_32, 4, x_30);
lean_ctor_set(x_32, 5, x_31);
lean_ctor_set(x_32, 6, x_28);
lean_ctor_set_uint8(x_32, sizeof(void*)*7, x_23);
x_33 = 1;
x_34 = lean_usize_add(x_5, x_33);
x_35 = lean_array_uset(x_10, x_5, x_32);
x_5 = x_34;
x_6 = x_35;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_inc(x_11);
x_14 = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at_Lean_Elab_Term_mkCoe___spec__4(x_1, x_5, x_2, x_3, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(x_4, x_7, x_8, x_9, x_10, x_11, x_12, x_15);
lean_dec(x_11);
return x_16;
}
}
static double _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; double x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = 0;
x_3 = l_Float_ofScientific(x_1, x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, double x_8, double x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
if (x_7 == 0)
{
double x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1;
x_19 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_19, 1, x_3);
lean_ctor_set_float(x_19, sizeof(void*)*2, x_18);
lean_ctor_set_float(x_19, sizeof(void*)*2 + 8, x_18);
lean_ctor_set_uint8(x_19, sizeof(void*)*2 + 16, x_2);
x_20 = lean_box(0);
x_21 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__1(x_4, x_5, x_10, x_6, x_19, x_20, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_3);
lean_ctor_set_float(x_22, sizeof(void*)*2, x_8);
lean_ctor_set_float(x_22, sizeof(void*)*2 + 8, x_9);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 16, x_2);
x_23 = lean_box(0);
x_24 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__1(x_4, x_5, x_10, x_6, x_22, x_23, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_24;
}
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("<exception thrown while producing trace node message>", 53, 53);
return x_1;
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, double x_7, double x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 5);
lean_inc(x_18);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_5);
x_19 = lean_apply_8(x_9, x_5, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2(x_1, x_2, x_3, x_4, x_18, x_5, x_6, x_7, x_8, x_20, x_11, x_12, x_13, x_14, x_15, x_16, x_21);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
x_24 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__2;
x_25 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2(x_1, x_2, x_3, x_4, x_18, x_5, x_6, x_7, x_8, x_24, x_11, x_12, x_13, x_14, x_15, x_16, x_23);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
return x_25;
}
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_trace_profiler_useHeartbeats;
return x_1;
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_trace_profiler;
return x_1;
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_trace_profiler_threshold;
return x_1;
}
}
static double _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; double x_4; 
x_1 = lean_unsigned_to_nat(1000u);
x_2 = 0;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Float_ofScientific(x_1, x_2, x_3);
return x_4;
}
}
static double _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; double x_4; 
x_1 = lean_unsigned_to_nat(1000000000u);
x_2 = 0;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Float_ofScientific(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Elab_Term_mkCoe___spec__3___rarg(x_14, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__1;
x_20 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_1, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_116 = lean_io_mono_nanos_now(x_18);
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_119 = lean_apply_7(x_7, x_9, x_10, x_11, x_12, x_13, x_14, x_118);
if (lean_obj_tag(x_119) == 0)
{
uint8_t x_120; 
x_120 = !lean_is_exclusive(x_119);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_125; 
x_121 = lean_ctor_get(x_119, 0);
x_122 = lean_ctor_get(x_119, 1);
x_123 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_123, 0, x_121);
x_124 = lean_io_mono_nanos_now(x_122);
x_125 = !lean_is_exclusive(x_124);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; uint8_t x_128; lean_object* x_129; double x_130; double x_131; double x_132; double x_133; double x_134; lean_object* x_135; lean_object* x_136; 
x_126 = lean_ctor_get(x_124, 0);
x_127 = lean_ctor_get(x_124, 1);
x_128 = 0;
x_129 = lean_unsigned_to_nat(0u);
x_130 = l_Float_ofScientific(x_117, x_128, x_129);
lean_dec(x_117);
x_131 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_132 = lean_float_div(x_130, x_131);
x_133 = l_Float_ofScientific(x_126, x_128, x_129);
lean_dec(x_126);
x_134 = lean_float_div(x_133, x_131);
x_135 = lean_box_float(x_132);
x_136 = lean_box_float(x_134);
lean_ctor_set(x_124, 1, x_136);
lean_ctor_set(x_124, 0, x_135);
lean_ctor_set(x_119, 1, x_124);
lean_ctor_set(x_119, 0, x_123);
x_21 = x_119;
x_22 = x_127;
goto block_115;
}
else
{
lean_object* x_137; lean_object* x_138; uint8_t x_139; lean_object* x_140; double x_141; double x_142; double x_143; double x_144; double x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_137 = lean_ctor_get(x_124, 0);
x_138 = lean_ctor_get(x_124, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_124);
x_139 = 0;
x_140 = lean_unsigned_to_nat(0u);
x_141 = l_Float_ofScientific(x_117, x_139, x_140);
lean_dec(x_117);
x_142 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_143 = lean_float_div(x_141, x_142);
x_144 = l_Float_ofScientific(x_137, x_139, x_140);
lean_dec(x_137);
x_145 = lean_float_div(x_144, x_142);
x_146 = lean_box_float(x_143);
x_147 = lean_box_float(x_145);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_146);
lean_ctor_set(x_148, 1, x_147);
lean_ctor_set(x_119, 1, x_148);
lean_ctor_set(x_119, 0, x_123);
x_21 = x_119;
x_22 = x_138;
goto block_115;
}
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; uint8_t x_156; lean_object* x_157; double x_158; double x_159; double x_160; double x_161; double x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_149 = lean_ctor_get(x_119, 0);
x_150 = lean_ctor_get(x_119, 1);
lean_inc(x_150);
lean_inc(x_149);
lean_dec(x_119);
x_151 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_151, 0, x_149);
x_152 = lean_io_mono_nanos_now(x_150);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_155 = x_152;
} else {
 lean_dec_ref(x_152);
 x_155 = lean_box(0);
}
x_156 = 0;
x_157 = lean_unsigned_to_nat(0u);
x_158 = l_Float_ofScientific(x_117, x_156, x_157);
lean_dec(x_117);
x_159 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_160 = lean_float_div(x_158, x_159);
x_161 = l_Float_ofScientific(x_153, x_156, x_157);
lean_dec(x_153);
x_162 = lean_float_div(x_161, x_159);
x_163 = lean_box_float(x_160);
x_164 = lean_box_float(x_162);
if (lean_is_scalar(x_155)) {
 x_165 = lean_alloc_ctor(0, 2, 0);
} else {
 x_165 = x_155;
}
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
x_166 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_166, 0, x_151);
lean_ctor_set(x_166, 1, x_165);
x_21 = x_166;
x_22 = x_154;
goto block_115;
}
}
else
{
uint8_t x_167; 
x_167 = !lean_is_exclusive(x_119);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; 
x_168 = lean_ctor_get(x_119, 0);
x_169 = lean_ctor_get(x_119, 1);
x_170 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_170, 0, x_168);
x_171 = lean_io_mono_nanos_now(x_169);
x_172 = !lean_is_exclusive(x_171);
if (x_172 == 0)
{
lean_object* x_173; lean_object* x_174; uint8_t x_175; lean_object* x_176; double x_177; double x_178; double x_179; double x_180; double x_181; lean_object* x_182; lean_object* x_183; 
x_173 = lean_ctor_get(x_171, 0);
x_174 = lean_ctor_get(x_171, 1);
x_175 = 0;
x_176 = lean_unsigned_to_nat(0u);
x_177 = l_Float_ofScientific(x_117, x_175, x_176);
lean_dec(x_117);
x_178 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_179 = lean_float_div(x_177, x_178);
x_180 = l_Float_ofScientific(x_173, x_175, x_176);
lean_dec(x_173);
x_181 = lean_float_div(x_180, x_178);
x_182 = lean_box_float(x_179);
x_183 = lean_box_float(x_181);
lean_ctor_set(x_171, 1, x_183);
lean_ctor_set(x_171, 0, x_182);
lean_ctor_set_tag(x_119, 0);
lean_ctor_set(x_119, 1, x_171);
lean_ctor_set(x_119, 0, x_170);
x_21 = x_119;
x_22 = x_174;
goto block_115;
}
else
{
lean_object* x_184; lean_object* x_185; uint8_t x_186; lean_object* x_187; double x_188; double x_189; double x_190; double x_191; double x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_184 = lean_ctor_get(x_171, 0);
x_185 = lean_ctor_get(x_171, 1);
lean_inc(x_185);
lean_inc(x_184);
lean_dec(x_171);
x_186 = 0;
x_187 = lean_unsigned_to_nat(0u);
x_188 = l_Float_ofScientific(x_117, x_186, x_187);
lean_dec(x_117);
x_189 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_190 = lean_float_div(x_188, x_189);
x_191 = l_Float_ofScientific(x_184, x_186, x_187);
lean_dec(x_184);
x_192 = lean_float_div(x_191, x_189);
x_193 = lean_box_float(x_190);
x_194 = lean_box_float(x_192);
x_195 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set(x_195, 1, x_194);
lean_ctor_set_tag(x_119, 0);
lean_ctor_set(x_119, 1, x_195);
lean_ctor_set(x_119, 0, x_170);
x_21 = x_119;
x_22 = x_185;
goto block_115;
}
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; uint8_t x_203; lean_object* x_204; double x_205; double x_206; double x_207; double x_208; double x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_196 = lean_ctor_get(x_119, 0);
x_197 = lean_ctor_get(x_119, 1);
lean_inc(x_197);
lean_inc(x_196);
lean_dec(x_119);
x_198 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_198, 0, x_196);
x_199 = lean_io_mono_nanos_now(x_197);
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_199, 1);
lean_inc(x_201);
if (lean_is_exclusive(x_199)) {
 lean_ctor_release(x_199, 0);
 lean_ctor_release(x_199, 1);
 x_202 = x_199;
} else {
 lean_dec_ref(x_199);
 x_202 = lean_box(0);
}
x_203 = 0;
x_204 = lean_unsigned_to_nat(0u);
x_205 = l_Float_ofScientific(x_117, x_203, x_204);
lean_dec(x_117);
x_206 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_207 = lean_float_div(x_205, x_206);
x_208 = l_Float_ofScientific(x_200, x_203, x_204);
lean_dec(x_200);
x_209 = lean_float_div(x_208, x_206);
x_210 = lean_box_float(x_207);
x_211 = lean_box_float(x_209);
if (lean_is_scalar(x_202)) {
 x_212 = lean_alloc_ctor(0, 2, 0);
} else {
 x_212 = x_202;
}
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_211);
x_213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_213, 0, x_198);
lean_ctor_set(x_213, 1, x_212);
x_21 = x_213;
x_22 = x_201;
goto block_115;
}
}
block_115:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; uint8_t x_29; 
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_21, 0);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2;
x_28 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_1, x_27);
if (x_28 == 0)
{
if (x_6 == 0)
{
uint8_t x_95; 
x_95 = 0;
x_29 = x_95;
goto block_94;
}
else
{
lean_object* x_96; double x_97; double x_98; lean_object* x_99; 
x_96 = lean_box(0);
x_97 = lean_unbox_float(x_25);
lean_dec(x_25);
x_98 = lean_unbox_float(x_26);
lean_dec(x_26);
x_99 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3(x_2, x_3, x_4, x_17, x_24, x_28, x_97, x_98, x_5, x_96, x_9, x_10, x_11, x_12, x_13, x_14, x_22);
return x_99;
}
}
else
{
if (x_6 == 0)
{
double x_100; double x_101; double x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; lean_object* x_106; double x_107; double x_108; double x_109; uint8_t x_110; 
x_100 = lean_unbox_float(x_26);
x_101 = lean_unbox_float(x_25);
x_102 = lean_float_sub(x_100, x_101);
x_103 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3;
x_104 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_103);
x_105 = 0;
x_106 = lean_unsigned_to_nat(0u);
x_107 = l_Float_ofScientific(x_104, x_105, x_106);
lean_dec(x_104);
x_108 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__4;
x_109 = lean_float_div(x_107, x_108);
x_110 = lean_float_decLt(x_109, x_102);
x_29 = x_110;
goto block_94;
}
else
{
lean_object* x_111; double x_112; double x_113; lean_object* x_114; 
x_111 = lean_box(0);
x_112 = lean_unbox_float(x_25);
lean_dec(x_25);
x_113 = lean_unbox_float(x_26);
lean_dec(x_26);
x_114 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3(x_2, x_3, x_4, x_17, x_24, x_28, x_112, x_113, x_5, x_111, x_9, x_10, x_11, x_12, x_13, x_14, x_22);
return x_114;
}
}
block_94:
{
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_30 = lean_st_ref_take(x_14, x_22);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_31, 4);
lean_inc(x_32);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_ctor_get(x_31, 4);
lean_dec(x_35);
x_36 = !lean_is_exclusive(x_32);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_32, 0);
x_38 = l_Lean_PersistentArray_append___rarg(x_17, x_37);
lean_dec(x_37);
lean_ctor_set(x_32, 0, x_38);
x_39 = lean_st_ref_set(x_14, x_31, x_33);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(x_24, x_9, x_10, x_11, x_12, x_13, x_14, x_40);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_24);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
return x_41;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_41, 0);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_41);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
else
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_41);
if (x_46 == 0)
{
return x_41;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_41, 0);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_41);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint64_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_50 = lean_ctor_get_uint64(x_32, sizeof(void*)*1);
x_51 = lean_ctor_get(x_32, 0);
lean_inc(x_51);
lean_dec(x_32);
x_52 = l_Lean_PersistentArray_append___rarg(x_17, x_51);
lean_dec(x_51);
x_53 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set_uint64(x_53, sizeof(void*)*1, x_50);
lean_ctor_set(x_31, 4, x_53);
x_54 = lean_st_ref_set(x_14, x_31, x_33);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(x_24, x_9, x_10, x_11, x_12, x_13, x_14, x_55);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_24);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_59 = x_56;
} else {
 lean_dec_ref(x_56);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_56, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_56, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_63 = x_56;
} else {
 lean_dec_ref(x_56);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(1, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint64_t x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_65 = lean_ctor_get(x_31, 0);
x_66 = lean_ctor_get(x_31, 1);
x_67 = lean_ctor_get(x_31, 2);
x_68 = lean_ctor_get(x_31, 3);
x_69 = lean_ctor_get(x_31, 5);
x_70 = lean_ctor_get(x_31, 6);
x_71 = lean_ctor_get(x_31, 7);
x_72 = lean_ctor_get(x_31, 8);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_31);
x_73 = lean_ctor_get_uint64(x_32, sizeof(void*)*1);
x_74 = lean_ctor_get(x_32, 0);
lean_inc(x_74);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 x_75 = x_32;
} else {
 lean_dec_ref(x_32);
 x_75 = lean_box(0);
}
x_76 = l_Lean_PersistentArray_append___rarg(x_17, x_74);
lean_dec(x_74);
if (lean_is_scalar(x_75)) {
 x_77 = lean_alloc_ctor(0, 1, 8);
} else {
 x_77 = x_75;
}
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set_uint64(x_77, sizeof(void*)*1, x_73);
x_78 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_78, 0, x_65);
lean_ctor_set(x_78, 1, x_66);
lean_ctor_set(x_78, 2, x_67);
lean_ctor_set(x_78, 3, x_68);
lean_ctor_set(x_78, 4, x_77);
lean_ctor_set(x_78, 5, x_69);
lean_ctor_set(x_78, 6, x_70);
lean_ctor_set(x_78, 7, x_71);
lean_ctor_set(x_78, 8, x_72);
x_79 = lean_st_ref_set(x_14, x_78, x_33);
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
x_81 = l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(x_24, x_9, x_10, x_11, x_12, x_13, x_14, x_80);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_24);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_84 = x_81;
} else {
 lean_dec_ref(x_81);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_81, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_81, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_88 = x_81;
} else {
 lean_dec_ref(x_81);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
}
else
{
lean_object* x_90; double x_91; double x_92; lean_object* x_93; 
x_90 = lean_box(0);
x_91 = lean_unbox_float(x_25);
lean_dec(x_25);
x_92 = lean_unbox_float(x_26);
lean_dec(x_26);
x_93 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3(x_2, x_3, x_4, x_17, x_24, x_28, x_91, x_92, x_5, x_90, x_9, x_10, x_11, x_12, x_13, x_14, x_22);
return x_93;
}
}
}
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; 
x_307 = lean_io_get_num_heartbeats(x_18);
x_308 = lean_ctor_get(x_307, 0);
lean_inc(x_308);
x_309 = lean_ctor_get(x_307, 1);
lean_inc(x_309);
lean_dec(x_307);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_310 = lean_apply_7(x_7, x_9, x_10, x_11, x_12, x_13, x_14, x_309);
if (lean_obj_tag(x_310) == 0)
{
uint8_t x_311; 
x_311 = !lean_is_exclusive(x_310);
if (x_311 == 0)
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; uint8_t x_316; 
x_312 = lean_ctor_get(x_310, 0);
x_313 = lean_ctor_get(x_310, 1);
x_314 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_314, 0, x_312);
x_315 = lean_io_get_num_heartbeats(x_313);
x_316 = !lean_is_exclusive(x_315);
if (x_316 == 0)
{
lean_object* x_317; lean_object* x_318; uint8_t x_319; lean_object* x_320; double x_321; double x_322; lean_object* x_323; lean_object* x_324; 
x_317 = lean_ctor_get(x_315, 0);
x_318 = lean_ctor_get(x_315, 1);
x_319 = 0;
x_320 = lean_unsigned_to_nat(0u);
x_321 = l_Float_ofScientific(x_308, x_319, x_320);
lean_dec(x_308);
x_322 = l_Float_ofScientific(x_317, x_319, x_320);
lean_dec(x_317);
x_323 = lean_box_float(x_321);
x_324 = lean_box_float(x_322);
lean_ctor_set(x_315, 1, x_324);
lean_ctor_set(x_315, 0, x_323);
lean_ctor_set(x_310, 1, x_315);
lean_ctor_set(x_310, 0, x_314);
x_214 = x_310;
x_215 = x_318;
goto block_306;
}
else
{
lean_object* x_325; lean_object* x_326; uint8_t x_327; lean_object* x_328; double x_329; double x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; 
x_325 = lean_ctor_get(x_315, 0);
x_326 = lean_ctor_get(x_315, 1);
lean_inc(x_326);
lean_inc(x_325);
lean_dec(x_315);
x_327 = 0;
x_328 = lean_unsigned_to_nat(0u);
x_329 = l_Float_ofScientific(x_308, x_327, x_328);
lean_dec(x_308);
x_330 = l_Float_ofScientific(x_325, x_327, x_328);
lean_dec(x_325);
x_331 = lean_box_float(x_329);
x_332 = lean_box_float(x_330);
x_333 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_333, 0, x_331);
lean_ctor_set(x_333, 1, x_332);
lean_ctor_set(x_310, 1, x_333);
lean_ctor_set(x_310, 0, x_314);
x_214 = x_310;
x_215 = x_326;
goto block_306;
}
}
else
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; uint8_t x_341; lean_object* x_342; double x_343; double x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; 
x_334 = lean_ctor_get(x_310, 0);
x_335 = lean_ctor_get(x_310, 1);
lean_inc(x_335);
lean_inc(x_334);
lean_dec(x_310);
x_336 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_336, 0, x_334);
x_337 = lean_io_get_num_heartbeats(x_335);
x_338 = lean_ctor_get(x_337, 0);
lean_inc(x_338);
x_339 = lean_ctor_get(x_337, 1);
lean_inc(x_339);
if (lean_is_exclusive(x_337)) {
 lean_ctor_release(x_337, 0);
 lean_ctor_release(x_337, 1);
 x_340 = x_337;
} else {
 lean_dec_ref(x_337);
 x_340 = lean_box(0);
}
x_341 = 0;
x_342 = lean_unsigned_to_nat(0u);
x_343 = l_Float_ofScientific(x_308, x_341, x_342);
lean_dec(x_308);
x_344 = l_Float_ofScientific(x_338, x_341, x_342);
lean_dec(x_338);
x_345 = lean_box_float(x_343);
x_346 = lean_box_float(x_344);
if (lean_is_scalar(x_340)) {
 x_347 = lean_alloc_ctor(0, 2, 0);
} else {
 x_347 = x_340;
}
lean_ctor_set(x_347, 0, x_345);
lean_ctor_set(x_347, 1, x_346);
x_348 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_348, 0, x_336);
lean_ctor_set(x_348, 1, x_347);
x_214 = x_348;
x_215 = x_339;
goto block_306;
}
}
else
{
uint8_t x_349; 
x_349 = !lean_is_exclusive(x_310);
if (x_349 == 0)
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; uint8_t x_354; 
x_350 = lean_ctor_get(x_310, 0);
x_351 = lean_ctor_get(x_310, 1);
x_352 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_352, 0, x_350);
x_353 = lean_io_get_num_heartbeats(x_351);
x_354 = !lean_is_exclusive(x_353);
if (x_354 == 0)
{
lean_object* x_355; lean_object* x_356; uint8_t x_357; lean_object* x_358; double x_359; double x_360; lean_object* x_361; lean_object* x_362; 
x_355 = lean_ctor_get(x_353, 0);
x_356 = lean_ctor_get(x_353, 1);
x_357 = 0;
x_358 = lean_unsigned_to_nat(0u);
x_359 = l_Float_ofScientific(x_308, x_357, x_358);
lean_dec(x_308);
x_360 = l_Float_ofScientific(x_355, x_357, x_358);
lean_dec(x_355);
x_361 = lean_box_float(x_359);
x_362 = lean_box_float(x_360);
lean_ctor_set(x_353, 1, x_362);
lean_ctor_set(x_353, 0, x_361);
lean_ctor_set_tag(x_310, 0);
lean_ctor_set(x_310, 1, x_353);
lean_ctor_set(x_310, 0, x_352);
x_214 = x_310;
x_215 = x_356;
goto block_306;
}
else
{
lean_object* x_363; lean_object* x_364; uint8_t x_365; lean_object* x_366; double x_367; double x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; 
x_363 = lean_ctor_get(x_353, 0);
x_364 = lean_ctor_get(x_353, 1);
lean_inc(x_364);
lean_inc(x_363);
lean_dec(x_353);
x_365 = 0;
x_366 = lean_unsigned_to_nat(0u);
x_367 = l_Float_ofScientific(x_308, x_365, x_366);
lean_dec(x_308);
x_368 = l_Float_ofScientific(x_363, x_365, x_366);
lean_dec(x_363);
x_369 = lean_box_float(x_367);
x_370 = lean_box_float(x_368);
x_371 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_371, 0, x_369);
lean_ctor_set(x_371, 1, x_370);
lean_ctor_set_tag(x_310, 0);
lean_ctor_set(x_310, 1, x_371);
lean_ctor_set(x_310, 0, x_352);
x_214 = x_310;
x_215 = x_364;
goto block_306;
}
}
else
{
lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; uint8_t x_379; lean_object* x_380; double x_381; double x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; 
x_372 = lean_ctor_get(x_310, 0);
x_373 = lean_ctor_get(x_310, 1);
lean_inc(x_373);
lean_inc(x_372);
lean_dec(x_310);
x_374 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_374, 0, x_372);
x_375 = lean_io_get_num_heartbeats(x_373);
x_376 = lean_ctor_get(x_375, 0);
lean_inc(x_376);
x_377 = lean_ctor_get(x_375, 1);
lean_inc(x_377);
if (lean_is_exclusive(x_375)) {
 lean_ctor_release(x_375, 0);
 lean_ctor_release(x_375, 1);
 x_378 = x_375;
} else {
 lean_dec_ref(x_375);
 x_378 = lean_box(0);
}
x_379 = 0;
x_380 = lean_unsigned_to_nat(0u);
x_381 = l_Float_ofScientific(x_308, x_379, x_380);
lean_dec(x_308);
x_382 = l_Float_ofScientific(x_376, x_379, x_380);
lean_dec(x_376);
x_383 = lean_box_float(x_381);
x_384 = lean_box_float(x_382);
if (lean_is_scalar(x_378)) {
 x_385 = lean_alloc_ctor(0, 2, 0);
} else {
 x_385 = x_378;
}
lean_ctor_set(x_385, 0, x_383);
lean_ctor_set(x_385, 1, x_384);
x_386 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_386, 0, x_374);
lean_ctor_set(x_386, 1, x_385);
x_214 = x_386;
x_215 = x_377;
goto block_306;
}
}
block_306:
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; uint8_t x_221; uint8_t x_222; 
x_216 = lean_ctor_get(x_214, 1);
lean_inc(x_216);
x_217 = lean_ctor_get(x_214, 0);
lean_inc(x_217);
lean_dec(x_214);
x_218 = lean_ctor_get(x_216, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_216, 1);
lean_inc(x_219);
lean_dec(x_216);
x_220 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2;
x_221 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_1, x_220);
if (x_221 == 0)
{
if (x_6 == 0)
{
uint8_t x_288; 
x_288 = 0;
x_222 = x_288;
goto block_287;
}
else
{
lean_object* x_289; double x_290; double x_291; lean_object* x_292; 
x_289 = lean_box(0);
x_290 = lean_unbox_float(x_218);
lean_dec(x_218);
x_291 = lean_unbox_float(x_219);
lean_dec(x_219);
x_292 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3(x_2, x_3, x_4, x_17, x_217, x_221, x_290, x_291, x_5, x_289, x_9, x_10, x_11, x_12, x_13, x_14, x_215);
return x_292;
}
}
else
{
if (x_6 == 0)
{
double x_293; double x_294; double x_295; lean_object* x_296; lean_object* x_297; uint8_t x_298; lean_object* x_299; double x_300; uint8_t x_301; 
x_293 = lean_unbox_float(x_219);
x_294 = lean_unbox_float(x_218);
x_295 = lean_float_sub(x_293, x_294);
x_296 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3;
x_297 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_296);
x_298 = 0;
x_299 = lean_unsigned_to_nat(0u);
x_300 = l_Float_ofScientific(x_297, x_298, x_299);
lean_dec(x_297);
x_301 = lean_float_decLt(x_300, x_295);
x_222 = x_301;
goto block_287;
}
else
{
lean_object* x_302; double x_303; double x_304; lean_object* x_305; 
x_302 = lean_box(0);
x_303 = lean_unbox_float(x_218);
lean_dec(x_218);
x_304 = lean_unbox_float(x_219);
lean_dec(x_219);
x_305 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3(x_2, x_3, x_4, x_17, x_217, x_221, x_303, x_304, x_5, x_302, x_9, x_10, x_11, x_12, x_13, x_14, x_215);
return x_305;
}
}
block_287:
{
if (x_222 == 0)
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; uint8_t x_227; 
lean_dec(x_219);
lean_dec(x_218);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_223 = lean_st_ref_take(x_14, x_215);
x_224 = lean_ctor_get(x_223, 0);
lean_inc(x_224);
x_225 = lean_ctor_get(x_224, 4);
lean_inc(x_225);
x_226 = lean_ctor_get(x_223, 1);
lean_inc(x_226);
lean_dec(x_223);
x_227 = !lean_is_exclusive(x_224);
if (x_227 == 0)
{
lean_object* x_228; uint8_t x_229; 
x_228 = lean_ctor_get(x_224, 4);
lean_dec(x_228);
x_229 = !lean_is_exclusive(x_225);
if (x_229 == 0)
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_230 = lean_ctor_get(x_225, 0);
x_231 = l_Lean_PersistentArray_append___rarg(x_17, x_230);
lean_dec(x_230);
lean_ctor_set(x_225, 0, x_231);
x_232 = lean_st_ref_set(x_14, x_224, x_226);
x_233 = lean_ctor_get(x_232, 1);
lean_inc(x_233);
lean_dec(x_232);
x_234 = l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(x_217, x_9, x_10, x_11, x_12, x_13, x_14, x_233);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_217);
if (lean_obj_tag(x_234) == 0)
{
uint8_t x_235; 
x_235 = !lean_is_exclusive(x_234);
if (x_235 == 0)
{
return x_234;
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_236 = lean_ctor_get(x_234, 0);
x_237 = lean_ctor_get(x_234, 1);
lean_inc(x_237);
lean_inc(x_236);
lean_dec(x_234);
x_238 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_238, 0, x_236);
lean_ctor_set(x_238, 1, x_237);
return x_238;
}
}
else
{
uint8_t x_239; 
x_239 = !lean_is_exclusive(x_234);
if (x_239 == 0)
{
return x_234;
}
else
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_240 = lean_ctor_get(x_234, 0);
x_241 = lean_ctor_get(x_234, 1);
lean_inc(x_241);
lean_inc(x_240);
lean_dec(x_234);
x_242 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_242, 0, x_240);
lean_ctor_set(x_242, 1, x_241);
return x_242;
}
}
}
else
{
uint64_t x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_243 = lean_ctor_get_uint64(x_225, sizeof(void*)*1);
x_244 = lean_ctor_get(x_225, 0);
lean_inc(x_244);
lean_dec(x_225);
x_245 = l_Lean_PersistentArray_append___rarg(x_17, x_244);
lean_dec(x_244);
x_246 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set_uint64(x_246, sizeof(void*)*1, x_243);
lean_ctor_set(x_224, 4, x_246);
x_247 = lean_st_ref_set(x_14, x_224, x_226);
x_248 = lean_ctor_get(x_247, 1);
lean_inc(x_248);
lean_dec(x_247);
x_249 = l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(x_217, x_9, x_10, x_11, x_12, x_13, x_14, x_248);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_217);
if (lean_obj_tag(x_249) == 0)
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_250 = lean_ctor_get(x_249, 0);
lean_inc(x_250);
x_251 = lean_ctor_get(x_249, 1);
lean_inc(x_251);
if (lean_is_exclusive(x_249)) {
 lean_ctor_release(x_249, 0);
 lean_ctor_release(x_249, 1);
 x_252 = x_249;
} else {
 lean_dec_ref(x_249);
 x_252 = lean_box(0);
}
if (lean_is_scalar(x_252)) {
 x_253 = lean_alloc_ctor(0, 2, 0);
} else {
 x_253 = x_252;
}
lean_ctor_set(x_253, 0, x_250);
lean_ctor_set(x_253, 1, x_251);
return x_253;
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_254 = lean_ctor_get(x_249, 0);
lean_inc(x_254);
x_255 = lean_ctor_get(x_249, 1);
lean_inc(x_255);
if (lean_is_exclusive(x_249)) {
 lean_ctor_release(x_249, 0);
 lean_ctor_release(x_249, 1);
 x_256 = x_249;
} else {
 lean_dec_ref(x_249);
 x_256 = lean_box(0);
}
if (lean_is_scalar(x_256)) {
 x_257 = lean_alloc_ctor(1, 2, 0);
} else {
 x_257 = x_256;
}
lean_ctor_set(x_257, 0, x_254);
lean_ctor_set(x_257, 1, x_255);
return x_257;
}
}
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; uint64_t x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_258 = lean_ctor_get(x_224, 0);
x_259 = lean_ctor_get(x_224, 1);
x_260 = lean_ctor_get(x_224, 2);
x_261 = lean_ctor_get(x_224, 3);
x_262 = lean_ctor_get(x_224, 5);
x_263 = lean_ctor_get(x_224, 6);
x_264 = lean_ctor_get(x_224, 7);
x_265 = lean_ctor_get(x_224, 8);
lean_inc(x_265);
lean_inc(x_264);
lean_inc(x_263);
lean_inc(x_262);
lean_inc(x_261);
lean_inc(x_260);
lean_inc(x_259);
lean_inc(x_258);
lean_dec(x_224);
x_266 = lean_ctor_get_uint64(x_225, sizeof(void*)*1);
x_267 = lean_ctor_get(x_225, 0);
lean_inc(x_267);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 x_268 = x_225;
} else {
 lean_dec_ref(x_225);
 x_268 = lean_box(0);
}
x_269 = l_Lean_PersistentArray_append___rarg(x_17, x_267);
lean_dec(x_267);
if (lean_is_scalar(x_268)) {
 x_270 = lean_alloc_ctor(0, 1, 8);
} else {
 x_270 = x_268;
}
lean_ctor_set(x_270, 0, x_269);
lean_ctor_set_uint64(x_270, sizeof(void*)*1, x_266);
x_271 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_271, 0, x_258);
lean_ctor_set(x_271, 1, x_259);
lean_ctor_set(x_271, 2, x_260);
lean_ctor_set(x_271, 3, x_261);
lean_ctor_set(x_271, 4, x_270);
lean_ctor_set(x_271, 5, x_262);
lean_ctor_set(x_271, 6, x_263);
lean_ctor_set(x_271, 7, x_264);
lean_ctor_set(x_271, 8, x_265);
x_272 = lean_st_ref_set(x_14, x_271, x_226);
x_273 = lean_ctor_get(x_272, 1);
lean_inc(x_273);
lean_dec(x_272);
x_274 = l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(x_217, x_9, x_10, x_11, x_12, x_13, x_14, x_273);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_217);
if (lean_obj_tag(x_274) == 0)
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; 
x_275 = lean_ctor_get(x_274, 0);
lean_inc(x_275);
x_276 = lean_ctor_get(x_274, 1);
lean_inc(x_276);
if (lean_is_exclusive(x_274)) {
 lean_ctor_release(x_274, 0);
 lean_ctor_release(x_274, 1);
 x_277 = x_274;
} else {
 lean_dec_ref(x_274);
 x_277 = lean_box(0);
}
if (lean_is_scalar(x_277)) {
 x_278 = lean_alloc_ctor(0, 2, 0);
} else {
 x_278 = x_277;
}
lean_ctor_set(x_278, 0, x_275);
lean_ctor_set(x_278, 1, x_276);
return x_278;
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_279 = lean_ctor_get(x_274, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_274, 1);
lean_inc(x_280);
if (lean_is_exclusive(x_274)) {
 lean_ctor_release(x_274, 0);
 lean_ctor_release(x_274, 1);
 x_281 = x_274;
} else {
 lean_dec_ref(x_274);
 x_281 = lean_box(0);
}
if (lean_is_scalar(x_281)) {
 x_282 = lean_alloc_ctor(1, 2, 0);
} else {
 x_282 = x_281;
}
lean_ctor_set(x_282, 0, x_279);
lean_ctor_set(x_282, 1, x_280);
return x_282;
}
}
}
else
{
lean_object* x_283; double x_284; double x_285; lean_object* x_286; 
x_283 = lean_box(0);
x_284 = lean_unbox_float(x_218);
lean_dec(x_218);
x_285 = lean_unbox_float(x_219);
lean_dec(x_219);
x_286 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3(x_2, x_3, x_4, x_17, x_217, x_221, x_284, x_285, x_5, x_283, x_9, x_10, x_11, x_12, x_13, x_14, x_215);
return x_286;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_10, 2);
lean_inc(x_13);
lean_inc(x_1);
x_14 = l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2;
x_19 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_13, x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_20 = lean_apply_7(x_3, x_6, x_7, x_8, x_9, x_10, x_11, x_17);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_29 = lean_box(0);
x_30 = lean_unbox(x_15);
lean_dec(x_15);
x_31 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4(x_13, x_1, x_4, x_5, x_2, x_30, x_3, x_29, x_6, x_7, x_8, x_9, x_10, x_11, x_17);
lean_dec(x_13);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_14, 1);
lean_inc(x_32);
lean_dec(x_14);
x_33 = lean_box(0);
x_34 = lean_unbox(x_15);
lean_dec(x_15);
x_35 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4(x_13, x_1, x_4, x_5, x_2, x_34, x_3, x_33, x_6, x_7, x_8, x_9, x_10, x_11, x_32);
lean_dec(x_13);
return x_35;
}
}
}
static lean_object* _init_l_Lean_Elab_fixLevelParams___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("fix level params", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_fixLevelParams___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_fixLevelParams___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Elab_fixLevelParams___lambda__1___closed__2;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_box(0);
lean_inc(x_13);
x_15 = l_List_mapTR_loop___at_Lean_mkConstWithLevelParams___spec__1(x_13, x_14);
x_16 = lean_array_size(x_1);
x_17 = 0;
lean_inc(x_1);
x_18 = l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_13, x_15, x_16, x_17, x_1);
lean_ctor_set(x_11, 0, x_18);
return x_11;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_11);
x_21 = lean_box(0);
lean_inc(x_19);
x_22 = l_List_mapTR_loop___at_Lean_mkConstWithLevelParams___spec__1(x_19, x_21);
x_23 = lean_array_size(x_1);
x_24 = 0;
lean_inc(x_1);
x_25 = l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_19, x_22, x_23, x_24, x_1);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_20);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_11);
if (x_27 == 0)
{
return x_11;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_11, 0);
x_29 = lean_ctor_get(x_11, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_11);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
static lean_object* _init_l_Lean_Elab_fixLevelParams___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Elab", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_fixLevelParams___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("def", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_fixLevelParams___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("fixLevelParams", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_fixLevelParams___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_fixLevelParams___closed__1;
x_2 = l_Lean_Elab_fixLevelParams___closed__2;
x_3 = l_Lean_Elab_fixLevelParams___closed__3;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_fixLevelParams___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_fixLevelParams___lambda__1___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_fixLevelParams___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_11 = lean_ctor_get(x_8, 2);
lean_inc(x_11);
x_12 = lean_alloc_closure((void*)(l_Lean_Elab_fixLevelParams___lambda__2___boxed), 10, 3);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_3);
x_13 = l_Lean_Elab_fixLevelParams___closed__4;
x_14 = l_Lean_Elab_fixLevelParams___closed__5;
x_15 = 1;
x_16 = l_Lean_Elab_fixLevelParams___closed__6;
x_17 = lean_box(x_15);
x_18 = lean_alloc_closure((void*)(l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___boxed), 12, 5);
lean_closure_set(x_18, 0, x_13);
lean_closure_set(x_18, 1, x_14);
lean_closure_set(x_18, 2, x_12);
lean_closure_set(x_18, 3, x_17);
lean_closure_set(x_18, 4, x_16);
x_19 = l_Lean_Elab_fixLevelParams___lambda__1___closed__1;
x_20 = lean_box(0);
x_21 = l_Lean_profileitM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__16___rarg(x_19, x_11, x_18, x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_11);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_fixLevelParams___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_Elab_fixLevelParams___spec__1(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_mapMUnsafe_map___at_Lean_Elab_fixLevelParams___spec__2(x_1, x_2, x_3, x_7, x_8, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MonadExcept_ofExcept___at_Lean_Elab_fixLevelParams___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
uint8_t x_18; uint8_t x_19; double x_20; double x_21; lean_object* x_22; 
x_18 = lean_unbox(x_2);
lean_dec(x_2);
x_19 = lean_unbox(x_7);
lean_dec(x_7);
x_20 = lean_unbox_float(x_8);
lean_dec(x_8);
x_21 = lean_unbox_float(x_9);
lean_dec(x_9);
x_22 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2(x_1, x_18, x_3, x_4, x_5, x_6, x_19, x_20, x_21, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
return x_22;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
uint8_t x_18; uint8_t x_19; double x_20; double x_21; lean_object* x_22; 
x_18 = lean_unbox(x_2);
lean_dec(x_2);
x_19 = lean_unbox(x_6);
lean_dec(x_6);
x_20 = lean_unbox_float(x_7);
lean_dec(x_7);
x_21 = lean_unbox_float(x_8);
lean_dec(x_8);
x_22 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3(x_1, x_18, x_3, x_4, x_5, x_19, x_20, x_21, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_10);
return x_22;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_unbox(x_3);
lean_dec(x_3);
x_17 = lean_unbox(x_6);
lean_dec(x_6);
x_18 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4(x_1, x_2, x_16, x_4, x_5, x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_8);
lean_dec(x_1);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3(x_1, x_2, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_fixLevelParams___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_fixLevelParams___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_fixLevelParams___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; 
x_15 = lean_usize_dec_lt(x_6, x_5);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_7);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
x_17 = lean_array_uget(x_4, x_6);
x_18 = lean_ctor_get(x_17, 3);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 2);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_19, 2);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_21 = l_Lean_Elab_Term_applyAttributesAt(x_18, x_20, x_2, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = 1;
x_24 = lean_usize_add(x_6, x_23);
x_25 = lean_box(0);
x_6 = x_24;
x_7 = x_25;
x_14 = x_22;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_27 = !lean_is_exclusive(x_21);
if (x_27 == 0)
{
return x_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyAttributesOf(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_box(0);
x_11 = lean_array_size(x_1);
x_12 = 0;
x_13 = lean_box(0);
x_14 = l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1(x_1, x_2, x_10, x_1, x_11, x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; size_t x_16; size_t x_17; lean_object* x_18; 
x_15 = lean_unbox(x_2);
lean_dec(x_2);
x_16 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_17 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_18 = l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_applyAttributesOf___spec__1(x_1, x_15, x_3, x_4, x_16, x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyAttributesOf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_Elab_applyAttributesOf(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_withDeclNameForAuxNaming___at_Lean_Elab_abstractNestedProofs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 3);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_name_eq(x_12, x_1);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_14 = lean_box(0);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 2, x_14);
x_17 = lean_st_ref_take(x_6, x_10);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_18, 3);
lean_dec(x_21);
lean_ctor_set(x_18, 3, x_16);
x_22 = lean_st_ref_set(x_6, x_18, x_19);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
lean_inc(x_6);
x_24 = lean_apply_5(x_2, x_3, x_4, x_5, x_6, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_st_ref_take(x_6, x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = !lean_is_exclusive(x_28);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_28, 3);
lean_dec(x_31);
lean_ctor_set(x_28, 3, x_11);
x_32 = lean_st_ref_set(x_6, x_28, x_29);
lean_dec(x_6);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
lean_ctor_set(x_32, 0, x_25);
return x_32;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_25);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_37 = lean_ctor_get(x_28, 0);
x_38 = lean_ctor_get(x_28, 1);
x_39 = lean_ctor_get(x_28, 2);
x_40 = lean_ctor_get(x_28, 4);
x_41 = lean_ctor_get(x_28, 5);
x_42 = lean_ctor_get(x_28, 6);
x_43 = lean_ctor_get(x_28, 7);
x_44 = lean_ctor_get(x_28, 8);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_28);
x_45 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_45, 0, x_37);
lean_ctor_set(x_45, 1, x_38);
lean_ctor_set(x_45, 2, x_39);
lean_ctor_set(x_45, 3, x_11);
lean_ctor_set(x_45, 4, x_40);
lean_ctor_set(x_45, 5, x_41);
lean_ctor_set(x_45, 6, x_42);
lean_ctor_set(x_45, 7, x_43);
lean_ctor_set(x_45, 8, x_44);
x_46 = lean_st_ref_set(x_6, x_45, x_29);
lean_dec(x_6);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_48 = x_46;
} else {
 lean_dec_ref(x_46);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_25);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_50 = lean_ctor_get(x_24, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_24, 1);
lean_inc(x_51);
lean_dec(x_24);
x_52 = lean_st_ref_take(x_6, x_51);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = !lean_is_exclusive(x_53);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_56 = lean_ctor_get(x_53, 3);
lean_dec(x_56);
lean_ctor_set(x_53, 3, x_11);
x_57 = lean_st_ref_set(x_6, x_53, x_54);
lean_dec(x_6);
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_57, 0);
lean_dec(x_59);
lean_ctor_set_tag(x_57, 1);
lean_ctor_set(x_57, 0, x_50);
return x_57;
}
else
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
lean_dec(x_57);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_50);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_62 = lean_ctor_get(x_53, 0);
x_63 = lean_ctor_get(x_53, 1);
x_64 = lean_ctor_get(x_53, 2);
x_65 = lean_ctor_get(x_53, 4);
x_66 = lean_ctor_get(x_53, 5);
x_67 = lean_ctor_get(x_53, 6);
x_68 = lean_ctor_get(x_53, 7);
x_69 = lean_ctor_get(x_53, 8);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_70, 0, x_62);
lean_ctor_set(x_70, 1, x_63);
lean_ctor_set(x_70, 2, x_64);
lean_ctor_set(x_70, 3, x_11);
lean_ctor_set(x_70, 4, x_65);
lean_ctor_set(x_70, 5, x_66);
lean_ctor_set(x_70, 6, x_67);
lean_ctor_set(x_70, 7, x_68);
lean_ctor_set(x_70, 8, x_69);
x_71 = lean_st_ref_set(x_6, x_70, x_54);
lean_dec(x_6);
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_73 = x_71;
} else {
 lean_dec_ref(x_71);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_73;
 lean_ctor_set_tag(x_74, 1);
}
lean_ctor_set(x_74, 0, x_50);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_75 = lean_ctor_get(x_18, 0);
x_76 = lean_ctor_get(x_18, 1);
x_77 = lean_ctor_get(x_18, 2);
x_78 = lean_ctor_get(x_18, 4);
x_79 = lean_ctor_get(x_18, 5);
x_80 = lean_ctor_get(x_18, 6);
x_81 = lean_ctor_get(x_18, 7);
x_82 = lean_ctor_get(x_18, 8);
lean_inc(x_82);
lean_inc(x_81);
lean_inc(x_80);
lean_inc(x_79);
lean_inc(x_78);
lean_inc(x_77);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_18);
x_83 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_83, 0, x_75);
lean_ctor_set(x_83, 1, x_76);
lean_ctor_set(x_83, 2, x_77);
lean_ctor_set(x_83, 3, x_16);
lean_ctor_set(x_83, 4, x_78);
lean_ctor_set(x_83, 5, x_79);
lean_ctor_set(x_83, 6, x_80);
lean_ctor_set(x_83, 7, x_81);
lean_ctor_set(x_83, 8, x_82);
x_84 = lean_st_ref_set(x_6, x_83, x_19);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
lean_dec(x_84);
lean_inc(x_6);
x_86 = lean_apply_5(x_2, x_3, x_4, x_5, x_6, x_85);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = lean_st_ref_take(x_6, x_88);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_ctor_get(x_90, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_90, 1);
lean_inc(x_93);
x_94 = lean_ctor_get(x_90, 2);
lean_inc(x_94);
x_95 = lean_ctor_get(x_90, 4);
lean_inc(x_95);
x_96 = lean_ctor_get(x_90, 5);
lean_inc(x_96);
x_97 = lean_ctor_get(x_90, 6);
lean_inc(x_97);
x_98 = lean_ctor_get(x_90, 7);
lean_inc(x_98);
x_99 = lean_ctor_get(x_90, 8);
lean_inc(x_99);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 lean_ctor_release(x_90, 2);
 lean_ctor_release(x_90, 3);
 lean_ctor_release(x_90, 4);
 lean_ctor_release(x_90, 5);
 lean_ctor_release(x_90, 6);
 lean_ctor_release(x_90, 7);
 lean_ctor_release(x_90, 8);
 x_100 = x_90;
} else {
 lean_dec_ref(x_90);
 x_100 = lean_box(0);
}
if (lean_is_scalar(x_100)) {
 x_101 = lean_alloc_ctor(0, 9, 0);
} else {
 x_101 = x_100;
}
lean_ctor_set(x_101, 0, x_92);
lean_ctor_set(x_101, 1, x_93);
lean_ctor_set(x_101, 2, x_94);
lean_ctor_set(x_101, 3, x_11);
lean_ctor_set(x_101, 4, x_95);
lean_ctor_set(x_101, 5, x_96);
lean_ctor_set(x_101, 6, x_97);
lean_ctor_set(x_101, 7, x_98);
lean_ctor_set(x_101, 8, x_99);
x_102 = lean_st_ref_set(x_6, x_101, x_91);
lean_dec(x_6);
x_103 = lean_ctor_get(x_102, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_104 = x_102;
} else {
 lean_dec_ref(x_102);
 x_104 = lean_box(0);
}
if (lean_is_scalar(x_104)) {
 x_105 = lean_alloc_ctor(0, 2, 0);
} else {
 x_105 = x_104;
}
lean_ctor_set(x_105, 0, x_87);
lean_ctor_set(x_105, 1, x_103);
return x_105;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_106 = lean_ctor_get(x_86, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_86, 1);
lean_inc(x_107);
lean_dec(x_86);
x_108 = lean_st_ref_take(x_6, x_107);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
x_111 = lean_ctor_get(x_109, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_109, 1);
lean_inc(x_112);
x_113 = lean_ctor_get(x_109, 2);
lean_inc(x_113);
x_114 = lean_ctor_get(x_109, 4);
lean_inc(x_114);
x_115 = lean_ctor_get(x_109, 5);
lean_inc(x_115);
x_116 = lean_ctor_get(x_109, 6);
lean_inc(x_116);
x_117 = lean_ctor_get(x_109, 7);
lean_inc(x_117);
x_118 = lean_ctor_get(x_109, 8);
lean_inc(x_118);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 lean_ctor_release(x_109, 2);
 lean_ctor_release(x_109, 3);
 lean_ctor_release(x_109, 4);
 lean_ctor_release(x_109, 5);
 lean_ctor_release(x_109, 6);
 lean_ctor_release(x_109, 7);
 lean_ctor_release(x_109, 8);
 x_119 = x_109;
} else {
 lean_dec_ref(x_109);
 x_119 = lean_box(0);
}
if (lean_is_scalar(x_119)) {
 x_120 = lean_alloc_ctor(0, 9, 0);
} else {
 x_120 = x_119;
}
lean_ctor_set(x_120, 0, x_111);
lean_ctor_set(x_120, 1, x_112);
lean_ctor_set(x_120, 2, x_113);
lean_ctor_set(x_120, 3, x_11);
lean_ctor_set(x_120, 4, x_114);
lean_ctor_set(x_120, 5, x_115);
lean_ctor_set(x_120, 6, x_116);
lean_ctor_set(x_120, 7, x_117);
lean_ctor_set(x_120, 8, x_118);
x_121 = lean_st_ref_set(x_6, x_120, x_110);
lean_dec(x_6);
x_122 = lean_ctor_get(x_121, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_123 = x_121;
} else {
 lean_dec_ref(x_121);
 x_123 = lean_box(0);
}
if (lean_is_scalar(x_123)) {
 x_124 = lean_alloc_ctor(1, 2, 0);
} else {
 x_124 = x_123;
 lean_ctor_set_tag(x_124, 1);
}
lean_ctor_set(x_124, 0, x_106);
lean_ctor_set(x_124, 1, x_122);
return x_124;
}
}
}
else
{
lean_object* x_125; 
lean_dec(x_11);
lean_dec(x_1);
x_125 = lean_apply_5(x_2, x_3, x_4, x_5, x_6, x_10);
return x_125;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_abstractNestedProofs(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 3);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 4);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 5);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 6);
lean_inc(x_15);
x_16 = l_Lean_Elab_DefKind_isTheorem(x_9);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = l_Lean_Elab_DefKind_isExample(x_9);
if (x_17 == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_1);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_19 = lean_ctor_get(x_1, 6);
lean_dec(x_19);
x_20 = lean_ctor_get(x_1, 5);
lean_dec(x_20);
x_21 = lean_ctor_get(x_1, 4);
lean_dec(x_21);
x_22 = lean_ctor_get(x_1, 3);
lean_dec(x_22);
x_23 = lean_ctor_get(x_1, 2);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 1);
lean_dec(x_24);
x_25 = lean_ctor_get(x_1, 0);
lean_dec(x_25);
x_26 = !lean_is_exclusive(x_5);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_5, 5);
x_28 = l_Lean_replaceRef(x_8, x_27);
lean_dec(x_27);
lean_ctor_set(x_5, 5, x_28);
x_29 = lean_box(x_2);
x_30 = lean_alloc_closure((void*)(l_Lean_Meta_abstractNestedProofs___boxed), 7, 2);
lean_closure_set(x_30, 0, x_14);
lean_closure_set(x_30, 1, x_29);
lean_inc(x_12);
x_31 = l_Lean_withDeclNameForAuxNaming___at_Lean_Elab_abstractNestedProofs___spec__1(x_12, x_30, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_ctor_set(x_1, 5, x_33);
lean_ctor_set(x_31, 0, x_1);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_31, 0);
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_31);
lean_ctor_set(x_1, 5, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_1);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_free_object(x_1);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
x_37 = !lean_is_exclusive(x_31);
if (x_37 == 0)
{
return x_31;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_31, 0);
x_39 = lean_ctor_get(x_31, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_31);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; lean_object* x_53; uint8_t x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_41 = lean_ctor_get(x_5, 0);
x_42 = lean_ctor_get(x_5, 1);
x_43 = lean_ctor_get(x_5, 2);
x_44 = lean_ctor_get(x_5, 3);
x_45 = lean_ctor_get(x_5, 4);
x_46 = lean_ctor_get(x_5, 5);
x_47 = lean_ctor_get(x_5, 6);
x_48 = lean_ctor_get(x_5, 7);
x_49 = lean_ctor_get(x_5, 8);
x_50 = lean_ctor_get(x_5, 9);
x_51 = lean_ctor_get(x_5, 10);
x_52 = lean_ctor_get_uint8(x_5, sizeof(void*)*13);
x_53 = lean_ctor_get(x_5, 11);
x_54 = lean_ctor_get_uint8(x_5, sizeof(void*)*13 + 1);
x_55 = lean_ctor_get(x_5, 12);
lean_inc(x_55);
lean_inc(x_53);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_5);
x_56 = l_Lean_replaceRef(x_8, x_46);
lean_dec(x_46);
x_57 = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(x_57, 0, x_41);
lean_ctor_set(x_57, 1, x_42);
lean_ctor_set(x_57, 2, x_43);
lean_ctor_set(x_57, 3, x_44);
lean_ctor_set(x_57, 4, x_45);
lean_ctor_set(x_57, 5, x_56);
lean_ctor_set(x_57, 6, x_47);
lean_ctor_set(x_57, 7, x_48);
lean_ctor_set(x_57, 8, x_49);
lean_ctor_set(x_57, 9, x_50);
lean_ctor_set(x_57, 10, x_51);
lean_ctor_set(x_57, 11, x_53);
lean_ctor_set(x_57, 12, x_55);
lean_ctor_set_uint8(x_57, sizeof(void*)*13, x_52);
lean_ctor_set_uint8(x_57, sizeof(void*)*13 + 1, x_54);
x_58 = lean_box(x_2);
x_59 = lean_alloc_closure((void*)(l_Lean_Meta_abstractNestedProofs___boxed), 7, 2);
lean_closure_set(x_59, 0, x_14);
lean_closure_set(x_59, 1, x_58);
lean_inc(x_12);
x_60 = l_Lean_withDeclNameForAuxNaming___at_Lean_Elab_abstractNestedProofs___spec__1(x_12, x_59, x_3, x_4, x_57, x_6, x_7);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_63 = x_60;
} else {
 lean_dec_ref(x_60);
 x_63 = lean_box(0);
}
lean_ctor_set(x_1, 5, x_61);
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_1);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_free_object(x_1);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
x_65 = lean_ctor_get(x_60, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_60, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_67 = x_60;
} else {
 lean_dec_ref(x_60);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; lean_object* x_81; uint8_t x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_1);
x_69 = lean_ctor_get(x_5, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_5, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_5, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_5, 3);
lean_inc(x_72);
x_73 = lean_ctor_get(x_5, 4);
lean_inc(x_73);
x_74 = lean_ctor_get(x_5, 5);
lean_inc(x_74);
x_75 = lean_ctor_get(x_5, 6);
lean_inc(x_75);
x_76 = lean_ctor_get(x_5, 7);
lean_inc(x_76);
x_77 = lean_ctor_get(x_5, 8);
lean_inc(x_77);
x_78 = lean_ctor_get(x_5, 9);
lean_inc(x_78);
x_79 = lean_ctor_get(x_5, 10);
lean_inc(x_79);
x_80 = lean_ctor_get_uint8(x_5, sizeof(void*)*13);
x_81 = lean_ctor_get(x_5, 11);
lean_inc(x_81);
x_82 = lean_ctor_get_uint8(x_5, sizeof(void*)*13 + 1);
x_83 = lean_ctor_get(x_5, 12);
lean_inc(x_83);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 lean_ctor_release(x_5, 4);
 lean_ctor_release(x_5, 5);
 lean_ctor_release(x_5, 6);
 lean_ctor_release(x_5, 7);
 lean_ctor_release(x_5, 8);
 lean_ctor_release(x_5, 9);
 lean_ctor_release(x_5, 10);
 lean_ctor_release(x_5, 11);
 lean_ctor_release(x_5, 12);
 x_84 = x_5;
} else {
 lean_dec_ref(x_5);
 x_84 = lean_box(0);
}
x_85 = l_Lean_replaceRef(x_8, x_74);
lean_dec(x_74);
if (lean_is_scalar(x_84)) {
 x_86 = lean_alloc_ctor(0, 13, 2);
} else {
 x_86 = x_84;
}
lean_ctor_set(x_86, 0, x_69);
lean_ctor_set(x_86, 1, x_70);
lean_ctor_set(x_86, 2, x_71);
lean_ctor_set(x_86, 3, x_72);
lean_ctor_set(x_86, 4, x_73);
lean_ctor_set(x_86, 5, x_85);
lean_ctor_set(x_86, 6, x_75);
lean_ctor_set(x_86, 7, x_76);
lean_ctor_set(x_86, 8, x_77);
lean_ctor_set(x_86, 9, x_78);
lean_ctor_set(x_86, 10, x_79);
lean_ctor_set(x_86, 11, x_81);
lean_ctor_set(x_86, 12, x_83);
lean_ctor_set_uint8(x_86, sizeof(void*)*13, x_80);
lean_ctor_set_uint8(x_86, sizeof(void*)*13 + 1, x_82);
x_87 = lean_box(x_2);
x_88 = lean_alloc_closure((void*)(l_Lean_Meta_abstractNestedProofs___boxed), 7, 2);
lean_closure_set(x_88, 0, x_14);
lean_closure_set(x_88, 1, x_87);
lean_inc(x_12);
x_89 = l_Lean_withDeclNameForAuxNaming___at_Lean_Elab_abstractNestedProofs___spec__1(x_12, x_88, x_3, x_4, x_86, x_6, x_7);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_92 = x_89;
} else {
 lean_dec_ref(x_89);
 x_92 = lean_box(0);
}
x_93 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_93, 0, x_8);
lean_ctor_set(x_93, 1, x_10);
lean_ctor_set(x_93, 2, x_11);
lean_ctor_set(x_93, 3, x_12);
lean_ctor_set(x_93, 4, x_13);
lean_ctor_set(x_93, 5, x_90);
lean_ctor_set(x_93, 6, x_15);
lean_ctor_set_uint8(x_93, sizeof(void*)*7, x_9);
if (lean_is_scalar(x_92)) {
 x_94 = lean_alloc_ctor(0, 2, 0);
} else {
 x_94 = x_92;
}
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_91);
return x_94;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
x_95 = lean_ctor_get(x_89, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_89, 1);
lean_inc(x_96);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_97 = x_89;
} else {
 lean_dec_ref(x_89);
 x_97 = lean_box(0);
}
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(1, 2, 0);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
}
}
else
{
lean_object* x_99; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_1);
lean_ctor_set(x_99, 1, x_7);
return x_99;
}
}
else
{
lean_object* x_100; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_1);
lean_ctor_set(x_100, 1, x_7);
return x_100;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_abstractNestedProofs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Lean_Elab_abstractNestedProofs(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addAsAxiom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 3);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 4);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_11, 2, x_10);
x_12 = lean_ctor_get(x_1, 2);
x_13 = lean_ctor_get_uint8(x_12, sizeof(void*)*3 + 3);
x_14 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set_uint8(x_14, sizeof(void*)*1, x_13);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = !lean_is_exclusive(x_4);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_4, 5);
x_18 = l_Lean_replaceRef(x_7, x_17);
lean_dec(x_17);
lean_ctor_set(x_4, 5, x_18);
x_19 = l_Lean_addDecl(x_15, x_4, x_5, x_6);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_20 = lean_ctor_get(x_4, 0);
x_21 = lean_ctor_get(x_4, 1);
x_22 = lean_ctor_get(x_4, 2);
x_23 = lean_ctor_get(x_4, 3);
x_24 = lean_ctor_get(x_4, 4);
x_25 = lean_ctor_get(x_4, 5);
x_26 = lean_ctor_get(x_4, 6);
x_27 = lean_ctor_get(x_4, 7);
x_28 = lean_ctor_get(x_4, 8);
x_29 = lean_ctor_get(x_4, 9);
x_30 = lean_ctor_get(x_4, 10);
x_31 = lean_ctor_get_uint8(x_4, sizeof(void*)*13);
x_32 = lean_ctor_get(x_4, 11);
x_33 = lean_ctor_get_uint8(x_4, sizeof(void*)*13 + 1);
x_34 = lean_ctor_get(x_4, 12);
lean_inc(x_34);
lean_inc(x_32);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_4);
x_35 = l_Lean_replaceRef(x_7, x_25);
lean_dec(x_25);
x_36 = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_21);
lean_ctor_set(x_36, 2, x_22);
lean_ctor_set(x_36, 3, x_23);
lean_ctor_set(x_36, 4, x_24);
lean_ctor_set(x_36, 5, x_35);
lean_ctor_set(x_36, 6, x_26);
lean_ctor_set(x_36, 7, x_27);
lean_ctor_set(x_36, 8, x_28);
lean_ctor_set(x_36, 9, x_29);
lean_ctor_set(x_36, 10, x_30);
lean_ctor_set(x_36, 11, x_32);
lean_ctor_set(x_36, 12, x_34);
lean_ctor_set_uint8(x_36, sizeof(void*)*13, x_31);
lean_ctor_set_uint8(x_36, sizeof(void*)*13 + 1, x_33);
x_37 = l_Lean_addDecl(x_15, x_36, x_5, x_6);
return x_37;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addAsAxiom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_addAsAxiom(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
x_3 = l_Lean_Elab_DefKind_isTheorem(x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 2);
x_5 = l_Lean_Elab_Modifiers_isNoncomputable(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
else
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 5);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; 
x_10 = 1;
x_11 = l_Lean_compileDecl(x_1, x_10, x_6, x_7, x_8);
return x_11;
}
else
{
uint8_t x_12; lean_object* x_13; 
x_12 = 0;
x_13 = l_Lean_compileDecl(x_1, x_12, x_6, x_7, x_8);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
static lean_object* _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("diagnostics", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("threshold", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("proofSize", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__1;
x_2 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__2;
x_3 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__3;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("only display proof statistics when proof has at least this number of terms", 74, 74);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_unsigned_to_nat(16384u);
x_2 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__1;
x_3 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__5;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__7;
x_2 = l_Lean_Elab_fixLevelParams___closed__1;
x_3 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__1;
x_4 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__2;
x_5 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__3;
x_6 = l_Lean_Name_mkStr5(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__4;
x_3 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__6;
x_4 = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__8;
x_5 = l_Lean_Option_register___at_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_5____spec__1(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("occs", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ↦ ", 5, 3);
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1(double x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_usize_dec_lt(x_5, x_4);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_6);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_array_uget(x_6, x_5);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_array_uset(x_6, x_5, x_17);
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
x_22 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__2;
x_23 = 1;
x_24 = l_Lean_Elab_fixLevelParams___closed__6;
x_25 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set_float(x_25, sizeof(void*)*2, x_1);
lean_ctor_set_float(x_25, sizeof(void*)*2 + 8, x_1);
lean_ctor_set_uint8(x_25, sizeof(void*)*2 + 16, x_23);
x_26 = 0;
x_27 = l_Lean_MessageData_ofConstName(x_20, x_26);
lean_inc(x_2);
lean_ctor_set_tag(x_16, 7);
lean_ctor_set(x_16, 1, x_27);
lean_ctor_set(x_16, 0, x_2);
x_28 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__4;
x_29 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_29, 0, x_16);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Nat_reprFast(x_21);
x_31 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = l_Lean_MessageData_ofFormat(x_31);
x_33 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_33, 0, x_29);
lean_ctor_set(x_33, 1, x_32);
lean_inc(x_2);
x_34 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_2);
lean_inc(x_3);
x_35 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_35, 0, x_25);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set(x_35, 2, x_3);
x_36 = 1;
x_37 = lean_usize_add(x_5, x_36);
x_38 = lean_array_uset(x_18, x_5, x_35);
x_5 = x_37;
x_6 = x_38;
goto _start;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; size_t x_57; size_t x_58; lean_object* x_59; 
x_40 = lean_ctor_get(x_16, 0);
x_41 = lean_ctor_get(x_16, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_16);
x_42 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__2;
x_43 = 1;
x_44 = l_Lean_Elab_fixLevelParams___closed__6;
x_45 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_44);
lean_ctor_set_float(x_45, sizeof(void*)*2, x_1);
lean_ctor_set_float(x_45, sizeof(void*)*2 + 8, x_1);
lean_ctor_set_uint8(x_45, sizeof(void*)*2 + 16, x_43);
x_46 = 0;
x_47 = l_Lean_MessageData_ofConstName(x_40, x_46);
lean_inc(x_2);
x_48 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_48, 0, x_2);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__4;
x_50 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Nat_reprFast(x_41);
x_52 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = l_Lean_MessageData_ofFormat(x_52);
x_54 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_54, 0, x_50);
lean_ctor_set(x_54, 1, x_53);
lean_inc(x_2);
x_55 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_2);
lean_inc(x_3);
x_56 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_56, 0, x_45);
lean_ctor_set(x_56, 1, x_55);
lean_ctor_set(x_56, 2, x_3);
x_57 = 1;
x_58 = lean_usize_add(x_5, x_57);
x_59 = lean_array_uset(x_18, x_5, x_56);
x_5 = x_58;
x_6 = x_59;
goto _start;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_diagnostics_threshold_proofSize;
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("size", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__4() {
_start:
{
lean_object* x_1; double x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__3;
x_2 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1;
x_3 = 1;
x_4 = l_Lean_Elab_fixLevelParams___closed__6;
x_5 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
lean_ctor_set_float(x_5, sizeof(void*)*2, x_2);
lean_ctor_set_float(x_5, sizeof(void*)*2 + 8, x_2);
lean_ctor_set_uint8(x_5, sizeof(void*)*2 + 16, x_3);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_fixLevelParams___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_diagnostics_threshold;
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("theorem", 7, 7);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9() {
_start:
{
lean_object* x_1; double x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__8;
x_2 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1;
x_3 = 1;
x_4 = l_Lean_Elab_fixLevelParams___closed__6;
x_5 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
lean_ctor_set_float(x_5, sizeof(void*)*2, x_2);
lean_ctor_set_float(x_5, sizeof(void*)*2 + 8, x_2);
lean_ctor_set_uint8(x_5, sizeof(void*)*2 + 16, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_isDiagnosticsEnabled(x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
uint8_t x_12; 
lean_dec(x_6);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_9, 0);
lean_dec(x_13);
x_14 = lean_box(0);
lean_ctor_set(x_9, 0, x_14);
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_dec(x_9);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_dec(x_9);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_19);
x_20 = l_Lean_Expr_numObjs(x_19, x_18);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = lean_ctor_get(x_6, 2);
lean_inc(x_24);
x_25 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__1;
x_26 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_24, x_25);
x_27 = lean_nat_dec_lt(x_26, x_22);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_1);
x_28 = lean_box(0);
lean_ctor_set(x_20, 0, x_28);
return x_20;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
lean_free_object(x_20);
x_29 = l_Nat_reprFast(x_22);
x_30 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = l_Lean_MessageData_ofFormat(x_30);
x_32 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5;
x_33 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = lean_box(0);
x_36 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__4;
x_37 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__4;
x_38 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_34);
lean_ctor_set(x_38, 2, x_37);
x_39 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__6;
x_40 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_24, x_39);
lean_dec(x_24);
x_41 = l_Lean_Expr_numApps(x_19, x_40, x_23);
lean_dec(x_40);
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; size_t x_45; size_t x_46; double x_47; lean_object* x_48; uint8_t x_49; 
x_43 = lean_ctor_get(x_41, 0);
x_44 = lean_ctor_get(x_41, 1);
x_45 = lean_array_size(x_43);
x_46 = 0;
x_47 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1;
x_48 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1(x_47, x_32, x_37, x_45, x_46, x_43, x_2, x_3, x_4, x_5, x_6, x_7, x_44);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; uint8_t x_61; lean_object* x_62; 
x_50 = lean_ctor_get(x_48, 0);
x_51 = lean_ctor_get(x_48, 1);
x_52 = lean_ctor_get(x_1, 0);
lean_inc(x_52);
lean_dec(x_1);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
lean_dec(x_52);
x_54 = l_Lean_MessageData_ofName(x_53);
lean_ctor_set_tag(x_48, 7);
lean_ctor_set(x_48, 1, x_54);
lean_ctor_set(x_48, 0, x_32);
lean_ctor_set_tag(x_41, 7);
lean_ctor_set(x_41, 1, x_32);
lean_ctor_set(x_41, 0, x_48);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_38);
lean_ctor_set(x_55, 1, x_35);
x_56 = lean_array_mk(x_55);
x_57 = l_Array_append___rarg(x_56, x_50);
lean_dec(x_50);
x_58 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9;
x_59 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_41);
lean_ctor_set(x_59, 2, x_57);
x_60 = 0;
x_61 = 0;
x_62 = l_Lean_log___at_Lean_Elab_Term_exceptionToSorry___spec__2(x_59, x_60, x_61, x_2, x_3, x_4, x_5, x_6, x_7, x_51);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; uint8_t x_75; lean_object* x_76; 
x_63 = lean_ctor_get(x_48, 0);
x_64 = lean_ctor_get(x_48, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_48);
x_65 = lean_ctor_get(x_1, 0);
lean_inc(x_65);
lean_dec(x_1);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
lean_dec(x_65);
x_67 = l_Lean_MessageData_ofName(x_66);
x_68 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_68, 0, x_32);
lean_ctor_set(x_68, 1, x_67);
lean_ctor_set_tag(x_41, 7);
lean_ctor_set(x_41, 1, x_32);
lean_ctor_set(x_41, 0, x_68);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_38);
lean_ctor_set(x_69, 1, x_35);
x_70 = lean_array_mk(x_69);
x_71 = l_Array_append___rarg(x_70, x_63);
lean_dec(x_63);
x_72 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9;
x_73 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_41);
lean_ctor_set(x_73, 2, x_71);
x_74 = 0;
x_75 = 0;
x_76 = l_Lean_log___at_Lean_Elab_Term_exceptionToSorry___spec__2(x_73, x_74, x_75, x_2, x_3, x_4, x_5, x_6, x_7, x_64);
return x_76;
}
}
else
{
lean_object* x_77; lean_object* x_78; size_t x_79; size_t x_80; double x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; uint8_t x_97; lean_object* x_98; 
x_77 = lean_ctor_get(x_41, 0);
x_78 = lean_ctor_get(x_41, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_41);
x_79 = lean_array_size(x_77);
x_80 = 0;
x_81 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1;
x_82 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1(x_81, x_32, x_37, x_79, x_80, x_77, x_2, x_3, x_4, x_5, x_6, x_7, x_78);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_85 = x_82;
} else {
 lean_dec_ref(x_82);
 x_85 = lean_box(0);
}
x_86 = lean_ctor_get(x_1, 0);
lean_inc(x_86);
lean_dec(x_1);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
lean_dec(x_86);
x_88 = l_Lean_MessageData_ofName(x_87);
if (lean_is_scalar(x_85)) {
 x_89 = lean_alloc_ctor(7, 2, 0);
} else {
 x_89 = x_85;
 lean_ctor_set_tag(x_89, 7);
}
lean_ctor_set(x_89, 0, x_32);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_32);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_38);
lean_ctor_set(x_91, 1, x_35);
x_92 = lean_array_mk(x_91);
x_93 = l_Array_append___rarg(x_92, x_83);
lean_dec(x_83);
x_94 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9;
x_95 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_90);
lean_ctor_set(x_95, 2, x_93);
x_96 = 0;
x_97 = 0;
x_98 = l_Lean_log___at_Lean_Elab_Term_exceptionToSorry___spec__2(x_95, x_96, x_97, x_2, x_3, x_4, x_5, x_6, x_7, x_84);
return x_98;
}
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_99 = lean_ctor_get(x_20, 0);
x_100 = lean_ctor_get(x_20, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_20);
x_101 = lean_ctor_get(x_6, 2);
lean_inc(x_101);
x_102 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__1;
x_103 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_101, x_102);
x_104 = lean_nat_dec_lt(x_103, x_99);
lean_dec(x_103);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; 
lean_dec(x_101);
lean_dec(x_99);
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_1);
x_105 = lean_box(0);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_100);
return x_106;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; size_t x_123; size_t x_124; double x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; uint8_t x_140; uint8_t x_141; lean_object* x_142; 
x_107 = l_Nat_reprFast(x_99);
x_108 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_108, 0, x_107);
x_109 = l_Lean_MessageData_ofFormat(x_108);
x_110 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5;
x_111 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_109);
x_112 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_110);
x_113 = lean_box(0);
x_114 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__4;
x_115 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__4;
x_116 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_112);
lean_ctor_set(x_116, 2, x_115);
x_117 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__6;
x_118 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_101, x_117);
lean_dec(x_101);
x_119 = l_Lean_Expr_numApps(x_19, x_118, x_100);
lean_dec(x_118);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_122 = x_119;
} else {
 lean_dec_ref(x_119);
 x_122 = lean_box(0);
}
x_123 = lean_array_size(x_120);
x_124 = 0;
x_125 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1;
x_126 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1(x_125, x_110, x_115, x_123, x_124, x_120, x_2, x_3, x_4, x_5, x_6, x_7, x_121);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_129 = x_126;
} else {
 lean_dec_ref(x_126);
 x_129 = lean_box(0);
}
x_130 = lean_ctor_get(x_1, 0);
lean_inc(x_130);
lean_dec(x_1);
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
lean_dec(x_130);
x_132 = l_Lean_MessageData_ofName(x_131);
if (lean_is_scalar(x_129)) {
 x_133 = lean_alloc_ctor(7, 2, 0);
} else {
 x_133 = x_129;
 lean_ctor_set_tag(x_133, 7);
}
lean_ctor_set(x_133, 0, x_110);
lean_ctor_set(x_133, 1, x_132);
if (lean_is_scalar(x_122)) {
 x_134 = lean_alloc_ctor(7, 2, 0);
} else {
 x_134 = x_122;
 lean_ctor_set_tag(x_134, 7);
}
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_110);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_116);
lean_ctor_set(x_135, 1, x_113);
x_136 = lean_array_mk(x_135);
x_137 = l_Array_append___rarg(x_136, x_127);
lean_dec(x_127);
x_138 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9;
x_139 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_134);
lean_ctor_set(x_139, 2, x_137);
x_140 = 0;
x_141 = 0;
x_142 = l_Lean_log___at_Lean_Elab_Term_exceptionToSorry___spec__2(x_139, x_140, x_141, x_2, x_3, x_4, x_5, x_6, x_7, x_128);
return x_142;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
double x_14; size_t x_15; size_t x_16; lean_object* x_17; 
x_14 = lean_unbox_float(x_1);
lean_dec(x_1);
x_15 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_16 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_17 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1(x_14, x_2, x_3, x_15, x_16, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_17;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_112; uint8_t x_113; 
x_112 = lean_st_ref_get(x_3, x_10);
x_113 = !lean_is_exclusive(x_112);
if (x_113 == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; uint64_t x_118; uint64_t x_119; uint64_t x_120; uint64_t x_121; uint64_t x_122; uint64_t x_123; uint64_t x_124; size_t x_125; size_t x_126; size_t x_127; size_t x_128; size_t x_129; lean_object* x_130; lean_object* x_131; 
x_114 = lean_ctor_get(x_112, 0);
x_115 = lean_ctor_get(x_112, 1);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
lean_dec(x_114);
x_117 = lean_array_get_size(x_116);
x_118 = l_Lean_Expr_hash(x_2);
x_119 = 32;
x_120 = lean_uint64_shift_right(x_118, x_119);
x_121 = lean_uint64_xor(x_118, x_120);
x_122 = 16;
x_123 = lean_uint64_shift_right(x_121, x_122);
x_124 = lean_uint64_xor(x_121, x_123);
x_125 = lean_uint64_to_usize(x_124);
x_126 = lean_usize_of_nat(x_117);
lean_dec(x_117);
x_127 = 1;
x_128 = lean_usize_sub(x_126, x_127);
x_129 = lean_usize_land(x_125, x_128);
x_130 = lean_array_uget(x_116, x_129);
lean_dec(x_116);
x_131 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_ForEachExpr_visit___spec__1(x_2, x_130);
lean_dec(x_130);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; 
lean_free_object(x_112);
lean_inc(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_132 = lean_apply_8(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_115);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; uint8_t x_134; 
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_unbox(x_133);
lean_dec(x_133);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_135 = lean_ctor_get(x_132, 1);
lean_inc(x_135);
lean_dec(x_132);
x_136 = lean_box(0);
x_11 = x_136;
x_12 = x_135;
goto block_111;
}
else
{
switch (lean_obj_tag(x_2)) {
case 5:
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_137 = lean_ctor_get(x_132, 1);
lean_inc(x_137);
lean_dec(x_132);
x_138 = lean_ctor_get(x_2, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_2, 1);
lean_inc(x_139);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_140 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_138, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_137);
if (lean_obj_tag(x_140) == 0)
{
lean_object* x_141; lean_object* x_142; 
x_141 = lean_ctor_get(x_140, 1);
lean_inc(x_141);
lean_dec(x_140);
x_142 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_139, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_141);
if (lean_obj_tag(x_142) == 0)
{
lean_object* x_143; lean_object* x_144; 
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_142, 1);
lean_inc(x_144);
lean_dec(x_142);
x_11 = x_143;
x_12 = x_144;
goto block_111;
}
else
{
uint8_t x_145; 
lean_dec(x_2);
x_145 = !lean_is_exclusive(x_142);
if (x_145 == 0)
{
return x_142;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_146 = lean_ctor_get(x_142, 0);
x_147 = lean_ctor_get(x_142, 1);
lean_inc(x_147);
lean_inc(x_146);
lean_dec(x_142);
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_146);
lean_ctor_set(x_148, 1, x_147);
return x_148;
}
}
}
else
{
uint8_t x_149; 
lean_dec(x_139);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_149 = !lean_is_exclusive(x_140);
if (x_149 == 0)
{
return x_140;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_150 = lean_ctor_get(x_140, 0);
x_151 = lean_ctor_get(x_140, 1);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_140);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
return x_152;
}
}
}
case 6:
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_153 = lean_ctor_get(x_132, 1);
lean_inc(x_153);
lean_dec(x_132);
x_154 = lean_ctor_get(x_2, 1);
lean_inc(x_154);
x_155 = lean_ctor_get(x_2, 2);
lean_inc(x_155);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_156 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_154, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_153);
if (lean_obj_tag(x_156) == 0)
{
lean_object* x_157; lean_object* x_158; 
x_157 = lean_ctor_get(x_156, 1);
lean_inc(x_157);
lean_dec(x_156);
x_158 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_155, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_157);
if (lean_obj_tag(x_158) == 0)
{
lean_object* x_159; lean_object* x_160; 
x_159 = lean_ctor_get(x_158, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_158, 1);
lean_inc(x_160);
lean_dec(x_158);
x_11 = x_159;
x_12 = x_160;
goto block_111;
}
else
{
uint8_t x_161; 
lean_dec(x_2);
x_161 = !lean_is_exclusive(x_158);
if (x_161 == 0)
{
return x_158;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_162 = lean_ctor_get(x_158, 0);
x_163 = lean_ctor_get(x_158, 1);
lean_inc(x_163);
lean_inc(x_162);
lean_dec(x_158);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_163);
return x_164;
}
}
}
else
{
uint8_t x_165; 
lean_dec(x_155);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_165 = !lean_is_exclusive(x_156);
if (x_165 == 0)
{
return x_156;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_166 = lean_ctor_get(x_156, 0);
x_167 = lean_ctor_get(x_156, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_156);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_167);
return x_168;
}
}
}
case 7:
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_169 = lean_ctor_get(x_132, 1);
lean_inc(x_169);
lean_dec(x_132);
x_170 = lean_ctor_get(x_2, 1);
lean_inc(x_170);
x_171 = lean_ctor_get(x_2, 2);
lean_inc(x_171);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_172 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_170, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_169);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_173; lean_object* x_174; 
x_173 = lean_ctor_get(x_172, 1);
lean_inc(x_173);
lean_dec(x_172);
x_174 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_171, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_173);
if (lean_obj_tag(x_174) == 0)
{
lean_object* x_175; lean_object* x_176; 
x_175 = lean_ctor_get(x_174, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_174, 1);
lean_inc(x_176);
lean_dec(x_174);
x_11 = x_175;
x_12 = x_176;
goto block_111;
}
else
{
uint8_t x_177; 
lean_dec(x_2);
x_177 = !lean_is_exclusive(x_174);
if (x_177 == 0)
{
return x_174;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_ctor_get(x_174, 0);
x_179 = lean_ctor_get(x_174, 1);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_174);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_179);
return x_180;
}
}
}
else
{
uint8_t x_181; 
lean_dec(x_171);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_181 = !lean_is_exclusive(x_172);
if (x_181 == 0)
{
return x_172;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_172, 0);
x_183 = lean_ctor_get(x_172, 1);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_172);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_182);
lean_ctor_set(x_184, 1, x_183);
return x_184;
}
}
}
case 8:
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_185 = lean_ctor_get(x_132, 1);
lean_inc(x_185);
lean_dec(x_132);
x_186 = lean_ctor_get(x_2, 1);
lean_inc(x_186);
x_187 = lean_ctor_get(x_2, 2);
lean_inc(x_187);
x_188 = lean_ctor_get(x_2, 3);
lean_inc(x_188);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_189 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_186, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_185);
if (lean_obj_tag(x_189) == 0)
{
lean_object* x_190; lean_object* x_191; 
x_190 = lean_ctor_get(x_189, 1);
lean_inc(x_190);
lean_dec(x_189);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_191 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_187, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_190);
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_192; lean_object* x_193; 
x_192 = lean_ctor_get(x_191, 1);
lean_inc(x_192);
lean_dec(x_191);
x_193 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_188, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_192);
if (lean_obj_tag(x_193) == 0)
{
lean_object* x_194; lean_object* x_195; 
x_194 = lean_ctor_get(x_193, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_193, 1);
lean_inc(x_195);
lean_dec(x_193);
x_11 = x_194;
x_12 = x_195;
goto block_111;
}
else
{
uint8_t x_196; 
lean_dec(x_2);
x_196 = !lean_is_exclusive(x_193);
if (x_196 == 0)
{
return x_193;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_197 = lean_ctor_get(x_193, 0);
x_198 = lean_ctor_get(x_193, 1);
lean_inc(x_198);
lean_inc(x_197);
lean_dec(x_193);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_197);
lean_ctor_set(x_199, 1, x_198);
return x_199;
}
}
}
else
{
uint8_t x_200; 
lean_dec(x_188);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_200 = !lean_is_exclusive(x_191);
if (x_200 == 0)
{
return x_191;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_201 = lean_ctor_get(x_191, 0);
x_202 = lean_ctor_get(x_191, 1);
lean_inc(x_202);
lean_inc(x_201);
lean_dec(x_191);
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_201);
lean_ctor_set(x_203, 1, x_202);
return x_203;
}
}
}
else
{
uint8_t x_204; 
lean_dec(x_188);
lean_dec(x_187);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_204 = !lean_is_exclusive(x_189);
if (x_204 == 0)
{
return x_189;
}
else
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; 
x_205 = lean_ctor_get(x_189, 0);
x_206 = lean_ctor_get(x_189, 1);
lean_inc(x_206);
lean_inc(x_205);
lean_dec(x_189);
x_207 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_207, 0, x_205);
lean_ctor_set(x_207, 1, x_206);
return x_207;
}
}
}
case 10:
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_208 = lean_ctor_get(x_132, 1);
lean_inc(x_208);
lean_dec(x_132);
x_209 = lean_ctor_get(x_2, 1);
lean_inc(x_209);
x_210 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_209, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_208);
if (lean_obj_tag(x_210) == 0)
{
lean_object* x_211; lean_object* x_212; 
x_211 = lean_ctor_get(x_210, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_210, 1);
lean_inc(x_212);
lean_dec(x_210);
x_11 = x_211;
x_12 = x_212;
goto block_111;
}
else
{
uint8_t x_213; 
lean_dec(x_2);
x_213 = !lean_is_exclusive(x_210);
if (x_213 == 0)
{
return x_210;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_214 = lean_ctor_get(x_210, 0);
x_215 = lean_ctor_get(x_210, 1);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_210);
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_214);
lean_ctor_set(x_216, 1, x_215);
return x_216;
}
}
}
case 11:
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_217 = lean_ctor_get(x_132, 1);
lean_inc(x_217);
lean_dec(x_132);
x_218 = lean_ctor_get(x_2, 2);
lean_inc(x_218);
x_219 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_218, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_217);
if (lean_obj_tag(x_219) == 0)
{
lean_object* x_220; lean_object* x_221; 
x_220 = lean_ctor_get(x_219, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_219, 1);
lean_inc(x_221);
lean_dec(x_219);
x_11 = x_220;
x_12 = x_221;
goto block_111;
}
else
{
uint8_t x_222; 
lean_dec(x_2);
x_222 = !lean_is_exclusive(x_219);
if (x_222 == 0)
{
return x_219;
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_223 = lean_ctor_get(x_219, 0);
x_224 = lean_ctor_get(x_219, 1);
lean_inc(x_224);
lean_inc(x_223);
lean_dec(x_219);
x_225 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_225, 0, x_223);
lean_ctor_set(x_225, 1, x_224);
return x_225;
}
}
}
default: 
{
lean_object* x_226; lean_object* x_227; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_226 = lean_ctor_get(x_132, 1);
lean_inc(x_226);
lean_dec(x_132);
x_227 = lean_box(0);
x_11 = x_227;
x_12 = x_226;
goto block_111;
}
}
}
}
else
{
uint8_t x_228; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_228 = !lean_is_exclusive(x_132);
if (x_228 == 0)
{
return x_132;
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_229 = lean_ctor_get(x_132, 0);
x_230 = lean_ctor_get(x_132, 1);
lean_inc(x_230);
lean_inc(x_229);
lean_dec(x_132);
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_229);
lean_ctor_set(x_231, 1, x_230);
return x_231;
}
}
}
else
{
lean_object* x_232; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_232 = lean_ctor_get(x_131, 0);
lean_inc(x_232);
lean_dec(x_131);
lean_ctor_set(x_112, 0, x_232);
return x_112;
}
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; uint64_t x_237; uint64_t x_238; uint64_t x_239; uint64_t x_240; uint64_t x_241; uint64_t x_242; uint64_t x_243; size_t x_244; size_t x_245; size_t x_246; size_t x_247; size_t x_248; lean_object* x_249; lean_object* x_250; 
x_233 = lean_ctor_get(x_112, 0);
x_234 = lean_ctor_get(x_112, 1);
lean_inc(x_234);
lean_inc(x_233);
lean_dec(x_112);
x_235 = lean_ctor_get(x_233, 1);
lean_inc(x_235);
lean_dec(x_233);
x_236 = lean_array_get_size(x_235);
x_237 = l_Lean_Expr_hash(x_2);
x_238 = 32;
x_239 = lean_uint64_shift_right(x_237, x_238);
x_240 = lean_uint64_xor(x_237, x_239);
x_241 = 16;
x_242 = lean_uint64_shift_right(x_240, x_241);
x_243 = lean_uint64_xor(x_240, x_242);
x_244 = lean_uint64_to_usize(x_243);
x_245 = lean_usize_of_nat(x_236);
lean_dec(x_236);
x_246 = 1;
x_247 = lean_usize_sub(x_245, x_246);
x_248 = lean_usize_land(x_244, x_247);
x_249 = lean_array_uget(x_235, x_248);
lean_dec(x_235);
x_250 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_ForEachExpr_visit___spec__1(x_2, x_249);
lean_dec(x_249);
if (lean_obj_tag(x_250) == 0)
{
lean_object* x_251; 
lean_inc(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_251 = lean_apply_8(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_234);
if (lean_obj_tag(x_251) == 0)
{
lean_object* x_252; uint8_t x_253; 
x_252 = lean_ctor_get(x_251, 0);
lean_inc(x_252);
x_253 = lean_unbox(x_252);
lean_dec(x_252);
if (x_253 == 0)
{
lean_object* x_254; lean_object* x_255; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_254 = lean_ctor_get(x_251, 1);
lean_inc(x_254);
lean_dec(x_251);
x_255 = lean_box(0);
x_11 = x_255;
x_12 = x_254;
goto block_111;
}
else
{
switch (lean_obj_tag(x_2)) {
case 5:
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_256 = lean_ctor_get(x_251, 1);
lean_inc(x_256);
lean_dec(x_251);
x_257 = lean_ctor_get(x_2, 0);
lean_inc(x_257);
x_258 = lean_ctor_get(x_2, 1);
lean_inc(x_258);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_259 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_257, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_256);
if (lean_obj_tag(x_259) == 0)
{
lean_object* x_260; lean_object* x_261; 
x_260 = lean_ctor_get(x_259, 1);
lean_inc(x_260);
lean_dec(x_259);
x_261 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_258, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_260);
if (lean_obj_tag(x_261) == 0)
{
lean_object* x_262; lean_object* x_263; 
x_262 = lean_ctor_get(x_261, 0);
lean_inc(x_262);
x_263 = lean_ctor_get(x_261, 1);
lean_inc(x_263);
lean_dec(x_261);
x_11 = x_262;
x_12 = x_263;
goto block_111;
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; 
lean_dec(x_2);
x_264 = lean_ctor_get(x_261, 0);
lean_inc(x_264);
x_265 = lean_ctor_get(x_261, 1);
lean_inc(x_265);
if (lean_is_exclusive(x_261)) {
 lean_ctor_release(x_261, 0);
 lean_ctor_release(x_261, 1);
 x_266 = x_261;
} else {
 lean_dec_ref(x_261);
 x_266 = lean_box(0);
}
if (lean_is_scalar(x_266)) {
 x_267 = lean_alloc_ctor(1, 2, 0);
} else {
 x_267 = x_266;
}
lean_ctor_set(x_267, 0, x_264);
lean_ctor_set(x_267, 1, x_265);
return x_267;
}
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; 
lean_dec(x_258);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_268 = lean_ctor_get(x_259, 0);
lean_inc(x_268);
x_269 = lean_ctor_get(x_259, 1);
lean_inc(x_269);
if (lean_is_exclusive(x_259)) {
 lean_ctor_release(x_259, 0);
 lean_ctor_release(x_259, 1);
 x_270 = x_259;
} else {
 lean_dec_ref(x_259);
 x_270 = lean_box(0);
}
if (lean_is_scalar(x_270)) {
 x_271 = lean_alloc_ctor(1, 2, 0);
} else {
 x_271 = x_270;
}
lean_ctor_set(x_271, 0, x_268);
lean_ctor_set(x_271, 1, x_269);
return x_271;
}
}
case 6:
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_272 = lean_ctor_get(x_251, 1);
lean_inc(x_272);
lean_dec(x_251);
x_273 = lean_ctor_get(x_2, 1);
lean_inc(x_273);
x_274 = lean_ctor_get(x_2, 2);
lean_inc(x_274);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_275 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_273, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_272);
if (lean_obj_tag(x_275) == 0)
{
lean_object* x_276; lean_object* x_277; 
x_276 = lean_ctor_get(x_275, 1);
lean_inc(x_276);
lean_dec(x_275);
x_277 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_274, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_276);
if (lean_obj_tag(x_277) == 0)
{
lean_object* x_278; lean_object* x_279; 
x_278 = lean_ctor_get(x_277, 0);
lean_inc(x_278);
x_279 = lean_ctor_get(x_277, 1);
lean_inc(x_279);
lean_dec(x_277);
x_11 = x_278;
x_12 = x_279;
goto block_111;
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
lean_dec(x_2);
x_280 = lean_ctor_get(x_277, 0);
lean_inc(x_280);
x_281 = lean_ctor_get(x_277, 1);
lean_inc(x_281);
if (lean_is_exclusive(x_277)) {
 lean_ctor_release(x_277, 0);
 lean_ctor_release(x_277, 1);
 x_282 = x_277;
} else {
 lean_dec_ref(x_277);
 x_282 = lean_box(0);
}
if (lean_is_scalar(x_282)) {
 x_283 = lean_alloc_ctor(1, 2, 0);
} else {
 x_283 = x_282;
}
lean_ctor_set(x_283, 0, x_280);
lean_ctor_set(x_283, 1, x_281);
return x_283;
}
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; 
lean_dec(x_274);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_284 = lean_ctor_get(x_275, 0);
lean_inc(x_284);
x_285 = lean_ctor_get(x_275, 1);
lean_inc(x_285);
if (lean_is_exclusive(x_275)) {
 lean_ctor_release(x_275, 0);
 lean_ctor_release(x_275, 1);
 x_286 = x_275;
} else {
 lean_dec_ref(x_275);
 x_286 = lean_box(0);
}
if (lean_is_scalar(x_286)) {
 x_287 = lean_alloc_ctor(1, 2, 0);
} else {
 x_287 = x_286;
}
lean_ctor_set(x_287, 0, x_284);
lean_ctor_set(x_287, 1, x_285);
return x_287;
}
}
case 7:
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; 
x_288 = lean_ctor_get(x_251, 1);
lean_inc(x_288);
lean_dec(x_251);
x_289 = lean_ctor_get(x_2, 1);
lean_inc(x_289);
x_290 = lean_ctor_get(x_2, 2);
lean_inc(x_290);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_291 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_289, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_288);
if (lean_obj_tag(x_291) == 0)
{
lean_object* x_292; lean_object* x_293; 
x_292 = lean_ctor_get(x_291, 1);
lean_inc(x_292);
lean_dec(x_291);
x_293 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_290, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_292);
if (lean_obj_tag(x_293) == 0)
{
lean_object* x_294; lean_object* x_295; 
x_294 = lean_ctor_get(x_293, 0);
lean_inc(x_294);
x_295 = lean_ctor_get(x_293, 1);
lean_inc(x_295);
lean_dec(x_293);
x_11 = x_294;
x_12 = x_295;
goto block_111;
}
else
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; 
lean_dec(x_2);
x_296 = lean_ctor_get(x_293, 0);
lean_inc(x_296);
x_297 = lean_ctor_get(x_293, 1);
lean_inc(x_297);
if (lean_is_exclusive(x_293)) {
 lean_ctor_release(x_293, 0);
 lean_ctor_release(x_293, 1);
 x_298 = x_293;
} else {
 lean_dec_ref(x_293);
 x_298 = lean_box(0);
}
if (lean_is_scalar(x_298)) {
 x_299 = lean_alloc_ctor(1, 2, 0);
} else {
 x_299 = x_298;
}
lean_ctor_set(x_299, 0, x_296);
lean_ctor_set(x_299, 1, x_297);
return x_299;
}
}
else
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; 
lean_dec(x_290);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_300 = lean_ctor_get(x_291, 0);
lean_inc(x_300);
x_301 = lean_ctor_get(x_291, 1);
lean_inc(x_301);
if (lean_is_exclusive(x_291)) {
 lean_ctor_release(x_291, 0);
 lean_ctor_release(x_291, 1);
 x_302 = x_291;
} else {
 lean_dec_ref(x_291);
 x_302 = lean_box(0);
}
if (lean_is_scalar(x_302)) {
 x_303 = lean_alloc_ctor(1, 2, 0);
} else {
 x_303 = x_302;
}
lean_ctor_set(x_303, 0, x_300);
lean_ctor_set(x_303, 1, x_301);
return x_303;
}
}
case 8:
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; 
x_304 = lean_ctor_get(x_251, 1);
lean_inc(x_304);
lean_dec(x_251);
x_305 = lean_ctor_get(x_2, 1);
lean_inc(x_305);
x_306 = lean_ctor_get(x_2, 2);
lean_inc(x_306);
x_307 = lean_ctor_get(x_2, 3);
lean_inc(x_307);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_308 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_305, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_304);
if (lean_obj_tag(x_308) == 0)
{
lean_object* x_309; lean_object* x_310; 
x_309 = lean_ctor_get(x_308, 1);
lean_inc(x_309);
lean_dec(x_308);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_310 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_306, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_309);
if (lean_obj_tag(x_310) == 0)
{
lean_object* x_311; lean_object* x_312; 
x_311 = lean_ctor_get(x_310, 1);
lean_inc(x_311);
lean_dec(x_310);
x_312 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_307, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_311);
if (lean_obj_tag(x_312) == 0)
{
lean_object* x_313; lean_object* x_314; 
x_313 = lean_ctor_get(x_312, 0);
lean_inc(x_313);
x_314 = lean_ctor_get(x_312, 1);
lean_inc(x_314);
lean_dec(x_312);
x_11 = x_313;
x_12 = x_314;
goto block_111;
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; 
lean_dec(x_2);
x_315 = lean_ctor_get(x_312, 0);
lean_inc(x_315);
x_316 = lean_ctor_get(x_312, 1);
lean_inc(x_316);
if (lean_is_exclusive(x_312)) {
 lean_ctor_release(x_312, 0);
 lean_ctor_release(x_312, 1);
 x_317 = x_312;
} else {
 lean_dec_ref(x_312);
 x_317 = lean_box(0);
}
if (lean_is_scalar(x_317)) {
 x_318 = lean_alloc_ctor(1, 2, 0);
} else {
 x_318 = x_317;
}
lean_ctor_set(x_318, 0, x_315);
lean_ctor_set(x_318, 1, x_316);
return x_318;
}
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; 
lean_dec(x_307);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_319 = lean_ctor_get(x_310, 0);
lean_inc(x_319);
x_320 = lean_ctor_get(x_310, 1);
lean_inc(x_320);
if (lean_is_exclusive(x_310)) {
 lean_ctor_release(x_310, 0);
 lean_ctor_release(x_310, 1);
 x_321 = x_310;
} else {
 lean_dec_ref(x_310);
 x_321 = lean_box(0);
}
if (lean_is_scalar(x_321)) {
 x_322 = lean_alloc_ctor(1, 2, 0);
} else {
 x_322 = x_321;
}
lean_ctor_set(x_322, 0, x_319);
lean_ctor_set(x_322, 1, x_320);
return x_322;
}
}
else
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; 
lean_dec(x_307);
lean_dec(x_306);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_323 = lean_ctor_get(x_308, 0);
lean_inc(x_323);
x_324 = lean_ctor_get(x_308, 1);
lean_inc(x_324);
if (lean_is_exclusive(x_308)) {
 lean_ctor_release(x_308, 0);
 lean_ctor_release(x_308, 1);
 x_325 = x_308;
} else {
 lean_dec_ref(x_308);
 x_325 = lean_box(0);
}
if (lean_is_scalar(x_325)) {
 x_326 = lean_alloc_ctor(1, 2, 0);
} else {
 x_326 = x_325;
}
lean_ctor_set(x_326, 0, x_323);
lean_ctor_set(x_326, 1, x_324);
return x_326;
}
}
case 10:
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; 
x_327 = lean_ctor_get(x_251, 1);
lean_inc(x_327);
lean_dec(x_251);
x_328 = lean_ctor_get(x_2, 1);
lean_inc(x_328);
x_329 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_328, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_327);
if (lean_obj_tag(x_329) == 0)
{
lean_object* x_330; lean_object* x_331; 
x_330 = lean_ctor_get(x_329, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_329, 1);
lean_inc(x_331);
lean_dec(x_329);
x_11 = x_330;
x_12 = x_331;
goto block_111;
}
else
{
lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; 
lean_dec(x_2);
x_332 = lean_ctor_get(x_329, 0);
lean_inc(x_332);
x_333 = lean_ctor_get(x_329, 1);
lean_inc(x_333);
if (lean_is_exclusive(x_329)) {
 lean_ctor_release(x_329, 0);
 lean_ctor_release(x_329, 1);
 x_334 = x_329;
} else {
 lean_dec_ref(x_329);
 x_334 = lean_box(0);
}
if (lean_is_scalar(x_334)) {
 x_335 = lean_alloc_ctor(1, 2, 0);
} else {
 x_335 = x_334;
}
lean_ctor_set(x_335, 0, x_332);
lean_ctor_set(x_335, 1, x_333);
return x_335;
}
}
case 11:
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; 
x_336 = lean_ctor_get(x_251, 1);
lean_inc(x_336);
lean_dec(x_251);
x_337 = lean_ctor_get(x_2, 2);
lean_inc(x_337);
x_338 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_337, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_336);
if (lean_obj_tag(x_338) == 0)
{
lean_object* x_339; lean_object* x_340; 
x_339 = lean_ctor_get(x_338, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_338, 1);
lean_inc(x_340);
lean_dec(x_338);
x_11 = x_339;
x_12 = x_340;
goto block_111;
}
else
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; 
lean_dec(x_2);
x_341 = lean_ctor_get(x_338, 0);
lean_inc(x_341);
x_342 = lean_ctor_get(x_338, 1);
lean_inc(x_342);
if (lean_is_exclusive(x_338)) {
 lean_ctor_release(x_338, 0);
 lean_ctor_release(x_338, 1);
 x_343 = x_338;
} else {
 lean_dec_ref(x_338);
 x_343 = lean_box(0);
}
if (lean_is_scalar(x_343)) {
 x_344 = lean_alloc_ctor(1, 2, 0);
} else {
 x_344 = x_343;
}
lean_ctor_set(x_344, 0, x_341);
lean_ctor_set(x_344, 1, x_342);
return x_344;
}
}
default: 
{
lean_object* x_345; lean_object* x_346; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_345 = lean_ctor_get(x_251, 1);
lean_inc(x_345);
lean_dec(x_251);
x_346 = lean_box(0);
x_11 = x_346;
x_12 = x_345;
goto block_111;
}
}
}
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_347 = lean_ctor_get(x_251, 0);
lean_inc(x_347);
x_348 = lean_ctor_get(x_251, 1);
lean_inc(x_348);
if (lean_is_exclusive(x_251)) {
 lean_ctor_release(x_251, 0);
 lean_ctor_release(x_251, 1);
 x_349 = x_251;
} else {
 lean_dec_ref(x_251);
 x_349 = lean_box(0);
}
if (lean_is_scalar(x_349)) {
 x_350 = lean_alloc_ctor(1, 2, 0);
} else {
 x_350 = x_349;
}
lean_ctor_set(x_350, 0, x_347);
lean_ctor_set(x_350, 1, x_348);
return x_350;
}
}
else
{
lean_object* x_351; lean_object* x_352; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_351 = lean_ctor_get(x_250, 0);
lean_inc(x_351);
lean_dec(x_250);
x_352 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_352, 0, x_351);
lean_ctor_set(x_352, 1, x_234);
return x_352;
}
}
block_111:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_st_ref_take(x_3, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; uint64_t x_23; uint64_t x_24; uint64_t x_25; uint64_t x_26; size_t x_27; size_t x_28; size_t x_29; size_t x_30; size_t x_31; lean_object* x_32; uint8_t x_33; 
x_17 = lean_ctor_get(x_14, 0);
x_18 = lean_ctor_get(x_14, 1);
x_19 = lean_array_get_size(x_18);
x_20 = l_Lean_Expr_hash(x_2);
x_21 = 32;
x_22 = lean_uint64_shift_right(x_20, x_21);
x_23 = lean_uint64_xor(x_20, x_22);
x_24 = 16;
x_25 = lean_uint64_shift_right(x_23, x_24);
x_26 = lean_uint64_xor(x_23, x_25);
x_27 = lean_uint64_to_usize(x_26);
x_28 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_29 = 1;
x_30 = lean_usize_sub(x_28, x_29);
x_31 = lean_usize_land(x_27, x_30);
x_32 = lean_array_uget(x_18, x_31);
x_33 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_CollectFVars_visit___spec__1(x_2, x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_17, x_34);
lean_dec(x_17);
lean_inc(x_11);
x_36 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_36, 0, x_2);
lean_ctor_set(x_36, 1, x_11);
lean_ctor_set(x_36, 2, x_32);
x_37 = lean_array_uset(x_18, x_31, x_36);
x_38 = lean_unsigned_to_nat(4u);
x_39 = lean_nat_mul(x_35, x_38);
x_40 = lean_unsigned_to_nat(3u);
x_41 = lean_nat_div(x_39, x_40);
lean_dec(x_39);
x_42 = lean_array_get_size(x_37);
x_43 = lean_nat_dec_le(x_41, x_42);
lean_dec(x_42);
lean_dec(x_41);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_CollectFVars_visit___spec__2(x_37);
lean_ctor_set(x_14, 1, x_44);
lean_ctor_set(x_14, 0, x_35);
x_45 = lean_st_ref_set(x_3, x_14, x_15);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_45, 0);
lean_dec(x_47);
lean_ctor_set(x_45, 0, x_11);
return x_45;
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
lean_dec(x_45);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_11);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
else
{
lean_object* x_50; uint8_t x_51; 
lean_ctor_set(x_14, 1, x_37);
lean_ctor_set(x_14, 0, x_35);
x_50 = lean_st_ref_set(x_3, x_14, x_15);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; 
x_52 = lean_ctor_get(x_50, 0);
lean_dec(x_52);
lean_ctor_set(x_50, 0, x_11);
return x_50;
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_50, 1);
lean_inc(x_53);
lean_dec(x_50);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_11);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_55 = lean_box(0);
x_56 = lean_array_uset(x_18, x_31, x_55);
lean_inc(x_11);
x_57 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_ForEachExpr_visit___spec__6(x_2, x_11, x_32);
x_58 = lean_array_uset(x_56, x_31, x_57);
lean_ctor_set(x_14, 1, x_58);
x_59 = lean_st_ref_set(x_3, x_14, x_15);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_59, 0);
lean_dec(x_61);
lean_ctor_set(x_59, 0, x_11);
return x_59;
}
else
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_dec(x_59);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_11);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; uint64_t x_67; uint64_t x_68; uint64_t x_69; uint64_t x_70; uint64_t x_71; uint64_t x_72; uint64_t x_73; size_t x_74; size_t x_75; size_t x_76; size_t x_77; size_t x_78; lean_object* x_79; uint8_t x_80; 
x_64 = lean_ctor_get(x_14, 0);
x_65 = lean_ctor_get(x_14, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_14);
x_66 = lean_array_get_size(x_65);
x_67 = l_Lean_Expr_hash(x_2);
x_68 = 32;
x_69 = lean_uint64_shift_right(x_67, x_68);
x_70 = lean_uint64_xor(x_67, x_69);
x_71 = 16;
x_72 = lean_uint64_shift_right(x_70, x_71);
x_73 = lean_uint64_xor(x_70, x_72);
x_74 = lean_uint64_to_usize(x_73);
x_75 = lean_usize_of_nat(x_66);
lean_dec(x_66);
x_76 = 1;
x_77 = lean_usize_sub(x_75, x_76);
x_78 = lean_usize_land(x_74, x_77);
x_79 = lean_array_uget(x_65, x_78);
x_80 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_CollectFVars_visit___spec__1(x_2, x_79);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_81 = lean_unsigned_to_nat(1u);
x_82 = lean_nat_add(x_64, x_81);
lean_dec(x_64);
lean_inc(x_11);
x_83 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_83, 0, x_2);
lean_ctor_set(x_83, 1, x_11);
lean_ctor_set(x_83, 2, x_79);
x_84 = lean_array_uset(x_65, x_78, x_83);
x_85 = lean_unsigned_to_nat(4u);
x_86 = lean_nat_mul(x_82, x_85);
x_87 = lean_unsigned_to_nat(3u);
x_88 = lean_nat_div(x_86, x_87);
lean_dec(x_86);
x_89 = lean_array_get_size(x_84);
x_90 = lean_nat_dec_le(x_88, x_89);
lean_dec(x_89);
lean_dec(x_88);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_91 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_CollectFVars_visit___spec__2(x_84);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_82);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_st_ref_set(x_3, x_92, x_15);
x_94 = lean_ctor_get(x_93, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_95 = x_93;
} else {
 lean_dec_ref(x_93);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_11);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_82);
lean_ctor_set(x_97, 1, x_84);
x_98 = lean_st_ref_set(x_3, x_97, x_15);
x_99 = lean_ctor_get(x_98, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_100 = x_98;
} else {
 lean_dec_ref(x_98);
 x_100 = lean_box(0);
}
if (lean_is_scalar(x_100)) {
 x_101 = lean_alloc_ctor(0, 2, 0);
} else {
 x_101 = x_100;
}
lean_ctor_set(x_101, 0, x_11);
lean_ctor_set(x_101, 1, x_99);
return x_101;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_102 = lean_box(0);
x_103 = lean_array_uset(x_65, x_78, x_102);
lean_inc(x_11);
x_104 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_ForEachExpr_visit___spec__6(x_2, x_11, x_79);
x_105 = lean_array_uset(x_103, x_78, x_104);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_64);
lean_ctor_set(x_106, 1, x_105);
x_107 = lean_st_ref_set(x_3, x_106, x_15);
x_108 = lean_ctor_get(x_107, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 x_109 = x_107;
} else {
 lean_dec_ref(x_107);
 x_109 = lean_box(0);
}
if (lean_is_scalar(x_109)) {
 x_110 = lean_alloc_ctor(0, 2, 0);
} else {
 x_110 = x_109;
}
lean_ctor_set(x_110, 0, x_11);
lean_ctor_set(x_110, 1, x_108);
return x_110;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_9 = 1;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__1___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Invalid meta definition, '", 26, 26);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("' must be `meta` to access", 26, 26);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Invalid definition, may not access `meta` declaration '", 55, 55);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'", 1, 1);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__8;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__1;
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_st_ref_get(x_9, x_10);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_12);
x_18 = lean_get_ir_phases(x_17, x_12);
x_19 = lean_ctor_get(x_2, 2);
x_20 = l_Lean_Elab_Modifiers_isMeta(x_19);
switch (x_18) {
case 0:
{
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_free_object(x_13);
lean_dec(x_12);
x_21 = lean_box(0);
x_22 = lean_apply_8(x_11, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
return x_22;
}
else
{
uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_23 = 0;
x_24 = l_Lean_MessageData_ofConstName(x_12, x_23);
x_25 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__3;
lean_ctor_set_tag(x_13, 7);
lean_ctor_set(x_13, 1, x_24);
lean_ctor_set(x_13, 0, x_25);
x_26 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__5;
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_13);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_27, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
return x_28;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_28);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
case 1:
{
if (x_20 == 0)
{
uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_33 = 0;
x_34 = l_Lean_MessageData_ofConstName(x_12, x_33);
x_35 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__7;
lean_ctor_set_tag(x_13, 7);
lean_ctor_set(x_13, 1, x_34);
lean_ctor_set(x_13, 0, x_35);
x_36 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__9;
x_37 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_37, 0, x_13);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_37, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
return x_38;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_38);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; 
lean_free_object(x_13);
lean_dec(x_12);
x_43 = lean_box(0);
x_44 = lean_apply_8(x_11, x_43, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
return x_44;
}
}
default: 
{
lean_object* x_45; lean_object* x_46; 
lean_free_object(x_13);
lean_dec(x_12);
x_45 = lean_box(0);
x_46 = lean_apply_8(x_11, x_45, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; uint8_t x_52; 
x_47 = lean_ctor_get(x_13, 0);
x_48 = lean_ctor_get(x_13, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_13);
x_49 = lean_ctor_get(x_47, 0);
lean_inc(x_49);
lean_dec(x_47);
lean_inc(x_12);
x_50 = lean_get_ir_phases(x_49, x_12);
x_51 = lean_ctor_get(x_2, 2);
x_52 = l_Lean_Elab_Modifiers_isMeta(x_51);
switch (x_50) {
case 0:
{
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_12);
x_53 = lean_box(0);
x_54 = lean_apply_8(x_11, x_53, x_4, x_5, x_6, x_7, x_8, x_9, x_48);
return x_54;
}
else
{
uint8_t x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_55 = 0;
x_56 = l_Lean_MessageData_ofConstName(x_12, x_55);
x_57 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__3;
x_58 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
x_59 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__5;
x_60 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
x_61 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_60, x_4, x_5, x_6, x_7, x_8, x_9, x_48);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_64 = x_61;
} else {
 lean_dec_ref(x_61);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(1, 2, 0);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
case 1:
{
if (x_52 == 0)
{
uint8_t x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_66 = 0;
x_67 = l_Lean_MessageData_ofConstName(x_12, x_66);
x_68 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__7;
x_69 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
x_70 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__9;
x_71 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
x_72 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_71, x_4, x_5, x_6, x_7, x_8, x_9, x_48);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_75 = x_72;
} else {
 lean_dec_ref(x_72);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_75;
}
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; 
lean_dec(x_12);
x_77 = lean_box(0);
x_78 = lean_apply_8(x_11, x_77, x_4, x_5, x_6, x_7, x_8, x_9, x_48);
return x_78;
}
}
default: 
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_12);
x_79 = lean_box(0);
x_80 = lean_apply_8(x_11, x_79, x_4, x_5, x_6, x_7, x_8, x_9, x_48);
return x_80;
}
}
}
}
else
{
lean_object* x_81; lean_object* x_82; 
lean_dec(x_1);
x_81 = lean_box(0);
x_82 = lean_apply_8(x_11, x_81, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_82;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Lean_Expr_isAutoParam(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2(x_2, x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = 0;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_9);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_1, 5);
lean_inc(x_9);
x_10 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__3___boxed), 9, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__3;
x_12 = lean_st_mk_ref(x_11, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_10, x_9, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_st_ref_get(x_13, x_17);
lean_dec(x_13);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_16);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_13);
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
return x_15;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_ForEachExpr_visit___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__5(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_4, x_3);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_array_uget(x_5, x_4);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_5, x_4, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_18 = l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__4(x_1, x_2, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 1;
x_22 = lean_usize_add(x_4, x_21);
x_23 = lean_array_uset(x_17, x_4, x_19);
x_4 = x_22;
x_5 = x_23;
x_12 = x_20;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_18);
if (x_25 == 0)
{
return x_18;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_18, 0);
x_27 = lean_ctor_get(x_18, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_18);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_4, x_3);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_array_uget(x_5, x_4);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_5, x_4, x_16);
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
x_19 = l_Lean_Elab_InfoTree_substitute(x_15, x_18);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_20 = lean_apply_7(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = lean_usize_add(x_4, x_23);
x_25 = lean_array_uset(x_17, x_4, x_19);
x_4 = x_24;
x_5 = x_25;
x_12 = x_22;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_28 = lean_ctor_get(x_21, 0);
lean_inc(x_28);
lean_dec(x_21);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_19);
x_30 = 1;
x_31 = lean_usize_add(x_4, x_30);
x_32 = lean_array_uset(x_17, x_4, x_29);
x_4 = x_31;
x_5 = x_32;
x_12 = x_27;
goto _start;
}
}
else
{
uint8_t x_34; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_20);
if (x_34 == 0)
{
return x_20;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_20, 0);
x_36 = lean_ctor_get(x_20, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_20);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_array_size(x_12);
x_14 = 0;
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__5(x_1, x_2, x_13, x_14, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_ctor_set(x_3, 0, x_17);
lean_ctor_set(x_15, 0, x_3);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_15, 0);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_15);
lean_ctor_set(x_3, 0, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_free_object(x_3);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; size_t x_26; size_t x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_3, 0);
lean_inc(x_25);
lean_dec(x_3);
x_26 = lean_array_size(x_25);
x_27 = 0;
x_28 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__5(x_1, x_2, x_26, x_27, x_25, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_29);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_28, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_36 = x_28;
} else {
 lean_dec_ref(x_28);
 x_36 = lean_box(0);
}
if (lean_is_scalar(x_36)) {
 x_37 = lean_alloc_ctor(1, 2, 0);
} else {
 x_37 = x_36;
}
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
}
else
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_3);
if (x_38 == 0)
{
lean_object* x_39; size_t x_40; size_t x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_3, 0);
x_40 = lean_array_size(x_39);
x_41 = 0;
x_42 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__6(x_1, x_2, x_40, x_41, x_39, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_42) == 0)
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_42, 0);
lean_ctor_set(x_3, 0, x_44);
lean_ctor_set(x_42, 0, x_3);
return x_42;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_42, 0);
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_42);
lean_ctor_set(x_3, 0, x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_3);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_free_object(x_3);
x_48 = !lean_is_exclusive(x_42);
if (x_48 == 0)
{
return x_42;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_42, 0);
x_50 = lean_ctor_get(x_42, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_42);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; size_t x_53; size_t x_54; lean_object* x_55; 
x_52 = lean_ctor_get(x_3, 0);
lean_inc(x_52);
lean_dec(x_3);
x_53 = lean_array_size(x_52);
x_54 = 0;
x_55 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__6(x_1, x_2, x_53, x_54, x_52, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_58 = x_55;
} else {
 lean_dec_ref(x_55);
 x_58 = lean_box(0);
}
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_56);
if (lean_is_scalar(x_58)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_58;
}
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_55, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_55, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_63 = x_55;
} else {
 lean_dec_ref(x_55);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(1, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__7(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_4, x_3);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_array_uget(x_5, x_4);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_5, x_4, x_16);
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
x_19 = l_Lean_Elab_InfoTree_substitute(x_15, x_18);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_20 = lean_apply_7(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = lean_usize_add(x_4, x_23);
x_25 = lean_array_uset(x_17, x_4, x_19);
x_4 = x_24;
x_5 = x_25;
x_12 = x_22;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_28 = lean_ctor_get(x_21, 0);
lean_inc(x_28);
lean_dec(x_21);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_19);
x_30 = 1;
x_31 = lean_usize_add(x_4, x_30);
x_32 = lean_array_uset(x_17, x_4, x_29);
x_4 = x_31;
x_5 = x_32;
x_12 = x_27;
goto _start;
}
}
else
{
uint8_t x_34; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_20);
if (x_34 == 0)
{
return x_20;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_20, 0);
x_36 = lean_ctor_get(x_20, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_20);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
x_14 = lean_ctor_get(x_3, 2);
x_15 = lean_ctor_get(x_3, 3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_16 = l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__4(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_array_size(x_13);
x_20 = 0;
x_21 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__7(x_1, x_2, x_19, x_20, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_ctor_set(x_3, 1, x_23);
lean_ctor_set(x_3, 0, x_17);
lean_ctor_set(x_21, 0, x_3);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_21, 0);
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_21);
lean_ctor_set(x_3, 1, x_24);
lean_ctor_set(x_3, 0, x_17);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_3);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_17);
lean_free_object(x_3);
lean_dec(x_15);
lean_dec(x_14);
x_27 = !lean_is_exclusive(x_21);
if (x_27 == 0)
{
return x_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_free_object(x_3);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_16);
if (x_31 == 0)
{
return x_16;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_16, 0);
x_33 = lean_ctor_get(x_16, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_16);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; size_t x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_3, 0);
x_36 = lean_ctor_get(x_3, 1);
x_37 = lean_ctor_get(x_3, 2);
x_38 = lean_ctor_get_usize(x_3, 4);
x_39 = lean_ctor_get(x_3, 3);
lean_inc(x_39);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_40 = l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__4(x_1, x_2, x_35, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; size_t x_43; size_t x_44; lean_object* x_45; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_array_size(x_36);
x_44 = 0;
x_45 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__7(x_1, x_2, x_43, x_44, x_36, x_4, x_5, x_6, x_7, x_8, x_9, x_42);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_48 = x_45;
} else {
 lean_dec_ref(x_45);
 x_48 = lean_box(0);
}
x_49 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_49, 0, x_41);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set(x_49, 2, x_37);
lean_ctor_set(x_49, 3, x_39);
lean_ctor_set_usize(x_49, 4, x_38);
if (lean_is_scalar(x_48)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_48;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_47);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_41);
lean_dec(x_39);
lean_dec(x_37);
x_51 = lean_ctor_get(x_45, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_45, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_53 = x_45;
} else {
 lean_dec_ref(x_45);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(1, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_39);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_55 = lean_ctor_get(x_40, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_40, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_57 = x_40;
} else {
 lean_dec_ref(x_40);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(1, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__10(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_4, x_3);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_array_uget(x_5, x_4);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_5, x_4, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_18 = l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__9(x_1, x_2, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 1;
x_22 = lean_usize_add(x_4, x_21);
x_23 = lean_array_uset(x_17, x_4, x_19);
x_4 = x_22;
x_5 = x_23;
x_12 = x_20;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_18);
if (x_25 == 0)
{
return x_18;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_18, 0);
x_27 = lean_ctor_get(x_18, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_18);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__11(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_4, x_3);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_array_uget(x_5, x_4);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_5, x_4, x_16);
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
x_19 = l_Lean_Elab_InfoTree_substitute(x_15, x_18);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_20 = lean_apply_7(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = lean_usize_add(x_4, x_23);
x_25 = lean_array_uset(x_17, x_4, x_19);
x_4 = x_24;
x_5 = x_25;
x_12 = x_22;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_28 = lean_ctor_get(x_21, 0);
lean_inc(x_28);
lean_dec(x_21);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_19);
x_30 = 1;
x_31 = lean_usize_add(x_4, x_30);
x_32 = lean_array_uset(x_17, x_4, x_29);
x_4 = x_31;
x_5 = x_32;
x_12 = x_27;
goto _start;
}
}
else
{
uint8_t x_34; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_20);
if (x_34 == 0)
{
return x_20;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_20, 0);
x_36 = lean_ctor_get(x_20, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_20);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_array_size(x_12);
x_14 = 0;
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__10(x_1, x_2, x_13, x_14, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_ctor_set(x_3, 0, x_17);
lean_ctor_set(x_15, 0, x_3);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_15, 0);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_15);
lean_ctor_set(x_3, 0, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_free_object(x_3);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; size_t x_26; size_t x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_3, 0);
lean_inc(x_25);
lean_dec(x_3);
x_26 = lean_array_size(x_25);
x_27 = 0;
x_28 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__10(x_1, x_2, x_26, x_27, x_25, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_29);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_28, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_36 = x_28;
} else {
 lean_dec_ref(x_28);
 x_36 = lean_box(0);
}
if (lean_is_scalar(x_36)) {
 x_37 = lean_alloc_ctor(1, 2, 0);
} else {
 x_37 = x_36;
}
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
}
else
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_3);
if (x_38 == 0)
{
lean_object* x_39; size_t x_40; size_t x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_3, 0);
x_40 = lean_array_size(x_39);
x_41 = 0;
x_42 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__11(x_1, x_2, x_40, x_41, x_39, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_42) == 0)
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_42, 0);
lean_ctor_set(x_3, 0, x_44);
lean_ctor_set(x_42, 0, x_3);
return x_42;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_42, 0);
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_42);
lean_ctor_set(x_3, 0, x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_3);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_free_object(x_3);
x_48 = !lean_is_exclusive(x_42);
if (x_48 == 0)
{
return x_42;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_42, 0);
x_50 = lean_ctor_get(x_42, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_42);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; size_t x_53; size_t x_54; lean_object* x_55; 
x_52 = lean_ctor_get(x_3, 0);
lean_inc(x_52);
lean_dec(x_3);
x_53 = lean_array_size(x_52);
x_54 = 0;
x_55 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__11(x_1, x_2, x_53, x_54, x_52, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_58 = x_55;
} else {
 lean_dec_ref(x_55);
 x_58 = lean_box(0);
}
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_56);
if (lean_is_scalar(x_58)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_58;
}
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_55, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_55, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_63 = x_55;
} else {
 lean_dec_ref(x_55);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(1, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__12(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_4, x_3);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_array_uget(x_5, x_4);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_5, x_4, x_16);
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
x_19 = l_Lean_Elab_InfoTree_substitute(x_15, x_18);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_20 = lean_apply_7(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = lean_usize_add(x_4, x_23);
x_25 = lean_array_uset(x_17, x_4, x_19);
x_4 = x_24;
x_5 = x_25;
x_12 = x_22;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_28 = lean_ctor_get(x_21, 0);
lean_inc(x_28);
lean_dec(x_21);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_19);
x_30 = 1;
x_31 = lean_usize_add(x_4, x_30);
x_32 = lean_array_uset(x_17, x_4, x_29);
x_4 = x_31;
x_5 = x_32;
x_12 = x_27;
goto _start;
}
}
else
{
uint8_t x_34; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_20);
if (x_34 == 0)
{
return x_20;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_20, 0);
x_36 = lean_ctor_get(x_20, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_20);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
x_14 = lean_ctor_get(x_3, 2);
x_15 = lean_ctor_get(x_3, 3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_16 = l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__9(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_array_size(x_13);
x_20 = 0;
x_21 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__12(x_1, x_2, x_19, x_20, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_ctor_set(x_3, 1, x_23);
lean_ctor_set(x_3, 0, x_17);
lean_ctor_set(x_21, 0, x_3);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_21, 0);
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_21);
lean_ctor_set(x_3, 1, x_24);
lean_ctor_set(x_3, 0, x_17);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_3);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_17);
lean_free_object(x_3);
lean_dec(x_15);
lean_dec(x_14);
x_27 = !lean_is_exclusive(x_21);
if (x_27 == 0)
{
return x_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_free_object(x_3);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_16);
if (x_31 == 0)
{
return x_16;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_16, 0);
x_33 = lean_ctor_get(x_16, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_16);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; size_t x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_3, 0);
x_36 = lean_ctor_get(x_3, 1);
x_37 = lean_ctor_get(x_3, 2);
x_38 = lean_ctor_get_usize(x_3, 4);
x_39 = lean_ctor_get(x_3, 3);
lean_inc(x_39);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_40 = l_Lean_PersistentArray_mapMAux___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__9(x_1, x_2, x_35, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; size_t x_43; size_t x_44; lean_object* x_45; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_array_size(x_36);
x_44 = 0;
x_45 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__12(x_1, x_2, x_43, x_44, x_36, x_4, x_5, x_6, x_7, x_8, x_9, x_42);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_48 = x_45;
} else {
 lean_dec_ref(x_45);
 x_48 = lean_box(0);
}
x_49 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_49, 0, x_41);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set(x_49, 2, x_37);
lean_ctor_set(x_49, 3, x_39);
lean_ctor_set_usize(x_49, 4, x_38);
if (lean_is_scalar(x_48)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_48;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_47);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_41);
lean_dec(x_39);
lean_dec(x_37);
x_51 = lean_ctor_get(x_45, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_45, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_53 = x_45;
} else {
 lean_dec_ref(x_45);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(1, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_39);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_55 = lean_ctor_get(x_40, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_40, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_57 = x_40;
} else {
 lean_dec_ref(x_40);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(1, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Term_withDeclName___spec__4___rarg(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_14 = lean_apply_7(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_st_ref_get(x_9, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 7);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_20, 2);
lean_inc(x_21);
lean_inc(x_9);
x_22 = l_Lean_PersistentArray_mapM___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__3(x_2, x_20, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_st_ref_take(x_9, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_26, 7);
lean_inc(x_27);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = !lean_is_exclusive(x_26);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_26, 7);
lean_dec(x_30);
x_31 = !lean_is_exclusive(x_27);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = lean_ctor_get(x_27, 2);
lean_dec(x_32);
x_33 = l_Lean_PersistentArray_append___rarg(x_12, x_23);
lean_dec(x_23);
lean_ctor_set(x_27, 2, x_33);
x_34 = lean_st_ref_set(x_9, x_26, x_28);
lean_dec(x_9);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
lean_ctor_set(x_34, 0, x_15);
return x_34;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_15);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
else
{
uint8_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_39 = lean_ctor_get_uint8(x_27, sizeof(void*)*3);
x_40 = lean_ctor_get(x_27, 0);
x_41 = lean_ctor_get(x_27, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_27);
x_42 = l_Lean_PersistentArray_append___rarg(x_12, x_23);
lean_dec(x_23);
x_43 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_41);
lean_ctor_set(x_43, 2, x_42);
lean_ctor_set_uint8(x_43, sizeof(void*)*3, x_39);
lean_ctor_set(x_26, 7, x_43);
x_44 = lean_st_ref_set(x_9, x_26, x_28);
lean_dec(x_9);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_46 = x_44;
} else {
 lean_dec_ref(x_44);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_46;
}
lean_ctor_set(x_47, 0, x_15);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
x_50 = lean_ctor_get(x_26, 2);
x_51 = lean_ctor_get(x_26, 3);
x_52 = lean_ctor_get(x_26, 4);
x_53 = lean_ctor_get(x_26, 5);
x_54 = lean_ctor_get(x_26, 6);
x_55 = lean_ctor_get(x_26, 8);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_56 = lean_ctor_get_uint8(x_27, sizeof(void*)*3);
x_57 = lean_ctor_get(x_27, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_27, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 lean_ctor_release(x_27, 2);
 x_59 = x_27;
} else {
 lean_dec_ref(x_27);
 x_59 = lean_box(0);
}
x_60 = l_Lean_PersistentArray_append___rarg(x_12, x_23);
lean_dec(x_23);
if (lean_is_scalar(x_59)) {
 x_61 = lean_alloc_ctor(0, 3, 1);
} else {
 x_61 = x_59;
}
lean_ctor_set(x_61, 0, x_57);
lean_ctor_set(x_61, 1, x_58);
lean_ctor_set(x_61, 2, x_60);
lean_ctor_set_uint8(x_61, sizeof(void*)*3, x_56);
x_62 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_62, 0, x_48);
lean_ctor_set(x_62, 1, x_49);
lean_ctor_set(x_62, 2, x_50);
lean_ctor_set(x_62, 3, x_51);
lean_ctor_set(x_62, 4, x_52);
lean_ctor_set(x_62, 5, x_53);
lean_ctor_set(x_62, 6, x_54);
lean_ctor_set(x_62, 7, x_61);
lean_ctor_set(x_62, 8, x_55);
x_63 = lean_st_ref_set(x_9, x_62, x_28);
lean_dec(x_9);
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_65 = x_63;
} else {
 lean_dec_ref(x_63);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_15);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
else
{
uint8_t x_67; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_9);
x_67 = !lean_is_exclusive(x_22);
if (x_67 == 0)
{
return x_22;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_22, 0);
x_69 = lean_ctor_get(x_22, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_22);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_14, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_14, 1);
lean_inc(x_72);
lean_dec(x_14);
x_73 = lean_st_ref_get(x_9, x_72);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = lean_ctor_get(x_74, 7);
lean_inc(x_76);
lean_dec(x_74);
x_77 = lean_ctor_get(x_76, 2);
lean_inc(x_77);
lean_inc(x_9);
x_78 = l_Lean_PersistentArray_mapM___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__8(x_2, x_76, x_77, x_4, x_5, x_6, x_7, x_8, x_9, x_75);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_st_ref_take(x_9, x_80);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_82, 7);
lean_inc(x_83);
x_84 = lean_ctor_get(x_81, 1);
lean_inc(x_84);
lean_dec(x_81);
x_85 = !lean_is_exclusive(x_82);
if (x_85 == 0)
{
lean_object* x_86; uint8_t x_87; 
x_86 = lean_ctor_get(x_82, 7);
lean_dec(x_86);
x_87 = !lean_is_exclusive(x_83);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_88 = lean_ctor_get(x_83, 2);
lean_dec(x_88);
x_89 = l_Lean_PersistentArray_append___rarg(x_12, x_79);
lean_dec(x_79);
lean_ctor_set(x_83, 2, x_89);
x_90 = lean_st_ref_set(x_9, x_82, x_84);
lean_dec(x_9);
x_91 = !lean_is_exclusive(x_90);
if (x_91 == 0)
{
lean_object* x_92; 
x_92 = lean_ctor_get(x_90, 0);
lean_dec(x_92);
lean_ctor_set_tag(x_90, 1);
lean_ctor_set(x_90, 0, x_71);
return x_90;
}
else
{
lean_object* x_93; lean_object* x_94; 
x_93 = lean_ctor_get(x_90, 1);
lean_inc(x_93);
lean_dec(x_90);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_71);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
else
{
uint8_t x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_95 = lean_ctor_get_uint8(x_83, sizeof(void*)*3);
x_96 = lean_ctor_get(x_83, 0);
x_97 = lean_ctor_get(x_83, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_83);
x_98 = l_Lean_PersistentArray_append___rarg(x_12, x_79);
lean_dec(x_79);
x_99 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_99, 0, x_96);
lean_ctor_set(x_99, 1, x_97);
lean_ctor_set(x_99, 2, x_98);
lean_ctor_set_uint8(x_99, sizeof(void*)*3, x_95);
lean_ctor_set(x_82, 7, x_99);
x_100 = lean_st_ref_set(x_9, x_82, x_84);
lean_dec(x_9);
x_101 = lean_ctor_get(x_100, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 x_102 = x_100;
} else {
 lean_dec_ref(x_100);
 x_102 = lean_box(0);
}
if (lean_is_scalar(x_102)) {
 x_103 = lean_alloc_ctor(1, 2, 0);
} else {
 x_103 = x_102;
 lean_ctor_set_tag(x_103, 1);
}
lean_ctor_set(x_103, 0, x_71);
lean_ctor_set(x_103, 1, x_101);
return x_103;
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_104 = lean_ctor_get(x_82, 0);
x_105 = lean_ctor_get(x_82, 1);
x_106 = lean_ctor_get(x_82, 2);
x_107 = lean_ctor_get(x_82, 3);
x_108 = lean_ctor_get(x_82, 4);
x_109 = lean_ctor_get(x_82, 5);
x_110 = lean_ctor_get(x_82, 6);
x_111 = lean_ctor_get(x_82, 8);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_inc(x_108);
lean_inc(x_107);
lean_inc(x_106);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_82);
x_112 = lean_ctor_get_uint8(x_83, sizeof(void*)*3);
x_113 = lean_ctor_get(x_83, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_83, 1);
lean_inc(x_114);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 lean_ctor_release(x_83, 2);
 x_115 = x_83;
} else {
 lean_dec_ref(x_83);
 x_115 = lean_box(0);
}
x_116 = l_Lean_PersistentArray_append___rarg(x_12, x_79);
lean_dec(x_79);
if (lean_is_scalar(x_115)) {
 x_117 = lean_alloc_ctor(0, 3, 1);
} else {
 x_117 = x_115;
}
lean_ctor_set(x_117, 0, x_113);
lean_ctor_set(x_117, 1, x_114);
lean_ctor_set(x_117, 2, x_116);
lean_ctor_set_uint8(x_117, sizeof(void*)*3, x_112);
x_118 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_118, 0, x_104);
lean_ctor_set(x_118, 1, x_105);
lean_ctor_set(x_118, 2, x_106);
lean_ctor_set(x_118, 3, x_107);
lean_ctor_set(x_118, 4, x_108);
lean_ctor_set(x_118, 5, x_109);
lean_ctor_set(x_118, 6, x_110);
lean_ctor_set(x_118, 7, x_117);
lean_ctor_set(x_118, 8, x_111);
x_119 = lean_st_ref_set(x_9, x_118, x_84);
lean_dec(x_9);
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_121 = x_119;
} else {
 lean_dec_ref(x_119);
 x_121 = lean_box(0);
}
if (lean_is_scalar(x_121)) {
 x_122 = lean_alloc_ctor(1, 2, 0);
} else {
 x_122 = x_121;
 lean_ctor_set_tag(x_122, 1);
}
lean_ctor_set(x_122, 0, x_71);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
else
{
uint8_t x_123; 
lean_dec(x_71);
lean_dec(x_12);
lean_dec(x_9);
x_123 = !lean_is_exclusive(x_78);
if (x_123 == 0)
{
return x_78;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_78, 0);
x_125 = lean_ctor_get(x_78, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_78);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 7);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get_uint8(x_12, sizeof(void*)*3);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_2);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_apply_7(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_dec(x_10);
x_25 = lean_box(0);
x_26 = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2___lambda__1(x_1, x_2, x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
return x_26;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_Elab_CommandContextInfo_save___at_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_8, 0, x_12);
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_8, 0);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_8);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_13);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_14);
return x_17;
}
}
}
static lean_object* _init_l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___lambda__1___boxed), 7, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___closed__1;
x_10 = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2(x_1, x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_3);
x_10 = l_Lean_mkConstWithLevelParams___at_Lean_Elab_Term_expandDeclId___spec__7(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_box(0);
x_15 = lean_box(0);
x_16 = 1;
x_17 = l_Lean_Elab_Term_addTermInfo_x27(x_13, x_11, x_14, x_14, x_15, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (x_1 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_inc(x_9);
lean_inc(x_2);
x_14 = l_Lean_enableRealizationsForConst(x_2, x_9, x_10, x_11);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_16 = l_Lean_Meta_generateEagerEqns(x_2, x_7, x_8, x_9, x_10, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = 1;
x_19 = l_Lean_Elab_applyAttributesOf(x_3, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_16);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_15 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta(x_1, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_15) == 0)
{
if (x_5 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_6);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__2(x_2, x_3, x_4, x_17, x_8, x_9, x_10, x_11, x_12, x_13, x_16);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor(x_1);
lean_dec(x_1);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_6);
x_21 = lean_box(0);
x_22 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__2(x_2, x_3, x_4, x_21, x_8, x_9, x_10, x_11, x_12, x_13, x_19);
return x_22;
}
else
{
lean_object* x_23; 
lean_inc(x_13);
lean_inc(x_12);
x_23 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl(x_6, x_8, x_9, x_10, x_11, x_12, x_13, x_19);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__2(x_2, x_3, x_4, x_24, x_8, x_9, x_10, x_11, x_12, x_13, x_25);
lean_dec(x_24);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_27 = !lean_is_exclusive(x_23);
if (x_27 == 0)
{
return x_23;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_23, 0);
x_29 = lean_ctor_get(x_23, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_23);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_15);
if (x_31 == 0)
{
return x_15;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_15, 0);
x_33 = lean_ctor_get(x_15, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_15);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_metaExt;
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__3;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__3;
x_2 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 2, x_1);
lean_ctor_set(x_2, 3, x_1);
lean_ctor_set(x_2, 4, x_1);
lean_ctor_set(x_2, 5, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_noncomputableExt;
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_5);
x_13 = l_Lean_addDecl(x_5, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_2);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__1), 9, 2);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___lambda__1___boxed), 7, 0);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_17 = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2(x_15, x_16, x_6, x_7, x_8, x_9, x_10, x_11, x_14);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_box(0);
lean_inc(x_2);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_2);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_array_mk(x_20);
x_22 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_23 = l_Lean_Elab_applyAttributesOf(x_21, x_22, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
x_25 = lean_ctor_get_uint8(x_24, sizeof(void*)*3 + 1);
lean_dec(x_24);
switch (x_25) {
case 0:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_box(0);
x_28 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(x_2, x_3, x_1, x_21, x_4, x_5, x_27, x_6, x_7, x_8, x_9, x_10, x_11, x_26);
lean_dec(x_21);
return x_28;
}
case 1:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_23, 1);
lean_inc(x_29);
lean_dec(x_23);
x_30 = lean_st_ref_take(x_11, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = !lean_is_exclusive(x_31);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_34 = lean_ctor_get(x_31, 0);
x_35 = lean_ctor_get(x_31, 5);
lean_dec(x_35);
x_36 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__1;
lean_inc(x_1);
x_37 = l_Lean_TagDeclarationExtension_tag(x_36, x_34, x_1);
x_38 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4;
lean_ctor_set(x_31, 5, x_38);
lean_ctor_set(x_31, 0, x_37);
x_39 = lean_st_ref_set(x_11, x_31, x_32);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_st_ref_take(x_9, x_40);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = !lean_is_exclusive(x_42);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_45 = lean_ctor_get(x_42, 1);
lean_dec(x_45);
x_46 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5;
lean_ctor_set(x_42, 1, x_46);
x_47 = lean_st_ref_set(x_9, x_42, x_43);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = lean_box(0);
x_50 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(x_2, x_3, x_1, x_21, x_4, x_5, x_49, x_6, x_7, x_8, x_9, x_10, x_11, x_48);
lean_dec(x_21);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_51 = lean_ctor_get(x_42, 0);
x_52 = lean_ctor_get(x_42, 2);
x_53 = lean_ctor_get(x_42, 3);
x_54 = lean_ctor_get(x_42, 4);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_42);
x_55 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5;
x_56 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_56, 0, x_51);
lean_ctor_set(x_56, 1, x_55);
lean_ctor_set(x_56, 2, x_52);
lean_ctor_set(x_56, 3, x_53);
lean_ctor_set(x_56, 4, x_54);
x_57 = lean_st_ref_set(x_9, x_56, x_43);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_59 = lean_box(0);
x_60 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(x_2, x_3, x_1, x_21, x_4, x_5, x_59, x_6, x_7, x_8, x_9, x_10, x_11, x_58);
lean_dec(x_21);
return x_60;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_61 = lean_ctor_get(x_31, 0);
x_62 = lean_ctor_get(x_31, 1);
x_63 = lean_ctor_get(x_31, 2);
x_64 = lean_ctor_get(x_31, 3);
x_65 = lean_ctor_get(x_31, 4);
x_66 = lean_ctor_get(x_31, 6);
x_67 = lean_ctor_get(x_31, 7);
x_68 = lean_ctor_get(x_31, 8);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_31);
x_69 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__1;
lean_inc(x_1);
x_70 = l_Lean_TagDeclarationExtension_tag(x_69, x_61, x_1);
x_71 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4;
x_72 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_62);
lean_ctor_set(x_72, 2, x_63);
lean_ctor_set(x_72, 3, x_64);
lean_ctor_set(x_72, 4, x_65);
lean_ctor_set(x_72, 5, x_71);
lean_ctor_set(x_72, 6, x_66);
lean_ctor_set(x_72, 7, x_67);
lean_ctor_set(x_72, 8, x_68);
x_73 = lean_st_ref_set(x_11, x_72, x_32);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
lean_dec(x_73);
x_75 = lean_st_ref_take(x_9, x_74);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = lean_ctor_get(x_76, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_76, 2);
lean_inc(x_79);
x_80 = lean_ctor_get(x_76, 3);
lean_inc(x_80);
x_81 = lean_ctor_get(x_76, 4);
lean_inc(x_81);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 lean_ctor_release(x_76, 2);
 lean_ctor_release(x_76, 3);
 lean_ctor_release(x_76, 4);
 x_82 = x_76;
} else {
 lean_dec_ref(x_76);
 x_82 = lean_box(0);
}
x_83 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5;
if (lean_is_scalar(x_82)) {
 x_84 = lean_alloc_ctor(0, 5, 0);
} else {
 x_84 = x_82;
}
lean_ctor_set(x_84, 0, x_78);
lean_ctor_set(x_84, 1, x_83);
lean_ctor_set(x_84, 2, x_79);
lean_ctor_set(x_84, 3, x_80);
lean_ctor_set(x_84, 4, x_81);
x_85 = lean_st_ref_set(x_9, x_84, x_77);
x_86 = lean_ctor_get(x_85, 1);
lean_inc(x_86);
lean_dec(x_85);
x_87 = lean_box(0);
x_88 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(x_2, x_3, x_1, x_21, x_4, x_5, x_87, x_6, x_7, x_8, x_9, x_10, x_11, x_86);
lean_dec(x_21);
return x_88;
}
}
default: 
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_89 = lean_ctor_get(x_23, 1);
lean_inc(x_89);
lean_dec(x_23);
x_90 = lean_st_ref_take(x_11, x_89);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = !lean_is_exclusive(x_91);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_94 = lean_ctor_get(x_91, 0);
x_95 = lean_ctor_get(x_91, 5);
lean_dec(x_95);
x_96 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__6;
lean_inc(x_1);
x_97 = l_Lean_TagDeclarationExtension_tag(x_96, x_94, x_1);
x_98 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4;
lean_ctor_set(x_91, 5, x_98);
lean_ctor_set(x_91, 0, x_97);
x_99 = lean_st_ref_set(x_11, x_91, x_92);
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
lean_dec(x_99);
x_101 = lean_st_ref_take(x_9, x_100);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_104 = !lean_is_exclusive(x_102);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_105 = lean_ctor_get(x_102, 1);
lean_dec(x_105);
x_106 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5;
lean_ctor_set(x_102, 1, x_106);
x_107 = lean_st_ref_set(x_9, x_102, x_103);
x_108 = lean_ctor_get(x_107, 1);
lean_inc(x_108);
lean_dec(x_107);
x_109 = lean_box(0);
x_110 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(x_2, x_3, x_1, x_21, x_4, x_5, x_109, x_6, x_7, x_8, x_9, x_10, x_11, x_108);
lean_dec(x_21);
return x_110;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_111 = lean_ctor_get(x_102, 0);
x_112 = lean_ctor_get(x_102, 2);
x_113 = lean_ctor_get(x_102, 3);
x_114 = lean_ctor_get(x_102, 4);
lean_inc(x_114);
lean_inc(x_113);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_102);
x_115 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5;
x_116 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_116, 0, x_111);
lean_ctor_set(x_116, 1, x_115);
lean_ctor_set(x_116, 2, x_112);
lean_ctor_set(x_116, 3, x_113);
lean_ctor_set(x_116, 4, x_114);
x_117 = lean_st_ref_set(x_9, x_116, x_103);
x_118 = lean_ctor_get(x_117, 1);
lean_inc(x_118);
lean_dec(x_117);
x_119 = lean_box(0);
x_120 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(x_2, x_3, x_1, x_21, x_4, x_5, x_119, x_6, x_7, x_8, x_9, x_10, x_11, x_118);
lean_dec(x_21);
return x_120;
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_121 = lean_ctor_get(x_91, 0);
x_122 = lean_ctor_get(x_91, 1);
x_123 = lean_ctor_get(x_91, 2);
x_124 = lean_ctor_get(x_91, 3);
x_125 = lean_ctor_get(x_91, 4);
x_126 = lean_ctor_get(x_91, 6);
x_127 = lean_ctor_get(x_91, 7);
x_128 = lean_ctor_get(x_91, 8);
lean_inc(x_128);
lean_inc(x_127);
lean_inc(x_126);
lean_inc(x_125);
lean_inc(x_124);
lean_inc(x_123);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_91);
x_129 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__6;
lean_inc(x_1);
x_130 = l_Lean_TagDeclarationExtension_tag(x_129, x_121, x_1);
x_131 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4;
x_132 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_122);
lean_ctor_set(x_132, 2, x_123);
lean_ctor_set(x_132, 3, x_124);
lean_ctor_set(x_132, 4, x_125);
lean_ctor_set(x_132, 5, x_131);
lean_ctor_set(x_132, 6, x_126);
lean_ctor_set(x_132, 7, x_127);
lean_ctor_set(x_132, 8, x_128);
x_133 = lean_st_ref_set(x_11, x_132, x_92);
x_134 = lean_ctor_get(x_133, 1);
lean_inc(x_134);
lean_dec(x_133);
x_135 = lean_st_ref_take(x_9, x_134);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
lean_dec(x_135);
x_138 = lean_ctor_get(x_136, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_136, 2);
lean_inc(x_139);
x_140 = lean_ctor_get(x_136, 3);
lean_inc(x_140);
x_141 = lean_ctor_get(x_136, 4);
lean_inc(x_141);
if (lean_is_exclusive(x_136)) {
 lean_ctor_release(x_136, 0);
 lean_ctor_release(x_136, 1);
 lean_ctor_release(x_136, 2);
 lean_ctor_release(x_136, 3);
 lean_ctor_release(x_136, 4);
 x_142 = x_136;
} else {
 lean_dec_ref(x_136);
 x_142 = lean_box(0);
}
x_143 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5;
if (lean_is_scalar(x_142)) {
 x_144 = lean_alloc_ctor(0, 5, 0);
} else {
 x_144 = x_142;
}
lean_ctor_set(x_144, 0, x_138);
lean_ctor_set(x_144, 1, x_143);
lean_ctor_set(x_144, 2, x_139);
lean_ctor_set(x_144, 3, x_140);
lean_ctor_set(x_144, 4, x_141);
x_145 = lean_st_ref_set(x_9, x_144, x_137);
x_146 = lean_ctor_get(x_145, 1);
lean_inc(x_146);
lean_dec(x_145);
x_147 = lean_box(0);
x_148 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(x_2, x_3, x_1, x_21, x_4, x_5, x_147, x_6, x_7, x_8, x_9, x_10, x_11, x_146);
lean_dec(x_21);
return x_148;
}
}
}
}
else
{
uint8_t x_149; 
lean_dec(x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_149 = !lean_is_exclusive(x_23);
if (x_149 == 0)
{
return x_23;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_150 = lean_ctor_get(x_23, 0);
x_151 = lean_ctor_get(x_23, 1);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_23);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
return x_152;
}
}
}
else
{
uint8_t x_153; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_153 = !lean_is_exclusive(x_17);
if (x_153 == 0)
{
return x_17;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_17, 0);
x_155 = lean_ctor_get(x_17, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_17);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
}
}
else
{
uint8_t x_157; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_157 = !lean_is_exclusive(x_13);
if (x_157 == 0)
{
return x_13;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_158 = lean_ctor_get(x_13, 0);
x_159 = lean_ctor_get(x_13, 1);
lean_inc(x_159);
lean_inc(x_158);
lean_dec(x_13);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_158);
lean_ctor_set(x_160, 1, x_159);
return x_160;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(lean_object* x_1, uint8_t x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 5);
x_16 = l_Lean_replaceRef(x_13, x_15);
lean_dec(x_15);
lean_dec(x_13);
lean_ctor_set(x_10, 5, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_17 = l_Lean_Elab_abstractNestedProofs(x_1, x_5, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 3);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_18, 4);
lean_inc(x_22);
lean_inc(x_22);
lean_inc(x_20);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_23, 2, x_22);
x_24 = lean_ctor_get(x_18, 5);
lean_inc(x_24);
lean_inc(x_3);
lean_inc(x_24);
lean_inc(x_23);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_25, 2, x_3);
x_26 = lean_ctor_get_uint8(x_18, sizeof(void*)*7);
x_27 = lean_box(x_26);
switch (lean_obj_tag(x_27)) {
case 1:
{
lean_object* x_28; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_28 = l_Lean_Meta_isProp(x_22, x_8, x_9, x_10, x_11, x_19);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint32_t x_37; uint32_t x_38; uint32_t x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
lean_dec(x_25);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_st_ref_get(x_11, x_31);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
lean_dec(x_33);
lean_inc(x_24);
x_36 = l_Lean_getMaxHeight(x_35, x_24);
x_37 = lean_unbox_uint32(x_36);
lean_dec(x_36);
x_38 = 1;
x_39 = lean_uint32_add(x_37, x_38);
x_40 = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(x_40, 0, x_39);
x_41 = lean_ctor_get(x_18, 2);
lean_inc(x_41);
x_42 = lean_ctor_get_uint8(x_41, sizeof(void*)*3 + 3);
lean_dec(x_41);
if (x_42 == 0)
{
uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = 1;
x_44 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_44, 0, x_23);
lean_ctor_set(x_44, 1, x_24);
lean_ctor_set(x_44, 2, x_40);
lean_ctor_set(x_44, 3, x_3);
lean_ctor_set_uint8(x_44, sizeof(void*)*4, x_43);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_20, x_18, x_4, x_2, x_45, x_6, x_7, x_8, x_9, x_10, x_11, x_34);
return x_46;
}
else
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = 0;
x_48 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_48, 0, x_23);
lean_ctor_set(x_48, 1, x_24);
lean_ctor_set(x_48, 2, x_40);
lean_ctor_set(x_48, 3, x_3);
lean_ctor_set_uint8(x_48, sizeof(void*)*4, x_47);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_48);
x_50 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_20, x_18, x_4, x_2, x_49, x_6, x_7, x_8, x_9, x_10, x_11, x_34);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_3);
x_51 = lean_ctor_get(x_28, 1);
lean_inc(x_51);
lean_dec(x_28);
lean_inc(x_10);
lean_inc(x_25);
x_52 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag(x_25, x_6, x_7, x_8, x_9, x_10, x_11, x_51);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_54, 0, x_25);
x_55 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_20, x_18, x_4, x_2, x_54, x_6, x_7, x_8, x_9, x_10, x_11, x_53);
return x_55;
}
}
else
{
uint8_t x_56; 
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_56 = !lean_is_exclusive(x_28);
if (x_56 == 0)
{
return x_28;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_28, 0);
x_58 = lean_ctor_get(x_28, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_28);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
case 2:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_3);
lean_inc(x_10);
lean_inc(x_25);
x_60 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag(x_25, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_62 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_62, 0, x_25);
x_63 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_20, x_18, x_4, x_2, x_62, x_6, x_7, x_8, x_9, x_10, x_11, x_61);
return x_63;
}
case 4:
{
lean_object* x_64; uint8_t x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_25);
lean_dec(x_22);
x_64 = lean_ctor_get(x_18, 2);
lean_inc(x_64);
x_65 = lean_ctor_get_uint8(x_64, sizeof(void*)*3 + 3);
lean_dec(x_64);
x_66 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_66, 0, x_23);
lean_ctor_set(x_66, 1, x_24);
lean_ctor_set(x_66, 2, x_3);
lean_ctor_set_uint8(x_66, sizeof(void*)*3, x_65);
x_67 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_68 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_20, x_18, x_4, x_2, x_67, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
return x_68;
}
case 5:
{
lean_object* x_69; uint8_t x_70; 
lean_dec(x_25);
lean_dec(x_22);
x_69 = lean_ctor_get(x_18, 2);
lean_inc(x_69);
x_70 = lean_ctor_get_uint8(x_69, sizeof(void*)*3 + 3);
lean_dec(x_69);
if (x_70 == 0)
{
lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_71 = lean_box(1);
x_72 = 1;
x_73 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_73, 0, x_23);
lean_ctor_set(x_73, 1, x_24);
lean_ctor_set(x_73, 2, x_71);
lean_ctor_set(x_73, 3, x_3);
lean_ctor_set_uint8(x_73, sizeof(void*)*4, x_72);
x_74 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_74, 0, x_73);
x_75 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_20, x_18, x_4, x_2, x_74, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
return x_75;
}
else
{
lean_object* x_76; uint8_t x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_76 = lean_box(1);
x_77 = 0;
x_78 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_78, 0, x_23);
lean_ctor_set(x_78, 1, x_24);
lean_ctor_set(x_78, 2, x_76);
lean_ctor_set(x_78, 3, x_3);
lean_ctor_set_uint8(x_78, sizeof(void*)*4, x_77);
x_79 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_79, 0, x_78);
x_80 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_20, x_18, x_4, x_2, x_79, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
return x_80;
}
}
default: 
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint32_t x_86; uint32_t x_87; uint32_t x_88; lean_object* x_89; lean_object* x_90; uint8_t x_91; 
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_22);
x_81 = lean_st_ref_get(x_11, x_19);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_84 = lean_ctor_get(x_82, 0);
lean_inc(x_84);
lean_dec(x_82);
lean_inc(x_24);
x_85 = l_Lean_getMaxHeight(x_84, x_24);
x_86 = lean_unbox_uint32(x_85);
lean_dec(x_85);
x_87 = 1;
x_88 = lean_uint32_add(x_86, x_87);
x_89 = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(x_89, 0, x_88);
x_90 = lean_ctor_get(x_18, 2);
lean_inc(x_90);
x_91 = lean_ctor_get_uint8(x_90, sizeof(void*)*3 + 3);
lean_dec(x_90);
if (x_91 == 0)
{
uint8_t x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_92 = 1;
x_93 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_93, 0, x_23);
lean_ctor_set(x_93, 1, x_24);
lean_ctor_set(x_93, 2, x_89);
lean_ctor_set(x_93, 3, x_3);
lean_ctor_set_uint8(x_93, sizeof(void*)*4, x_92);
x_94 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_94, 0, x_93);
x_95 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_20, x_18, x_4, x_2, x_94, x_6, x_7, x_8, x_9, x_10, x_11, x_83);
return x_95;
}
else
{
uint8_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_96 = 0;
x_97 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_97, 0, x_23);
lean_ctor_set(x_97, 1, x_24);
lean_ctor_set(x_97, 2, x_89);
lean_ctor_set(x_97, 3, x_3);
lean_ctor_set_uint8(x_97, sizeof(void*)*4, x_96);
x_98 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_98, 0, x_97);
x_99 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_20, x_18, x_4, x_2, x_98, x_6, x_7, x_8, x_9, x_10, x_11, x_83);
return x_99;
}
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_10);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_100 = !lean_is_exclusive(x_17);
if (x_100 == 0)
{
return x_17;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_17, 0);
x_102 = lean_ctor_get(x_17, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_17);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; lean_object* x_116; uint8_t x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_104 = lean_ctor_get(x_10, 0);
x_105 = lean_ctor_get(x_10, 1);
x_106 = lean_ctor_get(x_10, 2);
x_107 = lean_ctor_get(x_10, 3);
x_108 = lean_ctor_get(x_10, 4);
x_109 = lean_ctor_get(x_10, 5);
x_110 = lean_ctor_get(x_10, 6);
x_111 = lean_ctor_get(x_10, 7);
x_112 = lean_ctor_get(x_10, 8);
x_113 = lean_ctor_get(x_10, 9);
x_114 = lean_ctor_get(x_10, 10);
x_115 = lean_ctor_get_uint8(x_10, sizeof(void*)*13);
x_116 = lean_ctor_get(x_10, 11);
x_117 = lean_ctor_get_uint8(x_10, sizeof(void*)*13 + 1);
x_118 = lean_ctor_get(x_10, 12);
lean_inc(x_118);
lean_inc(x_116);
lean_inc(x_114);
lean_inc(x_113);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_inc(x_108);
lean_inc(x_107);
lean_inc(x_106);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_10);
x_119 = l_Lean_replaceRef(x_13, x_109);
lean_dec(x_109);
lean_dec(x_13);
x_120 = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(x_120, 0, x_104);
lean_ctor_set(x_120, 1, x_105);
lean_ctor_set(x_120, 2, x_106);
lean_ctor_set(x_120, 3, x_107);
lean_ctor_set(x_120, 4, x_108);
lean_ctor_set(x_120, 5, x_119);
lean_ctor_set(x_120, 6, x_110);
lean_ctor_set(x_120, 7, x_111);
lean_ctor_set(x_120, 8, x_112);
lean_ctor_set(x_120, 9, x_113);
lean_ctor_set(x_120, 10, x_114);
lean_ctor_set(x_120, 11, x_116);
lean_ctor_set(x_120, 12, x_118);
lean_ctor_set_uint8(x_120, sizeof(void*)*13, x_115);
lean_ctor_set_uint8(x_120, sizeof(void*)*13 + 1, x_117);
lean_inc(x_11);
lean_inc(x_120);
lean_inc(x_9);
lean_inc(x_8);
x_121 = l_Lean_Elab_abstractNestedProofs(x_1, x_5, x_8, x_9, x_120, x_11, x_12);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; lean_object* x_131; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_124 = lean_ctor_get(x_122, 3);
lean_inc(x_124);
x_125 = lean_ctor_get(x_122, 1);
lean_inc(x_125);
x_126 = lean_ctor_get(x_122, 4);
lean_inc(x_126);
lean_inc(x_126);
lean_inc(x_124);
x_127 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_127, 0, x_124);
lean_ctor_set(x_127, 1, x_125);
lean_ctor_set(x_127, 2, x_126);
x_128 = lean_ctor_get(x_122, 5);
lean_inc(x_128);
lean_inc(x_3);
lean_inc(x_128);
lean_inc(x_127);
x_129 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_129, 0, x_127);
lean_ctor_set(x_129, 1, x_128);
lean_ctor_set(x_129, 2, x_3);
x_130 = lean_ctor_get_uint8(x_122, sizeof(void*)*7);
x_131 = lean_box(x_130);
switch (lean_obj_tag(x_131)) {
case 1:
{
lean_object* x_132; 
lean_inc(x_11);
lean_inc(x_120);
lean_inc(x_9);
lean_inc(x_8);
x_132 = l_Lean_Meta_isProp(x_126, x_8, x_9, x_120, x_11, x_123);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; uint8_t x_134; 
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_unbox(x_133);
lean_dec(x_133);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; uint32_t x_141; uint32_t x_142; uint32_t x_143; lean_object* x_144; lean_object* x_145; uint8_t x_146; 
lean_dec(x_129);
x_135 = lean_ctor_get(x_132, 1);
lean_inc(x_135);
lean_dec(x_132);
x_136 = lean_st_ref_get(x_11, x_135);
x_137 = lean_ctor_get(x_136, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_136, 1);
lean_inc(x_138);
lean_dec(x_136);
x_139 = lean_ctor_get(x_137, 0);
lean_inc(x_139);
lean_dec(x_137);
lean_inc(x_128);
x_140 = l_Lean_getMaxHeight(x_139, x_128);
x_141 = lean_unbox_uint32(x_140);
lean_dec(x_140);
x_142 = 1;
x_143 = lean_uint32_add(x_141, x_142);
x_144 = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(x_144, 0, x_143);
x_145 = lean_ctor_get(x_122, 2);
lean_inc(x_145);
x_146 = lean_ctor_get_uint8(x_145, sizeof(void*)*3 + 3);
lean_dec(x_145);
if (x_146 == 0)
{
uint8_t x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_147 = 1;
x_148 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_148, 0, x_127);
lean_ctor_set(x_148, 1, x_128);
lean_ctor_set(x_148, 2, x_144);
lean_ctor_set(x_148, 3, x_3);
lean_ctor_set_uint8(x_148, sizeof(void*)*4, x_147);
x_149 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_149, 0, x_148);
x_150 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_124, x_122, x_4, x_2, x_149, x_6, x_7, x_8, x_9, x_120, x_11, x_138);
return x_150;
}
else
{
uint8_t x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_151 = 0;
x_152 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_152, 0, x_127);
lean_ctor_set(x_152, 1, x_128);
lean_ctor_set(x_152, 2, x_144);
lean_ctor_set(x_152, 3, x_3);
lean_ctor_set_uint8(x_152, sizeof(void*)*4, x_151);
x_153 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_153, 0, x_152);
x_154 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_124, x_122, x_4, x_2, x_153, x_6, x_7, x_8, x_9, x_120, x_11, x_138);
return x_154;
}
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
lean_dec(x_128);
lean_dec(x_127);
lean_dec(x_3);
x_155 = lean_ctor_get(x_132, 1);
lean_inc(x_155);
lean_dec(x_132);
lean_inc(x_120);
lean_inc(x_129);
x_156 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag(x_129, x_6, x_7, x_8, x_9, x_120, x_11, x_155);
x_157 = lean_ctor_get(x_156, 1);
lean_inc(x_157);
lean_dec(x_156);
x_158 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_158, 0, x_129);
x_159 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_124, x_122, x_4, x_2, x_158, x_6, x_7, x_8, x_9, x_120, x_11, x_157);
return x_159;
}
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
lean_dec(x_129);
lean_dec(x_128);
lean_dec(x_127);
lean_dec(x_124);
lean_dec(x_122);
lean_dec(x_120);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_160 = lean_ctor_get(x_132, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_132, 1);
lean_inc(x_161);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_162 = x_132;
} else {
 lean_dec_ref(x_132);
 x_162 = lean_box(0);
}
if (lean_is_scalar(x_162)) {
 x_163 = lean_alloc_ctor(1, 2, 0);
} else {
 x_163 = x_162;
}
lean_ctor_set(x_163, 0, x_160);
lean_ctor_set(x_163, 1, x_161);
return x_163;
}
}
case 2:
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
lean_dec(x_128);
lean_dec(x_127);
lean_dec(x_126);
lean_dec(x_3);
lean_inc(x_120);
lean_inc(x_129);
x_164 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag(x_129, x_6, x_7, x_8, x_9, x_120, x_11, x_123);
x_165 = lean_ctor_get(x_164, 1);
lean_inc(x_165);
lean_dec(x_164);
x_166 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_166, 0, x_129);
x_167 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_124, x_122, x_4, x_2, x_166, x_6, x_7, x_8, x_9, x_120, x_11, x_165);
return x_167;
}
case 4:
{
lean_object* x_168; uint8_t x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
lean_dec(x_129);
lean_dec(x_126);
x_168 = lean_ctor_get(x_122, 2);
lean_inc(x_168);
x_169 = lean_ctor_get_uint8(x_168, sizeof(void*)*3 + 3);
lean_dec(x_168);
x_170 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_170, 0, x_127);
lean_ctor_set(x_170, 1, x_128);
lean_ctor_set(x_170, 2, x_3);
lean_ctor_set_uint8(x_170, sizeof(void*)*3, x_169);
x_171 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_171, 0, x_170);
x_172 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_124, x_122, x_4, x_2, x_171, x_6, x_7, x_8, x_9, x_120, x_11, x_123);
return x_172;
}
case 5:
{
lean_object* x_173; uint8_t x_174; 
lean_dec(x_129);
lean_dec(x_126);
x_173 = lean_ctor_get(x_122, 2);
lean_inc(x_173);
x_174 = lean_ctor_get_uint8(x_173, sizeof(void*)*3 + 3);
lean_dec(x_173);
if (x_174 == 0)
{
lean_object* x_175; uint8_t x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_175 = lean_box(1);
x_176 = 1;
x_177 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_177, 0, x_127);
lean_ctor_set(x_177, 1, x_128);
lean_ctor_set(x_177, 2, x_175);
lean_ctor_set(x_177, 3, x_3);
lean_ctor_set_uint8(x_177, sizeof(void*)*4, x_176);
x_178 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_178, 0, x_177);
x_179 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_124, x_122, x_4, x_2, x_178, x_6, x_7, x_8, x_9, x_120, x_11, x_123);
return x_179;
}
else
{
lean_object* x_180; uint8_t x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_180 = lean_box(1);
x_181 = 0;
x_182 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_182, 0, x_127);
lean_ctor_set(x_182, 1, x_128);
lean_ctor_set(x_182, 2, x_180);
lean_ctor_set(x_182, 3, x_3);
lean_ctor_set_uint8(x_182, sizeof(void*)*4, x_181);
x_183 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_183, 0, x_182);
x_184 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_124, x_122, x_4, x_2, x_183, x_6, x_7, x_8, x_9, x_120, x_11, x_123);
return x_184;
}
}
default: 
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; uint32_t x_190; uint32_t x_191; uint32_t x_192; lean_object* x_193; lean_object* x_194; uint8_t x_195; 
lean_dec(x_131);
lean_dec(x_129);
lean_dec(x_126);
x_185 = lean_st_ref_get(x_11, x_123);
x_186 = lean_ctor_get(x_185, 0);
lean_inc(x_186);
x_187 = lean_ctor_get(x_185, 1);
lean_inc(x_187);
lean_dec(x_185);
x_188 = lean_ctor_get(x_186, 0);
lean_inc(x_188);
lean_dec(x_186);
lean_inc(x_128);
x_189 = l_Lean_getMaxHeight(x_188, x_128);
x_190 = lean_unbox_uint32(x_189);
lean_dec(x_189);
x_191 = 1;
x_192 = lean_uint32_add(x_190, x_191);
x_193 = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(x_193, 0, x_192);
x_194 = lean_ctor_get(x_122, 2);
lean_inc(x_194);
x_195 = lean_ctor_get_uint8(x_194, sizeof(void*)*3 + 3);
lean_dec(x_194);
if (x_195 == 0)
{
uint8_t x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_196 = 1;
x_197 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_197, 0, x_127);
lean_ctor_set(x_197, 1, x_128);
lean_ctor_set(x_197, 2, x_193);
lean_ctor_set(x_197, 3, x_3);
lean_ctor_set_uint8(x_197, sizeof(void*)*4, x_196);
x_198 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_198, 0, x_197);
x_199 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_124, x_122, x_4, x_2, x_198, x_6, x_7, x_8, x_9, x_120, x_11, x_187);
return x_199;
}
else
{
uint8_t x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_200 = 0;
x_201 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_201, 0, x_127);
lean_ctor_set(x_201, 1, x_128);
lean_ctor_set(x_201, 2, x_193);
lean_ctor_set(x_201, 3, x_3);
lean_ctor_set_uint8(x_201, sizeof(void*)*4, x_200);
x_202 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_202, 0, x_201);
x_203 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_124, x_122, x_4, x_2, x_202, x_6, x_7, x_8, x_9, x_120, x_11, x_187);
return x_203;
}
}
}
}
else
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
lean_dec(x_120);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_204 = lean_ctor_get(x_121, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_121, 1);
lean_inc(x_205);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_206 = x_121;
} else {
 lean_dec_ref(x_121);
 x_206 = lean_box(0);
}
if (lean_is_scalar(x_206)) {
 x_207 = lean_alloc_ctor(1, 2, 0);
} else {
 x_207 = x_206;
}
lean_ctor_set(x_207, 0, x_204);
lean_ctor_set(x_207, 1, x_205);
return x_207;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__5(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__6(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__7(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__10(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__11(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__12(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_1);
lean_dec(x_1);
x_13 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__2(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_unbox(x_2);
lean_dec(x_2);
x_16 = lean_unbox(x_5);
lean_dec(x_5);
x_17 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__3(x_1, x_15, x_3, x_4, x_16, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_7);
lean_dec(x_4);
return x_17;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_unbox(x_3);
lean_dec(x_3);
x_14 = lean_unbox(x_4);
lean_dec(x_4);
x_15 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = lean_unbox(x_4);
lean_dec(x_4);
x_15 = lean_unbox(x_5);
lean_dec(x_5);
x_16 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(x_1, x_13, x_3, x_14, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileNonRec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = 1;
x_11 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(x_1, x_10, x_2, x_10, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addNonRec(lean_object* x_1, uint8_t x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = 0;
x_13 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux(x_1, x_12, x_3, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addNonRec___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l_Lean_Elab_addNonRec(x_1, x_12, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
static lean_object* _init_l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_hasRecAppSyntax(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_Expr_mdataExpr_x21(x_1);
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
}
}
static lean_object* _init_l_Lean_Elab_eraseRecAppSyntaxExpr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_hasRecAppSyntax___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_eraseRecAppSyntaxExpr___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_eraseRecAppSyntaxExpr___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__2___boxed), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Elab_eraseRecAppSyntaxExpr___closed__1;
x_6 = lean_find_expr(x_5, x_1);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
x_8 = l_Lean_Elab_eraseRecAppSyntaxExpr___closed__2;
x_9 = l_Lean_Elab_eraseRecAppSyntaxExpr___closed__3;
x_10 = l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(x_1, x_8, x_9, x_2, x_3, x_4);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_eraseRecAppSyntax(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 2);
x_9 = lean_ctor_get(x_1, 3);
x_10 = lean_ctor_get(x_1, 4);
x_11 = lean_ctor_get(x_1, 5);
x_12 = lean_ctor_get(x_1, 6);
x_13 = l_Lean_Elab_eraseRecAppSyntaxExpr(x_11, x_2, x_3, x_4);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_ctor_set(x_1, 5, x_15);
lean_ctor_set(x_13, 0, x_1);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_13);
lean_ctor_set(x_1, 5, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_1);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_free_object(x_1);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
return x_13;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_13, 0);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_13);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_23 = lean_ctor_get(x_1, 0);
x_24 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
x_25 = lean_ctor_get(x_1, 1);
x_26 = lean_ctor_get(x_1, 2);
x_27 = lean_ctor_get(x_1, 3);
x_28 = lean_ctor_get(x_1, 4);
x_29 = lean_ctor_get(x_1, 5);
x_30 = lean_ctor_get(x_1, 6);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_23);
lean_dec(x_1);
x_31 = l_Lean_Elab_eraseRecAppSyntaxExpr(x_29, x_2, x_3, x_4);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_34 = x_31;
} else {
 lean_dec_ref(x_31);
 x_34 = lean_box(0);
}
x_35 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_35, 0, x_23);
lean_ctor_set(x_35, 1, x_25);
lean_ctor_set(x_35, 2, x_26);
lean_ctor_set(x_35, 3, x_27);
lean_ctor_set(x_35, 4, x_28);
lean_ctor_set(x_35, 5, x_32);
lean_ctor_set(x_35, 6, x_30);
lean_ctor_set_uint8(x_35, sizeof(void*)*7, x_24);
if (lean_is_scalar(x_34)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_34;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_30);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_23);
x_37 = lean_ctor_get(x_31, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_39 = x_31;
} else {
 lean_dec_ref(x_31);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(1, 2, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompileUnsafe___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_usize_dec_lt(x_2, x_1);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_array_uget(x_3, x_2);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_uset(x_3, x_2, x_14);
lean_inc(x_9);
lean_inc(x_8);
x_16 = l_Lean_Elab_eraseRecAppSyntax(x_13, x_8, x_9, x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = lean_usize_add(x_2, x_19);
x_21 = lean_array_uset(x_15, x_2, x_17);
x_2 = x_20;
x_3 = x_21;
x_10 = x_18;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
x_23 = !lean_is_exclusive(x_16);
if (x_23 == 0)
{
return x_16;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_16, 0);
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_16);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Lean_Elab_addAndCompileUnsafe___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_5, 3);
lean_inc(x_7);
lean_dec(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = lean_ctor_get(x_9, 3);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Elab_addAndCompileUnsafe___spec__3(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_12 = l_List_reverse___rarg(x_4);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_3, 0);
x_16 = lean_ctor_get(x_3, 1);
x_17 = lean_ctor_get(x_15, 3);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_15, 4);
lean_inc(x_19);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_20, 2, x_19);
x_21 = lean_ctor_get(x_15, 5);
lean_inc(x_21);
lean_dec(x_15);
x_22 = lean_box(0);
lean_inc(x_2);
x_23 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_23, 2, x_22);
lean_ctor_set(x_23, 3, x_2);
lean_ctor_set_uint8(x_23, sizeof(void*)*4, x_1);
lean_ctor_set(x_3, 1, x_4);
lean_ctor_set(x_3, 0, x_23);
{
lean_object* _tmp_2 = x_16;
lean_object* _tmp_3 = x_3;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_25 = lean_ctor_get(x_3, 0);
x_26 = lean_ctor_get(x_3, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_3);
x_27 = lean_ctor_get(x_25, 3);
lean_inc(x_27);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_25, 4);
lean_inc(x_29);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 2, x_29);
x_31 = lean_ctor_get(x_25, 5);
lean_inc(x_31);
lean_dec(x_25);
x_32 = lean_box(0);
lean_inc(x_2);
x_33 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_31);
lean_ctor_set(x_33, 2, x_32);
lean_ctor_set(x_33, 3, x_2);
lean_ctor_set_uint8(x_33, sizeof(void*)*4, x_1);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_4);
x_3 = x_26;
x_4 = x_34;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_addAndCompileUnsafe___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_usize_dec_lt(x_5, x_4);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_6);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_6);
x_16 = lean_array_uget(x_3, x_5);
x_17 = lean_ctor_get(x_16, 3);
lean_inc(x_17);
lean_inc(x_7);
x_18 = l_Lean_mkConstWithLevelParams___at_Lean_Elab_Term_expandDeclId___spec__7(x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_16, 0);
lean_inc(x_21);
lean_dec(x_16);
x_22 = lean_box(0);
x_23 = lean_box(0);
x_24 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_25 = l_Lean_Elab_Term_addTermInfo_x27(x_21, x_19, x_22, x_22, x_23, x_24, x_7, x_8, x_9, x_10, x_11, x_12, x_20);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; size_t x_27; size_t x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = 1;
x_28 = lean_usize_add(x_5, x_27);
x_29 = lean_box(0);
x_5 = x_28;
x_6 = x_29;
x_13 = x_26;
goto _start;
}
else
{
uint8_t x_31; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_31 = !lean_is_exclusive(x_25);
if (x_31 == 0)
{
return x_25;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_25, 0);
x_33 = lean_ctor_get(x_25, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_25);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_35 = !lean_is_exclusive(x_18);
if (x_35 == 0)
{
return x_18;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_18, 0);
x_37 = lean_ctor_get(x_18, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_18);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe___lambda__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(0);
x_13 = l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_addAndCompileUnsafe___spec__4(x_1, x_2, x_1, x_3, x_4, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
static lean_object* _init_l_Lean_Elab_addAndCompileUnsafe___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_array_size(x_1);
x_11 = 0;
lean_inc(x_8);
lean_inc(x_7);
x_12 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompileUnsafe___spec__1(x_10, x_11, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_instInhabitedPreDefinition;
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_get(x_15, x_13, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_13);
x_19 = lean_array_to_list(x_13);
x_20 = lean_box(0);
lean_inc(x_19);
x_21 = l_List_mapTR_loop___at_Lean_Elab_addAndCompileUnsafe___spec__2(x_19, x_20);
x_22 = !lean_is_exclusive(x_7);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = lean_ctor_get(x_7, 5);
x_24 = l_Lean_replaceRef(x_18, x_23);
lean_dec(x_23);
lean_dec(x_18);
lean_ctor_set(x_7, 5, x_24);
x_25 = l_List_mapM_loop___at_Lean_Elab_addAndCompileUnsafe___spec__3(x_2, x_21, x_19, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_28, 0, x_26);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_28);
x_29 = l_Lean_addDecl(x_28, x_7, x_8, x_27);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; size_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_box(0);
x_32 = lean_array_size(x_13);
x_33 = lean_box_usize(x_32);
x_34 = l_Lean_Elab_addAndCompileUnsafe___boxed__const__1;
lean_inc(x_13);
x_35 = lean_alloc_closure((void*)(l_Lean_Elab_addAndCompileUnsafe___lambda__1___boxed), 11, 4);
lean_closure_set(x_35, 0, x_13);
lean_closure_set(x_35, 1, x_31);
lean_closure_set(x_35, 2, x_33);
lean_closure_set(x_35, 3, x_34);
x_36 = l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_37 = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2(x_35, x_36, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; uint8_t x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_40 = l_Lean_Elab_applyAttributesOf(x_13, x_39, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
lean_inc(x_8);
lean_inc(x_7);
x_42 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl(x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; uint8_t x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = 1;
x_45 = l_Lean_Elab_applyAttributesOf(x_13, x_44, x_3, x_4, x_5, x_6, x_7, x_8, x_43);
lean_dec(x_13);
if (lean_obj_tag(x_45) == 0)
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_45, 0);
lean_dec(x_47);
x_48 = lean_box(0);
lean_ctor_set(x_45, 0, x_48);
return x_45;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_45, 1);
lean_inc(x_49);
lean_dec(x_45);
x_50 = lean_box(0);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
else
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_45);
if (x_52 == 0)
{
return x_45;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_45, 0);
x_54 = lean_ctor_get(x_45, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_45);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_7);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_56 = !lean_is_exclusive(x_42);
if (x_56 == 0)
{
return x_42;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_42, 0);
x_58 = lean_ctor_get(x_42, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_42);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_28);
lean_dec(x_7);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_60 = !lean_is_exclusive(x_40);
if (x_60 == 0)
{
return x_40;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_40, 0);
x_62 = lean_ctor_get(x_40, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_40);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
uint8_t x_64; 
lean_dec(x_28);
lean_dec(x_7);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_64 = !lean_is_exclusive(x_37);
if (x_64 == 0)
{
return x_37;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_37, 0);
x_66 = lean_ctor_get(x_37, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_37);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
uint8_t x_68; 
lean_dec(x_28);
lean_dec(x_7);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_68 = !lean_is_exclusive(x_29);
if (x_68 == 0)
{
return x_29;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_29, 0);
x_70 = lean_ctor_get(x_29, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_29);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_72 = lean_ctor_get(x_7, 0);
x_73 = lean_ctor_get(x_7, 1);
x_74 = lean_ctor_get(x_7, 2);
x_75 = lean_ctor_get(x_7, 3);
x_76 = lean_ctor_get(x_7, 4);
x_77 = lean_ctor_get(x_7, 5);
x_78 = lean_ctor_get(x_7, 6);
x_79 = lean_ctor_get(x_7, 7);
x_80 = lean_ctor_get(x_7, 8);
x_81 = lean_ctor_get(x_7, 9);
x_82 = lean_ctor_get(x_7, 10);
x_83 = lean_ctor_get_uint8(x_7, sizeof(void*)*13);
x_84 = lean_ctor_get(x_7, 11);
x_85 = lean_ctor_get_uint8(x_7, sizeof(void*)*13 + 1);
x_86 = lean_ctor_get(x_7, 12);
lean_inc(x_86);
lean_inc(x_84);
lean_inc(x_82);
lean_inc(x_81);
lean_inc(x_80);
lean_inc(x_79);
lean_inc(x_78);
lean_inc(x_77);
lean_inc(x_76);
lean_inc(x_75);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_7);
x_87 = l_Lean_replaceRef(x_18, x_77);
lean_dec(x_77);
lean_dec(x_18);
x_88 = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(x_88, 0, x_72);
lean_ctor_set(x_88, 1, x_73);
lean_ctor_set(x_88, 2, x_74);
lean_ctor_set(x_88, 3, x_75);
lean_ctor_set(x_88, 4, x_76);
lean_ctor_set(x_88, 5, x_87);
lean_ctor_set(x_88, 6, x_78);
lean_ctor_set(x_88, 7, x_79);
lean_ctor_set(x_88, 8, x_80);
lean_ctor_set(x_88, 9, x_81);
lean_ctor_set(x_88, 10, x_82);
lean_ctor_set(x_88, 11, x_84);
lean_ctor_set(x_88, 12, x_86);
lean_ctor_set_uint8(x_88, sizeof(void*)*13, x_83);
lean_ctor_set_uint8(x_88, sizeof(void*)*13 + 1, x_85);
x_89 = l_List_mapM_loop___at_Lean_Elab_addAndCompileUnsafe___spec__3(x_2, x_21, x_19, x_20, x_3, x_4, x_5, x_6, x_88, x_8, x_14);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_92, 0, x_90);
lean_inc(x_8);
lean_inc(x_88);
lean_inc(x_92);
x_93 = l_Lean_addDecl(x_92, x_88, x_8, x_91);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; lean_object* x_95; size_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_94 = lean_ctor_get(x_93, 1);
lean_inc(x_94);
lean_dec(x_93);
x_95 = lean_box(0);
x_96 = lean_array_size(x_13);
x_97 = lean_box_usize(x_96);
x_98 = l_Lean_Elab_addAndCompileUnsafe___boxed__const__1;
lean_inc(x_13);
x_99 = lean_alloc_closure((void*)(l_Lean_Elab_addAndCompileUnsafe___lambda__1___boxed), 11, 4);
lean_closure_set(x_99, 0, x_13);
lean_closure_set(x_99, 1, x_95);
lean_closure_set(x_99, 2, x_97);
lean_closure_set(x_99, 3, x_98);
x_100 = l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___closed__1;
lean_inc(x_8);
lean_inc(x_88);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_101 = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__2(x_99, x_100, x_3, x_4, x_5, x_6, x_88, x_8, x_94);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; uint8_t x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_101, 1);
lean_inc(x_102);
lean_dec(x_101);
x_103 = 0;
lean_inc(x_8);
lean_inc(x_88);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_104 = l_Lean_Elab_applyAttributesOf(x_13, x_103, x_3, x_4, x_5, x_6, x_88, x_8, x_102);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; lean_object* x_106; 
x_105 = lean_ctor_get(x_104, 1);
lean_inc(x_105);
lean_dec(x_104);
lean_inc(x_8);
lean_inc(x_88);
x_106 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_compileDecl(x_92, x_3, x_4, x_5, x_6, x_88, x_8, x_105);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; uint8_t x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_106, 1);
lean_inc(x_107);
lean_dec(x_106);
x_108 = 1;
x_109 = l_Lean_Elab_applyAttributesOf(x_13, x_108, x_3, x_4, x_5, x_6, x_88, x_8, x_107);
lean_dec(x_13);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_110 = lean_ctor_get(x_109, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 x_111 = x_109;
} else {
 lean_dec_ref(x_109);
 x_111 = lean_box(0);
}
x_112 = lean_box(0);
if (lean_is_scalar(x_111)) {
 x_113 = lean_alloc_ctor(0, 2, 0);
} else {
 x_113 = x_111;
}
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_110);
return x_113;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_114 = lean_ctor_get(x_109, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_109, 1);
lean_inc(x_115);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 x_116 = x_109;
} else {
 lean_dec_ref(x_109);
 x_116 = lean_box(0);
}
if (lean_is_scalar(x_116)) {
 x_117 = lean_alloc_ctor(1, 2, 0);
} else {
 x_117 = x_116;
}
lean_ctor_set(x_117, 0, x_114);
lean_ctor_set(x_117, 1, x_115);
return x_117;
}
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
lean_dec(x_88);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_118 = lean_ctor_get(x_106, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_106, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_120 = x_106;
} else {
 lean_dec_ref(x_106);
 x_120 = lean_box(0);
}
if (lean_is_scalar(x_120)) {
 x_121 = lean_alloc_ctor(1, 2, 0);
} else {
 x_121 = x_120;
}
lean_ctor_set(x_121, 0, x_118);
lean_ctor_set(x_121, 1, x_119);
return x_121;
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
lean_dec(x_92);
lean_dec(x_88);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_122 = lean_ctor_get(x_104, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_104, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_124 = x_104;
} else {
 lean_dec_ref(x_104);
 x_124 = lean_box(0);
}
if (lean_is_scalar(x_124)) {
 x_125 = lean_alloc_ctor(1, 2, 0);
} else {
 x_125 = x_124;
}
lean_ctor_set(x_125, 0, x_122);
lean_ctor_set(x_125, 1, x_123);
return x_125;
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
lean_dec(x_92);
lean_dec(x_88);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_126 = lean_ctor_get(x_101, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_101, 1);
lean_inc(x_127);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_128 = x_101;
} else {
 lean_dec_ref(x_101);
 x_128 = lean_box(0);
}
if (lean_is_scalar(x_128)) {
 x_129 = lean_alloc_ctor(1, 2, 0);
} else {
 x_129 = x_128;
}
lean_ctor_set(x_129, 0, x_126);
lean_ctor_set(x_129, 1, x_127);
return x_129;
}
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
lean_dec(x_92);
lean_dec(x_88);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_130 = lean_ctor_get(x_93, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_93, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_132 = x_93;
} else {
 lean_dec_ref(x_93);
 x_132 = lean_box(0);
}
if (lean_is_scalar(x_132)) {
 x_133 = lean_alloc_ctor(1, 2, 0);
} else {
 x_133 = x_132;
}
lean_ctor_set(x_133, 0, x_130);
lean_ctor_set(x_133, 1, x_131);
return x_133;
}
}
}
else
{
uint8_t x_134; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_134 = !lean_is_exclusive(x_12);
if (x_134 == 0)
{
return x_12;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_12, 0);
x_136 = lean_ctor_get(x_12, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_12);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
return x_137;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompileUnsafe___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompileUnsafe___spec__1(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Elab_addAndCompileUnsafe___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_1);
lean_dec(x_1);
x_13 = l_List_mapM_loop___at_Lean_Elab_addAndCompileUnsafe___spec__3(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_addAndCompileUnsafe___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_16 = l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_addAndCompileUnsafe___spec__4(x_1, x_2, x_3, x_14, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_13 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_14 = l_Lean_Elab_addAndCompileUnsafe___lambda__1(x_1, x_2, x_12, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompileUnsafe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_Elab_addAndCompileUnsafe(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_ctor_get(x_6, 3);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_name_eq(x_7, x_1);
lean_dec(x_7);
if (x_8 == 0)
{
size_t x_9; size_t x_10; 
x_9 = 1;
x_10 = lean_usize_add(x_3, x_9);
x_3 = x_10;
goto _start;
}
else
{
uint8_t x_12; 
x_12 = 1;
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_unsafe_rec", 11, 11);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 4)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_1);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
size_t x_9; size_t x_10; uint8_t x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_1);
x_11 = l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_4, x_2, x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
x_12 = lean_box(0);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___closed__1;
x_14 = l_Lean_Name_str___override(x_4, x_13);
x_15 = l_Lean_Expr_const___override(x_14, x_5);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
else
{
lean_object* x_17; 
lean_dec(x_3);
x_17 = lean_box(0);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_lt(x_4, x_3);
if (x_6 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_uget(x_5, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_5, x_4, x_8);
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = lean_ctor_get(x_7, 5);
x_13 = lean_ctor_get(x_7, 2);
lean_dec(x_13);
x_14 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___closed__1;
x_15 = l_Lean_Name_str___override(x_11, x_14);
lean_inc(x_1);
lean_inc(x_2);
x_16 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___boxed), 3, 2);
lean_closure_set(x_16, 0, x_2);
lean_closure_set(x_16, 1, x_1);
x_17 = lean_replace_expr(x_16, x_12);
lean_dec(x_12);
lean_dec(x_16);
x_18 = l_Lean_Elab_instInhabitedPreDefinition___closed__2;
lean_ctor_set(x_7, 5, x_17);
lean_ctor_set(x_7, 3, x_15);
lean_ctor_set(x_7, 2, x_18);
x_19 = 1;
x_20 = lean_usize_add(x_4, x_19);
x_21 = lean_array_uset(x_9, x_4, x_7);
x_4 = x_20;
x_5 = x_21;
goto _start;
}
else
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; 
x_23 = lean_ctor_get(x_7, 0);
x_24 = lean_ctor_get_uint8(x_7, sizeof(void*)*7);
x_25 = lean_ctor_get(x_7, 1);
x_26 = lean_ctor_get(x_7, 3);
x_27 = lean_ctor_get(x_7, 4);
x_28 = lean_ctor_get(x_7, 5);
x_29 = lean_ctor_get(x_7, 6);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_23);
lean_dec(x_7);
x_30 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___closed__1;
x_31 = l_Lean_Name_str___override(x_26, x_30);
lean_inc(x_1);
lean_inc(x_2);
x_32 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___boxed), 3, 2);
lean_closure_set(x_32, 0, x_2);
lean_closure_set(x_32, 1, x_1);
x_33 = lean_replace_expr(x_32, x_28);
lean_dec(x_28);
lean_dec(x_32);
x_34 = l_Lean_Elab_instInhabitedPreDefinition___closed__2;
x_35 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_35, 0, x_23);
lean_ctor_set(x_35, 1, x_25);
lean_ctor_set(x_35, 2, x_34);
lean_ctor_set(x_35, 3, x_31);
lean_ctor_set(x_35, 4, x_27);
lean_ctor_set(x_35, 5, x_33);
lean_ctor_set(x_35, 6, x_29);
lean_ctor_set_uint8(x_35, sizeof(void*)*7, x_24);
x_36 = 1;
x_37 = lean_usize_add(x_4, x_36);
x_38 = lean_array_uset(x_9, x_4, x_35);
x_4 = x_37;
x_5 = x_38;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__4(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_st_ref_take(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 7);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_10, 7);
lean_dec(x_14);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
lean_ctor_set_uint8(x_11, sizeof(void*)*3, x_1);
x_16 = lean_st_ref_set(x_7, x_10, x_12);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
x_25 = lean_ctor_get(x_11, 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_26 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_24);
lean_ctor_set(x_26, 2, x_25);
lean_ctor_set_uint8(x_26, sizeof(void*)*3, x_1);
lean_ctor_set(x_10, 7, x_26);
x_27 = lean_st_ref_set(x_7, x_10, x_12);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_29 = x_27;
} else {
 lean_dec_ref(x_27);
 x_29 = lean_box(0);
}
x_30 = lean_box(0);
if (lean_is_scalar(x_29)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_29;
}
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_32 = lean_ctor_get(x_10, 0);
x_33 = lean_ctor_get(x_10, 1);
x_34 = lean_ctor_get(x_10, 2);
x_35 = lean_ctor_get(x_10, 3);
x_36 = lean_ctor_get(x_10, 4);
x_37 = lean_ctor_get(x_10, 5);
x_38 = lean_ctor_get(x_10, 6);
x_39 = lean_ctor_get(x_10, 8);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_10);
x_40 = lean_ctor_get(x_11, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_11, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_11, 2);
lean_inc(x_42);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 lean_ctor_release(x_11, 2);
 x_43 = x_11;
} else {
 lean_dec_ref(x_11);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(0, 3, 1);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_40);
lean_ctor_set(x_44, 1, x_41);
lean_ctor_set(x_44, 2, x_42);
lean_ctor_set_uint8(x_44, sizeof(void*)*3, x_1);
x_45 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_45, 0, x_32);
lean_ctor_set(x_45, 1, x_33);
lean_ctor_set(x_45, 2, x_34);
lean_ctor_set(x_45, 3, x_35);
lean_ctor_set(x_45, 4, x_36);
lean_ctor_set(x_45, 5, x_37);
lean_ctor_set(x_45, 6, x_38);
lean_ctor_set(x_45, 7, x_44);
lean_ctor_set(x_45, 8, x_39);
x_46 = lean_st_ref_set(x_7, x_45, x_12);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_48 = x_46;
} else {
 lean_dec_ref(x_46);
 x_48 = lean_box(0);
}
x_49 = lean_box(0);
if (lean_is_scalar(x_48)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_48;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_47);
return x_50;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__3(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 7);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get_uint8(x_13, sizeof(void*)*3);
lean_dec(x_13);
x_15 = l_Lean_Elab_enableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__4(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_17 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_enableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__4(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_17, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_17, 1);
lean_inc(x_26);
lean_dec(x_17);
x_27 = l_Lean_Elab_enableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__4(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
lean_ctor_set_tag(x_27, 1);
lean_ctor_set(x_27, 0, x_25);
return x_27;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__5(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_shouldGenCodeFor(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
else
{
size_t x_8; size_t x_9; 
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
goto _start;
}
}
else
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_20; uint8_t x_21; 
x_9 = lean_array_get_size(x_1);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_dec_lt(x_20, x_9);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_box(0);
x_10 = x_22;
goto block_19;
}
else
{
size_t x_23; size_t x_24; uint8_t x_25; 
x_23 = 0;
x_24 = lean_usize_of_nat(x_9);
x_25 = l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__5(x_1, x_23, x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_box(0);
x_10 = x_26;
goto block_19;
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_8);
return x_28;
}
}
block_19:
{
size_t x_11; size_t x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
lean_dec(x_10);
x_11 = lean_array_size(x_1);
x_12 = 0;
lean_inc(x_1);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2(x_1, x_9, x_11, x_12, x_1);
x_14 = 2;
x_15 = lean_box(x_14);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_addAndCompileUnsafe___boxed), 9, 2);
lean_closure_set(x_16, 0, x_13);
lean_closure_set(x_16, 1, x_15);
x_17 = 0;
x_18 = l_Lean_Elab_withEnableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__3(x_17, x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__1(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = l_Lean_Elab_enableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__4(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Lean_Elab_withEnableInfoTree___at_Lean_Elab_addAndCompilePartialRec___spec__3(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at_Lean_Elab_addAndCompilePartialRec___spec__5(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Expr_isConst(x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Expr_constName_x21(x_2);
x_6 = l_Array_contains___at_Lean_registerInternalExceptionId___spec__1(x_1, x_5);
lean_dec(x_5);
return x_6;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_find_expr(x_3, x_2);
lean_dec(x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 1;
return x_6;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_ensureNoRecFn___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unexpected occurrence of recursive application", 46, 46);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_ensureNoRecFn___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_ensureNoRecFn___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ensureNoRecFn___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_Expr_getAppFn(x_2);
x_9 = l_Lean_Expr_isConst(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Lean_Expr_constName_x21(x_8);
lean_dec(x_8);
x_13 = l_Array_contains___at_Lean_registerInternalExceptionId___spec__1(x_1, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_2);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_7);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = l_Lean_indentExpr(x_2);
x_17 = l_Lean_Elab_ensureNoRecFn___lambda__1___closed__2;
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5;
x_20 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_20, x_3, x_4, x_5, x_6, x_7);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ensureNoRecFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
lean_inc(x_1);
x_8 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_containsRecFn(x_1, x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_ensureNoRecFn___lambda__1___boxed), 7, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = l_Lean_Meta_forEachExpr___at_Lean_Meta_setMVarUserNamesAt___spec__5(x_2, x_11, x_3, x_4, x_5, x_6, x_7);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ensureNoRecFn___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_ensureNoRecFn___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_array_get_size(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___lambda__1___boxed), 7, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_usize_dec_lt(x_2, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_11 = lean_array_uget(x_3, x_2);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_uset(x_3, x_2, x_12);
x_14 = lean_ctor_get(x_11, 5);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___closed__1;
x_16 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_17 = l_Lean_Meta_lambdaTelescope___at_Lean_PrettyPrinter_Delaborator_returnsPi___spec__1___rarg(x_14, x_15, x_16, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 1;
x_21 = lean_usize_add(x_2, x_20);
x_22 = lean_array_uset(x_13, x_2, x_18);
x_2 = x_21;
x_3 = x_22;
x_8 = x_19;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
return x_17;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_17, 0);
x_26 = lean_ctor_get(x_17, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_17);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_maxRecDepth;
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("invalid mutual definition, result types must be in the same universe ", 69, 69);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("level, resulting type ", 22, 22);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__3;
x_2 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__5;
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("for `", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("` is", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" : ", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__11;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__13;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("and for `", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__15;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_11, 4);
lean_dec(x_15);
x_16 = lean_ctor_get(x_11, 2);
lean_dec(x_16);
x_17 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__1;
x_18 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_17);
lean_ctor_set(x_11, 4, x_18);
lean_ctor_set(x_11, 2, x_1);
lean_ctor_set_uint8(x_11, sizeof(void*)*13, x_2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_19 = lean_infer_type(x_3, x_4, x_5, x_11, x_12, x_13);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_6);
x_22 = lean_infer_type(x_6, x_4, x_5, x_11, x_12, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_7, 3);
lean_inc(x_25);
lean_dec(x_7);
x_26 = l_Lean_MessageData_ofName(x_25);
x_27 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__8;
x_28 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__10;
x_30 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_indentExpr(x_3);
x_32 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__12;
x_34 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Lean_MessageData_ofExpr(x_20);
x_36 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__14;
x_38 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__6;
x_40 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
x_41 = l_Lean_Elab_instInhabitedPreDefinition;
x_42 = lean_array_get(x_41, x_8, x_9);
x_43 = lean_ctor_get(x_42, 3);
lean_inc(x_43);
lean_dec(x_42);
x_44 = l_Lean_MessageData_ofName(x_43);
x_45 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__16;
x_46 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
x_47 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_29);
x_48 = l_Lean_indentExpr(x_6);
x_49 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_33);
x_51 = l_Lean_MessageData_ofExpr(x_23);
x_52 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5;
x_54 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_55, 0, x_40);
lean_ctor_set(x_55, 1, x_54);
x_56 = l_Lean_throwError___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__1(x_55, x_4, x_5, x_11, x_12, x_24);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
return x_56;
}
else
{
uint8_t x_57; 
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_57 = !lean_is_exclusive(x_22);
if (x_57 == 0)
{
return x_22;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_22, 0);
x_59 = lean_ctor_get(x_22, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_22);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_11);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_61 = !lean_is_exclusive(x_19);
if (x_61 == 0)
{
return x_19;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_19, 0);
x_63 = lean_ctor_get(x_19, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_19);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_65 = lean_ctor_get(x_11, 0);
x_66 = lean_ctor_get(x_11, 1);
x_67 = lean_ctor_get(x_11, 3);
x_68 = lean_ctor_get(x_11, 5);
x_69 = lean_ctor_get(x_11, 6);
x_70 = lean_ctor_get(x_11, 7);
x_71 = lean_ctor_get(x_11, 8);
x_72 = lean_ctor_get(x_11, 9);
x_73 = lean_ctor_get(x_11, 10);
x_74 = lean_ctor_get(x_11, 11);
x_75 = lean_ctor_get_uint8(x_11, sizeof(void*)*13 + 1);
x_76 = lean_ctor_get(x_11, 12);
lean_inc(x_76);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_11);
x_77 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__1;
x_78 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_77);
x_79 = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(x_79, 0, x_65);
lean_ctor_set(x_79, 1, x_66);
lean_ctor_set(x_79, 2, x_1);
lean_ctor_set(x_79, 3, x_67);
lean_ctor_set(x_79, 4, x_78);
lean_ctor_set(x_79, 5, x_68);
lean_ctor_set(x_79, 6, x_69);
lean_ctor_set(x_79, 7, x_70);
lean_ctor_set(x_79, 8, x_71);
lean_ctor_set(x_79, 9, x_72);
lean_ctor_set(x_79, 10, x_73);
lean_ctor_set(x_79, 11, x_74);
lean_ctor_set(x_79, 12, x_76);
lean_ctor_set_uint8(x_79, sizeof(void*)*13, x_2);
lean_ctor_set_uint8(x_79, sizeof(void*)*13 + 1, x_75);
lean_inc(x_12);
lean_inc(x_79);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_80 = lean_infer_type(x_3, x_4, x_5, x_79, x_12, x_13);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
lean_inc(x_12);
lean_inc(x_79);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_6);
x_83 = lean_infer_type(x_6, x_4, x_5, x_79, x_12, x_82);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_86 = lean_ctor_get(x_7, 3);
lean_inc(x_86);
lean_dec(x_7);
x_87 = l_Lean_MessageData_ofName(x_86);
x_88 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__8;
x_89 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_87);
x_90 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__10;
x_91 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
x_92 = l_Lean_indentExpr(x_3);
x_93 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
x_94 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__12;
x_95 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
x_96 = l_Lean_MessageData_ofExpr(x_81);
x_97 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
x_98 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__14;
x_99 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
x_100 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__6;
x_101 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
x_102 = l_Lean_Elab_instInhabitedPreDefinition;
x_103 = lean_array_get(x_102, x_8, x_9);
x_104 = lean_ctor_get(x_103, 3);
lean_inc(x_104);
lean_dec(x_103);
x_105 = l_Lean_MessageData_ofName(x_104);
x_106 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__16;
x_107 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_105);
x_108 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_90);
x_109 = l_Lean_indentExpr(x_6);
x_110 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
x_111 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_94);
x_112 = l_Lean_MessageData_ofExpr(x_84);
x_113 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
x_114 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5;
x_115 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
x_116 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_116, 0, x_101);
lean_ctor_set(x_116, 1, x_115);
x_117 = l_Lean_throwError___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__1(x_116, x_4, x_5, x_79, x_12, x_85);
lean_dec(x_12);
lean_dec(x_79);
lean_dec(x_5);
lean_dec(x_4);
return x_117;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
lean_dec(x_81);
lean_dec(x_79);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_118 = lean_ctor_get(x_83, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_83, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_120 = x_83;
} else {
 lean_dec_ref(x_83);
 x_120 = lean_box(0);
}
if (lean_is_scalar(x_120)) {
 x_121 = lean_alloc_ctor(1, 2, 0);
} else {
 x_121 = x_120;
}
lean_ctor_set(x_121, 0, x_118);
lean_ctor_set(x_121, 1, x_119);
return x_121;
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
lean_dec(x_79);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_122 = lean_ctor_get(x_80, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_80, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_124 = x_80;
} else {
 lean_dec_ref(x_80);
 x_124 = lean_box(0);
}
if (lean_is_scalar(x_124)) {
 x_125 = lean_alloc_ctor(1, 2, 0);
} else {
 x_125 = x_124;
}
lean_ctor_set(x_125, 0, x_122);
lean_ctor_set(x_125, 1, x_123);
return x_125;
}
}
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_pp_sanitizeNames;
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_diagnostics;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l_Lean_Meta_getLevel(x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 1;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_17 = l_Lean_Meta_checkpointDefEq___at_Lean_Meta_isLevelDefEq___spec__1(x_1, x_14, x_16, x_8, x_9, x_10, x_11, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_60; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_ctor_get(x_10, 2);
lean_inc(x_21);
x_22 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__1;
x_23 = 0;
x_24 = l_Lean_Option_set___at_Lean_Environment_realizeConst___spec__3(x_21, x_22, x_23);
x_25 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__2;
x_26 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_24, x_25);
x_27 = lean_st_ref_get(x_11, x_20);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
lean_dec(x_28);
x_60 = l_Lean_Kernel_isDiagnosticsEnabled(x_30);
lean_dec(x_30);
if (x_60 == 0)
{
if (x_26 == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_box(0);
x_62 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1(x_24, x_26, x_2, x_8, x_9, x_7, x_3, x_4, x_5, x_61, x_10, x_11, x_29);
return x_62;
}
else
{
lean_object* x_63; 
x_63 = lean_box(0);
x_31 = x_63;
goto block_59;
}
}
else
{
if (x_26 == 0)
{
lean_object* x_64; 
x_64 = lean_box(0);
x_31 = x_64;
goto block_59;
}
else
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_box(0);
x_66 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1(x_24, x_26, x_2, x_8, x_9, x_7, x_3, x_4, x_5, x_65, x_10, x_11, x_29);
return x_66;
}
}
block_59:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_31);
x_32 = lean_st_ref_take(x_11, x_29);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = !lean_is_exclusive(x_33);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_36 = lean_ctor_get(x_33, 0);
x_37 = lean_ctor_get(x_33, 5);
lean_dec(x_37);
x_38 = l_Lean_Kernel_enableDiag(x_36, x_26);
x_39 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4;
lean_ctor_set(x_33, 5, x_39);
lean_ctor_set(x_33, 0, x_38);
x_40 = lean_st_ref_set(x_11, x_33, x_34);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_box(0);
x_43 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1(x_24, x_26, x_2, x_8, x_9, x_7, x_3, x_4, x_5, x_42, x_10, x_11, x_41);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_44 = lean_ctor_get(x_33, 0);
x_45 = lean_ctor_get(x_33, 1);
x_46 = lean_ctor_get(x_33, 2);
x_47 = lean_ctor_get(x_33, 3);
x_48 = lean_ctor_get(x_33, 4);
x_49 = lean_ctor_get(x_33, 6);
x_50 = lean_ctor_get(x_33, 7);
x_51 = lean_ctor_get(x_33, 8);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_33);
x_52 = l_Lean_Kernel_enableDiag(x_44, x_26);
x_53 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4;
x_54 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_45);
lean_ctor_set(x_54, 2, x_46);
lean_ctor_set(x_54, 3, x_47);
lean_ctor_set(x_54, 4, x_48);
lean_ctor_set(x_54, 5, x_53);
lean_ctor_set(x_54, 6, x_49);
lean_ctor_set(x_54, 7, x_50);
lean_ctor_set(x_54, 8, x_51);
x_55 = lean_st_ref_set(x_11, x_54, x_34);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = lean_box(0);
x_58 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1(x_24, x_26, x_2, x_8, x_9, x_7, x_3, x_4, x_5, x_57, x_10, x_11, x_56);
return x_58;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
x_67 = !lean_is_exclusive(x_17);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_17, 0);
lean_dec(x_68);
x_69 = lean_box(0);
lean_ctor_set(x_17, 0, x_69);
return x_17;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_17, 1);
lean_inc(x_70);
lean_dec(x_17);
x_71 = lean_box(0);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
x_73 = !lean_is_exclusive(x_17);
if (x_73 == 0)
{
return x_17;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_17, 0);
x_75 = lean_ctor_get(x_17, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_17);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_13);
if (x_77 == 0)
{
return x_13;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_13, 0);
x_79 = lean_ctor_get(x_13, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_13);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_6, 1);
x_17 = lean_nat_dec_lt(x_8, x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; 
lean_dec(x_7);
x_19 = lean_array_fget(x_1, x_8);
x_20 = lean_ctor_get(x_19, 4);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_instInhabitedNat;
x_22 = lean_array_get(x_21, x_2, x_8);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
lean_inc(x_8);
lean_inc(x_1);
lean_inc(x_3);
lean_inc(x_4);
lean_inc(x_5);
x_24 = lean_alloc_closure((void*)(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___boxed), 12, 5);
lean_closure_set(x_24, 0, x_5);
lean_closure_set(x_24, 1, x_4);
lean_closure_set(x_24, 2, x_3);
lean_closure_set(x_24, 3, x_1);
lean_closure_set(x_24, 4, x_8);
x_25 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_26 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_setMVarUserNamesAt___spec__3___rarg(x_20, x_23, x_24, x_25, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_ctor_get(x_6, 2);
x_29 = lean_nat_add(x_8, x_28);
lean_dec(x_8);
x_30 = lean_box(0);
x_7 = x_30;
x_8 = x_29;
x_9 = lean_box(0);
x_10 = lean_box(0);
x_15 = x_27;
goto _start;
}
else
{
uint8_t x_32; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_26);
if (x_32 == 0)
{
return x_26;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_26, 0);
x_34 = lean_ctor_get(x_26, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_26);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_11 = l_Lean_Meta_getLevel(x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_array_get_size(x_1);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_16, 2, x_15);
x_17 = lean_box(0);
x_18 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2(x_1, x_2, x_3, x_5, x_12, x_16, x_17, x_15, lean_box(0), lean_box(0), x_6, x_7, x_8, x_9, x_13);
lean_dec(x_16);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_11);
if (x_27 == 0)
{
return x_11;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_11, 0);
x_29 = lean_ctor_get(x_11, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_11);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_array_size(x_1);
x_9 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1(x_8, x_9, x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_instInhabitedPreDefinition;
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_get(x_13, x_1, x_14);
x_16 = lean_ctor_get(x_15, 4);
lean_inc(x_16);
x_17 = l_instInhabitedNat;
x_18 = lean_array_get(x_17, x_11, x_14);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_alloc_closure((void*)(l_Lean_Elab_checkCodomainsLevel___lambda__1___boxed), 10, 3);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_11);
lean_closure_set(x_20, 2, x_15);
x_21 = 0;
x_22 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg(x_16, x_19, x_20, x_21, x_3, x_4, x_5, x_6, x_12);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_10);
if (x_23 == 0)
{
return x_10;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_10, 0);
x_25 = lean_ctor_get(x_10, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_10);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_get_size(x_1);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Elab_checkCodomainsLevel___lambda__2(x_1, x_10, x_2, x_3, x_4, x_5, x_6);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1(x_9, x_10, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1(x_1, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_6);
lean_dec(x_2);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_checkCodomainsLevel___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_4);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkCodomainsLevel___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_checkCodomainsLevel___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_shareCommonPreDefs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_usize_dec_lt(x_5, x_4);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_12 = lean_array_uget(x_3, x_5);
x_13 = lean_ctor_get(x_12, 4);
lean_inc(x_13);
x_14 = lean_array_push(x_6, x_13);
x_15 = lean_ctor_get(x_12, 5);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_array_push(x_14, x_15);
x_17 = 1;
x_18 = lean_usize_add(x_5, x_17);
x_5 = x_18;
x_6 = x_16;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_shareCommonPreDefs___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_nat_dec_lt(x_5, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_array_fget(x_1, x_5);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_16 = lean_ctor_get(x_14, 5);
lean_dec(x_16);
x_17 = lean_ctor_get(x_14, 4);
lean_dec(x_17);
x_18 = lean_unsigned_to_nat(2u);
x_19 = lean_nat_mul(x_18, x_5);
x_20 = l_Lean_instInhabitedExpr;
x_21 = lean_array_get(x_20, x_2, x_19);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_19, x_22);
lean_dec(x_19);
x_24 = lean_array_get(x_20, x_2, x_23);
lean_dec(x_23);
lean_ctor_set(x_14, 5, x_24);
lean_ctor_set(x_14, 4, x_21);
x_25 = lean_array_push(x_4, x_14);
x_26 = lean_ctor_get(x_3, 2);
x_27 = lean_nat_add(x_5, x_26);
lean_dec(x_5);
x_4 = x_25;
x_5 = x_27;
x_6 = lean_box(0);
x_7 = lean_box(0);
goto _start;
}
else
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_29 = lean_ctor_get(x_14, 0);
x_30 = lean_ctor_get_uint8(x_14, sizeof(void*)*7);
x_31 = lean_ctor_get(x_14, 1);
x_32 = lean_ctor_get(x_14, 2);
x_33 = lean_ctor_get(x_14, 3);
x_34 = lean_ctor_get(x_14, 6);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_29);
lean_dec(x_14);
x_35 = lean_unsigned_to_nat(2u);
x_36 = lean_nat_mul(x_35, x_5);
x_37 = l_Lean_instInhabitedExpr;
x_38 = lean_array_get(x_37, x_2, x_36);
x_39 = lean_unsigned_to_nat(1u);
x_40 = lean_nat_add(x_36, x_39);
lean_dec(x_36);
x_41 = lean_array_get(x_37, x_2, x_40);
lean_dec(x_40);
x_42 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_42, 0, x_29);
lean_ctor_set(x_42, 1, x_31);
lean_ctor_set(x_42, 2, x_32);
lean_ctor_set(x_42, 3, x_33);
lean_ctor_set(x_42, 4, x_38);
lean_ctor_set(x_42, 5, x_41);
lean_ctor_set(x_42, 6, x_34);
lean_ctor_set_uint8(x_42, sizeof(void*)*7, x_30);
x_43 = lean_array_push(x_4, x_42);
x_44 = lean_ctor_get(x_3, 2);
x_45 = lean_nat_add(x_5, x_44);
lean_dec(x_5);
x_4 = x_43;
x_5 = x_45;
x_6 = lean_box(0);
x_7 = lean_box(0);
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_7);
x_10 = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at_Lean_Core_wrapAsyncAsSnapshot___spec__4(x_1, x_5, x_2, x_3, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(x_4, x_7, x_8, x_11);
lean_dec(x_7);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, double x_8, double x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (x_7 == 0)
{
double x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1;
x_15 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set_float(x_15, sizeof(void*)*2, x_14);
lean_ctor_set_float(x_15, sizeof(void*)*2 + 8, x_14);
lean_ctor_set_uint8(x_15, sizeof(void*)*2 + 16, x_2);
x_16 = lean_box(0);
x_17 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__1(x_4, x_5, x_10, x_6, x_15, x_16, x_11, x_12, x_13);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_18, 0, x_1);
lean_ctor_set(x_18, 1, x_3);
lean_ctor_set_float(x_18, sizeof(void*)*2, x_8);
lean_ctor_set_float(x_18, sizeof(void*)*2 + 8, x_9);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 16, x_2);
x_19 = lean_box(0);
x_20 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__1(x_4, x_5, x_10, x_6, x_18, x_19, x_11, x_12, x_13);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, double x_7, double x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 5);
lean_inc(x_14);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_5);
x_15 = lean_apply_4(x_9, x_5, x_11, x_12, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__2(x_1, x_2, x_3, x_4, x_14, x_5, x_6, x_7, x_8, x_16, x_11, x_12, x_17);
lean_dec(x_12);
lean_dec(x_5);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__2;
x_21 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__2(x_1, x_2, x_3, x_4, x_14, x_5, x_6, x_7, x_8, x_20, x_11, x_12, x_19);
lean_dec(x_12);
lean_dec(x_5);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__4(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Core_wrapAsyncAsSnapshot___spec__3___rarg(x_10, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__1;
x_16 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_1, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_112 = lean_io_mono_nanos_now(x_14);
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
lean_dec(x_112);
lean_inc(x_10);
lean_inc(x_9);
x_115 = lean_apply_3(x_7, x_9, x_10, x_114);
if (lean_obj_tag(x_115) == 0)
{
uint8_t x_116; 
x_116 = !lean_is_exclusive(x_115);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; 
x_117 = lean_ctor_get(x_115, 0);
x_118 = lean_ctor_get(x_115, 1);
x_119 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_119, 0, x_117);
x_120 = lean_io_mono_nanos_now(x_118);
x_121 = !lean_is_exclusive(x_120);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; uint8_t x_124; lean_object* x_125; double x_126; double x_127; double x_128; double x_129; double x_130; lean_object* x_131; lean_object* x_132; 
x_122 = lean_ctor_get(x_120, 0);
x_123 = lean_ctor_get(x_120, 1);
x_124 = 0;
x_125 = lean_unsigned_to_nat(0u);
x_126 = l_Float_ofScientific(x_113, x_124, x_125);
lean_dec(x_113);
x_127 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_128 = lean_float_div(x_126, x_127);
x_129 = l_Float_ofScientific(x_122, x_124, x_125);
lean_dec(x_122);
x_130 = lean_float_div(x_129, x_127);
x_131 = lean_box_float(x_128);
x_132 = lean_box_float(x_130);
lean_ctor_set(x_120, 1, x_132);
lean_ctor_set(x_120, 0, x_131);
lean_ctor_set(x_115, 1, x_120);
lean_ctor_set(x_115, 0, x_119);
x_17 = x_115;
x_18 = x_123;
goto block_111;
}
else
{
lean_object* x_133; lean_object* x_134; uint8_t x_135; lean_object* x_136; double x_137; double x_138; double x_139; double x_140; double x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_133 = lean_ctor_get(x_120, 0);
x_134 = lean_ctor_get(x_120, 1);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_120);
x_135 = 0;
x_136 = lean_unsigned_to_nat(0u);
x_137 = l_Float_ofScientific(x_113, x_135, x_136);
lean_dec(x_113);
x_138 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_139 = lean_float_div(x_137, x_138);
x_140 = l_Float_ofScientific(x_133, x_135, x_136);
lean_dec(x_133);
x_141 = lean_float_div(x_140, x_138);
x_142 = lean_box_float(x_139);
x_143 = lean_box_float(x_141);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set(x_144, 1, x_143);
lean_ctor_set(x_115, 1, x_144);
lean_ctor_set(x_115, 0, x_119);
x_17 = x_115;
x_18 = x_134;
goto block_111;
}
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; lean_object* x_153; double x_154; double x_155; double x_156; double x_157; double x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_145 = lean_ctor_get(x_115, 0);
x_146 = lean_ctor_get(x_115, 1);
lean_inc(x_146);
lean_inc(x_145);
lean_dec(x_115);
x_147 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_147, 0, x_145);
x_148 = lean_io_mono_nanos_now(x_146);
x_149 = lean_ctor_get(x_148, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_148, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_151 = x_148;
} else {
 lean_dec_ref(x_148);
 x_151 = lean_box(0);
}
x_152 = 0;
x_153 = lean_unsigned_to_nat(0u);
x_154 = l_Float_ofScientific(x_113, x_152, x_153);
lean_dec(x_113);
x_155 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_156 = lean_float_div(x_154, x_155);
x_157 = l_Float_ofScientific(x_149, x_152, x_153);
lean_dec(x_149);
x_158 = lean_float_div(x_157, x_155);
x_159 = lean_box_float(x_156);
x_160 = lean_box_float(x_158);
if (lean_is_scalar(x_151)) {
 x_161 = lean_alloc_ctor(0, 2, 0);
} else {
 x_161 = x_151;
}
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
x_162 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_162, 0, x_147);
lean_ctor_set(x_162, 1, x_161);
x_17 = x_162;
x_18 = x_150;
goto block_111;
}
}
else
{
uint8_t x_163; 
x_163 = !lean_is_exclusive(x_115);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; 
x_164 = lean_ctor_get(x_115, 0);
x_165 = lean_ctor_get(x_115, 1);
x_166 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_166, 0, x_164);
x_167 = lean_io_mono_nanos_now(x_165);
x_168 = !lean_is_exclusive(x_167);
if (x_168 == 0)
{
lean_object* x_169; lean_object* x_170; uint8_t x_171; lean_object* x_172; double x_173; double x_174; double x_175; double x_176; double x_177; lean_object* x_178; lean_object* x_179; 
x_169 = lean_ctor_get(x_167, 0);
x_170 = lean_ctor_get(x_167, 1);
x_171 = 0;
x_172 = lean_unsigned_to_nat(0u);
x_173 = l_Float_ofScientific(x_113, x_171, x_172);
lean_dec(x_113);
x_174 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_175 = lean_float_div(x_173, x_174);
x_176 = l_Float_ofScientific(x_169, x_171, x_172);
lean_dec(x_169);
x_177 = lean_float_div(x_176, x_174);
x_178 = lean_box_float(x_175);
x_179 = lean_box_float(x_177);
lean_ctor_set(x_167, 1, x_179);
lean_ctor_set(x_167, 0, x_178);
lean_ctor_set_tag(x_115, 0);
lean_ctor_set(x_115, 1, x_167);
lean_ctor_set(x_115, 0, x_166);
x_17 = x_115;
x_18 = x_170;
goto block_111;
}
else
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; lean_object* x_183; double x_184; double x_185; double x_186; double x_187; double x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_180 = lean_ctor_get(x_167, 0);
x_181 = lean_ctor_get(x_167, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_167);
x_182 = 0;
x_183 = lean_unsigned_to_nat(0u);
x_184 = l_Float_ofScientific(x_113, x_182, x_183);
lean_dec(x_113);
x_185 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_186 = lean_float_div(x_184, x_185);
x_187 = l_Float_ofScientific(x_180, x_182, x_183);
lean_dec(x_180);
x_188 = lean_float_div(x_187, x_185);
x_189 = lean_box_float(x_186);
x_190 = lean_box_float(x_188);
x_191 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_191, 0, x_189);
lean_ctor_set(x_191, 1, x_190);
lean_ctor_set_tag(x_115, 0);
lean_ctor_set(x_115, 1, x_191);
lean_ctor_set(x_115, 0, x_166);
x_17 = x_115;
x_18 = x_181;
goto block_111;
}
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; uint8_t x_199; lean_object* x_200; double x_201; double x_202; double x_203; double x_204; double x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_192 = lean_ctor_get(x_115, 0);
x_193 = lean_ctor_get(x_115, 1);
lean_inc(x_193);
lean_inc(x_192);
lean_dec(x_115);
x_194 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_194, 0, x_192);
x_195 = lean_io_mono_nanos_now(x_193);
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_195, 1);
lean_inc(x_197);
if (lean_is_exclusive(x_195)) {
 lean_ctor_release(x_195, 0);
 lean_ctor_release(x_195, 1);
 x_198 = x_195;
} else {
 lean_dec_ref(x_195);
 x_198 = lean_box(0);
}
x_199 = 0;
x_200 = lean_unsigned_to_nat(0u);
x_201 = l_Float_ofScientific(x_113, x_199, x_200);
lean_dec(x_113);
x_202 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5;
x_203 = lean_float_div(x_201, x_202);
x_204 = l_Float_ofScientific(x_196, x_199, x_200);
lean_dec(x_196);
x_205 = lean_float_div(x_204, x_202);
x_206 = lean_box_float(x_203);
x_207 = lean_box_float(x_205);
if (lean_is_scalar(x_198)) {
 x_208 = lean_alloc_ctor(0, 2, 0);
} else {
 x_208 = x_198;
}
lean_ctor_set(x_208, 0, x_206);
lean_ctor_set(x_208, 1, x_207);
x_209 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_209, 0, x_194);
lean_ctor_set(x_209, 1, x_208);
x_17 = x_209;
x_18 = x_197;
goto block_111;
}
}
block_111:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; uint8_t x_25; 
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2;
x_24 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_1, x_23);
if (x_24 == 0)
{
if (x_6 == 0)
{
uint8_t x_91; 
x_91 = 0;
x_25 = x_91;
goto block_90;
}
else
{
lean_object* x_92; double x_93; double x_94; lean_object* x_95; 
x_92 = lean_box(0);
x_93 = lean_unbox_float(x_21);
lean_dec(x_21);
x_94 = lean_unbox_float(x_22);
lean_dec(x_22);
x_95 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3(x_2, x_3, x_4, x_13, x_20, x_24, x_93, x_94, x_5, x_92, x_9, x_10, x_18);
return x_95;
}
}
else
{
if (x_6 == 0)
{
double x_96; double x_97; double x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; lean_object* x_102; double x_103; double x_104; double x_105; uint8_t x_106; 
x_96 = lean_unbox_float(x_22);
x_97 = lean_unbox_float(x_21);
x_98 = lean_float_sub(x_96, x_97);
x_99 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3;
x_100 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_99);
x_101 = 0;
x_102 = lean_unsigned_to_nat(0u);
x_103 = l_Float_ofScientific(x_100, x_101, x_102);
lean_dec(x_100);
x_104 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__4;
x_105 = lean_float_div(x_103, x_104);
x_106 = lean_float_decLt(x_105, x_98);
x_25 = x_106;
goto block_90;
}
else
{
lean_object* x_107; double x_108; double x_109; lean_object* x_110; 
x_107 = lean_box(0);
x_108 = lean_unbox_float(x_21);
lean_dec(x_21);
x_109 = lean_unbox_float(x_22);
lean_dec(x_22);
x_110 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3(x_2, x_3, x_4, x_13, x_20, x_24, x_108, x_109, x_5, x_107, x_9, x_10, x_18);
return x_110;
}
}
block_90:
{
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_26 = lean_st_ref_take(x_10, x_18);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_27, 4);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = !lean_is_exclusive(x_27);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_27, 4);
lean_dec(x_31);
x_32 = !lean_is_exclusive(x_28);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_28, 0);
x_34 = l_Lean_PersistentArray_append___rarg(x_13, x_33);
lean_dec(x_33);
lean_ctor_set(x_28, 0, x_34);
x_35 = lean_st_ref_set(x_10, x_27, x_29);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(x_20, x_9, x_10, x_36);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_20);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
return x_37;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_37);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_37);
if (x_42 == 0)
{
return x_37;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_37, 0);
x_44 = lean_ctor_get(x_37, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_37);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint64_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_46 = lean_ctor_get_uint64(x_28, sizeof(void*)*1);
x_47 = lean_ctor_get(x_28, 0);
lean_inc(x_47);
lean_dec(x_28);
x_48 = l_Lean_PersistentArray_append___rarg(x_13, x_47);
lean_dec(x_47);
x_49 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set_uint64(x_49, sizeof(void*)*1, x_46);
lean_ctor_set(x_27, 4, x_49);
x_50 = lean_st_ref_set(x_10, x_27, x_29);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(x_20, x_9, x_10, x_51);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_20);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_55 = x_52;
} else {
 lean_dec_ref(x_52);
 x_55 = lean_box(0);
}
if (lean_is_scalar(x_55)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_55;
}
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_52, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_52, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_59 = x_52;
} else {
 lean_dec_ref(x_52);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(1, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint64_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_61 = lean_ctor_get(x_27, 0);
x_62 = lean_ctor_get(x_27, 1);
x_63 = lean_ctor_get(x_27, 2);
x_64 = lean_ctor_get(x_27, 3);
x_65 = lean_ctor_get(x_27, 5);
x_66 = lean_ctor_get(x_27, 6);
x_67 = lean_ctor_get(x_27, 7);
x_68 = lean_ctor_get(x_27, 8);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_27);
x_69 = lean_ctor_get_uint64(x_28, sizeof(void*)*1);
x_70 = lean_ctor_get(x_28, 0);
lean_inc(x_70);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 x_71 = x_28;
} else {
 lean_dec_ref(x_28);
 x_71 = lean_box(0);
}
x_72 = l_Lean_PersistentArray_append___rarg(x_13, x_70);
lean_dec(x_70);
if (lean_is_scalar(x_71)) {
 x_73 = lean_alloc_ctor(0, 1, 8);
} else {
 x_73 = x_71;
}
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set_uint64(x_73, sizeof(void*)*1, x_69);
x_74 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_74, 0, x_61);
lean_ctor_set(x_74, 1, x_62);
lean_ctor_set(x_74, 2, x_63);
lean_ctor_set(x_74, 3, x_64);
lean_ctor_set(x_74, 4, x_73);
lean_ctor_set(x_74, 5, x_65);
lean_ctor_set(x_74, 6, x_66);
lean_ctor_set(x_74, 7, x_67);
lean_ctor_set(x_74, 8, x_68);
x_75 = lean_st_ref_set(x_10, x_74, x_29);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(x_20, x_9, x_10, x_76);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_20);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_80 = x_77;
} else {
 lean_dec_ref(x_77);
 x_80 = lean_box(0);
}
if (lean_is_scalar(x_80)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_80;
}
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_ctor_get(x_77, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_77, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_84 = x_77;
} else {
 lean_dec_ref(x_77);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(1, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
else
{
lean_object* x_86; double x_87; double x_88; lean_object* x_89; 
x_86 = lean_box(0);
x_87 = lean_unbox_float(x_21);
lean_dec(x_21);
x_88 = lean_unbox_float(x_22);
lean_dec(x_22);
x_89 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3(x_2, x_3, x_4, x_13, x_20, x_24, x_87, x_88, x_5, x_86, x_9, x_10, x_18);
return x_89;
}
}
}
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_303 = lean_io_get_num_heartbeats(x_14);
x_304 = lean_ctor_get(x_303, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_303, 1);
lean_inc(x_305);
lean_dec(x_303);
lean_inc(x_10);
lean_inc(x_9);
x_306 = lean_apply_3(x_7, x_9, x_10, x_305);
if (lean_obj_tag(x_306) == 0)
{
uint8_t x_307; 
x_307 = !lean_is_exclusive(x_306);
if (x_307 == 0)
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; uint8_t x_312; 
x_308 = lean_ctor_get(x_306, 0);
x_309 = lean_ctor_get(x_306, 1);
x_310 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_310, 0, x_308);
x_311 = lean_io_get_num_heartbeats(x_309);
x_312 = !lean_is_exclusive(x_311);
if (x_312 == 0)
{
lean_object* x_313; lean_object* x_314; uint8_t x_315; lean_object* x_316; double x_317; double x_318; lean_object* x_319; lean_object* x_320; 
x_313 = lean_ctor_get(x_311, 0);
x_314 = lean_ctor_get(x_311, 1);
x_315 = 0;
x_316 = lean_unsigned_to_nat(0u);
x_317 = l_Float_ofScientific(x_304, x_315, x_316);
lean_dec(x_304);
x_318 = l_Float_ofScientific(x_313, x_315, x_316);
lean_dec(x_313);
x_319 = lean_box_float(x_317);
x_320 = lean_box_float(x_318);
lean_ctor_set(x_311, 1, x_320);
lean_ctor_set(x_311, 0, x_319);
lean_ctor_set(x_306, 1, x_311);
lean_ctor_set(x_306, 0, x_310);
x_210 = x_306;
x_211 = x_314;
goto block_302;
}
else
{
lean_object* x_321; lean_object* x_322; uint8_t x_323; lean_object* x_324; double x_325; double x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; 
x_321 = lean_ctor_get(x_311, 0);
x_322 = lean_ctor_get(x_311, 1);
lean_inc(x_322);
lean_inc(x_321);
lean_dec(x_311);
x_323 = 0;
x_324 = lean_unsigned_to_nat(0u);
x_325 = l_Float_ofScientific(x_304, x_323, x_324);
lean_dec(x_304);
x_326 = l_Float_ofScientific(x_321, x_323, x_324);
lean_dec(x_321);
x_327 = lean_box_float(x_325);
x_328 = lean_box_float(x_326);
x_329 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_329, 0, x_327);
lean_ctor_set(x_329, 1, x_328);
lean_ctor_set(x_306, 1, x_329);
lean_ctor_set(x_306, 0, x_310);
x_210 = x_306;
x_211 = x_322;
goto block_302;
}
}
else
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; uint8_t x_337; lean_object* x_338; double x_339; double x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; 
x_330 = lean_ctor_get(x_306, 0);
x_331 = lean_ctor_get(x_306, 1);
lean_inc(x_331);
lean_inc(x_330);
lean_dec(x_306);
x_332 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_332, 0, x_330);
x_333 = lean_io_get_num_heartbeats(x_331);
x_334 = lean_ctor_get(x_333, 0);
lean_inc(x_334);
x_335 = lean_ctor_get(x_333, 1);
lean_inc(x_335);
if (lean_is_exclusive(x_333)) {
 lean_ctor_release(x_333, 0);
 lean_ctor_release(x_333, 1);
 x_336 = x_333;
} else {
 lean_dec_ref(x_333);
 x_336 = lean_box(0);
}
x_337 = 0;
x_338 = lean_unsigned_to_nat(0u);
x_339 = l_Float_ofScientific(x_304, x_337, x_338);
lean_dec(x_304);
x_340 = l_Float_ofScientific(x_334, x_337, x_338);
lean_dec(x_334);
x_341 = lean_box_float(x_339);
x_342 = lean_box_float(x_340);
if (lean_is_scalar(x_336)) {
 x_343 = lean_alloc_ctor(0, 2, 0);
} else {
 x_343 = x_336;
}
lean_ctor_set(x_343, 0, x_341);
lean_ctor_set(x_343, 1, x_342);
x_344 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_344, 0, x_332);
lean_ctor_set(x_344, 1, x_343);
x_210 = x_344;
x_211 = x_335;
goto block_302;
}
}
else
{
uint8_t x_345; 
x_345 = !lean_is_exclusive(x_306);
if (x_345 == 0)
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; uint8_t x_350; 
x_346 = lean_ctor_get(x_306, 0);
x_347 = lean_ctor_get(x_306, 1);
x_348 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_348, 0, x_346);
x_349 = lean_io_get_num_heartbeats(x_347);
x_350 = !lean_is_exclusive(x_349);
if (x_350 == 0)
{
lean_object* x_351; lean_object* x_352; uint8_t x_353; lean_object* x_354; double x_355; double x_356; lean_object* x_357; lean_object* x_358; 
x_351 = lean_ctor_get(x_349, 0);
x_352 = lean_ctor_get(x_349, 1);
x_353 = 0;
x_354 = lean_unsigned_to_nat(0u);
x_355 = l_Float_ofScientific(x_304, x_353, x_354);
lean_dec(x_304);
x_356 = l_Float_ofScientific(x_351, x_353, x_354);
lean_dec(x_351);
x_357 = lean_box_float(x_355);
x_358 = lean_box_float(x_356);
lean_ctor_set(x_349, 1, x_358);
lean_ctor_set(x_349, 0, x_357);
lean_ctor_set_tag(x_306, 0);
lean_ctor_set(x_306, 1, x_349);
lean_ctor_set(x_306, 0, x_348);
x_210 = x_306;
x_211 = x_352;
goto block_302;
}
else
{
lean_object* x_359; lean_object* x_360; uint8_t x_361; lean_object* x_362; double x_363; double x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; 
x_359 = lean_ctor_get(x_349, 0);
x_360 = lean_ctor_get(x_349, 1);
lean_inc(x_360);
lean_inc(x_359);
lean_dec(x_349);
x_361 = 0;
x_362 = lean_unsigned_to_nat(0u);
x_363 = l_Float_ofScientific(x_304, x_361, x_362);
lean_dec(x_304);
x_364 = l_Float_ofScientific(x_359, x_361, x_362);
lean_dec(x_359);
x_365 = lean_box_float(x_363);
x_366 = lean_box_float(x_364);
x_367 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_367, 0, x_365);
lean_ctor_set(x_367, 1, x_366);
lean_ctor_set_tag(x_306, 0);
lean_ctor_set(x_306, 1, x_367);
lean_ctor_set(x_306, 0, x_348);
x_210 = x_306;
x_211 = x_360;
goto block_302;
}
}
else
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; uint8_t x_375; lean_object* x_376; double x_377; double x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; 
x_368 = lean_ctor_get(x_306, 0);
x_369 = lean_ctor_get(x_306, 1);
lean_inc(x_369);
lean_inc(x_368);
lean_dec(x_306);
x_370 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_370, 0, x_368);
x_371 = lean_io_get_num_heartbeats(x_369);
x_372 = lean_ctor_get(x_371, 0);
lean_inc(x_372);
x_373 = lean_ctor_get(x_371, 1);
lean_inc(x_373);
if (lean_is_exclusive(x_371)) {
 lean_ctor_release(x_371, 0);
 lean_ctor_release(x_371, 1);
 x_374 = x_371;
} else {
 lean_dec_ref(x_371);
 x_374 = lean_box(0);
}
x_375 = 0;
x_376 = lean_unsigned_to_nat(0u);
x_377 = l_Float_ofScientific(x_304, x_375, x_376);
lean_dec(x_304);
x_378 = l_Float_ofScientific(x_372, x_375, x_376);
lean_dec(x_372);
x_379 = lean_box_float(x_377);
x_380 = lean_box_float(x_378);
if (lean_is_scalar(x_374)) {
 x_381 = lean_alloc_ctor(0, 2, 0);
} else {
 x_381 = x_374;
}
lean_ctor_set(x_381, 0, x_379);
lean_ctor_set(x_381, 1, x_380);
x_382 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_382, 0, x_370);
lean_ctor_set(x_382, 1, x_381);
x_210 = x_382;
x_211 = x_373;
goto block_302;
}
}
block_302:
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; uint8_t x_217; uint8_t x_218; 
x_212 = lean_ctor_get(x_210, 1);
lean_inc(x_212);
x_213 = lean_ctor_get(x_210, 0);
lean_inc(x_213);
lean_dec(x_210);
x_214 = lean_ctor_get(x_212, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_212, 1);
lean_inc(x_215);
lean_dec(x_212);
x_216 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2;
x_217 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_1, x_216);
if (x_217 == 0)
{
if (x_6 == 0)
{
uint8_t x_284; 
x_284 = 0;
x_218 = x_284;
goto block_283;
}
else
{
lean_object* x_285; double x_286; double x_287; lean_object* x_288; 
x_285 = lean_box(0);
x_286 = lean_unbox_float(x_214);
lean_dec(x_214);
x_287 = lean_unbox_float(x_215);
lean_dec(x_215);
x_288 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3(x_2, x_3, x_4, x_13, x_213, x_217, x_286, x_287, x_5, x_285, x_9, x_10, x_211);
return x_288;
}
}
else
{
if (x_6 == 0)
{
double x_289; double x_290; double x_291; lean_object* x_292; lean_object* x_293; uint8_t x_294; lean_object* x_295; double x_296; uint8_t x_297; 
x_289 = lean_unbox_float(x_215);
x_290 = lean_unbox_float(x_214);
x_291 = lean_float_sub(x_289, x_290);
x_292 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3;
x_293 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_292);
x_294 = 0;
x_295 = lean_unsigned_to_nat(0u);
x_296 = l_Float_ofScientific(x_293, x_294, x_295);
lean_dec(x_293);
x_297 = lean_float_decLt(x_296, x_291);
x_218 = x_297;
goto block_283;
}
else
{
lean_object* x_298; double x_299; double x_300; lean_object* x_301; 
x_298 = lean_box(0);
x_299 = lean_unbox_float(x_214);
lean_dec(x_214);
x_300 = lean_unbox_float(x_215);
lean_dec(x_215);
x_301 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3(x_2, x_3, x_4, x_13, x_213, x_217, x_299, x_300, x_5, x_298, x_9, x_10, x_211);
return x_301;
}
}
block_283:
{
if (x_218 == 0)
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; uint8_t x_223; 
lean_dec(x_215);
lean_dec(x_214);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_219 = lean_st_ref_take(x_10, x_211);
x_220 = lean_ctor_get(x_219, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_220, 4);
lean_inc(x_221);
x_222 = lean_ctor_get(x_219, 1);
lean_inc(x_222);
lean_dec(x_219);
x_223 = !lean_is_exclusive(x_220);
if (x_223 == 0)
{
lean_object* x_224; uint8_t x_225; 
x_224 = lean_ctor_get(x_220, 4);
lean_dec(x_224);
x_225 = !lean_is_exclusive(x_221);
if (x_225 == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_226 = lean_ctor_get(x_221, 0);
x_227 = l_Lean_PersistentArray_append___rarg(x_13, x_226);
lean_dec(x_226);
lean_ctor_set(x_221, 0, x_227);
x_228 = lean_st_ref_set(x_10, x_220, x_222);
x_229 = lean_ctor_get(x_228, 1);
lean_inc(x_229);
lean_dec(x_228);
x_230 = l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(x_213, x_9, x_10, x_229);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_213);
if (lean_obj_tag(x_230) == 0)
{
uint8_t x_231; 
x_231 = !lean_is_exclusive(x_230);
if (x_231 == 0)
{
return x_230;
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_232 = lean_ctor_get(x_230, 0);
x_233 = lean_ctor_get(x_230, 1);
lean_inc(x_233);
lean_inc(x_232);
lean_dec(x_230);
x_234 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_234, 0, x_232);
lean_ctor_set(x_234, 1, x_233);
return x_234;
}
}
else
{
uint8_t x_235; 
x_235 = !lean_is_exclusive(x_230);
if (x_235 == 0)
{
return x_230;
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_236 = lean_ctor_get(x_230, 0);
x_237 = lean_ctor_get(x_230, 1);
lean_inc(x_237);
lean_inc(x_236);
lean_dec(x_230);
x_238 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_238, 0, x_236);
lean_ctor_set(x_238, 1, x_237);
return x_238;
}
}
}
else
{
uint64_t x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_239 = lean_ctor_get_uint64(x_221, sizeof(void*)*1);
x_240 = lean_ctor_get(x_221, 0);
lean_inc(x_240);
lean_dec(x_221);
x_241 = l_Lean_PersistentArray_append___rarg(x_13, x_240);
lean_dec(x_240);
x_242 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set_uint64(x_242, sizeof(void*)*1, x_239);
lean_ctor_set(x_220, 4, x_242);
x_243 = lean_st_ref_set(x_10, x_220, x_222);
x_244 = lean_ctor_get(x_243, 1);
lean_inc(x_244);
lean_dec(x_243);
x_245 = l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(x_213, x_9, x_10, x_244);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_213);
if (lean_obj_tag(x_245) == 0)
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_246 = lean_ctor_get(x_245, 0);
lean_inc(x_246);
x_247 = lean_ctor_get(x_245, 1);
lean_inc(x_247);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 lean_ctor_release(x_245, 1);
 x_248 = x_245;
} else {
 lean_dec_ref(x_245);
 x_248 = lean_box(0);
}
if (lean_is_scalar(x_248)) {
 x_249 = lean_alloc_ctor(0, 2, 0);
} else {
 x_249 = x_248;
}
lean_ctor_set(x_249, 0, x_246);
lean_ctor_set(x_249, 1, x_247);
return x_249;
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_250 = lean_ctor_get(x_245, 0);
lean_inc(x_250);
x_251 = lean_ctor_get(x_245, 1);
lean_inc(x_251);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 lean_ctor_release(x_245, 1);
 x_252 = x_245;
} else {
 lean_dec_ref(x_245);
 x_252 = lean_box(0);
}
if (lean_is_scalar(x_252)) {
 x_253 = lean_alloc_ctor(1, 2, 0);
} else {
 x_253 = x_252;
}
lean_ctor_set(x_253, 0, x_250);
lean_ctor_set(x_253, 1, x_251);
return x_253;
}
}
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; uint64_t x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; 
x_254 = lean_ctor_get(x_220, 0);
x_255 = lean_ctor_get(x_220, 1);
x_256 = lean_ctor_get(x_220, 2);
x_257 = lean_ctor_get(x_220, 3);
x_258 = lean_ctor_get(x_220, 5);
x_259 = lean_ctor_get(x_220, 6);
x_260 = lean_ctor_get(x_220, 7);
x_261 = lean_ctor_get(x_220, 8);
lean_inc(x_261);
lean_inc(x_260);
lean_inc(x_259);
lean_inc(x_258);
lean_inc(x_257);
lean_inc(x_256);
lean_inc(x_255);
lean_inc(x_254);
lean_dec(x_220);
x_262 = lean_ctor_get_uint64(x_221, sizeof(void*)*1);
x_263 = lean_ctor_get(x_221, 0);
lean_inc(x_263);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 x_264 = x_221;
} else {
 lean_dec_ref(x_221);
 x_264 = lean_box(0);
}
x_265 = l_Lean_PersistentArray_append___rarg(x_13, x_263);
lean_dec(x_263);
if (lean_is_scalar(x_264)) {
 x_266 = lean_alloc_ctor(0, 1, 8);
} else {
 x_266 = x_264;
}
lean_ctor_set(x_266, 0, x_265);
lean_ctor_set_uint64(x_266, sizeof(void*)*1, x_262);
x_267 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_267, 0, x_254);
lean_ctor_set(x_267, 1, x_255);
lean_ctor_set(x_267, 2, x_256);
lean_ctor_set(x_267, 3, x_257);
lean_ctor_set(x_267, 4, x_266);
lean_ctor_set(x_267, 5, x_258);
lean_ctor_set(x_267, 6, x_259);
lean_ctor_set(x_267, 7, x_260);
lean_ctor_set(x_267, 8, x_261);
x_268 = lean_st_ref_set(x_10, x_267, x_222);
x_269 = lean_ctor_get(x_268, 1);
lean_inc(x_269);
lean_dec(x_268);
x_270 = l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(x_213, x_9, x_10, x_269);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_213);
if (lean_obj_tag(x_270) == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_271 = lean_ctor_get(x_270, 0);
lean_inc(x_271);
x_272 = lean_ctor_get(x_270, 1);
lean_inc(x_272);
if (lean_is_exclusive(x_270)) {
 lean_ctor_release(x_270, 0);
 lean_ctor_release(x_270, 1);
 x_273 = x_270;
} else {
 lean_dec_ref(x_270);
 x_273 = lean_box(0);
}
if (lean_is_scalar(x_273)) {
 x_274 = lean_alloc_ctor(0, 2, 0);
} else {
 x_274 = x_273;
}
lean_ctor_set(x_274, 0, x_271);
lean_ctor_set(x_274, 1, x_272);
return x_274;
}
else
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; 
x_275 = lean_ctor_get(x_270, 0);
lean_inc(x_275);
x_276 = lean_ctor_get(x_270, 1);
lean_inc(x_276);
if (lean_is_exclusive(x_270)) {
 lean_ctor_release(x_270, 0);
 lean_ctor_release(x_270, 1);
 x_277 = x_270;
} else {
 lean_dec_ref(x_270);
 x_277 = lean_box(0);
}
if (lean_is_scalar(x_277)) {
 x_278 = lean_alloc_ctor(1, 2, 0);
} else {
 x_278 = x_277;
}
lean_ctor_set(x_278, 0, x_275);
lean_ctor_set(x_278, 1, x_276);
return x_278;
}
}
}
else
{
lean_object* x_279; double x_280; double x_281; lean_object* x_282; 
x_279 = lean_box(0);
x_280 = lean_unbox_float(x_214);
lean_dec(x_214);
x_281 = lean_unbox_float(x_215);
lean_dec(x_215);
x_282 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3(x_2, x_3, x_4, x_13, x_213, x_217, x_280, x_281, x_5, x_279, x_9, x_10, x_211);
return x_282;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_6, 2);
lean_inc(x_9);
lean_inc(x_1);
x_10 = l_Lean_isTracingEnabledFor___at_Lean_Core_wrapAsyncAsSnapshot___spec__2(x_1, x_6, x_7, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_unbox(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2;
x_15 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_9, x_14);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_16 = lean_apply_3(x_3, x_6, x_7, x_13);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_16);
if (x_21 == 0)
{
return x_16;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_16);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_25 = lean_box(0);
x_26 = lean_unbox(x_11);
lean_dec(x_11);
x_27 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__4(x_9, x_1, x_4, x_5, x_2, x_26, x_3, x_25, x_6, x_7, x_13);
lean_dec(x_9);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_10, 1);
lean_inc(x_28);
lean_dec(x_10);
x_29 = lean_box(0);
x_30 = lean_unbox(x_11);
lean_dec(x_11);
x_31 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__4(x_9, x_1, x_4, x_5, x_2, x_30, x_3, x_29, x_6, x_7, x_28);
lean_dec(x_9);
return x_31;
}
}
}
static lean_object* _init_l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("share common exprs", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__2;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_inc(x_5);
x_9 = l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_shareCommonPreDefs___spec__1(x_1, x_2, x_1, x_3, x_4, x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_sharecommon_quick(x_10);
lean_dec(x_10);
x_13 = lean_array_get_size(x_1);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_13);
lean_ctor_set(x_16, 2, x_15);
x_17 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_shareCommonPreDefs___spec__2(x_1, x_12, x_16, x_5, x_14, lean_box(0), lean_box(0), x_6, x_7, x_11);
lean_dec(x_16);
lean_dec(x_12);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
static lean_object* _init_l_Lean_Elab_shareCommonPreDefs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("maxSharing", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_shareCommonPreDefs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_fixLevelParams___closed__1;
x_2 = l_Lean_Elab_fixLevelParams___closed__2;
x_3 = l_Lean_Elab_shareCommonPreDefs___closed__1;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_shareCommonPreDefs___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_shareCommonPreDefs___lambda__1___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_shareCommonPreDefs___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_6 = lean_box(0);
x_7 = lean_array_size(x_1);
x_8 = l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__4;
x_9 = lean_box_usize(x_7);
x_10 = l_Lean_Elab_shareCommonPreDefs___boxed__const__1;
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_shareCommonPreDefs___lambda__2___boxed), 8, 5);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_6);
lean_closure_set(x_11, 2, x_9);
lean_closure_set(x_11, 3, x_10);
lean_closure_set(x_11, 4, x_8);
x_12 = l_Lean_Elab_shareCommonPreDefs___closed__2;
x_13 = l_Lean_Elab_shareCommonPreDefs___closed__3;
x_14 = 1;
x_15 = l_Lean_Elab_fixLevelParams___closed__6;
x_16 = lean_box(x_14);
x_17 = lean_alloc_closure((void*)(l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___boxed), 8, 5);
lean_closure_set(x_17, 0, x_12);
lean_closure_set(x_17, 1, x_13);
lean_closure_set(x_17, 2, x_11);
lean_closure_set(x_17, 3, x_16);
lean_closure_set(x_17, 4, x_15);
x_18 = l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__1;
x_19 = lean_box(0);
x_20 = l_Lean_profileitM___at_Lean_traceBlock___spec__1___rarg(x_18, x_5, x_17, x_19, x_2, x_3, x_4);
lean_dec(x_5);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_shareCommonPreDefs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_12 = l_Array_forIn_x27Unsafe_loop___at_Lean_Elab_shareCommonPreDefs___spec__1(x_1, x_2, x_3, x_10, x_11, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Elab_shareCommonPreDefs___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Std_Range_forIn_x27_loop___at_Lean_Elab_shareCommonPreDefs___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MonadExcept_ofExcept___at_Lean_Elab_shareCommonPreDefs___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; double x_16; double x_17; lean_object* x_18; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = lean_unbox(x_7);
lean_dec(x_7);
x_16 = lean_unbox_float(x_8);
lean_dec(x_8);
x_17 = lean_unbox_float(x_9);
lean_dec(x_9);
x_18 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__2(x_1, x_14, x_3, x_4, x_5, x_6, x_15, x_16, x_17, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_6);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; double x_16; double x_17; lean_object* x_18; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = lean_unbox(x_6);
lean_dec(x_6);
x_16 = lean_unbox_float(x_7);
lean_dec(x_7);
x_17 = lean_unbox_float(x_8);
lean_dec(x_8);
x_18 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__3(x_1, x_14, x_3, x_4, x_5, x_15, x_16, x_17, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_10);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_unbox(x_3);
lean_dec(x_3);
x_13 = lean_unbox(x_6);
lean_dec(x_6);
x_14 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___lambda__4(x_1, x_2, x_12, x_4, x_5, x_13, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_8);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_4);
lean_dec(x_4);
x_10 = l_Lean_withTraceNode___at_Lean_Elab_shareCommonPreDefs___spec__3(x_1, x_2, x_3, x_9, x_5, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_shareCommonPreDefs___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_shareCommonPreDefs___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = l_Lean_Elab_shareCommonPreDefs___lambda__2(x_1, x_2, x_9, x_10, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* initialize_Init_ShareCommon(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_MetaAttr(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_CollectLevelParams(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_NumObjs(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_NumApps(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_AbstractNestedProofs(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_ForEachExpr(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Eqns(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_RecAppSyntax(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_DefView(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_PreDefinition_TerminationHint(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_ShareCommon(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_MetaAttr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_NoncomputableAttr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLevelParams(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_NumObjs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_NumApps(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AbstractNestedProofs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ForEachExpr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Eqns(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_RecAppSyntax(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DefView(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_TerminationHint(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_instInhabitedPreDefinition___closed__1 = _init_l_Lean_Elab_instInhabitedPreDefinition___closed__1();
lean_mark_persistent(l_Lean_Elab_instInhabitedPreDefinition___closed__1);
l_Lean_Elab_instInhabitedPreDefinition___closed__2 = _init_l_Lean_Elab_instInhabitedPreDefinition___closed__2();
lean_mark_persistent(l_Lean_Elab_instInhabitedPreDefinition___closed__2);
l_Lean_Elab_instInhabitedPreDefinition___closed__3 = _init_l_Lean_Elab_instInhabitedPreDefinition___closed__3();
lean_mark_persistent(l_Lean_Elab_instInhabitedPreDefinition___closed__3);
l_Lean_Elab_instInhabitedPreDefinition___closed__4 = _init_l_Lean_Elab_instInhabitedPreDefinition___closed__4();
lean_mark_persistent(l_Lean_Elab_instInhabitedPreDefinition___closed__4);
l_Lean_Elab_instInhabitedPreDefinition___closed__5 = _init_l_Lean_Elab_instInhabitedPreDefinition___closed__5();
lean_mark_persistent(l_Lean_Elab_instInhabitedPreDefinition___closed__5);
l_Lean_Elab_instInhabitedPreDefinition___closed__6 = _init_l_Lean_Elab_instInhabitedPreDefinition___closed__6();
lean_mark_persistent(l_Lean_Elab_instInhabitedPreDefinition___closed__6);
l_Lean_Elab_instInhabitedPreDefinition___closed__7 = _init_l_Lean_Elab_instInhabitedPreDefinition___closed__7();
lean_mark_persistent(l_Lean_Elab_instInhabitedPreDefinition___closed__7);
l_Lean_Elab_instInhabitedPreDefinition = _init_l_Lean_Elab_instInhabitedPreDefinition();
lean_mark_persistent(l_Lean_Elab_instInhabitedPreDefinition);
l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1___closed__1 = _init_l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_Lean_Elab_levelMVarToParamTypesPreDecls___spec__1___closed__1);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__1 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__1);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__2 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__2);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__3 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__3();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__3);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__4 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__4();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__4);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__5 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__5();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___closed__5);
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__2___closed__1();
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__1 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__1();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__1);
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__2 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__2();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__3___closed__2);
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__1 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__1();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__1);
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__2);
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__3);
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__4 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__4();
l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5 = _init_l_Lean_withTraceNode___at_Lean_Elab_fixLevelParams___spec__3___lambda__4___closed__5();
l_Lean_Elab_fixLevelParams___lambda__1___closed__1 = _init_l_Lean_Elab_fixLevelParams___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_fixLevelParams___lambda__1___closed__1);
l_Lean_Elab_fixLevelParams___lambda__1___closed__2 = _init_l_Lean_Elab_fixLevelParams___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_fixLevelParams___lambda__1___closed__2);
l_Lean_Elab_fixLevelParams___closed__1 = _init_l_Lean_Elab_fixLevelParams___closed__1();
lean_mark_persistent(l_Lean_Elab_fixLevelParams___closed__1);
l_Lean_Elab_fixLevelParams___closed__2 = _init_l_Lean_Elab_fixLevelParams___closed__2();
lean_mark_persistent(l_Lean_Elab_fixLevelParams___closed__2);
l_Lean_Elab_fixLevelParams___closed__3 = _init_l_Lean_Elab_fixLevelParams___closed__3();
lean_mark_persistent(l_Lean_Elab_fixLevelParams___closed__3);
l_Lean_Elab_fixLevelParams___closed__4 = _init_l_Lean_Elab_fixLevelParams___closed__4();
lean_mark_persistent(l_Lean_Elab_fixLevelParams___closed__4);
l_Lean_Elab_fixLevelParams___closed__5 = _init_l_Lean_Elab_fixLevelParams___closed__5();
lean_mark_persistent(l_Lean_Elab_fixLevelParams___closed__5);
l_Lean_Elab_fixLevelParams___closed__6 = _init_l_Lean_Elab_fixLevelParams___closed__6();
lean_mark_persistent(l_Lean_Elab_fixLevelParams___closed__6);
l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__1 = _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__1();
lean_mark_persistent(l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__1);
l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__2 = _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__2();
lean_mark_persistent(l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__2);
l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__3 = _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__3();
lean_mark_persistent(l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__3);
l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__4 = _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__4();
lean_mark_persistent(l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__4);
l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__5 = _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__5();
lean_mark_persistent(l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__5);
l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__6 = _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__6();
lean_mark_persistent(l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__6);
l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__7 = _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__7();
lean_mark_persistent(l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__7);
l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__8 = _init_l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__8();
lean_mark_persistent(l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814____closed__8);
if (builtin) {res = l_Lean_Elab_initFn____x40_Lean_Elab_PreDefinition_Basic___hyg_814_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_diagnostics_threshold_proofSize = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_diagnostics_threshold_proofSize);
lean_dec_ref(res);
}l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__1 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__2 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__2);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__3 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__3();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__3);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__4 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__4();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___spec__1___closed__4);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__1 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__1);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__2 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__2);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__3 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__3();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__3);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__4 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__4();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__4);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__5);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__6 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__6();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__6);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__7 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__7();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__7);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__8 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__8();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__8);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_reportTheoremDiag___closed__9);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__1 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__1);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__2 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__2);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__3 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__3();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__3);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__4 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__4();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__4);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__5 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__5();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__5);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__6 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__6();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__6);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__7 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__7();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__7);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__8 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__8();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__8);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__9 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__9();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_checkMeta___lambda__2___closed__9);
l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___closed__1 = _init_l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___closed__1();
lean_mark_persistent(l_Lean_Elab_withSaveInfoContext___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___spec__1___closed__1);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__1 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__1();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__1);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__2 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__2();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__2);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__3 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__3();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__3);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__4);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__5);
l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__6 = _init_l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__6();
lean_mark_persistent(l___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_addNonRecAux___lambda__4___closed__6);
l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___closed__1 = _init_l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_eraseRecAppSyntaxExpr___lambda__1___closed__1);
l_Lean_Elab_eraseRecAppSyntaxExpr___closed__1 = _init_l_Lean_Elab_eraseRecAppSyntaxExpr___closed__1();
lean_mark_persistent(l_Lean_Elab_eraseRecAppSyntaxExpr___closed__1);
l_Lean_Elab_eraseRecAppSyntaxExpr___closed__2 = _init_l_Lean_Elab_eraseRecAppSyntaxExpr___closed__2();
lean_mark_persistent(l_Lean_Elab_eraseRecAppSyntaxExpr___closed__2);
l_Lean_Elab_eraseRecAppSyntaxExpr___closed__3 = _init_l_Lean_Elab_eraseRecAppSyntaxExpr___closed__3();
lean_mark_persistent(l_Lean_Elab_eraseRecAppSyntaxExpr___closed__3);
l_Lean_Elab_addAndCompileUnsafe___boxed__const__1 = _init_l_Lean_Elab_addAndCompileUnsafe___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_addAndCompileUnsafe___boxed__const__1);
l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___closed__1 = _init_l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_Lean_Elab_addAndCompilePartialRec___spec__2___lambda__1___closed__1);
l_Lean_Elab_ensureNoRecFn___lambda__1___closed__1 = _init_l_Lean_Elab_ensureNoRecFn___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_ensureNoRecFn___lambda__1___closed__1);
l_Lean_Elab_ensureNoRecFn___lambda__1___closed__2 = _init_l_Lean_Elab_ensureNoRecFn___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_ensureNoRecFn___lambda__1___closed__2);
l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___closed__1 = _init_l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_Lean_Elab_checkCodomainsLevel___spec__1___closed__1);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__1 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__1();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__1);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__2 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__2();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__2);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__3 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__3();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__3);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__4 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__4();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__4);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__5 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__5();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__5);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__6 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__6();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__6);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__7 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__7();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__7);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__8 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__8();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__8);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__9 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__9();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__9);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__10 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__10();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__10);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__11 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__11();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__11);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__12 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__12();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__12);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__13 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__13();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__13);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__14 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__14();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__14);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__15 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__15();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__15);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__16 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__16();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__1___closed__16);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__1 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__1();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__1);
l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__2 = _init_l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__2();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Lean_Elab_checkCodomainsLevel___spec__2___lambda__2___closed__2);
l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__1 = _init_l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__1);
l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__2 = _init_l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_shareCommonPreDefs___lambda__1___closed__2);
l_Lean_Elab_shareCommonPreDefs___closed__1 = _init_l_Lean_Elab_shareCommonPreDefs___closed__1();
lean_mark_persistent(l_Lean_Elab_shareCommonPreDefs___closed__1);
l_Lean_Elab_shareCommonPreDefs___closed__2 = _init_l_Lean_Elab_shareCommonPreDefs___closed__2();
lean_mark_persistent(l_Lean_Elab_shareCommonPreDefs___closed__2);
l_Lean_Elab_shareCommonPreDefs___closed__3 = _init_l_Lean_Elab_shareCommonPreDefs___closed__3();
lean_mark_persistent(l_Lean_Elab_shareCommonPreDefs___closed__3);
l_Lean_Elab_shareCommonPreDefs___boxed__const__1 = _init_l_Lean_Elab_shareCommonPreDefs___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_shareCommonPreDefs___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
