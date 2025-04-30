//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rigidtform3d.cpp
//
// Code generation for function 'rigidtform3d'
//

// Include files
#include "rigidtform3d.h"
#include "checkTransformationMatrixCondition.h"
#include "constrainToRotationMatrix3D.h"
#include "det.h"
#include "helperVisualSLAMCodegen_data.h"
#include "isequal.h"
#include "norm.h"
#include "rigidtform3dImpl.h"
#include "rt_nonfinite.h"
#include "string1.h"
#include "svd.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <emmintrin.h>
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo cg_emlrtRSI{
    50,                          // lineNo
    "rigidtform3d/rigidtform3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\rigidtform3d.m" // pathName
};

static emlrtRSInfo dg_emlrtRSI{
    51,                          // lineNo
    "rigidtform3d/rigidtform3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\rigidtform3d.m" // pathName
};

static emlrtRSInfo eg_emlrtRSI{
    47,                                  // lineNo
    "rigidtform3dImpl/rigidtform3dImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\rigidtform3dImpl.m" // pathName
};

static emlrtRSInfo gv_emlrtRSI{
    61,                                  // lineNo
    "rigidtform3dImpl/rigidtform3dImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\rigidtform3dImpl.m" // pathName
};

static emlrtRSInfo bw_emlrtRSI{
    62,                                  // lineNo
    "rigidtform3dImpl/rigidtform3dImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\rigidtform3dImpl.m" // pathName
};

static emlrtRSInfo ew_emlrtRSI{
    170,                                   // lineNo
    "OneDimArrayBehaviorTransform/repmat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pathName
};

static emlrtRSInfo fw_emlrtRSI{
    81,                                         // lineNo
    "OneDimArrayBehaviorTransform/parenAssign", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pathName
};

static emlrtRSInfo gw_emlrtRSI{
    291,                                                     // lineNo
    "OneDimArrayBehaviorTransform/checkTransformsSimilrity", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pathName
};

static emlrtRSInfo jdb_emlrtRSI{
    185,                                    // lineNo
    "OneDimArrayBehaviorTransform/horzcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pathName
};

static emlrtRSInfo kdb_emlrtRSI{
    186,                                    // lineNo
    "OneDimArrayBehaviorTransform/horzcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pathName
};

static emlrtRSInfo ldb_emlrtRSI{
    188,                                    // lineNo
    "OneDimArrayBehaviorTransform/horzcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pathName
};

static emlrtRSInfo mdb_emlrtRSI{
    307,                                                // lineNo
    "OneDimArrayBehaviorTransform/initializeArrayData", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pathName
};

static emlrtRSInfo tpb_emlrtRSI{
    70,                                            // lineNo
    "OneDimArrayBehaviorTransform/parenReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pathName
};

static emlrtRSInfo upb_emlrtRSI{
    39,                                            // lineNo
    "OneDimArrayBehaviorTransform/parenReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pathName
};

static emlrtRSInfo vpb_emlrtRSI{
    38,                       // lineNo
    "rigidtform3d/makeEmpty", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\rigidtform3d.m" // pathName
};

static emlrtRSInfo wpb_emlrtRSI{
    330,                          // lineNo
    "MatrixTransformation/set.T", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pathName
};

static emlrtRSInfo cac_emlrtRSI{
    89,                                         // lineNo
    "OneDimArrayBehaviorTransform/parenAssign", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pathName
};

static emlrtRSInfo hdd_emlrtRSI{
    281,                          // lineNo
    "MatrixTransformation/set.A", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pathName
};

static emlrtRSInfo idd_emlrtRSI{
    566,      // lineNo
    "checkA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pathName
};

static emlrtBCInfo ri_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    61,                                            // lineNo
    42,                                            // colNo
    "",                                            // aName
    "OneDimArrayBehaviorTransform/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m", // pName
    0                                        // checkKind
};

static emlrtDCInfo db_emlrtDCI{
    61,                                            // lineNo
    42,                                            // colNo
    "OneDimArrayBehaviorTransform/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m", // pName
    1                                        // checkKind
};

static emlrtBCInfo or_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    70,                                            // lineNo
    37,                                            // colNo
    "",                                            // aName
    "OneDimArrayBehaviorTransform/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo pr_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    61,                                            // lineNo
    46,                                            // colNo
    "",                                            // aName
    "OneDimArrayBehaviorTransform/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo qr_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    61,                                            // lineNo
    27,                                            // colNo
    "",                                            // aName
    "OneDimArrayBehaviorTransform/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m", // pName
    0                                        // checkKind
};

static emlrtRTEInfo sf_emlrtRTEI{
    286,                          // lineNo
    21,                           // colNo
    "MatrixTransformation/set.A", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pName
};

static emlrtECInfo yd_emlrtECI{
    1,                     // nDims
    30,                    // lineNo
    16,                    // colNo
    "matricesNearlyEqual", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\matricesNearlyEqual.m" // pName
};

static emlrtECInfo ae_emlrtECI{
    2,                     // nDims
    30,                    // lineNo
    16,                    // colNo
    "matricesNearlyEqual", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\matricesNearlyEqual.m" // pName
};

static emlrtBCInfo uu_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    205,              // lineNo
    15,               // colNo
    "",               // aName
    "constrainA_alg", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\rigidtform3dImpl.m", // pName
    0                               // checkKind
};

static emlrtBCInfo vu_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    202,              // lineNo
    68,               // colNo
    "",               // aName
    "constrainA_alg", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\rigidtform3dImpl.m", // pName
    0                               // checkKind
};

static emlrtBCInfo wu_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    202,              // lineNo
    64,               // colNo
    "",               // aName
    "constrainA_alg", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\rigidtform3dImpl.m", // pName
    0                               // checkKind
};

static emlrtBCInfo edb_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    266,                                           // lineNo
    46,                                            // colNo
    "",                                            // aName
    "OneDimArrayBehaviorTransform/copyConcatData", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m", // pName
    0                                        // checkKind
};

static emlrtRTEInfo ky_emlrtRTEI{
    64,                             // lineNo
    13,                             // colNo
    "OneDimArrayBehaviorTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pName
};

static emlrtRTEInfo skb_emlrtRTEI{
    55,                             // lineNo
    53,                             // colNo
    "OneDimArrayBehaviorTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pName
};

static emlrtRTEInfo gpb_emlrtRTEI{
    281,                    // lineNo
    13,                     // colNo
    "MatrixTransformation", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pName
};

static emlrtRTEInfo fvb_emlrtRTEI{
    272,                            // lineNo
    21,                             // colNo
    "OneDimArrayBehaviorTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pName
};

static emlrtRTEInfo gvb_emlrtRTEI{
    188,                            // lineNo
    20,                             // colNo
    "OneDimArrayBehaviorTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pName
};

static emlrtRTEInfo hvb_emlrtRTEI{
    277,                            // lineNo
    13,                             // colNo
    "OneDimArrayBehaviorTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pName
};

