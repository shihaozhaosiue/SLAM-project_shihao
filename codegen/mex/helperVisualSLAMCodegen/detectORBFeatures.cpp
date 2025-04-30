//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// detectORBFeatures.cpp
//
// Code generation for function 'detectORBFeatures'
//

// Include files
#include "detectORBFeatures.h"
#include "FeaturePointsImpl.h"
#include "ORBPoints.h"
#include "ORBPointsImpl.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_types.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "detectORBCore_api.hpp"
#include <algorithm>
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo ld_emlrtRSI{
    7,                   // lineNo
    "detectORBFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\detectORBFeatures.m" // pathName
};

static emlrtRSInfo md_emlrtRSI{
    45,          // lineNo
    "detectORB", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\detectORBFeatures.m" // pathName
};

static emlrtRSInfo nd_emlrtRSI{
    56,          // lineNo
    "detectORB", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\detectORBFeatures.m" // pathName
};

static emlrtDCInfo b_emlrtDCI{
    81,                                   // lineNo
    48,                                   // colNo
    "detectORBBuildable/detectORB_uint8", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\detectORBBuildable.m", // pName
    4                                  // checkKind
};

static emlrtRTEInfo oj_emlrtRTEI{
    81,                   // lineNo
    13,                   // colNo
    "detectORBBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\detectORBBuildable.m" // pName
};

static emlrtRTEInfo pj_emlrtRTEI{
    82,                   // lineNo
    42,                   // colNo
    "detectORBBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\detectORBBuildable.m" // pName
};

static emlrtRTEInfo qj_emlrtRTEI{
    83,                   // lineNo
    42,                   // colNo
    "detectORBBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\detectORBBuildable.m" // pName
};

static emlrtRTEInfo rj_emlrtRTEI{
    84,                   // lineNo
    42,                   // colNo
    "detectORBBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\detectORBBuildable.m" // pName
};

static emlrtRTEInfo sj_emlrtRTEI{
    155,             // lineNo
    17,              // colNo
    "ORBPointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pName
};

static emlrtRTEInfo uj_emlrtRTEI{
    7,                   // lineNo
    1,                   // colNo
    "detectORBFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\detectORBFeatures.m" // pName
};

