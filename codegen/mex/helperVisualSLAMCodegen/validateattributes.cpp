//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// validateattributes.cpp
//
// Code generation for function 'validateattributes'
//

// Include files
#include "validateattributes.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Function Definitions
namespace coder {
void validateattributes(const emlrtStack &sp, const array<uint32_T, 2U> &a)
{
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= a.size(1) - 1)) {
    if (a[k] > 0U) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:pointTrack:expectedPositive", 3, 4, 14, "featureIndices");
  }
}

void validateattributes(const emlrtStack &sp, const real32_T a[16])
{
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 16)) {
    if ((!muSingleScalarIsInf(a[k])) && (!muSingleScalarIsNaN(a[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:affine3d:set:T:expectedFinite", 3, 4, 1, "T");
  }
  st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 16)) {
    if (!muSingleScalarIsNaN(a[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &f_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonNaN",
        "MATLAB:affine3d:set:T:expectedNonNaN", 3, 4, 1, "T");
  }
}

void validateattributes(const emlrtStack &sp, const array<real_T, 1U> &a)
{
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= a.size(0) - 1)) {
    if ((!muDoubleScalarIsInf(a[k])) && (!muDoubleScalarIsNaN(a[k])) &&
        (muDoubleScalarFloor(a[k]) == a[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &qc_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedInteger",
        "MATLAB:pointTrack:expectedInteger", 3, 4, 14, "featureIndices");
  }
  st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= a.size(0) - 1)) {
    if (!(a[k] <= 0.0)) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:pointTrack:expectedPositive", 3, 4, 14, "featureIndices");
  }
}

void validateattributes(const emlrtStack &sp, const array<real32_T, 2U> &a)
{
  static real_T dv[2]{0.0, 2.0};
  emlrtStack st;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  dv[0U] = rtNaN;
  st.site = &be_emlrtRSI;
  p = true;
  for (int32_T k{0}; k < 2; k++) {
    if (p) {
      real_T d;
      d = dv[k];
      if ((!(d != d)) && (a.size(k) != 2)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:visualWords:incorrectSize", 3, 4, 25,
        "Input number 2, Location,");
  }
}

} // namespace coder

// End of code generation (validateattributes.cpp)