// Function Definitions
namespace coder {
void b_rigidtform3d::b_init(const emlrtStack &sp, const real32_T varargin_1[16])
{
  __m128 r1;
  __m128 r2;
  images::geotrans::internal::b_rigidtform3dImpl b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T k;
  real32_T Ac[16];
  real32_T b_Ac[16];
  real32_T R2[9];
  real32_T R_clamped[9];
  real32_T U[9];
  real32_T V[9];
  real32_T b_x;
  real32_T x;
  real32_T y;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &cg_emlrtRSI;
  b_st.site = &eg_emlrtRSI;
  c_st.site = &fg_emlrtRSI;
  d_st.site = &rx_emlrtRSI;
  e_st.site = &sx_emlrtRSI;
  for (k = 0; k < 9; k++) {
    R_clamped[k] = muSingleScalarMax(
        muSingleScalarMin(varargin_1[k % 3 + ((k / 3) << 2)], 1.0F), -1.0F);
  }
  f_st.site = &kv_emlrtRSI;
  svd(f_st, R_clamped, U, b_r.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (k = 0; k < 3; k++) {
      R2[i + 3 * k] = (x * V[k] + y * V[k + 3]) + b_x * V[k + 6];
    }
  }
  f_st.site = &lv_emlrtRSI;
  if (det(f_st, R2) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      k = 3 * i + 1;
      x = R2[3 * i];
      R2[3 * i] = R2[k];
      R2[k] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - R2[8];
  f_st.site = &mv_emlrtRSI;
  x = b_norm(f_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  for (int32_T i{0}; i < 3; i++) {
    k = i << 2;
    Ac[k] = R2[3 * i];
    Ac[k + 1] = R2[3 * i + 1];
    Ac[k + 2] = R2[3 * i + 2];
    Ac[i + 12] = varargin_1[i + 12];
  }
  Ac[3] = 0.0F;
  Ac[7] = 0.0F;
  Ac[11] = 0.0F;
  Ac[15] = 1.0F;
  c_st.site = &ep_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  x = c_norm(d_st, Ac);
  d_st.site = &fp_emlrtRSI;
  y = c_norm(d_st, varargin_1);
  r1 = _mm_loadu_ps(&Ac[0]);
  _mm_storeu_ps(&b_Ac[0], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1[0])));
  r1 = _mm_loadu_ps(&Ac[4]);
  _mm_storeu_ps(&b_Ac[4], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1[4])));
  r1 = _mm_loadu_ps(&Ac[8]);
  _mm_storeu_ps(&b_Ac[8], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1[8])));
  r1 = _mm_loadu_ps(&Ac[12]);
  _mm_storeu_ps(&b_Ac[12], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1[12])));
  d_st.site = &gp_emlrtRSI;
  b_x = c_norm(d_st, b_Ac);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &gg_emlrtRSI;
  images::geotrans::internal::c_checkTransformationMatrixCond(c_st, Ac);
  c_st.site = &qx_emlrtRSI;
  d_st.site = &tx_emlrtRSI;
  e_st.site = &hv_emlrtRSI;
  f_st.site = &iv_emlrtRSI;
  for (k = 0; k < 9; k++) {
    R_clamped[k] = muSingleScalarMax(muSingleScalarMin(R2[k], 1.0F), -1.0F);
  }
  g_st.site = &kv_emlrtRSI;
  svd(g_st, R_clamped, U, b_r.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (k = 0; k < 3; k++) {
      b_r.R[i + 3 * k] = (x * V[k] + y * V[k + 3]) + b_x * V[k + 6];
    }
  }
  g_st.site = &lv_emlrtRSI;
  if (det(g_st, b_r.R) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      k = 3 * i + 1;
      x = b_r.R[3 * i];
      b_r.R[3 * i] = b_r.R[k];
      b_r.R[k] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - b_r.R[8];
  g_st.site = &mv_emlrtRSI;
  x = b_norm(g_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      b_r.R[i] = R_clamped[i];
    }
  }
  f_st.site = &jv_emlrtRSI;
  g_st.site = &fp_emlrtRSI;
  x = b_norm(g_st, R2);
  g_st.site = &fp_emlrtRSI;
  y = b_norm(g_st, b_r.R);
  r1 = _mm_loadu_ps(&R2[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&R2[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R2[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&R2[4], _mm_sub_ps(r1, r2));
  R2[8] -= b_r.R[8];
  g_st.site = &gp_emlrtRSI;
  b_x = b_norm(g_st, R2);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  for (int32_T i{0}; i < 9; i++) {
    R[i] = b_r.R[i];
  }
  Translation[0] = varargin_1[12];
  Translation[1] = varargin_1[13];
  Translation[2] = varargin_1[14];
  st.site = &dg_emlrtRSI;
  b_st.site = &eg_emlrtRSI;
  c_st.site = &fg_emlrtRSI;
  d_st.site = &rx_emlrtRSI;
  e_st.site = &sx_emlrtRSI;
  for (k = 0; k < 9; k++) {
    R_clamped[k] = muSingleScalarMax(
        muSingleScalarMin(varargin_1[k % 3 + ((k / 3) << 2)], 1.0F), -1.0F);
  }
  f_st.site = &kv_emlrtRSI;
  svd(f_st, R_clamped, U, b_r.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (k = 0; k < 3; k++) {
      R2[i + 3 * k] = (x * V[k] + y * V[k + 3]) + b_x * V[k + 6];
    }
  }
  f_st.site = &lv_emlrtRSI;
  if (det(f_st, R2) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      k = 3 * i + 1;
      x = R2[3 * i];
      R2[3 * i] = R2[k];
      R2[k] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - R2[8];
  f_st.site = &mv_emlrtRSI;
  x = b_norm(f_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  for (int32_T i{0}; i < 3; i++) {
    k = i << 2;
    Ac[k] = R2[3 * i];
    Ac[k + 1] = R2[3 * i + 1];
    Ac[k + 2] = R2[3 * i + 2];
    Ac[i + 12] = varargin_1[i + 12];
  }
  Ac[3] = 0.0F;
  Ac[7] = 0.0F;
  Ac[11] = 0.0F;
  Ac[15] = 1.0F;
  c_st.site = &ep_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  x = c_norm(d_st, Ac);
  d_st.site = &fp_emlrtRSI;
  y = c_norm(d_st, varargin_1);
  r1 = _mm_loadu_ps(&Ac[0]);
  _mm_storeu_ps(&b_Ac[0], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1[0])));
  r1 = _mm_loadu_ps(&Ac[4]);
  _mm_storeu_ps(&b_Ac[4], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1[4])));
  r1 = _mm_loadu_ps(&Ac[8]);
  _mm_storeu_ps(&b_Ac[8], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1[8])));
  r1 = _mm_loadu_ps(&Ac[12]);
  _mm_storeu_ps(&b_Ac[12], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1[12])));
  d_st.site = &gp_emlrtRSI;
  b_x = c_norm(d_st, b_Ac);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &gg_emlrtRSI;
  images::geotrans::internal::c_checkTransformationMatrixCond(c_st, Ac);
  c_st.site = &qx_emlrtRSI;
  d_st.site = &tx_emlrtRSI;
  e_st.site = &hv_emlrtRSI;
  f_st.site = &iv_emlrtRSI;
  for (k = 0; k < 9; k++) {
    R_clamped[k] = muSingleScalarMax(muSingleScalarMin(R2[k], 1.0F), -1.0F);
  }
  g_st.site = &kv_emlrtRSI;
  svd(g_st, R_clamped, U, b_r.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (k = 0; k < 3; k++) {
      b_r.R[i + 3 * k] = (x * V[k] + y * V[k + 3]) + b_x * V[k + 6];
    }
  }
  g_st.site = &lv_emlrtRSI;
  if (det(g_st, b_r.R) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      k = 3 * i + 1;
      x = b_r.R[3 * i];
      b_r.R[3 * i] = b_r.R[k];
      b_r.R[k] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - b_r.R[8];
  g_st.site = &mv_emlrtRSI;
  x = b_norm(g_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      b_r.R[i] = R_clamped[i];
    }
  }
  f_st.site = &jv_emlrtRSI;
  g_st.site = &fp_emlrtRSI;
  x = b_norm(g_st, R2);
  g_st.site = &fp_emlrtRSI;
  y = b_norm(g_st, b_r.R);
  r1 = _mm_loadu_ps(&R2[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&R2[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R2[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&R2[4], _mm_sub_ps(r1, r2));
  R2[8] -= b_r.R[8];
  g_st.site = &gp_emlrtRSI;
  b_x = b_norm(g_st, R2);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  b_r.Translation[0] = varargin_1[12];
  b_r.Translation[1] = varargin_1[13];
  b_r.Translation[2] = varargin_1[14];
  Data.set_size(&wk_emlrtRTEI, &sp, 1, 1);
  Data[0] = b_r;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void b_rigidtform3d::c_init(const emlrtStack &sp, const real32_T varargin_1[16])
{
  __m128 r1;
  __m128 r2;
  images::geotrans::internal::b_rigidtform3dImpl b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T k;
  real32_T Ac[16];
  real32_T b_Ac[16];
  real32_T R2[9];
  real32_T R_clamped[9];
  real32_T U[9];
  real32_T V[9];
  real32_T b_x;
  real32_T x;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &cg_emlrtRSI;
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
  b_st.site = &eg_emlrtRSI;
  c_st.site = &fg_emlrtRSI;
  d_st.site = &rx_emlrtRSI;
  e_st.site = &sx_emlrtRSI;
  for (k = 0; k < 9; k++) {
    R_clamped[k] = muSingleScalarMax(
        muSingleScalarMin(varargin_1[k % 3 + ((k / 3) << 2)], 1.0F), -1.0F);
  }
  f_st.site = &kv_emlrtRSI;
  svd(f_st, R_clamped, U, b_r.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (k = 0; k < 3; k++) {
      R2[i + 3 * k] = (x * V[k] + y * V[k + 3]) + b_x * V[k + 6];
    }
  }
  f_st.site = &lv_emlrtRSI;
  if (det(f_st, R2) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      k = 3 * i + 1;
      x = R2[3 * i];
      R2[3 * i] = R2[k];
      R2[k] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - R2[8];
  f_st.site = &mv_emlrtRSI;
  x = b_norm(f_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  for (int32_T i{0}; i < 3; i++) {
    k = i << 2;
    Ac[k] = R2[3 * i];
    Ac[k + 1] = R2[3 * i + 1];
    Ac[k + 2] = R2[3 * i + 2];
    Ac[i + 12] = varargin_1[i + 12];
  }
  Ac[3] = 0.0F;
  Ac[7] = 0.0F;
  Ac[11] = 0.0F;
  Ac[15] = 1.0F;
  c_st.site = &ep_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  x = c_norm(d_st, Ac);
  d_st.site = &fp_emlrtRSI;
  y = c_norm(d_st, varargin_1);
  r1 = _mm_loadu_ps(&Ac[0]);
  _mm_storeu_ps(&b_Ac[0], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1[0])));
  r1 = _mm_loadu_ps(&Ac[4]);
  _mm_storeu_ps(&b_Ac[4], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1[4])));
  r1 = _mm_loadu_ps(&Ac[8]);
  _mm_storeu_ps(&b_Ac[8], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1[8])));
  r1 = _mm_loadu_ps(&Ac[12]);
  _mm_storeu_ps(&b_Ac[12], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1[12])));
  d_st.site = &gp_emlrtRSI;
  b_x = c_norm(d_st, b_Ac);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &gg_emlrtRSI;
  images::geotrans::internal::c_checkTransformationMatrixCond(c_st, Ac);
  c_st.site = &qx_emlrtRSI;
  d_st.site = &tx_emlrtRSI;
  e_st.site = &hv_emlrtRSI;
  f_st.site = &iv_emlrtRSI;
  for (k = 0; k < 9; k++) {
    R_clamped[k] = muSingleScalarMax(muSingleScalarMin(R2[k], 1.0F), -1.0F);
  }
  g_st.site = &kv_emlrtRSI;
  svd(g_st, R_clamped, U, b_r.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (k = 0; k < 3; k++) {
      b_r.R[i + 3 * k] = (x * V[k] + y * V[k + 3]) + b_x * V[k + 6];
    }
  }
  g_st.site = &lv_emlrtRSI;
  if (det(g_st, b_r.R) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      k = 3 * i + 1;
      x = b_r.R[3 * i];
      b_r.R[3 * i] = b_r.R[k];
      b_r.R[k] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - b_r.R[8];
  g_st.site = &mv_emlrtRSI;
  x = b_norm(g_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      b_r.R[i] = R_clamped[i];
    }
  }
  f_st.site = &jv_emlrtRSI;
  g_st.site = &fp_emlrtRSI;
  x = b_norm(g_st, R2);
  g_st.site = &fp_emlrtRSI;
  y = b_norm(g_st, b_r.R);
  r1 = _mm_loadu_ps(&R2[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&R2[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R2[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&R2[4], _mm_sub_ps(r1, r2));
  R2[8] -= b_r.R[8];
  g_st.site = &gp_emlrtRSI;
  b_x = b_norm(g_st, R2);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  for (int32_T i{0}; i < 9; i++) {
    R[i] = b_r.R[i];
  }
  Translation[0] = varargin_1[12];
  Translation[1] = varargin_1[13];
  Translation[2] = varargin_1[14];
  st.site = &dg_emlrtRSI;
  b_st.site = &eg_emlrtRSI;
  c_st.site = &fg_emlrtRSI;
  d_st.site = &rx_emlrtRSI;
  e_st.site = &sx_emlrtRSI;
  for (k = 0; k < 9; k++) {
    R_clamped[k] = muSingleScalarMax(
        muSingleScalarMin(varargin_1[k % 3 + ((k / 3) << 2)], 1.0F), -1.0F);
  }
  f_st.site = &kv_emlrtRSI;
  svd(f_st, R_clamped, U, b_r.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (k = 0; k < 3; k++) {
      R2[i + 3 * k] = (x * V[k] + y * V[k + 3]) + b_x * V[k + 6];
    }
  }
  f_st.site = &lv_emlrtRSI;
  if (det(f_st, R2) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      k = 3 * i + 1;
      x = R2[3 * i];
      R2[3 * i] = R2[k];
      R2[k] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - R2[8];
  f_st.site = &mv_emlrtRSI;
  x = b_norm(f_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  for (int32_T i{0}; i < 3; i++) {
    k = i << 2;
    Ac[k] = R2[3 * i];
    Ac[k + 1] = R2[3 * i + 1];
    Ac[k + 2] = R2[3 * i + 2];
    Ac[i + 12] = varargin_1[i + 12];
  }
  Ac[3] = 0.0F;
  Ac[7] = 0.0F;
  Ac[11] = 0.0F;
  Ac[15] = 1.0F;
  c_st.site = &ep_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  x = c_norm(d_st, Ac);
  d_st.site = &fp_emlrtRSI;
  y = c_norm(d_st, varargin_1);
  r1 = _mm_loadu_ps(&Ac[0]);
  _mm_storeu_ps(&b_Ac[0], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1[0])));
  r1 = _mm_loadu_ps(&Ac[4]);
  _mm_storeu_ps(&b_Ac[4], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1[4])));
  r1 = _mm_loadu_ps(&Ac[8]);
  _mm_storeu_ps(&b_Ac[8], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1[8])));
  r1 = _mm_loadu_ps(&Ac[12]);
  _mm_storeu_ps(&b_Ac[12], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1[12])));
  d_st.site = &gp_emlrtRSI;
  b_x = c_norm(d_st, b_Ac);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &gg_emlrtRSI;
  images::geotrans::internal::c_checkTransformationMatrixCond(c_st, Ac);
  c_st.site = &qx_emlrtRSI;
  d_st.site = &tx_emlrtRSI;
  e_st.site = &hv_emlrtRSI;
  f_st.site = &iv_emlrtRSI;
  for (k = 0; k < 9; k++) {
    R_clamped[k] = muSingleScalarMax(muSingleScalarMin(R2[k], 1.0F), -1.0F);
  }
  g_st.site = &kv_emlrtRSI;
  svd(g_st, R_clamped, U, b_r.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (k = 0; k < 3; k++) {
      b_r.R[i + 3 * k] = (x * V[k] + y * V[k + 3]) + b_x * V[k + 6];
    }
  }
  g_st.site = &lv_emlrtRSI;
  if (det(g_st, b_r.R) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      k = 3 * i + 1;
      x = b_r.R[3 * i];
      b_r.R[3 * i] = b_r.R[k];
      b_r.R[k] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - b_r.R[8];
  g_st.site = &mv_emlrtRSI;
  x = b_norm(g_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      b_r.R[i] = R_clamped[i];
    }
  }
  f_st.site = &jv_emlrtRSI;
  g_st.site = &fp_emlrtRSI;
  x = b_norm(g_st, R2);
  g_st.site = &fp_emlrtRSI;
  y = b_norm(g_st, b_r.R);
  r1 = _mm_loadu_ps(&R2[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&R2[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R2[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&R2[4], _mm_sub_ps(r1, r2));
  R2[8] -= b_r.R[8];
  g_st.site = &gp_emlrtRSI;
  b_x = b_norm(g_st, R2);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  b_r.Translation[0] = varargin_1[12];
  b_r.Translation[1] = varargin_1[13];
  b_r.Translation[2] = varargin_1[14];
  Data.set_size(&wk_emlrtRTEI, &sp, 1, 1);
  Data[0] = b_r;
}

void b_rigidtform3d::horzcat(const emlrtStack &sp,
                             const b_rigidtform3d &varargin_1)
{
  __m128 b_r;
  __m128 r1;
  array<images::geotrans::internal::b_rigidtform3dImpl, 2U> dataArray;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  int32_T A_in_tmp;
  int32_T i;
  real32_T A_in[16];
  real32_T Ac[16];
  real32_T R2[9];
  real32_T R_clamped[9];
  real32_T U[9];
  real32_T V[9];
  real32_T b_R2[9];
  real32_T b_x;
  real32_T x;
  real32_T y;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &jdb_emlrtRSI;
  for (i = 0; i < 3; i++) {
    A_in_tmp = i << 2;
    A_in[A_in_tmp] = R[3 * i];
    A_in[A_in_tmp + 1] = R[3 * i + 1];
    A_in[A_in_tmp + 2] = R[3 * i + 2];
    A_in[i + 12] = Translation[i];
  }
  A_in[3] = 0.0F;
  A_in[7] = 0.0F;
  A_in[11] = 0.0F;
  A_in[15] = 1.0F;
  b_st.site = &mdb_emlrtRSI;
  c_st.site = &eg_emlrtRSI;
  d_st.site = &fg_emlrtRSI;
  e_st.site = &rx_emlrtRSI;
  f_st.site = &sx_emlrtRSI;
  for (A_in_tmp = 0; A_in_tmp < 9; A_in_tmp++) {
    R_clamped[A_in_tmp] = muSingleScalarMax(
        muSingleScalarMin(A_in[A_in_tmp % 3 + ((A_in_tmp / 3) << 2)], 1.0F),
        -1.0F);
  }
  g_st.site = &kv_emlrtRSI;
  svd(g_st, R_clamped, U, R2, V);
  for (i = 0; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (A_in_tmp = 0; A_in_tmp < 3; A_in_tmp++) {
      b_R2[i + 3 * A_in_tmp] =
          (x * V[A_in_tmp] + y * V[A_in_tmp + 3]) + b_x * V[A_in_tmp + 6];
    }
  }
  g_st.site = &lv_emlrtRSI;
  if (det(g_st, b_R2) < 0.0F) {
    for (i = 0; i < 3; i++) {
      A_in_tmp = 3 * i + 1;
      x = b_R2[3 * i];
      b_R2[3 * i] = b_R2[A_in_tmp];
      b_R2[A_in_tmp] = x;
    }
  }
  b_r = _mm_loadu_ps(&R_clamped[0]);
  r1 = _mm_loadu_ps(&b_R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R_clamped[4]);
  r1 = _mm_loadu_ps(&b_R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(b_r, r1));
  U[8] = R_clamped[8] - b_R2[8];
  g_st.site = &mv_emlrtRSI;
  x = b_norm(g_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (i = 0; i < 9; i++) {
      b_R2[i] = R_clamped[i];
    }
  }
  for (i = 0; i < 3; i++) {
    A_in_tmp = i << 2;
    Ac[A_in_tmp] = b_R2[3 * i];
    Ac[A_in_tmp + 1] = b_R2[3 * i + 1];
    Ac[A_in_tmp + 2] = b_R2[3 * i + 2];
    Ac[i + 12] = A_in[i + 12];
  }
  Ac[3] = 0.0F;
  Ac[7] = 0.0F;
  Ac[11] = 0.0F;
  Ac[15] = 1.0F;
  d_st.site = &ep_emlrtRSI;
  e_st.site = &fp_emlrtRSI;
  x = c_norm(e_st, Ac);
  e_st.site = &fp_emlrtRSI;
  y = c_norm(e_st, A_in);
  b_r = _mm_loadu_ps(&Ac[0]);
  r1 = _mm_loadu_ps(&A_in[0]);
  _mm_storeu_ps(&A_in[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&Ac[4]);
  r1 = _mm_loadu_ps(&A_in[4]);
  _mm_storeu_ps(&A_in[4], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&Ac[8]);
  r1 = _mm_loadu_ps(&A_in[8]);
  _mm_storeu_ps(&A_in[8], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&Ac[12]);
  r1 = _mm_loadu_ps(&A_in[12]);
  _mm_storeu_ps(&A_in[12], _mm_sub_ps(b_r, r1));
  e_st.site = &gp_emlrtRSI;
  b_x = c_norm(e_st, A_in);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  d_st.site = &gg_emlrtRSI;
  images::geotrans::internal::c_checkTransformationMatrixCond(d_st, Ac);
  d_st.site = &qx_emlrtRSI;
  e_st.site = &tx_emlrtRSI;
  f_st.site = &hv_emlrtRSI;
  g_st.site = &iv_emlrtRSI;
  for (A_in_tmp = 0; A_in_tmp < 9; A_in_tmp++) {
    R_clamped[A_in_tmp] =
        muSingleScalarMax(muSingleScalarMin(b_R2[A_in_tmp], 1.0F), -1.0F);
  }
  h_st.site = &kv_emlrtRSI;
  svd(h_st, R_clamped, U, R2, V);
  for (i = 0; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (A_in_tmp = 0; A_in_tmp < 3; A_in_tmp++) {
      R2[i + 3 * A_in_tmp] =
          (x * V[A_in_tmp] + y * V[A_in_tmp + 3]) + b_x * V[A_in_tmp + 6];
    }
  }
  h_st.site = &lv_emlrtRSI;
  if (det(h_st, R2) < 0.0F) {
    for (i = 0; i < 3; i++) {
      A_in_tmp = 3 * i + 1;
      x = R2[3 * i];
      R2[3 * i] = R2[A_in_tmp];
      R2[A_in_tmp] = x;
    }
  }
  b_r = _mm_loadu_ps(&R_clamped[0]);
  r1 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R_clamped[4]);
  r1 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(b_r, r1));
  U[8] = R_clamped[8] - R2[8];
  h_st.site = &mv_emlrtRSI;
  x = b_norm(h_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (i = 0; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  g_st.site = &jv_emlrtRSI;
  h_st.site = &fp_emlrtRSI;
  x = b_norm(h_st, b_R2);
  h_st.site = &fp_emlrtRSI;
  y = b_norm(h_st, R2);
  b_r = _mm_loadu_ps(&b_R2[0]);
  r1 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&b_R2[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&b_R2[4]);
  r1 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&b_R2[4], _mm_sub_ps(b_r, r1));
  b_R2[8] -= R2[8];
  h_st.site = &gp_emlrtRSI;
  b_x = b_norm(h_st, b_R2);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&e_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  st.site = &kdb_emlrtRSI;
  b_st.site = &ne_emlrtRSI;
  st.site = &ldb_emlrtRSI;
  dataArray.set_size(&fvb_emlrtRTEI, &st, dataArray.size(0), 0);
  i = Data.size(1);
  for (int32_T n{0}; n < i; n++) {
    if (n > i - 1) {
      emlrtDynamicBoundsCheckR2012b(n, 0, i - 1, &edb_emlrtBCI, &st);
    }
    A_in_tmp = dataArray.size(1) + 1;
    dataArray.set_size(&gvb_emlrtRTEI, &st, 1, dataArray.size(1) + 1);
    dataArray[A_in_tmp - 1] = Data[n];
  }
  A_in_tmp = dataArray.size(1) + 1;
  dataArray.set_size(&gvb_emlrtRTEI, &st, 1, dataArray.size(1) + 1);
  dataArray[A_in_tmp - 1] = varargin_1.Data[0];
  Data.set_size(&hvb_emlrtRTEI, &st, 1, A_in_tmp);
  for (i = 0; i < A_in_tmp; i++) {
    Data[i] = dataArray[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void rigidtform3d::init(const emlrtStack &sp, const real32_T varargin_1[9],
                        const real32_T varargin_2_data[],
                        const int32_T varargin_2_size[2])
{
  __m128 b_r;
  __m128 r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T k;
  real32_T R2[9];
  real32_T R_clamped[9];
  real32_T U[9];
  real32_T V[9];
  real32_T b_x;
  real32_T x;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &cg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &gv_emlrtRSI;
  c_st.site = &hv_emlrtRSI;
  d_st.site = &iv_emlrtRSI;
  for (k = 0; k < 9; k++) {
    R_clamped[k] =
        muSingleScalarMax(muSingleScalarMin(varargin_1[k], 1.0F), -1.0F);
  }
  e_st.site = &kv_emlrtRSI;
  svd(e_st, R_clamped, U, R2, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (k = 0; k < 3; k++) {
      R2[i + 3 * k] = (x * V[k] + y * V[k + 3]) + b_x * V[k + 6];
    }
  }
  e_st.site = &lv_emlrtRSI;
  if (det(e_st, R2) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      k = 3 * i + 1;
      x = R2[3 * i];
      R2[3 * i] = R2[k];
      R2[k] = x;
    }
  }
  b_r = _mm_loadu_ps(&R_clamped[0]);
  r1 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R_clamped[4]);
  r1 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(b_r, r1));
  U[8] = R_clamped[8] - R2[8];
  e_st.site = &mv_emlrtRSI;
  x = b_norm(e_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  d_st.site = &jv_emlrtRSI;
  e_st.site = &fp_emlrtRSI;
  x = b_norm(e_st, varargin_1);
  e_st.site = &fp_emlrtRSI;
  y = b_norm(e_st, R2);
  b_r = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(_mm_loadu_ps(&varargin_1[0]), b_r));
  b_r = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(_mm_loadu_ps(&varargin_1[4]), b_r));
  U[8] = varargin_1[8] - R2[8];
  e_st.site = &gp_emlrtRSI;
  b_x = b_norm(e_st, U);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  for (int32_T i{0}; i < 9; i++) {
    R[i] = R2[i];
  }
  b_st.site = &bw_emlrtRSI;
  if (varargin_2_size[0] * 3 != 3) {
    emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI,
                                  "images:geotrans:badTranslation3D",
                                  "images:geotrans:badTranslation3D", 0);
  }
  Translation.size[0] = 1;
  Translation.size[1] = 3;
  for (int32_T i{0}; i < 3; i++) {
    Translation.data[i] = varargin_2_data[i];
  }
  st.site = &dg_emlrtRSI;
  b_st.site = &gv_emlrtRSI;
  c_st.site = &hv_emlrtRSI;
  d_st.site = &iv_emlrtRSI;
  for (k = 0; k < 9; k++) {
    R_clamped[k] =
        muSingleScalarMax(muSingleScalarMin(varargin_1[k], 1.0F), -1.0F);
  }
  e_st.site = &kv_emlrtRSI;
  svd(e_st, R_clamped, U, R2, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (k = 0; k < 3; k++) {
      R2[i + 3 * k] = (x * V[k] + y * V[k + 3]) + b_x * V[k + 6];
    }
  }
  e_st.site = &lv_emlrtRSI;
  if (det(e_st, R2) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      k = 3 * i + 1;
      x = R2[3 * i];
      R2[3 * i] = R2[k];
      R2[k] = x;
    }
  }
  b_r = _mm_loadu_ps(&R_clamped[0]);
  r1 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R_clamped[4]);
  r1 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(b_r, r1));
  U[8] = R_clamped[8] - R2[8];
  e_st.site = &mv_emlrtRSI;
  x = b_norm(e_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  d_st.site = &jv_emlrtRSI;
  e_st.site = &fp_emlrtRSI;
  x = b_norm(e_st, varargin_1);
  e_st.site = &fp_emlrtRSI;
  y = b_norm(e_st, R2);
  b_r = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&R2[0], _mm_sub_ps(_mm_loadu_ps(&varargin_1[0]), b_r));
  b_r = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&R2[4], _mm_sub_ps(_mm_loadu_ps(&varargin_1[4]), b_r));
  R2[8] = varargin_1[8] - R2[8];
  e_st.site = &gp_emlrtRSI;
  b_x = b_norm(e_st, R2);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  b_st.site = &bw_emlrtRSI;
  Data.size[0] = 1;
  Data.size[1] = 1;
}

