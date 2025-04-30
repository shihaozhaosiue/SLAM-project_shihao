//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// world2img.cpp
//
// Code generation for function 'world2img'
//

// Include files
#include "world2img.h"
#include "bsxfun.h"
#include "cameraIntrinsics.h"
#include "cameraIntrinsicsArray.h"
#include "helperVisualSLAMCodegen.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rigidtform3d.h"
#include "rigidtform3dImpl.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo
    coc_emlrtRSI{
        10,          // lineNo
        "world2img", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\world2img.m" // pathName
    };

static emlrtRSInfo
    doc_emlrtRSI{
        15,          // lineNo
        "world2img", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\world2img.m" // pathName
    };

static emlrtRSInfo
    eoc_emlrtRSI{
        22,          // lineNo
        "world2img", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\world2img.m" // pathName
    };

static emlrtRSInfo
    foc_emlrtRSI{
        28,          // lineNo
        "world2img", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\world2img.m" // pathName
    };

static emlrtRSInfo goc_emlrtRSI{
    20,                      // lineNo
    "worldToImageTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\worldToImageTransform.m" // pathName
};

static emlrtRSInfo hoc_emlrtRSI{
    27,                      // lineNo
    "worldToImageTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\worldToImageTransform.m" // pathName
};

static emlrtRSInfo ioc_emlrtRSI{
    60,                              // lineNo
    "mapImagePlaneCameraIntrinsics", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\worldToImageTransform.m" // pathName
};

static emlrtRSInfo joc_emlrtRSI{
    61,                              // lineNo
    "mapImagePlaneCameraIntrinsics", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\worldToImageTransform.m" // pathName
};

static emlrtECInfo pd_emlrtECI{
    1,                               // nDims
    100,                             // lineNo
    20,                              // colNo
    "mapImagePlaneCameraIntrinsics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\worldToImageTransform.m" // pName
};

static emlrtECInfo qd_emlrtECI{
    1,                               // nDims
    96,                              // lineNo
    25,                              // colNo
    "mapImagePlaneCameraIntrinsics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\worldToImageTransform.m" // pName
};

static emlrtRTEInfo glb_emlrtRTEI{
    18,                      // lineNo
    5,                       // colNo
    "parseProjectionInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\parseProjectionInputs.m" // pName
};

static emlrtRTEInfo hlb_emlrtRTEI{
    61,                      // lineNo
    35,                      // colNo
    "worldToImageTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\worldToImageTransform.m" // pName
};

static emlrtRTEInfo ilb_emlrtRTEI{
    62,                      // lineNo
    5,                       // colNo
    "worldToImageTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\worldToImageTransform.m" // pName
};

static emlrtRTEInfo jlb_emlrtRTEI{
    90,                      // lineNo
    1,                       // colNo
    "worldToImageTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\worldToImageTransform.m" // pName
};

static emlrtRTEInfo klb_emlrtRTEI{
    95,                      // lineNo
    5,                       // colNo
    "worldToImageTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\worldToImageTransform.m" // pName
};

static emlrtRTEInfo llb_emlrtRTEI{
    96,                      // lineNo
    26,                      // colNo
    "worldToImageTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\worldToImageTransform.m" // pName
};

static emlrtRTEInfo mlb_emlrtRTEI{
    97,                      // lineNo
    12,                      // colNo
    "worldToImageTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\worldToImageTransform.m" // pName
};

static emlrtRTEInfo nlb_emlrtRTEI{
    98,                      // lineNo
    12,                      // colNo
    "worldToImageTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\worldToImageTransform.m" // pName
};

static emlrtRTEInfo olb_emlrtRTEI{
    99,                      // lineNo
    12,                      // colNo
    "worldToImageTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\worldToImageTransform.m" // pName
};

static emlrtRSInfo pid_emlrtRSI{
    100,                             // lineNo
    "mapImagePlaneCameraIntrinsics", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\worldToImageTransform.m" // pathName
};

static emlrtRSInfo qid_emlrtRSI{
    96,                              // lineNo
    "mapImagePlaneCameraIntrinsics", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\worldToImageTransform.m" // pathName
};

