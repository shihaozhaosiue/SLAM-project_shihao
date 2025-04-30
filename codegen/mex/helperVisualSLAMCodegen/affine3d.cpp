//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// affine3d.cpp
//
// Code generation for function 'affine3d'
//

// Include files
#include "affine3d.h"
#include "det.h"
#include "rt_nonfinite.h"
#include "validateattributes.h"
#include <algorithm>

// Variable Definitions
static emlrtRSInfo txb_emlrtRSI{
    49,                  // lineNo
    "affine3d/affine3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\affine3d.m" // pathName
};

static emlrtRSInfo uxb_emlrtRSI{
    50,                  // lineNo
    "affine3d/affine3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\affine3d.m" // pathName
};

static emlrtRSInfo vxb_emlrtRSI{
    82,                          // lineNo
    "affine3dImpl/affine3dImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+"
    "internal\\affine3dImpl.m" // pathName
};

static emlrtRSInfo wxb_emlrtRSI{
    285,                  // lineNo
    "affine3dImpl/set.T", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+"
    "internal\\affine3dImpl.m" // pathName
};

static emlrtRSInfo xxb_emlrtRSI{
    291,                  // lineNo
    "affine3dImpl/set.T", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+"
    "internal\\affine3dImpl.m" // pathName
};

static emlrtRTEInfo wd_emlrtRTEI{
    292,                  // lineNo
    21,                   // colNo
    "affine3dImpl/set.T", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+"
    "internal\\affine3dImpl.m" // pName
};

static emlrtRTEInfo xd_emlrtRTEI{
    307,                  // lineNo
    17,                   // colNo
    "affine3dImpl/set.T", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+"
    "internal\\affine3dImpl.m" // pName
};

// Function Definitions
namespace coder {
void affine3d::init(const emlrtStack &sp, const real32_T varargin_1[16])
{
  static const int8_T varargin_2[4]{0, 0, 0, 1};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  real32_T x1;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  st.site = &txb_emlrtRSI;
  b_st.site = &vxb_emlrtRSI;
  c_st.site = &wxb_emlrtRSI;
  validateattributes(c_st, varargin_1);
  c_st.site = &xxb_emlrtRSI;
  x1 = b_det(c_st, varargin_1);
  if (x1 == 0.0F) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &wd_emlrtRTEI, "images:geotrans:singularTransformationMatrix",
        "images:geotrans:singularTransformationMatrix", 0);
  }
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (!(static_cast<real_T>(varargin_1[k + 12]) == varargin_2[k])) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &xd_emlrtRTEI,
                                  "images:geotrans:invalidAffineMatrix",
                                  "images:geotrans:invalidAffineMatrix", 0);
  }
  std::copy(&varargin_1[0], &varargin_1[16], &T[0]);
  st.site = &uxb_emlrtRSI;
  b_st.site = &vxb_emlrtRSI;
  c_st.site = &wxb_emlrtRSI;
  validateattributes(c_st, varargin_1);
  c_st.site = &xxb_emlrtRSI;
  x1 = b_det(c_st, varargin_1);
  if (x1 == 0.0F) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &wd_emlrtRTEI, "images:geotrans:singularTransformationMatrix",
        "images:geotrans:singularTransformationMatrix", 0);
  }
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (!(static_cast<real_T>(varargin_1[k + 12]) == varargin_2[k])) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &xd_emlrtRTEI,
                                  "images:geotrans:invalidAffineMatrix",
                                  "images:geotrans:invalidAffineMatrix", 0);
  }
}

} // namespace coder

// End of code generation (affine3d.cpp)
