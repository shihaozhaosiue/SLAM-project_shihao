//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// estrelpose.cpp
//
// Code generation for function 'estrelpose'
//

// Include files
#include "estrelpose.h"
#include "cameraIntrinsics.h"
#include "cameraIntrinsicsArray.h"
#include "cameraProjection.h"
#include "checkAndConvertMatchedPoints.h"
#include "combineVectorElements.h"
#include "det.h"
#include "estRelPoseImpl.h"
#include "helperVisualSLAMCodegen_data.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "projtform2d.h"
#include "rigidtform3d.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "svd.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo
    bu_emlrtRSI{
        10,           // lineNo
        "estrelpose", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estrelpose.m" // pathName
    };

static emlrtRSInfo cu_emlrtRSI{
    12,               // lineNo
    "estRelPoseImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo du_emlrtRSI{
    29,               // lineNo
    "estRelPoseImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo eu_emlrtRSI{
    30,               // lineNo
    "estRelPoseImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo fu_emlrtRSI{
    33,               // lineNo
    "estRelPoseImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo gu_emlrtRSI{
    62,               // lineNo
    "estRelPoseImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo hu_emlrtRSI{
    68,               // lineNo
    "estRelPoseImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo iu_emlrtRSI{
    69,               // lineNo
    "estRelPoseImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo ju_emlrtRSI{
    70,               // lineNo
    "estRelPoseImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo ku_emlrtRSI{
    74,               // lineNo
    "estRelPoseImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo lu_emlrtRSI{
    64,               // lineNo
    "estRelPoseImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo mu_emlrtRSI{
    134,           // lineNo
    "parseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo nu_emlrtRSI{
    135,           // lineNo
    "parseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo ou_emlrtRSI{
    140,           // lineNo
    "parseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo pu_emlrtRSI{
    15,                          // lineNo
    "decomposeHomographyMatrix", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\decomposeHomographyMatrix.m" // pathName
};

static emlrtRSInfo qu_emlrtRSI{
    17,                          // lineNo
    "decomposeHomographyMatrix", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\decomposeHomographyMatrix.m" // pathName
};

static emlrtRSInfo ru_emlrtRSI{
    42,                          // lineNo
    "decomposeHomographyMatrix", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\decomposeHomographyMatrix.m" // pathName
};

static emlrtRSInfo su_emlrtRSI{
    126,                  // lineNo
    "computeGeneralCase", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\decomposeHomographyMatrix.m" // pathName
};

static emlrtRSInfo tu_emlrtRSI{
    127,                  // lineNo
    "computeGeneralCase", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\decomposeHomographyMatrix.m" // pathName
};

static emlrtRSInfo uu_emlrtRSI{
    132,                  // lineNo
    "computeGeneralCase", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\decomposeHomographyMatrix.m" // pathName
};

static emlrtRSInfo kw_emlrtRSI{
    20,               // lineNo
    "estRelPoseImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo lw_emlrtRSI{
    27,               // lineNo
    "estRelPoseImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo mw_emlrtRSI{
    114,           // lineNo
    "parseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo sw_emlrtRSI{
    15,                         // lineNo
    "decomposeEssentialMatrix", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\decomposeEssentialMatrix.m" // pathName
};

static emlrtRSInfo tw_emlrtRSI{
    22,                         // lineNo
    "decomposeEssentialMatrix", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\decomposeEssentialMatrix.m" // pathName
};

static emlrtRSInfo uw_emlrtRSI{
    32,                         // lineNo
    "decomposeEssentialMatrix", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\decomposeEssentialMatrix.m" // pathName
};

static emlrtRSInfo vw_emlrtRSI{
    36,                         // lineNo
    "decomposeEssentialMatrix", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\decomposeEssentialMatrix.m" // pathName
};

static emlrtRTEInfo ub_emlrtRTEI{
    144,           // lineNo
    1,             // colNo
    "parseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pName
};

static emlrtBCInfo ae_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    73,               // lineNo
    30,               // colNo
    "",               // aName
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo be_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    72,               // lineNo
    62,               // colNo
    "",               // aName
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ce_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    72,               // lineNo
    33,               // colNo
    "",               // aName
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo de_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    71,               // lineNo
    29,               // colNo
    "",               // aName
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ee_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    71,               // lineNo
    40,               // colNo
    "",               // aName
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo fe_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    61,               // lineNo
    29,               // colNo
    "",               // aName
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ge_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    72,               // lineNo
    22,               // colNo
    "",               // aName
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo he_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    71,               // lineNo
    44,               // colNo
    "",               // aName
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ie_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    72,               // lineNo
    37,               // colNo
    "",               // aName
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo je_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    73,               // lineNo
    34,               // colNo
    "",               // aName
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

