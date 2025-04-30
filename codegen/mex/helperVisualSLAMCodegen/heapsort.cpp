//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// heapsort.cpp
//
// Code generation for function 'heapsort'
//

// Include files
#include "heapsort.h"
#include "anonymous_function.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo snb_emlrtRSI{
    20,         // lineNo
    "heapsort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\heapsort.m" // pathName
};

// Function Declarations
namespace coder {
namespace internal {
static void heapify(array<int32_T, 1U> &x, int32_T idx, int32_T xstart,
                    int32_T xend, const c_anonymous_function &cmp);

static void heapify(array<int32_T, 1U> &x, int32_T idx, int32_T xstart,
                    int32_T xend);

static void heapify(array<int32_T, 1U> &x, int32_T idx, int32_T xstart,
                    int32_T xend, const anonymous_function &cmp);

} // namespace internal
} // namespace coder

// Function Definitions
namespace coder {
namespace internal {
static void heapify(array<int32_T, 1U> &x, int32_T idx, int32_T xstart,
                    int32_T xend, const c_anonymous_function &cmp)
{
  int32_T extremum;
  int32_T extremumIdx;
  int32_T i;
  int32_T i1;
  int32_T leftIdx;
  boolean_T changed;
  boolean_T exitg1;
  boolean_T varargout_1;
  changed = true;
  extremumIdx = (idx + xstart) - 2;
  leftIdx = ((idx << 1) + xstart) - 2;
  exitg1 = false;
  while ((!exitg1) && (leftIdx + 1 < xend)) {
    int32_T cmpIdx;
    int32_T i2;
    int32_T xcmp;
    changed = false;
    extremum = x[extremumIdx];
    cmpIdx = leftIdx;
    xcmp = x[leftIdx];
    i = cmp.workspace.a[x[leftIdx] - 1];
    i1 = x[leftIdx + 1] - 1;
    i2 = cmp.workspace.a[i1];
    if (i < i2) {
      varargout_1 = true;
    } else if (i == i2) {
      varargout_1 = (cmp.workspace.b[x[leftIdx] - 1] < cmp.workspace.b[i1]);
    } else {
      varargout_1 = false;
    }
    if (varargout_1) {
      cmpIdx = leftIdx + 1;
      xcmp = x[leftIdx + 1];
    }
    i = cmp.workspace.a[x[extremumIdx] - 1];
    i1 = cmp.workspace.a[xcmp - 1];
    if (i < i1) {
      varargout_1 = true;
    } else if (i == i1) {
      varargout_1 =
          (cmp.workspace.b[x[extremumIdx] - 1] < cmp.workspace.b[xcmp - 1]);
    } else {
      varargout_1 = false;
    }
    if (varargout_1) {
      x[extremumIdx] = xcmp;
      x[cmpIdx] = extremum;
      extremumIdx = cmpIdx;
      leftIdx = ((((cmpIdx - xstart) + 2) << 1) + xstart) - 2;
      changed = true;
    } else {
      exitg1 = true;
    }
  }
  if (changed && (leftIdx + 1 <= xend)) {
    extremum = x[extremumIdx];
    i = cmp.workspace.a[x[extremumIdx] - 1];
    i1 = cmp.workspace.a[x[leftIdx] - 1];
    if (i < i1) {
      varargout_1 = true;
    } else if (i == i1) {
      varargout_1 = (cmp.workspace.b[x[extremumIdx] - 1] <
                     cmp.workspace.b[x[leftIdx] - 1]);
    } else {
      varargout_1 = false;
    }
    if (varargout_1) {
      x[extremumIdx] = x[leftIdx];
      x[leftIdx] = extremum;
    }
  }
}

static void heapify(array<int32_T, 1U> &x, int32_T idx, int32_T xstart,
                    int32_T xend)
{
  int32_T cmpIdx;
  int32_T extremum;
  int32_T extremumIdx;
  int32_T leftIdx;
  boolean_T changed;
  boolean_T exitg1;
  changed = true;
  extremumIdx = (idx + xstart) - 2;
  leftIdx = ((idx << 1) + xstart) - 1;
  exitg1 = false;
  while ((!exitg1) && (leftIdx < xend)) {
    int32_T xcmp;
    changed = false;
    extremum = x[extremumIdx];
    cmpIdx = leftIdx - 1;
    xcmp = x[leftIdx - 1];
    if (xcmp < x[leftIdx]) {
      cmpIdx = leftIdx;
      xcmp = x[leftIdx];
    }
    if (x[extremumIdx] < xcmp) {
      x[extremumIdx] = xcmp;
      x[cmpIdx] = extremum;
      extremumIdx = cmpIdx;
      leftIdx = ((((cmpIdx - xstart) + 2) << 1) + xstart) - 1;
      changed = true;
    } else {
      exitg1 = true;
    }
  }
  if (changed && (leftIdx <= xend)) {
    extremum = x[extremumIdx];
    cmpIdx = x[leftIdx - 1];
    if (x[extremumIdx] < cmpIdx) {
      x[extremumIdx] = cmpIdx;
      x[leftIdx - 1] = extremum;
    }
  }
}

static void heapify(array<int32_T, 1U> &x, int32_T idx, int32_T xstart,
                    int32_T xend, const anonymous_function &cmp)
{
  int32_T cmpIdx;
  int32_T extremum;
  int32_T extremumIdx;
  int32_T leftIdx;
  boolean_T changed;
  boolean_T exitg1;
  changed = true;
  extremumIdx = (idx + xstart) - 2;
  leftIdx = ((idx << 1) + xstart) - 1;
  exitg1 = false;
  while ((!exitg1) && (leftIdx < xend)) {
    int32_T xcmp;
    changed = false;
    extremum = x[extremumIdx];
    cmpIdx = leftIdx - 1;
    xcmp = x[leftIdx - 1];
    if (cmp.workspace.x[xcmp - 1] < cmp.workspace.x[x[leftIdx] - 1]) {
      cmpIdx = leftIdx;
      xcmp = x[leftIdx];
    }
    if (cmp.workspace.x[x[extremumIdx] - 1] < cmp.workspace.x[xcmp - 1]) {
      x[extremumIdx] = xcmp;
      x[cmpIdx] = extremum;
      extremumIdx = cmpIdx;
      leftIdx = ((((cmpIdx - xstart) + 2) << 1) + xstart) - 1;
      changed = true;
    } else {
      exitg1 = true;
    }
  }
  if (changed && (leftIdx <= xend)) {
    extremum = x[extremumIdx];
    cmpIdx = x[leftIdx - 1];
    if (cmp.workspace.x[x[extremumIdx] - 1] < cmp.workspace.x[cmpIdx - 1]) {
      x[extremumIdx] = cmpIdx;
      x[leftIdx - 1] = extremum;
    }
  }
}

void b_heapsort(const emlrtStack &sp, array<int32_T, 1U> &x, int32_T xstart,
                int32_T xend, const c_anonymous_function &cmp)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T idx;
  int32_T n;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n = xend - xstart;
  for (idx = n + 1; idx >= 1; idx--) {
    heapify(x, idx, xstart, xend, cmp);
  }
  st.site = &snb_emlrtRSI;
  if (n > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T k{0}; k < n; k++) {
    int32_T t;
    idx = (xend - k) - 1;
    t = x[idx];
    x[idx] = x[xstart - 1];
    x[xstart - 1] = t;
    heapify(x, 1, xstart, idx, cmp);
  }
}

void b_heapsort(const emlrtStack &sp, array<int32_T, 1U> &x, int32_T xstart,
                int32_T xend)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T idx;
  int32_T n;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n = xend - xstart;
  for (idx = n + 1; idx >= 1; idx--) {
    heapify(x, idx, xstart, xend);
  }
  st.site = &snb_emlrtRSI;
  if (n > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T k{0}; k < n; k++) {
    int32_T t;
    idx = (xend - k) - 1;
    t = x[idx];
    x[idx] = x[xstart - 1];
    x[xstart - 1] = t;
    heapify(x, 1, xstart, idx);
  }
}

void b_heapsort(const emlrtStack &sp, array<int32_T, 1U> &x, int32_T xstart,
                int32_T xend, const anonymous_function &cmp)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T idx;
  int32_T n;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n = xend - xstart;
  for (idx = n + 1; idx >= 1; idx--) {
    heapify(x, idx, xstart, xend, cmp);
  }
  st.site = &snb_emlrtRSI;
  if (n > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T k{0}; k < n; k++) {
    int32_T t;
    idx = (xend - k) - 1;
    t = x[idx];
    x[idx] = x[xstart - 1];
    x[xstart - 1] = t;
    heapify(x, 1, xstart, idx, cmp);
  }
}

} // namespace internal
} // namespace coder

// End of code generation (heapsort.cpp)