void b_rigidtform3d::init(const emlrtStack &sp, const real32_T varargin_1[9],
                          const real32_T varargin_2[3])
{
  __m128 r1;
  __m128 r2;
  images::geotrans::internal::b_rigidtform3dImpl b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T i;
  real32_T R_clamped[9];
  real32_T U[9];
  real32_T V[9];
  real32_T b_x;
  real32_T x;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &cg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &gv_emlrtRSI;
  c_st.site = &hv_emlrtRSI;
  d_st.site = &iv_emlrtRSI;
  for (int32_T k{0}; k < 9; k++) {
    R_clamped[k] =
        muSingleScalarMax(muSingleScalarMin(varargin_1[k], 1.0F), -1.0F);
  }
  e_st.site = &kv_emlrtRSI;
  svd(e_st, R_clamped, U, b_r.R, V);
  for (int32_T k{0}; k < 3; k++) {
    x = U[k];
    y = U[k + 3];
    b_x = U[k + 6];
    for (i = 0; i < 3; i++) {
      b_r.R[k + 3 * i] = (x * V[i] + y * V[i + 3]) + b_x * V[i + 6];
    }
  }
  e_st.site = &lv_emlrtRSI;
  if (det(e_st, b_r.R) < 0.0F) {
    for (int32_T k{0}; k < 3; k++) {
      i = 3 * k + 1;
      x = b_r.R[3 * k];
      b_r.R[3 * k] = b_r.R[i];
      b_r.R[i] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - b_r.R[8];
  e_st.site = &mv_emlrtRSI;
  x = b_norm(e_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T k{0}; k < 9; k++) {
      b_r.R[k] = R_clamped[k];
    }
  }
  d_st.site = &jv_emlrtRSI;
  e_st.site = &fp_emlrtRSI;
  x = b_norm(e_st, varargin_1);
  e_st.site = &fp_emlrtRSI;
  y = b_norm(e_st, b_r.R);
  r1 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(_mm_loadu_ps(&varargin_1[0]), r1));
  r1 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(_mm_loadu_ps(&varargin_1[4]), r1));
  U[8] = varargin_1[8] - b_r.R[8];
  e_st.site = &gp_emlrtRSI;
  b_x = b_norm(e_st, U);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  for (int32_T k{0}; k < 9; k++) {
    R[k] = b_r.R[k];
  }
  Translation[0] = varargin_2[0];
  Translation[1] = varargin_2[1];
  Translation[2] = varargin_2[2];
  st.site = &dg_emlrtRSI;
  b_st.site = &gv_emlrtRSI;
  c_st.site = &hv_emlrtRSI;
  d_st.site = &iv_emlrtRSI;
  for (int32_T k{0}; k < 9; k++) {
    R_clamped[k] =
        muSingleScalarMax(muSingleScalarMin(varargin_1[k], 1.0F), -1.0F);
  }
  e_st.site = &kv_emlrtRSI;
  svd(e_st, R_clamped, U, b_r.R, V);
  for (int32_T k{0}; k < 3; k++) {
    x = U[k];
    y = U[k + 3];
    b_x = U[k + 6];
    for (i = 0; i < 3; i++) {
      b_r.R[k + 3 * i] = (x * V[i] + y * V[i + 3]) + b_x * V[i + 6];
    }
  }
  e_st.site = &lv_emlrtRSI;
  if (det(e_st, b_r.R) < 0.0F) {
    for (int32_T k{0}; k < 3; k++) {
      i = 3 * k + 1;
      x = b_r.R[3 * k];
      b_r.R[3 * k] = b_r.R[i];
      b_r.R[i] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - b_r.R[8];
  e_st.site = &mv_emlrtRSI;
  x = b_norm(e_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T k{0}; k < 9; k++) {
      b_r.R[k] = R_clamped[k];
    }
  }
  d_st.site = &jv_emlrtRSI;
  e_st.site = &fp_emlrtRSI;
  x = b_norm(e_st, varargin_1);
  e_st.site = &fp_emlrtRSI;
  y = b_norm(e_st, b_r.R);
  r1 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(_mm_loadu_ps(&varargin_1[0]), r1));
  r1 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(_mm_loadu_ps(&varargin_1[4]), r1));
  U[8] = varargin_1[8] - b_r.R[8];
  e_st.site = &gp_emlrtRSI;
  b_x = b_norm(e_st, U);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  b_r.Translation[0] = varargin_2[0];
  b_r.Translation[1] = varargin_2[1];
  b_r.Translation[2] = varargin_2[2];
  Data.set_size(&wk_emlrtRTEI, &sp, 1, 1);
  Data[0] = b_r;
}

