//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// unaryMinOrMax.cpp
//
// Code generation for function 'unaryMinOrMax'
//

// Include files
#include "unaryMinOrMax.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo bec_emlrtRSI{
    128,                                                             // lineNo
    "@(x)coder.internal.unaryMinOrMax(opstr,x,ONE,varargin{2:end})", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

// Function Definitions
namespace coder {
namespace internal {
real_T unaryMinOrMax_anonFcn1(const emlrtStack &sp, const array<real_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T varargout_1;
  int32_T last;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &bec_emlrtRSI;
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
  if (x.size(0) < 1) {
    emlrtErrorWithMessageIdR2018a(&st, &m_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  b_st.site = &pbb_emlrtRSI;
  c_st.site = &qbb_emlrtRSI;
  last = x.size(0);
  if (x.size(0) <= 2) {
    if (x.size(0) == 1) {
      varargout_1 = x[0];
    } else if ((x[0] < x[1]) ||
               (muDoubleScalarIsNaN(x[0]) && (!muDoubleScalarIsNaN(x[1])))) {
      varargout_1 = x[1];
    } else {
      varargout_1 = x[0];
    }
  } else {
    int32_T idx;
    int32_T k;
    d_st.site = &if_emlrtRSI;
    if (!muDoubleScalarIsNaN(x[0])) {
      idx = 1;
    } else {
      boolean_T exitg1;
      idx = 0;
      e_st.site = &jf_emlrtRSI;
      if (x.size(0) > 2147483646) {
        f_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(f_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(x[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      varargout_1 = x[0];
    } else {
      int32_T a;
      d_st.site = &hf_emlrtRSI;
      varargout_1 = x[idx - 1];
      a = idx + 1;
      e_st.site = &kf_emlrtRSI;
      if ((idx + 1 <= x.size(0)) && (x.size(0) > 2147483646)) {
        f_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(f_st);
      }
      for (k = a; k <= last; k++) {
        real_T d;
        d = x[k - 1];
        if (varargout_1 < d) {
          varargout_1 = d;
        }
      }
    }
  }
  return varargout_1;
}

} // namespace internal
} // namespace coder

// End of code generation (unaryMinOrMax.cpp)