// Function Definitions
namespace coder {
void b_world2img(const emlrtStack &sp, const real32_T worldPoints[3],
                 const b_rigidtform3d &varargin_1,
                 const cameraIntrinsics &varargin_2, real32_T varargout_1[2])
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T varargin_1_tmp;
  real32_T b_varargin_1[12];
  real32_T b_varargin_2[12];
  real32_T b_worldPoints[4];
  real32_T projectedPoints[3];
  real32_T f;
  real32_T f1;
  real32_T f2;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &eoc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &be_emlrtRSI;
  if (varargin_2.cameraIntrinsicsArrayData.size(0) *
          varargin_2.cameraIntrinsicsArrayData.size(1) !=
      1) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &ob_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedScalar",
        "MATLAB:world2img:expectedScalar", 3, 4, 10, "intrinsics");
  }
  st.site = &foc_emlrtRSI;
  for (int32_T i{0}; i < 3; i++) {
    b_varargin_1[3 * i] = varargin_1.R[3 * i];
    varargin_1_tmp = 3 * i + 1;
    b_varargin_1[varargin_1_tmp] = varargin_1.R[varargin_1_tmp];
    varargin_1_tmp = 3 * i + 2;
    b_varargin_1[varargin_1_tmp] = varargin_1.R[varargin_1_tmp];
    b_varargin_1[i + 9] = varargin_1.Translation[i];
    b_worldPoints[i] = worldPoints[i];
  }
  for (int32_T i{0}; i < 4; i++) {
    f = b_varargin_1[3 * i];
    f1 = b_varargin_1[3 * i + 1];
    f2 = b_varargin_1[3 * i + 2];
    for (varargin_1_tmp = 0; varargin_1_tmp < 3; varargin_1_tmp++) {
      b_varargin_2[i + (varargin_1_tmp << 2)] =
          (static_cast<real32_T>(varargin_2.K[varargin_1_tmp]) * f +
           static_cast<real32_T>(varargin_2.K[varargin_1_tmp + 3]) * f1) +
          static_cast<real32_T>(varargin_2.K[varargin_1_tmp + 6]) * f2;
    }
  }
  f = b_worldPoints[0];
  f1 = b_worldPoints[1];
  f2 = b_worldPoints[2];
  for (int32_T i{0}; i < 3; i++) {
    varargin_1_tmp = i << 2;
    projectedPoints[i] = ((f * b_varargin_2[varargin_1_tmp] +
                           f1 * b_varargin_2[varargin_1_tmp + 1]) +
                          f2 * b_varargin_2[varargin_1_tmp + 2]) +
                         b_varargin_2[varargin_1_tmp + 3];
  }
  varargout_1[0] = projectedPoints[0] / projectedPoints[2];
  varargout_1[1] = projectedPoints[1] / projectedPoints[2];
}

