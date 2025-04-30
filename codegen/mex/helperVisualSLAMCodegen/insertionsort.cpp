//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// insertionsort.cpp
//
// Code generation for function 'insertionsort'
//

// Include files
#include "insertionsort.h"
#include "anonymous_function.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo rnb_emlrtRSI{
    18,              // lineNo
    "insertionsort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\insertionsort.m" // pathName
};

// Function Definitions
namespace coder {
namespace internal {
void insertionsort(const emlrtStack &sp, array<int32_T, 1U> &x, int32_T xstart,
                   int32_T xend, const c_anonymous_function &cmp)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T a;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  a = xstart + 1;
  st.site = &rnb_emlrtRSI;
  if ((xstart + 1 <= xend) && (xend > 2147483646)) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T k{a}; k <= xend; k++) {
    int32_T idx;
    int32_T xc;
    boolean_T exitg1;
    xc = x[k - 1] - 1;
    idx = k - 2;
    exitg1 = false;
    while ((!exitg1) && (idx + 1 >= xstart)) {
      int32_T i;
      boolean_T varargout_1;
      i = cmp.workspace.a[x[idx] - 1];
      if (cmp.workspace.a[xc] < i) {
        varargout_1 = true;
      } else if (cmp.workspace.a[xc] == i) {
        varargout_1 = (cmp.workspace.b[xc] < cmp.workspace.b[x[idx] - 1]);
      } else {
        varargout_1 = false;
      }
      if (varargout_1) {
        x[idx + 1] = x[idx];
        idx--;
      } else {
        exitg1 = true;
      }
    }
    x[idx + 1] = xc + 1;
  }
}

void insertionsort(const emlrtStack &sp, array<int32_T, 1U> &x, int32_T xend,
                   const c_anonymous_function &cmp)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &rnb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (xend > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T k{2}; k <= xend; k++) {
    int32_T idx;
    int32_T xc;
    boolean_T exitg1;
    xc = x[k - 1] - 1;
    idx = k - 2;
    exitg1 = false;
    while ((!exitg1) && (idx + 1 >= 1)) {
      int32_T i;
      boolean_T varargout_1;
      i = cmp.workspace.a[x[idx] - 1];
      if (cmp.workspace.a[xc] < i) {
        varargout_1 = true;
      } else if (cmp.workspace.a[xc] == i) {
        varargout_1 = (cmp.workspace.b[xc] < cmp.workspace.b[x[idx] - 1]);
      } else {
        varargout_1 = false;
      }
      if (varargout_1) {
        x[idx + 1] = x[idx];
        idx--;
      } else {
        exitg1 = true;
      }
    }
    x[idx + 1] = xc + 1;
  }
}

void insertionsort(const emlrtStack &sp, array<int32_T, 1U> &x, int32_T xstart,
                   int32_T xend)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T a;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  a = xstart + 1;
  st.site = &rnb_emlrtRSI;
  if ((xstart + 1 <= xend) && (xend > 2147483646)) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T k{a}; k <= xend; k++) {
    int32_T idx;
    int32_T xc;
    boolean_T exitg1;
    xc = x[k - 1];
    idx = k - 1;
    exitg1 = false;
    while ((!exitg1) && (idx >= xstart)) {
      int32_T i;
      i = x[idx - 1];
      if (xc < i) {
        x[idx] = i;
        idx--;
      } else {
        exitg1 = true;
      }
    }
    x[idx] = xc;
  }
}

void insertionsort(const emlrtStack &sp, array<int32_T, 1U> &x, int32_T xstart,
                   int32_T xend, const anonymous_function &cmp)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T a;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  a = xstart + 1;
  st.site = &rnb_emlrtRSI;
  if ((xstart + 1 <= xend) && (xend > 2147483646)) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T k{a}; k <= xend; k++) {
    int32_T idx;
    int32_T xc;
    boolean_T exitg1;
    xc = x[k - 1];
    idx = k - 1;
    exitg1 = false;
    while ((!exitg1) && (idx >= xstart)) {
      int32_T i;
      i = x[idx - 1];
      if (cmp.workspace.x[xc - 1] < cmp.workspace.x[i - 1]) {
        x[idx] = i;
        idx--;
      } else {
        exitg1 = true;
      }
    }
    x[idx] = xc;
  }
}

void insertionsort(const emlrtStack &sp, array<int32_T, 1U> &x, int32_T xend,
                   const anonymous_function &cmp)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &rnb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (xend > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T k{2}; k <= xend; k++) {
    int32_T idx;
    int32_T xc;
    boolean_T exitg1;
    xc = x[k - 1];
    idx = k - 1;
    exitg1 = false;
    while ((!exitg1) && (idx >= 1)) {
      int32_T i;
      i = x[idx - 1];
      if (cmp.workspace.x[xc - 1] < cmp.workspace.x[i - 1]) {
        x[idx] = i;
        idx--;
      } else {
        exitg1 = true;
      }
    }
    x[idx] = xc;
  }
}

} // namespace internal
} // namespace coder

// End of code generation (insertionsort.cpp)