// Function Definitions
namespace coder {
void b_detectORBFeatures(c_helperVisualSLAMCodegenStackD *SD,
                         const emlrtStack &sp, const uint8_T b_I[307200],
                         b_ORBPoints &points)
{
  void *pKeypoints;
  array<real32_T, 1U> inputs_Scale;
  array<real32_T, 1U> metric;
  array<real32_T, 1U> orientation;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T numPtsOut;
  int32_T scalarLB;
  int32_T vectorUB;
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
  st.site = &ld_emlrtRSI;
  std::copy(&b_I[0], &b_I[307200], &SD->f1.Iu8[0]);
  b_st.site = &md_emlrtRSI;
  pKeypoints = nullptr;
  numPtsOut = detectORBComputeCM(&SD->f1.Iu8[0], 480, 640, 307200, 1.2F, 8, 31,
                                 0, 2, 0, 31, 20, &pKeypoints);
  if (numPtsOut < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(numPtsOut), &b_emlrtDCI,
                                &b_st);
  }
  points.pLocation.set_size(&oj_emlrtRTEI, &b_st, numPtsOut, 2);
  metric.set_size(&pj_emlrtRTEI, &b_st, numPtsOut);
  points.pOrientation.set_size(&qj_emlrtRTEI, &b_st, numPtsOut);
  orientation.set_size(&rj_emlrtRTEI, &b_st, numPtsOut);
  detectORBAssignOutputCM(pKeypoints, &points.pLocation[0],
                          &(orientation.data())[0], &(metric.data())[0],
                          &(points.pOrientation.data())[0]);
  numPtsOut = points.pOrientation.size(0);
  inputs_Scale.set_size(&sj_emlrtRTEI, &st, points.pOrientation.size(0));
  scalarLB = (points.pOrientation.size(0) / 4) << 2;
  vectorUB = scalarLB - 4;
  for (int32_T i{0}; i <= vectorUB; i += 4) {
    __m128 b_r;
    b_r = _mm_loadu_ps(&points.pOrientation[i]);
    _mm_storeu_ps(&inputs_Scale[i], _mm_div_ps(b_r, _mm_set1_ps(31.0F)));
  }
  for (int32_T i{scalarLB}; i < numPtsOut; i++) {
    inputs_Scale[i] = points.pOrientation[i] / 31.0F;
  }
  b_st.site = &nd_emlrtRSI;
  c_st.site = &od_emlrtRSI;
  d_st.site = &pd_emlrtRSI;
  ORBPointsImpl::validate(d_st, points.pLocation, metric, inputs_Scale,
                          orientation);
  d_st.site = &qd_emlrtRSI;
  e_st.site = &ge_emlrtRSI;
  f_st.site = &le_emlrtRSI;
  if (metric.size(0) == 1) {
    g_st.site = &me_emlrtRSI;
    repmat(g_st, (const real32_T *)metric.data(),
           static_cast<real_T>(points.pLocation.size(0)), points.pOrientation);
  } else {
    numPtsOut = metric.size(0);
    points.pOrientation.set_size(&tj_emlrtRTEI, &f_st, metric.size(0));
    for (int32_T i{0}; i < numPtsOut; i++) {
      points.pOrientation[i] = metric[i];
    }
  }
  if (points.pLocation.size(0) != points.pOrientation.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(points.pLocation.size(0),
                                    points.pOrientation.size(0), &b_emlrtECI,
                                    &e_st);
  }
  points.pMetric.set_size(&uj_emlrtRTEI, &e_st, points.pOrientation.size(0));
  numPtsOut = points.pOrientation.size(0);
  for (int32_T i{0}; i < numPtsOut; i++) {
    points.pMetric[i] = points.pOrientation[i];
  }
  e_st.site = &he_emlrtRSI;
  f_st.site = &re_emlrtRSI;
  f_st.site = &se_emlrtRSI;
  FeaturePointsImpl::checkLocation(f_st, points.pLocation);
  e_st.site = &ie_emlrtRSI;
  if (inputs_Scale.size(0) == 1) {
    f_st.site = &me_emlrtRSI;
    repmat(f_st, (const real32_T *)inputs_Scale.data(),
           static_cast<real_T>(points.pLocation.size(0)), points.pOrientation);
  } else {
    numPtsOut = inputs_Scale.size(0);
    points.pOrientation.set_size(&vj_emlrtRTEI, &e_st, inputs_Scale.size(0));
    for (int32_T i{0}; i < numPtsOut; i++) {
      points.pOrientation[i] = inputs_Scale[i];
    }
  }
  if (points.pLocation.size(0) != points.pOrientation.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(points.pLocation.size(0),
                                    points.pOrientation.size(0), &d_emlrtECI,
                                    &d_st);
  }
  points.pScale.set_size(&uj_emlrtRTEI, &d_st, points.pOrientation.size(0));
  numPtsOut = points.pOrientation.size(0);
  for (int32_T i{0}; i < numPtsOut; i++) {
    points.pScale[i] = points.pOrientation[i];
  }
  e_st.site = &je_emlrtRSI;
  if (orientation.size(0) == 1) {
    f_st.site = &me_emlrtRSI;
    repmat(f_st, (const real32_T *)orientation.data(),
           static_cast<real_T>(points.pLocation.size(0)), points.pOrientation);
  } else {
    numPtsOut = orientation.size(0);
    points.pOrientation.set_size(&wj_emlrtRTEI, &e_st, orientation.size(0));
    for (int32_T i{0}; i < numPtsOut; i++) {
      points.pOrientation[i] = orientation[i];
    }
  }
  if (points.pLocation.size(0) != points.pOrientation.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(points.pLocation.size(0),
                                    points.pOrientation.size(0), &c_emlrtECI,
                                    &d_st);
  }
  points.pNumLevels = 8U;
  e_st.site = &ke_emlrtRSI;
  f_st.site = &te_emlrtRSI;
  points.pScaleFactor = 1.2F;
  points.pPatchSize = 31;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (detectORBFeatures.cpp)
