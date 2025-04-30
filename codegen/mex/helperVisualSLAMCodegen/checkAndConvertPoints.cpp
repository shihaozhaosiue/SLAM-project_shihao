//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// checkAndConvertPoints.cpp
//
// Code generation for function 'checkAndConvertPoints'
//

// Include files
#include "checkAndConvertPoints.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace inputValidation {
void checkAndConvertPoints(const emlrtStack &sp,
                           const array<real32_T, 2U> &pointsIn)
{
  static real_T dv[2]{0.0, 2.0};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
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
  dv[0U] = rtNaN;
  st.site = &xk_emlrtRSI;
  b_st.site = &yk_emlrtRSI;
  c_st.site = &al_emlrtRSI;
  d_st.site = &xf_emlrtRSI;
  e_st.site = &be_emlrtRSI;
  p = true;
  for (int32_T k{0}; k < 2; k++) {
    if (p) {
      real_T d;
      d = dv[k];
      if ((!(d != d)) && (pointsIn.size(k) != 2)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:pointTrack:incorrectSize", 3, 4, 6, "points");
  }
}

} // namespace inputValidation
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (checkAndConvertPoints.cpp)
