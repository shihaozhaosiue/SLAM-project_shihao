//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// mrdivide_helper.cpp
//
// Code generation for function 'mrdivide_helper'
//

// Include files
#include "mrdivide_helper.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <emmintrin.h>
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo sq_emlrtRSI{
    215,          // lineNo
    "lusolve2x2", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m" // pathName
};

static emlrtRSInfo tq_emlrtRSI{
    299,          // lineNo
    "lusolve3x3", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m" // pathName
};

static emlrtRTEInfo aq_emlrtRTEI{
    214,       // lineNo
    24,        // colNo
    "lusolve", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m" // pName
};

static emlrtRTEInfo bq_emlrtRTEI{
    31,                // lineNo
    5,                 // colNo
    "mrdivide_helper", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_"
    "helper.m" // pName
};

static emlrtRTEInfo cq_emlrtRTEI{
    298,       // lineNo
    24,        // colNo
    "lusolve", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
void b_mrdiv(const emlrtStack &sp, const array<real32_T, 2U> &A,
             const real32_T B[9], array<real32_T, 2U> &Y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (A.size(0) == 0) {
    Y.set_size(&bq_emlrtRTEI, &sp, 0, 3);
  } else {
    int32_T r1;
    int32_T r2;
    int32_T r3;
    int32_T rtemp;
    int32_T scalarLB;
    int32_T vectorUB;
    real32_T b_A[9];
    real32_T a21;
    real32_T maxval;
    st.site = &pq_emlrtRSI;
    b_st.site = &an_emlrtRSI;
    for (rtemp = 0; rtemp < 9; rtemp++) {
      b_A[rtemp] = B[rtemp];
    }
    r1 = 0;
    r2 = 1;
    r3 = 2;
    maxval = muSingleScalarAbs(B[0]);
    a21 = muSingleScalarAbs(B[1]);
    if (a21 > maxval) {
      maxval = a21;
      r1 = 1;
      r2 = 0;
    }
    if (muSingleScalarAbs(B[2]) > maxval) {
      r1 = 2;
      r2 = 1;
      r3 = 0;
    }
    b_A[r2] = B[r2] / B[r1];
    b_A[r3] /= b_A[r1];
    b_A[r2 + 3] -= b_A[r2] * b_A[r1 + 3];
    b_A[r3 + 3] -= b_A[r3] * b_A[r1 + 3];
    b_A[r2 + 6] -= b_A[r2] * b_A[r1 + 6];
    b_A[r3 + 6] -= b_A[r3] * b_A[r1 + 6];
    if (muSingleScalarAbs(b_A[r3 + 3]) > muSingleScalarAbs(b_A[r2 + 3])) {
      rtemp = r2;
      r2 = r3;
      r3 = rtemp;
    }
    b_A[r3 + 3] /= b_A[r2 + 3];
    b_A[r3 + 6] -= b_A[r3 + 3] * b_A[r2 + 6];
    if ((b_A[r1] == 0.0F) || (b_A[r2 + 3] == 0.0F) || (b_A[r3 + 6] == 0.0F)) {
      c_st.site = &bn_emlrtRSI;
      if (!emlrtSetWarningFlag(&c_st)) {
        d_st.site = &cn_emlrtRSI;
        b_warning(d_st);
      }
    }
    rtemp = A.size(0);
    Y.set_size(&cq_emlrtRTEI, &b_st, A.size(0), 3);
    c_st.site = &tq_emlrtRSI;
    if (A.size(0) > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    scalarLB = (A.size(0) / 4) << 2;
    vectorUB = scalarLB - 4;
    for (int32_T k{0}; k <= vectorUB; k += 4) {
      __m128 b_r;
      __m128 b_r1;
      _mm_storeu_ps(&Y[k + Y.size(0) * r1],
                    _mm_div_ps(_mm_loadu_ps(&A[k]), _mm_set1_ps(b_A[r1])));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r1]);
      _mm_storeu_ps(&Y[k + Y.size(0) * r2],
                    _mm_sub_ps(_mm_loadu_ps(&A[k + A.size(0)]),
                               _mm_mul_ps(b_r, _mm_set1_ps(b_A[r1 + 3]))));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r1]);
      _mm_storeu_ps(&Y[k + Y.size(0) * r3],
                    _mm_sub_ps(_mm_loadu_ps(&A[k + A.size(0) * 2]),
                               _mm_mul_ps(b_r, _mm_set1_ps(b_A[r1 + 6]))));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r2]);
      _mm_storeu_ps(&Y[k + Y.size(0) * r2],
                    _mm_div_ps(b_r, _mm_set1_ps(b_A[r2 + 3])));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r2]);
      b_r1 = _mm_loadu_ps(&Y[k + Y.size(0) * r3]);
      _mm_storeu_ps(
          &Y[k + Y.size(0) * r3],
          _mm_sub_ps(b_r1, _mm_mul_ps(b_r, _mm_set1_ps(b_A[r2 + 6]))));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r3]);
      _mm_storeu_ps(&Y[k + Y.size(0) * r3],
                    _mm_div_ps(b_r, _mm_set1_ps(b_A[r3 + 6])));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r3]);
      b_r1 = _mm_loadu_ps(&Y[k + Y.size(0) * r2]);
      _mm_storeu_ps(
          &Y[k + Y.size(0) * r2],
          _mm_sub_ps(b_r1, _mm_mul_ps(b_r, _mm_set1_ps(b_A[r3 + 3]))));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r3]);
      b_r1 = _mm_loadu_ps(&Y[k + Y.size(0) * r1]);
      _mm_storeu_ps(&Y[k + Y.size(0) * r1],
                    _mm_sub_ps(b_r1, _mm_mul_ps(b_r, _mm_set1_ps(b_A[r3]))));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r2]);
      b_r1 = _mm_loadu_ps(&Y[k + Y.size(0) * r1]);
      _mm_storeu_ps(&Y[k + Y.size(0) * r1],
                    _mm_sub_ps(b_r1, _mm_mul_ps(b_r, _mm_set1_ps(b_A[r2]))));
    }
    for (int32_T k{scalarLB}; k < rtemp; k++) {
      Y[k + Y.size(0) * r1] = A[k] / b_A[r1];
      Y[k + Y.size(0) * r2] =
          A[k + A.size(0)] - Y[k + Y.size(0) * r1] * b_A[r1 + 3];
      Y[k + Y.size(0) * r3] =
          A[k + A.size(0) * 2] - Y[k + Y.size(0) * r1] * b_A[r1 + 6];
      Y[k + Y.size(0) * r2] = Y[k + Y.size(0) * r2] / b_A[r2 + 3];
      Y[k + Y.size(0) * r3] =
          Y[k + Y.size(0) * r3] - Y[k + Y.size(0) * r2] * b_A[r2 + 6];
      Y[k + Y.size(0) * r3] = Y[k + Y.size(0) * r3] / b_A[r3 + 6];
      Y[k + Y.size(0) * r2] =
          Y[k + Y.size(0) * r2] - Y[k + Y.size(0) * r3] * b_A[r3 + 3];
      Y[k + Y.size(0) * r1] =
          Y[k + Y.size(0) * r1] - Y[k + Y.size(0) * r3] * b_A[r3];
      Y[k + Y.size(0) * r1] =
          Y[k + Y.size(0) * r1] - Y[k + Y.size(0) * r2] * b_A[r2];
    }
  }
}

