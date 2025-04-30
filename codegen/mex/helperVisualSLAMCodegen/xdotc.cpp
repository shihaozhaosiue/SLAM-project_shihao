//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// xdotc.cpp
//
// Code generation for function 'xdotc'
//

// Include files
#include "xdotc.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRSInfo mg_emlrtRSI{
    32,      // lineNo
    "xdotc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xdotc."
    "m" // pathName
};

static emlrtRSInfo
    ng_emlrtRSI{
        35,     // lineNo
        "xdot", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
        "blas\\xdot.m" // pathName
    };

static emlrtRSInfo og_emlrtRSI{
    15,     // lineNo
    "xdot", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xdot.m" // pathName
};

static emlrtRSInfo pg_emlrtRSI{
    42,      // lineNo
    "xdotx", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xdotx.m" // pathName
};

// Function Definitions
namespace coder {
namespace internal {
namespace blas {
real_T b_xdotc(const emlrtStack &sp, int32_T n, const real_T x[25], int32_T ix0,
               const real_T y[25], int32_T iy0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &mg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &ng_emlrtRSI;
  c_st.site = &og_emlrtRSI;
  d = 0.0;
  d_st.site = &pg_emlrtRSI;
  if (n > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  i = static_cast<uint8_T>(n);
  for (int32_T k{0}; k < i; k++) {
    d += x[(ix0 + k) - 1] * y[(iy0 + k) - 1];
  }
  return d;
}

real32_T b_xdotc(const emlrtStack &sp, int32_T n, const real32_T x[16],
                 int32_T ix0, const real32_T y[16], int32_T iy0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T i;
  real32_T d;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &mg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &ng_emlrtRSI;
  c_st.site = &og_emlrtRSI;
  d = 0.0F;
  d_st.site = &pg_emlrtRSI;
  if (n > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  i = static_cast<uint8_T>(n);
  for (int32_T k{0}; k < i; k++) {
    d += x[(ix0 + k) - 1] * y[(iy0 + k) - 1];
  }
  return d;
}

real_T c_xdotc(const emlrtStack &sp, int32_T n, const real_T x[81], int32_T ix0,
               const real_T y[81], int32_T iy0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &mg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &ng_emlrtRSI;
  c_st.site = &og_emlrtRSI;
  d = 0.0;
  d_st.site = &pg_emlrtRSI;
  if (n > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  i = static_cast<uint8_T>(n);
  for (int32_T k{0}; k < i; k++) {
    d += x[(ix0 + k) - 1] * y[(iy0 + k) - 1];
  }
  return d;
}

real_T d_xdotc(const emlrtStack &sp, int32_T n, const real_T x[9], int32_T ix0,
               const real_T y[9], int32_T iy0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &mg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &ng_emlrtRSI;
  c_st.site = &og_emlrtRSI;
  d = 0.0;
  d_st.site = &pg_emlrtRSI;
  if (n > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  i = static_cast<uint8_T>(n);
  for (int32_T k{0}; k < i; k++) {
    d += x[(ix0 + k) - 1] * y[(iy0 + k) - 1];
  }
  return d;
}

real_T e_xdotc(const emlrtStack &sp, int32_T n, const real_T x[16], int32_T ix0,
               const real_T y[16], int32_T iy0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &mg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &ng_emlrtRSI;
  c_st.site = &og_emlrtRSI;
  d = 0.0;
  d_st.site = &pg_emlrtRSI;
  if (n > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  i = static_cast<uint8_T>(n);
  for (int32_T k{0}; k < i; k++) {
    d += x[(ix0 + k) - 1] * y[(iy0 + k) - 1];
  }
  return d;
}

real_T xdotc(const emlrtStack &sp, int32_T n, const real_T x[45], int32_T ix0,
             const real_T y[45], int32_T iy0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &mg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &ng_emlrtRSI;
  c_st.site = &og_emlrtRSI;
  d = 0.0;
  d_st.site = &pg_emlrtRSI;
  if (n > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  i = static_cast<uint8_T>(n);
  for (int32_T k{0}; k < i; k++) {
    d += x[(ix0 + k) - 1] * y[(iy0 + k) - 1];
  }
  return d;
}

real32_T xdotc(const emlrtStack &sp, int32_T n, const real32_T x[9],
               int32_T ix0, const real32_T y[9], int32_T iy0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T i;
  real32_T d;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &mg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &ng_emlrtRSI;
  c_st.site = &og_emlrtRSI;
  d = 0.0F;
  d_st.site = &pg_emlrtRSI;
  if (n > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  i = static_cast<uint8_T>(n);
  for (int32_T k{0}; k < i; k++) {
    d += x[(ix0 + k) - 1] * y[(iy0 + k) - 1];
  }
  return d;
}

} // namespace blas
} // namespace internal
} // namespace coder

// End of code generation (xdotc.cpp)