void b_rigidtform3d::init(const emlrtStack &sp,
                          const real32_T varargin_1_data[],
                          const int32_T varargin_1_size[2])
{
  static const int8_T varargin_2[4]{0, 0, 0, 1};
  __m128 r1;
  __m128 r2;
  images::geotrans::internal::b_rigidtform3dImpl b_r;
  rtString err_msg_id;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  real_T dv[2];
  real_T sz[2];
  int32_T A_in_size[2];
  int32_T loop_ub_tmp;
  real32_T A_in_data[20];
  real32_T Ac[16];
  real32_T b_Ac[16];
  real32_T R2[9];
  real32_T R_clamped[9];
  real32_T U[9];
  real32_T V[9];
  real32_T b_x;
  real32_T x;
  real32_T y;
  int8_T R_tmp[3];
  int8_T input_sizes_idx_0_tmp;
  boolean_T b_bool;
  boolean_T guard1;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &cg_emlrtRSI;
  b_st.site = &eg_emlrtRSI;
  c_st.site = &hdd_emlrtRSI;
  err_msg_id.Value.set_size(&gpb_emlrtRTEI, &c_st, err_msg_id.Value.size(0), 0);
  sz[0] = varargin_1_size[0];
  dv[0] = 4.0;
  sz[1] = varargin_1_size[1];
  dv[1] = 4.0;
  guard1 = false;
  if (!isequal(sz, dv)) {
    dv[0] = 3.0;
    dv[1] = 4.0;
    if (!isequal(sz, dv)) {
      A_in_size[0] = varargin_1_size[0];
      A_in_size[1] = varargin_1_size[1];
      loop_ub_tmp = varargin_1_size[0] * varargin_1_size[1];
      if (loop_ub_tmp - 1 >= 0) {
        std::copy(&varargin_1_data[0], &varargin_1_data[loop_ub_tmp],
                  &A_in_data[0]);
      }
      d_st.site = &hdd_emlrtRSI;
      err_msg_id.init(d_st);
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }
  if (guard1) {
    if (varargin_1_size[0] == 3) {
      d_st.site = &idd_emlrtRSI;
      e_st.site = &kn_emlrtRSI;
      f_st.site = &jj_emlrtRSI;
      if ((varargin_1_size[1] != 4) && (varargin_1_size[1] != 0)) {
        emlrtErrorWithMessageIdR2018a(
            &f_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      if (varargin_1_size[1] != 0) {
        input_sizes_idx_0_tmp = 3;
      } else {
        input_sizes_idx_0_tmp = 0;
      }
      loop_ub_tmp = input_sizes_idx_0_tmp;
      A_in_size[0] = input_sizes_idx_0_tmp + 1;
      A_in_size[1] = 4;
      for (int32_T i{0}; i < 4; i++) {
        for (int32_T i1{0}; i1 < loop_ub_tmp; i1++) {
          A_in_data[i1 + (input_sizes_idx_0_tmp + 1) * i] =
              varargin_1_data[i1 + input_sizes_idx_0_tmp * i];
        }
        A_in_data[input_sizes_idx_0_tmp + (input_sizes_idx_0_tmp + 1) * i] =
            varargin_2[i];
      }
    } else {
      A_in_size[0] = varargin_1_size[0];
      A_in_size[1] = varargin_1_size[1];
      loop_ub_tmp = varargin_1_size[0] * varargin_1_size[1];
      if (loop_ub_tmp - 1 >= 0) {
        std::copy(&varargin_1_data[0], &varargin_1_data[loop_ub_tmp],
                  &A_in_data[0]);
      }
    }
  }
  b_bool = false;
  if (err_msg_id.Value.size(1) == 0) {
    b_bool = true;
  } else if (err_msg_id.Value.size(1) == 0) {
    b_bool = true;
  }
  if (!b_bool) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &sf_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &fg_emlrtRSI;
  d_st.site = &rx_emlrtRSI;
  if (A_in_size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, A_in_size[0], &wu_emlrtBCI, &d_st);
  }
  R_tmp[0] = 1;
  if (A_in_size[0] < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, 1, &wu_emlrtBCI, &d_st);
  }
  R_tmp[1] = 2;
  if (A_in_size[0] < 3) {
    emlrtDynamicBoundsCheckR2012b(3, 1, 2, &wu_emlrtBCI, &d_st);
  }
  R_tmp[2] = 3;
  e_st.site = &sx_emlrtRSI;
  if (A_in_size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, A_in_size[1], &vu_emlrtBCI, &e_st);
  }
  if (A_in_size[1] < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, 1, &vu_emlrtBCI, &e_st);
  }
  if (A_in_size[1] < 3) {
    emlrtDynamicBoundsCheckR2012b(3, 1, 2, &vu_emlrtBCI, &e_st);
  }
  for (loop_ub_tmp = 0; loop_ub_tmp < 9; loop_ub_tmp++) {
    R_clamped[loop_ub_tmp] = muSingleScalarMax(
        muSingleScalarMin(A_in_data[(R_tmp[loop_ub_tmp % 3] +
                                     A_in_size[0] * (loop_ub_tmp / 3)) -
                                    1],
                          1.0F),
        -1.0F);
  }
  f_st.site = &kv_emlrtRSI;
  svd(f_st, R_clamped, U, b_r.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (int32_T i1{0}; i1 < 3; i1++) {
      R2[i + 3 * i1] = (x * V[i1] + y * V[i1 + 3]) + b_x * V[i1 + 6];
    }
  }
  f_st.site = &lv_emlrtRSI;
  if (det(f_st, R2) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      loop_ub_tmp = 3 * i + 1;
      x = R2[3 * i];
      R2[3 * i] = R2[loop_ub_tmp];
      R2[loop_ub_tmp] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - R2[8];
  f_st.site = &mv_emlrtRSI;
  x = b_norm(f_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  if (A_in_size[1] < 4) {
    emlrtDynamicBoundsCheckR2012b(4, 1, 3, &uu_emlrtBCI, &d_st);
  }
  for (int32_T i{0}; i < 3; i++) {
    x = A_in_data[(R_tmp[i] + A_in_size[0] * 3) - 1];
    b_r.Translation[i] = x;
    loop_ub_tmp = i << 2;
    Ac[loop_ub_tmp] = R2[3 * i];
    Ac[loop_ub_tmp + 1] = R2[3 * i + 1];
    Ac[loop_ub_tmp + 2] = R2[3 * i + 2];
    Ac[i + 12] = x;
  }
  Ac[3] = 0.0F;
  Ac[7] = 0.0F;
  Ac[11] = 0.0F;
  Ac[15] = 1.0F;
  c_st.site = &ep_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  x = c_norm(d_st, Ac);
  d_st.site = &fp_emlrtRSI;
  y = b_norm(d_st, A_in_data, A_in_size);
  if (A_in_size[0] != 4) {
    emlrtDimSizeImpxCheckR2021b(4, A_in_size[0], &yd_emlrtECI, &c_st);
  }
  if (A_in_size[1] != 4) {
    emlrtDimSizeImpxCheckR2021b(4, A_in_size[1], &ae_emlrtECI, &c_st);
  }
  r1 = _mm_loadu_ps(&Ac[0]);
  r2 = _mm_loadu_ps(&A_in_data[0]);
  _mm_storeu_ps(&b_Ac[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&Ac[4]);
  r2 = _mm_loadu_ps(&A_in_data[4]);
  _mm_storeu_ps(&b_Ac[4], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&Ac[8]);
  r2 = _mm_loadu_ps(&A_in_data[8]);
  _mm_storeu_ps(&b_Ac[8], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&Ac[12]);
  r2 = _mm_loadu_ps(&A_in_data[12]);
  _mm_storeu_ps(&b_Ac[12], _mm_sub_ps(r1, r2));
  d_st.site = &gp_emlrtRSI;
  b_x = c_norm(d_st, b_Ac);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &gg_emlrtRSI;
  images::geotrans::internal::c_checkTransformationMatrixCond(c_st, Ac);
  c_st.site = &qx_emlrtRSI;
  d_st.site = &tx_emlrtRSI;
  e_st.site = &hv_emlrtRSI;
  f_st.site = &iv_emlrtRSI;
  for (loop_ub_tmp = 0; loop_ub_tmp < 9; loop_ub_tmp++) {
    R_clamped[loop_ub_tmp] =
        muSingleScalarMax(muSingleScalarMin(R2[loop_ub_tmp], 1.0F), -1.0F);
  }
  g_st.site = &kv_emlrtRSI;
  svd(g_st, R_clamped, U, b_r.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (int32_T i1{0}; i1 < 3; i1++) {
      b_r.R[i + 3 * i1] = (x * V[i1] + y * V[i1 + 3]) + b_x * V[i1 + 6];
    }
  }
  g_st.site = &lv_emlrtRSI;
  if (det(g_st, b_r.R) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      loop_ub_tmp = 3 * i + 1;
      x = b_r.R[3 * i];
      b_r.R[3 * i] = b_r.R[loop_ub_tmp];
      b_r.R[loop_ub_tmp] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - b_r.R[8];
  g_st.site = &mv_emlrtRSI;
  x = b_norm(g_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      b_r.R[i] = R_clamped[i];
    }
  }
  f_st.site = &jv_emlrtRSI;
  g_st.site = &fp_emlrtRSI;
  x = b_norm(g_st, R2);
  g_st.site = &fp_emlrtRSI;
  y = b_norm(g_st, b_r.R);
  r1 = _mm_loadu_ps(&R2[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&R2[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R2[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&R2[4], _mm_sub_ps(r1, r2));
  R2[8] -= b_r.R[8];
  g_st.site = &gp_emlrtRSI;
  b_x = b_norm(g_st, R2);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  for (int32_T i{0}; i < 9; i++) {
    R[i] = b_r.R[i];
  }
  Translation[0] = b_r.Translation[0];
  Translation[1] = b_r.Translation[1];
  Translation[2] = b_r.Translation[2];
  st.site = &dg_emlrtRSI;
  b_st.site = &eg_emlrtRSI;
  c_st.site = &hdd_emlrtRSI;
  err_msg_id.Value.set_size(&gpb_emlrtRTEI, &c_st, err_msg_id.Value.size(0), 0);
  sz[0] = varargin_1_size[0];
  dv[0] = 4.0;
  sz[1] = varargin_1_size[1];
  dv[1] = 4.0;
  guard1 = false;
  if (!isequal(sz, dv)) {
    dv[0] = 3.0;
    dv[1] = 4.0;
    if (!isequal(sz, dv)) {
      A_in_size[0] = varargin_1_size[0];
      A_in_size[1] = varargin_1_size[1];
      loop_ub_tmp = varargin_1_size[0] * varargin_1_size[1];
      if (loop_ub_tmp - 1 >= 0) {
        std::copy(&varargin_1_data[0], &varargin_1_data[loop_ub_tmp],
                  &A_in_data[0]);
      }
      d_st.site = &hdd_emlrtRSI;
      err_msg_id.init(d_st);
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }
  if (guard1) {
    if (varargin_1_size[0] == 3) {
      d_st.site = &idd_emlrtRSI;
      e_st.site = &kn_emlrtRSI;
      f_st.site = &jj_emlrtRSI;
      if ((varargin_1_size[1] != 4) && (varargin_1_size[1] != 0)) {
        emlrtErrorWithMessageIdR2018a(
            &f_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      if (varargin_1_size[1] != 0) {
        input_sizes_idx_0_tmp = 3;
      } else {
        input_sizes_idx_0_tmp = 0;
      }
      loop_ub_tmp = input_sizes_idx_0_tmp;
      A_in_size[0] = input_sizes_idx_0_tmp + 1;
      A_in_size[1] = 4;
      for (int32_T i{0}; i < 4; i++) {
        for (int32_T i1{0}; i1 < loop_ub_tmp; i1++) {
          A_in_data[i1 + (input_sizes_idx_0_tmp + 1) * i] =
              varargin_1_data[i1 + input_sizes_idx_0_tmp * i];
        }
        A_in_data[input_sizes_idx_0_tmp + (input_sizes_idx_0_tmp + 1) * i] =
            varargin_2[i];
      }
    } else {
      A_in_size[0] = varargin_1_size[0];
      A_in_size[1] = varargin_1_size[1];
      loop_ub_tmp = varargin_1_size[0] * varargin_1_size[1];
      if (loop_ub_tmp - 1 >= 0) {
        std::copy(&varargin_1_data[0], &varargin_1_data[loop_ub_tmp],
                  &A_in_data[0]);
      }
    }
  }
  b_bool = false;
  if (err_msg_id.Value.size(1) == 0) {
    b_bool = true;
  } else if (err_msg_id.Value.size(1) == 0) {
    b_bool = true;
  }
  if (!b_bool) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &sf_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &fg_emlrtRSI;
  d_st.site = &rx_emlrtRSI;
  if (A_in_size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, A_in_size[0], &wu_emlrtBCI, &d_st);
  }
  R_tmp[0] = 1;
  if (A_in_size[0] < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, 1, &wu_emlrtBCI, &d_st);
  }
  R_tmp[1] = 2;
  if (A_in_size[0] < 3) {
    emlrtDynamicBoundsCheckR2012b(3, 1, 2, &wu_emlrtBCI, &d_st);
  }
  R_tmp[2] = 3;
  e_st.site = &sx_emlrtRSI;
  if (A_in_size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, A_in_size[1], &vu_emlrtBCI, &e_st);
  }
  if (A_in_size[1] < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, 1, &vu_emlrtBCI, &e_st);
  }
  if (A_in_size[1] < 3) {
    emlrtDynamicBoundsCheckR2012b(3, 1, 2, &vu_emlrtBCI, &e_st);
  }
  for (loop_ub_tmp = 0; loop_ub_tmp < 9; loop_ub_tmp++) {
    R_clamped[loop_ub_tmp] = muSingleScalarMax(
        muSingleScalarMin(A_in_data[(R_tmp[loop_ub_tmp % 3] +
                                     A_in_size[0] * (loop_ub_tmp / 3)) -
                                    1],
                          1.0F),
        -1.0F);
  }
  f_st.site = &kv_emlrtRSI;
  svd(f_st, R_clamped, U, b_r.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (int32_T i1{0}; i1 < 3; i1++) {
      R2[i + 3 * i1] = (x * V[i1] + y * V[i1 + 3]) + b_x * V[i1 + 6];
    }
  }
  f_st.site = &lv_emlrtRSI;
  if (det(f_st, R2) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      loop_ub_tmp = 3 * i + 1;
      x = R2[3 * i];
      R2[3 * i] = R2[loop_ub_tmp];
      R2[loop_ub_tmp] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - R2[8];
  f_st.site = &mv_emlrtRSI;
  x = b_norm(f_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  if (A_in_size[1] < 4) {
    emlrtDynamicBoundsCheckR2012b(4, 1, 3, &uu_emlrtBCI, &d_st);
  }
  for (int32_T i{0}; i < 3; i++) {
    x = A_in_data[(R_tmp[i] + A_in_size[0] * 3) - 1];
    b_r.Translation[i] = x;
    loop_ub_tmp = i << 2;
    Ac[loop_ub_tmp] = R2[3 * i];
    Ac[loop_ub_tmp + 1] = R2[3 * i + 1];
    Ac[loop_ub_tmp + 2] = R2[3 * i + 2];
    Ac[i + 12] = x;
  }
  Ac[3] = 0.0F;
  Ac[7] = 0.0F;
  Ac[11] = 0.0F;
  Ac[15] = 1.0F;
  c_st.site = &ep_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  x = c_norm(d_st, Ac);
  d_st.site = &fp_emlrtRSI;
  y = b_norm(d_st, A_in_data, A_in_size);
  if (A_in_size[0] != 4) {
    emlrtDimSizeImpxCheckR2021b(4, A_in_size[0], &yd_emlrtECI, &c_st);
  }
  if (A_in_size[1] != 4) {
    emlrtDimSizeImpxCheckR2021b(4, A_in_size[1], &ae_emlrtECI, &c_st);
  }
  r1 = _mm_loadu_ps(&Ac[0]);
  r2 = _mm_loadu_ps(&A_in_data[0]);
  _mm_storeu_ps(&b_Ac[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&Ac[4]);
  r2 = _mm_loadu_ps(&A_in_data[4]);
  _mm_storeu_ps(&b_Ac[4], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&Ac[8]);
  r2 = _mm_loadu_ps(&A_in_data[8]);
  _mm_storeu_ps(&b_Ac[8], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&Ac[12]);
  r2 = _mm_loadu_ps(&A_in_data[12]);
  _mm_storeu_ps(&b_Ac[12], _mm_sub_ps(r1, r2));
  d_st.site = &gp_emlrtRSI;
  b_x = c_norm(d_st, b_Ac);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &gg_emlrtRSI;
  images::geotrans::internal::c_checkTransformationMatrixCond(c_st, Ac);
  c_st.site = &qx_emlrtRSI;
  d_st.site = &tx_emlrtRSI;
  e_st.site = &hv_emlrtRSI;
  f_st.site = &iv_emlrtRSI;
  for (loop_ub_tmp = 0; loop_ub_tmp < 9; loop_ub_tmp++) {
    R_clamped[loop_ub_tmp] =
        muSingleScalarMax(muSingleScalarMin(R2[loop_ub_tmp], 1.0F), -1.0F);
  }
  g_st.site = &kv_emlrtRSI;
  svd(g_st, R_clamped, U, b_r.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (int32_T i1{0}; i1 < 3; i1++) {
      b_r.R[i + 3 * i1] = (x * V[i1] + y * V[i1 + 3]) + b_x * V[i1 + 6];
    }
  }
  g_st.site = &lv_emlrtRSI;
  if (det(g_st, b_r.R) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      loop_ub_tmp = 3 * i + 1;
      x = b_r.R[3 * i];
      b_r.R[3 * i] = b_r.R[loop_ub_tmp];
      b_r.R[loop_ub_tmp] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - b_r.R[8];
  g_st.site = &mv_emlrtRSI;
  x = b_norm(g_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      b_r.R[i] = R_clamped[i];
    }
  }
  f_st.site = &jv_emlrtRSI;
  g_st.site = &fp_emlrtRSI;
  x = b_norm(g_st, R2);
  g_st.site = &fp_emlrtRSI;
  y = b_norm(g_st, b_r.R);
  r1 = _mm_loadu_ps(&R2[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&R2[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R2[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&R2[4], _mm_sub_ps(r1, r2));
  R2[8] -= b_r.R[8];
  g_st.site = &gp_emlrtRSI;
  b_x = b_norm(g_st, R2);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  Data.set_size(&wk_emlrtRTEI, &sp, 1, 1);
  Data[0] = b_r;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void c_rigidtform3d::init(const emlrtStack &sp, const real_T varargin_1[9],
                          const real_T varargin_2[3])
{
  __m128d b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T Rc[9];
  real_T b_varargin_1[9];
  real_T x;
  real_T y;
  boolean_T is_rotation_matrix;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &cg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &gv_emlrtRSI;
  c_st.site = &hv_emlrtRSI;
  d_st.site = &iv_emlrtRSI;
  images::geotrans::internal::constrainToRotationMatrix3D(d_st, varargin_1, Rc);
  d_st.site = &jv_emlrtRSI;
  e_st.site = &fp_emlrtRSI;
  x = b_norm(e_st, varargin_1);
  e_st.site = &fp_emlrtRSI;
  y = b_norm(e_st, Rc);
  b_r = _mm_loadu_pd(&Rc[0]);
  _mm_storeu_pd(&b_varargin_1[0],
                _mm_sub_pd(_mm_loadu_pd(&varargin_1[0]), b_r));
  b_r = _mm_loadu_pd(&Rc[2]);
  _mm_storeu_pd(&b_varargin_1[2],
                _mm_sub_pd(_mm_loadu_pd(&varargin_1[2]), b_r));
  b_r = _mm_loadu_pd(&Rc[4]);
  _mm_storeu_pd(&b_varargin_1[4],
                _mm_sub_pd(_mm_loadu_pd(&varargin_1[4]), b_r));
  b_r = _mm_loadu_pd(&Rc[6]);
  _mm_storeu_pd(&b_varargin_1[6],
                _mm_sub_pd(_mm_loadu_pd(&varargin_1[6]), b_r));
  b_varargin_1[8] = varargin_1[8] - Rc[8];
  e_st.site = &gp_emlrtRSI;
  is_rotation_matrix =
      (b_norm(e_st, b_varargin_1) /
           muDoubleScalarMax(muDoubleScalarMax(x, y), 1.223247290044539E-294) <=
       1.8189894035458565E-12);
  if (!is_rotation_matrix) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  std::copy(&Rc[0], &Rc[9], &R[0]);
  Translation[0] = varargin_2[0];
  Translation[1] = varargin_2[1];
  Translation[2] = varargin_2[2];
  st.site = &dg_emlrtRSI;
  b_st.site = &gv_emlrtRSI;
  c_st.site = &hv_emlrtRSI;
  d_st.site = &iv_emlrtRSI;
  images::geotrans::internal::constrainToRotationMatrix3D(d_st, varargin_1, Rc);
  d_st.site = &jv_emlrtRSI;
  e_st.site = &fp_emlrtRSI;
  x = b_norm(e_st, varargin_1);
  e_st.site = &fp_emlrtRSI;
  y = b_norm(e_st, Rc);
  b_r = _mm_loadu_pd(&Rc[0]);
  _mm_storeu_pd(&Rc[0], _mm_sub_pd(_mm_loadu_pd(&varargin_1[0]), b_r));
  b_r = _mm_loadu_pd(&Rc[2]);
  _mm_storeu_pd(&Rc[2], _mm_sub_pd(_mm_loadu_pd(&varargin_1[2]), b_r));
  b_r = _mm_loadu_pd(&Rc[4]);
  _mm_storeu_pd(&Rc[4], _mm_sub_pd(_mm_loadu_pd(&varargin_1[4]), b_r));
  b_r = _mm_loadu_pd(&Rc[6]);
  _mm_storeu_pd(&Rc[6], _mm_sub_pd(_mm_loadu_pd(&varargin_1[6]), b_r));
  Rc[8] = varargin_1[8] - Rc[8];
  e_st.site = &gp_emlrtRSI;
  is_rotation_matrix =
      (b_norm(e_st, Rc) /
           muDoubleScalarMax(muDoubleScalarMax(x, y), 1.223247290044539E-294) <=
       1.8189894035458565E-12);
  if (!is_rotation_matrix) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  Data.size[0] = 1;
  Data.size[1] = 1;
}

void rigidtform3d::init(const emlrtStack &sp)
{
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  for (int32_T i{0}; i < 9; i++) {
    R[i] = iv1[i];
  }
  Translation.size[0] = 1;
  Translation.size[1] = 3;
  Translation.data[0] = 0.0F;
  Translation.data[1] = 0.0F;
  Translation.data[2] = 0.0F;
  Data.size[0] = 1;
  Data.size[1] = 1;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void c_rigidtform3d::init()
{
  for (int32_T i{0}; i < 9; i++) {
    R[i] = iv1[i];
  }
  Translation[0] = 0.0;
  Translation[1] = 0.0;
  Translation[2] = 0.0;
  Data.size[0] = 1;
  Data.size[1] = 1;
}

void b_rigidtform3d::init(const emlrtStack &sp,
                          const real32_T varargin_1_data[])
{
  __m128 r1;
  __m128 r2;
  images::geotrans::internal::b_rigidtform3dImpl b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T k;
  real32_T Ac[16];
  real32_T b_Ac[16];
  real32_T R2[9];
  real32_T R_clamped[9];
  real32_T U[9];
  real32_T V[9];
  real32_T b_x;
  real32_T x;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &cg_emlrtRSI;
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
  b_st.site = &eg_emlrtRSI;
  c_st.site = &fg_emlrtRSI;
  d_st.site = &rx_emlrtRSI;
  e_st.site = &sx_emlrtRSI;
  for (k = 0; k < 9; k++) {
    R_clamped[k] = muSingleScalarMax(
        muSingleScalarMin(varargin_1_data[k % 3 + 4 * (k / 3)], 1.0F), -1.0F);
  }
  f_st.site = &kv_emlrtRSI;
  svd(f_st, R_clamped, U, b_r.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (k = 0; k < 3; k++) {
      R2[i + 3 * k] = (x * V[k] + y * V[k + 3]) + b_x * V[k + 6];
    }
  }
  f_st.site = &lv_emlrtRSI;
  if (det(f_st, R2) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      k = 3 * i + 1;
      x = R2[3 * i];
      R2[3 * i] = R2[k];
      R2[k] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - R2[8];
  f_st.site = &mv_emlrtRSI;
  x = b_norm(f_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  for (int32_T i{0}; i < 3; i++) {
    k = i << 2;
    Ac[k] = R2[3 * i];
    Ac[k + 1] = R2[3 * i + 1];
    Ac[k + 2] = R2[3 * i + 2];
    Ac[i + 12] = varargin_1_data[i + 12];
  }
  Ac[3] = 0.0F;
  Ac[7] = 0.0F;
  Ac[11] = 0.0F;
  Ac[15] = 1.0F;
  c_st.site = &ep_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  x = c_norm(d_st, Ac);
  d_st.site = &fp_emlrtRSI;
  y = d_norm(d_st, varargin_1_data);
  r1 = _mm_loadu_ps(&Ac[0]);
  _mm_storeu_ps(&b_Ac[0], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1_data[0])));
  r1 = _mm_loadu_ps(&Ac[4]);
  _mm_storeu_ps(&b_Ac[4], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1_data[4])));
  r1 = _mm_loadu_ps(&Ac[8]);
  _mm_storeu_ps(&b_Ac[8], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1_data[8])));
  r1 = _mm_loadu_ps(&Ac[12]);
  _mm_storeu_ps(&b_Ac[12], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1_data[12])));
  d_st.site = &gp_emlrtRSI;
  b_x = c_norm(d_st, b_Ac);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &gg_emlrtRSI;
  images::geotrans::internal::c_checkTransformationMatrixCond(c_st, Ac);
  c_st.site = &qx_emlrtRSI;
  d_st.site = &tx_emlrtRSI;
  e_st.site = &hv_emlrtRSI;
  f_st.site = &iv_emlrtRSI;
  for (k = 0; k < 9; k++) {
    R_clamped[k] = muSingleScalarMax(muSingleScalarMin(R2[k], 1.0F), -1.0F);
  }
  g_st.site = &kv_emlrtRSI;
  svd(g_st, R_clamped, U, b_r.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (k = 0; k < 3; k++) {
      b_r.R[i + 3 * k] = (x * V[k] + y * V[k + 3]) + b_x * V[k + 6];
    }
  }
  g_st.site = &lv_emlrtRSI;
  if (det(g_st, b_r.R) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      k = 3 * i + 1;
      x = b_r.R[3 * i];
      b_r.R[3 * i] = b_r.R[k];
      b_r.R[k] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - b_r.R[8];
  g_st.site = &mv_emlrtRSI;
  x = b_norm(g_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      b_r.R[i] = R_clamped[i];
    }
  }
  f_st.site = &jv_emlrtRSI;
  g_st.site = &fp_emlrtRSI;
  x = b_norm(g_st, R2);
  g_st.site = &fp_emlrtRSI;
  y = b_norm(g_st, b_r.R);
  r1 = _mm_loadu_ps(&R2[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&R2[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R2[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&R2[4], _mm_sub_ps(r1, r2));
  R2[8] -= b_r.R[8];
  g_st.site = &gp_emlrtRSI;
  b_x = b_norm(g_st, R2);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  for (int32_T i{0}; i < 9; i++) {
    R[i] = b_r.R[i];
  }
  Translation[0] = varargin_1_data[12];
  Translation[1] = varargin_1_data[13];
  Translation[2] = varargin_1_data[14];
  st.site = &dg_emlrtRSI;
  b_st.site = &eg_emlrtRSI;
  c_st.site = &fg_emlrtRSI;
  d_st.site = &rx_emlrtRSI;
  e_st.site = &sx_emlrtRSI;
  for (k = 0; k < 9; k++) {
    R_clamped[k] = muSingleScalarMax(
        muSingleScalarMin(varargin_1_data[k % 3 + 4 * (k / 3)], 1.0F), -1.0F);
  }
  f_st.site = &kv_emlrtRSI;
  svd(f_st, R_clamped, U, b_r.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (k = 0; k < 3; k++) {
      R2[i + 3 * k] = (x * V[k] + y * V[k + 3]) + b_x * V[k + 6];
    }
  }
  f_st.site = &lv_emlrtRSI;
  if (det(f_st, R2) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      k = 3 * i + 1;
      x = R2[3 * i];
      R2[3 * i] = R2[k];
      R2[k] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - R2[8];
  f_st.site = &mv_emlrtRSI;
  x = b_norm(f_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  for (int32_T i{0}; i < 3; i++) {
    k = i << 2;
    Ac[k] = R2[3 * i];
    Ac[k + 1] = R2[3 * i + 1];
    Ac[k + 2] = R2[3 * i + 2];
    Ac[i + 12] = varargin_1_data[i + 12];
  }
  Ac[3] = 0.0F;
  Ac[7] = 0.0F;
  Ac[11] = 0.0F;
  Ac[15] = 1.0F;
  c_st.site = &ep_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  x = c_norm(d_st, Ac);
  d_st.site = &fp_emlrtRSI;
  y = d_norm(d_st, varargin_1_data);
  r1 = _mm_loadu_ps(&Ac[0]);
  _mm_storeu_ps(&b_Ac[0], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1_data[0])));
  r1 = _mm_loadu_ps(&Ac[4]);
  _mm_storeu_ps(&b_Ac[4], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1_data[4])));
  r1 = _mm_loadu_ps(&Ac[8]);
  _mm_storeu_ps(&b_Ac[8], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1_data[8])));
  r1 = _mm_loadu_ps(&Ac[12]);
  _mm_storeu_ps(&b_Ac[12], _mm_sub_ps(r1, _mm_loadu_ps(&varargin_1_data[12])));
  d_st.site = &gp_emlrtRSI;
  b_x = c_norm(d_st, b_Ac);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &gg_emlrtRSI;
  images::geotrans::internal::c_checkTransformationMatrixCond(c_st, Ac);
  c_st.site = &qx_emlrtRSI;
  d_st.site = &tx_emlrtRSI;
  e_st.site = &hv_emlrtRSI;
  f_st.site = &iv_emlrtRSI;
  for (k = 0; k < 9; k++) {
    R_clamped[k] = muSingleScalarMax(muSingleScalarMin(R2[k], 1.0F), -1.0F);
  }
  g_st.site = &kv_emlrtRSI;
  svd(g_st, R_clamped, U, b_r.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (k = 0; k < 3; k++) {
      b_r.R[i + 3 * k] = (x * V[k] + y * V[k + 3]) + b_x * V[k + 6];
    }
  }
  g_st.site = &lv_emlrtRSI;
  if (det(g_st, b_r.R) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      k = 3 * i + 1;
      x = b_r.R[3 * i];
      b_r.R[3 * i] = b_r.R[k];
      b_r.R[k] = x;
    }
  }
  r1 = _mm_loadu_ps(&R_clamped[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R_clamped[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(r1, r2));
  U[8] = R_clamped[8] - b_r.R[8];
  g_st.site = &mv_emlrtRSI;
  x = b_norm(g_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      b_r.R[i] = R_clamped[i];
    }
  }
  f_st.site = &jv_emlrtRSI;
  g_st.site = &fp_emlrtRSI;
  x = b_norm(g_st, R2);
  g_st.site = &fp_emlrtRSI;
  y = b_norm(g_st, b_r.R);
  r1 = _mm_loadu_ps(&R2[0]);
  r2 = _mm_loadu_ps(&b_r.R[0]);
  _mm_storeu_ps(&R2[0], _mm_sub_ps(r1, r2));
  r1 = _mm_loadu_ps(&R2[4]);
  r2 = _mm_loadu_ps(&b_r.R[4]);
  _mm_storeu_ps(&R2[4], _mm_sub_ps(r1, r2));
  R2[8] -= b_r.R[8];
  g_st.site = &gp_emlrtRSI;
  b_x = b_norm(g_st, R2);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  b_r.Translation[0] = varargin_1_data[12];
  b_r.Translation[1] = varargin_1_data[13];
  b_r.Translation[2] = varargin_1_data[14];
  Data.set_size(&wk_emlrtRTEI, &sp, 1, 1);
  Data[0] = b_r;
}

void b_rigidtform3d::init(const emlrtStack &sp)
{
  images::geotrans::internal::b_rigidtform3dImpl b_r;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  for (int32_T i{0}; i < 9; i++) {
    R[i] = iv1[i];
  }
  Translation[0] = 0.0F;
  Translation[1] = 0.0F;
  Translation[2] = 0.0F;
  for (int32_T i{0}; i < 9; i++) {
    b_r.R[i] = iv1[i];
  }
  b_r.Translation[0] = 0.0F;
  b_r.Translation[1] = 0.0F;
  b_r.Translation[2] = 0.0F;
  Data.set_size(&wk_emlrtRTEI, &sp, 1, 1);
  Data[0] = b_r;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void rigidtform3d::parenAssign(const emlrtStack &sp, const rigidtform3d &rhs,
                               int32_T idx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &fw_emlrtRSI;
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
  b_st.site = &gw_emlrtRSI;
  c_st.site = &hw_emlrtRSI;
  d_st.site = &iw_emlrtRSI;
  e_st.site = &jw_emlrtRSI;
  f_st.site = &kn_emlrtRSI;
  g_st.site = &jj_emlrtRSI;
  if ((rhs.Translation.size[1] != 3) && (rhs.Translation.size[1] != 0)) {
    emlrtErrorWithMessageIdR2018a(&g_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  e_st.site = &jw_emlrtRSI;
  f_st.site = &kn_emlrtRSI;
  g_st.site = &jj_emlrtRSI;
  if ((rhs.Translation.size[1] != 0) + 3 != 4) {
    emlrtErrorWithMessageIdR2018a(&g_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  i = Data.size[0] * Data.size[1];
  if (idx > i) {
    images::geotrans::internal::rigidtform3dImpl dataArray_data[16];
    int32_T dataArray_size_idx_0;
    int32_T dataArray_size_idx_1;
    int32_T loop_ub_tmp;
    if (Data.size[0] == 1) {
      dataArray_size_idx_0 = 1;
      dataArray_size_idx_1 = idx;
    } else {
      dataArray_size_idx_0 = idx;
      dataArray_size_idx_1 = 1;
    }
    for (int32_T n{0}; n < i; n++) {
      if (n > i - 1) {
        emlrtDynamicBoundsCheckR2012b(n, 0, i - 1, &lr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      loop_ub_tmp = dataArray_size_idx_0 * dataArray_size_idx_1;
      if (n > loop_ub_tmp - 1) {
        emlrtDynamicBoundsCheckR2012b(n, 0, loop_ub_tmp - 1, &mr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      dataArray_data[n] = Data.data[n];
    }
    loop_ub_tmp = dataArray_size_idx_0 * dataArray_size_idx_1;
    if (idx - 1 > loop_ub_tmp - 1) {
      emlrtDynamicBoundsCheckR2012b(idx - 1, 0, loop_ub_tmp - 1, &nr_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    dataArray_data[idx - 1] = rhs.Data.data[0];
    Data.size[0] = dataArray_size_idx_0;
    Data.size[1] = dataArray_size_idx_1;
    for (i = 0; i < loop_ub_tmp; i++) {
      Data.data[i] = dataArray_data[i];
    }
  } else {
    if ((idx - 1 < 0) || (idx - 1 > i - 1)) {
      emlrtDynamicBoundsCheckR2012b(idx - 1, 0, i - 1, &kr_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Data.data[idx - 1] = rhs.Data.data[0];
  }
}

void b_rigidtform3d::parenAssign(const emlrtStack &sp,
                                 const b_rigidtform3d &rhs,
                                 const real_T idx_data[], int32_T idx_size)
{
  array<images::geotrans::internal::b_rigidtform3dImpl, 2U> dataArray;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &cac_emlrtRSI;
  b_st.site = &mbb_emlrtRSI;
  c_st.site = &nbb_emlrtRSI;
  d_st.site = &obb_emlrtRSI;
  if (idx_size < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  if (idx_data[0] > Data.size(1)) {
    int32_T i;
    int32_T loop_ub;
    dataArray.set_size(&qkb_emlrtRTEI, &sp, 1,
                       static_cast<int32_T>(idx_data[0]));
    i = Data.size(1);
    for (int32_T n{0}; n < i; n++) {
      loop_ub = Data.size(1) - 1;
      if (n > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(n, 0, loop_ub, &lr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (n > dataArray.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(n, 0, dataArray.size(1) - 1, &mr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      dataArray[n] = Data[n];
    }
    if ((static_cast<int32_T>(idx_data[0]) - 1 < 0) ||
        (static_cast<int32_T>(idx_data[0]) - 1 > dataArray.size(1) - 1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx_data[0]) - 1, 0,
                                    dataArray.size(1) - 1, &nr_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    dataArray[static_cast<int32_T>(idx_data[0]) - 1] = rhs.Data[0];
    Data.set_size(&rkb_emlrtRTEI, &sp, 1, Data.size(1));
    loop_ub = dataArray.size(1);
    Data.set_size(&rkb_emlrtRTEI, &sp, Data.size(0), dataArray.size(1));
    for (i = 0; i < loop_ub; i++) {
      Data[i] = dataArray[i];
    }
  } else {
    int32_T i;
    i = Data.size(1) - 1;
    if ((static_cast<int32_T>(idx_data[0]) - 1 < 0) ||
        (static_cast<int32_T>(idx_data[0]) - 1 > i)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx_data[0]) - 1, 0, i,
                                    &kr_emlrtBCI, (emlrtConstCTX)&sp);
    }
    Data[static_cast<int32_T>(idx_data[0]) - 1] = rhs.Data[0];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void b_rigidtform3d::parenReference(const emlrtStack &sp,
                                    b_rigidtform3d &this1) const
{
  __m128 b_r;
  __m128 r1;
  b_rigidtform3d mjd_emlrtRSI;
  images::geotrans::internal::b_rigidtform3dImpl dataArray_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T A_in_tmp;
  real32_T A_in[16];
  real32_T Ac[16];
  real32_T b_Ac[16];
  real32_T R2[9];
  real32_T R_clamped[9];
  real32_T U[9];
  real32_T V[9];
  real32_T b_x;
  real32_T x;
  real32_T y;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &upb_emlrtRSI;
  b_st.site = &vpb_emlrtRSI;
  mjd_emlrtRSI.init(b_st);
  dataArray_data = Data[0];
  this1.Data.set_size(&ky_emlrtRTEI, &sp, 1, 1);
  this1.Data[0] = dataArray_data;
  st.site = &tpb_emlrtRSI;
  b_st.site = &wpb_emlrtRSI;
  for (int32_T i{0}; i < 3; i++) {
    A_in_tmp = i << 2;
    A_in[A_in_tmp] = dataArray_data.R[3 * i];
    A_in[A_in_tmp + 1] = dataArray_data.R[3 * i + 1];
    A_in[A_in_tmp + 2] = dataArray_data.R[3 * i + 2];
    A_in[i + 12] = dataArray_data.Translation[i];
  }
  A_in[3] = 0.0F;
  A_in[7] = 0.0F;
  A_in[11] = 0.0F;
  A_in[15] = 1.0F;
  c_st.site = &fg_emlrtRSI;
  d_st.site = &rx_emlrtRSI;
  e_st.site = &sx_emlrtRSI;
  for (A_in_tmp = 0; A_in_tmp < 9; A_in_tmp++) {
    R_clamped[A_in_tmp] = muSingleScalarMax(
        muSingleScalarMin(A_in[A_in_tmp % 3 + ((A_in_tmp / 3) << 2)], 1.0F),
        -1.0F);
  }
  f_st.site = &kv_emlrtRSI;
  svd(f_st, R_clamped, U, this1.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (A_in_tmp = 0; A_in_tmp < 3; A_in_tmp++) {
      R2[i + 3 * A_in_tmp] =
          (x * V[A_in_tmp] + y * V[A_in_tmp + 3]) + b_x * V[A_in_tmp + 6];
    }
  }
  f_st.site = &lv_emlrtRSI;
  if (det(f_st, R2) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      A_in_tmp = 3 * i + 1;
      x = R2[3 * i];
      R2[3 * i] = R2[A_in_tmp];
      R2[A_in_tmp] = x;
    }
  }
  b_r = _mm_loadu_ps(&R_clamped[0]);
  r1 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R_clamped[4]);
  r1 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(b_r, r1));
  U[8] = R_clamped[8] - R2[8];
  f_st.site = &mv_emlrtRSI;
  x = b_norm(f_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  for (int32_T i{0}; i < 3; i++) {
    A_in_tmp = i << 2;
    Ac[A_in_tmp] = R2[3 * i];
    Ac[A_in_tmp + 1] = R2[3 * i + 1];
    Ac[A_in_tmp + 2] = R2[3 * i + 2];
    Ac[i + 12] = A_in[i + 12];
  }
  Ac[3] = 0.0F;
  Ac[7] = 0.0F;
  Ac[11] = 0.0F;
  Ac[15] = 1.0F;
  c_st.site = &ep_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  x = c_norm(d_st, Ac);
  d_st.site = &fp_emlrtRSI;
  y = c_norm(d_st, A_in);
  b_r = _mm_loadu_ps(&Ac[0]);
  r1 = _mm_loadu_ps(&A_in[0]);
  _mm_storeu_ps(&b_Ac[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&Ac[4]);
  r1 = _mm_loadu_ps(&A_in[4]);
  _mm_storeu_ps(&b_Ac[4], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&Ac[8]);
  r1 = _mm_loadu_ps(&A_in[8]);
  _mm_storeu_ps(&b_Ac[8], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&Ac[12]);
  r1 = _mm_loadu_ps(&A_in[12]);
  _mm_storeu_ps(&b_Ac[12], _mm_sub_ps(b_r, r1));
  d_st.site = &gp_emlrtRSI;
  b_x = c_norm(d_st, b_Ac);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &gg_emlrtRSI;
  images::geotrans::internal::c_checkTransformationMatrixCond(c_st, Ac);
  c_st.site = &qx_emlrtRSI;
  d_st.site = &tx_emlrtRSI;
  e_st.site = &hv_emlrtRSI;
  f_st.site = &iv_emlrtRSI;
  for (A_in_tmp = 0; A_in_tmp < 9; A_in_tmp++) {
    R_clamped[A_in_tmp] =
        muSingleScalarMax(muSingleScalarMin(R2[A_in_tmp], 1.0F), -1.0F);
  }
  g_st.site = &kv_emlrtRSI;
  svd(g_st, R_clamped, U, this1.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (A_in_tmp = 0; A_in_tmp < 3; A_in_tmp++) {
      this1.R[i + 3 * A_in_tmp] =
          (x * V[A_in_tmp] + y * V[A_in_tmp + 3]) + b_x * V[A_in_tmp + 6];
    }
  }
  g_st.site = &lv_emlrtRSI;
  if (det(g_st, this1.R) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      A_in_tmp = 3 * i + 1;
      x = this1.R[3 * i];
      this1.R[3 * i] = this1.R[A_in_tmp];
      this1.R[A_in_tmp] = x;
    }
  }
  b_r = _mm_loadu_ps(&R_clamped[0]);
  r1 = _mm_loadu_ps(&this1.R[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R_clamped[4]);
  r1 = _mm_loadu_ps(&this1.R[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(b_r, r1));
  U[8] = R_clamped[8] - this1.R[8];
  g_st.site = &mv_emlrtRSI;
  x = b_norm(g_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      this1.R[i] = R_clamped[i];
    }
  }
  f_st.site = &jv_emlrtRSI;
  g_st.site = &fp_emlrtRSI;
  x = b_norm(g_st, R2);
  g_st.site = &fp_emlrtRSI;
  y = b_norm(g_st, this1.R);
  b_r = _mm_loadu_ps(&R2[0]);
  r1 = _mm_loadu_ps(&this1.R[0]);
  _mm_storeu_ps(&R2[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R2[4]);
  r1 = _mm_loadu_ps(&this1.R[4]);
  _mm_storeu_ps(&R2[4], _mm_sub_ps(b_r, r1));
  R2[8] -= this1.R[8];
  g_st.site = &gp_emlrtRSI;
  b_x = b_norm(g_st, R2);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  this1.Translation[0] = A_in[12];
  this1.Translation[1] = A_in[13];
  this1.Translation[2] = A_in[14];
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void b_rigidtform3d::parenReference(const emlrtStack &sp, uint32_T idx,
                                    b_rigidtform3d &this1) const
{
  __m128 b_r;
  __m128 r1;
  b_rigidtform3d mjd_emlrtRSI;
  images::geotrans::internal::b_rigidtform3dImpl dataArray_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T A_in_tmp;
  real32_T A_in[16];
  real32_T Ac[16];
  real32_T b_Ac[16];
  real32_T R2[9];
  real32_T R_clamped[9];
  real32_T U[9];
  real32_T V[9];
  real32_T b_x;
  real32_T x;
  real32_T y;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &upb_emlrtRSI;
  b_st.site = &vpb_emlrtRSI;
  mjd_emlrtRSI.init(b_st);
  if (static_cast<real_T>(idx) != static_cast<int32_T>(idx)) {
    emlrtIntegerCheckR2012b(static_cast<real_T>(idx), &db_emlrtDCI,
                            (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(idx) - 1 < 0) ||
      (static_cast<int32_T>(idx) - 1 > Data.size(1) - 1)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx) - 1, 0,
                                  Data.size(1) - 1, &ri_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  dataArray_data = Data[static_cast<int32_T>(idx) - 1];
  this1.Data.set_size(&ky_emlrtRTEI, &sp, 1, 1);
  this1.Data[0] = dataArray_data;
  st.site = &tpb_emlrtRSI;
  b_st.site = &wpb_emlrtRSI;
  for (int32_T i{0}; i < 3; i++) {
    A_in_tmp = i << 2;
    A_in[A_in_tmp] = dataArray_data.R[3 * i];
    A_in[A_in_tmp + 1] = dataArray_data.R[3 * i + 1];
    A_in[A_in_tmp + 2] = dataArray_data.R[3 * i + 2];
    A_in[i + 12] = dataArray_data.Translation[i];
  }
  A_in[3] = 0.0F;
  A_in[7] = 0.0F;
  A_in[11] = 0.0F;
  A_in[15] = 1.0F;
  c_st.site = &fg_emlrtRSI;
  d_st.site = &rx_emlrtRSI;
  e_st.site = &sx_emlrtRSI;
  for (A_in_tmp = 0; A_in_tmp < 9; A_in_tmp++) {
    R_clamped[A_in_tmp] = muSingleScalarMax(
        muSingleScalarMin(A_in[A_in_tmp % 3 + ((A_in_tmp / 3) << 2)], 1.0F),
        -1.0F);
  }
  f_st.site = &kv_emlrtRSI;
  svd(f_st, R_clamped, U, this1.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (A_in_tmp = 0; A_in_tmp < 3; A_in_tmp++) {
      R2[i + 3 * A_in_tmp] =
          (x * V[A_in_tmp] + y * V[A_in_tmp + 3]) + b_x * V[A_in_tmp + 6];
    }
  }
  f_st.site = &lv_emlrtRSI;
  if (det(f_st, R2) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      A_in_tmp = 3 * i + 1;
      x = R2[3 * i];
      R2[3 * i] = R2[A_in_tmp];
      R2[A_in_tmp] = x;
    }
  }
  b_r = _mm_loadu_ps(&R_clamped[0]);
  r1 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R_clamped[4]);
  r1 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(b_r, r1));
  U[8] = R_clamped[8] - R2[8];
  f_st.site = &mv_emlrtRSI;
  x = b_norm(f_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  for (int32_T i{0}; i < 3; i++) {
    A_in_tmp = i << 2;
    Ac[A_in_tmp] = R2[3 * i];
    Ac[A_in_tmp + 1] = R2[3 * i + 1];
    Ac[A_in_tmp + 2] = R2[3 * i + 2];
    Ac[i + 12] = A_in[i + 12];
  }
  Ac[3] = 0.0F;
  Ac[7] = 0.0F;
  Ac[11] = 0.0F;
  Ac[15] = 1.0F;
  c_st.site = &ep_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  x = c_norm(d_st, Ac);
  d_st.site = &fp_emlrtRSI;
  y = c_norm(d_st, A_in);
  b_r = _mm_loadu_ps(&Ac[0]);
  r1 = _mm_loadu_ps(&A_in[0]);
  _mm_storeu_ps(&b_Ac[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&Ac[4]);
  r1 = _mm_loadu_ps(&A_in[4]);
  _mm_storeu_ps(&b_Ac[4], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&Ac[8]);
  r1 = _mm_loadu_ps(&A_in[8]);
  _mm_storeu_ps(&b_Ac[8], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&Ac[12]);
  r1 = _mm_loadu_ps(&A_in[12]);
  _mm_storeu_ps(&b_Ac[12], _mm_sub_ps(b_r, r1));
  d_st.site = &gp_emlrtRSI;
  b_x = c_norm(d_st, b_Ac);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &gg_emlrtRSI;
  images::geotrans::internal::c_checkTransformationMatrixCond(c_st, Ac);
  c_st.site = &qx_emlrtRSI;
  d_st.site = &tx_emlrtRSI;
  e_st.site = &hv_emlrtRSI;
  f_st.site = &iv_emlrtRSI;
  for (A_in_tmp = 0; A_in_tmp < 9; A_in_tmp++) {
    R_clamped[A_in_tmp] =
        muSingleScalarMax(muSingleScalarMin(R2[A_in_tmp], 1.0F), -1.0F);
  }
  g_st.site = &kv_emlrtRSI;
  svd(g_st, R_clamped, U, this1.R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (A_in_tmp = 0; A_in_tmp < 3; A_in_tmp++) {
      this1.R[i + 3 * A_in_tmp] =
          (x * V[A_in_tmp] + y * V[A_in_tmp + 3]) + b_x * V[A_in_tmp + 6];
    }
  }
  g_st.site = &lv_emlrtRSI;
  if (det(g_st, this1.R) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      A_in_tmp = 3 * i + 1;
      x = this1.R[3 * i];
      this1.R[3 * i] = this1.R[A_in_tmp];
      this1.R[A_in_tmp] = x;
    }
  }
  b_r = _mm_loadu_ps(&R_clamped[0]);
  r1 = _mm_loadu_ps(&this1.R[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R_clamped[4]);
  r1 = _mm_loadu_ps(&this1.R[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(b_r, r1));
  U[8] = R_clamped[8] - this1.R[8];
  g_st.site = &mv_emlrtRSI;
  x = b_norm(g_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      this1.R[i] = R_clamped[i];
    }
  }
  f_st.site = &jv_emlrtRSI;
  g_st.site = &fp_emlrtRSI;
  x = b_norm(g_st, R2);
  g_st.site = &fp_emlrtRSI;
  y = b_norm(g_st, this1.R);
  b_r = _mm_loadu_ps(&R2[0]);
  r1 = _mm_loadu_ps(&this1.R[0]);
  _mm_storeu_ps(&R2[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R2[4]);
  r1 = _mm_loadu_ps(&this1.R[4]);
  _mm_storeu_ps(&R2[4], _mm_sub_ps(b_r, r1));
  R2[8] -= this1.R[8];
  g_st.site = &gp_emlrtRSI;
  b_x = b_norm(g_st, R2);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  this1.Translation[0] = A_in[12];
  this1.Translation[1] = A_in[13];
  this1.Translation[2] = A_in[14];
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void b_rigidtform3d::parenReference(const emlrtStack &sp,
                                    const array<real_T, 1U> &idx,
                                    b_rigidtform3d &this1) const
{
  __m128 b_r;
  __m128 r1;
  b_rigidtform3d mjd_emlrtRSI;
  array<images::geotrans::internal::b_rigidtform3dImpl, 2U> dataArray;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T i;
  int32_T i1;
  int32_T n;
  real32_T A_in[16];
  real32_T Ac[16];
  real32_T b_Ac[16];
  real32_T R2[9];
  real32_T R_clamped[9];
  real32_T U[9];
  real32_T V[9];
  real32_T b_x;
  real32_T x;
  real32_T y;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &upb_emlrtRSI;
  b_st.site = &vpb_emlrtRSI;
  mjd_emlrtRSI.init(b_st);
  i = idx.size(0);
  dataArray.set_size(&skb_emlrtRTEI, &sp, 1, idx.size(0));
  for (n = 0; n < i; n++) {
    if (n + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(n + 1, 1, i, &pr_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i1 = static_cast<int32_T>(idx[n]) - 1;
    if ((i1 < 0) || (i1 > Data.size(1) - 1)) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, Data.size(1) - 1, &ri_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (n > dataArray.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(n, 0, dataArray.size(1) - 1, &qr_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    dataArray[n] = Data[i1];
  }
  n = dataArray.size(1);
  this1.Data.set_size(&ky_emlrtRTEI, &sp, 1, dataArray.size(1));
  for (i = 0; i < n; i++) {
    this1.Data[i] = dataArray[i];
  }
  if (dataArray.size(1) - 1 < 0) {
    emlrtDynamicBoundsCheckR2012b(0, 0, dataArray.size(1) - 1, &or_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  st.site = &tpb_emlrtRSI;
  b_st.site = &wpb_emlrtRSI;
  for (i = 0; i < 3; i++) {
    n = i << 2;
    A_in[n] = dataArray[0].R[3 * i];
    A_in[n + 1] = dataArray[0].R[3 * i + 1];
    A_in[n + 2] = dataArray[0].R[3 * i + 2];
    A_in[i + 12] = dataArray[0].Translation[i];
  }
  A_in[3] = 0.0F;
  A_in[7] = 0.0F;
  A_in[11] = 0.0F;
  A_in[15] = 1.0F;
  c_st.site = &fg_emlrtRSI;
  d_st.site = &rx_emlrtRSI;
  e_st.site = &sx_emlrtRSI;
  for (n = 0; n < 9; n++) {
    R_clamped[n] = muSingleScalarMax(
        muSingleScalarMin(A_in[n % 3 + ((n / 3) << 2)], 1.0F), -1.0F);
  }
  f_st.site = &kv_emlrtRSI;
  svd(f_st, R_clamped, U, this1.R, V);
  for (i = 0; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (i1 = 0; i1 < 3; i1++) {
      R2[i + 3 * i1] = (x * V[i1] + y * V[i1 + 3]) + b_x * V[i1 + 6];
    }
  }
  f_st.site = &lv_emlrtRSI;
  if (det(f_st, R2) < 0.0F) {
    for (i = 0; i < 3; i++) {
      n = 3 * i + 1;
      x = R2[3 * i];
      R2[3 * i] = R2[n];
      R2[n] = x;
    }
  }
  b_r = _mm_loadu_ps(&R_clamped[0]);
  r1 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R_clamped[4]);
  r1 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(b_r, r1));
  U[8] = R_clamped[8] - R2[8];
  f_st.site = &mv_emlrtRSI;
  x = b_norm(f_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (i = 0; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  for (i = 0; i < 3; i++) {
    n = i << 2;
    Ac[n] = R2[3 * i];
    Ac[n + 1] = R2[3 * i + 1];
    Ac[n + 2] = R2[3 * i + 2];
    Ac[i + 12] = A_in[i + 12];
  }
  Ac[3] = 0.0F;
  Ac[7] = 0.0F;
  Ac[11] = 0.0F;
  Ac[15] = 1.0F;
  c_st.site = &ep_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  x = c_norm(d_st, Ac);
  d_st.site = &fp_emlrtRSI;
  y = c_norm(d_st, A_in);
  b_r = _mm_loadu_ps(&Ac[0]);
  r1 = _mm_loadu_ps(&A_in[0]);
  _mm_storeu_ps(&b_Ac[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&Ac[4]);
  r1 = _mm_loadu_ps(&A_in[4]);
  _mm_storeu_ps(&b_Ac[4], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&Ac[8]);
  r1 = _mm_loadu_ps(&A_in[8]);
  _mm_storeu_ps(&b_Ac[8], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&Ac[12]);
  r1 = _mm_loadu_ps(&A_in[12]);
  _mm_storeu_ps(&b_Ac[12], _mm_sub_ps(b_r, r1));
  d_st.site = &gp_emlrtRSI;
  b_x = c_norm(d_st, b_Ac);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &gg_emlrtRSI;
  images::geotrans::internal::c_checkTransformationMatrixCond(c_st, Ac);
  c_st.site = &qx_emlrtRSI;
  d_st.site = &tx_emlrtRSI;
  e_st.site = &hv_emlrtRSI;
  f_st.site = &iv_emlrtRSI;
  for (n = 0; n < 9; n++) {
    R_clamped[n] = muSingleScalarMax(muSingleScalarMin(R2[n], 1.0F), -1.0F);
  }
  g_st.site = &kv_emlrtRSI;
  svd(g_st, R_clamped, U, this1.R, V);
  for (i = 0; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (i1 = 0; i1 < 3; i1++) {
      this1.R[i + 3 * i1] = (x * V[i1] + y * V[i1 + 3]) + b_x * V[i1 + 6];
    }
  }
  g_st.site = &lv_emlrtRSI;
  if (det(g_st, this1.R) < 0.0F) {
    for (i = 0; i < 3; i++) {
      n = 3 * i + 1;
      x = this1.R[3 * i];
      this1.R[3 * i] = this1.R[n];
      this1.R[n] = x;
    }
  }
  b_r = _mm_loadu_ps(&R_clamped[0]);
  r1 = _mm_loadu_ps(&this1.R[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R_clamped[4]);
  r1 = _mm_loadu_ps(&this1.R[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(b_r, r1));
  U[8] = R_clamped[8] - this1.R[8];
  g_st.site = &mv_emlrtRSI;
  x = b_norm(g_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (i = 0; i < 9; i++) {
      this1.R[i] = R_clamped[i];
    }
  }
  f_st.site = &jv_emlrtRSI;
  g_st.site = &fp_emlrtRSI;
  x = b_norm(g_st, R2);
  g_st.site = &fp_emlrtRSI;
  y = b_norm(g_st, this1.R);
  b_r = _mm_loadu_ps(&R2[0]);
  r1 = _mm_loadu_ps(&this1.R[0]);
  _mm_storeu_ps(&R2[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R2[4]);
  r1 = _mm_loadu_ps(&this1.R[4]);
  _mm_storeu_ps(&R2[4], _mm_sub_ps(b_r, r1));
  R2[8] -= this1.R[8];
  g_st.site = &gp_emlrtRSI;
  b_x = b_norm(g_st, R2);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  this1.Translation[0] = A_in[12];
  this1.Translation[1] = A_in[13];
  this1.Translation[2] = A_in[14];
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void b_rigidtform3d::parenReference(const emlrtStack &sp, real_T idx,
                                    b_rigidtform3d *this1) const
{
  __m128 b_r;
  __m128 r1;
  b_rigidtform3d mjd_emlrtRSI;
  images::geotrans::internal::b_rigidtform3dImpl dataArray_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T A_in_tmp;
  real32_T A_in[16];
  real32_T Ac[16];
  real32_T b_Ac[16];
  real32_T R2[9];
  real32_T R_clamped[9];
  real32_T U[9];
  real32_T V[9];
  real32_T b_x;
  real32_T x;
  real32_T y;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &upb_emlrtRSI;
  b_st.site = &vpb_emlrtRSI;
  mjd_emlrtRSI.init(b_st);
  if (idx != static_cast<int32_T>(muDoubleScalarFloor(idx))) {
    emlrtIntegerCheckR2012b(idx, &db_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(idx) - 1 < 0) ||
      (static_cast<int32_T>(idx) - 1 > Data.size(1) - 1)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx) - 1, 0,
                                  Data.size(1) - 1, &ri_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  dataArray_data = Data[static_cast<int32_T>(idx) - 1];
  this1->Data.set_size(&ky_emlrtRTEI, &sp, 1, 1);
  this1->Data[0] = dataArray_data;
  st.site = &tpb_emlrtRSI;
  b_st.site = &wpb_emlrtRSI;
  for (int32_T i{0}; i < 3; i++) {
    A_in_tmp = i << 2;
    A_in[A_in_tmp] = dataArray_data.R[3 * i];
    A_in[A_in_tmp + 1] = dataArray_data.R[3 * i + 1];
    A_in[A_in_tmp + 2] = dataArray_data.R[3 * i + 2];
    A_in[i + 12] = dataArray_data.Translation[i];
  }
  A_in[3] = 0.0F;
  A_in[7] = 0.0F;
  A_in[11] = 0.0F;
  A_in[15] = 1.0F;
  c_st.site = &fg_emlrtRSI;
  d_st.site = &rx_emlrtRSI;
  e_st.site = &sx_emlrtRSI;
  for (A_in_tmp = 0; A_in_tmp < 9; A_in_tmp++) {
    R_clamped[A_in_tmp] = muSingleScalarMax(
        muSingleScalarMin(A_in[A_in_tmp % 3 + ((A_in_tmp / 3) << 2)], 1.0F),
        -1.0F);
  }
  f_st.site = &kv_emlrtRSI;
  svd(f_st, R_clamped, U, this1->R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (A_in_tmp = 0; A_in_tmp < 3; A_in_tmp++) {
      R2[i + 3 * A_in_tmp] =
          (x * V[A_in_tmp] + y * V[A_in_tmp + 3]) + b_x * V[A_in_tmp + 6];
    }
  }
  f_st.site = &lv_emlrtRSI;
  if (det(f_st, R2) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      A_in_tmp = 3 * i + 1;
      x = R2[3 * i];
      R2[3 * i] = R2[A_in_tmp];
      R2[A_in_tmp] = x;
    }
  }
  b_r = _mm_loadu_ps(&R_clamped[0]);
  r1 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R_clamped[4]);
  r1 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(b_r, r1));
  U[8] = R_clamped[8] - R2[8];
  f_st.site = &mv_emlrtRSI;
  x = b_norm(f_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  for (int32_T i{0}; i < 3; i++) {
    A_in_tmp = i << 2;
    Ac[A_in_tmp] = R2[3 * i];
    Ac[A_in_tmp + 1] = R2[3 * i + 1];
    Ac[A_in_tmp + 2] = R2[3 * i + 2];
    Ac[i + 12] = A_in[i + 12];
  }
  Ac[3] = 0.0F;
  Ac[7] = 0.0F;
  Ac[11] = 0.0F;
  Ac[15] = 1.0F;
  c_st.site = &ep_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  x = c_norm(d_st, Ac);
  d_st.site = &fp_emlrtRSI;
  y = c_norm(d_st, A_in);
  b_r = _mm_loadu_ps(&Ac[0]);
  r1 = _mm_loadu_ps(&A_in[0]);
  _mm_storeu_ps(&b_Ac[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&Ac[4]);
  r1 = _mm_loadu_ps(&A_in[4]);
  _mm_storeu_ps(&b_Ac[4], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&Ac[8]);
  r1 = _mm_loadu_ps(&A_in[8]);
  _mm_storeu_ps(&b_Ac[8], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&Ac[12]);
  r1 = _mm_loadu_ps(&A_in[12]);
  _mm_storeu_ps(&b_Ac[12], _mm_sub_ps(b_r, r1));
  d_st.site = &gp_emlrtRSI;
  b_x = c_norm(d_st, b_Ac);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &gg_emlrtRSI;
  images::geotrans::internal::c_checkTransformationMatrixCond(c_st, Ac);
  c_st.site = &qx_emlrtRSI;
  d_st.site = &tx_emlrtRSI;
  e_st.site = &hv_emlrtRSI;
  f_st.site = &iv_emlrtRSI;
  for (A_in_tmp = 0; A_in_tmp < 9; A_in_tmp++) {
    R_clamped[A_in_tmp] =
        muSingleScalarMax(muSingleScalarMin(R2[A_in_tmp], 1.0F), -1.0F);
  }
  g_st.site = &kv_emlrtRSI;
  svd(g_st, R_clamped, U, this1->R, V);
  for (int32_T i{0}; i < 3; i++) {
    x = U[i];
    y = U[i + 3];
    b_x = U[i + 6];
    for (A_in_tmp = 0; A_in_tmp < 3; A_in_tmp++) {
      this1->R[i + 3 * A_in_tmp] =
          (x * V[A_in_tmp] + y * V[A_in_tmp + 3]) + b_x * V[A_in_tmp + 6];
    }
  }
  g_st.site = &lv_emlrtRSI;
  if (det(g_st, this1->R) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      A_in_tmp = 3 * i + 1;
      x = this1->R[3 * i];
      this1->R[3 * i] = this1->R[A_in_tmp];
      this1->R[A_in_tmp] = x;
    }
  }
  b_r = _mm_loadu_ps(&R_clamped[0]);
  r1 = _mm_loadu_ps(&this1->R[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R_clamped[4]);
  r1 = _mm_loadu_ps(&this1->R[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(b_r, r1));
  U[8] = R_clamped[8] - this1->R[8];
  g_st.site = &mv_emlrtRSI;
  x = b_norm(g_st, U);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      this1->R[i] = R_clamped[i];
    }
  }
  f_st.site = &jv_emlrtRSI;
  g_st.site = &fp_emlrtRSI;
  x = b_norm(g_st, R2);
  g_st.site = &fp_emlrtRSI;
  y = b_norm(g_st, this1->R);
  b_r = _mm_loadu_ps(&R2[0]);
  r1 = _mm_loadu_ps(&this1->R[0]);
  _mm_storeu_ps(&R2[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R2[4]);
  r1 = _mm_loadu_ps(&this1->R[4]);
  _mm_storeu_ps(&R2[4], _mm_sub_ps(b_r, r1));
  R2[8] -= this1->R[8];
  g_st.site = &gp_emlrtRSI;
  b_x = b_norm(g_st, R2);
  if (!(b_x / muSingleScalarMax(muSingleScalarMax(x, y), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  this1->Translation[0] = A_in[12];
  this1->Translation[1] = A_in[13];
  this1->Translation[2] = A_in[14];
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void rigidtform3d::repmat(const emlrtStack &sp, real_T varargin_1)
{
  images::geotrans::internal::rigidtform3dImpl a_data;
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ew_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  a_data = Data.data[0];
  b_st.site = &ne_emlrtRSI;
  if ((varargin_1 != varargin_1) || muDoubleScalarIsInf(varargin_1)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &k_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  i = static_cast<int32_T>(varargin_1);
  Data.size[0] = static_cast<int32_T>(varargin_1);
  Data.size[1] = static_cast<int32_T>(varargin_1);
  if (static_cast<int32_T>(varargin_1) != 0) {
    for (int32_T jtilecol{0}; jtilecol < i; jtilecol++) {
      int32_T ibtile;
      ibtile = jtilecol * static_cast<int32_T>(varargin_1);
      for (int32_T itilerow{0}; itilerow < i; itilerow++) {
        Data.data[ibtile + itilerow] = a_data;
      }
    }
  }
}

} // namespace coder

// End of code generation (rigidtform3d.cpp)
