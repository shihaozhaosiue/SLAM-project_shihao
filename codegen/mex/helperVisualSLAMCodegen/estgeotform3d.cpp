//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// estgeotform3d.cpp
//
// Code generation for function 'estgeotform3d'
//

// Include files
#include "estgeotform3d.h"
#include "any1.h"
#include "det.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "msac.h"
#include "rigidtform3d.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo wcd_emlrtRSI{
    10,              // lineNo
    "estgeotform3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estgeotform3d.m" // pathName
};

static emlrtRSInfo xcd_emlrtRSI{
    98,                              // lineNo
    "algEstimateGeometricTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo ycd_emlrtRSI{
    68,                                // lineNo
    "parseEstimateGeometricTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\parseEstimateGeometricTransform.m" // pathName
};

static emlrtRTEInfo qf_emlrtRTEI{
    106,                    // lineNo
    37,                     // colNo
    "check3DMatchedPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\parseEstimateGeometricTransform.m" // pName
};

// Function Definitions
namespace coder {
void estgeotform3d(const emlrtStack &sp,
                   const array<real32_T, 2U> &matchedPoints1,
                   const array<real32_T, 2U> &matchedPoints2,
                   b_rigidtform3d &tform, array<boolean_T, 2U> &inlierIndex)
{
  array<real32_T, 3U> points;
  array<boolean_T, 1U> b_tmp_data;
  array<boolean_T, 1U> inlierIdx;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T ysize[3];
  int32_T tmatrix_size[2];
  int32_T iy;
  int32_T k;
  int32_T status;
  real32_T tmatrix_data[16];
  uint32_T varargin_1[2];
  uint32_T varargin_2[2];
  int8_T failedMatrix[16];
  boolean_T tmp_data[16];
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &wcd_emlrtRSI;
  b_st.site = &ok_emlrtRSI;
  c_st.site = &ycd_emlrtRSI;
  varargin_1[0] = static_cast<uint32_T>(matchedPoints1.size(0));
  varargin_2[0] = static_cast<uint32_T>(matchedPoints2.size(0));
  varargin_1[1] = 3U;
  varargin_2[1] = 3U;
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
    emlrtErrorWithMessageIdR2018a(&c_st, &qf_emlrtRTEI,
                                  "vision:points:numPtsMismatch",
                                  "vision:points:numPtsMismatch", 6, 4, 14,
                                  "matchedPoints1", 4, 14, "matchedPoints2");
  }
  status = (matchedPoints1.size(0) < 3);
  for (iy = 0; iy < 16; iy++) {
    failedMatrix[iy] = 0;
  }
  failedMatrix[0] = 1;
  failedMatrix[5] = 1;
  failedMatrix[10] = 1;
  failedMatrix[15] = 1;
  if (status == 0) {
    int32_T j;
    real32_T x1;
    boolean_T guard1;
    b_st.site = &pk_emlrtRSI;
    ysize[0] = matchedPoints1.size(0);
    ysize[1] = 3;
    ysize[2] = 2;
    j = 0;
    exitg1 = false;
    while ((!exitg1) && (j < 2)) {
      if (ysize[j] != matchedPoints1.size(j)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &x_emlrtRTEI, "Coder:MATLAB:catenate_dimensionMismatch",
            "Coder:MATLAB:catenate_dimensionMismatch", 0);
      } else {
        j++;
      }
    }
    j = 0;
    exitg1 = false;
    while ((!exitg1) && (j < 2)) {
      if (ysize[j] != matchedPoints2.size(j)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &x_emlrtRTEI, "Coder:MATLAB:catenate_dimensionMismatch",
            "Coder:MATLAB:catenate_dimensionMismatch", 0);
      } else {
        j++;
      }
    }
    points.set_size(&co_emlrtRTEI, &b_st, matchedPoints1.size(0), 3, 2);
    k = matchedPoints1.size(0) * 3;
    c_st.site = &bl_emlrtRSI;
    if (k > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (j = 0; j < k; j++) {
      points[j] = matchedPoints1[j];
    }
    if (k - 1 < 0) {
      iy = -1;
    } else {
      iy = k + -1;
    }
    k = matchedPoints2.size(0) * 3;
    c_st.site = &bl_emlrtRSI;
    if (k > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (j = 0; j < k; j++) {
      points[(iy + j) + 1] = matchedPoints2[j];
    }
    b_st.site = &qk_emlrtRSI;
    p = vision::internal::ransac::d_msac(b_st, points, tmatrix_data,
                                         tmatrix_size, inlierIdx);
    k = inlierIdx.size(0);
    inlierIndex.set_size(&do_emlrtRTEI, &st, inlierIdx.size(0), 1);
    for (iy = 0; iy < k; iy++) {
      inlierIndex[iy] = inlierIdx[iy];
    }
    if (!p) {
      status = 2;
    }
    b_st.site = &rk_emlrtRSI;
    x1 = det(b_st, tmatrix_data, tmatrix_size);
    guard1 = false;
    if (x1 == 0.0F) {
      guard1 = true;
    } else {
      k = tmatrix_size[0] * tmatrix_size[1];
      for (iy = 0; iy < k; iy++) {
        x1 = tmatrix_data[iy];
        tmp_data[iy] = (muSingleScalarIsInf(x1) || muSingleScalarIsNaN(x1));
      }
      b_tmp_data.set(&tmp_data[0], k);
      b_st.site = &rk_emlrtRSI;
      if (any(b_st, b_tmp_data)) {
        guard1 = true;
      }
    }
    if (guard1) {
      status = 2;
      tmatrix_size[0] = 4;
      tmatrix_size[1] = 4;
      for (iy = 0; iy < 16; iy++) {
        tmatrix_data[iy] = failedMatrix[iy];
      }
    }
  } else {
    inlierIndex.set_size(&bo_emlrtRTEI, &st, matchedPoints1.size(0),
                         matchedPoints1.size(0));
    k = matchedPoints1.size(0) * matchedPoints1.size(0);
    for (iy = 0; iy < k; iy++) {
      inlierIndex[iy] = false;
    }
    tmatrix_size[0] = 4;
    tmatrix_size[1] = 4;
    for (iy = 0; iy < 16; iy++) {
      tmatrix_data[iy] = failedMatrix[iy];
    }
  }
  if (status != 0) {
    tmatrix_size[0] = 4;
    tmatrix_size[1] = 4;
    for (iy = 0; iy < 16; iy++) {
      tmatrix_data[iy] = failedMatrix[iy];
    }
  }
  b_st.site = &sk_emlrtRSI;
  if (status == 1) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &y_emlrtRTEI, "vision:points:notEnoughMatchedPts",
        "vision:points:notEnoughMatchedPts", 8, 4, 14, "matchedPoints1", 4, 14,
        "matchedPoints2", 6, 3.0);
  } else if (status == 2) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &ab_emlrtRTEI, "vision:points:notEnoughInlierMatches",
        "vision:points:notEnoughInlierMatches", 6, 4, 14, "matchedPoints1", 4,
        14, "matchedPoints2");
  }
  b_st.site = &xcd_emlrtRSI;
  tform.init(b_st, tmatrix_data, tmatrix_size);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (estgeotform3d.cpp)
