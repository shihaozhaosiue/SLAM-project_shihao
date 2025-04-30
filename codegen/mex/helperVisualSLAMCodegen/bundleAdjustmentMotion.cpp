//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// bundleAdjustmentMotion.cpp
//
// Code generation for function 'bundleAdjustmentMotion'
//

// Include files
#include "bundleAdjustmentMotion.h"
#include "cameraIntrinsics.h"
#include "computeReprojectionErrors.h"
#include "convertInputDataFormat.h"
#include "find.h"
#include "helperVisualSLAMCodegen_data.h"
#include "mldivide.h"
#include "norm.h"
#include "rigidtform3d.h"
#include "rodriguesVectorToMatrix.h"
#include "rt_nonfinite.h"
#include "sparse1.h"
#include "sum.h"
#include "validateAndParseInputs1.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include "visionSBAAuxiliaryVariableCore_api.hpp"
#include "visionSBAUpdateRotationVectorCore_api.hpp"
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo
    gjc_emlrtRSI{
        8,                        // lineNo
        "bundleAdjustmentMotion", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\bundleAdjustmentMotion"
        ".m" // pathName
    };

static emlrtRSInfo hjc_emlrtRSI{
    178,        // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo ijc_emlrtRSI{
    197,        // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo jjc_emlrtRSI{
    198,        // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo kjc_emlrtRSI{
    242,        // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo ljc_emlrtRSI{
    290,        // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo mjc_emlrtRSI{
    294,        // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo njc_emlrtRSI{
    301,        // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo ojc_emlrtRSI{
    304,        // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo pjc_emlrtRSI{
    325,        // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo qjc_emlrtRSI{
    328,        // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo rjc_emlrtRSI{
    332,        // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo dkc_emlrtRSI{
    52,                                               // lineNo
    "visionSBAAuxiliaryBuildable/visionSBAAuxiliary", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionSBAAuxiliaryBuildable.m" // pathName
};

static emlrtRSInfo ekc_emlrtRSI{
    57,                                               // lineNo
    "visionSBAAuxiliaryBuildable/visionSBAAuxiliary", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionSBAAuxiliaryBuildable.m" // pathName
};

