//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// checkAndConvertMatchedPoints.cpp
//
// Code generation for function 'checkAndConvertMatchedPoints'
//

// Include files
#include "checkAndConvertMatchedPoints.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace inputValidation {
void checkAndConvertMatchedPoints(const emlrtStack &sp,
                                  const array<real32_T, 2U> &matchedPoints1,
                                  const array<real32_T, 2U> &matchedPoints2)
{
  static real_T dv[2]{0.0, 2.0};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T d;
  int32_T k;
  uint32_T varargin_1[2];
  uint32_T varargin_2[2];
  boolean_T exitg1;
  boolean_T p;
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
  dv[0U] = rtNaN;
  st.site = &vk_emlrtRSI;
  b_st.site = &xk_emlrtRSI;
  c_st.site = &yk_emlrtRSI;
  d_st.site = &al_emlrtRSI;
  e_st.site = &xf_emlrtRSI;
  f_st.site = &be_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    if (p) {
      d = dv[k];
      if ((!(d != d)) && (matchedPoints1.size(k) != 2)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &f_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:estrelpose:incorrectSize", 3, 4, 13, "inlierPoints1");
  }
  st.site = &wk_emlrtRSI;
  b_st.site = &xk_emlrtRSI;
  c_st.site = &yk_emlrtRSI;
  d_st.site = &al_emlrtRSI;
  e_st.site = &xf_emlrtRSI;
  f_st.site = &be_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    if (p) {
      d = dv[k];
      if ((!(d != d)) && (matchedPoints2.size(k) != 2)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &f_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:estrelpose:incorrectSize", 3, 4, 13, "inlierPoints2");
  }
  varargin_1[0] = static_cast<uint32_T>(matchedPoints1.size(0));
  varargin_2[0] = static_cast<uint32_T>(matchedPoints2.size(0));
  varargin_1[1] = 2U;
  varargin_2[1] = 2U;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (static_cast<int32_T>(varargin_1[k]) !=
        static_cast<int32_T>(varargin_2[k])) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&sp, &bb_emlrtRTEI,
                                  "vision:points:numPtsMismatch",
                                  "vision:points:numPtsMismatch", 6, 4, 13,
                                  "inlierPoints1", 4, 13, "inlierPoints2");
  }
}

} // namespace inputValidation
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (checkAndConvertMatchedPoints.cpp)