// Function Definitions
namespace coder {
real_T estrelpose(const emlrtStack &sp, const real32_T M[9],
                  const cameraIntrinsics &varargin_1,
                  const array<real32_T, 2U> &varargin_2,
                  const array<real32_T, 2U> &varargin_3, rigidtform3d &relPose)
{
  static const int8_T b_iv[9]{0, 1, 0, -1, 0, 0, 0, 0, 1};
  static const int8_T b_iv1[9]{0, -1, 0, 1, 0, 0, 0, 0, 1};
  static const int8_T b_iv2[9]{0, -1, 0, 1, 0, 0, 0, 0, 0};
  __m128 b_r;
  __m128 r1;
  b_rigidtform3d r2;
  rigidtform3d r4;
  array<real32_T, 2U> m1;
  array<real32_T, 2U> m2;
  array<real32_T, 2U> y;
  array<boolean_T, 1U> r3;
  array<boolean_T, 1U> x;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T camMatrix1[12];
  real_T K1[9];
  real_T K2[9];
  real_T validPointsFraction;
  int32_T numNegatives[4];
  int32_T t_size[2];
  int32_T acoef;
  int32_T b_k;
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T loop_ub;
  real32_T R_data[36];
  real32_T orientation_data[36];
  real32_T Ts[12];
  real32_T b_camMatrix2[12];
  real32_T camMatrix2[12];
  real32_T D[9];
  real32_T E[9];
  real32_T R1[9];
  real32_T U[9];
  real32_T V[9];
  real32_T b_K2[9];
  real32_T absxk;
  real32_T absxk_tmp;
  real32_T e;
  int8_T ii_data[4];
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &bu_emlrtRSI;
  b_st.site = &cu_emlrtRSI;
  c_st.site = &mw_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 9)) {
    if ((!muSingleScalarIsInf(M[k])) && (!muSingleScalarIsNaN(M[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:estrelpose:expectedFinite", 3, 4, 1, "M");
  }
  c_st.site = &mu_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  i = varargin_1.cameraIntrinsicsArrayData.size(0) *
      varargin_1.cameraIntrinsicsArrayData.size(1);
  if (i != 1) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &ob_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedScalar",
        "MATLAB:estrelpose:expectedScalar", 3, 4, 13, "cameraParams1");
  }
  c_st.site = &nu_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  c_st.site = &ou_emlrtRSI;
  vision::internal::inputValidation::checkAndConvertMatchedPoints(
      c_st, varargin_2, varargin_3);
  if (varargin_2.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &ub_emlrtRTEI, "vision:relativeCameraPose:emptyInlierPoints",
        "vision:relativeCameraPose:emptyInlierPoints", 0);
  }
  for (i = 0; i < 3; i++) {
    validPointsFraction = varargin_1.K[i];
    K1[3 * i] = validPointsFraction;
    K2[3 * i] = validPointsFraction;
    validPointsFraction = varargin_1.K[i + 3];
    acoef = 3 * i + 1;
    K1[acoef] = validPointsFraction;
    K2[acoef] = validPointsFraction;
    validPointsFraction = varargin_1.K[i + 6];
    acoef = 3 * i + 2;
    K1[acoef] = validPointsFraction;
    K2[acoef] = validPointsFraction;
  }
  b_st.site = &kw_emlrtRSI;
  if (vision::internal::calibration::isFundamentalMatrix(b_st, M, varargin_2,
                                                         varargin_3, K1, K2)) {
    for (i = 0; i < 3; i++) {
      real_T d;
      real_T d1;
      validPointsFraction = K2[i];
      d = K2[i + 3];
      d1 = K2[i + 6];
      for (b_k = 0; b_k < 3; b_k++) {
        b_K2[i + 3 * b_k] =
            (static_cast<real32_T>(validPointsFraction) * M[3 * b_k] +
             static_cast<real32_T>(d) * M[3 * b_k + 1]) +
            static_cast<real32_T>(d1) * M[3 * b_k + 2];
      }
      e = b_K2[i];
      absxk_tmp = b_K2[i + 3];
      absxk = b_K2[i + 6];
      for (b_k = 0; b_k < 3; b_k++) {
        E[i + 3 * b_k] = (e * static_cast<real32_T>(K1[b_k]) +
                          absxk_tmp * static_cast<real32_T>(K1[b_k + 3])) +
                         absxk * static_cast<real32_T>(K1[b_k + 6]);
      }
    }
  } else {
    for (i = 0; i < 9; i++) {
      E[i] = M[i];
    }
  }
  b_st.site = &lw_emlrtRSI;
  c_st.site = &sw_emlrtRSI;
  svd(c_st, E, R1, D, V);
  e = (D[0] + D[4]) / 2.0F;
  D[0] = e;
  D[4] = e;
  D[8] = 0.0F;
  for (i = 0; i < 3; i++) {
    e = R1[i];
    absxk_tmp = R1[i + 3];
    absxk = R1[i + 6];
    for (b_k = 0; b_k < 3; b_k++) {
      b_K2[i + 3 * b_k] = (e * D[3 * b_k] + absxk_tmp * D[3 * b_k + 1]) +
                          absxk * D[3 * b_k + 2];
    }
    e = b_K2[i];
    absxk_tmp = b_K2[i + 3];
    absxk = b_K2[i + 6];
    for (b_k = 0; b_k < 3; b_k++) {
      R1[i + 3 * b_k] =
          (e * V[b_k] + absxk_tmp * V[b_k + 3]) + absxk * V[b_k + 6];
    }
  }
  c_st.site = &tw_emlrtRSI;
  svd(c_st, R1, U, E, V);
  for (i = 0; i < 3; i++) {
    e = U[i];
    absxk_tmp = U[i + 3];
    absxk = U[i + 6];
    for (b_k = 0; b_k < 3; b_k++) {
      acoef = i + 3 * b_k;
      E[b_k + 3 * i] = V[acoef];
      b_K2[acoef] = (e * static_cast<real32_T>(b_iv[3 * b_k]) +
                     absxk_tmp * static_cast<real32_T>(b_iv[3 * b_k + 1])) +
                    absxk * static_cast<real32_T>(b_iv[3 * b_k + 2]);
    }
  }
  for (i = 0; i < 3; i++) {
    e = b_K2[i];
    absxk_tmp = b_K2[i + 3];
    absxk = b_K2[i + 6];
    for (b_k = 0; b_k < 3; b_k++) {
      R1[i + 3 * b_k] = (e * E[3 * b_k] + absxk_tmp * E[3 * b_k + 1]) +
                        absxk * E[3 * b_k + 2];
    }
    e = U[i];
    absxk_tmp = U[i + 3];
    absxk = U[i + 6];
    for (b_k = 0; b_k < 3; b_k++) {
      b_K2[i + 3 * b_k] =
          (e * static_cast<real32_T>(b_iv1[3 * b_k]) +
           absxk_tmp * static_cast<real32_T>(b_iv1[3 * b_k + 1])) +
          absxk * static_cast<real32_T>(b_iv1[3 * b_k + 2]);
    }
    e = b_K2[i];
    absxk_tmp = b_K2[i + 3];
    absxk = b_K2[i + 6];
    for (b_k = 0; b_k < 3; b_k++) {
      D[i + 3 * b_k] = (e * E[3 * b_k] + absxk_tmp * E[3 * b_k + 1]) +
                       absxk * E[3 * b_k + 2];
    }
  }
  c_st.site = &uw_emlrtRSI;
  if (det(c_st, R1) < 0.0F) {
    b_r = _mm_loadu_ps(&R1[0]);
    r1 = _mm_set1_ps(-1.0F);
    _mm_storeu_ps(&R1[0], _mm_mul_ps(b_r, r1));
    b_r = _mm_loadu_ps(&R1[4]);
    _mm_storeu_ps(&R1[4], _mm_mul_ps(b_r, r1));
    R1[8] = -R1[8];
  }
  c_st.site = &vw_emlrtRSI;
  if (det(c_st, D) < 0.0F) {
    b_r = _mm_loadu_ps(&D[0]);
    r1 = _mm_set1_ps(-1.0F);
    _mm_storeu_ps(&D[0], _mm_mul_ps(b_r, r1));
    b_r = _mm_loadu_ps(&D[4]);
    _mm_storeu_ps(&D[4], _mm_mul_ps(b_r, r1));
    D[8] = -D[8];
  }
  for (i = 0; i < 3; i++) {
    e = U[i];
    absxk_tmp = U[i + 3];
    absxk = U[i + 6];
    for (b_k = 0; b_k < 3; b_k++) {
      b_K2[i + 3 * b_k] =
          (e * static_cast<real32_T>(b_iv2[3 * b_k]) +
           absxk_tmp * static_cast<real32_T>(b_iv2[3 * b_k + 1])) +
          absxk * static_cast<real32_T>(b_iv2[3 * b_k + 2]);
    }
    e = b_K2[i];
    absxk_tmp = b_K2[i + 3];
    absxk = b_K2[i + 6];
    for (b_k = 0; b_k < 3; b_k++) {
      E[i + 3 * b_k] =
          (e * U[b_k] + absxk_tmp * U[b_k + 3]) + absxk * U[b_k + 6];
    }
  }
  for (j = 0; j < 9; j++) {
    e = R1[j];
    orientation_data[j] = e;
    orientation_data[j + 9] = e;
    e = D[j];
    orientation_data[j + 18] = e;
    orientation_data[j + 27] = e;
  }
  Ts[0] = E[5];
  Ts[1] = -E[5];
  Ts[2] = E[5];
  Ts[3] = -E[5];
  Ts[4] = E[6];
  Ts[5] = -E[6];
  Ts[6] = E[6];
  Ts[7] = -E[6];
  Ts[8] = E[1];
  Ts[9] = -E[1];
  Ts[10] = E[1];
  Ts[11] = -E[1];
  b_st.site = &fu_emlrtRSI;
  c_st.site = &vu_emlrtRSI;
  cameraProjection(c_st, varargin_1, camMatrix1);
  for (j = 0; j < 4; j++) {
    real_T b_camMatrix1[12];
    real32_T b_Ts[3];
    b_Ts[0] = Ts[j];
    b_Ts[1] = Ts[j + 4];
    b_Ts[2] = Ts[j + 8];
    c_st.site = &wu_emlrtRSI;
    r2.init(c_st, &orientation_data[9 * j], b_Ts);
    c_st.site = &wu_emlrtRSI;
    cameraProjection(c_st, varargin_1, r2, camMatrix2);
    for (i = 0; i < 3; i++) {
      acoef = i << 2;
      b_camMatrix1[acoef] = camMatrix1[i];
      b_camMatrix2[acoef] = camMatrix2[i];
      b_camMatrix1[acoef + 1] = camMatrix1[i + 3];
      b_camMatrix2[acoef + 1] = camMatrix2[i + 3];
      b_camMatrix1[acoef + 2] = camMatrix1[i + 6];
      b_camMatrix2[acoef + 2] = camMatrix2[i + 6];
      b_camMatrix1[acoef + 3] = camMatrix1[i + 9];
      b_camMatrix2[acoef + 3] = camMatrix2[i + 9];
    }
    c_st.site = &xu_emlrtRSI;
    vision::internal::calibration::triangulateMidPoint(
        c_st, varargin_2, varargin_3, b_camMatrix1, b_camMatrix2, m1);
    c_st.site = &yu_emlrtRSI;
    d_st.site = &ln_emlrtRSI;
    internal::blas::b_mtimes(d_st, m1, &orientation_data[9 * j], y);
    loop_ub = y.size(0);
    m2.set_size(&jp_emlrtRTEI, &b_st, y.size(0), 3);
    if (y.size(0) != 0) {
      acoef = (y.size(0) != 1);
      for (k = 0; k < 3; k++) {
        for (b_k = 0; b_k < loop_ub; b_k++) {
          m2[b_k + m2.size(0) * k] =
              y[acoef * b_k + y.size(0) * k] + Ts[j + (k << 2)];
        }
      }
    }
    acoef = m1.size(0);
    x.set_size(&vr_emlrtRTEI, &b_st, m1.size(0));
    for (i = 0; i < acoef; i++) {
      x[i] = (m1[i + m1.size(0) * 2] < 0.0F);
    }
    r3.set_size(&wr_emlrtRTEI, &b_st, y.size(0));
    for (i = 0; i < loop_ub; i++) {
      r3[i] = (m2[i + m2.size(0) * 2] < 0.0F);
    }
    if ((m1.size(0) != y.size(0)) && ((m1.size(0) != 1) && (y.size(0) != 1))) {
      emlrtDimSizeImpxCheckR2021b(m1.size(0), y.size(0), &db_emlrtECI, &b_st);
    }
    c_st.site = &av_emlrtRSI;
    if (x.size(0) == r3.size(0)) {
      for (i = 0; i < acoef; i++) {
        x[i] = (x[i] || r3[i]);
      }
    } else {
      d_st.site = &av_emlrtRSI;
      b_or(d_st, x, r3);
    }
    d_st.site = &yn_emlrtRSI;
    e_st.site = &tj_emlrtRSI;
    acoef = combineVectorElements(e_st, x);
    numNegatives[j] = acoef;
  }
  k = numNegatives[0];
  if (numNegatives[0] > numNegatives[1]) {
    k = numNegatives[1];
  }
  if (k > numNegatives[2]) {
    k = numNegatives[2];
  }
  if (k > numNegatives[3]) {
    k = numNegatives[3];
  }
  acoef = 0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 4)) {
    if (numNegatives[j] == k) {
      acoef++;
      ii_data[acoef - 1] = static_cast<int8_T>(j + 1);
      if (acoef >= 4) {
        exitg1 = true;
      } else {
        j++;
      }
    } else {
      j++;
    }
  }
  if (acoef < 1) {
    loop_ub = 0;
  } else {
    loop_ub = acoef;
  }
  validPointsFraction =
      1.0 - static_cast<real_T>(k) / static_cast<real_T>(varargin_2.size(0));
  acoef = 9 * loop_ub;
  if (acoef - 1 >= 0) {
    std::memset(&R_data[0], 0, static_cast<uint32_T>(acoef) * sizeof(real32_T));
  }
  b_k = loop_ub * 3;
  if (b_k - 1 >= 0) {
    std::memset(&b_camMatrix2[0], 0,
                static_cast<uint32_T>(b_k) * sizeof(real32_T));
  }
  for (int32_T n{0}; n < loop_ub; n++) {
    real32_T b_absxk_tmp;
    real32_T c_absxk_tmp;
    real32_T t;
    real32_T tNorm;
    int8_T i1;
    if (n + 1 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(n + 1, 1, loop_ub, &te_emlrtBCI, &b_st);
    }
    i1 = ii_data[n];
    if (n + 1 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(n + 1, 1, loop_ub, &qe_emlrtBCI, &b_st);
    }
    for (i = 0; i < 3; i++) {
      j = i + 9 * (i1 - 1);
      k = 3 * i + 9 * n;
      R_data[k] = orientation_data[j];
      R_data[k + 1] = orientation_data[j + 3];
      R_data[k + 2] = orientation_data[j + 6];
    }
    if (n + 1 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(n + 1, 1, loop_ub, &ue_emlrtBCI, &b_st);
    }
    e = 1.29246971E-26F;
    b_camMatrix2[n] = Ts[i1 - 1];
    absxk_tmp = Ts[i1 - 1];
    absxk = muSingleScalarAbs(absxk_tmp);
    if (absxk > 1.29246971E-26F) {
      tNorm = 1.0F;
      e = absxk;
    } else {
      t = absxk / 1.29246971E-26F;
      tNorm = t * t;
    }
    j = n + loop_ub;
    b_camMatrix2[j] = Ts[i1 + 3];
    b_absxk_tmp = Ts[i1 + 3];
    absxk = muSingleScalarAbs(b_absxk_tmp);
    if (absxk > e) {
      t = e / absxk;
      tNorm = tNorm * t * t + 1.0F;
      e = absxk;
    } else {
      t = absxk / e;
      tNorm += t * t;
    }
    k = n + loop_ub * 2;
    b_camMatrix2[k] = Ts[i1 + 7];
    c_absxk_tmp = Ts[i1 + 7];
    absxk = muSingleScalarAbs(c_absxk_tmp);
    if (absxk > e) {
      t = e / absxk;
      tNorm = tNorm * t * t + 1.0F;
      e = absxk;
    } else {
      t = absxk / e;
      tNorm += t * t;
    }
    tNorm = e * muSingleScalarSqrt(tNorm);
    if (tNorm != 0.0F) {
      if (n + 1 > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, loop_ub, &re_emlrtBCI, &b_st);
      }
      b_camMatrix2[n] = absxk_tmp / tNorm;
      b_camMatrix2[j] = b_absxk_tmp / tNorm;
      b_camMatrix2[k] = c_absxk_tmp / tNorm;
    }
  }
  if (acoef - 1 >= 0) {
    std::copy(&R_data[0], &R_data[acoef], &orientation_data[0]);
  }
  t_size[0] = loop_ub;
  t_size[1] = 3;
  if (b_k - 1 >= 0) {
    std::copy(&b_camMatrix2[0], &b_camMatrix2[b_k], &camMatrix2[0]);
  }
  if (loop_ub == 1) {
    if (loop_ub < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, loop_ub, &fe_emlrtBCI, &st);
    }
    b_st.site = &gu_emlrtRSI;
    c_st.site = &mn_emlrtRSI;
    for (i = 0; i < 3; i++) {
      camMatrix2[i] = -b_camMatrix2[i];
    }
    t_size[0] = 1;
    t_size[1] = 3;
    for (i = 0; i < 3; i++) {
      b_camMatrix2[i] =
          (camMatrix2[0] * R_data[i] + camMatrix2[1] * R_data[i + 3]) +
          camMatrix2[2] * R_data[i + 6];
    }
    b_st.site = &lu_emlrtRSI;
    relPose.init(b_st, &R_data[0], b_camMatrix2, t_size);
  } else {
    real32_T y_data[4];
    b_st.site = &hu_emlrtRSI;
    for (i = 0; i < loop_ub; i++) {
      y_data[i] = b_camMatrix2[i + loop_ub * 2];
    }
    c_st.site = &li_emlrtRSI;
    acoef = internal::sort(c_st, y_data, loop_ub, numNegatives);
    b_st.site = &iu_emlrtRSI;
    relPose.init(b_st);
    b_st.site = &iu_emlrtRSI;
    relPose.repmat(b_st, static_cast<real_T>(loop_ub));
    b_st.site = &ju_emlrtRSI;
    for (int32_T n{0}; n < loop_ub; n++) {
      if (n + 1 > acoef) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, acoef, &he_emlrtBCI, &st);
      }
      i = numNegatives[n];
      if ((i < 1) || (i > loop_ub)) {
        emlrtDynamicBoundsCheckR2012b(i, 1, loop_ub, &ee_emlrtBCI, &st);
      }
      if (n + 1 > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, loop_ub, &de_emlrtBCI, &st);
      }
      for (b_k = 0; b_k < 3; b_k++) {
        j = b_k + 9 * (i - 1);
        k = 3 * b_k + 9 * n;
        orientation_data[k] = R_data[j];
        orientation_data[k + 1] = R_data[j + 3];
        orientation_data[k + 2] = R_data[j + 6];
      }
      if (n + 1 > acoef) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, acoef, &ie_emlrtBCI, &st);
      }
      if (i > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(i, 1, loop_ub, &ce_emlrtBCI, &st);
      }
      if (n + 1 > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, loop_ub, &be_emlrtBCI, &st);
      }
      e = -b_camMatrix2[i - 1];
      absxk_tmp = -b_camMatrix2[(i + loop_ub) - 1];
      absxk = -b_camMatrix2[(i + loop_ub * 2) - 1];
      for (b_k = 0; b_k < 3; b_k++) {
        j = 3 * b_k + 9 * n;
        camMatrix2[n + loop_ub * b_k] =
            (e * orientation_data[j] + absxk_tmp * orientation_data[j + 1]) +
            absxk * orientation_data[j + 2];
      }
      if (n + 1 > acoef) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, acoef, &je_emlrtBCI, &st);
      }
      if (i > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(i, 1, loop_ub, &ae_emlrtBCI, &st);
      }
      b_st.site = &ku_emlrtRSI;
      r4.init(b_st, &R_data[9 * (i - 1)], camMatrix2, t_size);
      b_st.site = &ku_emlrtRSI;
      relPose.parenAssign(b_st, r4, n + 1);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return validPointsFraction;
}

