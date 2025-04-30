//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ORBPointsImpl.cpp
//
// Code generation for function 'ORBPointsImpl'
//

// Include files
#include "ORBPointsImpl.h"
#include "FeaturePointsImpl.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo ee_emlrtRSI{
    205,                        // lineNo
    "ORBPointsImpl/checkScale", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pathName
};

static emlrtRSInfo fe_emlrtRSI{
    211,                              // lineNo
    "ORBPointsImpl/checkOrientation", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pathName
};

static emlrtRTEInfo j_emlrtRTEI{
    28,           // lineNo
    27,           // colNo
    "validatege", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatege.m" // pName
};

// Function Definitions
namespace coder {
void ORBPointsImpl::checkOrientation(const emlrtStack &sp,
                                     const array<real32_T, 1U> &orientation)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &fe_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= orientation.size(0) - 1)) {
    if (!muSingleScalarIsNaN(orientation[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &f_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonNaN",
        "MATLAB:ORBPoints:expectedNonNaN", 3, 4, 11, "Orientation");
  }
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= orientation.size(0) - 1)) {
    if ((!muSingleScalarIsInf(orientation[k])) &&
        (!muSingleScalarIsNaN(orientation[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:ORBPoints:expectedFinite", 3, 4, 11, "Orientation");
  }
}

void ORBPointsImpl::checkScale(const emlrtStack &sp,
                               const array<real32_T, 1U> &scale)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ee_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= scale.size(0) - 1)) {
    if (!muSingleScalarIsNaN(scale[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &f_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonNaN",
        "MATLAB:ORBPoints:expectedNonNaN", 3, 4, 5, "Scale");
  }
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= scale.size(0) - 1)) {
    if ((!muSingleScalarIsInf(scale[k])) && (!muSingleScalarIsNaN(scale[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:ORBPoints:expectedFinite", 3, 4, 5, "Scale");
  }
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= scale.size(0) - 1)) {
    if (scale[k] >= 1.0F) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &j_emlrtRTEI,
                                  "MATLAB:validateattributes:expectedArray",
                                  "MATLAB:ORBPoints:notGreaterEqual", 9, 4, 5,
                                  "Scale", 4, 2, ">=", 4, 1, "1");
  }
}

void ORBPointsImpl::validate(const emlrtStack &sp,
                             const array<real32_T, 2U> &inputs_Location,
                             const array<real32_T, 1U> &inputs_Metric,
                             const array<real32_T, 1U> &inputs_Scale,
                             const array<real32_T, 1U> &inputs_Orientation)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &rd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &wd_emlrtRSI;
  FeaturePointsImpl::checkLocation(b_st, inputs_Location);
  b_st.site = &xd_emlrtRSI;
  FeaturePointsImpl::checkMetric(b_st, inputs_Metric);
  b_st.site = &yd_emlrtRSI;
  if ((inputs_Metric.size(0) != 1) &&
      (inputs_Metric.size(0) != inputs_Location.size(0))) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &e_emlrtRTEI, "vision:FeaturePoints:invalidParamLength",
        "vision:FeaturePoints:invalidParamLength", 3, 4, 6, "Metric");
  }
  st.site = &sd_emlrtRSI;
  ORBPointsImpl::checkScale(st, inputs_Scale);
  st.site = &td_emlrtRSI;
  ORBPointsImpl::checkOrientation(st, inputs_Orientation);
  st.site = &ud_emlrtRSI;
  if ((inputs_Scale.size(0) != 1) &&
      (inputs_Scale.size(0) != inputs_Location.size(0))) {
    emlrtErrorWithMessageIdR2018a(
        &st, &e_emlrtRTEI, "vision:FeaturePoints:invalidParamLength",
        "vision:FeaturePoints:invalidParamLength", 3, 4, 5, "Scale");
  }
  st.site = &vd_emlrtRSI;
  if ((inputs_Orientation.size(0) != 1) &&
      (inputs_Orientation.size(0) != inputs_Location.size(0))) {
    emlrtErrorWithMessageIdR2018a(
        &st, &e_emlrtRTEI, "vision:FeaturePoints:invalidParamLength",
        "vision:FeaturePoints:invalidParamLength", 3, 4, 11, "Orientation");
  }
}

} // namespace coder

// End of code generation (ORBPointsImpl.cpp)
