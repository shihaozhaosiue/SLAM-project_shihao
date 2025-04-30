//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// all.cpp
//
// Code generation for function 'all'
//

// Include files
#include "all.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo
    ho_emlrtRSI{
        13,    // lineNo
        "all", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\all.m" // pathName
    };

static emlrtRSInfo
    bcb_emlrtRSI{
        16,    // lineNo
        "all", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\all.m" // pathName
    };

static emlrtRSInfo
    ccb_emlrtRSI{
        57,         // lineNo
        "allOrAny", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny."
        "m" // pathName
    };

static emlrtRSInfo
    fcb_emlrtRSI{
        56, // lineNo
        "@(x)coder.internal.allOrAny(op,x,coder.internal.indexInt(1))", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny."
        "m" // pathName
    };

// Function Definitions
namespace coder {
boolean_T all(const emlrtStack &sp, const array<boolean_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T ix;
  boolean_T exitg1;
  boolean_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ho_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = true;
  b_st.site = &io_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x.size(0))) {
    if (!x[ix - 1]) {
      y = false;
      exitg1 = true;
    } else {
      ix++;
    }
  }
  return y;
}

boolean_T b_all(const emlrtStack &sp, const array<boolean_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T ix;
  boolean_T exitg1;
  boolean_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &bcb_emlrtRSI;
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
  b_st.site = &ccb_emlrtRSI;
  c_st.site = &dcb_emlrtRSI;
  d_st.site = &ecb_emlrtRSI;
  e_st.site = &fcb_emlrtRSI;
  y = true;
  f_st.site = &io_emlrtRSI;
  if (x.size(0) > 2147483646) {
    g_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(g_st);
  }
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x.size(0))) {
    if (!x[ix - 1]) {
      y = false;
      exitg1 = true;
    } else {
      ix++;
    }
  }
  return y;
}

boolean_T c_all(const boolean_T x[5])
{
  int32_T k;
  boolean_T exitg1;
  boolean_T y;
  y = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= 4)) {
    if (!x[k]) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  return y;
}

} // namespace coder

// End of code generation (all.cpp)
