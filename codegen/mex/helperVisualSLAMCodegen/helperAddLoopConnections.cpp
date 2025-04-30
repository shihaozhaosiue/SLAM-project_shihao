//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperAddLoopConnections.cpp
//
// Code generation for function 'helperAddLoopConnections'
//

// Include files
#include "helperAddLoopConnections.h"
#include "ORBPoints.h"
#include "WarningState.h"
#include "binaryFeatures.h"
#include "cvalgMatchFeatures.h"
#include "estgeotform3d.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "imageviewset.h"
#include "mtimes.h"
#include "pose2extr.h"
#include "rigidtform3d.h"
#include "rigidtform3dImpl.h"
#include "rt_nonfinite.h"
#include "worldpointset.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo fcd_emlrtRSI{
    20,                         // lineNo
    "helperAddLoopConnections", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pathName
};

static emlrtRSInfo gcd_emlrtRSI{
    31,                         // lineNo
    "helperAddLoopConnections", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pathName
};

static emlrtRSInfo hcd_emlrtRSI{
    35,                         // lineNo
    "helperAddLoopConnections", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pathName
};

static emlrtRSInfo icd_emlrtRSI{
    39,                         // lineNo
    "helperAddLoopConnections", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pathName
};

static emlrtRSInfo jcd_emlrtRSI{
    53,                         // lineNo
    "helperAddLoopConnections", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pathName
};

static emlrtRSInfo kcd_emlrtRSI{
    54,                         // lineNo
    "helperAddLoopConnections", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pathName
};

static emlrtRSInfo lcd_emlrtRSI{
    56,                         // lineNo
    "helperAddLoopConnections", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pathName
};

static emlrtRSInfo mcd_emlrtRSI{
    57,                         // lineNo
    "helperAddLoopConnections", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pathName
};

static emlrtRSInfo ncd_emlrtRSI{
    64,                         // lineNo
    "helperAddLoopConnections", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pathName
};

static emlrtRSInfo ocd_emlrtRSI{
    67,                         // lineNo
    "helperAddLoopConnections", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pathName
};

static emlrtRSInfo pcd_emlrtRSI{
    75,                         // lineNo
    "helperAddLoopConnections", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pathName
};

static emlrtRSInfo qcd_emlrtRSI{
    76,                         // lineNo
    "helperAddLoopConnections", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pathName
};

static emlrtRSInfo rcd_emlrtRSI{
    85,                         // lineNo
    "helperAddLoopConnections", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pathName
};

static emlrtRSInfo scd_emlrtRSI{
    90,                         // lineNo
    "helperAddLoopConnections", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pathName
};

static emlrtRSInfo tcd_emlrtRSI{
    59,                         // lineNo
    "helperAddLoopConnections", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pathName
};

static emlrtRSInfo ucd_emlrtRSI{
    51,        // lineNo
    "warning", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\warning.m" // pathName
};

