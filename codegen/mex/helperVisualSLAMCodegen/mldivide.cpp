//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// mldivide.cpp
//
// Code generation for function 'mldivide'
//

// Include files
#include "mldivide.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <algorithm>

// Variable Definitions
static emlrtRSInfo wt_emlrtRSI{
    315,          // lineNo
    "lusolve3x3", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m" // pathName
};

static emlrtRSInfo fkc_emlrtRSI{
    67,        // lineNo
    "lusolve", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m" // pathName
};

static emlrtRSInfo gkc_emlrtRSI{
    109,          // lineNo
    "lusolveNxN", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m" // pathName
};

static emlrtRSInfo hkc_emlrtRSI{
    112,          // lineNo
    "lusolveNxN", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m" // pathName
};

static emlrtRSInfo ikc_emlrtRSI{
    124,          // lineNo
    "InvAtimesX", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m" // pathName
};

static emlrtRSInfo jkc_emlrtRSI{
    26,        // lineNo
    "xgetrfs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" // pathName
};

static emlrtRSInfo kkc_emlrtRSI{
    27,        // lineNo
    "xgetrfs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" // pathName
};

static emlrtRSInfo lkc_emlrtRSI{
    18,       // lineNo
    "xgetrs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrs.m" // pathName
};

static emlrtRSInfo mkc_emlrtRSI{
    36,        // lineNo
    "xzgetrs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgetrs.m" // pathName
};

static emlrtRSInfo okc_emlrtRSI{
    51,      // lineNo
    "xtrsm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xtrsm.m" // pathName
};

static emlrtRTEInfo sb_emlrtRTEI{
    16,         // lineNo
    19,         // colNo
    "mldivide", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" // pName
};

static emlrtRTEInfo or_emlrtRTEI{
    314,       // lineNo
    24,        // colNo
    "lusolve", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m" // pName
};

static emlrtRTEInfo pr_emlrtRTEI{
    20,         // lineNo
    5,          // colNo
    "mldivide", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" // pName
};