static emlrtRSInfo pkc_emlrtRSI{
    432,              // lineNo
    "inOutTypeMatch", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtDCInfo mb_emlrtDCI{
    122,                                              // lineNo
    31,                                               // colNo
    "visionSBAAuxiliaryBuildable/visionSBAAuxiliary", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionSBAAuxiliaryBuildable.m", // pName
    4                                           // checkKind
};

static emlrtECInfo dd_emlrtECI{
    2,          // nDims
    294,        // lineNo
    18,         // colNo
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pName
};

static emlrtECInfo ed_emlrtECI{
    2,          // nDims
    197,        // lineNo
    18,         // colNo
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pName
};

static emlrtRTEInfo cib_emlrtRTEI{
    55,         // lineNo
    1,          // colNo
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pName
};

static emlrtRTEInfo dib_emlrtRTEI{
    178,        // lineNo
    102,        // colNo
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pName
};

static emlrtRTEInfo eib_emlrtRTEI{
    36,         // lineNo
    13,         // colNo
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pName
};

static emlrtRTEInfo fib_emlrtRTEI{
    122,                           // lineNo
    13,                            // colNo
    "visionSBAAuxiliaryBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionSBAAuxiliaryBuildable.m" // pName
};

static emlrtRTEInfo gib_emlrtRTEI{
    124,                           // lineNo
    13,                            // colNo
    "visionSBAAuxiliaryBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionSBAAuxiliaryBuildable.m" // pName
};

static emlrtRTEInfo hib_emlrtRTEI{
    125,                           // lineNo
    13,                            // colNo
    "visionSBAAuxiliaryBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionSBAAuxiliaryBuildable.m" // pName
};

static emlrtRTEInfo iib_emlrtRTEI{
    127,                           // lineNo
    13,                            // colNo
    "visionSBAAuxiliaryBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionSBAAuxiliaryBuildable.m" // pName
};

static emlrtRTEInfo jib_emlrtRTEI{
    197,        // lineNo
    18,         // colNo
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pName
};

static emlrtRTEInfo kib_emlrtRTEI{
    197,        // lineNo
    33,         // colNo
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pName
};

static emlrtRTEInfo lib_emlrtRTEI{
    197,        // lineNo
    5,          // colNo
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pName
};

static emlrtRTEInfo mib_emlrtRTEI{
    281,        // lineNo
    28,         // colNo
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pName
};

static emlrtRTEInfo nib_emlrtRTEI{
    290,        // lineNo
    9,          // colNo
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pName
};

static emlrtRTEInfo oib_emlrtRTEI{
    294,        // lineNo
    18,         // colNo
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pName
};

static emlrtRTEInfo pib_emlrtRTEI{
    294,        // lineNo
    38,         // colNo
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pName
};

static const boolean_T bv[36]{
    true,  false, false, false, false, false, false, true,  false,
    false, false, false, false, false, true,  false, false, false,
    false, false, false, true,  false, false, false, false, false,
    false, true,  false, false, false, false, false, false, true};

// Function Definitions
namespace coder {
void b_bundleAdjustmentMotion(const emlrtStack &sp,
                              const array<real32_T, 2U> &varargin_1,
                              const array<real32_T, 2U> &varargin_2,
                              const c_rigidtform3d &varargin_3,
                              const cameraIntrinsics *varargin_4,
                              c_rigidtform3d &refinedPose)
{
  static const char_T b_typeN[7]{"motion"};
  b_sparse b_this;
  b_sparse visibility;
  array<real_T, 2U> Vi;
  array<real_T, 2U> Wij;
  array<real_T, 2U> b_measurements;
  array<real_T, 2U> b_r;
  array<real_T, 2U> b_xyzPoints;
  array<real_T, 2U> curMeanErr;
  array<real_T, 2U> ebi;
  array<real_T, 2U> measurements;
  array<real_T, 2U> newErrors;
  array<real_T, 2U> r3;
  array<real_T, 2U> r4;
  array<real_T, 2U> xyzPoints;
  array<int32_T, 1U> b_jj;
  array<int32_T, 1U> irs;
  array<real32_T, 1U> mjd_emlrtRSI;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T Uj[36];
  real_T b_Uj[36];
  real_T R[9];
  real_T b_R[9];
  real_T Xa[6];
  real_T cameraMatrices[6];
  real_T newCameraMatrices[6];
  real_T quaternionBases[4];
  real_T c_intrinsics_radialDistortion_d[3];
  real_T radDistortion_data[3];
  real_T d_intrinsics_tangentialDistorti[2];
  real_T intrinsics_focalLength[2];
  real_T intrinsics_principalPoint[2];
  real_T d;
  real_T fixedCameraIndex;
  real_T intrinsics_skew;
  real_T mu;
  real_T skew;
  real_T v;
  int32_T c_intrinsics_radialDistortion_s[2];
  int32_T c_intrinsics_tangentialDistorti[2];
  int32_T i;
  int32_T iter;
  int32_T k;
  int32_T stopCondition;
  int8_T tmp_data[36];
  boolean_T jj[36];
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
  st.site = &gjc_emlrtRSI;
  b_st.site = &esb_emlrtRSI;
  c_st.site = &fsb_emlrtRSI;
  vision::internal::bundleAdjust::validateAndParseInputs(
      c_st, varargin_1, varargin_2, varargin_3,
      (cameraIntrinsics **)&varargin_4, xyzPoints, measurements, visibility);
  c_st.site = &gsb_emlrtRSI;
  intrinsics_skew = vision::internal::bundleAdjust::convertInputDataFormat(
      c_st, varargin_3, varargin_4, cameraMatrices, quaternionBases,
      intrinsics_focalLength, intrinsics_principalPoint,
      c_intrinsics_radialDistortion_d, c_intrinsics_radialDistortion_s,
      d_intrinsics_tangentialDistorti, c_intrinsics_tangentialDistorti);
  curMeanErr.set_size(&cib_emlrtRTEI, &b_st, 1, 1);
  curMeanErr[0] = 0.0;
  v = 2.0;
  mu = rtMinusInf;
  iter = 0;
  stopCondition = 0;
  for (i = 0; i < 36; i++) {
    jj[i] = false;
  }
  for (k = 0; k < 6; k++) {
    jj[k + 6 * k] = true;
  }
  int32_T exitg2;
  do {
    exitg2 = 0;
    if (stopCondition == 0) {
      iter++;
      if (iter > 20) {
        exitg2 = 1;
      } else {
        __m128d r1;
        __m128d r2;
        int64_T i3;
        int64_T i4;
        real_T b_cameraMatrices[6];
        real_T eaj[6];
        real_T b_quaternionBases[4];
        real_T center_data[4];
        real_T focal_data[4];
        real_T tangDistort_data[4];
        real_T e1;
        real_T pL2;
        int32_T b_i;
        int32_T b_loop_ub_tmp;
        int32_T i1;
        int32_T i2;
        int32_T idx;
        int32_T loop_ub_tmp;
        char_T typeN[7];
        c_st.site = &hjc_emlrtRSI;
        i = xyzPoints.size(1);
        b_xyzPoints.set_size(&dib_emlrtRTEI, &c_st, 3, xyzPoints.size(1));
        loop_ub_tmp = 3 * xyzPoints.size(1);
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          b_xyzPoints[i1] = xyzPoints[i1];
        }
        i1 = measurements.size(1);
        b_measurements.set_size(&eib_emlrtRTEI, &c_st, 2, measurements.size(1));
        b_loop_ub_tmp = measurements.size(1) << 1;
        for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
          b_measurements[i2] = measurements[i2];
        }
        for (i2 = 0; i2 < 7; i2++) {
          typeN[i2] = b_typeN[i2];
        }
        d_st.site = &dkc_emlrtRSI;
        e_st.site = &vwb_emlrtRSI;
        d_eml_find(e_st, visibility, irs, b_jj);
        b_i = irs.size(0);
        for (i2 = 0; i2 < b_i; i2++) {
          d = static_cast<real_T>(irs[i2]) - 1.0;
          if (d >= -2.147483648E+9) {
            idx = static_cast<int32_T>(d);
          } else {
            idx = MIN_int32_T;
          }
          irs[i2] = idx;
        }
        c_intrinsics_radialDistortion_s[0] = 0;
        d_st.site = &ekc_emlrtRSI;
        visibility.parenReference(d_st, b_this);
        idx = b_this.colidx[b_this.colidx.size(0) - 1] - 1;
        c_intrinsics_radialDistortion_s[1] = idx;
        fixedCameraIndex = -1.0;
        focal_data[0] = intrinsics_focalLength[0];
        center_data[0] = intrinsics_principalPoint[0];
        focal_data[1] = intrinsics_focalLength[1];
        center_data[1] = intrinsics_principalPoint[1];
        radDistortion_data[0] = c_intrinsics_radialDistortion_d[0];
        radDistortion_data[1] = c_intrinsics_radialDistortion_d[1];
        radDistortion_data[2] = c_intrinsics_radialDistortion_d[2];
        tangDistort_data[0] = d_intrinsics_tangentialDistorti[0];
        tangDistort_data[1] = d_intrinsics_tangentialDistorti[1];
        skew = intrinsics_skew;
        if (idx < 0) {
          emlrtNonNegativeCheckR2012b(static_cast<real_T>(idx), &mb_emlrtDCI,
                                      &c_st);
        }
        newErrors.set_size(&fib_emlrtRTEI, &c_st, 2, idx);
        k = idx << 1;
        for (i2 = 0; i2 < k; i2++) {
          newErrors[i2] = 0.0;
        }
        std::memset(&Uj[0], 0, 36U * sizeof(real_T));
        i3 = 3LL * xyzPoints.size(1);
        i4 = i3;
        if (i3 > 2147483647LL) {
          i4 = 2147483647LL;
        }
        Vi.set_size(&gib_emlrtRTEI, &c_st, 3, static_cast<int32_T>(i4));
        k = 3 * static_cast<int32_T>(i4);
        for (i2 = 0; i2 < k; i2++) {
          Vi[i2] = 0.0;
        }
        i4 = 3LL * idx;
        if (i4 > 2147483647LL) {
          i4 = 2147483647LL;
        }
        Wij.set_size(&hib_emlrtRTEI, &c_st, 6, static_cast<int32_T>(i4));
        k = 6 * static_cast<int32_T>(i4);
        for (i2 = 0; i2 < k; i2++) {
          Wij[i2] = 0.0;
        }
        for (b_i = 0; b_i < 6; b_i++) {
          eaj[b_i] = 0.0;
        }
        ebi.set_size(&iib_emlrtRTEI, &c_st, 3, xyzPoints.size(1));
        for (i2 = 0; i2 < loop_ub_tmp; i2++) {
          ebi[i2] = 0.0;
        }
        for (b_i = 0; b_i < 6; b_i++) {
          b_cameraMatrices[b_i] = cameraMatrices[b_i];
        }
        b_quaternionBases[0] = quaternionBases[0];
        b_quaternionBases[1] = quaternionBases[1];
        b_quaternionBases[2] = quaternionBases[2];
        b_quaternionBases[3] = quaternionBases[3];
        visionSBAAuxiliaryVariable(
            &b_xyzPoints[0], &b_measurements[0], 1, &b_cameraMatrices[0],
            &b_quaternionBases[0], true, &typeN[0], true, &(irs.data())[0],
            &c_intrinsics_radialDistortion_s[0], &fixedCameraIndex, 0,
            &focal_data[0], &center_data[0], true, true, &radDistortion_data[0],
            &tangDistort_data[0], 3, &skew, &newErrors[0], &Uj[0], &Vi[0],
            &Wij[0], &eaj[0], &ebi[0]);
        pL2 = b_norm(cameraMatrices);
        c_st.site = &ijc_emlrtRSI;
        d_st.site = &fo_emlrtRSI;
        b_i = newErrors.size(1);
        curMeanErr.set_size(&jib_emlrtRTEI, &d_st, 1, newErrors.size(1));
        for (i2 = 0; i2 < b_i; i2++) {
          skew = newErrors[2 * i2];
          curMeanErr[i2] = skew * skew;
        }
        c_st.site = &ijc_emlrtRSI;
        d_st.site = &fo_emlrtRSI;
        b_r.set_size(&kib_emlrtRTEI, &d_st, 1, newErrors.size(1));
        for (i2 = 0; i2 < b_i; i2++) {
          skew = newErrors[2 * i2 + 1];
          b_r[i2] = skew * skew;
        }
        if (curMeanErr.size(1) != b_r.size(1)) {
          emlrtSizeEqCheckNDErrorR2021b(curMeanErr.size(), b_r.size(),
                                        &ed_emlrtECI, &b_st);
        }
        curMeanErr.set_size(&lib_emlrtRTEI, &b_st, 1, curMeanErr.size(1));
        b_i = curMeanErr.size(1) - 1;
        idx = (curMeanErr.size(1) / 2) << 1;
        k = idx - 2;
        for (i2 = 0; i2 <= k; i2 += 2) {
          r1 = _mm_loadu_pd(&curMeanErr[i2]);
          r2 = _mm_loadu_pd(&b_r[i2]);
          _mm_storeu_pd(&curMeanErr[i2], _mm_add_pd(r1, r2));
        }
        for (i2 = idx; i2 <= b_i; i2++) {
          curMeanErr[i2] = curMeanErr[i2] + b_r[i2];
        }
        c_st.site = &jjc_emlrtRSI;
        e1 = sum(c_st, curMeanErr);
        fixedCameraIndex = e1 / static_cast<real_T>(curMeanErr.size(1));
        if (muDoubleScalarIsInf(fixedCameraIndex) ||
            muDoubleScalarIsNaN(fixedCameraIndex) ||
            (fixedCameraIndex < 1.0E-7)) {
          exitg2 = 1;
        } else {
          fixedCameraIndex = 0.0;
          for (k = 0; k < 6; k++) {
            skew = muDoubleScalarAbs(eaj[k]);
            if (muDoubleScalarIsNaN(skew) || (skew > fixedCameraIndex)) {
              fixedCameraIndex = skew;
            }
          }
          if (fixedCameraIndex < 1.0E-12) {
            exitg2 = 1;
          } else {
            boolean_T exitg3;
            if (iter == 1) {
              for (i2 = 0; i2 < 36; i2++) {
                jj[i2] = bv[i2];
              }
              if (!muDoubleScalarIsNaN(Uj[0])) {
                idx = 1;
              } else {
                idx = 0;
                k = 2;
                exitg3 = false;
                while ((!exitg3) && (k < 7)) {
                  if (!muDoubleScalarIsNaN(Uj[7 * (k - 1)])) {
                    idx = k;
                    exitg3 = true;
                  } else {
                    k++;
                  }
                }
              }
              if (idx == 0) {
                fixedCameraIndex = Uj[0];
              } else {
                fixedCameraIndex = Uj[7 * (idx - 1)];
                i2 = idx + 1;
                for (k = i2; k < 7; k++) {
                  d = Uj[7 * (k - 1)];
                  if (fixedCameraIndex < d) {
                    fixedCameraIndex = d;
                  }
                }
              }
              mu = muDoubleScalarMax(mu, fixedCameraIndex);
              mu *= 0.001;
            }
            int32_T exitg1;
            do {
              boolean_T b[6];
              boolean_T b_b[6];
              boolean_T y;
              exitg1 = 0;
              k = 0;
              idx = 0;
              for (b_i = 0; b_i < 36; b_i++) {
                if (jj[b_i]) {
                  k++;
                  tmp_data[idx] = static_cast<int8_T>(b_i);
                  idx++;
                }
              }
              for (i2 = 0; i2 < k; i2++) {
                b_Uj[i2] = Uj[tmp_data[i2]] + mu;
              }
              for (i2 = 0; i2 < k; i2++) {
                Uj[tmp_data[i2]] = b_Uj[i2];
              }
              for (b_i = 0; b_i < 6; b_i++) {
                Xa[b_i] = eaj[b_i];
              }
              c_st.site = &kjc_emlrtRSI;
              mldivide(c_st, Uj, Xa);
              for (b_i = 0; b_i < 6; b_i++) {
                d = Xa[b_i];
                b[b_i] = muDoubleScalarIsInf(d);
                b_b[b_i] = muDoubleScalarIsNaN(d);
              }
              y = true;
              k = 0;
              exitg3 = false;
              while ((!exitg3) && (k < 6)) {
                if ((!b[k]) && (!b_b[k])) {
                  y = false;
                  exitg3 = true;
                } else {
                  k++;
                }
              }
              if (y) {
                stopCondition = 6;
                exitg1 = 1;
              } else if (b_norm(Xa) <= 1.0E-12 * pL2) {
                stopCondition = 2;
                exitg1 = 1;
              } else {
                real_T b_eaj[6];
                real_T b_Xa;
                r1 = _mm_loadu_pd(&cameraMatrices[0]);
                r2 = _mm_loadu_pd(&Xa[0]);
                _mm_storeu_pd(&newCameraMatrices[0], _mm_add_pd(r1, r2));
                r1 = _mm_loadu_pd(&cameraMatrices[2]);
                r2 = _mm_loadu_pd(&Xa[2]);
                _mm_storeu_pd(&newCameraMatrices[2], _mm_add_pd(r1, r2));
                r1 = _mm_loadu_pd(&cameraMatrices[4]);
                r2 = _mm_loadu_pd(&Xa[4]);
                _mm_storeu_pd(&newCameraMatrices[4], _mm_add_pd(r1, r2));
                c_st.site = &ljc_emlrtRSI;
                b_xyzPoints.set_size(&mib_emlrtRTEI, &c_st, 3, i);
                for (i2 = 0; i2 < loop_ub_tmp; i2++) {
                  b_xyzPoints[i2] = xyzPoints[i2];
                }
                b_measurements.set_size(&eib_emlrtRTEI, &c_st, 2, i1);
                for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
                  b_measurements[i2] = measurements[i2];
                }
                for (i2 = 0; i2 < 7; i2++) {
                  typeN[i2] = b_typeN[i2];
                }
                d_st.site = &dkc_emlrtRSI;
                e_st.site = &vwb_emlrtRSI;
                d_eml_find(e_st, visibility, irs, b_jj);
                b_i = irs.size(0);
                for (i2 = 0; i2 < b_i; i2++) {
                  d = static_cast<real_T>(irs[i2]) - 1.0;
                  if (d >= -2.147483648E+9) {
                    idx = static_cast<int32_T>(d);
                  } else {
                    idx = MIN_int32_T;
                  }
                  irs[i2] = idx;
                }
                c_intrinsics_radialDistortion_s[0] = 0;
                d_st.site = &ekc_emlrtRSI;
                visibility.parenReference(d_st, b_this);
                idx = b_this.colidx[b_this.colidx.size(0) - 1] - 1;
                c_intrinsics_radialDistortion_s[1] = idx;
                fixedCameraIndex = -1.0;
                focal_data[0] = intrinsics_focalLength[0];
                center_data[0] = intrinsics_principalPoint[0];
                focal_data[1] = intrinsics_focalLength[1];
                center_data[1] = intrinsics_principalPoint[1];
                radDistortion_data[0] = c_intrinsics_radialDistortion_d[0];
                radDistortion_data[1] = c_intrinsics_radialDistortion_d[1];
                radDistortion_data[2] = c_intrinsics_radialDistortion_d[2];
                tangDistort_data[0] = d_intrinsics_tangentialDistorti[0];
                tangDistort_data[1] = d_intrinsics_tangentialDistorti[1];
                skew = intrinsics_skew;
                if (idx < 0) {
                  emlrtNonNegativeCheckR2012b(static_cast<real_T>(idx),
                                              &mb_emlrtDCI, &c_st);
                }
                newErrors.set_size(&nib_emlrtRTEI, &c_st, 2, idx);
                k = idx << 1;
                for (i2 = 0; i2 < k; i2++) {
                  newErrors[i2] = 0.0;
                }
                std::memset(&b_Uj[0], 0, 36U * sizeof(real_T));
                i4 = i3;
                if (i3 > 2147483647LL) {
                  i4 = 2147483647LL;
                }
                Vi.set_size(&gib_emlrtRTEI, &c_st, 3, static_cast<int32_T>(i4));
                k = 3 * static_cast<int32_T>(i4);
                for (i2 = 0; i2 < k; i2++) {
                  Vi[i2] = 0.0;
                }
                i4 = 3LL * idx;
                if (i4 > 2147483647LL) {
                  i4 = 2147483647LL;
                }
                Wij.set_size(&hib_emlrtRTEI, &c_st, 6,
                             static_cast<int32_T>(i4));
                k = 6 * static_cast<int32_T>(i4);
                for (i2 = 0; i2 < k; i2++) {
                  Wij[i2] = 0.0;
                }
                for (b_i = 0; b_i < 6; b_i++) {
                  b_eaj[b_i] = 0.0;
                }
                ebi.set_size(&iib_emlrtRTEI, &c_st, 3, i);
                for (i2 = 0; i2 < loop_ub_tmp; i2++) {
                  ebi[i2] = 0.0;
                }
                for (b_i = 0; b_i < 6; b_i++) {
                  b_cameraMatrices[b_i] = newCameraMatrices[b_i];
                }
                b_quaternionBases[0] = quaternionBases[0];
                b_quaternionBases[1] = quaternionBases[1];
                b_quaternionBases[2] = quaternionBases[2];
                b_quaternionBases[3] = quaternionBases[3];
                visionSBAAuxiliaryVariable(
                    &b_xyzPoints[0], &b_measurements[0], 1,
                    &b_cameraMatrices[0], &b_quaternionBases[0], true,
                    &typeN[0], true, &(irs.data())[0],
                    &c_intrinsics_radialDistortion_s[0], &fixedCameraIndex, 0,
                    &focal_data[0], &center_data[0], true, true,
                    &radDistortion_data[0], &tangDistort_data[0], 3, &skew,
                    &newErrors[0], &b_Uj[0], &Vi[0], &Wij[0], &b_eaj[0],
                    &ebi[0]);
                c_st.site = &mjc_emlrtRSI;
                d_st.site = &fo_emlrtRSI;
                b_i = newErrors.size(1);
                b_r.set_size(&oib_emlrtRTEI, &d_st, 1, newErrors.size(1));
                for (i2 = 0; i2 < b_i; i2++) {
                  skew = newErrors[2 * i2];
                  b_r[i2] = skew * skew;
                }
                c_st.site = &mjc_emlrtRSI;
                d_st.site = &fo_emlrtRSI;
                r3.set_size(&pib_emlrtRTEI, &d_st, 1, newErrors.size(1));
                for (i2 = 0; i2 < b_i; i2++) {
                  skew = newErrors[2 * i2 + 1];
                  r3[i2] = skew * skew;
                }
                if (b_r.size(1) != r3.size(1)) {
                  emlrtSizeEqCheckNDErrorR2021b(b_r.size(), r3.size(),
                                                &dd_emlrtECI, &b_st);
                }
                r4.set_size(&oib_emlrtRTEI, &b_st, 1, newErrors.size(1));
                idx = (b_r.size(1) / 2) << 1;
                k = idx - 2;
                for (i2 = 0; i2 <= k; i2 += 2) {
                  r1 = _mm_loadu_pd(&b_r[i2]);
                  r2 = _mm_loadu_pd(&r3[i2]);
                  _mm_storeu_pd(&r4[i2], _mm_add_pd(r1, r2));
                }
                for (i2 = idx; i2 < b_i; i2++) {
                  r4[i2] = b_r[i2] + r3[i2];
                }
                c_st.site = &mjc_emlrtRSI;
                fixedCameraIndex = sum(c_st, r4);
                skew = e1 - fixedCameraIndex;
                b_Xa = 0.0;
                for (i2 = 0; i2 < 6; i2++) {
                  d = Xa[i2];
                  b_Xa += d * (mu * d + eaj[i2]);
                }
                if ((b_Xa > 0.0) && (skew > 0.0)) {
                  c_st.site = &njc_emlrtRSI;
                  d_st.site = &eo_emlrtRSI;
                  mu *= muDoubleScalarMax(
                      0.33333333333333331,
                      1.0 - muDoubleScalarPower(2.0 * skew / b_Xa - 1.0, 3.0));
                  v = 2.0;
                  c_st.site = &ojc_emlrtRSI;
                  d_st.site = &ojc_emlrtRSI;
                  if (e1 < 0.0) {
                    emlrtErrorWithMessageIdR2018a(
                        &d_st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
                  }
                  d_st.site = &ojc_emlrtRSI;
                  if (fixedCameraIndex < 0.0) {
                    emlrtErrorWithMessageIdR2018a(
                        &d_st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
                  }
                  fixedCameraIndex = muDoubleScalarSqrt(e1) -
                                     muDoubleScalarSqrt(fixedCameraIndex);
                  d_st.site = &eo_emlrtRSI;
                  if (fixedCameraIndex * fixedCameraIndex < 1.0E-16 * e1) {
                    stopCondition = 4;
                  }
                  for (b_i = 0; b_i < 6; b_i++) {
                    cameraMatrices[b_i] = newCameraMatrices[b_i];
                  }
                  exitg1 = 1;
                } else {
                  mu *= v;
                  skew = 2.0 * v;
                  if (skew <= v) {
                    stopCondition = 6;
                    exitg1 = 1;
                  } else {
                    v = skew;
                  }
                }
              }
            } while (exitg1 == 0);
          }
        }
      }
    } else {
      exitg2 = 1;
    }
  } while (exitg2 == 0);
  c_st.site = &pjc_emlrtRSI;
  radDistortion_data[0] = cameraMatrices[0];
  c_intrinsics_radialDistortion_d[0] = 0.0;
  radDistortion_data[1] = cameraMatrices[1];
  c_intrinsics_radialDistortion_d[1] = 0.0;
  radDistortion_data[2] = cameraMatrices[2];
  c_intrinsics_radialDistortion_d[2] = 0.0;
  visionSBAUpdateRotationVector(&quaternionBases[0], 1, &radDistortion_data[0],
                                &c_intrinsics_radialDistortion_d[0]);
  cameraMatrices[0] = c_intrinsics_radialDistortion_d[0];
  cameraMatrices[1] = c_intrinsics_radialDistortion_d[1];
  cameraMatrices[2] = c_intrinsics_radialDistortion_d[2];
  vision::internal::calibration::rodriguesVectorToMatrix(&cameraMatrices[0], R);
  c_st.site = &qjc_emlrtRSI;
  for (i = 0; i < 3; i++) {
    c_intrinsics_radialDistortion_d[i] = -cameraMatrices[i + 3];
    b_R[3 * i] = R[i];
    b_R[3 * i + 1] = R[i + 3];
    b_R[3 * i + 2] = R[i + 6];
  }
  d = c_intrinsics_radialDistortion_d[0];
  fixedCameraIndex = c_intrinsics_radialDistortion_d[1];
  skew = c_intrinsics_radialDistortion_d[2];
  for (i = 0; i < 3; i++) {
    c_intrinsics_radialDistortion_d[i] =
        (d * R[3 * i] + fixedCameraIndex * R[3 * i + 1]) + skew * R[3 * i + 2];
  }
  d_st.site = &pkc_emlrtRSI;
  refinedPose.init(d_st, b_R, c_intrinsics_radialDistortion_d);
  c_st.site = &rjc_emlrtRSI;
  vision::internal::bundleAdjust::computeReprojectionErrors(
      c_st, visibility, curMeanErr, mjd_emlrtRSI);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void bundleAdjustmentMotion(const emlrtStack &sp,
                            const array<real32_T, 2U> &varargin_1,
                            const array<real32_T, 2U> &varargin_2,
                            const c_rigidtform3d &varargin_3,
                            const cameraIntrinsics *varargin_4,
                            c_rigidtform3d &refinedPose)
{
  static const char_T b_typeN[7]{"motion"};
  b_sparse b_this;
  b_sparse visibility;
  array<real_T, 2U> Vi;
  array<real_T, 2U> Wij;
  array<real_T, 2U> b_measurements;
  array<real_T, 2U> b_r;
  array<real_T, 2U> b_xyzPoints;
  array<real_T, 2U> curMeanErr;
  array<real_T, 2U> ebi;
  array<real_T, 2U> measurements;
  array<real_T, 2U> newErrors;
  array<real_T, 2U> r3;
  array<real_T, 2U> r4;
  array<real_T, 2U> xyzPoints;
  array<int32_T, 1U> b_jj;
  array<int32_T, 1U> irs;
  array<real32_T, 1U> mjd_emlrtRSI;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T Uj[36];
  real_T b_Uj[36];
  real_T R[9];
  real_T b_R[9];
  real_T Xa[6];
  real_T cameraMatrices[6];
  real_T newCameraMatrices[6];
  real_T quaternionBases[4];
  real_T c_intrinsics_radialDistortion_d[3];
  real_T radDistortion_data[3];
  real_T d_intrinsics_tangentialDistorti[2];
  real_T intrinsics_focalLength[2];
  real_T intrinsics_principalPoint[2];
  real_T d;
  real_T fixedCameraIndex;
  real_T intrinsics_skew;
  real_T mu;
  real_T skew;
  real_T v;
  int32_T c_intrinsics_radialDistortion_s[2];
  int32_T c_intrinsics_tangentialDistorti[2];
  int32_T i;
  int32_T iter;
  int32_T k;
  int32_T stopCondition;
  int8_T tmp_data[36];
  boolean_T jj[36];
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
  st.site = &gjc_emlrtRSI;
  b_st.site = &esb_emlrtRSI;
  c_st.site = &fsb_emlrtRSI;
  vision::internal::bundleAdjust::validateAndParseInputs(
      c_st, varargin_1, varargin_2, varargin_3,
      (cameraIntrinsics **)&varargin_4, xyzPoints, measurements, visibility);
  c_st.site = &gsb_emlrtRSI;
  intrinsics_skew = vision::internal::bundleAdjust::convertInputDataFormat(
      c_st, varargin_3, varargin_4, cameraMatrices, quaternionBases,
      intrinsics_focalLength, intrinsics_principalPoint,
      c_intrinsics_radialDistortion_d, c_intrinsics_radialDistortion_s,
      d_intrinsics_tangentialDistorti, c_intrinsics_tangentialDistorti);
  curMeanErr.set_size(&cib_emlrtRTEI, &b_st, 1, 1);
  curMeanErr[0] = 0.0;
  v = 2.0;
  mu = rtMinusInf;
  iter = 0;
  stopCondition = 0;
  for (i = 0; i < 36; i++) {
    jj[i] = false;
  }
  for (k = 0; k < 6; k++) {
    jj[k + 6 * k] = true;
  }
  int32_T exitg2;
  do {
    exitg2 = 0;
    if (stopCondition == 0) {
      iter++;
      if (iter > 20) {
        exitg2 = 1;
      } else {
        __m128d r1;
        __m128d r2;
        int64_T i3;
        int64_T i4;
        real_T b_cameraMatrices[6];
        real_T eaj[6];
        real_T b_quaternionBases[4];
        real_T center_data[4];
        real_T focal_data[4];
        real_T tangDistort_data[4];
        real_T e1;
        real_T pL2;
        int32_T b_i;
        int32_T b_loop_ub_tmp;
        int32_T i1;
        int32_T i2;
        int32_T idx;
        int32_T loop_ub_tmp;
        char_T typeN[7];
        c_st.site = &hjc_emlrtRSI;
        i = xyzPoints.size(1);
        b_xyzPoints.set_size(&dib_emlrtRTEI, &c_st, 3, xyzPoints.size(1));
        loop_ub_tmp = 3 * xyzPoints.size(1);
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          b_xyzPoints[i1] = xyzPoints[i1];
        }
        i1 = measurements.size(1);
        b_measurements.set_size(&eib_emlrtRTEI, &c_st, 2, measurements.size(1));
        b_loop_ub_tmp = measurements.size(1) << 1;
        for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
          b_measurements[i2] = measurements[i2];
        }
        for (i2 = 0; i2 < 7; i2++) {
          typeN[i2] = b_typeN[i2];
        }
        d_st.site = &dkc_emlrtRSI;
        e_st.site = &vwb_emlrtRSI;
        d_eml_find(e_st, visibility, irs, b_jj);
        b_i = irs.size(0);
        for (i2 = 0; i2 < b_i; i2++) {
          d = static_cast<real_T>(irs[i2]) - 1.0;
          if (d >= -2.147483648E+9) {
            idx = static_cast<int32_T>(d);
          } else {
            idx = MIN_int32_T;
          }
          irs[i2] = idx;
        }
        c_intrinsics_radialDistortion_s[0] = 0;
        d_st.site = &ekc_emlrtRSI;
        visibility.parenReference(d_st, b_this);
        idx = b_this.colidx[b_this.colidx.size(0) - 1] - 1;
        c_intrinsics_radialDistortion_s[1] = idx;
        fixedCameraIndex = -1.0;
        focal_data[0] = intrinsics_focalLength[0];
        center_data[0] = intrinsics_principalPoint[0];
        focal_data[1] = intrinsics_focalLength[1];
        center_data[1] = intrinsics_principalPoint[1];
        radDistortion_data[0] = c_intrinsics_radialDistortion_d[0];
        radDistortion_data[1] = c_intrinsics_radialDistortion_d[1];
        radDistortion_data[2] = c_intrinsics_radialDistortion_d[2];
        tangDistort_data[0] = d_intrinsics_tangentialDistorti[0];
        tangDistort_data[1] = d_intrinsics_tangentialDistorti[1];
        skew = intrinsics_skew;
        if (idx < 0) {
          emlrtNonNegativeCheckR2012b(static_cast<real_T>(idx), &mb_emlrtDCI,
                                      &c_st);
        }
        newErrors.set_size(&fib_emlrtRTEI, &c_st, 2, idx);
        k = idx << 1;
        for (i2 = 0; i2 < k; i2++) {
          newErrors[i2] = 0.0;
        }
        std::memset(&Uj[0], 0, 36U * sizeof(real_T));
        i3 = 3LL * xyzPoints.size(1);
        i4 = i3;
        if (i3 > 2147483647LL) {
          i4 = 2147483647LL;
        }
        Vi.set_size(&gib_emlrtRTEI, &c_st, 3, static_cast<int32_T>(i4));
        k = 3 * static_cast<int32_T>(i4);
        for (i2 = 0; i2 < k; i2++) {
          Vi[i2] = 0.0;
        }
        i4 = 3LL * idx;
        if (i4 > 2147483647LL) {
          i4 = 2147483647LL;
        }
        Wij.set_size(&hib_emlrtRTEI, &c_st, 6, static_cast<int32_T>(i4));
        k = 6 * static_cast<int32_T>(i4);
        for (i2 = 0; i2 < k; i2++) {
          Wij[i2] = 0.0;
        }
        for (b_i = 0; b_i < 6; b_i++) {
          eaj[b_i] = 0.0;
        }
        ebi.set_size(&iib_emlrtRTEI, &c_st, 3, xyzPoints.size(1));
        for (i2 = 0; i2 < loop_ub_tmp; i2++) {
          ebi[i2] = 0.0;
        }
        for (b_i = 0; b_i < 6; b_i++) {
          b_cameraMatrices[b_i] = cameraMatrices[b_i];
        }
        b_quaternionBases[0] = quaternionBases[0];
        b_quaternionBases[1] = quaternionBases[1];
        b_quaternionBases[2] = quaternionBases[2];
        b_quaternionBases[3] = quaternionBases[3];
        visionSBAAuxiliaryVariable(
            &b_xyzPoints[0], &b_measurements[0], 1, &b_cameraMatrices[0],
            &b_quaternionBases[0], true, &typeN[0], true, &(irs.data())[0],
            &c_intrinsics_radialDistortion_s[0], &fixedCameraIndex, 0,
            &focal_data[0], &center_data[0], true, true, &radDistortion_data[0],
            &tangDistort_data[0], 3, &skew, &newErrors[0], &Uj[0], &Vi[0],
            &Wij[0], &eaj[0], &ebi[0]);
        pL2 = b_norm(cameraMatrices);
        c_st.site = &ijc_emlrtRSI;
        d_st.site = &fo_emlrtRSI;
        b_i = newErrors.size(1);
        curMeanErr.set_size(&jib_emlrtRTEI, &d_st, 1, newErrors.size(1));
        for (i2 = 0; i2 < b_i; i2++) {
          skew = newErrors[2 * i2];
          curMeanErr[i2] = skew * skew;
        }
        c_st.site = &ijc_emlrtRSI;
        d_st.site = &fo_emlrtRSI;
        b_r.set_size(&kib_emlrtRTEI, &d_st, 1, newErrors.size(1));
        for (i2 = 0; i2 < b_i; i2++) {
          skew = newErrors[2 * i2 + 1];
          b_r[i2] = skew * skew;
        }
        if (curMeanErr.size(1) != b_r.size(1)) {
          emlrtSizeEqCheckNDErrorR2021b(curMeanErr.size(), b_r.size(),
                                        &ed_emlrtECI, &b_st);
        }
        curMeanErr.set_size(&lib_emlrtRTEI, &b_st, 1, curMeanErr.size(1));
        b_i = curMeanErr.size(1) - 1;
        idx = (curMeanErr.size(1) / 2) << 1;
        k = idx - 2;
        for (i2 = 0; i2 <= k; i2 += 2) {
          r1 = _mm_loadu_pd(&curMeanErr[i2]);
          r2 = _mm_loadu_pd(&b_r[i2]);
          _mm_storeu_pd(&curMeanErr[i2], _mm_add_pd(r1, r2));
        }
        for (i2 = idx; i2 <= b_i; i2++) {
          curMeanErr[i2] = curMeanErr[i2] + b_r[i2];
        }
        c_st.site = &jjc_emlrtRSI;
        e1 = sum(c_st, curMeanErr);
        fixedCameraIndex = e1 / static_cast<real_T>(curMeanErr.size(1));
        if (muDoubleScalarIsInf(fixedCameraIndex) ||
            muDoubleScalarIsNaN(fixedCameraIndex) ||
            (fixedCameraIndex < 1.0E-7)) {
          exitg2 = 1;
        } else {
          fixedCameraIndex = 0.0;
          for (k = 0; k < 6; k++) {
            skew = muDoubleScalarAbs(eaj[k]);
            if (muDoubleScalarIsNaN(skew) || (skew > fixedCameraIndex)) {
              fixedCameraIndex = skew;
            }
          }
          if (fixedCameraIndex < 1.0E-12) {
            exitg2 = 1;
          } else {
            boolean_T exitg3;
            if (iter == 1) {
              for (i2 = 0; i2 < 36; i2++) {
                jj[i2] = bv[i2];
              }
              if (!muDoubleScalarIsNaN(Uj[0])) {
                idx = 1;
              } else {
                idx = 0;
                k = 2;
                exitg3 = false;
                while ((!exitg3) && (k < 7)) {
                  if (!muDoubleScalarIsNaN(Uj[7 * (k - 1)])) {
                    idx = k;
                    exitg3 = true;
                  } else {
                    k++;
                  }
                }
              }
              if (idx == 0) {
                fixedCameraIndex = Uj[0];
              } else {
                fixedCameraIndex = Uj[7 * (idx - 1)];
                i2 = idx + 1;
                for (k = i2; k < 7; k++) {
                  d = Uj[7 * (k - 1)];
                  if (fixedCameraIndex < d) {
                    fixedCameraIndex = d;
                  }
                }
              }
              mu = muDoubleScalarMax(mu, fixedCameraIndex);
              mu *= 0.001;
            }
            int32_T exitg1;
            do {
              boolean_T b[6];
              boolean_T b_b[6];
              boolean_T y;
              exitg1 = 0;
              k = 0;
              idx = 0;
              for (b_i = 0; b_i < 36; b_i++) {
                if (jj[b_i]) {
                  k++;
                  tmp_data[idx] = static_cast<int8_T>(b_i);
                  idx++;
                }
              }
              for (i2 = 0; i2 < k; i2++) {
                b_Uj[i2] = Uj[tmp_data[i2]] + mu;
              }
              for (i2 = 0; i2 < k; i2++) {
                Uj[tmp_data[i2]] = b_Uj[i2];
              }
              for (b_i = 0; b_i < 6; b_i++) {
                Xa[b_i] = eaj[b_i];
              }
              c_st.site = &kjc_emlrtRSI;
              mldivide(c_st, Uj, Xa);
              for (b_i = 0; b_i < 6; b_i++) {
                d = Xa[b_i];
                b[b_i] = muDoubleScalarIsInf(d);
                b_b[b_i] = muDoubleScalarIsNaN(d);
              }
              y = true;
              k = 0;
              exitg3 = false;
              while ((!exitg3) && (k < 6)) {
                if ((!b[k]) && (!b_b[k])) {
                  y = false;
                  exitg3 = true;
                } else {
                  k++;
                }
              }
              if (y) {
                stopCondition = 6;
                exitg1 = 1;
              } else if (b_norm(Xa) <= 1.0E-12 * pL2) {
                stopCondition = 2;
                exitg1 = 1;
              } else {
                real_T b_eaj[6];
                real_T b_Xa;
                r1 = _mm_loadu_pd(&cameraMatrices[0]);
                r2 = _mm_loadu_pd(&Xa[0]);
                _mm_storeu_pd(&newCameraMatrices[0], _mm_add_pd(r1, r2));
                r1 = _mm_loadu_pd(&cameraMatrices[2]);
                r2 = _mm_loadu_pd(&Xa[2]);
                _mm_storeu_pd(&newCameraMatrices[2], _mm_add_pd(r1, r2));
                r1 = _mm_loadu_pd(&cameraMatrices[4]);
                r2 = _mm_loadu_pd(&Xa[4]);
                _mm_storeu_pd(&newCameraMatrices[4], _mm_add_pd(r1, r2));
                c_st.site = &ljc_emlrtRSI;
                b_xyzPoints.set_size(&mib_emlrtRTEI, &c_st, 3, i);
                for (i2 = 0; i2 < loop_ub_tmp; i2++) {
                  b_xyzPoints[i2] = xyzPoints[i2];
                }
                b_measurements.set_size(&eib_emlrtRTEI, &c_st, 2, i1);
                for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
                  b_measurements[i2] = measurements[i2];
                }
                for (i2 = 0; i2 < 7; i2++) {
                  typeN[i2] = b_typeN[i2];
                }
                d_st.site = &dkc_emlrtRSI;
                e_st.site = &vwb_emlrtRSI;
                d_eml_find(e_st, visibility, irs, b_jj);
                b_i = irs.size(0);
                for (i2 = 0; i2 < b_i; i2++) {
                  d = static_cast<real_T>(irs[i2]) - 1.0;
                  if (d >= -2.147483648E+9) {
                    idx = static_cast<int32_T>(d);
                  } else {
                    idx = MIN_int32_T;
                  }
                  irs[i2] = idx;
                }
                c_intrinsics_radialDistortion_s[0] = 0;
                d_st.site = &ekc_emlrtRSI;
                visibility.parenReference(d_st, b_this);
                idx = b_this.colidx[b_this.colidx.size(0) - 1] - 1;
                c_intrinsics_radialDistortion_s[1] = idx;
                fixedCameraIndex = -1.0;
                focal_data[0] = intrinsics_focalLength[0];
                center_data[0] = intrinsics_principalPoint[0];
                focal_data[1] = intrinsics_focalLength[1];
                center_data[1] = intrinsics_principalPoint[1];
                radDistortion_data[0] = c_intrinsics_radialDistortion_d[0];
                radDistortion_data[1] = c_intrinsics_radialDistortion_d[1];
                radDistortion_data[2] = c_intrinsics_radialDistortion_d[2];
                tangDistort_data[0] = d_intrinsics_tangentialDistorti[0];
                tangDistort_data[1] = d_intrinsics_tangentialDistorti[1];
                skew = intrinsics_skew;
                if (idx < 0) {
                  emlrtNonNegativeCheckR2012b(static_cast<real_T>(idx),
                                              &mb_emlrtDCI, &c_st);
                }
                newErrors.set_size(&nib_emlrtRTEI, &c_st, 2, idx);
                k = idx << 1;
                for (i2 = 0; i2 < k; i2++) {
                  newErrors[i2] = 0.0;
                }
                std::memset(&b_Uj[0], 0, 36U * sizeof(real_T));
                i4 = i3;
                if (i3 > 2147483647LL) {
                  i4 = 2147483647LL;
                }
                Vi.set_size(&gib_emlrtRTEI, &c_st, 3, static_cast<int32_T>(i4));
                k = 3 * static_cast<int32_T>(i4);
                for (i2 = 0; i2 < k; i2++) {
                  Vi[i2] = 0.0;
                }
                i4 = 3LL * idx;
                if (i4 > 2147483647LL) {
                  i4 = 2147483647LL;
                }
                Wij.set_size(&hib_emlrtRTEI, &c_st, 6,
                             static_cast<int32_T>(i4));
                k = 6 * static_cast<int32_T>(i4);
                for (i2 = 0; i2 < k; i2++) {
                  Wij[i2] = 0.0;
                }
                for (b_i = 0; b_i < 6; b_i++) {
                  b_eaj[b_i] = 0.0;
                }
                ebi.set_size(&iib_emlrtRTEI, &c_st, 3, i);
                for (i2 = 0; i2 < loop_ub_tmp; i2++) {
                  ebi[i2] = 0.0;
                }
                for (b_i = 0; b_i < 6; b_i++) {
                  b_cameraMatrices[b_i] = newCameraMatrices[b_i];
                }
                b_quaternionBases[0] = quaternionBases[0];
                b_quaternionBases[1] = quaternionBases[1];
                b_quaternionBases[2] = quaternionBases[2];
                b_quaternionBases[3] = quaternionBases[3];
                visionSBAAuxiliaryVariable(
                    &b_xyzPoints[0], &b_measurements[0], 1,
                    &b_cameraMatrices[0], &b_quaternionBases[0], true,
                    &typeN[0], true, &(irs.data())[0],
                    &c_intrinsics_radialDistortion_s[0], &fixedCameraIndex, 0,
                    &focal_data[0], &center_data[0], true, true,
                    &radDistortion_data[0], &tangDistort_data[0], 3, &skew,
                    &newErrors[0], &b_Uj[0], &Vi[0], &Wij[0], &b_eaj[0],
                    &ebi[0]);
                c_st.site = &mjc_emlrtRSI;
                d_st.site = &fo_emlrtRSI;
                b_i = newErrors.size(1);
                b_r.set_size(&oib_emlrtRTEI, &d_st, 1, newErrors.size(1));
                for (i2 = 0; i2 < b_i; i2++) {
                  skew = newErrors[2 * i2];
                  b_r[i2] = skew * skew;
                }
                c_st.site = &mjc_emlrtRSI;
                d_st.site = &fo_emlrtRSI;
                r3.set_size(&pib_emlrtRTEI, &d_st, 1, newErrors.size(1));
                for (i2 = 0; i2 < b_i; i2++) {
                  skew = newErrors[2 * i2 + 1];
                  r3[i2] = skew * skew;
                }
                if (b_r.size(1) != r3.size(1)) {
                  emlrtSizeEqCheckNDErrorR2021b(b_r.size(), r3.size(),
                                                &dd_emlrtECI, &b_st);
                }
                r4.set_size(&oib_emlrtRTEI, &b_st, 1, newErrors.size(1));
                idx = (b_r.size(1) / 2) << 1;
                k = idx - 2;
                for (i2 = 0; i2 <= k; i2 += 2) {
                  r1 = _mm_loadu_pd(&b_r[i2]);
                  r2 = _mm_loadu_pd(&r3[i2]);
                  _mm_storeu_pd(&r4[i2], _mm_add_pd(r1, r2));
                }
                for (i2 = idx; i2 < b_i; i2++) {
                  r4[i2] = b_r[i2] + r3[i2];
                }
                c_st.site = &mjc_emlrtRSI;
                fixedCameraIndex = sum(c_st, r4);
                skew = e1 - fixedCameraIndex;
                b_Xa = 0.0;
                for (i2 = 0; i2 < 6; i2++) {
                  d = Xa[i2];
                  b_Xa += d * (mu * d + eaj[i2]);
                }
                if ((b_Xa > 0.0) && (skew > 0.0)) {
                  c_st.site = &njc_emlrtRSI;
                  d_st.site = &eo_emlrtRSI;
                  mu *= muDoubleScalarMax(
                      0.33333333333333331,
                      1.0 - muDoubleScalarPower(2.0 * skew / b_Xa - 1.0, 3.0));
                  v = 2.0;
                  c_st.site = &ojc_emlrtRSI;
                  d_st.site = &ojc_emlrtRSI;
                  if (e1 < 0.0) {
                    emlrtErrorWithMessageIdR2018a(
                        &d_st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
                  }
                  d_st.site = &ojc_emlrtRSI;
                  if (fixedCameraIndex < 0.0) {
                    emlrtErrorWithMessageIdR2018a(
                        &d_st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
                  }
                  fixedCameraIndex = muDoubleScalarSqrt(e1) -
                                     muDoubleScalarSqrt(fixedCameraIndex);
                  d_st.site = &eo_emlrtRSI;
                  if (fixedCameraIndex * fixedCameraIndex < 1.0E-15 * e1) {
                    stopCondition = 4;
                  }
                  for (b_i = 0; b_i < 6; b_i++) {
                    cameraMatrices[b_i] = newCameraMatrices[b_i];
                  }
                  exitg1 = 1;
                } else {
                  mu *= v;
                  skew = 2.0 * v;
                  if (skew <= v) {
                    stopCondition = 6;
                    exitg1 = 1;
                  } else {
                    v = skew;
                  }
                }
              }
            } while (exitg1 == 0);
          }
        }
      }
    } else {
      exitg2 = 1;
    }
  } while (exitg2 == 0);
  c_st.site = &pjc_emlrtRSI;
  radDistortion_data[0] = cameraMatrices[0];
  c_intrinsics_radialDistortion_d[0] = 0.0;
  radDistortion_data[1] = cameraMatrices[1];
  c_intrinsics_radialDistortion_d[1] = 0.0;
  radDistortion_data[2] = cameraMatrices[2];
  c_intrinsics_radialDistortion_d[2] = 0.0;
  visionSBAUpdateRotationVector(&quaternionBases[0], 1, &radDistortion_data[0],
                                &c_intrinsics_radialDistortion_d[0]);
  cameraMatrices[0] = c_intrinsics_radialDistortion_d[0];
  cameraMatrices[1] = c_intrinsics_radialDistortion_d[1];
  cameraMatrices[2] = c_intrinsics_radialDistortion_d[2];
  vision::internal::calibration::rodriguesVectorToMatrix(&cameraMatrices[0], R);
  c_st.site = &qjc_emlrtRSI;
  for (i = 0; i < 3; i++) {
    c_intrinsics_radialDistortion_d[i] = -cameraMatrices[i + 3];
    b_R[3 * i] = R[i];
    b_R[3 * i + 1] = R[i + 3];
    b_R[3 * i + 2] = R[i + 6];
  }
  d = c_intrinsics_radialDistortion_d[0];
  fixedCameraIndex = c_intrinsics_radialDistortion_d[1];
  skew = c_intrinsics_radialDistortion_d[2];
  for (i = 0; i < 3; i++) {
    c_intrinsics_radialDistortion_d[i] =
        (d * R[3 * i] + fixedCameraIndex * R[3 * i + 1]) + skew * R[3 * i + 2];
  }
  d_st.site = &pkc_emlrtRSI;
  refinedPose.init(d_st, b_R, c_intrinsics_radialDistortion_d);
  c_st.site = &rjc_emlrtRSI;
  vision::internal::bundleAdjust::computeReprojectionErrors(
      c_st, visibility, curMeanErr, mjd_emlrtRSI);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (bundleAdjustmentMotion.cpp)
