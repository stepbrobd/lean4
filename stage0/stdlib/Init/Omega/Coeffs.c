// Lean compiler output
// Module: Init.Omega.Coeffs
// Imports: Init.Omega.IntList
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
lean_object* l_List_findIdx_x3f___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_length___boxed(lean_object*);
lean_object* l_Lean_Omega_IntList_gcd(lean_object*);
lean_object* l_Lean_Omega_IntList_combo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_bmod___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_neg(lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Omega_IntList_neg(lean_object*);
lean_object* l_Lean_Omega_IntList_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_combo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_bmod___lam__0(lean_object*, lean_object*);
lean_object* l_Lean_Omega_IntList_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_gcd___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_bmod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_sdiv(lean_object*, lean_object*);
lean_object* l_Lean_Omega_IntList_sdiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_length(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_gcd(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_dot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_bmod__dot__sub__dot__bmod(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_toList(lean_object*);
lean_object* l_Lean_Omega_IntList_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Omega_IntList_leading(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_set___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_map(lean_object*, lean_object*);
lean_object* l_Lean_Omega_IntList_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_findIdx_x3f(lean_object*, lean_object*);
lean_object* l_Int_bmod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_smul(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_ofList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_leading(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_smul___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_sdiv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_toList___boxed(lean_object*);
lean_object* l_Lean_Omega_IntList_smul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_dot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_ofList___boxed(lean_object*);
lean_object* l_Lean_Omega_IntList_dot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_toList(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_toList___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Omega_Coeffs_toList(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_ofList(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_ofList___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Omega_Coeffs_ofList(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_set(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Omega_IntList_set(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_set___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Omega_Coeffs_set(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_get(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Omega_IntList_get(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_get___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Omega_Coeffs_get(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_gcd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Omega_IntList_gcd(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_gcd___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Omega_Coeffs_gcd(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_smul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Omega_IntList_smul(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_smul___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Omega_Coeffs_smul(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_sdiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Omega_IntList_sdiv(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_sdiv___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Omega_Coeffs_sdiv(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_dot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Omega_IntList_dot(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_dot___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Omega_Coeffs_dot(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_add(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Omega_IntList_add(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_sub(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Omega_IntList_sub(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_neg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Omega_IntList_neg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_combo(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Omega_IntList_combo(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_length(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_lengthTR___redArg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_length___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Omega_Coeffs_length(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_leading(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Omega_IntList_leading(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_map(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_mapTR_loop___redArg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_findIdx_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_findIdx_x3f___redArg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_bmod___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Int_bmod(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_bmod(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Lean_Omega_Coeffs_bmod___lam__0___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_box(0);
x_5 = l_List_mapTR_loop___redArg(x_3, x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_bmod___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Omega_Coeffs_bmod___lam__0(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Omega_Coeffs_bmod__dot__sub__dot__bmod(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_Omega_Coeffs_bmod___lam__0___boxed), 2, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_3);
x_5 = l_Lean_Omega_IntList_dot(x_2, x_3);
x_6 = l_Int_bmod(x_5, x_1);
lean_dec(x_5);
x_7 = lean_box(0);
x_8 = l_List_mapTR_loop___redArg(x_4, x_2, x_7);
x_9 = l_Lean_Omega_IntList_dot(x_8, x_3);
lean_dec(x_8);
x_10 = lean_int_sub(x_6, x_9);
lean_dec(x_9);
lean_dec(x_6);
return x_10;
}
}
lean_object* initialize_Init_Omega_IntList(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Omega_Coeffs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Omega_IntList(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
