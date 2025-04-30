//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// mean.cpp
//
// Code generation for function 'mean'
//

// Include files
#include "mean.h"
#include "combineVectorElements.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
real32_T mean(const emlrtStack &sp, const array<real32_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &mo_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &uj_emlrtRSI;
  if (x.size(0) == 0) {
    y = 0.0F;
  } else {
    c_st.site = &xn_emlrtRSI;
    d_st.site = &wj_emlrtRSI;
    y = sumMatrixColumns(d_st, x, x.size(0));
  }
  y /= static_cast<real32_T>(x.size(0));
  return y;
}

void mean(const emlrtStack &sp, const array<real32_T, 2U> &x, real32_T y[3])
{
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &mo_emlrtRSI;
  b_combineVectorElements(st, x, y);
  y[0] /= static_cast<real32_T>(x.size(0));
  y[1] /= static_cast<real32_T>(x.size(0));
  y[2] /= static_cast<real32_T>(x.size(0));
}

} // namespace coder

// End of code generation (mean.cpp)
