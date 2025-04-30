//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// extractFeatures.cpp
//
// Code generation for function 'extractFeatures'
//

// Include files
#include "extractFeatures.h"
#include "ORBPoints.h"
#include "binaryFeatures.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_types.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "extractORBCore_api.hpp"
#include <algorithm>
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo uf_emlrtRSI{
    95,            // lineNo
    "parseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\extractFeatures.m" // pathName
};

static emlrtBCInfo ycb_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    528,              // lineNo
    17,               // colNo
    "",               // aName
    "parseORBInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\extractFeatures.m", // pName
    0 // checkKind
};

static emlrtECInfo ke_emlrtECI{
    -1,               // nDims
    528,              // lineNo
    5,                // colNo
    "parseORBInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\extractFeatures.m" // pName
};

static emlrtBCInfo adb_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    529,              // lineNo
    14,               // colNo
    "",               // aName
    "parseORBInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\extractFeatures.m", // pName
    0 // checkKind
};

static emlrtECInfo le_emlrtECI{
    -1,               // nDims
    529,              // lineNo
    5,                // colNo
    "parseORBInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\extractFeatures.m" // pName
};

static emlrtBCInfo bdb_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    530,              // lineNo
    15,               // colNo
    "",               // aName
    "parseORBInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\extractFeatures.m", // pName
    0 // checkKind
};

static emlrtECInfo me_emlrtECI{
    -1,               // nDims
    530,              // lineNo
    5,                // colNo
    "parseORBInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\extractFeatures.m" // pName
};

static emlrtBCInfo cdb_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    531,              // lineNo
    20,               // colNo
    "",               // aName
    "parseORBInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\extractFeatures.m", // pName
    0 // checkKind
};

static emlrtECInfo ne_emlrtECI{
    -1,               // nDims
    531,              // lineNo
    5,                // colNo
    "parseORBInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\extractFeatures.m" // pName
};

