//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// abs.cpp
//
// Code generation for function 'abs'
//

// Include files
#include "abs.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo
    vn_emlrtRSI{
        19,    // lineNo
        "abs", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m" // pathName
    };

static emlrtRSInfo wn_emlrtRSI{
    79,                    // lineNo
    "applyScalarFunction", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunction.m" // pathName
};

static emlrtRTEInfo so_emlrtRTEI{
    30,                    // lineNo
    21,                    // colNo
    "applyScalarFunction", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunction.m" // pName
};

// Function Definitions
namespace coder {
void b_abs(const emlrtStack &sp, const array<real32_T, 1U> &x,
           array<real32_T, 1U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &vn_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.size(0);
  y.set_size(&so_emlrtRTEI, &st, x.size(0));
  b_st.site = &wn_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{0}; k < nx_tmp; k++) {
    y[k] = muSingleScalarAbs(x[k]);
  }
}

void b_abs(const emlrtStack &sp, const array<real_T, 1U> &x,
           array<real_T, 1U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &vn_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.size(0);
  y.set_size(&so_emlrtRTEI, &st, x.size(0));
  b_st.site = &wn_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{0}; k < nx_tmp; k++) {
    y[k] = muDoubleScalarAbs(x[k]);
  }
}

} // namespace coder

// End of code generation (abs.cpp)
