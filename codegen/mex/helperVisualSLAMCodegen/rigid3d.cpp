//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rigid3d.cpp
//
// Code generation for function 'rigid3d'
//

// Include files
#include "rigid3d.h"
#include "anyNonFinite.h"
#include "det.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "xzsvdc.h"
#include "mwmathutil.h"
#include <cmath>

// Variable Definitions
static emlrtRSInfo rxb_emlrtRSI{
    315,                                       // lineNo
    "rigid3dImpl/isTransformationMatrixRigid", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+"
    "internal\\rigid3dImpl.m" // pathName
};

static emlrtRSInfo sxb_emlrtRSI{
    317,                                       // lineNo
    "rigid3dImpl/isTransformationMatrixRigid", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+"
    "internal\\rigid3dImpl.m" // pathName
};

// Function Definitions
namespace coder {
boolean_T rigid3d::isTransformationMatrixRigid(const emlrtStack &sp,
                                               const real32_T T[16])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T exponent;
  int32_T i;
  int32_T idx;
  int32_T k;
  real32_T rot[9];
  real32_T s[3];
  real32_T absx;
  real32_T b_ex;
  real32_T ex;
  boolean_T exitg1;
  boolean_T isRigid;
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
  for (i = 0; i < 3; i++) {
    idx = i << 2;
    rot[3 * i] = T[idx];
    rot[3 * i + 1] = T[idx + 1];
    rot[3 * i + 2] = T[idx + 2];
  }
  st.site = &rxb_emlrtRSI;
  b_st.site = &am_emlrtRSI;
  isRigid = !internal::anyNonFinite(rot);
  if (isRigid) {
    real32_T b_rot[9];
    b_st.site = &et_emlrtRSI;
    c_st.site = &jp_emlrtRSI;
    d_st.site = &kp_emlrtRSI;
    for (int32_T i1{0}; i1 < 9; i1++) {
      b_rot[i1] = rot[i1];
    }
    e_st.site = &lp_emlrtRSI;
    internal::reflapack::xzsvdc(e_st, b_rot, s);
  } else {
    s[0] = rtNaNF;
    s[1] = rtNaNF;
    s[2] = rtNaNF;
  }
  isRigid = !muSingleScalarIsNaN(s[0]);
  if (isRigid) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (!muSingleScalarIsNaN(s[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (idx == 0) {
    ex = s[0];
  } else {
    ex = s[idx - 1];
    i = idx + 1;
    for (k = i; k < 4; k++) {
      absx = s[k - 1];
      if (ex < absx) {
        ex = absx;
      }
    }
  }
  if (isRigid) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (!muSingleScalarIsNaN(s[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (idx == 0) {
    b_ex = s[0];
  } else {
    b_ex = s[idx - 1];
    i = idx + 1;
    for (k = i; k < 4; k++) {
      absx = s[k - 1];
      if (b_ex > absx) {
        b_ex = absx;
      }
    }
  }
  absx = muSingleScalarAbs(ex);
  if (muSingleScalarIsInf(absx) || muSingleScalarIsNaN(absx)) {
    absx = rtNaNF;
  } else if (absx < 2.3509887E-38F) {
    absx = 1.4013E-45F;
  } else {
    std::frexp(absx, &exponent);
    absx = std::ldexp(1.0F, exponent - 24);
  }
  if (ex - b_ex < 1000.0F * absx) {
    st.site = &sxb_emlrtRSI;
    absx = det(st, rot) - 1.0F;
    if (muSingleScalarAbs(absx) < 0.00011920929F) {
      isRigid = true;
    } else {
      isRigid = false;
    }
  } else {
    isRigid = false;
  }
  return isRigid;
}

} // namespace coder

// End of code generation (rigid3d.cpp)
