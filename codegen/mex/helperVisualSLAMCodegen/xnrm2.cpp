//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// xnrm2.cpp
//
// Code generation for function 'xnrm2'
//

// Include files
#include "xnrm2.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

// Function Definitions
namespace coder {
namespace internal {
namespace blas {
real_T b_xnrm2(const emlrtStack &sp, int32_T n, const real_T x[9], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T scale;
  real_T y;
  int32_T kend;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  kend = (ix0 + n) - 1;
  b_st.site = &ig_emlrtRSI;
  if ((ix0 <= kend) && (kend > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{ix0}; k <= kend; k++) {
    real_T absxk;
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      real_T t;
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      real_T t;
      t = absxk / scale;
      y += t * t;
    }
  }
  return scale * muDoubleScalarSqrt(y);
}

real32_T b_xnrm2(const emlrtStack &sp, int32_T n, const real32_T x[16],
                 int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T kend;
  real32_T scale;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = 0.0F;
  scale = 1.29246971E-26F;
  kend = (ix0 + n) - 1;
  b_st.site = &ig_emlrtRSI;
  if ((ix0 <= kend) && (kend > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{ix0}; k <= kend; k++) {
    real32_T absxk;
    absxk = muSingleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      real32_T t;
      t = scale / absxk;
      y = y * t * t + 1.0F;
      scale = absxk;
    } else {
      real32_T t;
      t = absxk / scale;
      y += t * t;
    }
  }
  return scale * muSingleScalarSqrt(y);
}

real_T c_xnrm2(const emlrtStack &sp, int32_T n, const real_T x[9], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T scale;
  real_T y;
  int32_T kend;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  kend = (ix0 + n) - 1;
  b_st.site = &ig_emlrtRSI;
  if ((ix0 <= kend) && (kend > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{ix0}; k <= kend; k++) {
    real_T absxk;
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      real_T t;
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      real_T t;
      t = absxk / scale;
      y += t * t;
    }
  }
  return scale * muDoubleScalarSqrt(y);
}

real32_T c_xnrm2(const emlrtStack &sp, int32_T n, const real32_T x[4],
                 int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T kend;
  real32_T scale;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = 0.0F;
  scale = 1.29246971E-26F;
  kend = (ix0 + n) - 1;
  b_st.site = &ig_emlrtRSI;
  if ((ix0 <= kend) && (kend > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{ix0}; k <= kend; k++) {
    real32_T absxk;
    absxk = muSingleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      real32_T t;
      t = scale / absxk;
      y = y * t * t + 1.0F;
      scale = absxk;
    } else {
      real32_T t;
      t = absxk / scale;
      y += t * t;
    }
  }
  return scale * muSingleScalarSqrt(y);
}

real_T d_xnrm2(const emlrtStack &sp, int32_T n, const real_T x[16], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T scale;
  real_T y;
  int32_T kend;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  kend = (ix0 + n) - 1;
  b_st.site = &ig_emlrtRSI;
  if ((ix0 <= kend) && (kend > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{ix0}; k <= kend; k++) {
    real_T absxk;
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      real_T t;
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      real_T t;
      t = absxk / scale;
      y += t * t;
    }
  }
  return scale * muDoubleScalarSqrt(y);
}

real_T e_xnrm2(const emlrtStack &sp, int32_T n, const real_T x[4], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T scale;
  real_T y;
  int32_T kend;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  kend = (ix0 + n) - 1;
  b_st.site = &ig_emlrtRSI;
  if ((ix0 <= kend) && (kend > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{ix0}; k <= kend; k++) {
    real_T absxk;
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      real_T t;
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      real_T t;
      t = absxk / scale;
      y += t * t;
    }
  }
  return scale * muDoubleScalarSqrt(y);
}

real_T xnrm2(const emlrtStack &sp, int32_T n, const real_T x[45], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = 0.0;
  if (n == 1) {
    y = muDoubleScalarAbs(x[ix0 - 1]);
  } else {
    real_T scale;
    int32_T kend;
    scale = 3.3121686421112381E-170;
    kend = (ix0 + n) - 1;
    b_st.site = &ig_emlrtRSI;
    if ((ix0 <= kend) && (kend > 2147483646)) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (int32_T k{ix0}; k <= kend; k++) {
      real_T absxk;
      absxk = muDoubleScalarAbs(x[k - 1]);
      if (absxk > scale) {
        real_T t;
        t = scale / absxk;
        y = y * t * t + 1.0;
        scale = absxk;
      } else {
        real_T t;
        t = absxk / scale;
        y += t * t;
      }
    }
    y = scale * muDoubleScalarSqrt(y);
  }
  return y;
}

real_T xnrm2(const real_T x[3])
{
  real_T scale;
  real_T y;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (int32_T k{2}; k < 4; k++) {
    real_T absxk;
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      real_T t;
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      real_T t;
      t = absxk / scale;
      y += t * t;
    }
  }
  return scale * muDoubleScalarSqrt(y);
}

real32_T xnrm2(const emlrtStack &sp, int32_T n, const real32_T x[9],
               int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T kend;
  real32_T scale;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = 0.0F;
  scale = 1.29246971E-26F;
  kend = (ix0 + n) - 1;
  b_st.site = &ig_emlrtRSI;
  if ((ix0 <= kend) && (kend > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{ix0}; k <= kend; k++) {
    real32_T absxk;
    absxk = muSingleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      real32_T t;
      t = scale / absxk;
      y = y * t * t + 1.0F;
      scale = absxk;
    } else {
      real32_T t;
      t = absxk / scale;
      y += t * t;
    }
  }
  return scale * muSingleScalarSqrt(y);
}

real32_T xnrm2(const real32_T x[3])
{
  real32_T scale;
  real32_T y;
  y = 0.0F;
  scale = 1.29246971E-26F;
  for (int32_T k{2}; k < 4; k++) {
    real32_T absxk;
    absxk = muSingleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      real32_T t;
      t = scale / absxk;
      y = y * t * t + 1.0F;
      scale = absxk;
    } else {
      real32_T t;
      t = absxk / scale;
      y += t * t;
    }
  }
  return scale * muSingleScalarSqrt(y);
}

} // namespace blas
} // namespace internal
} // namespace coder

// End of code generation (xnrm2.cpp)
