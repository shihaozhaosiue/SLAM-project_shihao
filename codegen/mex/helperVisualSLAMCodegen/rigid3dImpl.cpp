//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rigid3dImpl.cpp
//
// Code generation for function 'rigid3dImpl'
//

// Include files
#include "rigid3dImpl.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo pxb_emlrtRSI{
    342,                      // lineNo
    "validateRotationMatrix", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+"
    "internal\\rigid3dImpl.m" // pathName
};

static emlrtRSInfo qxb_emlrtRSI{
    349,                         // lineNo
    "validateTranslationVector", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+"
    "internal\\rigid3dImpl.m" // pathName
};

// Function Definitions
namespace coder {
namespace images {
namespace internal {
void rigid3dImpl::validateRotationMatrix(const emlrtStack &sp,
                                         const real32_T rot[9])
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &pxb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 9)) {
    if ((!muSingleScalarIsInf(rot[k])) && (!muSingleScalarIsNaN(rot[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:rigid3d:expectedFinite", 3, 4, 3, "rot");
  }
}

void rigid3dImpl::validateTranslationVector(const emlrtStack &sp,
                                            const real32_T trans[3])
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &qxb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if ((!muSingleScalarIsInf(trans[k])) && (!muSingleScalarIsNaN(trans[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:rigid3d:expectedFinite", 3, 4, 5, "trans");
  }
}

} // namespace internal
} // namespace images
} // namespace coder

// End of code generation (rigid3dImpl.cpp)