// Function Definitions
namespace coder {
void b_extractORBFeatures(c_helperVisualSLAMCodegenStackD *SD,
                          const emlrtStack &sp, const uint8_T b_I[307200],
                          const b_ORBPoints &points, binaryFeatures &features,
                          ORBPoints &valid_points)
{
  void *pFtrs;
  void *pVPts;
  array<real32_T, 2U> vLoc;
  array<real32_T, 1U> vMet;
  array<real32_T, 1U> vOri;
  array<real32_T, 1U> vScl;
  emlrtStack st;
  int32_T ptsStruct_Location_size[2];
  int32_T PatchSize;
  int32_T inMet_size;
  int32_T inOri_size;
  int32_T numPtsOut;
  real32_T ptsStruct_Location_data[2000];
  real32_T inMet_data[1000];
  real32_T inOri_data[1000];
  real32_T inScl_data[1000];
  real32_T ScaleFactor;
  uint8_T NumLevels;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  std::copy(&b_I[0], &b_I[307200], &SD->f0.Iu8[0]);
  st.site = &yf_emlrtRSI;
  parseORBInputs(st, points, ptsStruct_Location_data, ptsStruct_Location_size,
                 inScl_data, inMet_data, inMet_size, inOri_data, inOri_size,
                 ScaleFactor, NumLevels, PatchSize);
  st.site = &ag_emlrtRSI;
  pVPts = nullptr;
  pFtrs = nullptr;
  numPtsOut = extractORBComputeCM(
      &SD->f0.Iu8[0], 480, 640, &ptsStruct_Location_data[0], &inOri_data[0],
      &inMet_data[0], &inScl_data[0], ptsStruct_Location_size[0], 307200, 1.2F,
      8, 31, 0, 2, 0, 31, 20, &pVPts, &pFtrs);
  if (numPtsOut < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(numPtsOut), &g_emlrtDCI,
                                &st);
  }
  vLoc.set_size(&rk_emlrtRTEI, &st, numPtsOut, 2);
  vMet.set_size(&sk_emlrtRTEI, &st, numPtsOut);
  vScl.set_size(&tk_emlrtRTEI, &st, numPtsOut);
  vOri.set_size(&uk_emlrtRTEI, &st, numPtsOut);
  features.Features.set_size(&vk_emlrtRTEI, &st, numPtsOut, 32);
  extractORBAssignOutputCM(pVPts, pFtrs, &vLoc[0], &(vOri.data())[0],
                           &(vMet.data())[0], &(vScl.data())[0],
                           &features.Features[0]);
  features.NumBits = 256.0;
  features.NumFeatures = features.Features.size(0);
  numPtsOut = vScl.size(0);
  inMet_size = (vScl.size(0) / 4) << 2;
  inOri_size = inMet_size - 4;
  for (PatchSize = 0; PatchSize <= inOri_size; PatchSize += 4) {
    __m128 b_r;
    b_r = _mm_loadu_ps(&vScl[PatchSize]);
    _mm_storeu_ps(&vScl[PatchSize], _mm_div_ps(b_r, _mm_set1_ps(31.0F)));
  }
  for (PatchSize = inMet_size; PatchSize < numPtsOut; PatchSize++) {
    vScl[PatchSize] = vScl[PatchSize] / 31.0F;
  }
  st.site = &bg_emlrtRSI;
  valid_points.init(st, vLoc, vScl, vOri, vMet);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void parseInputs(const emlrtStack &sp, const b_ORBPoints &points)
{
  static real_T dv[2]{0.0, 2.0};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
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
  dv[0U] = rtNaN;
  st.site = &uf_emlrtRSI;
  b_st.site = &vf_emlrtRSI;
  c_st.site = &wf_emlrtRSI;
  d_st.site = &xf_emlrtRSI;
  e_st.site = &be_emlrtRSI;
  p = true;
  for (int32_T k{0}; k < 2; k++) {
    if (p) {
      real_T d;
      d = dv[k];
      if ((!(d != d)) && (points.pLocation.size(k) != 2)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:extractFeatures:incorrectSize", 3, 4, 6, "POINTS");
  }
}

int32_T parseORBInputs(
    const emlrtStack &sp, const b_ORBPoints &points,
    real32_T ptsStruct_Location_data[], int32_T ptsStruct_Location_size[2],
    real32_T ptsStruct_Scale_data[], real32_T ptsStruct_Metric_data[],
    int32_T &ptsStruct_Metric_size, real32_T ptsStruct_Orientation_data[],
    int32_T &ptsStruct_Orientation_size, real32_T &ScaleFactor,
    uint8_T &NumLevels, int32_T &PatchSize)
{
  int32_T b_points[2];
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T ptsStruct_Scale_size;
  int32_T scalarLB;
  int32_T tmp_size;
  int32_T valLocation_size_idx_0;
  int32_T vectorUB;
  real32_T valLocation_data[2000];
  real32_T tmp_data[1000];
  NumLevels = 8U;
  ScaleFactor = 1.2F;
  PatchSize = 31;
  valLocation_size_idx_0 = points.pLocation.size(0);
  ptsStruct_Scale_size = points.pLocation.size(0);
  ptsStruct_Metric_size = points.pLocation.size(0);
  ptsStruct_Orientation_size = points.pLocation.size(0);
  if (points.pLocation.size(0) < 1) {
    loop_ub = 0;
  } else {
    if (points.pLocation.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, points.pLocation.size(0),
                                    &ycb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    loop_ub = points.pLocation.size(0);
  }
  b_points[0] = loop_ub;
  b_points[1] = 2;
  emlrtSubAssignSizeCheckR2012b(
      &b_points[0], 2, ((array<real32_T, 2U> *)&points.pLocation)->size(), 2,
      &ke_emlrtECI, (emlrtCTX)&sp);
  for (int32_T i{0}; i < 2; i++) {
    for (b_loop_ub = 0; b_loop_ub < loop_ub; b_loop_ub++) {
      valLocation_data[b_loop_ub + valLocation_size_idx_0 * i] =
          points.pLocation[b_loop_ub + loop_ub * i];
    }
  }
  if (points.pLocation.size(0) < 1) {
    loop_ub = 0;
  } else {
    if (points.pLocation.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, points.pLocation.size(0),
                                    &adb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    loop_ub = points.pLocation.size(0);
  }
  b_loop_ub = points.pScale.size(0);
  tmp_size = points.pScale.size(0);
  scalarLB = (points.pScale.size(0) / 4) << 2;
  vectorUB = scalarLB - 4;
  for (int32_T i{0}; i <= vectorUB; i += 4) {
    _mm_storeu_ps(&tmp_data[i], _mm_mul_ps(_mm_loadu_ps(&points.pScale[i]),
                                           _mm_set1_ps(31.0F)));
  }
  for (int32_T i{scalarLB}; i < b_loop_ub; i++) {
    tmp_data[i] = points.pScale[i] * 31.0F;
  }
  emlrtSubAssignSizeCheckR2012b(&loop_ub, 1, &tmp_size, 1, &le_emlrtECI,
                                (emlrtCTX)&sp);
  if (loop_ub - 1 >= 0) {
    std::copy(&tmp_data[0], &tmp_data[loop_ub], &ptsStruct_Scale_data[0]);
  }
  if (points.pLocation.size(0) < 1) {
    loop_ub = 0;
  } else {
    if (points.pLocation.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, points.pLocation.size(0),
                                    &bdb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    loop_ub = points.pLocation.size(0);
  }
  emlrtSubAssignSizeCheckR2012b(
      &loop_ub, 1, ((array<real32_T, 1U> *)&points.pMetric)->size(), 1,
      &me_emlrtECI, (emlrtCTX)&sp);
  for (int32_T i{0}; i < loop_ub; i++) {
    ptsStruct_Metric_data[i] = points.pMetric[i];
  }
  if (points.pLocation.size(0) < 1) {
    loop_ub = 0;
  } else {
    if (points.pLocation.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, points.pLocation.size(0),
                                    &cdb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    loop_ub = points.pLocation.size(0);
  }
  b_loop_ub = points.pOrientation.size(0);
  tmp_size = points.pOrientation.size(0);
  scalarLB = (points.pOrientation.size(0) / 4) << 2;
  vectorUB = scalarLB - 4;
  for (int32_T i{0}; i <= vectorUB; i += 4) {
    _mm_storeu_ps(&tmp_data[i],
                  _mm_mul_ps(_mm_loadu_ps(&points.pOrientation[i]),
                             _mm_set1_ps(57.2957802F)));
  }
  for (int32_T i{scalarLB}; i < b_loop_ub; i++) {
    tmp_data[i] = points.pOrientation[i] * 57.2957802F;
  }
  emlrtSubAssignSizeCheckR2012b(&loop_ub, 1, &tmp_size, 1, &ne_emlrtECI,
                                (emlrtCTX)&sp);
  if (loop_ub - 1 >= 0) {
    std::copy(&tmp_data[0], &tmp_data[loop_ub], &ptsStruct_Orientation_data[0]);
  }
  ptsStruct_Location_size[0] = points.pLocation.size(0);
  ptsStruct_Location_size[1] = 2;
  b_loop_ub = valLocation_size_idx_0 * 2;
  if (b_loop_ub - 1 >= 0) {
    std::copy(&valLocation_data[0], &valLocation_data[b_loop_ub],
              &ptsStruct_Location_data[0]);
  }
  return ptsStruct_Scale_size;
}

} // namespace coder

// End of code generation (extractFeatures.cpp)