void world2img(const emlrtStack &sp, const array<real32_T, 2U> &worldPoints,
               const c_rigidtform3d &varargin_1,
               const cameraIntrinsics &varargin_2,
               array<real32_T, 2U> &varargout_1,
               array<boolean_T, 1U> &varargout_2)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  array<real_T, 2U> b_projectedPoints;
  array<real_T, 2U> b_result;
  array<real_T, 2U> imagePointsTmp;
  array<real_T, 2U> projectedPoints;
  array<real_T, 1U> c_projectedPoints;
  array<boolean_T, 1U> b_r;
  array<boolean_T, 1U> isInFrontOfCamera;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T b_varargin_1[12];
  real_T cameraMatrix[12];
  real_T alpha1;
  real_T beta1;
  real_T d;
  int32_T loop_ub_tmp;
  int32_T result;
  int32_T varargin_1_tmp;
  char_T TRANSA1;
  char_T TRANSB1;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &coc_emlrtRSI;
  b_st.site = &be_emlrtRSI;
  if (worldPoints.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &kc_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedNonempty",
        "MATLAB:world2img:expectedNonempty", 3, 4, 11, "worldPoints");
  }
  st.site = &doc_emlrtRSI;
  b_st.site = &be_emlrtRSI;
  if (varargin_1.Data.size[0] * varargin_1.Data.size[1] != 1) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &ob_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedScalar",
        "MATLAB:world2img:expectedScalar", 3, 4, 5, "tform");
  }
  st.site = &eoc_emlrtRSI;
  b_st.site = &be_emlrtRSI;
  c_st.site = &wr_emlrtRSI;
  if (varargin_2.cameraIntrinsicsArrayData.size(0) *
          varargin_2.cameraIntrinsicsArrayData.size(1) !=
      1) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &ob_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedScalar",
        "MATLAB:world2img:expectedScalar", 3, 4, 10, "intrinsics");
  }
  st.site = &foc_emlrtRSI;
  b_st.site = &goc_emlrtRSI;
  result = worldPoints.size(0);
  projectedPoints.set_size(&glb_emlrtRTEI, &b_st, worldPoints.size(0), 3);
  loop_ub_tmp = worldPoints.size(0) * 3;
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    projectedPoints[i] = worldPoints[i];
  }
  for (int32_T i{0}; i < 3; i++) {
    b_varargin_1[3 * i] = varargin_1.R[3 * i];
    varargin_1_tmp = 3 * i + 1;
    b_varargin_1[varargin_1_tmp] = varargin_1.R[varargin_1_tmp];
    varargin_1_tmp = 3 * i + 2;
    b_varargin_1[varargin_1_tmp] = varargin_1.R[varargin_1_tmp];
    b_varargin_1[i + 9] = varargin_1.Translation[i];
  }
  for (int32_T i{0}; i < 3; i++) {
    d = varargin_2.K[i];
    alpha1 = varargin_2.K[i + 3];
    beta1 = varargin_2.K[i + 6];
    for (loop_ub_tmp = 0; loop_ub_tmp < 4; loop_ub_tmp++) {
      cameraMatrix[i + 3 * loop_ub_tmp] =
          (d * b_varargin_1[3 * loop_ub_tmp] +
           alpha1 * b_varargin_1[3 * loop_ub_tmp + 1]) +
          beta1 * b_varargin_1[3 * loop_ub_tmp + 2];
    }
  }
  b_st.site = &hoc_emlrtRSI;
  c_st.site = &ioc_emlrtRSI;
  d_st.site = &kn_emlrtRSI;
  e_st.site = &jj_emlrtRSI;
  varargin_1_tmp = worldPoints.size(0);
  b_result.set_size(&rr_emlrtRTEI, &d_st, worldPoints.size(0), 4);
  for (int32_T i{0}; i < 3; i++) {
    for (loop_ub_tmp = 0; loop_ub_tmp < result; loop_ub_tmp++) {
      b_result[loop_ub_tmp + b_result.size(0) * i] =
          projectedPoints[loop_ub_tmp + varargin_1_tmp * i];
    }
  }
  for (int32_T i{0}; i < result; i++) {
    b_result[i + b_result.size(0) * 3] = 1.0;
  }
  c_st.site = &ioc_emlrtRSI;
  d_st.site = &mn_emlrtRSI;
  d_st.site = &ln_emlrtRSI;
  e_st.site = &nn_emlrtRSI;
  f_st.site = &on_emlrtRSI;
  TRANSB1 = 'T';
  TRANSA1 = 'N';
  alpha1 = 1.0;
  beta1 = 0.0;
  m_t = (ptrdiff_t)projectedPoints.size(0);
  n_t = (ptrdiff_t)3;
  k_t = (ptrdiff_t)4;
  lda_t = (ptrdiff_t)projectedPoints.size(0);
  ldb_t = (ptrdiff_t)3;
  ldc_t = (ptrdiff_t)projectedPoints.size(0);
  projectedPoints.set_size(&tn_emlrtRTEI, &f_st, worldPoints.size(0), 3);
  dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &(b_result.data())[0],
        &lda_t, &cameraMatrix[0], &ldb_t, &beta1, &(projectedPoints.data())[0],
        &ldc_t);
  result = projectedPoints.size(0);
  b_projectedPoints.set_size(&hlb_emlrtRTEI, &b_st, projectedPoints.size(0), 2);
  for (int32_T i{0}; i < 2; i++) {
    for (loop_ub_tmp = 0; loop_ub_tmp < result; loop_ub_tmp++) {
      b_projectedPoints[loop_ub_tmp + b_projectedPoints.size(0) * i] =
          projectedPoints[loop_ub_tmp + projectedPoints.size(0) * i];
    }
  }
  c_projectedPoints.set_size(&ilb_emlrtRTEI, &b_st, projectedPoints.size(0));
  for (int32_T i{0}; i < result; i++) {
    c_projectedPoints[i] = projectedPoints[i + projectedPoints.size(0) * 2];
  }
  c_st.site = &joc_emlrtRSI;
  bsxfun(c_st, b_projectedPoints, c_projectedPoints, imagePointsTmp);
  varargin_1_tmp = imagePointsTmp.size(0);
  varargout_1.set_size(&jlb_emlrtRTEI, &b_st, imagePointsTmp.size(0), 2);
  loop_ub_tmp = imagePointsTmp.size(0) << 1;
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    varargout_1[i] = static_cast<real32_T>(imagePointsTmp[i]);
  }
  isInFrontOfCamera.set_size(&klb_emlrtRTEI, &b_st, projectedPoints.size(0));
  for (int32_T i{0}; i < result; i++) {
    isInFrontOfCamera[i] =
        (projectedPoints[i + projectedPoints.size(0) * 2] > 0.0);
  }
  varargout_2.set_size(&llb_emlrtRTEI, &b_st, imagePointsTmp.size(0));
  alpha1 = varargin_2.ImageSize[1];
  b_r.set_size(&mlb_emlrtRTEI, &b_st, imagePointsTmp.size(0));
  for (int32_T i{0}; i < varargin_1_tmp; i++) {
    d = imagePointsTmp[i];
    varargout_2[i] = (d >= 0.0);
    b_r[i] = (d <= alpha1);
  }
  for (int32_T i{0}; i < varargin_1_tmp; i++) {
    varargout_2[i] = (varargout_2[i] && b_r[i]);
  }
  b_r.set_size(&nlb_emlrtRTEI, &b_st, imagePointsTmp.size(0));
  for (int32_T i{0}; i < varargin_1_tmp; i++) {
    b_r[i] = (imagePointsTmp[i + imagePointsTmp.size(0)] >= 0.0);
  }
  if (varargout_2.size(0) == b_r.size(0)) {
    for (int32_T i{0}; i < varargin_1_tmp; i++) {
      varargout_2[i] = (varargout_2[i] && b_r[i]);
    }
  } else {
    c_st.site = &qid_emlrtRSI;
    c_and(c_st, varargout_2, b_r);
  }
  alpha1 = varargin_2.ImageSize[0];
  b_r.set_size(&olb_emlrtRTEI, &b_st, imagePointsTmp.size(0));
  for (int32_T i{0}; i < varargin_1_tmp; i++) {
    b_r[i] = (imagePointsTmp[i + imagePointsTmp.size(0)] <= alpha1);
  }
  result = varargout_2.size(0);
  if ((varargout_2.size(0) != imagePointsTmp.size(0)) &&
      ((varargout_2.size(0) != 1) && (imagePointsTmp.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(varargout_2.size(0), imagePointsTmp.size(0),
                                &qd_emlrtECI, &b_st);
  }
  if (varargout_2.size(0) == b_r.size(0)) {
    for (int32_T i{0}; i < result; i++) {
      varargout_2[i] = (varargout_2[i] && b_r[i]);
    }
  } else {
    c_st.site = &qid_emlrtRSI;
    c_and(c_st, varargout_2, b_r);
  }
  result = varargout_2.size(0);
  if ((varargout_2.size(0) != projectedPoints.size(0)) &&
      ((varargout_2.size(0) != 1) && (projectedPoints.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(varargout_2.size(0), projectedPoints.size(0),
                                &pd_emlrtECI, &b_st);
  }
  if (varargout_2.size(0) == isInFrontOfCamera.size(0)) {
    for (int32_T i{0}; i < result; i++) {
      varargout_2[i] = (varargout_2[i] && isInFrontOfCamera[i]);
    }
  } else {
    c_st.site = &pid_emlrtRSI;
    c_and(c_st, varargout_2, isInFrontOfCamera);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (world2img.cpp)