static emlrtBCInfo ykb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    87,                         // lineNo
    41,                         // colNo
    "loopCandidates",           // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo alb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    85,                         // lineNo
    85,                         // colNo
    "mapPoints.WorldPoints",    // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo blb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    83,                         // lineNo
    32,                         // colNo
    "index3d2",                 // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo clb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    82,                         // lineNo
    32,                         // colNo
    "index3d1",                 // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo dlb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    76,                         // lineNo
    65,                         // colNo
    "loopCandidates",           // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo elb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    74,                         // lineNo
    30,                         // colNo
    "index2d1",                 // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo flb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    73,                         // lineNo
    29,                         // colNo
    "index2d2",                 // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo glb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    72,                         // lineNo
    30,                         // colNo
    "indexPairs",               // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo hlb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    71,                         // lineNo
    30,                         // colNo
    "indexPairs",               // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ilb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    54,                         // lineNo
    72,                         // colNo
    "loopCandidates",           // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo jlb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    51,                         // lineNo
    51,                         // colNo
    "index3d2",                 // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo klb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    51,                         // lineNo
    42,                         // colNo
    "mapPoints.WorldPoints",    // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo llb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    50,                         // lineNo
    51,                         // colNo
    "index3d1",                 // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo mlb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    50,                         // lineNo
    42,                         // colNo
    "mapPoints.WorldPoints",    // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo nlb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    37,                         // lineNo
    35,                         // colNo
    "allFeatures2",             // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo ce_emlrtDCI{
    37,                         // lineNo
    35,                         // colNo
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo olb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    35,                         // lineNo
    66,                         // colNo
    "loopCandidates",           // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo plb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    31,                         // lineNo
    84,                         // colNo
    "loopCandidates",           // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo de_emlrtDCI{
    25,                         // lineNo
    41,                         // colNo
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo qlb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    25,                         // lineNo
    41,                         // colNo
    "currFeatures.Features",    // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo rlb_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    35,                             // lineNo
    51,                             // colNo
    "vSetKeyFrames.Views.Features", // aName
    "helperAddLoopConnections",     // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo slb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    33,                         // lineNo
    31,                         // colNo
    "index3d2Cg",               // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo tlb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    32,                         // lineNo
    31,                         // colNo
    "index2d2Cg",               // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ulb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    22,                         // lineNo
    27,                         // colNo
    "index3d1Cg",               // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo vlb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    21,                         // lineNo
    27,                         // colNo
    "index2d1Cg",               // aName
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo ee_emlrtDCI{
    35,                         // lineNo
    51,                         // colNo
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m", // pName
    1                                             // checkKind
};

static emlrtRTEInfo hec_emlrtRTEI{
    14,                         // lineNo
    1,                          // colNo
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pName
};

static emlrtRTEInfo iec_emlrtRTEI{
    25,                         // lineNo
    1,                          // colNo
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pName
};

static emlrtRTEInfo jec_emlrtRTEI{
    37,                         // lineNo
    22,                         // colNo
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pName
};

static emlrtRTEInfo kec_emlrtRTEI{
    50,                         // lineNo
    5,                          // colNo
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pName
};

static emlrtRTEInfo lec_emlrtRTEI{
    51,                         // lineNo
    5,                          // colNo
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pName
};

static emlrtRTEInfo mec_emlrtRTEI{
    56,                         // lineNo
    5,                          // colNo
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pName
};

static emlrtRTEInfo nec_emlrtRTEI{
    57,                         // lineNo
    5,                          // colNo
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pName
};

static emlrtRTEInfo oec_emlrtRTEI{
    1,                          // lineNo
    53,                         // colNo
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pName
};

static emlrtRTEInfo pec_emlrtRTEI{
    85,                         // lineNo
    63,                         // colNo
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pName
};

static emlrtRTEInfo qec_emlrtRTEI{
    82,                         // lineNo
    23,                         // colNo
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pName
};

static emlrtRTEInfo rec_emlrtRTEI{
    87,                         // lineNo
    23,                         // colNo
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pName
};

static emlrtRTEInfo sec_emlrtRTEI{
    87,                         // lineNo
    5,                          // colNo
    "helperAddLoopConnections", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddLoopConnections.m" // pName
};