real_T estrelpose(const emlrtStack &sp, const projtform2d M,
                  const cameraIntrinsics &varargin_1,
                  const array<real32_T, 2U> &varargin_2,
                  const array<real32_T, 2U> &varargin_3, rigidtform3d &relPose)
{
  rigidtform3d b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T c_varargin_1[9];
  real_T validPointsFraction;
  int32_T iidx_data[4];
  int32_T R_size[3];
  int32_T orientation_size[3];
  int32_T location_size[2];
  int32_T t_size[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T loop_ub;
  int32_T varargin_1_tmp;
  real32_T R_data[36];
  real32_T orientation_data[36];
  real32_T Rs[18];
  real32_T b_Ts[12];
  real32_T location_data[12];
  real32_T R[9];
  real32_T U[9];
  real32_T V[9];
  real32_T b_R[9];
  real32_T b_varargin_1[9];
  real32_T x1[4];
  real32_T b_aux1_tmp;
  real32_T c_aux1_tmp;
  real32_T f;
  real32_T s;
  boolean_T cond1;
  boolean_T cond2;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &bu_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &cu_emlrtRSI;
  c_st.site = &mu_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  i = varargin_1.cameraIntrinsicsArrayData.size(0) *
      varargin_1.cameraIntrinsicsArrayData.size(1);
  if (i != 1) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &ob_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedScalar",
        "MATLAB:estrelpose:expectedScalar", 3, 4, 13, "cameraParams1");
  }
  c_st.site = &nu_emlrtRSI;
  c_st.site = &ou_emlrtRSI;
  vision::internal::inputValidation::checkAndConvertMatchedPoints(
      c_st, varargin_2, varargin_3);
  if (varargin_2.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &ub_emlrtRTEI, "vision:relativeCameraPose:emptyInlierPoints",
        "vision:relativeCameraPose:emptyInlierPoints", 0);
  }
  b_st.site = &du_emlrtRSI;
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      varargin_1_tmp = i + 3 * i1;
      b_varargin_1[varargin_1_tmp] =
          (static_cast<real32_T>(varargin_1.K[3 * i]) * M.A_[i1] +
           static_cast<real32_T>(varargin_1.K[3 * i + 1]) * M.A_[i1 + 3]) +
          static_cast<real32_T>(varargin_1.K[3 * i + 2]) * M.A_[i1 + 6];
      c_varargin_1[i1 + 3 * i] = varargin_1.K[varargin_1_tmp];
    }
  }
  c_st.site = &oq_emlrtRSI;
  internal::mrdiv(c_st, b_varargin_1, c_varargin_1, R);
  b_st.site = &eu_emlrtRSI;
  for (i = 0; i < 3; i++) {
    b_R[3 * i] = R[i];
    b_R[3 * i + 1] = R[i + 3];
    b_R[3 * i + 2] = R[i + 6];
  }
  c_st.site = &pu_emlrtRSI;
  svd(c_st, b_R, U, b_varargin_1, V);
  c_st.site = &qu_emlrtRSI;
  s = det(c_st, U) * det(c_st, V);
  cond1 =
      (muSingleScalarAbs(b_varargin_1[0] - b_varargin_1[4]) < 0.00011920929F);
  cond2 =
      (muSingleScalarAbs(b_varargin_1[4] - b_varargin_1[8]) < 0.00011920929F);
  if (cond1 && (!cond2)) {
    real32_T Ts[6];
    real32_T a;
    for (i = 0; i < 3; i++) {
      c_aux1_tmp = U[i];
      b_aux1_tmp = U[i + 3];
      f = U[i + 6];
      for (i1 = 0; i1 < 3; i1++) {
        b_R[i + 3 * i1] =
            (s * c_aux1_tmp * static_cast<real32_T>(iv1[3 * i1]) +
             s * b_aux1_tmp * static_cast<real32_T>(iv1[3 * i1 + 1])) +
            s * f * static_cast<real32_T>(iv1[3 * i1 + 2]);
      }
      c_aux1_tmp = b_R[i];
      b_aux1_tmp = b_R[i + 3];
      f = b_R[i + 6];
      for (i1 = 0; i1 < 3; i1++) {
        R[i + 3 * i1] =
            (c_aux1_tmp * V[i1] + b_aux1_tmp * V[i1 + 3]) + f * V[i1 + 6];
      }
    }
    real32_T b_a[3];
    a = b_varargin_1[8] - b_varargin_1[0];
    b_a[0] = a * 0.0F;
    b_a[1] = a * 0.0F;
    c_aux1_tmp = b_a[0];
    b_aux1_tmp = b_a[1];
    for (b_i = 0; b_i < 2; b_i++) {
      real32_T t[3];
      real32_T aux1;
      real32_T aux1_tmp;
      f = a * (-2.0F * static_cast<real32_T>(b_i) + 1.0F);
      aux1_tmp = 0.0F;
      aux1 = 1.29246971E-26F;
      for (k = 0; k < 3; k++) {
        real32_T aux_stheta;
        varargin_1_tmp = 3 * k + 9 * b_i;
        Rs[varargin_1_tmp] = R[3 * k];
        Rs[varargin_1_tmp + 1] = R[3 * k + 1];
        Rs[varargin_1_tmp + 2] = R[3 * k + 2];
        aux_stheta = (c_aux1_tmp * U[k] + b_aux1_tmp * U[k + 3]) + f * U[k + 6];
        t[k] = aux_stheta;
        aux_stheta = muSingleScalarAbs(aux_stheta);
        if (aux_stheta > aux1) {
          real32_T aux3;
          aux3 = aux1 / aux_stheta;
          aux1_tmp = aux1_tmp * aux3 * aux3 + 1.0F;
          aux1 = aux_stheta;
        } else {
          real32_T aux3;
          aux3 = aux_stheta / aux1;
          aux1_tmp += aux3 * aux3;
        }
      }
      aux1_tmp = aux1 * muSingleScalarSqrt(aux1_tmp);
      Ts[b_i] = t[0] / aux1_tmp;
      Ts[b_i + 2] = t[1] / aux1_tmp;
      Ts[b_i + 4] = t[2] / aux1_tmp;
    }
    orientation_size[0] = 3;
    orientation_size[1] = 3;
    orientation_size[2] = 2;
    std::copy(&Rs[0], &Rs[18], &orientation_data[0]);
    location_size[0] = 2;
    location_size[1] = 3;
    for (i = 0; i < 6; i++) {
      location_data[i] = Ts[i];
    }
  } else if ((!cond1) && cond2) {
    real32_T Ts[6];
    real32_T a;
    for (i = 0; i < 3; i++) {
      c_aux1_tmp = U[i];
      b_aux1_tmp = U[i + 3];
      f = U[i + 6];
      for (i1 = 0; i1 < 3; i1++) {
        b_R[i + 3 * i1] =
            (s * c_aux1_tmp * static_cast<real32_T>(iv1[3 * i1]) +
             s * b_aux1_tmp * static_cast<real32_T>(iv1[3 * i1 + 1])) +
            s * f * static_cast<real32_T>(iv1[3 * i1 + 2]);
      }
      c_aux1_tmp = b_R[i];
      b_aux1_tmp = b_R[i + 3];
      f = b_R[i + 6];
      for (i1 = 0; i1 < 3; i1++) {
        R[i + 3 * i1] =
            (c_aux1_tmp * V[i1] + b_aux1_tmp * V[i1 + 3]) + f * V[i1 + 6];
      }
    }
    real32_T b_a[3];
    a = b_varargin_1[0] - b_varargin_1[8];
    b_a[1] = a * 0.0F;
    b_a[2] = a * 0.0F;
    c_aux1_tmp = b_a[1];
    b_aux1_tmp = b_a[2];
    for (b_i = 0; b_i < 2; b_i++) {
      real32_T t[3];
      real32_T aux1;
      real32_T aux1_tmp;
      f = a * (-2.0F * static_cast<real32_T>(b_i) + 1.0F);
      aux1_tmp = 0.0F;
      aux1 = 1.29246971E-26F;
      for (k = 0; k < 3; k++) {
        real32_T aux_stheta;
        varargin_1_tmp = 3 * k + 9 * b_i;
        Rs[varargin_1_tmp] = R[3 * k];
        Rs[varargin_1_tmp + 1] = R[3 * k + 1];
        Rs[varargin_1_tmp + 2] = R[3 * k + 2];
        aux_stheta = (f * U[k] + c_aux1_tmp * U[k + 3]) + b_aux1_tmp * U[k + 6];
        t[k] = aux_stheta;
        aux_stheta = muSingleScalarAbs(aux_stheta);
        if (aux_stheta > aux1) {
          real32_T aux3;
          aux3 = aux1 / aux_stheta;
          aux1_tmp = aux1_tmp * aux3 * aux3 + 1.0F;
          aux1 = aux_stheta;
        } else {
          real32_T aux3;
          aux3 = aux_stheta / aux1;
          aux1_tmp += aux3 * aux3;
        }
      }
      aux1_tmp = aux1 * muSingleScalarSqrt(aux1_tmp);
      Ts[b_i] = t[0] / aux1_tmp;
      Ts[b_i + 2] = t[1] / aux1_tmp;
      Ts[b_i + 4] = t[2] / aux1_tmp;
    }
    orientation_size[0] = 3;
    orientation_size[1] = 3;
    orientation_size[2] = 2;
    std::copy(&Rs[0], &Rs[18], &orientation_data[0]);
    location_size[0] = 2;
    location_size[1] = 3;
    for (i = 0; i < 6; i++) {
      location_data[i] = Ts[i];
    }
  } else if (cond1 && cond2) {
    location_size[0] = 1;
    location_size[1] = 3;
    for (i = 0; i < 3; i++) {
      location_data[i] = 0.0F;
      c_aux1_tmp = U[i];
      b_aux1_tmp = U[i + 3];
      f = U[i + 6];
      for (i1 = 0; i1 < 3; i1++) {
        b_R[i + 3 * i1] =
            (s * c_aux1_tmp * static_cast<real32_T>(iv1[3 * i1]) +
             s * b_aux1_tmp * static_cast<real32_T>(iv1[3 * i1 + 1])) +
            s * f * static_cast<real32_T>(iv1[3 * i1 + 2]);
      }
      c_aux1_tmp = b_R[i];
      b_aux1_tmp = b_R[i + 3];
      f = b_R[i + 6];
      for (i1 = 0; i1 < 3; i1++) {
        b_varargin_1[i + 3 * i1] =
            (c_aux1_tmp * V[i1] + b_aux1_tmp * V[i1 + 3]) + f * V[i1 + 6];
      }
    }
    orientation_size[0] = 3;
    orientation_size[1] = 3;
    orientation_size[2] = 1;
    for (i = 0; i < 9; i++) {
      orientation_data[i] = b_varargin_1[i];
    }
  } else {
    real32_T stheta[4];
    real32_T x3[4];
    real32_T b_a[3];
    real32_T a;
    real32_T aux1;
    real32_T aux1_tmp;
    real32_T aux3;
    real32_T aux_stheta;
    c_st.site = &ru_emlrtRSI;
    aux1_tmp = b_varargin_1[0] * b_varargin_1[0];
    b_aux1_tmp = b_varargin_1[4] * b_varargin_1[4];
    aux3 = b_varargin_1[8] * b_varargin_1[8];
    c_aux1_tmp = aux1_tmp - aux3;
    aux1_tmp -= b_aux1_tmp;
    aux1 = aux1_tmp / c_aux1_tmp;
    d_st.site = &su_emlrtRSI;
    if (aux1 < 0.0F) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    aux1 = muSingleScalarSqrt(aux1);
    aux_stheta = b_aux1_tmp - aux3;
    aux3 = aux_stheta / c_aux1_tmp;
    d_st.site = &tu_emlrtRSI;
    if (aux3 < 0.0F) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    aux3 = muSingleScalarSqrt(aux3);
    x1[0] = aux1;
    x1[1] = aux1;
    x1[2] = -aux1;
    x1[3] = -aux1;
    x3[0] = aux3;
    x3[1] = -aux3;
    x3[2] = aux3;
    x3[3] = -aux3;
    d_st.site = &uu_emlrtRSI;
    aux3 = aux1_tmp * aux_stheta;
    if (aux3 < 0.0F) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    c_aux1_tmp = (b_varargin_1[0] + b_varargin_1[8]) * b_varargin_1[4];
    aux_stheta = muSingleScalarSqrt(aux3) / c_aux1_tmp;
    aux3 = (b_aux1_tmp + b_varargin_1[0] * b_varargin_1[8]) / c_aux1_tmp;
    stheta[0] = aux_stheta;
    stheta[1] = -aux_stheta;
    stheta[2] = -aux_stheta;
    stheta[3] = aux_stheta;
    a = b_varargin_1[0] - b_varargin_1[8];
    b_a[1] = a * 0.0F;
    b_varargin_1[0] = aux3;
    b_varargin_1[3] = 0.0F;
    b_varargin_1[1] = 0.0F;
    b_varargin_1[4] = 1.0F;
    b_varargin_1[7] = 0.0F;
    b_varargin_1[5] = 0.0F;
    b_varargin_1[8] = aux3;
    for (b_i = 0; b_i < 4; b_i++) {
      real32_T t[3];
      c_aux1_tmp = stheta[b_i];
      b_varargin_1[6] = -c_aux1_tmp;
      b_varargin_1[2] = c_aux1_tmp;
      b_a[0] = a * x1[b_i];
      b_a[2] = a * -x3[b_i];
      aux1_tmp = 0.0F;
      aux1 = 1.29246971E-26F;
      for (k = 0; k < 3; k++) {
        c_aux1_tmp = U[k];
        b_aux1_tmp = U[k + 3];
        f = U[k + 6];
        for (i = 0; i < 3; i++) {
          b_R[k + 3 * i] = (s * c_aux1_tmp * b_varargin_1[3 * i] +
                            s * b_aux1_tmp * b_varargin_1[3 * i + 1]) +
                           s * f * b_varargin_1[3 * i + 2];
        }
        c_aux1_tmp = b_R[k];
        b_aux1_tmp = b_R[k + 3];
        f = b_R[k + 6];
        aux_stheta = 0.0F;
        for (i = 0; i < 3; i++) {
          varargin_1_tmp = k + 3 * i;
          orientation_data[varargin_1_tmp + 9 * b_i] =
              (c_aux1_tmp * V[i] + b_aux1_tmp * V[i + 3]) + f * V[i + 6];
          aux_stheta += b_a[i] * U[varargin_1_tmp];
        }
        t[k] = aux_stheta;
        aux_stheta = muSingleScalarAbs(aux_stheta);
        if (aux_stheta > aux1) {
          aux3 = aux1 / aux_stheta;
          aux1_tmp = aux1_tmp * aux3 * aux3 + 1.0F;
          aux1 = aux_stheta;
        } else {
          aux3 = aux_stheta / aux1;
          aux1_tmp += aux3 * aux3;
        }
      }
      aux1_tmp = aux1 * muSingleScalarSqrt(aux1_tmp);
      b_Ts[b_i] = t[0] / aux1_tmp;
      b_Ts[b_i + 4] = t[1] / aux1_tmp;
      b_Ts[b_i + 8] = t[2] / aux1_tmp;
    }
    orientation_size[0] = 3;
    orientation_size[1] = 3;
    orientation_size[2] = 4;
    location_size[0] = 4;
    location_size[1] = 3;
    for (i = 0; i < 12; i++) {
      location_data[i] = b_Ts[i];
    }
  }
  b_st.site = &fu_emlrtRSI;
  validPointsFraction = vision::internal::calibration::chooseRealizableSolution(
      b_st, orientation_data, orientation_size, location_data, location_size,
      varargin_1, varargin_1, varargin_2, varargin_3, R_data, R_size, b_Ts,
      t_size);
  i = R_size[2];
  varargin_1_tmp = 9 * R_size[2];
  if (varargin_1_tmp - 1 >= 0) {
    std::copy(&R_data[0], &R_data[varargin_1_tmp], &orientation_data[0]);
  }
  loop_ub = t_size[0];
  location_size[0] = t_size[0];
  location_size[1] = 3;
  varargin_1_tmp = t_size[0] * 3;
  if (varargin_1_tmp - 1 >= 0) {
    std::copy(&b_Ts[0], &b_Ts[varargin_1_tmp], &location_data[0]);
  }
  if (t_size[0] == 1) {
    if (R_size[2] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, R_size[2], &fe_emlrtBCI, &st);
    }
    b_st.site = &gu_emlrtRSI;
    c_st.site = &mn_emlrtRSI;
    for (i = 0; i < 3; i++) {
      location_data[i] = -b_Ts[i];
    }
    t_size[0] = 1;
    t_size[1] = 3;
    for (i = 0; i < 3; i++) {
      b_Ts[i] =
          (location_data[0] * R_data[i] + location_data[1] * R_data[i + 3]) +
          location_data[2] * R_data[i + 6];
    }
    b_st.site = &lu_emlrtRSI;
    relPose.init(b_st, &R_data[0], b_Ts, t_size);
  } else {
    b_st.site = &hu_emlrtRSI;
    varargin_1_tmp = t_size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      x1[i1] = b_Ts[i1 + t_size[0] * 2];
    }
    c_st.site = &li_emlrtRSI;
    k = internal::sort(c_st, x1, varargin_1_tmp, iidx_data);
    b_st.site = &iu_emlrtRSI;
    relPose.init(b_st);
    b_st.site = &iu_emlrtRSI;
    relPose.repmat(b_st, static_cast<real_T>(t_size[0]));
    b_st.site = &ju_emlrtRSI;
    for (int32_T n{0}; n < loop_ub; n++) {
      if (n + 1 > k) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, k, &he_emlrtBCI, &st);
      }
      i1 = iidx_data[n];
      if ((i1 < 1) || (i1 > i)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i, &ee_emlrtBCI, &st);
      }
      if (n + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, i, &de_emlrtBCI, &st);
      }
      for (int32_T i2{0}; i2 < 3; i2++) {
        varargin_1_tmp = i2 + 9 * (i1 - 1);
        b_i = 3 * i2 + 9 * n;
        orientation_data[b_i] = R_data[varargin_1_tmp];
        orientation_data[b_i + 1] = R_data[varargin_1_tmp + 3];
        orientation_data[b_i + 2] = R_data[varargin_1_tmp + 6];
      }
      if (n + 1 > k) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, k, &ie_emlrtBCI, &st);
      }
      if (i1 > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &ce_emlrtBCI, &st);
      }
      if (n + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, i, &be_emlrtBCI, &st);
      }
      if (n + 1 > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, loop_ub, &ge_emlrtBCI, &st);
      }
      c_aux1_tmp = -b_Ts[i1 - 1];
      b_aux1_tmp = -b_Ts[(i1 + t_size[0]) - 1];
      f = -b_Ts[(i1 + t_size[0] * 2) - 1];
      for (int32_T i2{0}; i2 < 3; i2++) {
        varargin_1_tmp = 3 * i2 + 9 * n;
        location_data[n + location_size[0] * i2] =
            (c_aux1_tmp * orientation_data[varargin_1_tmp] +
             b_aux1_tmp * orientation_data[varargin_1_tmp + 1]) +
            f * orientation_data[varargin_1_tmp + 2];
      }
      if (n + 1 > k) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, k, &je_emlrtBCI, &st);
      }
      if (i1 > i) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i, &ae_emlrtBCI, &st);
      }
      b_st.site = &ku_emlrtRSI;
      b_r.init(b_st, &R_data[9 * (i1 - 1)], location_data, location_size);
      b_st.site = &ku_emlrtRSI;
      relPose.parenAssign(b_st, b_r, n + 1);
    }
  }
  return validPointsFraction;
}

} // namespace coder

// End of code generation (estrelpose.cpp)