void mrdiv(const emlrtStack &sp, const array<real32_T, 2U> &A,
           const real32_T B[4], array<real32_T, 2U> &Y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (A.size(0) == 0) {
    Y.set_size(&bq_emlrtRTEI, &sp, 0, 2);
  } else {
    int32_T nb_tmp;
    int32_T r1;
    int32_T r2;
    int32_T scalarLB;
    int32_T vectorUB;
    real32_T a21;
    real32_T a22;
    real32_T a22_tmp;
    st.site = &pq_emlrtRSI;
    b_st.site = &qq_emlrtRSI;
    if (muSingleScalarAbs(B[1]) > muSingleScalarAbs(B[0])) {
      r1 = 1;
      r2 = 0;
    } else {
      r1 = 0;
      r2 = 1;
    }
    a21 = B[r2] / B[r1];
    a22_tmp = B[r1 + 2];
    a22 = B[r2 + 2] - a21 * a22_tmp;
    if ((a22 == 0.0F) || (B[r1] == 0.0F)) {
      c_st.site = &rq_emlrtRSI;
      if (!emlrtSetWarningFlag(&c_st)) {
        d_st.site = &cn_emlrtRSI;
        b_warning(d_st);
      }
    }
    nb_tmp = A.size(0);
    Y.set_size(&aq_emlrtRTEI, &b_st, A.size(0), 2);
    c_st.site = &sq_emlrtRSI;
    if (A.size(0) > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    scalarLB = (A.size(0) / 4) << 2;
    vectorUB = scalarLB - 4;
    for (int32_T k{0}; k <= vectorUB; k += 4) {
      __m128 b_r;
      __m128 b_r1;
      _mm_storeu_ps(&Y[k + Y.size(0) * r1],
                    _mm_div_ps(_mm_loadu_ps(&A[k]), _mm_set1_ps(B[r1])));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r1]);
      _mm_storeu_ps(
          &Y[k + Y.size(0) * r2],
          _mm_div_ps(_mm_sub_ps(_mm_loadu_ps(&A[k + A.size(0)]),
                                _mm_mul_ps(b_r, _mm_set1_ps(a22_tmp))),
                     _mm_set1_ps(a22)));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r2]);
      b_r1 = _mm_loadu_ps(&Y[k + Y.size(0) * r1]);
      _mm_storeu_ps(&Y[k + Y.size(0) * r1],
                    _mm_sub_ps(b_r1, _mm_mul_ps(b_r, _mm_set1_ps(a21))));
    }
    for (int32_T k{scalarLB}; k < nb_tmp; k++) {
      Y[k + Y.size(0) * r1] = A[k] / B[r1];
      Y[k + Y.size(0) * r2] =
          (A[k + A.size(0)] - Y[k + Y.size(0) * r1] * a22_tmp) / a22;
      Y[k + Y.size(0) * r1] =
          Y[k + Y.size(0) * r1] - Y[k + Y.size(0) * r2] * a21;
    }
  }
}