// Function Definitions
boolean_T helperAddLoopConnections(const emlrtStack &sp,
                                   coder::worldpointset &mapPoints,
                                   coder::imageviewset &vSetKeyFrames,
                                   const uint32_T loopCandidates_data[],
                                   const int32_T loopCandidates_size[2],
                                   real_T currKeyFrameId,
                                   const coder::binaryFeatures &currFeatures)
{
  coder::b_rigidtform3d t2_AbsolutePose;
  coder::b_rigidtform3d tform1;
  coder::b_rigidtform3d tform2;
  coder::b_rigidtform3d unusedExpr;
  coder::internal::WarningState lobj_0[2];
  coder::internal::WarningState *w;
  coder::array<coder::b_ORBPoints, 1U> b_expl_temp;
  coder::array<cell_wrap_8, 2U> t2_Features;
  coder::array<real_T, 1U> b_index3d1Cg;
  coder::array<int32_T, 1U> r1;
  coder::array<real32_T, 2U> worldPoints1;
  coder::array<real32_T, 2U> worldPoints1InCamera1;
  coder::array<real32_T, 2U> worldPoints2;
  coder::array<real32_T, 1U> matchMetric;
  coder::array<uint32_T, 2U> b_index2d2Cg;
  coder::array<uint32_T, 2U> indexPairs;
  coder::array<uint32_T, 2U> loopClosureEdge;
  coder::array<uint32_T, 1U> expl_temp;
  coder::array<uint8_T, 2U> b_t2_Features;
  coder::array<uint8_T, 2U> validFeatures1;
  coder::array<boolean_T, 2U> inlierIndex;
  coder::bounded_array<cell_wrap_25, 1U, 1U> index2d1Cg;
  coder::bounded_array<cell_wrap_25, 1U, 1U> index2d2Cg;
  coder::bounded_array<cell_wrap_25, 1U, 1U> index3d1Cg;
  coder::bounded_array<cell_wrap_25, 1U, 1U> index3d2Cg;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  boolean_T isLoopClosed;
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
  lobj_0[0].matlabCodegenIsDeleted = true;
  lobj_0[0]._populateDestructorParams((const emlrtStack *)&sp);
  lobj_0[1].matlabCodegenIsDeleted = true;
  lobj_0[1]._populateDestructorParams((const emlrtStack *)&sp);
  // helperAddLoopConnections add connections between the current key frame and
  //    the valid loop candidate key frames. A loop candidate is valid if it has
  //    enough covisible map points with the current key frame.
  //    This is an example helper function that is subject to change or removal
  //    in future releases.
  //    Copyright 2019-2023 The MathWorks, Inc.
  loopClosureEdge.set_size(&hec_emlrtRTEI, &sp, 0, 2);
  st.site = &fcd_emlrtRSI;
  index3d1Cg.size[0] = mapPoints.findWorldPointsInView(
      st, currKeyFrameId, index3d1Cg.data, index2d1Cg.data, i);
  index2d1Cg.size[0] = i;
  if (index2d1Cg.size[0] - 1 < 0) {
    emlrtDynamicBoundsCheckR2012b(0, 0, index2d1Cg.size[0] - 1, &vlb_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if (index3d1Cg.size[0] - 1 < 0) {
    emlrtDynamicBoundsCheckR2012b(0, 0, index3d1Cg.size[0] - 1, &ulb_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  loop_ub = index2d1Cg.data[0].f1.size(0);
  validFeatures1.set_size(&iec_emlrtRTEI, &sp, index2d1Cg.data[0].f1.size(0),
                          32);
  for (i1 = 0; i1 < 32; i1++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      d = index2d1Cg.data[0].f1[i2];
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &de_emlrtDCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(d) < 1) ||
          (static_cast<int32_T>(d) > currFeatures.Features.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                      currFeatures.Features.size(0),
                                      &qlb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      validFeatures1[i2 + validFeatures1.size(0) * i1] =
          currFeatures.Features[(static_cast<int32_T>(d) +
                                 currFeatures.Features.size(0) * i1) -
                                1];
    }
  }
  i1 = loopCandidates_size[0];
  for (int32_T k{0}; k < i1; k++) {
    int32_T b_loop_ub;
    int32_T i3;
    int32_T i4;
    int32_T vectorUB;
    uint32_T u;
    uint32_T u1;
    i2 = loopCandidates_size[0] * loopCandidates_size[1];
    if (k + 1 > i2) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i2, &plb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    u = loopCandidates_data[k];
    st.site = &gcd_emlrtRSI;
    index3d2Cg.size[0] = mapPoints.findWorldPointsInView(st, u, index3d2Cg.data,
                                                         index2d2Cg.data, i);
    index2d2Cg.size[0] = i;
    if (index2d2Cg.size[0] - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, index2d2Cg.size[0] - 1, &tlb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (index3d2Cg.size[0] - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, index3d2Cg.size[0] - 1, &slb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    st.site = &hcd_emlrtRSI;
    vSetKeyFrames.imageviewsetBase_get_Views(st, expl_temp, t2_Features,
                                             b_expl_temp, unusedExpr);
    if (k + 1 > i2) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i2, &olb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (static_cast<real_T>(u) != static_cast<int32_T>(u)) {
      emlrtIntegerCheckR2012b(static_cast<real_T>(u), &ee_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(u) - 1 < 0) ||
        (static_cast<int32_T>(u) - 1 > t2_Features.size(0) - 1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u) - 1, 0,
                                    t2_Features.size(0) - 1, &rlb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i = index2d2Cg.data[0].f1.size(0);
    for (i3 = 0; i3 < i; i3++) {
      i4 =
          t2_Features[static_cast<int32_T>(loopCandidates_data[k]) - 1].f1.size(
              0);
      d = index2d2Cg.data[0].f1[i3];
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &ce_emlrtDCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i4)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i4,
                                      &nlb_emlrtBCI, (emlrtConstCTX)&sp);
      }
    }
    st.site = &icd_emlrtRSI;
    b_st.site = &dh_emlrtRSI;
    u1 = loopCandidates_data[k];
    i3 = static_cast<int32_T>(u1) - 1;
    b_loop_ub = t2_Features[static_cast<int32_T>(u1) - 1].f1.size(1);
    if (b_loop_ub != 32) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &qe_emlrtRTEI, "vision:matchFeatures:featuresNotSameDimension",
          "vision:matchFeatures:featuresNotSameDimension", 0);
    }
    b_t2_Features.set_size(&jec_emlrtRTEI, &st, index2d2Cg.data[0].f1.size(0),
                           32);
    for (i4 = 0; i4 < 32; i4++) {
      for (vectorUB = 0; vectorUB < i; vectorUB++) {
        b_t2_Features[vectorUB + b_t2_Features.size(0) * i4] =
            t2_Features[i3]
                .f1[(static_cast<int32_T>(index2d2Cg.data[0].f1[vectorUB]) +
                     t2_Features[i3].f1.size(0) * i4) -
                    1];
      }
    }
    b_st.site = &eh_emlrtRSI;
    coder::vision::internal::matchFeatures::cvalgMatchFeatures(
        b_st, validFeatures1, b_t2_Features, indexPairs, matchMetric);
    //  Check if all the candidate key frames have strong connection with the
    //  current keyframe
    if (indexPairs.size(0) >= 50) {
      __m128 b_r;
      int32_T A_out_tmp;
      int32_T mapPoints_tmp;
      real32_T A_out[16];
      real32_T b_A_out[9];
      //  Estimate the relative pose of the current key frame with respect to
      //  the loop candidate keyframe with the highest similarity score
      mapPoints_tmp = mapPoints.WorldPoints.size(0);
      b_loop_ub = indexPairs.size(0);
      worldPoints1.set_size(&kec_emlrtRTEI, &sp, indexPairs.size(0), 3);
      for (i3 = 0; i3 < 3; i3++) {
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          if ((static_cast<int32_T>(indexPairs[i4]) < 1) ||
              (static_cast<int32_T>(indexPairs[i4]) >
               index3d1Cg.data[0].f1.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indexPairs[i4]),
                                          1, index3d1Cg.data[0].f1.size(0),
                                          &llb_emlrtBCI, (emlrtConstCTX)&sp);
          }
          vectorUB = static_cast<int32_T>(
              index3d1Cg.data[0].f1[static_cast<int32_T>(indexPairs[i4]) - 1]);
          if ((vectorUB < 1) || (vectorUB > mapPoints_tmp)) {
            emlrtDynamicBoundsCheckR2012b(vectorUB, 1, mapPoints_tmp,
                                          &mlb_emlrtBCI, (emlrtConstCTX)&sp);
          }
          worldPoints1[i4 + worldPoints1.size(0) * i3] =
              mapPoints
                  .WorldPoints[(vectorUB + mapPoints.WorldPoints.size(0) * i3) -
                               1];
        }
      }
      worldPoints2.set_size(&lec_emlrtRTEI, &sp, indexPairs.size(0), 3);
      for (i3 = 0; i3 < 3; i3++) {
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          if ((static_cast<int32_T>(indexPairs[i4 + indexPairs.size(0)]) < 1) ||
              (static_cast<int32_T>(indexPairs[i4 + indexPairs.size(0)]) >
               index3d2Cg.data[0].f1.size(0))) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(indexPairs[i4 + indexPairs.size(0)]), 1,
                index3d2Cg.data[0].f1.size(0), &jlb_emlrtBCI,
                (emlrtConstCTX)&sp);
          }
          vectorUB = static_cast<int32_T>(
              index3d2Cg.data[0].f1[static_cast<int32_T>(
                                        indexPairs[i4 + indexPairs.size(0)]) -
                                    1]);
          if ((vectorUB < 1) || (vectorUB > mapPoints_tmp)) {
            emlrtDynamicBoundsCheckR2012b(vectorUB, 1, mapPoints_tmp,
                                          &klb_emlrtBCI, (emlrtConstCTX)&sp);
          }
          worldPoints2[i4 + worldPoints2.size(0) * i3] =
              mapPoints
                  .WorldPoints[(vectorUB + mapPoints.WorldPoints.size(0) * i3) -
                               1];
        }
      }
      st.site = &jcd_emlrtRSI;
      vSetKeyFrames.imageviewsetBase_get_Views(st, expl_temp, t2_Features,
                                               b_expl_temp, t2_AbsolutePose);
      tform2 = t2_AbsolutePose;
      st.site = &jcd_emlrtRSI;
      vSetKeyFrames.imageviewsetBase_get_Views(st, expl_temp, t2_Features,
                                               b_expl_temp, t2_AbsolutePose);
      st.site = &jcd_emlrtRSI;
      t2_AbsolutePose.parenReference(
          st, static_cast<real_T>(tform2.Data.size(1)), &tform1);
      st.site = &jcd_emlrtRSI;
      coder::pose2extr(st, tform1);
      st.site = &kcd_emlrtRSI;
      vSetKeyFrames.imageviewsetBase_get_Views(st, expl_temp, t2_Features,
                                               b_expl_temp, t2_AbsolutePose);
      if (k + 1 > i2) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i2, &ilb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      st.site = &kcd_emlrtRSI;
      t2_AbsolutePose.parenReference(st, u, tform2);
      st.site = &kcd_emlrtRSI;
      coder::pose2extr(st, tform2);
      st.site = &lcd_emlrtRSI;
      b_st.site = &fq_emlrtRSI;
      c_st.site = &gq_emlrtRSI;
      for (i3 = 0; i3 < 3; i3++) {
        A_out_tmp = i3 << 2;
        A_out[A_out_tmp] = tform1.R[3 * i3];
        A_out[A_out_tmp + 1] = tform1.R[3 * i3 + 1];
        A_out[A_out_tmp + 2] = tform1.R[3 * i3 + 2];
        A_out[i3 + 12] = tform1.Translation[i3];
      }
      A_out[3] = 0.0F;
      A_out[7] = 0.0F;
      A_out[11] = 0.0F;
      A_out[15] = 1.0F;
      d_st.site = &hq_emlrtRSI;
      for (i3 = 0; i3 < 3; i3++) {
        A_out_tmp = i3 << 2;
        b_A_out[3 * i3] = A_out[A_out_tmp];
        b_A_out[3 * i3 + 1] = A_out[A_out_tmp + 1];
        b_A_out[3 * i3 + 2] = A_out[A_out_tmp + 2];
      }
      e_st.site = &ln_emlrtRSI;
      coder::internal::blas::mtimes(e_st, worldPoints1, b_A_out,
                                    worldPoints1InCamera1);
      b_loop_ub = worldPoints1InCamera1.size(0);
      worldPoints1.set_size(&vn_emlrtRTEI, &c_st, worldPoints1InCamera1.size(0),
                            3);
      A_out_tmp = (b_loop_ub / 4) << 2;
      vectorUB = A_out_tmp - 4;
      for (i3 = 0; i3 < 3; i3++) {
        for (i4 = 0; i4 <= vectorUB; i4 += 4) {
          b_r = _mm_loadu_ps(
              &worldPoints1InCamera1[i4 + worldPoints1InCamera1.size(0) * i3]);
          _mm_storeu_ps(&worldPoints1[i4 + worldPoints1.size(0) * i3],
                        _mm_add_ps(b_r, _mm_set1_ps(A_out[i3 + 12])));
        }
        for (i4 = A_out_tmp; i4 < b_loop_ub; i4++) {
          worldPoints1[i4 + worldPoints1.size(0) * i3] =
              worldPoints1InCamera1[i4 + worldPoints1InCamera1.size(0) * i3] +
              A_out[i3 + 12];
        }
      }
      worldPoints1InCamera1.set_size(&mec_emlrtRTEI, &c_st,
                                     worldPoints1.size(0), 3);
      A_out_tmp = worldPoints1.size(0) * 3;
      for (i3 = 0; i3 < A_out_tmp; i3++) {
        worldPoints1InCamera1[i3] = worldPoints1[i3];
      }
      st.site = &mcd_emlrtRSI;
      b_st.site = &fq_emlrtRSI;
      c_st.site = &gq_emlrtRSI;
      for (i3 = 0; i3 < 3; i3++) {
        A_out_tmp = i3 << 2;
        A_out[A_out_tmp] = tform2.R[3 * i3];
        A_out[A_out_tmp + 1] = tform2.R[3 * i3 + 1];
        A_out[A_out_tmp + 2] = tform2.R[3 * i3 + 2];
        A_out[i3 + 12] = tform2.Translation[i3];
      }
      A_out[3] = 0.0F;
      A_out[7] = 0.0F;
      A_out[11] = 0.0F;
      A_out[15] = 1.0F;
      d_st.site = &hq_emlrtRSI;
      for (i3 = 0; i3 < 3; i3++) {
        A_out_tmp = i3 << 2;
        b_A_out[3 * i3] = A_out[A_out_tmp];
        b_A_out[3 * i3 + 1] = A_out[A_out_tmp + 1];
        b_A_out[3 * i3 + 2] = A_out[A_out_tmp + 2];
      }
      e_st.site = &ln_emlrtRSI;
      coder::internal::blas::mtimes(e_st, worldPoints2, b_A_out, worldPoints1);
      b_loop_ub = worldPoints1.size(0);
      worldPoints2.set_size(&vn_emlrtRTEI, &c_st, worldPoints1.size(0), 3);
      A_out_tmp = (b_loop_ub / 4) << 2;
      vectorUB = A_out_tmp - 4;
      for (i3 = 0; i3 < 3; i3++) {
        for (i4 = 0; i4 <= vectorUB; i4 += 4) {
          b_r = _mm_loadu_ps(&worldPoints1[i4 + worldPoints1.size(0) * i3]);
          _mm_storeu_ps(&worldPoints2[i4 + worldPoints2.size(0) * i3],
                        _mm_add_ps(b_r, _mm_set1_ps(A_out[i3 + 12])));
        }
        for (i4 = A_out_tmp; i4 < b_loop_ub; i4++) {
          worldPoints2[i4 + worldPoints2.size(0) * i3] =
              worldPoints1[i4 + worldPoints1.size(0) * i3] + A_out[i3 + 12];
        }
      }
      worldPoints1.set_size(&nec_emlrtRTEI, &c_st, worldPoints2.size(0), 3);
      A_out_tmp = worldPoints2.size(0) * 3;
      for (i3 = 0; i3 < A_out_tmp; i3++) {
        worldPoints1[i3] = worldPoints2[i3];
      }
      st.site = &scd_emlrtRSI;
      lobj_0[0].matlabCodegenDestructor(&st);
      st.site = &scd_emlrtRSI;
      lobj_0[1].matlabCodegenDestructor(&st);
      st.site = &tcd_emlrtRSI;
      b_st.site = &ucd_emlrtRSI;
      w = coder::internal::WarningState::callWarning(b_st, lobj_0[0]);
      st.site = &ncd_emlrtRSI;
      coder::estgeotform3d(st, worldPoints1InCamera1, worldPoints1, tform2,
                           inlierIndex);
      st.site = &ocd_emlrtRSI;
      w->warning(st);
      //  Add connection between the current key frame and the loop key frame
      vectorUB = inlierIndex.size(0) * inlierIndex.size(1);
      A_out_tmp = 0;
      for (b_loop_ub = 0; b_loop_ub < vectorUB; b_loop_ub++) {
        if (inlierIndex[b_loop_ub]) {
          A_out_tmp++;
        }
      }
      r1.set_size(&oec_emlrtRTEI, &sp, A_out_tmp);
      A_out_tmp = 0;
      for (b_loop_ub = 0; b_loop_ub < vectorUB; b_loop_ub++) {
        if (inlierIndex[b_loop_ub]) {
          r1[A_out_tmp] = b_loop_ub;
          A_out_tmp++;
        }
      }
      A_out_tmp = r1.size(0);
      for (i3 = 0; i3 < A_out_tmp; i3++) {
        if (r1[i3] > indexPairs.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(r1[i3], 0, indexPairs.size(0) - 1,
                                        &hlb_emlrtBCI, (emlrtConstCTX)&sp);
        }
      }
      for (i3 = 0; i3 < A_out_tmp; i3++) {
        if (r1[i3] > indexPairs.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(r1[i3], 0, indexPairs.size(0) - 1,
                                        &glb_emlrtBCI, (emlrtConstCTX)&sp);
        }
      }
      for (i3 = 0; i3 < A_out_tmp; i3++) {
        i4 = static_cast<int32_T>(indexPairs[r1[i3] + indexPairs.size(0)]);
        if ((i4 < 1) || (i4 > i)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i, &flb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
      }
      for (i3 = 0; i3 < A_out_tmp; i3++) {
        i4 = static_cast<int32_T>(indexPairs[r1[i3]]);
        if ((i4 < 1) || (i4 > loop_ub)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, loop_ub, &elb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
      }
      st.site = &pcd_emlrtRSI;
      b_st.site = &ij_emlrtRSI;
      c_st.site = &jj_emlrtRSI;
      b_index2d2Cg.set_size(&owb_emlrtRTEI, &sp, r1.size(0), 2);
      for (i3 = 0; i3 < A_out_tmp; i3++) {
        d = muDoubleScalarRound(
            index2d2Cg.data[0].f1[static_cast<int32_T>(
                                      indexPairs[r1[i3] + indexPairs.size(0)]) -
                                  1]);
        if (d < 4.294967296E+9) {
          if (d >= 0.0) {
            u1 = static_cast<uint32_T>(d);
          } else {
            u1 = 0U;
          }
        } else if (d >= 4.294967296E+9) {
          u1 = MAX_uint32_T;
        } else {
          u1 = 0U;
        }
        b_index2d2Cg[i3] = u1;
        d = muDoubleScalarRound(
            index2d1Cg.data[0]
                .f1[static_cast<int32_T>(indexPairs[r1[i3]]) - 1]);
        if (d < 4.294967296E+9) {
          if (d >= 0.0) {
            u1 = static_cast<uint32_T>(d);
          } else {
            u1 = 0U;
          }
        } else if (d >= 4.294967296E+9) {
          u1 = MAX_uint32_T;
        } else {
          u1 = 0U;
        }
        b_index2d2Cg[i3 + b_index2d2Cg.size(0)] = u1;
      }
      if (k + 1 > i2) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i2, &dlb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      st.site = &qcd_emlrtRSI;
      vSetKeyFrames.addConnection(st, u, currKeyFrameId, tform2, b_index2d2Cg);
      //  Fuse co-visible map points
      for (i3 = 0; i3 < A_out_tmp; i3++) {
        i4 = static_cast<int32_T>(indexPairs[r1[i3]]);
        if ((i4 < 1) || (i4 > index3d1Cg.data[0].f1.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, index3d1Cg.data[0].f1.size(0),
                                        &clb_emlrtBCI, (emlrtConstCTX)&sp);
        }
      }
      for (i3 = 0; i3 < A_out_tmp; i3++) {
        i4 = static_cast<int32_T>(indexPairs[r1[i3] + indexPairs.size(0)]);
        if ((i4 < 1) || (i4 > index3d2Cg.data[0].f1.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, index3d2Cg.data[0].f1.size(0),
                                        &blb_emlrtBCI, (emlrtConstCTX)&sp);
        }
      }
      worldPoints1.set_size(&pec_emlrtRTEI, &sp, r1.size(0), 3);
      for (i3 = 0; i3 < 3; i3++) {
        for (i4 = 0; i4 < A_out_tmp; i4++) {
          vectorUB = static_cast<int32_T>(
              index3d2Cg.data[0]
                  .f1[static_cast<int32_T>(
                          indexPairs[r1[i4] + indexPairs.size(0)]) -
                      1]);
          if ((vectorUB < 1) || (vectorUB > mapPoints_tmp)) {
            emlrtDynamicBoundsCheckR2012b(vectorUB, 1, mapPoints_tmp,
                                          &alb_emlrtBCI, (emlrtConstCTX)&sp);
          }
          worldPoints1[i4 + worldPoints1.size(0) * i3] =
              mapPoints
                  .WorldPoints[(vectorUB + mapPoints.WorldPoints.size(0) * i3) -
                               1];
        }
      }
      b_index3d1Cg.set_size(&qec_emlrtRTEI, &sp, r1.size(0));
      for (i3 = 0; i3 < A_out_tmp; i3++) {
        b_index3d1Cg[i3] =
            index3d1Cg.data[0].f1[static_cast<int32_T>(indexPairs[r1[i3]]) - 1];
      }
      st.site = &rcd_emlrtRSI;
      mapPoints.updateWorldPoints(st, b_index3d1Cg, worldPoints1);
      i = loopClosureEdge.size(0);
      indexPairs.set_size(&rec_emlrtRTEI, &sp, loopClosureEdge.size(0) + 1, 2);
      for (i3 = 0; i3 < 2; i3++) {
        for (i4 = 0; i4 < i; i4++) {
          indexPairs[i4 + indexPairs.size(0) * i3] =
              loopClosureEdge[i4 + loopClosureEdge.size(0) * i3];
        }
      }
      if (k + 1 > i2) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i2, &ykb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      indexPairs[loopClosureEdge.size(0)] = loopCandidates_data[k];
      d = muDoubleScalarRound(currKeyFrameId);
      if (d < 4.294967296E+9) {
        if (d >= 0.0) {
          u = static_cast<uint32_T>(d);
        } else {
          u = 0U;
        }
      } else if (d >= 4.294967296E+9) {
        u = MAX_uint32_T;
      } else {
        u = 0U;
      }
      indexPairs[loopClosureEdge.size(0) + indexPairs.size(0)] = u;
      loopClosureEdge.set_size(&sec_emlrtRTEI, &sp, indexPairs.size(0), 2);
      i = indexPairs.size(0) << 1;
      for (i2 = 0; i2 < i; i2++) {
        loopClosureEdge[i2] = indexPairs[i2];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  isLoopClosed = (loopClosureEdge.size(0) != 0);
  st.site = &scd_emlrtRSI;
  lobj_0[0].matlabCodegenDestructor(&st);
  st.site = &scd_emlrtRSI;
  lobj_0[1].matlabCodegenDestructor(&st);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return isLoopClosed;
}

// End of code generation (helperAddLoopConnections.cpp)