// Function Definitions
namespace coder {
void mldivide(const emlrtStack &sp, const real_T A[9], const real_T B_data[],
              const int32_T B_size[2], real_T Y_data[], int32_T Y_size[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (B_size[0] != 3) {
    emlrtErrorWithMessageIdR2018a(&sp, &sb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  st.site = &xm_emlrtRSI;
  if (B_size[1] == 0) {
    Y_size[0] = 3;
    Y_size[1] = 0;
  } else {
    real_T a21;
    real_T maxval;
    int32_T r1;
    int32_T r2;
    int32_T r3;
    int32_T rtemp;
    b_st.site = &ym_emlrtRSI;
    c_st.site = &an_emlrtRSI;
    std::copy(&A[0], &A[9], &b_A[0]);
    r1 = 0;
    r2 = 1;
    r3 = 2;
    maxval = muDoubleScalarAbs(A[0]);
    a21 = muDoubleScalarAbs(A[1]);
    if (a21 > maxval) {
      maxval = a21;
      r1 = 1;
      r2 = 0;
    }
    if (muDoubleScalarAbs(A[2]) > maxval) {
      r1 = 2;
      r2 = 1;
      r3 = 0;
    }
    b_A[r2] = A[r2] / A[r1];
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
      d_st.site = &bn_emlrtRSI;
      if (!emlrtSetWarningFlag(&d_st)) {
        e_st.site = &cn_emlrtRSI;
        internal::b_warning(e_st);
      }
    }
    rtemp = B_size[1];
    Y_size[0] = 3;
    Y_size[1] = B_size[1];
    d_st.site = &wt_emlrtRSI;
    for (int32_T k{0}; k < rtemp; k++) {
      real_T d;
      maxval = B_data[r1 + 3 * k];
      a21 = B_data[r2 + 3 * k] - maxval * b_A[r2];
      d = ((B_data[r3 + 3 * k] - maxval * b_A[r3]) - a21 * b_A[r3 + 3]) /
          b_A[r3 + 6];
      Y_data[3 * k + 2] = d;
      maxval -= d * b_A[r1 + 6];
      a21 -= d * b_A[r2 + 6];
      a21 /= b_A[r2 + 3];
      Y_data[3 * k + 1] = a21;
      maxval -= a21 * b_A[r1 + 3];
      maxval /= b_A[r1];
      Y_data[3 * k] = maxval;
    }
  }
}

void mldivide(const emlrtStack &sp, const real32_T A[9], const real32_T B[3],
              real32_T Y[3])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T r1;
  int32_T r2;
  int32_T r3;
  real32_T b_A[9];
  real32_T a21;
  real32_T maxval;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &xm_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &ym_emlrtRSI;
  c_st.site = &an_emlrtRSI;
  for (r1 = 0; r1 < 9; r1++) {
    b_A[r1] = A[r1];
  }
  r1 = 0;
  r2 = 1;
  r3 = 2;
  maxval = muSingleScalarAbs(A[0]);
  a21 = muSingleScalarAbs(A[1]);
  if (a21 > maxval) {
    maxval = a21;
    r1 = 1;
    r2 = 0;
  }
  if (muSingleScalarAbs(A[2]) > maxval) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }
  b_A[r2] = A[r2] / A[r1];
  b_A[r3] /= b_A[r1];
  b_A[r2 + 3] -= b_A[r2] * b_A[r1 + 3];
  b_A[r3 + 3] -= b_A[r3] * b_A[r1 + 3];
  b_A[r2 + 6] -= b_A[r2] * b_A[r1 + 6];
  b_A[r3 + 6] -= b_A[r3] * b_A[r1 + 6];
  if (muSingleScalarAbs(b_A[r3 + 3]) > muSingleScalarAbs(b_A[r2 + 3])) {
    int32_T rtemp;
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }
  b_A[r3 + 3] /= b_A[r2 + 3];
  b_A[r3 + 6] -= b_A[r3 + 3] * b_A[r2 + 6];
  if ((b_A[r1] == 0.0F) || (b_A[r2 + 3] == 0.0F) || (b_A[r3 + 6] == 0.0F)) {
    d_st.site = &bn_emlrtRSI;
    if (!emlrtSetWarningFlag(&d_st)) {
      e_st.site = &cn_emlrtRSI;
      internal::b_warning(e_st);
    }
  }
  Y[1] = B[r2] - B[r1] * b_A[r2];
  Y[2] = (B[r3] - B[r1] * b_A[r3]) - Y[1] * b_A[r3 + 3];
  Y[2] /= b_A[r3 + 6];
  Y[0] = B[r1] - Y[2] * b_A[r1 + 6];
  Y[1] -= Y[2] * b_A[r2 + 6];
  Y[1] /= b_A[r2 + 3];
  Y[0] -= Y[1] * b_A[r1 + 3];
  Y[0] /= b_A[r1];
}

void mldivide(const emlrtStack &sp, const real_T A[9],
              const array<real32_T, 2U> &B, array<real32_T, 2U> &Y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (B.size(0) != 3) {
    emlrtErrorWithMessageIdR2018a(&sp, &sb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  st.site = &xm_emlrtRSI;
  if (B.size(1) == 0) {
    Y.set_size(&pr_emlrtRTEI, &st, 3, 0);
  } else {
    real_T a21;
    real_T maxval;
    int32_T r1;
    int32_T r2;
    int32_T r3;
    int32_T rtemp;
    b_st.site = &ym_emlrtRSI;
    c_st.site = &an_emlrtRSI;
    std::copy(&A[0], &A[9], &b_A[0]);
    r1 = 0;
    r2 = 1;
    r3 = 2;
    maxval = muDoubleScalarAbs(A[0]);
    a21 = muDoubleScalarAbs(A[1]);
    if (a21 > maxval) {
      maxval = a21;
      r1 = 1;
      r2 = 0;
    }
    if (muDoubleScalarAbs(A[2]) > maxval) {
      r1 = 2;
      r2 = 1;
      r3 = 0;
    }
    b_A[r2] = A[r2] / A[r1];
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
      d_st.site = &bn_emlrtRSI;
      if (!emlrtSetWarningFlag(&d_st)) {
        e_st.site = &cn_emlrtRSI;
        internal::b_warning(e_st);
      }
    }
    rtemp = B.size(1);
    Y.set_size(&or_emlrtRTEI, &c_st, 3, B.size(1));
    d_st.site = &wt_emlrtRSI;
    if (B.size(1) > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (int32_T k{0}; k < rtemp; k++) {
      real32_T f;
      real32_T f1;
      real32_T f2;
      f = B[r1 + B.size(0) * k];
      f1 = B[r2 + B.size(0) * k] - f * static_cast<real32_T>(b_A[r2]);
      f2 = ((B[r3 + B.size(0) * k] - f * static_cast<real32_T>(b_A[r3])) -
            f1 * static_cast<real32_T>(b_A[r3 + 3])) /
           static_cast<real32_T>(b_A[r3 + 6]);
      Y[3 * k + 2] = f2;
      f -= f2 * static_cast<real32_T>(b_A[r1 + 6]);
      f1 -= f2 * static_cast<real32_T>(b_A[r2 + 6]);
      f1 /= static_cast<real32_T>(b_A[r2 + 3]);
      Y[3 * k + 1] = f1;
      f -= f1 * static_cast<real32_T>(b_A[r1 + 3]);
      f /= static_cast<real32_T>(b_A[r1]);
      Y[3 * k] = f;
    }
  }
}

void mldivide(const emlrtStack &sp, const real32_T A[9],
              const array<real32_T, 2U> &B, array<real32_T, 2U> &Y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (B.size(0) != 3) {
    emlrtErrorWithMessageIdR2018a(&sp, &sb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  st.site = &xm_emlrtRSI;
  if (B.size(1) == 0) {
    Y.set_size(&pr_emlrtRTEI, &st, 3, 0);
  } else {
    int32_T r1;
    int32_T r2;
    int32_T r3;
    int32_T rtemp;
    real32_T b_A[9];
    real32_T a21;
    real32_T maxval;
    b_st.site = &ym_emlrtRSI;
    c_st.site = &an_emlrtRSI;
    for (rtemp = 0; rtemp < 9; rtemp++) {
      b_A[rtemp] = A[rtemp];
    }
    r1 = 0;
    r2 = 1;
    r3 = 2;
    maxval = muSingleScalarAbs(A[0]);
    a21 = muSingleScalarAbs(A[1]);
    if (a21 > maxval) {
      maxval = a21;
      r1 = 1;
      r2 = 0;
    }
    if (muSingleScalarAbs(A[2]) > maxval) {
      r1 = 2;
      r2 = 1;
      r3 = 0;
    }
    b_A[r2] = A[r2] / A[r1];
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
      d_st.site = &bn_emlrtRSI;
      if (!emlrtSetWarningFlag(&d_st)) {
        e_st.site = &cn_emlrtRSI;
        internal::b_warning(e_st);
      }
    }
    rtemp = B.size(1);
    Y.set_size(&or_emlrtRTEI, &c_st, 3, B.size(1));
    d_st.site = &wt_emlrtRSI;
    if (B.size(1) > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (int32_T k{0}; k < rtemp; k++) {
      real32_T f;
      maxval = B[r1 + B.size(0) * k];
      a21 = B[r2 + B.size(0) * k] - maxval * b_A[r2];
      f = ((B[r3 + B.size(0) * k] - maxval * b_A[r3]) - a21 * b_A[r3 + 3]) /
          b_A[r3 + 6];
      Y[3 * k + 2] = f;
      maxval -= f * b_A[r1 + 6];
      a21 -= f * b_A[r2 + 6];
      a21 /= b_A[r2 + 3];
      Y[3 * k + 1] = a21;
      maxval -= a21 * b_A[r1 + 3];
      maxval /= b_A[r1];
      Y[3 * k] = maxval;
    }
  }
}

void mldivide(const emlrtStack &sp, const real_T A[9], const real32_T B[9],
              real32_T Y[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T b_A[9];
  real_T a21;
  real_T maxval;
  int32_T r1;
  int32_T r2;
  int32_T r3;
  real32_T f;
  real32_T f1;
  real32_T f2;
  real32_T f3;
  real32_T f4;
  real32_T f5;
  real32_T f6;
  real32_T f7;
  real32_T f8;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &xm_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &ym_emlrtRSI;
  c_st.site = &an_emlrtRSI;
  std::copy(&A[0], &A[9], &b_A[0]);
  r1 = 0;
  r2 = 1;
  r3 = 2;
  maxval = muDoubleScalarAbs(A[0]);
  a21 = muDoubleScalarAbs(A[1]);
  if (a21 > maxval) {
    maxval = a21;
    r1 = 1;
    r2 = 0;
  }
  if (muDoubleScalarAbs(A[2]) > maxval) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }
  b_A[r2] = A[r2] / A[r1];
  b_A[r3] /= b_A[r1];
  b_A[r2 + 3] -= b_A[r2] * b_A[r1 + 3];
  b_A[r3 + 3] -= b_A[r3] * b_A[r1 + 3];
  b_A[r2 + 6] -= b_A[r2] * b_A[r1 + 6];
  b_A[r3 + 6] -= b_A[r3] * b_A[r1 + 6];
  if (muDoubleScalarAbs(b_A[r3 + 3]) > muDoubleScalarAbs(b_A[r2 + 3])) {
    int32_T rtemp;
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }
  b_A[r3 + 3] /= b_A[r2 + 3];
  b_A[r3 + 6] -= b_A[r3 + 3] * b_A[r2 + 6];
  if ((b_A[r1] == 0.0) || (b_A[r2 + 3] == 0.0) || (b_A[r3 + 6] == 0.0)) {
    d_st.site = &bn_emlrtRSI;
    if (!emlrtSetWarningFlag(&d_st)) {
      e_st.site = &cn_emlrtRSI;
      internal::b_warning(e_st);
    }
  }
  f = B[r1];
  f1 = B[r2] - f * static_cast<real32_T>(b_A[r2]);
  f2 = static_cast<real32_T>(b_A[r3 + 3]);
  f3 = static_cast<real32_T>(b_A[r3 + 6]);
  f4 = ((B[r3] - f * static_cast<real32_T>(b_A[r3])) - f1 * f2) / f3;
  Y[2] = f4;
  f5 = static_cast<real32_T>(b_A[r1 + 6]);
  f -= f4 * f5;
  f6 = static_cast<real32_T>(b_A[r2 + 6]);
  f1 -= f4 * f6;
  f7 = static_cast<real32_T>(b_A[r2 + 3]);
  f1 /= f7;
  Y[1] = f1;
  f8 = static_cast<real32_T>(b_A[r1 + 3]);
  f -= f1 * f8;
  f /= static_cast<real32_T>(b_A[r1]);
  Y[0] = f;
  f = B[r1 + 3];
  f1 = B[r2 + 3] - f * static_cast<real32_T>(b_A[r2]);
  f4 = ((B[r3 + 3] - f * static_cast<real32_T>(b_A[r3])) - f1 * f2) / f3;
  Y[5] = f4;
  f -= f4 * f5;
  f1 -= f4 * f6;
  f1 /= f7;
  Y[4] = f1;
  f -= f1 * f8;
  f /= static_cast<real32_T>(b_A[r1]);
  Y[3] = f;
  f = B[r1 + 6];
  f1 = B[r2 + 6] - f * static_cast<real32_T>(b_A[r2]);
  f4 = ((B[r3 + 6] - f * static_cast<real32_T>(b_A[r3])) - f1 * f2) / f3;
  Y[8] = f4;
  f -= f4 * f5;
  f1 -= f4 * f6;
  f1 /= f7;
  Y[7] = f1;
  f -= f1 * f8;
  f /= static_cast<real32_T>(b_A[r1]);
  Y[6] = f;
}

void mldivide(const emlrtStack &sp, const real_T A[36], real_T B[6])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack k_st;
  emlrtStack l_st;
  emlrtStack m_st;
  emlrtStack st;
  real_T b_A[36];
  real_T smax;
  int32_T A_tmp;
  int32_T a;
  int32_T info;
  int32_T jA;
  int8_T ipiv[6];
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &xm_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  k_st.prev = &j_st;
  k_st.tls = j_st.tls;
  l_st.prev = &k_st;
  l_st.tls = k_st.tls;
  m_st.prev = &l_st;
  m_st.tls = l_st.tls;
  b_st.site = &ym_emlrtRSI;
  c_st.site = &fkc_emlrtRSI;
  d_st.site = &gkc_emlrtRSI;
  e_st.site = &ikc_emlrtRSI;
  f_st.site = &jkc_emlrtRSI;
  std::copy(&A[0], &A[36], &b_A[0]);
  g_st.site = &yp_emlrtRSI;
  for (a = 0; a < 6; a++) {
    ipiv[a] = static_cast<int8_T>(a + 1);
  }
  info = 0;
  for (int32_T j{0}; j < 5; j++) {
    int32_T b_tmp;
    int32_T jp1j;
    int32_T mmj_tmp;
    mmj_tmp = 4 - j;
    b_tmp = j * 7;
    jp1j = b_tmp + 2;
    jA = 7 - j;
    h_st.site = &qg_emlrtRSI;
    i_st.site = &tg_emlrtRSI;
    a = 0;
    smax = muDoubleScalarAbs(b_A[b_tmp]);
    j_st.site = &ug_emlrtRSI;
    for (int32_T k{2}; k < jA; k++) {
      real_T s;
      s = muDoubleScalarAbs(b_A[(b_tmp + k) - 1]);
      if (s > smax) {
        a = k - 1;
        smax = s;
      }
    }
    if (b_A[b_tmp + a] != 0.0) {
      if (a != 0) {
        a += j;
        ipiv[j] = static_cast<int8_T>(a + 1);
        for (int32_T k{0}; k < 6; k++) {
          jA = j + k * 6;
          smax = b_A[jA];
          A_tmp = a + k * 6;
          b_A[jA] = b_A[A_tmp];
          b_A[A_tmp] = smax;
        }
      }
      a = (b_tmp - j) + 6;
      h_st.site = &rg_emlrtRSI;
      for (A_tmp = jp1j; A_tmp <= a; A_tmp++) {
        b_A[A_tmp - 1] /= b_A[b_tmp];
      }
    } else {
      info = j + 1;
    }
    h_st.site = &sg_emlrtRSI;
    i_st.site = &vg_emlrtRSI;
    j_st.site = &wg_emlrtRSI;
    k_st.site = &xg_emlrtRSI;
    jA = b_tmp + 8;
    l_st.site = &yg_emlrtRSI;
    for (A_tmp = 0; A_tmp <= mmj_tmp; A_tmp++) {
      smax = b_A[(b_tmp + A_tmp * 6) + 6];
      if (smax != 0.0) {
        a = (jA - j) + 4;
        l_st.site = &ah_emlrtRSI;
        if ((jA <= a) && (a > 2147483646)) {
          m_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(m_st);
        }
        for (jp1j = jA; jp1j <= a; jp1j++) {
          b_A[jp1j - 1] += b_A[((b_tmp + jp1j) - jA) + 1] * -smax;
        }
      }
      jA += 6;
    }
  }
  if ((info == 0) && (!(b_A[35] != 0.0))) {
    info = 6;
  }
  f_st.site = &kkc_emlrtRSI;
  g_st.site = &lkc_emlrtRSI;
  for (A_tmp = 0; A_tmp < 5; A_tmp++) {
    int8_T i;
    i = ipiv[A_tmp];
    if (i != A_tmp + 1) {
      smax = B[A_tmp];
      B[A_tmp] = B[i - 1];
      B[i - 1] = smax;
    }
  }
  for (int32_T k{0}; k < 6; k++) {
    jA = 6 * k;
    if (B[k] != 0.0) {
      a = k + 2;
      for (A_tmp = a; A_tmp < 7; A_tmp++) {
        B[A_tmp - 1] -= B[k] * b_A[(A_tmp + jA) - 1];
      }
    }
  }
  h_st.site = &mkc_emlrtRSI;
  i_st.site = &nkc_emlrtRSI;
  for (int32_T k{5}; k >= 0; k--) {
    jA = 6 * k;
    smax = B[k];
    if (smax != 0.0) {
      smax /= b_A[k + jA];
      B[k] = smax;
      j_st.site = &okc_emlrtRSI;
      for (A_tmp = 0; A_tmp < k; A_tmp++) {
        B[A_tmp] -= B[k] * b_A[A_tmp + jA];
      }
    }
  }
  if (info > 0) {
    d_st.site = &hkc_emlrtRSI;
    if (!emlrtSetWarningFlag(&d_st)) {
      e_st.site = &cn_emlrtRSI;
      internal::b_warning(e_st);
    }
  }
}

} // namespace coder

// End of code generation (mldivide.cpp)
