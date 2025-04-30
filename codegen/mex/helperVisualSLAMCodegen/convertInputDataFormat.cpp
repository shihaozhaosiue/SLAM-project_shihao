//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// convertInputDataFormat.cpp
//
// Code generation for function 'convertInputDataFormat'
//

// Include files
#include "convertInputDataFormat.h"
#include "cameraIntrinsics.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rigidtform3d.h"
#include "rotationToQuaternion.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "blas.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstddef>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo hvb_emlrtRSI{
    178,          // lineNo
    "mtimesPage", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

static emlrtRSInfo ckc_emlrtRSI{
    101,                           // lineNo
    "convertToProjectionMatrices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

static emlrtBCInfo yj_emlrtBCI{
    -1,           // iFirst
    -1,           // iLast
    178,          // lineNo
    31,           // colNo
    "",           // aName
    "mtimesPage", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo ak_emlrtBCI{
    -1,           // iFirst
    -1,           // iLast
    178,          // lineNo
    40,           // colNo
    "",           // aName
    "mtimesPage", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo bk_emlrtBCI{
    -1,           // iFirst
    -1,           // iLast
    178,          // lineNo
    20,           // colNo
    "",           // aName
    "mtimesPage", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m", // pName
    0                                         // checkKind
};

static emlrtECInfo wb_emlrtECI{
    -1,           // nDims
    178,          // lineNo
    9,            // colNo
    "mtimesPage", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtECInfo jc_emlrtECI{
    -1,                     // nDims
    57,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo kc_emlrtECI{
    -1,                     // nDims
    58,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo lc_emlrtECI{
    -1,                     // nDims
    59,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo mc_emlrtECI{
    -1,                     // nDims
    62,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo nc_emlrtECI{
    -1,                     // nDims
    64,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo oc_emlrtECI{
    -1,                     // nDims
    65,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo pc_emlrtECI{
    -1,                     // nDims
    68,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo qc_emlrtECI{
    -1,                     // nDims
    69,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo rc_emlrtECI{
    -1,                     // nDims
    71,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo sc_emlrtECI{
    -1,                     // nDims
    74,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo tc_emlrtECI{
    -1,                     // nDims
    75,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo uc_emlrtECI{
    -1,                     // nDims
    76,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo fd_emlrtECI{
    2,                      // nDims
    48,                     // lineNo
    21,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo gd_emlrtECI{
    2,                      // nDims
    49,                     // lineNo
    21,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo hd_emlrtECI{
    2,                      // nDims
    50,                     // lineNo
    21,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo id_emlrtECI{
    2,                      // nDims
    62,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo wbb_emlrtRTEI{
    175,                      // lineNo
    5,                        // colNo
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtRTEInfo qib_emlrtRTEI{
    48,                     // lineNo
    21,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo rib_emlrtRTEI{
    49,                     // lineNo
    21,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo sib_emlrtRTEI{
    50,                     // lineNo
    21,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo tib_emlrtRTEI{
    57,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo uib_emlrtRTEI{
    58,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo vib_emlrtRTEI{
    59,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo wib_emlrtRTEI{
    62,                     // lineNo
    17,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo xib_emlrtRTEI{
    64,                     // lineNo
    17,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo yib_emlrtRTEI{
    65,                     // lineNo
    17,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo ajb_emlrtRTEI{
    68,                     // lineNo
    17,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo bjb_emlrtRTEI{
    69,                     // lineNo
    17,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo cjb_emlrtRTEI{
    71,                     // lineNo
    17,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo djb_emlrtRTEI{
    74,                     // lineNo
    17,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo ejb_emlrtRTEI{
    75,                     // lineNo
    17,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo fjb_emlrtRTEI{
    76,                     // lineNo
    17,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

// Function Declarations
static void binary_expand_op_35(const emlrtStack &sp,
                                coder::array<real_T, 2U> &in1,
                                const real_T in2[9], const int32_T in3_size[2]);

static void binary_expand_op_36(const emlrtStack &sp,
                                coder::array<real_T, 2U> &in1,
                                const real_T in2[9], const int32_T in3_size[2]);

// Function Definitions
static void binary_expand_op_35(const emlrtStack &sp,
                                coder::array<real_T, 2U> &in1,
                                const real_T in2[9], const int32_T in3_size[2])
{
  coder::array<real_T, 2U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in3_size[1] == 1) {
    loop_ub = in1.size(1);
  } else {
    loop_ub = in3_size[1];
  }
  b_in1.set_size(&sib_emlrtRTEI, &sp, 1, loop_ub);
  stride_0_1 = (in1.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_1] - in2[4];
  }
  in1.set_size(&sib_emlrtRTEI, &sp, 1, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_36(const emlrtStack &sp,
                                coder::array<real_T, 2U> &in1,
                                const real_T in2[9], const int32_T in3_size[2])
{
  coder::array<real_T, 2U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in3_size[1] == 1) {
    loop_ub = in1.size(1);
  } else {
    loop_ub = in3_size[1];
  }
  b_in1.set_size(&rib_emlrtRTEI, &sp, 1, loop_ub);
  stride_0_1 = (in1.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_1] - in2[8];
  }
  in1.set_size(&rib_emlrtRTEI, &sp, 1, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

namespace coder {
namespace vision {
namespace internal {
namespace bundleAdjust {
real_T convertInputDataFormat(const emlrtStack &sp,
                              const c_rigidtform3d &cameraPoses,
                              const cameraIntrinsics *intrinsics,
                              real_T cameraMatrices[6],
                              real_T quaternionBases[4],
                              real_T intrinsicsStruct_focalLength[2],
                              real_T intrinsicsStruct_principalPoint[2],
                              real_T c_intrinsicsStruct_radialDistor[],
                              int32_T d_intrinsicsStruct_radialDistor[2],
                              real_T c_intrinsicsStruct_tangentialDi[],
                              int32_T d_intrinsicsStruct_tangentialDi[2])
{
  array<real_T, 2U> r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T A_out_tmp[16];
  real_T R[9];
  real_T b_A_out_tmp[3];
  real_T d;
  real_T d1;
  real_T d2;
  real_T intrinsicsStruct_skew;
  real_T maxv;
  real_T s;
  real_T t;
  int32_T b_size_tmp_tmp_tmp_size[2];
  int32_T c_size_tmp_tmp_tmp_size[2];
  int32_T size_tmp_tmp_size[2];
  int32_T size_tmp_tmp_tmp_size[2];
  int32_T b_trueCount;
  int32_T c_trueCount;
  int32_T i;
  int32_T loop_ub;
  int32_T trueCount;
  boolean_T b;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  intrinsicsStruct_focalLength[0] = intrinsics->FocalLength[0];
  intrinsicsStruct_principalPoint[0] = intrinsics->PrincipalPoint[0];
  intrinsicsStruct_focalLength[1] = intrinsics->FocalLength[1];
  intrinsicsStruct_principalPoint[1] = intrinsics->PrincipalPoint[1];
  d_intrinsicsStruct_radialDistor[0] = 1;
  d_intrinsicsStruct_radialDistor[1] = 3;
  c_intrinsicsStruct_radialDistor[0] = 0.0;
  c_intrinsicsStruct_radialDistor[1] = 0.0;
  c_intrinsicsStruct_radialDistor[2] = 0.0;
  d_intrinsicsStruct_tangentialDi[0] = 1;
  d_intrinsicsStruct_tangentialDi[1] = 2;
  c_intrinsicsStruct_tangentialDi[0] = 0.0;
  c_intrinsicsStruct_tangentialDi[1] = 0.0;
  intrinsicsStruct_skew = intrinsics->Skew / intrinsics->FocalLength[0];
  st.site = &hub_emlrtRSI;
  for (i = 0; i < 6; i++) {
    cameraMatrices[i] = 0.0;
  }
  for (int32_T b_i{0}; b_i < 3; b_i++) {
    i = b_i << 2;
    A_out_tmp[i] = cameraPoses.R[3 * b_i];
    A_out_tmp[i + 1] = cameraPoses.R[3 * b_i + 1];
    A_out_tmp[i + 2] = cameraPoses.R[3 * b_i + 2];
    A_out_tmp[b_i + 12] = cameraPoses.Translation[b_i];
  }
  __m128d b_r;
  A_out_tmp[3] = 0.0;
  A_out_tmp[7] = 0.0;
  A_out_tmp[11] = 0.0;
  A_out_tmp[15] = 1.0;
  b_r = _mm_loadu_pd(&A_out_tmp[12]);
  _mm_storeu_pd(&b_A_out_tmp[0], _mm_mul_pd(b_r, _mm_set1_pd(-1.0)));
  d = b_A_out_tmp[0];
  t = b_A_out_tmp[1];
  maxv = -A_out_tmp[14];
  for (int32_T b_i{0}; b_i < 3; b_i++) {
    i = b_i << 2;
    cameraMatrices[b_i + 3] =
        (d * A_out_tmp[i] + t * A_out_tmp[i + 1]) + maxv * A_out_tmp[i + 2];
  }
  b_st.site = &ckc_emlrtRSI;
  for (int32_T b_i{0}; b_i < 3; b_i++) {
    R[3 * b_i] = A_out_tmp[b_i];
    R[3 * b_i + 1] = A_out_tmp[b_i + 4];
    R[3 * b_i + 2] = A_out_tmp[b_i + 8];
  }
  t = (R[0] + R[4]) + R[8];
  maxv = muDoubleScalarMax(R[0], muDoubleScalarMax(R[4], R[8]));
  i = 0;
  if (t >= 0.0) {
    i = 1;
  }
  size_tmp_tmp_size[0] = 1;
  size_tmp_tmp_size[1] = i;
  r1.set_size(&adb_emlrtRTEI, &b_st, 1, i);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    r1[0] = t + 1.0;
  }
  c_st.site = &tvb_emlrtRSI;
  b_sqrt(c_st, r1);
  if (i != r1.size(1)) {
    emlrtSubAssignSizeCheck1dR2017a(i, r1.size(1), &fc_emlrtECI, &b_st);
  }
  d = 0.0;
  if (r1.size(1) - 1 >= 0) {
    d = r1[0];
  }
  trueCount = 0;
  b = !(t >= 0.0);
  if (b && (maxv == R[0])) {
    trueCount = 1;
  }
  size_tmp_tmp_tmp_size[0] = 1;
  size_tmp_tmp_tmp_size[1] = trueCount;
  r1.set_size(&qib_emlrtRTEI, &b_st, 1, trueCount);
  if (trueCount - 1 >= 0) {
    r1[0] = (R[0] + 1.0) - R[4];
  }
  if ((r1.size(1) != trueCount) && ((r1.size(1) != 1) && (trueCount != 1))) {
    emlrtDimSizeImpxCheckR2021b(r1.size(1), 0, &fd_emlrtECI, &b_st);
  }
  if (r1.size(1) == trueCount) {
    loop_ub = r1.size(1) - 1;
    r1.set_size(&bdb_emlrtRTEI, &b_st, 1, r1.size(1));
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      r1[0] = r1[0] - R[8];
    }
  } else {
    binary_expand_op_36(b_st, r1, R, size_tmp_tmp_tmp_size);
  }
  c_st.site = &uvb_emlrtRSI;
  b_sqrt(c_st, r1);
  if (trueCount != r1.size(1)) {
    emlrtSubAssignSizeCheck1dR2017a(trueCount, r1.size(1), &gc_emlrtECI, &b_st);
  }
  if (r1.size(1) - 1 >= 0) {
    d = r1[0];
  }
  b_trueCount = 0;
  if (b && (maxv == R[4])) {
    b_trueCount = 1;
  }
  b_size_tmp_tmp_tmp_size[0] = 1;
  b_size_tmp_tmp_tmp_size[1] = b_trueCount;
  r1.set_size(&rib_emlrtRTEI, &b_st, 1, b_trueCount);
  if (b_trueCount - 1 >= 0) {
    r1[0] = (R[4] + 1.0) - R[0];
  }
  if ((r1.size(1) != b_trueCount) &&
      ((r1.size(1) != 1) && (b_trueCount != 1))) {
    emlrtDimSizeImpxCheckR2021b(r1.size(1), 0, &gd_emlrtECI, &b_st);
  }
  if (r1.size(1) == b_trueCount) {
    loop_ub = r1.size(1) - 1;
    r1.set_size(&cdb_emlrtRTEI, &b_st, 1, r1.size(1));
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      r1[0] = r1[0] - R[8];
    }
  } else {
    binary_expand_op_36(b_st, r1, R, b_size_tmp_tmp_tmp_size);
  }
  c_st.site = &vvb_emlrtRSI;
  b_sqrt(c_st, r1);
  if (b_trueCount != r1.size(1)) {
    emlrtSubAssignSizeCheck1dR2017a(b_trueCount, r1.size(1), &hc_emlrtECI,
                                    &b_st);
  }
  if (r1.size(1) - 1 >= 0) {
    d = r1[0];
  }
  c_trueCount = 0;
  if (b && (maxv == R[8])) {
    c_trueCount = 1;
  }
  c_size_tmp_tmp_tmp_size[0] = 1;
  c_size_tmp_tmp_tmp_size[1] = c_trueCount;
  r1.set_size(&sib_emlrtRTEI, &b_st, 1, c_trueCount);
  if (c_trueCount - 1 >= 0) {
    r1[0] = (R[8] + 1.0) - R[0];
  }
  if ((r1.size(1) != c_trueCount) &&
      ((r1.size(1) != 1) && (c_trueCount != 1))) {
    emlrtDimSizeImpxCheckR2021b(r1.size(1), 0, &hd_emlrtECI, &b_st);
  }
  if (r1.size(1) == c_trueCount) {
    loop_ub = r1.size(1) - 1;
    r1.set_size(&ddb_emlrtRTEI, &b_st, 1, r1.size(1));
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      r1[0] = r1[0] - R[4];
    }
  } else {
    binary_expand_op_35(b_st, r1, R, c_size_tmp_tmp_tmp_size);
  }
  c_st.site = &wvb_emlrtRSI;
  b_sqrt(c_st, r1);
  if (c_trueCount != r1.size(1)) {
    emlrtSubAssignSizeCheck1dR2017a(c_trueCount, r1.size(1), &ic_emlrtECI,
                                    &b_st);
  }
  if (r1.size(1) - 1 >= 0) {
    d = r1[0];
  }
  s = 0.5 / d;
  t = 0.0;
  if (i - 1 >= 0) {
    t = 0.5 * d;
  }
  r1.set_size(&tib_emlrtRTEI, &b_st, 1, trueCount);
  if (trueCount - 1 >= 0) {
    r1[0] = R[5] - R[7];
  }
  if (r1.size(1) == trueCount) {
    loop_ub = r1.size(1) - 1;
    r1.set_size(&gdb_emlrtRTEI, &b_st, 1, trueCount);
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      r1[0] = r1[0] * s;
    }
  } else {
    c_st.site = &xvb_emlrtRSI;
    binary_expand_op_23(c_st, r1, s, size_tmp_tmp_tmp_size);
  }
  if (trueCount != r1.size(1)) {
    emlrtSubAssignSizeCheck1dR2017a(trueCount, r1.size(1), &jc_emlrtECI, &b_st);
  }
  if (r1.size(1) - 1 >= 0) {
    t = r1[0];
  }
  r1.set_size(&uib_emlrtRTEI, &b_st, 1, b_trueCount);
  if (b_trueCount - 1 >= 0) {
    r1[0] = R[6] - R[2];
  }
  if (r1.size(1) == b_trueCount) {
    loop_ub = r1.size(1) - 1;
    r1.set_size(&hdb_emlrtRTEI, &b_st, 1, b_trueCount);
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      r1[0] = r1[0] * s;
    }
  } else {
    c_st.site = &yvb_emlrtRSI;
    binary_expand_op_23(c_st, r1, s, b_size_tmp_tmp_tmp_size);
  }
  if (b_trueCount != r1.size(1)) {
    emlrtSubAssignSizeCheck1dR2017a(b_trueCount, r1.size(1), &kc_emlrtECI,
                                    &b_st);
  }
  if (r1.size(1) - 1 >= 0) {
    t = r1[0];
  }
  r1.set_size(&vib_emlrtRTEI, &b_st, 1, c_trueCount);
  if (c_trueCount - 1 >= 0) {
    r1[0] = R[1] - R[3];
  }
  if (r1.size(1) == c_trueCount) {
    loop_ub = r1.size(1) - 1;
    r1.set_size(&idb_emlrtRTEI, &b_st, 1, c_trueCount);
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      r1[0] = r1[0] * s;
    }
  } else {
    c_st.site = &awb_emlrtRSI;
    binary_expand_op_23(c_st, r1, s, c_size_tmp_tmp_tmp_size);
  }
  if (c_trueCount != r1.size(1)) {
    emlrtSubAssignSizeCheck1dR2017a(c_trueCount, r1.size(1), &lc_emlrtECI,
                                    &b_st);
  }
  if (r1.size(1) - 1 >= 0) {
    t = r1[0];
  }
  r1.set_size(&wib_emlrtRTEI, &b_st, 1, i);
  if (i - 1 >= 0) {
    r1[0] = R[5] - R[7];
  }
  if ((r1.size(1) != i) && ((r1.size(1) != 1) && (i != 1))) {
    emlrtDimSizeImpxCheckR2021b(r1.size(1), 0, &id_emlrtECI, &b_st);
  }
  if (r1.size(1) == i) {
    loop_ub = r1.size(1) - 1;
    r1.set_size(&jdb_emlrtRTEI, &b_st, 1, r1.size(1));
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      r1[0] = r1[0] * s;
    }
  } else {
    c_st.site = &bwb_emlrtRSI;
    binary_expand_op_23(c_st, r1, s, size_tmp_tmp_size);
  }
  if (i != r1.size(1)) {
    emlrtSubAssignSizeCheck1dR2017a(i, r1.size(1), &mc_emlrtECI, &b_st);
  }
  maxv = 0.0;
  if (r1.size(1) - 1 >= 0) {
    maxv = r1[0];
  }
  if (trueCount - 1 >= 0) {
    maxv = 0.5 * d;
  }
  r1.set_size(&xib_emlrtRTEI, &b_st, 1, b_trueCount);
  if (b_trueCount - 1 >= 0) {
    r1[0] = R[1] + R[3];
  }
  if (r1.size(1) == b_trueCount) {
    loop_ub = r1.size(1) - 1;
    r1.set_size(&ldb_emlrtRTEI, &b_st, 1, b_trueCount);
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      r1[0] = r1[0] * s;
    }
  } else {
    c_st.site = &cwb_emlrtRSI;
    binary_expand_op_23(c_st, r1, s, b_size_tmp_tmp_tmp_size);
  }
  if (b_trueCount != r1.size(1)) {
    emlrtSubAssignSizeCheck1dR2017a(b_trueCount, r1.size(1), &nc_emlrtECI,
                                    &b_st);
  }
  if (r1.size(1) - 1 >= 0) {
    maxv = r1[0];
  }
  r1.set_size(&yib_emlrtRTEI, &b_st, 1, c_trueCount);
  if (c_trueCount - 1 >= 0) {
    r1[0] = R[2] + R[6];
  }
  if (r1.size(1) == c_trueCount) {
    loop_ub = r1.size(1) - 1;
    r1.set_size(&mdb_emlrtRTEI, &b_st, 1, c_trueCount);
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      r1[0] = r1[0] * s;
    }
  } else {
    c_st.site = &dwb_emlrtRSI;
    binary_expand_op_23(c_st, r1, s, c_size_tmp_tmp_tmp_size);
  }
  if (c_trueCount != r1.size(1)) {
    emlrtSubAssignSizeCheck1dR2017a(c_trueCount, r1.size(1), &oc_emlrtECI,
                                    &b_st);
  }
  if (r1.size(1) - 1 >= 0) {
    maxv = r1[0];
  }
  r1.set_size(&ajb_emlrtRTEI, &b_st, 1, i);
  if (i - 1 >= 0) {
    r1[0] = R[6] - R[2];
  }
  if (r1.size(1) == i) {
    loop_ub = r1.size(1) - 1;
    r1.set_size(&ndb_emlrtRTEI, &b_st, 1, i);
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      r1[0] = r1[0] * s;
    }
  } else {
    c_st.site = &ewb_emlrtRSI;
    binary_expand_op_23(c_st, r1, s, size_tmp_tmp_size);
  }
  if (i != r1.size(1)) {
    emlrtSubAssignSizeCheck1dR2017a(i, r1.size(1), &pc_emlrtECI, &b_st);
  }
  d1 = 0.0;
  if (r1.size(1) - 1 >= 0) {
    d1 = r1[0];
  }
  r1.set_size(&bjb_emlrtRTEI, &b_st, 1, trueCount);
  if (trueCount - 1 >= 0) {
    r1[0] = R[1] + R[3];
  }
  if (r1.size(1) == trueCount) {
    loop_ub = r1.size(1) - 1;
    r1.set_size(&odb_emlrtRTEI, &b_st, 1, trueCount);
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      r1[0] = r1[0] * s;
    }
  } else {
    c_st.site = &fwb_emlrtRSI;
    binary_expand_op_23(c_st, r1, s, size_tmp_tmp_tmp_size);
  }
  if (trueCount != r1.size(1)) {
    emlrtSubAssignSizeCheck1dR2017a(trueCount, r1.size(1), &qc_emlrtECI, &b_st);
  }
  if (r1.size(1) - 1 >= 0) {
    d1 = r1[0];
  }
  if (b_trueCount - 1 >= 0) {
    d1 = 0.5 * d;
  }
  r1.set_size(&cjb_emlrtRTEI, &b_st, 1, c_trueCount);
  if (c_trueCount - 1 >= 0) {
    r1[0] = R[5] + R[7];
  }
  if (r1.size(1) == c_trueCount) {
    loop_ub = r1.size(1) - 1;
    r1.set_size(&qdb_emlrtRTEI, &b_st, 1, c_trueCount);
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      r1[0] = r1[0] * s;
    }
  } else {
    c_st.site = &gwb_emlrtRSI;
    binary_expand_op_23(c_st, r1, s, c_size_tmp_tmp_tmp_size);
  }
  if (c_trueCount != r1.size(1)) {
    emlrtSubAssignSizeCheck1dR2017a(c_trueCount, r1.size(1), &rc_emlrtECI,
                                    &b_st);
  }
  if (r1.size(1) - 1 >= 0) {
    d1 = r1[0];
  }
  r1.set_size(&djb_emlrtRTEI, &b_st, 1, i);
  if (i - 1 >= 0) {
    r1[0] = R[1] - R[3];
  }
  if (r1.size(1) == i) {
    loop_ub = r1.size(1) - 1;
    r1.set_size(&rdb_emlrtRTEI, &b_st, 1, i);
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      r1[0] = r1[0] * s;
    }
  } else {
    c_st.site = &hwb_emlrtRSI;
    binary_expand_op_23(c_st, r1, s, size_tmp_tmp_size);
  }
  if (i != r1.size(1)) {
    emlrtSubAssignSizeCheck1dR2017a(i, r1.size(1), &sc_emlrtECI, &b_st);
  }
  d2 = 0.0;
  if (r1.size(1) - 1 >= 0) {
    d2 = r1[0];
  }
  r1.set_size(&ejb_emlrtRTEI, &b_st, 1, trueCount);
  if (trueCount - 1 >= 0) {
    r1[0] = R[2] + R[6];
  }
  if (r1.size(1) == trueCount) {
    loop_ub = r1.size(1) - 1;
    r1.set_size(&sdb_emlrtRTEI, &b_st, 1, trueCount);
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      r1[0] = r1[0] * s;
    }
  } else {
    c_st.site = &iwb_emlrtRSI;
    binary_expand_op_23(c_st, r1, s, size_tmp_tmp_tmp_size);
  }
  if (trueCount != r1.size(1)) {
    emlrtSubAssignSizeCheck1dR2017a(trueCount, r1.size(1), &tc_emlrtECI, &b_st);
  }
  if (r1.size(1) - 1 >= 0) {
    d2 = r1[0];
  }
  r1.set_size(&fjb_emlrtRTEI, &b_st, 1, b_trueCount);
  if (b_trueCount - 1 >= 0) {
    r1[0] = R[5] + R[7];
  }
  if (r1.size(1) == b_trueCount) {
    loop_ub = r1.size(1) - 1;
    r1.set_size(&tdb_emlrtRTEI, &b_st, 1, b_trueCount);
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      r1[0] = r1[0] * s;
    }
  } else {
    c_st.site = &jwb_emlrtRSI;
    binary_expand_op_23(c_st, r1, s, b_size_tmp_tmp_tmp_size);
  }
  if (b_trueCount != r1.size(1)) {
    emlrtSubAssignSizeCheck1dR2017a(b_trueCount, r1.size(1), &uc_emlrtECI,
                                    &b_st);
  }
  if (r1.size(1) - 1 >= 0) {
    d2 = r1[0];
  }
  if (c_trueCount - 1 >= 0) {
    d2 = 0.5 * d;
  }
  quaternionBases[0] = t;
  quaternionBases[1] = maxv;
  quaternionBases[2] = d1;
  quaternionBases[3] = d2;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return intrinsicsStruct_skew;
}

void mtimesPage(const emlrtStack &sp, const array<real_T, 3U> &x,
                const array<real_T, 3U> &y, array<real_T, 3U> &mtimes)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack st;
  real_T b_data[9];
  real_T a_data[3];
  real_T tmp_data[3];
  real_T alpha1;
  real_T beta1;
  int32_T b_iv[2];
  int32_T b_iv1[2];
  int32_T i;
  int32_T loop_ub_tmp;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = &sp;
  st.tls = sp.tls;
  i = x.size(2);
  mtimes.set_size(&wbb_emlrtRTEI, &sp, 1, 3, x.size(2));
  loop_ub_tmp = 3 * x.size(2);
  for (int32_T i1{0}; i1 < loop_ub_tmp; i1++) {
    mtimes[i1] = 0.0;
  }
  TRANSB1 = 'N';
  TRANSA1 = 'N';
  alpha1 = 1.0;
  beta1 = 0.0;
  m_t = (ptrdiff_t)1;
  n_t = (ptrdiff_t)3;
  k_t = (ptrdiff_t)3;
  lda_t = (ptrdiff_t)1;
  ldb_t = (ptrdiff_t)3;
  ldc_t = (ptrdiff_t)1;
  b_iv[0] = 1;
  b_iv1[0] = 1;
  b_iv[1] = 3;
  b_iv1[1] = 3;
  for (loop_ub_tmp = 0; loop_ub_tmp < i; loop_ub_tmp++) {
    if (loop_ub_tmp + 1 > mtimes.size(2)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, mtimes.size(2),
                                    &bk_emlrtBCI, (emlrtConstCTX)&sp);
    }
    st.site = &hvb_emlrtRSI;
    if (loop_ub_tmp + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, i, &yj_emlrtBCI, &st);
    }
    a_data[0] = x[3 * loop_ub_tmp];
    a_data[1] = x[3 * loop_ub_tmp + 1];
    a_data[2] = x[3 * loop_ub_tmp + 2];
    if (loop_ub_tmp + 1 > y.size(2)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, y.size(2), &ak_emlrtBCI,
                                    &st);
    }
    for (int32_T i1{0}; i1 < 3; i1++) {
      b_data[3 * i1] = y[3 * i1 + 9 * loop_ub_tmp];
      b_data[3 * i1 + 1] = y[(3 * i1 + 9 * loop_ub_tmp) + 1];
      b_data[3 * i1 + 2] = y[(3 * i1 + 9 * loop_ub_tmp) + 2];
    }
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &a_data[0], &lda_t,
          &b_data[0], &ldb_t, &beta1, &tmp_data[0], &ldc_t);
    emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &b_iv1[0], 2, &wb_emlrtECI,
                                  (emlrtCTX)&sp);
    mtimes[3 * loop_ub_tmp] = tmp_data[0];
    mtimes[3 * loop_ub_tmp + 1] = tmp_data[1];
    mtimes[3 * loop_ub_tmp + 2] = tmp_data[2];
  }
}

} // namespace bundleAdjust
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (convertInputDataFormat.cpp)
