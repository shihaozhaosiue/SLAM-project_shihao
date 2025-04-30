//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// PointTracker.cpp
//
// Code generation for function 'PointTracker'
//

// Include files
#include "PointTracker.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "helperVisualSLAMCodegen_types.h"
#include "log2.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include "pointTrackerCore_api.hpp"

// Variable Definitions
static emlrtRSInfo
    tec_emlrtRSI{
        464,                       // lineNo
        "PointTracker/initialize", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pathName
    };

static emlrtRSInfo
    uec_emlrtRSI{
        465,                       // lineNo
        "PointTracker/initialize", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pathName
    };

static emlrtRSInfo
    vec_emlrtRSI{
        471,                       // lineNo
        "PointTracker/initialize", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pathName
    };

static emlrtRSInfo
    wec_emlrtRSI{
        502,                       // lineNo
        "PointTracker/initialize", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pathName
    };

static emlrtRSInfo
    xec_emlrtRSI{
        501,                       // lineNo
        "PointTracker/initialize", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pathName
    };

static emlrtRSInfo
    yec_emlrtRSI{
        621,                           // lineNo
        "PointTracker/validatePoints", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pathName
    };

static emlrtRSInfo
    bfc_emlrtRSI{
        578,                         // lineNo
        "PointTracker/getKLTParams", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pathName
    };

static emlrtRSInfo
    cfc_emlrtRSI{
        594,                                // lineNo
        "PointTracker/getNumPyramidLevels", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pathName
    };

static emlrtRSInfo dfc_emlrtRSI{
    66,                                              // lineNo
    "pointTrackerBuildable/pointTracker_initialize", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\pointTrackerBuildable.m" // pathName
};

static emlrtRSInfo efc_emlrtRSI{
    67,                                              // lineNo
    "pointTrackerBuildable/pointTracker_initialize", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\pointTrackerBuildable.m" // pathName
};

static emlrtRSInfo ffc_emlrtRSI{
    71,                                              // lineNo
    "pointTrackerBuildable/pointTracker_initialize", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\pointTrackerBuildable.m" // pathName
};

static emlrtRSInfo gfc_emlrtRSI{
    72,                                              // lineNo
    "pointTrackerBuildable/pointTracker_initialize", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\pointTrackerBuildable.m" // pathName
};

static emlrtRSInfo
    vuc_emlrtRSI{
        524,                      // lineNo
        "PointTracker/setPoints", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pathName
    };

static emlrtRSInfo
    wuc_emlrtRSI{
        556,                      // lineNo
        "PointTracker/setPoints", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pathName
    };

static emlrtRTEInfo
    rfb_emlrtRTEI{
        502,            // lineNo
        56,             // colNo
        "PointTracker", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pName
    };

static emlrtRTEInfo
    hnb_emlrtRTEI{
        550,            // lineNo
        9,              // colNo
        "PointTracker", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pName
    };

static emlrtRTEInfo
    inb_emlrtRTEI{
        557,            // lineNo
        27,             // colNo
        "PointTracker", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pName
    };

