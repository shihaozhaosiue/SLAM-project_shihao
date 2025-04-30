//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// addedge.cpp
//
// Code generation for function 'addedge'
//

// Include files
#include "addedge.h"
#include "all.h"
#include "eml_int_forloop_overflow_check.h"
#include "fix.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo bhb_emlrtRSI{
    112,               // lineNo
    "validateNodeIDs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\addedge.m" // pathName
};

static emlrtRSInfo chb_emlrtRSI{
    117,               // lineNo
    "validateNodeIDs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\addedge.m" // pathName
};

static emlrtRTEInfo jc_emlrtRTEI{
    112,               // lineNo
    23,                // colNo
    "validateNodeIDs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\addedge.m" // pName
};

static emlrtRTEInfo wv_emlrtRTEI{
    112,       // lineNo
    42,        // colNo
    "addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\addedge.m" // pName
};

static emlrtRTEInfo xv_emlrtRTEI{
    112,       // lineNo
    66,        // colNo
    "addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\addedge.m" // pName
};

// Function Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
real_T graphBase::validateNodeIDs(const emlrtStack &sp,
                                  const array<real_T, 1U> &ids)
{
  array<boolean_T, 1U> b_ids;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  real_T m;
  int32_T idx;
  int32_T loop_ub;
  boolean_T guard1;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &bhb_emlrtRSI;
  b_fix(st, ids);
  loop_ub = ids.size(0);
  b_ids.set_size(&wv_emlrtRTEI, &sp, ids.size(0));
  for (idx = 0; idx < loop_ub; idx++) {
    b_ids[idx] = (ids[idx] == ids[idx]);
  }
  guard1 = false;
  st.site = &bhb_emlrtRSI;
  if (all(st, b_ids)) {
    b_ids.set_size(&xv_emlrtRTEI, &sp, ids.size(0));
    for (idx = 0; idx < loop_ub; idx++) {
      b_ids[idx] = (ids[idx] >= 1.0);
    }
    st.site = &bhb_emlrtRSI;
    if (!all(st, b_ids)) {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }
  if (guard1) {
    emlrtErrorWithMessageIdR2018a(&sp, &jc_emlrtRTEI,
                                  "MATLAB:graphfun:addedge:InvalidNodeID",
                                  "MATLAB:graphfun:addedge:InvalidNodeID", 0);
  }
  if (ids.size(0) == 0) {
    m = 0.0;
  } else {
    st.site = &chb_emlrtRSI;
    b_st.site = &mbb_emlrtRSI;
    c_st.site = &nbb_emlrtRSI;
    d_st.site = &obb_emlrtRSI;
    e_st.site = &pbb_emlrtRSI;
    f_st.site = &qbb_emlrtRSI;
    if (ids.size(0) <= 2) {
      if (ids.size(0) == 1) {
        m = ids[0];
      } else if ((ids[0] < ids[1]) || (muDoubleScalarIsNaN(ids[0]) &&
                                       (!muDoubleScalarIsNaN(ids[1])))) {
        m = ids[1];
      } else {
        m = ids[0];
      }
    } else {
      int32_T k;
      g_st.site = &if_emlrtRSI;
      if (!muDoubleScalarIsNaN(ids[0])) {
        idx = 1;
      } else {
        boolean_T exitg1;
        idx = 0;
        h_st.site = &jf_emlrtRSI;
        if (ids.size(0) > 2147483646) {
          i_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(i_st);
        }
        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k <= loop_ub)) {
          if (!muDoubleScalarIsNaN(ids[k - 1])) {
            idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }
      if (idx == 0) {
        m = ids[0];
      } else {
        int32_T a;
        g_st.site = &hf_emlrtRSI;
        m = ids[idx - 1];
        a = idx + 1;
        h_st.site = &kf_emlrtRSI;
        if ((idx + 1 <= ids.size(0)) && (ids.size(0) > 2147483646)) {
          i_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(i_st);
        }
        for (k = a; k <= loop_ub; k++) {
          real_T d;
          d = ids[k - 1];
          if (m < d) {
            m = d;
          }
        }
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return m;
}

} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (addedge.cpp)
