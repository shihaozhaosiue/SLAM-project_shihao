//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// xscal.cpp
//
// Code generation for function 'xscal'
//

// Include files
#include "xscal.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo kg_emlrtRSI{
    31,      // lineNo
    "xscal", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xscal."
    "m" // pathName
};

static emlrtRSInfo lg_emlrtRSI{
    18,      // lineNo
    "xscal", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xscal.m" // pathName
};

// Function Definitions
namespace coder {
namespace internal {
namespace blas {
void b_xscal(const emlrtStack &sp, int32_T n, real_T a, real_T x[9],
             int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = (ix0 + n) - 1;
  b_st.site = &lg_emlrtRSI;
  if ((ix0 <= b) && (b > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = ((((b - ix0) + 1) / 2) << 1) + ix0;
  vectorUB = scalarLB - 2;
  for (int32_T k{ix0}; k <= vectorUB; k += 2) {
    __m128d b_r;
    b_r = _mm_loadu_pd(&x[k - 1]);
    _mm_storeu_pd(&x[k - 1], _mm_mul_pd(_mm_set1_pd(a), b_r));
  }
  for (int32_T k{scalarLB}; k <= b; k++) {
    x[k - 1] *= a;
  }
}

void b_xscal(const emlrtStack &sp, real_T a, real_T x[81], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = ix0 + 8;
  b_st.site = &lg_emlrtRSI;
  if ((ix0 <= ix0 + 8) && (ix0 + 8 > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = ((b - ix0) + 1) / 2 * 2 + ix0;
  vectorUB = scalarLB - 2;
  for (int32_T k{ix0}; k <= vectorUB; k += 2) {
    __m128d b_r;
    b_r = _mm_loadu_pd(&x[k - 1]);
    b_r = _mm_mul_pd(_mm_set1_pd(a), b_r);
    _mm_storeu_pd(&x[k - 1], b_r);
  }
  for (int32_T k{scalarLB}; k <= b; k++) {
    x[k - 1] *= a;
  }
}

void b_xscal(const emlrtStack &sp, real_T x[9], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = ix0 + 2;
  b_st.site = &lg_emlrtRSI;
  if ((ix0 <= ix0 + 2) && (ix0 + 2 > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = ((b - ix0) + 1) / 2 * 2 + ix0;
  vectorUB = scalarLB - 2;
  for (int32_T k{ix0}; k <= vectorUB; k += 2) {
    __m128d b_r;
    b_r = _mm_loadu_pd(&x[k - 1]);
    b_r = _mm_mul_pd(b_r, _mm_set1_pd(-1.0));
    _mm_storeu_pd(&x[k - 1], b_r);
  }
  for (int32_T k{scalarLB}; k <= b; k++) {
    x[k - 1] = -x[k - 1];
  }
}

void b_xscal(const emlrtStack &sp, int32_T n, real32_T a, real32_T x[16],
             int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = (ix0 + n) - 1;
  b_st.site = &lg_emlrtRSI;
  if ((ix0 <= b) && (b > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = ((b - ix0) + 1) / 4 * 4 + ix0;
  vectorUB = scalarLB - 4;
  for (int32_T k{ix0}; k <= vectorUB; k += 4) {
    __m128 b_r;
    b_r = _mm_loadu_ps(&x[k - 1]);
    b_r = _mm_mul_ps(_mm_set1_ps(a), b_r);
    _mm_storeu_ps(&x[k - 1], b_r);
  }
  for (int32_T k{scalarLB}; k <= b; k++) {
    x[k - 1] *= a;
  }
}

void c_xscal(const emlrtStack &sp, real_T a, real_T x[9], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = ix0 + 2;
  b_st.site = &lg_emlrtRSI;
  if ((ix0 <= ix0 + 2) && (ix0 + 2 > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = ((b - ix0) + 1) / 2 * 2 + ix0;
  vectorUB = scalarLB - 2;
  for (int32_T k{ix0}; k <= vectorUB; k += 2) {
    __m128d b_r;
    b_r = _mm_loadu_pd(&x[k - 1]);
    b_r = _mm_mul_pd(_mm_set1_pd(a), b_r);
    _mm_storeu_pd(&x[k - 1], b_r);
  }
  for (int32_T k{scalarLB}; k <= b; k++) {
    x[k - 1] *= a;
  }
}

void c_xscal(const emlrtStack &sp, int32_T n, real_T a, real_T x[9],
             int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = (ix0 + n) - 1;
  b_st.site = &lg_emlrtRSI;
  if ((ix0 <= b) && (b > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = ((b - ix0) + 1) / 2 * 2 + ix0;
  vectorUB = scalarLB - 2;
  for (int32_T k{ix0}; k <= vectorUB; k += 2) {
    __m128d b_r;
    b_r = _mm_loadu_pd(&x[k - 1]);
    b_r = _mm_mul_pd(_mm_set1_pd(a), b_r);
    _mm_storeu_pd(&x[k - 1], b_r);
  }
  for (int32_T k{scalarLB}; k <= b; k++) {
    x[k - 1] *= a;
  }
}

void c_xscal(const emlrtStack &sp, int32_T n, real32_T a, real32_T x[4],
             int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = (ix0 + n) - 1;
  b_st.site = &lg_emlrtRSI;
  if ((ix0 <= b) && (b > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = ((((b - ix0) + 1) / 4) << 2) + ix0;
  vectorUB = scalarLB - 4;
  for (int32_T k{ix0}; k <= vectorUB; k += 4) {
    __m128 b_r;
    b_r = _mm_loadu_ps(&x[k - 1]);
    _mm_storeu_ps(&x[k - 1], _mm_mul_ps(_mm_set1_ps(a), b_r));
  }
  for (int32_T k{scalarLB}; k <= b; k++) {
    x[k - 1] *= a;
  }
}

void d_xscal(const emlrtStack &sp, int32_T n, real_T a, real_T x[16],
             int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = (ix0 + n) - 1;
  b_st.site = &lg_emlrtRSI;
  if ((ix0 <= b) && (b > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = ((b - ix0) + 1) / 2 * 2 + ix0;
  vectorUB = scalarLB - 2;
  for (int32_T k{ix0}; k <= vectorUB; k += 2) {
    __m128d b_r;
    b_r = _mm_loadu_pd(&x[k - 1]);
    b_r = _mm_mul_pd(_mm_set1_pd(a), b_r);
    _mm_storeu_pd(&x[k - 1], b_r);
  }
  for (int32_T k{scalarLB}; k <= b; k++) {
    x[k - 1] *= a;
  }
}

void e_xscal(const emlrtStack &sp, int32_T n, real_T a, real_T x[4],
             int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = (ix0 + n) - 1;
  b_st.site = &lg_emlrtRSI;
  if ((ix0 <= b) && (b > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = ((((b - ix0) + 1) / 2) << 1) + ix0;
  vectorUB = scalarLB - 2;
  for (int32_T k{ix0}; k <= vectorUB; k += 2) {
    __m128d b_r;
    b_r = _mm_loadu_pd(&x[k - 1]);
    _mm_storeu_pd(&x[k - 1], _mm_mul_pd(_mm_set1_pd(a), b_r));
  }
  for (int32_T k{scalarLB}; k <= b; k++) {
    x[k - 1] *= a;
  }
}

void xscal(const emlrtStack &sp, int32_T n, real_T a, real_T x[45], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = (ix0 + n) - 1;
  b_st.site = &lg_emlrtRSI;
  if ((ix0 <= b) && (b > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = ((b - ix0) + 1) / 2 * 2 + ix0;
  vectorUB = scalarLB - 2;
  for (int32_T k{ix0}; k <= vectorUB; k += 2) {
    __m128d b_r;
    b_r = _mm_loadu_pd(&x[k - 1]);
    b_r = _mm_mul_pd(_mm_set1_pd(a), b_r);
    _mm_storeu_pd(&x[k - 1], b_r);
  }
  for (int32_T k{scalarLB}; k <= b; k++) {
    x[k - 1] *= a;
  }
}

void xscal(const emlrtStack &sp, real_T a, real_T x[25], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = ix0 + 4;
  b_st.site = &lg_emlrtRSI;
  if ((ix0 <= ix0 + 4) && (ix0 + 4 > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = ((b - ix0) + 1) / 2 * 2 + ix0;
  vectorUB = scalarLB - 2;
  for (int32_T k{ix0}; k <= vectorUB; k += 2) {
    __m128d b_r;
    b_r = _mm_loadu_pd(&x[k - 1]);
    b_r = _mm_mul_pd(_mm_set1_pd(a), b_r);
    _mm_storeu_pd(&x[k - 1], b_r);
  }
  for (int32_T k{scalarLB}; k <= b; k++) {
    x[k - 1] *= a;
  }
}

void xscal(const emlrtStack &sp, real_T x[81], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = ix0 + 8;
  b_st.site = &lg_emlrtRSI;
  if ((ix0 <= ix0 + 8) && (ix0 + 8 > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = ((b - ix0) + 1) / 2 * 2 + ix0;
  vectorUB = scalarLB - 2;
  for (int32_T k{ix0}; k <= vectorUB; k += 2) {
    __m128d b_r;
    b_r = _mm_loadu_pd(&x[k - 1]);
    b_r = _mm_mul_pd(b_r, _mm_set1_pd(-1.0));
    _mm_storeu_pd(&x[k - 1], b_r);
  }
  for (int32_T k{scalarLB}; k <= b; k++) {
    x[k - 1] = -x[k - 1];
  }
}

void xscal(real_T a, real_T x[3])
{
  __m128d b_r;
  b_r = _mm_loadu_pd(&x[1]);
  _mm_storeu_pd(&x[1], _mm_mul_pd(_mm_set1_pd(a), b_r));
}

void xscal(const emlrtStack &sp, real32_T a, real32_T x[9], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = ix0 + 2;
  b_st.site = &lg_emlrtRSI;
  if ((ix0 <= ix0 + 2) && (ix0 + 2 > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = ((b - ix0) + 1) / 4 * 4 + ix0;
  vectorUB = scalarLB - 4;
  for (int32_T k{ix0}; k <= vectorUB; k += 4) {
    __m128 b_r;
    b_r = _mm_loadu_ps(&x[k - 1]);
    b_r = _mm_mul_ps(_mm_set1_ps(a), b_r);
    _mm_storeu_ps(&x[k - 1], b_r);
  }
  for (int32_T k{scalarLB}; k <= b; k++) {
    x[k - 1] *= a;
  }
}

void xscal(const emlrtStack &sp, real32_T x[9], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = ix0 + 2;
  b_st.site = &lg_emlrtRSI;
  if ((ix0 <= ix0 + 2) && (ix0 + 2 > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = ((b - ix0) + 1) / 4 * 4 + ix0;
  vectorUB = scalarLB - 4;
  for (int32_T k{ix0}; k <= vectorUB; k += 4) {
    __m128 b_r;
    b_r = _mm_loadu_ps(&x[k - 1]);
    b_r = _mm_mul_ps(b_r, _mm_set1_ps(-1.0F));
    _mm_storeu_ps(&x[k - 1], b_r);
  }
  for (int32_T k{scalarLB}; k <= b; k++) {
    x[k - 1] = -x[k - 1];
  }
}

void xscal(const emlrtStack &sp, int32_T n, real32_T a, real32_T x[9],
           int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = (ix0 + n) - 1;
  b_st.site = &lg_emlrtRSI;
  if ((ix0 <= b) && (b > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = ((b - ix0) + 1) / 4 * 4 + ix0;
  vectorUB = scalarLB - 4;
  for (int32_T k{ix0}; k <= vectorUB; k += 4) {
    __m128 b_r;
    b_r = _mm_loadu_ps(&x[k - 1]);
    b_r = _mm_mul_ps(_mm_set1_ps(a), b_r);
    _mm_storeu_ps(&x[k - 1], b_r);
  }
  for (int32_T k{scalarLB}; k <= b; k++) {
    x[k - 1] *= a;
  }
}

void xscal(real32_T a, real32_T x[3])
{
  for (int32_T k{2}; k < 4; k++) {
    x[k - 1] *= a;
  }
}

} // namespace blas
} // namespace internal
} // namespace coder

// End of code generation (xscal.cpp)