void mrdiv(const emlrtStack &sp, const array<real_T, 2U> &A, const real_T B[9],
           array<real_T, 2U> &Y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T b_A[9];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (A.size(0) == 0) {
    Y.set_size(&bq_emlrtRTEI, &sp, 0, 3);
  } else {
    real_T a21;
    real_T maxval;
    int32_T r1;
    int32_T r2;
    int32_T r3;
    int32_T rtemp;
    int32_T scalarLB;
    int32_T vectorUB;
    st.site = &pq_emlrtRSI;
    b_st.site = &an_emlrtRSI;
    std::copy(&B[0], &B[9], &b_A[0]);
    r1 = 0;
    r2 = 1;
    r3 = 2;
    maxval = muDoubleScalarAbs(B[0]);
    a21 = muDoubleScalarAbs(B[1]);
    if (a21 > maxval) {
      maxval = a21;
      r1 = 1;
      r2 = 0;
    }
    if (muDoubleScalarAbs(B[2]) > maxval) {
      r1 = 2;
      r2 = 1;
      r3 = 0;
    }
    b_A[r2] = B[r2] / B[r1];
    b_A[r3] /= b_A[r1];
    b_A[r2 + 3] -= b_A[r2] * b_A[r1 + 3];
    b_A[r3 + 3] -= b_A[r3] * b_A[r1 + 3];
    b_A[r2 + 6] -= b_A[r2] * b_A[r1 + 6];
    b_A[r3 + 6] -= b_A[r3] * b_A[r1 + 6];
    if (muDoubleScalarAbs(b_A[r3 + 3]) > muDoubleScalarAbs(b_A[r2 + 3])) {
      rtemp = r2;
      r2 = r3;
      r3 = rtemp;
    }
    b_A[r3 + 3] /= b_A[r2 + 3];
    b_A[r3 + 6] -= b_A[r3 + 3] * b_A[r2 + 6];
    if ((b_A[r1] == 0.0) || (b_A[r2 + 3] == 0.0) || (b_A[r3 + 6] == 0.0)) {
      c_st.site = &bn_emlrtRSI;
      if (!emlrtSetWarningFlag(&c_st)) {
        d_st.site = &cn_emlrtRSI;
        b_warning(d_st);
      }
    }
    rtemp = A.size(0);
    Y.set_size(&cq_emlrtRTEI, &b_st, A.size(0), 3);
    c_st.site = &tq_emlrtRSI;
    if (A.size(0) > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    scalarLB = (A.size(0) / 2) << 1;
    vectorUB = scalarLB - 2;
    for (int32_T k{0}; k <= vectorUB; k += 2) {
      __m128d b_r;
      __m128d b_r1;
      _mm_storeu_pd(&Y[k + Y.size(0) * r1],
                    _mm_div_pd(_mm_loadu_pd(&A[k]), _mm_set1_pd(b_A[r1])));
      b_r = _mm_loadu_pd(&Y[k + Y.size(0) * r1]);
      _mm_storeu_pd(&Y[k + Y.size(0) * r2],
                    _mm_sub_pd(_mm_loadu_pd(&A[k + A.size(0)]),
                               _mm_mul_pd(b_r, _mm_set1_pd(b_A[r1 + 3]))));
      b_r = _mm_loadu_pd(&Y[k + Y.size(0) * r1]);
      _mm_storeu_pd(&Y[k + Y.size(0) * r3],
                    _mm_sub_pd(_mm_loadu_pd(&A[k + A.size(0) * 2]),
                               _mm_mul_pd(b_r, _mm_set1_pd(b_A[r1 + 6]))));
      b_r = _mm_loadu_pd(&Y[k + Y.size(0) * r2]);
      _mm_storeu_pd(&Y[k + Y.size(0) * r2],
                    _mm_div_pd(b_r, _mm_set1_pd(b_A[r2 + 3])));
      b_r = _mm_loadu_pd(&Y[k + Y.size(0) * r2]);
      b_r1 = _mm_loadu_pd(&Y[k + Y.size(0) * r3]);
      _mm_storeu_pd(
          &Y[k + Y.size(0) * r3],
          _mm_sub_pd(b_r1, _mm_mul_pd(b_r, _mm_set1_pd(b_A[r2 + 6]))));
      b_r = _mm_loadu_pd(&Y[k + Y.size(0) * r3]);
      _mm_storeu_pd(&Y[k + Y.size(0) * r3],
                    _mm_div_pd(b_r, _mm_set1_pd(b_A[r3 + 6])));
      b_r = _mm_loadu_pd(&Y[k + Y.size(0) * r3]);
      b_r1 = _mm_loadu_pd(&Y[k + Y.size(0) * r2]);
      _mm_storeu_pd(
          &Y[k + Y.size(0) * r2],
          _mm_sub_pd(b_r1, _mm_mul_pd(b_r, _mm_set1_pd(b_A[r3 + 3]))));
      b_r = _mm_loadu_pd(&Y[k + Y.size(0) * r3]);
      b_r1 = _mm_loadu_pd(&Y[k + Y.size(0) * r1]);
      _mm_storeu_pd(&Y[k + Y.size(0) * r1],
                    _mm_sub_pd(b_r1, _mm_mul_pd(b_r, _mm_set1_pd(b_A[r3]))));
      b_r = _mm_loadu_pd(&Y[k + Y.size(0) * r2]);
      b_r1 = _mm_loadu_pd(&Y[k + Y.size(0) * r1]);
      _mm_storeu_pd(&Y[k + Y.size(0) * r1],
                    _mm_sub_pd(b_r1, _mm_mul_pd(b_r, _mm_set1_pd(b_A[r2]))));
    }
    for (int32_T k{scalarLB}; k < rtemp; k++) {
      Y[k + Y.size(0) * r1] = A[k] / b_A[r1];
      Y[k + Y.size(0) * r2] =
          A[k + A.size(0)] - Y[k + Y.size(0) * r1] * b_A[r1 + 3];
      Y[k + Y.size(0) * r3] =
          A[k + A.size(0) * 2] - Y[k + Y.size(0) * r1] * b_A[r1 + 6];
      Y[k + Y.size(0) * r2] = Y[k + Y.size(0) * r2] / b_A[r2 + 3];
      Y[k + Y.size(0) * r3] =
          Y[k + Y.size(0) * r3] - Y[k + Y.size(0) * r2] * b_A[r2 + 6];
      Y[k + Y.size(0) * r3] = Y[k + Y.size(0) * r3] / b_A[r3 + 6];
      Y[k + Y.size(0) * r2] =
          Y[k + Y.size(0) * r2] - Y[k + Y.size(0) * r3] * b_A[r3 + 3];
      Y[k + Y.size(0) * r1] =
          Y[k + Y.size(0) * r1] - Y[k + Y.size(0) * r3] * b_A[r3];
      Y[k + Y.size(0) * r1] =
          Y[k + Y.size(0) * r1] - Y[k + Y.size(0) * r2] * b_A[r2];
    }
  }
}

void mrdiv(const emlrtStack &sp, const real32_T A[9], const real_T B[9],
           real32_T Y[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T b_A[9];
  real_T a21;
  real_T maxval;
  int32_T g_Y_tmp;
  int32_T h_Y_tmp;
  int32_T r1;
  int32_T r2;
  int32_T r3;
  int32_T rtemp;
  real32_T Y_tmp;
  real32_T b_Y_tmp;
  real32_T c_Y_tmp;
  real32_T d_Y_tmp;
  real32_T e_Y_tmp;
  real32_T f_Y_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &pq_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &an_emlrtRSI;
  std::copy(&B[0], &B[9], &b_A[0]);
  r1 = 0;
  r2 = 1;
  r3 = 2;
  maxval = muDoubleScalarAbs(B[0]);
  a21 = muDoubleScalarAbs(B[1]);
  if (a21 > maxval) {
    maxval = a21;
    r1 = 1;
    r2 = 0;
  }
  if (muDoubleScalarAbs(B[2]) > maxval) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }
  b_A[r2] = B[r2] / B[r1];
  b_A[r3] /= b_A[r1];
  b_A[r2 + 3] -= b_A[r2] * b_A[r1 + 3];
  b_A[r3 + 3] -= b_A[r3] * b_A[r1 + 3];
  b_A[r2 + 6] -= b_A[r2] * b_A[r1 + 6];
  b_A[r3 + 6] -= b_A[r3] * b_A[r1 + 6];
  if (muDoubleScalarAbs(b_A[r3 + 3]) > muDoubleScalarAbs(b_A[r2 + 3])) {
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }
  b_A[r3 + 3] /= b_A[r2 + 3];
  b_A[r3 + 6] -= b_A[r3 + 3] * b_A[r2 + 6];
  if ((b_A[r1] == 0.0) || (b_A[r2 + 3] == 0.0) || (b_A[r3 + 6] == 0.0)) {
    c_st.site = &bn_emlrtRSI;
    if (!emlrtSetWarningFlag(&c_st)) {
      d_st.site = &cn_emlrtRSI;
      b_warning(d_st);
    }
  }
  Y[3 * r1] = A[0] / static_cast<real32_T>(b_A[r1]);
  Y_tmp = static_cast<real32_T>(b_A[r1 + 3]);
  Y[3 * r2] = A[3] - Y[3 * r1] * Y_tmp;
  b_Y_tmp = static_cast<real32_T>(b_A[r1 + 6]);
  Y[3 * r3] = A[6] - Y[3 * r1] * b_Y_tmp;
  c_Y_tmp = static_cast<real32_T>(b_A[r2 + 3]);
  Y[3 * r2] /= c_Y_tmp;
  d_Y_tmp = static_cast<real32_T>(b_A[r2 + 6]);
  Y[3 * r3] -= Y[3 * r2] * d_Y_tmp;
  e_Y_tmp = static_cast<real32_T>(b_A[r3 + 6]);
  Y[3 * r3] /= e_Y_tmp;
  f_Y_tmp = static_cast<real32_T>(b_A[r3 + 3]);
  Y[3 * r2] -= Y[3 * r3] * f_Y_tmp;
  Y[3 * r1] -= Y[3 * r3] * static_cast<real32_T>(b_A[r3]);
  Y[3 * r1] -= Y[3 * r2] * static_cast<real32_T>(b_A[r2]);
  rtemp = 3 * r1 + 1;
  Y[rtemp] = A[1] / static_cast<real32_T>(b_A[r1]);
  g_Y_tmp = 3 * r2 + 1;
  Y[g_Y_tmp] = A[4] - Y[rtemp] * Y_tmp;
  h_Y_tmp = 3 * r3 + 1;
  Y[h_Y_tmp] = A[7] - Y[rtemp] * b_Y_tmp;
  Y[g_Y_tmp] /= c_Y_tmp;
  Y[h_Y_tmp] -= Y[g_Y_tmp] * d_Y_tmp;
  Y[h_Y_tmp] /= e_Y_tmp;
  Y[g_Y_tmp] -= Y[h_Y_tmp] * f_Y_tmp;
  Y[rtemp] -= Y[h_Y_tmp] * static_cast<real32_T>(b_A[r3]);
  Y[rtemp] -= Y[g_Y_tmp] * static_cast<real32_T>(b_A[r2]);
  rtemp = 3 * r1 + 2;
  Y[rtemp] = A[2] / static_cast<real32_T>(b_A[r1]);
  g_Y_tmp = 3 * r2 + 2;
  Y[g_Y_tmp] = A[5] - Y[rtemp] * Y_tmp;
  h_Y_tmp = 3 * r3 + 2;
  Y[h_Y_tmp] = A[8] - Y[rtemp] * b_Y_tmp;
  Y[g_Y_tmp] /= c_Y_tmp;
  Y[h_Y_tmp] -= Y[g_Y_tmp] * d_Y_tmp;
  Y[h_Y_tmp] /= e_Y_tmp;
  Y[g_Y_tmp] -= Y[h_Y_tmp] * f_Y_tmp;
  Y[rtemp] -= Y[h_Y_tmp] * static_cast<real32_T>(b_A[r3]);
  Y[rtemp] -= Y[g_Y_tmp] * static_cast<real32_T>(b_A[r2]);
}

void mrdiv(const emlrtStack &sp, const array<real32_T, 2U> &A,
           const real_T B[9], array<real32_T, 2U> &Y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T b_A[9];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (A.size(0) == 0) {
    Y.set_size(&bq_emlrtRTEI, &sp, 0, 3);
  } else {
    real_T a21;
    real_T maxval;
    int32_T r1;
    int32_T r2;
    int32_T r3;
    int32_T rtemp;
    int32_T scalarLB;
    int32_T vectorUB;
    st.site = &pq_emlrtRSI;
    b_st.site = &an_emlrtRSI;
    std::copy(&B[0], &B[9], &b_A[0]);
    r1 = 0;
    r2 = 1;
    r3 = 2;
    maxval = muDoubleScalarAbs(B[0]);
    a21 = muDoubleScalarAbs(B[1]);
    if (a21 > maxval) {
      maxval = a21;
      r1 = 1;
      r2 = 0;
    }
    if (muDoubleScalarAbs(B[2]) > maxval) {
      r1 = 2;
      r2 = 1;
      r3 = 0;
    }
    b_A[r2] = B[r2] / B[r1];
    b_A[r3] /= b_A[r1];
    b_A[r2 + 3] -= b_A[r2] * b_A[r1 + 3];
    b_A[r3 + 3] -= b_A[r3] * b_A[r1 + 3];
    b_A[r2 + 6] -= b_A[r2] * b_A[r1 + 6];
    b_A[r3 + 6] -= b_A[r3] * b_A[r1 + 6];
    if (muDoubleScalarAbs(b_A[r3 + 3]) > muDoubleScalarAbs(b_A[r2 + 3])) {
      rtemp = r2;
      r2 = r3;
      r3 = rtemp;
    }
    b_A[r3 + 3] /= b_A[r2 + 3];
    b_A[r3 + 6] -= b_A[r3 + 3] * b_A[r2 + 6];
    if ((b_A[r1] == 0.0) || (b_A[r2 + 3] == 0.0) || (b_A[r3 + 6] == 0.0)) {
      c_st.site = &bn_emlrtRSI;
      if (!emlrtSetWarningFlag(&c_st)) {
        d_st.site = &cn_emlrtRSI;
        b_warning(d_st);
      }
    }
    rtemp = A.size(0);
    Y.set_size(&cq_emlrtRTEI, &b_st, A.size(0), 3);
    c_st.site = &tq_emlrtRSI;
    if (A.size(0) > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    scalarLB = (A.size(0) / 4) << 2;
    vectorUB = scalarLB - 4;
    for (int32_T k{0}; k <= vectorUB; k += 4) {
      __m128 b_r;
      __m128 b_r1;
      _mm_storeu_ps(&Y[k + Y.size(0) * r1],
                    _mm_div_ps(_mm_loadu_ps(&A[k]),
                               _mm_set1_ps(static_cast<real32_T>(b_A[r1]))));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r1]);
      _mm_storeu_ps(
          &Y[k + Y.size(0) * r2],
          _mm_sub_ps(_mm_loadu_ps(&A[k + A.size(0)]),
                     _mm_mul_ps(b_r, _mm_set1_ps(
                                         static_cast<real32_T>(b_A[r1 + 3])))));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r1]);
      _mm_storeu_ps(
          &Y[k + Y.size(0) * r3],
          _mm_sub_ps(_mm_loadu_ps(&A[k + A.size(0) * 2]),
                     _mm_mul_ps(b_r, _mm_set1_ps(
                                         static_cast<real32_T>(b_A[r1 + 6])))));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r2]);
      _mm_storeu_ps(
          &Y[k + Y.size(0) * r2],
          _mm_div_ps(b_r, _mm_set1_ps(static_cast<real32_T>(b_A[r2 + 3]))));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r2]);
      b_r1 = _mm_loadu_ps(&Y[k + Y.size(0) * r3]);
      _mm_storeu_ps(
          &Y[k + Y.size(0) * r3],
          _mm_sub_ps(b_r1, _mm_mul_ps(b_r, _mm_set1_ps(static_cast<real32_T>(
                                               b_A[r2 + 6])))));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r3]);
      _mm_storeu_ps(
          &Y[k + Y.size(0) * r3],
          _mm_div_ps(b_r, _mm_set1_ps(static_cast<real32_T>(b_A[r3 + 6]))));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r3]);
      b_r1 = _mm_loadu_ps(&Y[k + Y.size(0) * r2]);
      _mm_storeu_ps(
          &Y[k + Y.size(0) * r2],
          _mm_sub_ps(b_r1, _mm_mul_ps(b_r, _mm_set1_ps(static_cast<real32_T>(
                                               b_A[r3 + 3])))));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r3]);
      b_r1 = _mm_loadu_ps(&Y[k + Y.size(0) * r1]);
      _mm_storeu_ps(
          &Y[k + Y.size(0) * r1],
          _mm_sub_ps(b_r1, _mm_mul_ps(b_r, _mm_set1_ps(static_cast<real32_T>(
                                               b_A[r3])))));
      b_r = _mm_loadu_ps(&Y[k + Y.size(0) * r2]);
      b_r1 = _mm_loadu_ps(&Y[k + Y.size(0) * r1]);
      _mm_storeu_ps(
          &Y[k + Y.size(0) * r1],
          _mm_sub_ps(b_r1, _mm_mul_ps(b_r, _mm_set1_ps(static_cast<real32_T>(
                                               b_A[r2])))));
    }
    for (int32_T k{scalarLB}; k < rtemp; k++) {
      Y[k + Y.size(0) * r1] = A[k] / static_cast<real32_T>(b_A[r1]);
      Y[k + Y.size(0) * r2] =
          A[k + A.size(0)] -
          Y[k + Y.size(0) * r1] * static_cast<real32_T>(b_A[r1 + 3]);
      Y[k + Y.size(0) * r3] =
          A[k + A.size(0) * 2] -
          Y[k + Y.size(0) * r1] * static_cast<real32_T>(b_A[r1 + 6]);
      Y[k + Y.size(0) * r2] =
          Y[k + Y.size(0) * r2] / static_cast<real32_T>(b_A[r2 + 3]);
      Y[k + Y.size(0) * r3] =
          Y[k + Y.size(0) * r3] -
          Y[k + Y.size(0) * r2] * static_cast<real32_T>(b_A[r2 + 6]);
      Y[k + Y.size(0) * r3] =
          Y[k + Y.size(0) * r3] / static_cast<real32_T>(b_A[r3 + 6]);
      Y[k + Y.size(0) * r2] =
          Y[k + Y.size(0) * r2] -
          Y[k + Y.size(0) * r3] * static_cast<real32_T>(b_A[r3 + 3]);
      Y[k + Y.size(0) * r1] =
          Y[k + Y.size(0) * r1] -
          Y[k + Y.size(0) * r3] * static_cast<real32_T>(b_A[r3]);
      Y[k + Y.size(0) * r1] =
          Y[k + Y.size(0) * r1] -
          Y[k + Y.size(0) * r2] * static_cast<real32_T>(b_A[r2]);
    }
  }
}

