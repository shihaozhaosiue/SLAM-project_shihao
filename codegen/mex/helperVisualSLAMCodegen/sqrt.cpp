//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sqrt.cpp
//
// Code generation for function 'sqrt'
//

// Include files
#include "sqrt.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <xmmintrin.h>

// Function Definitions
namespace coder {
void b_sqrt(const emlrtStack &sp, array<real_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  int32_T scalarLB;
  int32_T vectorUB;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  p = false;
  i = x.size(0);
  for (int32_T k{0}; k < i; k++) {
    if (p || (x[k] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  st.site = &po_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = (i / 2) << 1;
  vectorUB = scalarLB - 2;
  for (int32_T k{0}; k <= vectorUB; k += 2) {
    __m128d b_r;
    b_r = _mm_loadu_pd(&x[k]);
    _mm_storeu_pd(&x[k], _mm_sqrt_pd(b_r));
  }
  for (int32_T k{scalarLB}; k < i; k++) {
    x[k] = muDoubleScalarSqrt(x[k]);
  }
}

void b_sqrt(const emlrtStack &sp, array<real32_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  int32_T scalarLB;
  int32_T vectorUB;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  p = false;
  i = x.size(0);
  for (int32_T k{0}; k < i; k++) {
    if (p || (x[k] < 0.0F)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  st.site = &po_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = (i / 4) << 2;
  vectorUB = scalarLB - 4;
  for (int32_T k{0}; k <= vectorUB; k += 4) {
    __m128 b_r;
    b_r = _mm_loadu_ps(&x[k]);
    _mm_storeu_ps(&x[k], _mm_sqrt_ps(b_r));
  }
  for (int32_T k{scalarLB}; k < i; k++) {
    x[k] = muSingleScalarSqrt(x[k]);
  }
}

void b_sqrt(const emlrtStack &sp, real_T x[4])
{
  __m128d b_r;
  boolean_T p;
  p = false;
  for (int32_T k{0}; k < 4; k++) {
    if (p || (x[k] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  b_r = _mm_loadu_pd(&x[0]);
  _mm_storeu_pd(&x[0], _mm_sqrt_pd(b_r));
  b_r = _mm_loadu_pd(&x[2]);
  _mm_storeu_pd(&x[2], _mm_sqrt_pd(b_r));
}

void b_sqrt(const emlrtStack &sp, array<real_T, 2U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  int32_T scalarLB;
  int32_T vectorUB;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  p = false;
  i = x.size(1);
  for (int32_T k{0}; k < i; k++) {
    if (p || (x[k] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  st.site = &po_emlrtRSI;
  b_st.site = &qo_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = (i / 2) << 1;
  vectorUB = scalarLB - 2;
  for (int32_T k{0}; k <= vectorUB; k += 2) {
    __m128d b_r;
    b_r = _mm_loadu_pd(&x[k]);
    _mm_storeu_pd(&x[k], _mm_sqrt_pd(b_r));
  }
  for (int32_T k{scalarLB}; k < i; k++) {
    x[k] = muDoubleScalarSqrt(x[k]);
  }
}

} // namespace coder

// End of code generation (sqrt.cpp)
