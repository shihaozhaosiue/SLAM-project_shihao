//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// estgeotform2d.cpp
//
// Code generation for function 'estgeotform2d'
//

// Include files
#include "estgeotform2d.h"
#include "any1.h"
#include "checkTransformationMatrixCondition.h"
#include "det.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "msac.h"
#include "norm.h"
#include "projtform2d.h"
#include "rcond.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo nk_emlrtRSI{
    10,              // lineNo
    "estgeotform2d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estgeotform2d.m" // pathName
};

static emlrtRSInfo tk_emlrtRSI{
    87,                              // lineNo
    "algEstimateGeometricTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo uk_emlrtRSI{
    63,                                // lineNo
    "parseEstimateGeometricTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\parseEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo
    dp_emlrtRSI{
        30,                        // lineNo
        "projtform2d/projtform2d", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\projtform2d.m" // pathName
    };

static emlrtBCInfo hd_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    87,                              // lineNo
    41,                              // colNo
    "",                              // aName
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m", // pName
    0                                            // checkKind
};

static emlrtBCInfo id_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    87,                              // lineNo
    45,                              // colNo
    "",                              // aName
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m", // pName
    0                                            // checkKind
};

// Function Definitions
namespace coder {
void estgeotform2d(const emlrtStack &sp,
                   const array<real32_T, 2U> &matchedPoints1,
                   const array<real32_T, 2U> &matchedPoints2,
                   projtform2d &tform, array<boolean_T, 2U> &inlierIndex)
{
  static real_T dv[2]{0.0, 2.0};
  array<real32_T, 3U> points;
  array<boolean_T, 1U> b_tmp_data;
  array<boolean_T, 1U> inlierIdx;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  real_T d;
  int32_T ysize[3];
  int32_T tmatrix_size[2];
  int32_T iy;
  int32_T j;
  int32_T k;
  int32_T status;
  real32_T b_tform[9];
  real32_T tmatrix_data[9];
  real32_T rc;
  real32_T x;
  real32_T y;
  uint32_T varargin_1[2];
  uint32_T varargin_2[2];
  boolean_T tmp_data[9];
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  dv[0U] = rtNaN;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &nk_emlrtRSI;
  b_st.site = &ok_emlrtRSI;
  c_st.site = &uk_emlrtRSI;
  d_st.site = &vk_emlrtRSI;
  e_st.site = &xk_emlrtRSI;
  f_st.site = &yk_emlrtRSI;
  g_st.site = &al_emlrtRSI;
  h_st.site = &xf_emlrtRSI;
  i_st.site = &be_emlrtRSI;
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
        &i_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:estgeotform2d:incorrectSize", 3, 4, 14, "matchedPoints1");
  }
  d_st.site = &wk_emlrtRSI;
  e_st.site = &xk_emlrtRSI;
  f_st.site = &yk_emlrtRSI;
  g_st.site = &al_emlrtRSI;
  h_st.site = &xf_emlrtRSI;
  i_st.site = &be_emlrtRSI;
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
        &i_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:estgeotform2d:incorrectSize", 3, 4, 14, "matchedPoints2");
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
    emlrtErrorWithMessageIdR2018a(&c_st, &bb_emlrtRTEI,
                                  "vision:points:numPtsMismatch",
                                  "vision:points:numPtsMismatch", 6, 4, 14,
                                  "matchedPoints1", 4, 14, "matchedPoints2");
  }
  status = (matchedPoints1.size(0) < 4);
  for (j = 0; j < 9; j++) {
    tform.A_[j] = 0.0F;
  }
  tform.A_[0] = 1.0F;
  tform.A_[4] = 1.0F;
  tform.A_[8] = 1.0F;
  if (status == 0) {
    boolean_T guard1;
    b_st.site = &pk_emlrtRSI;
    ysize[0] = matchedPoints1.size(0);
    ysize[1] = 2;
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
    points.set_size(&co_emlrtRTEI, &b_st, matchedPoints1.size(0), 2, 2);
    k = matchedPoints1.size(0) << 1;
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
    k = matchedPoints2.size(0) << 1;
    c_st.site = &bl_emlrtRSI;
    if (k > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (j = 0; j < k; j++) {
      points[(iy + j) + 1] = matchedPoints2[j];
    }
    b_st.site = &qk_emlrtRSI;
    p = vision::internal::ransac::msac(b_st, points, tmatrix_data, tmatrix_size,
                                       inlierIdx);
    k = inlierIdx.size(0);
    inlierIndex.set_size(&do_emlrtRTEI, &st, inlierIdx.size(0), 1);
    for (j = 0; j < k; j++) {
      inlierIndex[j] = inlierIdx[j];
    }
    if (!p) {
      status = 2;
    }
    b_st.site = &rk_emlrtRSI;
    rc = det(b_st, tmatrix_data, tmatrix_size);
    guard1 = false;
    if (rc == 0.0F) {
      guard1 = true;
    } else {
      k = tmatrix_size[0] * tmatrix_size[1];
      for (j = 0; j < k; j++) {
        rc = tmatrix_data[j];
        tmp_data[j] = (muSingleScalarIsInf(rc) || muSingleScalarIsNaN(rc));
      }
      b_tmp_data.set(&tmp_data[0], k);
      b_st.site = &rk_emlrtRSI;
      if (any(b_st, b_tmp_data)) {
        guard1 = true;
      }
    }
    if (guard1) {
      status = 2;
      tmatrix_size[0] = 3;
      tmatrix_size[1] = 3;
      for (j = 0; j < 9; j++) {
        tmatrix_data[j] = tform.A_[j];
      }
    }
  } else {
    inlierIndex.set_size(&bo_emlrtRTEI, &st, matchedPoints1.size(0),
                         matchedPoints1.size(0));
    k = matchedPoints1.size(0) * matchedPoints1.size(0);
    for (j = 0; j < k; j++) {
      inlierIndex[j] = false;
    }
    tmatrix_size[0] = 3;
    tmatrix_size[1] = 3;
    for (j = 0; j < 9; j++) {
      tmatrix_data[j] = tform.A_[j];
    }
  }
  if (status != 0) {
    tmatrix_size[0] = 3;
    tmatrix_size[1] = 3;
    for (j = 0; j < 9; j++) {
      tmatrix_data[j] = tform.A_[j];
    }
  }
  b_st.site = &sk_emlrtRSI;
  if (status == 1) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &y_emlrtRTEI, "vision:points:notEnoughMatchedPts",
        "vision:points:notEnoughMatchedPts", 8, 4, 14, "matchedPoints1", 4, 14,
        "matchedPoints2", 6, 4.0);
  } else if (status == 2) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &ab_emlrtRTEI, "vision:points:notEnoughInlierMatches",
        "vision:points:notEnoughInlierMatches", 6, 4, 14, "matchedPoints1", 4,
        14, "matchedPoints2");
  }
  b_st.site = &tk_emlrtRSI;
  j = tmatrix_size[0];
  k = tmatrix_size[1];
  for (status = 0; status < 3; status++) {
    if (j < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, j, &hd_emlrtBCI, &b_st);
    }
    if (status + 1 > k) {
      emlrtDynamicBoundsCheckR2012b(status + 1, 1, k, &id_emlrtBCI, &b_st);
    }
    iy = j * status;
    tform.A_[3 * status] = tmatrix_data[iy];
    if (j < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, 1, &hd_emlrtBCI, &b_st);
    }
    if (status + 1 > k) {
      emlrtDynamicBoundsCheckR2012b(status + 1, 1, k, &id_emlrtBCI, &b_st);
    }
    tform.A_[3 * status + 1] = tmatrix_data[iy + 1];
    if (j < 3) {
      emlrtDynamicBoundsCheckR2012b(3, 1, 2, &hd_emlrtBCI, &b_st);
    }
    if (status + 1 > k) {
      emlrtDynamicBoundsCheckR2012b(status + 1, 1, k, &id_emlrtBCI, &b_st);
    }
    tform.A_[3 * status + 2] = tmatrix_data[iy + 2];
  }
  __m128 b_r;
  c_st.site = &dp_emlrtRSI;
  d_st.site = &fg_emlrtRSI;
  d_st.site = &ep_emlrtRSI;
  e_st.site = &fp_emlrtRSI;
  rc = b_norm(e_st, tform.A_);
  e_st.site = &fp_emlrtRSI;
  y = b_norm(e_st, tform.A_);
  b_r = _mm_loadu_ps(&tform.A_[0]);
  _mm_storeu_ps(&b_tform[0], _mm_sub_ps(b_r, b_r));
  b_r = _mm_loadu_ps(&tform.A_[4]);
  _mm_storeu_ps(&b_tform[4], _mm_sub_ps(b_r, b_r));
  b_tform[8] = tform.A_[8] - tform.A_[8];
  e_st.site = &gp_emlrtRSI;
  x = b_norm(e_st, b_tform);
  if (!(x / muSingleScalarMax(muSingleScalarMax(rc, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  d_st.site = &gg_emlrtRSI;
  if (tmatrix_data[tmatrix_size[0] * 2 + 2] == 1.0F) {
    boolean_T b_x[2];
    b_x[0] = (tform.A_[2] == 0.0F);
    b_x[1] = (tform.A_[5] == 0.0F);
    p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= 1)) {
      if (!b_x[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
    if (p) {
      real32_T c_tform[4];
      e_st.site = &pp_emlrtRSI;
      c_tform[0] = tform.A_[0];
      c_tform[1] = tform.A_[1];
      c_tform[2] = tform.A_[3];
      c_tform[3] = tform.A_[4];
      f_st.site = &rp_emlrtRSI;
      rc = rcond(c_tform);
      p = (rc < 1.1920929E-7F);
    } else {
      e_st.site = &qp_emlrtRSI;
      p = images::geotrans::internal::isBadlyConditioned(e_st, tform.A_);
    }
  } else {
    e_st.site = &qp_emlrtRSI;
    p = images::geotrans::internal::isBadlyConditioned(e_st, tform.A_);
  }
  e_st.site = &bh_emlrtRSI;
  if (p) {
    f_st.site = &ch_emlrtRSI;
    internal::warning(f_st);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (estgeotform2d.cpp)