// Function Definitions
namespace coder {
namespace vision {
void PointTracker::validatePoints(const emlrtStack &sp,
                                  const array<real32_T, 2U> &points)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &yec_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &be_emlrtRSI;
  p = true;
  i = points.size(0) << 1;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i - 1)) {
    if (!(points[k] <= 0.0F)) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:PointTracker:expectedPositive", 3, 4, 6, "POINTS");
  }
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i - 1)) {
    if ((!muSingleScalarIsInf(points[k])) &&
        (!muSingleScalarIsNaN(points[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:PointTracker:expectedFinite", 3, 4, 6, "POINTS");
  }
  b_st.site = &be_emlrtRSI;
  if (points.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &kc_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedNonempty",
        "MATLAB:PointTracker:expectedNonempty", 3, 4, 6, "POINTS");
  }
}

PointTracker::PointTracker()
{
  matlabCodegenIsDeleted = true;
}

PointTracker::~PointTracker()
{
  if (!matlabCodegenIsDeleted) {
    emlrtSetIsInDestructor((emlrtCTX *)emlrtRootTLSGlobal, true);
    try {
      matlabCodegenDestructor();
    } catch (...) {
      /* no actions */
    }
    emlrtSetIsInDestructor((emlrtCTX *)emlrtRootTLSGlobal, false);
  }
}

PointTracker *PointTracker::init()
{
  void *ptrObj;
  PointTracker *obj;
  obj = this;
  obj->IsRGB = false;
  obj->isInitialized = 0;
  ptrObj = nullptr;
  pointTracker_construct(&ptrObj);
  obj->pTracker = ptrObj;
  obj->matlabCodegenIsDeleted = false;
  return obj;
}

void PointTracker::initialize(c_helperVisualSLAMCodegenStackD *SD,
                              const emlrtStack &sp,
                              const array<real32_T, 2U> &points,
                              const uint8_T b_I[307200])
{
  void *ptrObj;
  array<real32_T, 2U> b_points;
  cvstPTStruct_T paramStruct;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T topOfPyramid;
  real_T varargin_1_idx_1;
  int32_T blockH;
  int32_T blockW;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &tec_emlrtRSI;
  PointTracker::validatePoints(st, points);
  st.site = &uec_emlrtRSI;
  st.site = &vec_emlrtRSI;
  setup(st);
  FrameClassID = 2.0;
  FrameSize[0] = 480.0;
  FrameSize[1] = 640.0;
  NumPoints = points.size(0);
  st.site = &xec_emlrtRSI;
  ptrObj = pTracker;
  b_st.site = &wec_emlrtRSI;
  c_st.site = &bfc_emlrtRSI;
  topOfPyramid = FrameSize[0];
  varargin_1_idx_1 = FrameSize[1];
  if ((topOfPyramid > varargin_1_idx_1) ||
      (muDoubleScalarIsNaN(topOfPyramid) &&
       (!muDoubleScalarIsNaN(varargin_1_idx_1)))) {
    topOfPyramid = varargin_1_idx_1;
  }
  d_st.site = &cfc_emlrtRSI;
  topOfPyramid = b_log2(d_st, topOfPyramid) - 2.0;
  b_points.set_size(&rfb_emlrtRTEI, &st, points.size(0), 2);
  blockH = points.size(0) << 1;
  for (blockW = 0; blockW < blockH; blockW++) {
    b_points[blockW] = points[blockW];
  }
  b_st.site = &dfc_emlrtRSI;
  blockH = (int32_T)(31.0);
  b_st.site = &efc_emlrtRSI;
  blockW = (int32_T)(31.0);
  paramStruct.blockSize[0] = blockH;
  paramStruct.blockSize[1] = blockW;
  b_st.site = &ffc_emlrtRSI;
  paramStruct.numPyramidLevels = (int32_T)(muDoubleScalarMax(
      0.0, muDoubleScalarMin(muDoubleScalarFloor(topOfPyramid), 3.0)));
  b_st.site = &gfc_emlrtRSI;
  paramStruct.maxIterations = (double)(30.0);
  paramStruct.epsilon = 0.01;
  paramStruct.maxBidirectionalError = 5.0;
  for (blockW = 0; blockW < 480; blockW++) {
    for (blockH = 0; blockH < 640; blockH++) {
      SD->f3.Iu8_grayT[blockH + 640 * blockW] = b_I[blockW + 480 * blockH];
    }
  }
  pointTracker_initialize(ptrObj, &SD->f3.Iu8_grayT[0], 480, 640, &b_points[0],
                          points.size(0), &paramStruct);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void PointTracker::matlabCodegenDestructor()
{
  void *ptrObj;
  if (!matlabCodegenIsDeleted) {
    matlabCodegenIsDeleted = true;
    if (isInitialized == 1) {
      isInitialized = 2;
      if (isSetupComplete) {
        ptrObj = pTracker;
        pointTracker_deleteObj(ptrObj);
      }
    }
  }
}

void PointTracker::setPoints(const emlrtStack &sp,
                             const array<real32_T, 2U> &points)
{
  void *ptrObj;
  array<real32_T, 2U> b_points;
  array<boolean_T, 1U> pointValidity;
  emlrtStack st;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &vuc_emlrtRSI;
  PointTracker::validatePoints(st, points);
  loop_ub = points.size(0);
  pointValidity.set_size(&hnb_emlrtRTEI, &sp, points.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    pointValidity[i] = true;
  }
  NumPoints = points.size(0);
  st.site = &wuc_emlrtRSI;
  ptrObj = pTracker;
  b_points.set_size(&inb_emlrtRTEI, &st, points.size(0), 2);
  loop_ub = points.size(0) << 1;
  for (int32_T i{0}; i < loop_ub; i++) {
    b_points[i] = points[i];
  }
  pointTracker_setPoints(ptrObj, &b_points[0], points.size(0),
                         &(pointValidity.data())[0]);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void PointTracker::setup(const emlrtStack &sp)
{
  if (isInitialized != 0) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &je_emlrtRTEI,
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen",
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5,
        "setup");
  }
  isInitialized = 1;
  for (int32_T i{0}; i < 8; i++) {
    inputVarSize[0].f1[i] = static_cast<uint32_T>(iv4[i]);
  }
  isSetupComplete = true;
}

} // namespace vision
} // namespace coder
void c_or(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
          const coder::array<boolean_T, 1U> &in2,
          const coder::array<boolean_T, 1U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&bgb_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] || in3[i * stride_1_0]);
  }
}

// End of code generation (PointTracker.cpp)