void mrdiv(const emlrtStack &sp, const real_T A[12], const real_T B[9],
           real_T Y[12])
{
  __m128d b_r;
  __m128d b_r1;
  __m128d b_r2;
  __m128d b_r3;
  __m128d r10;
  __m128d r4;
  __m128d r5;
  __m128d r6;
  __m128d r7;
  __m128d r8;
  __m128d r9;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T b_A[9];
  real_T a21;
  real_T maxval;
  int32_T i;
  int32_T i1;
  int32_T r1;
  int32_T r2;
  int32_T r3;
  int32_T rtemp;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &pq_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &an_emlrtRSI;
  std::copy(&B[0], &B[9], &b_A[0]);
  r1 = 0;
  r2 = 1;
  r3 = 2;
  maxval = muDoubleScalarAbs(B[0]);
  a21 = muDoubleScalarAbs(B[1]);
  if (a21 > maxval) {
    maxval = a21;
    r1 = 1;
    r2 = 0;
  }
  if (muDoubleScalarAbs(B[2]) > maxval) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }
  b_A[r2] = B[r2] / B[r1];
  b_A[r3] /= b_A[r1];
  b_A[r2 + 3] -= b_A[r2] * b_A[r1 + 3];
  b_A[r3 + 3] -= b_A[r3] * b_A[r1 + 3];
  b_A[r2 + 6] -= b_A[r2] * b_A[r1 + 6];
  b_A[r3 + 6] -= b_A[r3] * b_A[r1 + 6];
  if (muDoubleScalarAbs(b_A[r3 + 3]) > muDoubleScalarAbs(b_A[r2 + 3])) {
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }
  b_A[r3 + 3] /= b_A[r2 + 3];
  b_A[r3 + 6] -= b_A[r3 + 3] * b_A[r2 + 6];
  if ((b_A[r1] == 0.0) || (b_A[r2 + 3] == 0.0) || (b_A[r3 + 6] == 0.0)) {
    c_st.site = &bn_emlrtRSI;
    if (!emlrtSetWarningFlag(&c_st)) {
      d_st.site = &cn_emlrtRSI;
      b_warning(d_st);
    }
  }
  rtemp = r1 << 2;
  b_r = _mm_set1_pd(b_A[r1]);
  _mm_storeu_pd(&Y[rtemp], _mm_div_pd(_mm_loadu_pd(&A[0]), b_r));
  b_r1 = _mm_loadu_pd(&Y[rtemp]);
  i = r2 << 2;
  b_r2 = _mm_set1_pd(b_A[r1 + 3]);
  _mm_storeu_pd(&Y[i], _mm_sub_pd(_mm_loadu_pd(&A[4]), _mm_mul_pd(b_r1, b_r2)));
  b_r1 = _mm_loadu_pd(&Y[rtemp]);
  i1 = r3 << 2;
  b_r3 = _mm_set1_pd(b_A[r1 + 6]);
  _mm_storeu_pd(&Y[i1],
                _mm_sub_pd(_mm_loadu_pd(&A[8]), _mm_mul_pd(b_r1, b_r3)));
  b_r1 = _mm_loadu_pd(&Y[i]);
  r4 = _mm_set1_pd(b_A[r2 + 3]);
  _mm_storeu_pd(&Y[i], _mm_div_pd(b_r1, r4));
  b_r1 = _mm_loadu_pd(&Y[i]);
  r5 = _mm_loadu_pd(&Y[i1]);
  r6 = _mm_set1_pd(b_A[r2 + 6]);
  _mm_storeu_pd(&Y[i1], _mm_sub_pd(r5, _mm_mul_pd(b_r1, r6)));
  b_r1 = _mm_loadu_pd(&Y[i1]);
  r7 = _mm_set1_pd(b_A[r3 + 6]);
  _mm_storeu_pd(&Y[i1], _mm_div_pd(b_r1, r7));
  b_r1 = _mm_loadu_pd(&Y[i1]);
  r5 = _mm_loadu_pd(&Y[i]);
  r8 = _mm_set1_pd(b_A[r3 + 3]);
  _mm_storeu_pd(&Y[i], _mm_sub_pd(r5, _mm_mul_pd(b_r1, r8)));
  b_r1 = _mm_loadu_pd(&Y[i1]);
  r5 = _mm_loadu_pd(&Y[rtemp]);
  r9 = _mm_set1_pd(b_A[r3]);
  _mm_storeu_pd(&Y[rtemp], _mm_sub_pd(r5, _mm_mul_pd(b_r1, r9)));
  b_r1 = _mm_loadu_pd(&Y[i]);
  r5 = _mm_loadu_pd(&Y[rtemp]);
  r10 = _mm_set1_pd(b_A[r2]);
  _mm_storeu_pd(&Y[rtemp], _mm_sub_pd(r5, _mm_mul_pd(b_r1, r10)));
  _mm_storeu_pd(&Y[rtemp + 2], _mm_div_pd(_mm_loadu_pd(&A[2]), b_r));
  b_r1 = _mm_loadu_pd(&Y[rtemp + 2]);
  _mm_storeu_pd(&Y[i + 2],
                _mm_sub_pd(_mm_loadu_pd(&A[6]), _mm_mul_pd(b_r1, b_r2)));
  b_r1 = _mm_loadu_pd(&Y[rtemp + 2]);
  _mm_storeu_pd(&Y[i1 + 2],
                _mm_sub_pd(_mm_loadu_pd(&A[10]), _mm_mul_pd(b_r1, b_r3)));
  b_r1 = _mm_loadu_pd(&Y[i + 2]);
  _mm_storeu_pd(&Y[i + 2], _mm_div_pd(b_r1, r4));
  b_r1 = _mm_loadu_pd(&Y[i + 2]);
  r5 = _mm_loadu_pd(&Y[i1 + 2]);
  _mm_storeu_pd(&Y[i1 + 2], _mm_sub_pd(r5, _mm_mul_pd(b_r1, r6)));
  b_r1 = _mm_loadu_pd(&Y[i1 + 2]);
  _mm_storeu_pd(&Y[i1 + 2], _mm_div_pd(b_r1, r7));
  b_r1 = _mm_loadu_pd(&Y[i1 + 2]);
  r5 = _mm_loadu_pd(&Y[i + 2]);
  _mm_storeu_pd(&Y[i + 2], _mm_sub_pd(r5, _mm_mul_pd(b_r1, r8)));
  b_r1 = _mm_loadu_pd(&Y[i1 + 2]);
  r5 = _mm_loadu_pd(&Y[rtemp + 2]);
  _mm_storeu_pd(&Y[rtemp + 2], _mm_sub_pd(r5, _mm_mul_pd(b_r1, r9)));
  b_r1 = _mm_loadu_pd(&Y[i + 2]);
  r5 = _mm_loadu_pd(&Y[rtemp + 2]);
  _mm_storeu_pd(&Y[rtemp + 2], _mm_sub_pd(r5, _mm_mul_pd(b_r1, r10)));
}

} // namespace internal
} // namespace coder

// End of code generation (mrdivide_helper.cpp)
