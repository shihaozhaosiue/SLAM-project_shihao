//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperAddNewKeyFrame.cpp
//
// Code generation for function 'helperAddNewKeyFrame'
//

// Include files
#include "helperAddNewKeyFrame.h"
#include "ORBPoints.h"
#include "ViewSetBaseImpl.h"
#include "binaryFeatures.h"
#include "eml_setop.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "imageviewset.h"
#include "rigidtform3d.h"
#include "rt_nonfinite.h"
#include "worldpointset.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo ndb_emlrtRSI{
    944,                         // lineNo
    "imageviewsetBase/addProps", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pathName
};

static emlrtRSInfo odb_emlrtRSI{
    945,                         // lineNo
    "imageviewsetBase/addProps", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pathName
};

static emlrtRSInfo pdb_emlrtRSI{
    946,                         // lineNo
    "imageviewsetBase/addProps", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pathName
};

static emlrtRSInfo poc_emlrtRSI{
    11,                     // lineNo
    "helperAddNewKeyFrame", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m" // pathName
};

static emlrtRSInfo qoc_emlrtRSI{
    13,                     // lineNo
    "helperAddNewKeyFrame", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m" // pathName
};

static emlrtRSInfo roc_emlrtRSI{
    17,                     // lineNo
    "helperAddNewKeyFrame", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m" // pathName
};

static emlrtRSInfo soc_emlrtRSI{
    24,                     // lineNo
    "helperAddNewKeyFrame", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m" // pathName
};

static emlrtRSInfo toc_emlrtRSI{
    28,                     // lineNo
    "helperAddNewKeyFrame", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m" // pathName
};

static emlrtRSInfo uoc_emlrtRSI{
    30,                     // lineNo
    "helperAddNewKeyFrame", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m" // pathName
};

static emlrtRSInfo voc_emlrtRSI{
    41,                     // lineNo
    "helperAddNewKeyFrame", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m" // pathName
};

static emlrtRSInfo woc_emlrtRSI{
    42,                     // lineNo
    "helperAddNewKeyFrame", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m" // pathName
};

static emlrtRSInfo xoc_emlrtRSI{
    48,                     // lineNo
    "helperAddNewKeyFrame", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m" // pathName
};

static emlrtRSInfo yoc_emlrtRSI{
    31,                     // lineNo
    "helperAddNewKeyFrame", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m" // pathName
};

static emlrtRSInfo apc_emlrtRSI{
    120,                    // lineNo
    "imageviewset/addView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRSInfo bpc_emlrtRSI{
    117,                    // lineNo
    "imageviewset/addView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRSInfo cpc_emlrtRSI{
    111,                    // lineNo
    "imageviewset/addView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRTEInfo fh_emlrtRTEI{
    1100,                                 // lineNo
    19,                                   // colNo
    "imageviewsetBase/updateOrientation", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

static emlrtDCInfo gd_emlrtDCI{
    1098,                                 // lineNo
    48,                                   // colNo
    "imageviewsetBase/updateOrientation", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    1                                             // checkKind
};

static emlrtRTEInfo gh_emlrtRTEI{
    1076,                           // lineNo
    19,                             // colNo
    "imageviewsetBase/updateScale", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

static emlrtDCInfo hd_emlrtDCI{
    1074,                           // lineNo
    42,                             // colNo
    "imageviewsetBase/updateScale", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    1                                             // checkKind
};

static emlrtRTEInfo hh_emlrtRTEI{
    1052,                             // lineNo
    19,                               // colNo
    "imageviewsetBase/updateMetrics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

static emlrtDCInfo id_emlrtDCI{
    1050,                             // lineNo
    43,                               // colNo
    "imageviewsetBase/updateMetrics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo jhb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    753,                                 // lineNo
    42,                                  // colNo
    "",                                  // aName
    "imageviewsetBase/getUpdatedPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo khb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    761,                                 // lineNo
    52,                                  // colNo
    "",                                  // aName
    "imageviewsetBase/getUpdatedPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo lhb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    761,                                 // lineNo
    34,                                  // colNo
    "",                                  // aName
    "imageviewsetBase/getUpdatedPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

static emlrtRTEInfo ih_emlrtRTEI{
    744,                                 // lineNo
    21,                                  // colNo
    "imageviewsetBase/getUpdatedPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

static emlrtDCInfo jd_emlrtDCI{
    740,                                 // lineNo
    44,                                  // colNo
    "imageviewsetBase/getUpdatedPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo mhb_emlrtBCI{
    -1,                                    // iFirst
    -1,                                    // iLast
    715,                                   // lineNo
    38,                                    // colNo
    "",                                    // aName
    "imageviewsetBase/getUpdatedFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo nhb_emlrtBCI{
    -1,                                    // iFirst
    -1,                                    // iLast
    724,                                   // lineNo
    54,                                    // colNo
    "",                                    // aName
    "imageviewsetBase/getUpdatedFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ohb_emlrtBCI{
    -1,                                    // iFirst
    -1,                                    // iLast
    724,                                   // lineNo
    34,                                    // colNo
    "",                                    // aName
    "imageviewsetBase/getUpdatedFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

static emlrtRTEInfo jh_emlrtRTEI{
    709,                                   // lineNo
    21,                                    // colNo
    "imageviewsetBase/getUpdatedFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

static emlrtDCInfo kd_emlrtDCI{
    704,                                   // lineNo
    44,                                    // colNo
    "imageviewsetBase/getUpdatedFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo phb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    26,                     // lineNo
    29,                     // colNo
    "index2dCg",            // aName
    "helperAddNewKeyFrame", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo qhb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    25,                     // lineNo
    29,                     // colNo
    "index3dCg",            // aName
    "helperAddNewKeyFrame", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo rhb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    20,                     // lineNo
    40,                     // colNo
    "keyFramesIndices",     // aName
    "helperAddNewKeyFrame", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo yhb_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    11,                           // lineNo
    37,                           // colNo
    "vSetKeyFrames.Views.ViewId", // aName
    "helperAddNewKeyFrame",       // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo aib_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    1055,                             // lineNo
    25,                               // colNo
    "",                               // aName
    "imageviewsetBase/updateMetrics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo bib_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    1058,                             // lineNo
    21,                               // colNo
    "",                               // aName
    "imageviewsetBase/updateMetrics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo cib_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    1058,                             // lineNo
    34,                               // colNo
    "",                               // aName
    "imageviewsetBase/updateMetrics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo dib_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    1079,                           // lineNo
    25,                             // colNo
    "",                             // aName
    "imageviewsetBase/updateScale", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo eib_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    1082,                           // lineNo
    21,                             // colNo
    "",                             // aName
    "imageviewsetBase/updateScale", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo fib_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    1082,                           // lineNo
    33,                             // colNo
    "",                             // aName
    "imageviewsetBase/updateScale", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo gib_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    1103,                                 // lineNo
    25,                                   // colNo
    "",                                   // aName
    "imageviewsetBase/updateOrientation", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo hib_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    1106,                                 // lineNo
    21,                                   // colNo
    "",                                   // aName
    "imageviewsetBase/updateOrientation", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo iib_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    1106,                                 // lineNo
    39,                                   // colNo
    "",                                   // aName
    "imageviewsetBase/updateOrientation", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo jib_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    40,                     // lineNo
    39,                     // colNo
    "featureIndices",       // aName
    "helperAddNewKeyFrame", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo kib_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    41,                     // lineNo
    32,                     // colNo
    "index2d",              // aName
    "helperAddNewKeyFrame", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m", // pName
    0                                         // checkKind
};

static emlrtRTEInfo jub_emlrtRTEI{
    1050,               // lineNo
    50,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

static emlrtRTEInfo mub_emlrtRTEI{
    1074,               // lineNo
    49,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

static emlrtRTEInfo pub_emlrtRTEI{
    1098,               // lineNo
    55,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

static emlrtRTEInfo tub_emlrtRTEI{
    704,                // lineNo
    51,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

static emlrtRTEInfo xub_emlrtRTEI{
    740,                // lineNo
    51,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

static emlrtRTEInfo uac_emlrtRTEI{
    1,                      // lineNo
    39,                     // colNo
    "helperAddNewKeyFrame", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m" // pName
};

static emlrtRTEInfo vac_emlrtRTEI{
    17,          // lineNo
    5,           // colNo
    "intersect", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\intersect.m" // pName
};

static emlrtRTEInfo wac_emlrtRTEI{
    40,                     // lineNo
    13,                     // colNo
    "helperAddNewKeyFrame", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperAddNewKeyFrame.m" // pName
};

static emlrtRTEInfo xac_emlrtRTEI{
    1277,           // lineNo
    17,             // colNo
    "imageviewset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pName
};

// Function Definitions
void helperAddNewKeyFrame(const emlrtStack &sp, coder::worldpointset &mapPoints,
                          coder::imageviewset &vSetKeyFrames,
                          const coder::b_rigidtform3d &cameraPose,
                          const coder::binaryFeatures &currFeatures,
                          const coder::ORBPoints &currPoints,
                          const coder::array<real_T, 1U> &mapPointsIndices,
                          const coder::array<uint32_T, 1U> &featureIndices,
                          const coder::array<uint32_T, 1U> &keyFramesIndices)
{
  coder::b_rigidtform3d prePose;
  coder::b_rigidtform3d t9_AbsolutePose;
  coder::imageviewset b_this;
  coder::array<coder::b_ORBPoints, 1U> b_expl_temp;
  coder::array<cell_wrap_12, 2U> uMetric;
  coder::array<cell_wrap_8, 2U> expl_temp;
  coder::array<real_T, 2U> c_f1;
  coder::array<real_T, 1U> c;
  coder::array<int32_T, 1U> ia;
  coder::array<int32_T, 1U> ib;
  coder::array<uint32_T, 2U> b_f1;
  coder::array<uint32_T, 1U> fIndices;
  coder::bounded_array<cell_wrap_25, 1U, 1U> index2dCg;
  coder::bounded_array<cell_wrap_25, 1U, 1U> index3dCg;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  real32_T b_cameraPose[16];
  uint32_T q0;
  uint32_T qY;
  boolean_T viewExists;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  // helperAddNewKeyFrame add key frames to the key frame set
  //
  //    This is an example helper function that is subject to change or removal
  //    in future releases.
  //    Copyright 2019-2023 The MathWorks, Inc.
  st.site = &poc_emlrtRSI;
  vSetKeyFrames.imageviewsetBase_get_Views(st, fIndices, expl_temp, b_expl_temp,
                                           t9_AbsolutePose);
  if (fIndices.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(fIndices.size(0), 1, fIndices.size(0),
                                  &yhb_emlrtBCI, (emlrtConstCTX)&sp);
  }
  q0 = fIndices[fIndices.size(0) - 1];
  qY = q0 + 1U;
  if (q0 + 1U < q0) {
    qY = MAX_uint32_T;
  }
  st.site = &qoc_emlrtRSI;
  b_st.site = &scb_emlrtRSI;
  c_st.site = &ryb_emlrtRSI;
  coder::ViewSetBaseImpl::checkViewId(c_st, &qY);
  for (i = 0; i < 3; i++) {
    i1 = i << 2;
    b_cameraPose[i1] = cameraPose.R[3 * i];
    b_cameraPose[i1 + 1] = cameraPose.R[3 * i + 1];
    b_cameraPose[i1 + 2] = cameraPose.R[3 * i + 2];
    b_cameraPose[i + 12] = cameraPose.Translation[i];
  }
  b_cameraPose[3] = 0.0F;
  b_cameraPose[7] = 0.0F;
  b_cameraPose[11] = 0.0F;
  b_cameraPose[15] = 1.0F;
  c_st.site = &ucb_emlrtRSI;
  prePose.b_init(c_st, b_cameraPose);
  c_st.site = &tcb_emlrtRSI;
  d_st.site = &vcb_emlrtRSI;
  coder::imageviewset::checkPoints(d_st, currPoints);
  b_st.site = &geb_emlrtRSI;
  viewExists = vSetKeyFrames.hasView(b_st, qY);
  if (viewExists) {
    emlrtErrorWithMessageIdR2018a(
        &st, &hg_emlrtRTEI, "vision:viewSet:viewIdAlreadyExists",
        "vision:viewSet:viewIdAlreadyExists", 2, 13, qY);
  }
  b_st.site = &feb_emlrtRSI;
  vSetKeyFrames.AbsPosesSingle.horzcat(b_st, prePose);
  b_st.site = &cpc_emlrtRSI;
  b_this = vSetKeyFrames;
  d = static_cast<real_T>(vSetKeyFrames.ViewId.size(0)) + 1.0;
  if (d != static_cast<int32_T>(d)) {
    emlrtIntegerCheckR2012b(d, &kd_emlrtDCI, &b_st);
  }
  vSetKeyFrames.FeaturesBinary.set_size(&tub_emlrtRTEI, &b_st,
                                        vSetKeyFrames.ViewId.size(0) + 1, 1);
  i = vSetKeyFrames.ViewId.size(0);
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, static_cast<real_T>(vSetKeyFrames.ViewId.size(0)) + 1.0,
      mxDOUBLE_CLASS, vSetKeyFrames.ViewId.size(0) + 1, &jh_emlrtRTEI, &b_st);
  for (int32_T b_i{0}; b_i <= i; b_i++) {
    if (static_cast<uint32_T>(b_i) + 1U >
        static_cast<uint32_T>(vSetKeyFrames.ViewId.size(0))) {
      loop_ub = currFeatures.Features.size(0) << 5;
      i2 = vSetKeyFrames.FeaturesBinary.size(0) - 1;
      if (b_i > i2) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &mhb_emlrtBCI, &b_st);
      }
      vSetKeyFrames.FeaturesBinary[b_i].f1.set_size(
          &vub_emlrtRTEI, &b_st, currFeatures.Features.size(0), 32);
      for (i2 = 0; i2 < loop_ub; i2++) {
        vSetKeyFrames.FeaturesBinary[b_i].f1[i2] = currFeatures.Features[i2];
      }
    } else {
      if (b_i > b_this.FeaturesBinary.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_this.FeaturesBinary.size(0) - 1,
                                      &nhb_emlrtBCI, &b_st);
      }
      loop_ub_tmp = b_this.FeaturesBinary[b_i].f1.size(0);
      i1 = b_this.FeaturesBinary[b_i].f1.size(1);
      loop_ub = loop_ub_tmp * i1;
      i2 = vSetKeyFrames.FeaturesBinary.size(0) - 1;
      if (b_i > i2) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &ohb_emlrtBCI, &b_st);
      }
      vSetKeyFrames.FeaturesBinary[b_i].f1.set_size(&uub_emlrtRTEI, &b_st,
                                                    loop_ub_tmp, i1);
      for (i2 = 0; i2 < loop_ub; i2++) {
        vSetKeyFrames.FeaturesBinary[b_i].f1[i2] =
            b_this.FeaturesBinary[b_i].f1[i2];
      }
    }
  }
  b_st.site = &bpc_emlrtRSI;
  b_this = vSetKeyFrames;
  d = static_cast<real_T>(vSetKeyFrames.ViewId.size(0)) + 1.0;
  if (d != static_cast<int32_T>(d)) {
    emlrtIntegerCheckR2012b(d, &jd_emlrtDCI, &b_st);
  }
  vSetKeyFrames.PointsSingle.set_size(&xub_emlrtRTEI, &b_st,
                                      vSetKeyFrames.ViewId.size(0) + 1, 1);
  i = vSetKeyFrames.ViewId.size(0);
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, static_cast<real_T>(vSetKeyFrames.ViewId.size(0)) + 1.0,
      mxDOUBLE_CLASS, vSetKeyFrames.ViewId.size(0) + 1, &ih_emlrtRTEI, &b_st);
  for (int32_T b_i{0}; b_i <= i; b_i++) {
    if (static_cast<uint32_T>(b_i) + 1U >
        static_cast<uint32_T>(vSetKeyFrames.ViewId.size(0))) {
      loop_ub = currPoints.pLocation.size(0) << 1;
      i2 = vSetKeyFrames.PointsSingle.size(0) - 1;
      if (b_i > i2) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &jhb_emlrtBCI, &b_st);
      }
      vSetKeyFrames.PointsSingle[b_i].f1.set_size(
          &avb_emlrtRTEI, &b_st, currPoints.pLocation.size(0), 2);
      for (i2 = 0; i2 < loop_ub; i2++) {
        vSetKeyFrames.PointsSingle[b_i].f1[i2] = currPoints.pLocation[i2];
      }
    } else {
      if (b_i > b_this.PointsSingle.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_this.PointsSingle.size(0) - 1,
                                      &khb_emlrtBCI, &b_st);
      }
      loop_ub_tmp = b_this.PointsSingle[b_i].f1.size(0);
      i1 = b_this.PointsSingle[b_i].f1.size(1);
      loop_ub = loop_ub_tmp * i1;
      i2 = vSetKeyFrames.PointsSingle.size(0) - 1;
      if (b_i > i2) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &lhb_emlrtBCI, &b_st);
      }
      vSetKeyFrames.PointsSingle[b_i].f1.set_size(&yub_emlrtRTEI, &b_st,
                                                  loop_ub_tmp, i1);
      for (i2 = 0; i2 < loop_ub; i2++) {
        vSetKeyFrames.PointsSingle[b_i].f1[i2] =
            b_this.PointsSingle[b_i].f1[i2];
      }
    }
  }
  b_st.site = &apc_emlrtRSI;
  c_st.site = &ndb_emlrtRSI;
  d = static_cast<real_T>(vSetKeyFrames.ViewId.size(0)) + 1.0;
  if (d != static_cast<int32_T>(d)) {
    emlrtIntegerCheckR2012b(d, &id_emlrtDCI, &c_st);
  }
  uMetric.set_size(&jub_emlrtRTEI, &c_st, vSetKeyFrames.ViewId.size(0) + 1, 1);
  i = vSetKeyFrames.ViewId.size(0);
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, static_cast<real_T>(vSetKeyFrames.ViewId.size(0)) + 1.0,
      mxDOUBLE_CLASS, vSetKeyFrames.ViewId.size(0) + 1, &hh_emlrtRTEI, &c_st);
  for (int32_T b_i{0}; b_i <= i; b_i++) {
    if (static_cast<uint32_T>(b_i) + 1U >
        static_cast<uint32_T>(vSetKeyFrames.ViewId.size(0))) {
      loop_ub_tmp = currPoints.pMetric.size(0);
      i2 = uMetric.size(0) - 1;
      if (b_i > uMetric.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, uMetric.size(0) - 1,
                                      &aib_emlrtBCI, &c_st);
      }
      uMetric[b_i].f1.set_size(&kub_emlrtRTEI, &c_st,
                               currPoints.pMetric.size(0));
      for (i3 = 0; i3 < loop_ub_tmp; i3++) {
        if (b_i > i2) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &aib_emlrtBCI, &c_st);
        }
        uMetric[b_i].f1[i3] = currPoints.pMetric[i3];
      }
    } else {
      i2 = vSetKeyFrames.Metrics.size(0) - 1;
      if (b_i > i2) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &bib_emlrtBCI, &c_st);
      }
      i2 = uMetric.size(0) - 1;
      if (b_i > uMetric.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, uMetric.size(0) - 1,
                                      &bib_emlrtBCI, &c_st);
      }
      uMetric[b_i].f1.set_size(&cvb_emlrtRTEI, &c_st,
                               vSetKeyFrames.Metrics[b_i].f1.size(0));
      i3 = vSetKeyFrames.Metrics.size(0) - 1;
      if (b_i > i3) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i3, &bib_emlrtBCI, &c_st);
      }
      loop_ub = vSetKeyFrames.Metrics[b_i].f1.size(0);
      for (i3 = 0; i3 < loop_ub; i3++) {
        i1 = vSetKeyFrames.Metrics.size(0) - 1;
        if (b_i > i1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &cib_emlrtBCI, &c_st);
        }
        if (b_i > i2) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &bib_emlrtBCI, &c_st);
        }
        uMetric[b_i].f1[i3] = vSetKeyFrames.Metrics[b_i].f1[i3];
      }
    }
  }
  loop_ub = uMetric.size(0);
  vSetKeyFrames.Metrics.set_size(&lub_emlrtRTEI, &c_st, uMetric.size(0), 1);
  for (i = 0; i < loop_ub; i++) {
    vSetKeyFrames.Metrics[i] = uMetric[i];
  }
  c_st.site = &odb_emlrtRSI;
  d = static_cast<real_T>(vSetKeyFrames.ViewId.size(0)) + 1.0;
  if (d != static_cast<int32_T>(d)) {
    emlrtIntegerCheckR2012b(d, &hd_emlrtDCI, &c_st);
  }
  uMetric.set_size(&mub_emlrtRTEI, &c_st, vSetKeyFrames.ViewId.size(0) + 1, 1);
  i = vSetKeyFrames.ViewId.size(0);
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, static_cast<real_T>(vSetKeyFrames.ViewId.size(0)) + 1.0,
      mxDOUBLE_CLASS, vSetKeyFrames.ViewId.size(0) + 1, &gh_emlrtRTEI, &c_st);
  for (int32_T b_i{0}; b_i <= i; b_i++) {
    if (static_cast<uint32_T>(b_i) + 1U >
        static_cast<uint32_T>(vSetKeyFrames.ViewId.size(0))) {
      loop_ub_tmp = currPoints.pScale.size(0);
      i2 = uMetric.size(0) - 1;
      if (b_i > uMetric.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, uMetric.size(0) - 1,
                                      &dib_emlrtBCI, &c_st);
      }
      uMetric[b_i].f1.set_size(&nub_emlrtRTEI, &c_st,
                               currPoints.pScale.size(0));
      for (i3 = 0; i3 < loop_ub_tmp; i3++) {
        if (b_i > i2) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &dib_emlrtBCI, &c_st);
        }
        uMetric[b_i].f1[i3] = currPoints.pScale[i3];
      }
    } else {
      i2 = vSetKeyFrames.Scale.size(0) - 1;
      if (b_i > i2) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &eib_emlrtBCI, &c_st);
      }
      i2 = uMetric.size(0) - 1;
      if (b_i > uMetric.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, uMetric.size(0) - 1,
                                      &eib_emlrtBCI, &c_st);
      }
      uMetric[b_i].f1.set_size(&dvb_emlrtRTEI, &c_st,
                               vSetKeyFrames.Scale[b_i].f1.size(0));
      i3 = vSetKeyFrames.Scale.size(0) - 1;
      if (b_i > i3) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i3, &eib_emlrtBCI, &c_st);
      }
      loop_ub = vSetKeyFrames.Scale[b_i].f1.size(0);
      for (i3 = 0; i3 < loop_ub; i3++) {
        i1 = vSetKeyFrames.Scale.size(0) - 1;
        if (b_i > i1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &fib_emlrtBCI, &c_st);
        }
        if (b_i > i2) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &eib_emlrtBCI, &c_st);
        }
        uMetric[b_i].f1[i3] = vSetKeyFrames.Scale[b_i].f1[i3];
      }
    }
  }
  loop_ub = uMetric.size(0);
  vSetKeyFrames.Scale.set_size(&oub_emlrtRTEI, &c_st, uMetric.size(0), 1);
  for (i = 0; i < loop_ub; i++) {
    vSetKeyFrames.Scale[i] = uMetric[i];
  }
  c_st.site = &pdb_emlrtRSI;
  d = static_cast<real_T>(vSetKeyFrames.ViewId.size(0)) + 1.0;
  if (d != static_cast<int32_T>(d)) {
    emlrtIntegerCheckR2012b(d, &gd_emlrtDCI, &c_st);
  }
  uMetric.set_size(&pub_emlrtRTEI, &c_st, vSetKeyFrames.ViewId.size(0) + 1, 1);
  i = vSetKeyFrames.ViewId.size(0);
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, static_cast<real_T>(vSetKeyFrames.ViewId.size(0)) + 1.0,
      mxDOUBLE_CLASS, vSetKeyFrames.ViewId.size(0) + 1, &fh_emlrtRTEI, &c_st);
  for (int32_T b_i{0}; b_i <= i; b_i++) {
    if (static_cast<uint32_T>(b_i) + 1U >
        static_cast<uint32_T>(vSetKeyFrames.ViewId.size(0))) {
      loop_ub_tmp = currPoints.pOrientation.size(0);
      i2 = uMetric.size(0) - 1;
      if (b_i > uMetric.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, uMetric.size(0) - 1,
                                      &gib_emlrtBCI, &c_st);
      }
      uMetric[b_i].f1.set_size(&qub_emlrtRTEI, &c_st,
                               currPoints.pOrientation.size(0));
      for (i3 = 0; i3 < loop_ub_tmp; i3++) {
        if (b_i > i2) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &gib_emlrtBCI, &c_st);
        }
        uMetric[b_i].f1[i3] = currPoints.pOrientation[i3];
      }
    } else {
      i2 = vSetKeyFrames.Orientation.size(0) - 1;
      if (b_i > i2) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &hib_emlrtBCI, &c_st);
      }
      i2 = uMetric.size(0) - 1;
      if (b_i > uMetric.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, uMetric.size(0) - 1,
                                      &hib_emlrtBCI, &c_st);
      }
      uMetric[b_i].f1.set_size(&evb_emlrtRTEI, &c_st,
                               vSetKeyFrames.Orientation[b_i].f1.size(0));
      i3 = vSetKeyFrames.Orientation.size(0) - 1;
      if (b_i > i3) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i3, &hib_emlrtBCI, &c_st);
      }
      loop_ub = vSetKeyFrames.Orientation[b_i].f1.size(0);
      for (i3 = 0; i3 < loop_ub; i3++) {
        i1 = vSetKeyFrames.Orientation.size(0) - 1;
        if (b_i > i1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &iib_emlrtBCI, &c_st);
        }
        if (b_i > i2) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &hib_emlrtBCI, &c_st);
        }
        uMetric[b_i].f1[i3] = vSetKeyFrames.Orientation[b_i].f1[i3];
      }
    }
  }
  loop_ub = uMetric.size(0);
  vSetKeyFrames.Orientation.set_size(&rub_emlrtRTEI, &c_st, uMetric.size(0), 1);
  for (i = 0; i < loop_ub; i++) {
    vSetKeyFrames.Orientation[i] = uMetric[i];
  }
  i = vSetKeyFrames.ViewId.size(0);
  vSetKeyFrames.ViewId.set_size(&uac_emlrtRTEI, &st, i + 1);
  vSetKeyFrames.ViewId[i] = qY;
  st.site = &roc_emlrtRSI;
  vSetKeyFrames.imageviewsetBase_get_Views(st, fIndices, expl_temp, b_expl_temp,
                                           t9_AbsolutePose);
  i = keyFramesIndices.size(0);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    real32_T b_prePose[9];
    real32_T c_cameraPose[3];
    real32_T f;
    real32_T f1;
    real32_T f2;
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &rhb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    st.site = &soc_emlrtRSI;
    index3dCg.size[0] = mapPoints.findWorldPointsInView(
        st, keyFramesIndices[b_i], index3dCg.data, index2dCg.data, i1);
    index2dCg.size[0] = i1;
    if (index3dCg.size[0] - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, index3dCg.size[0] - 1, &qhb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (index2dCg.size[0] - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, index2dCg.size[0] - 1, &phb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    st.site = &toc_emlrtRSI;
    b_st.site = &bjb_emlrtRSI;
    c_st.site = &efb_emlrtRSI;
    coder::do_vectors(c_st, index3dCg.data[0].f1, mapPointsIndices, c, ia, ib);
    loop_ub_tmp = ia.size(0);
    c.set_size(&vac_emlrtRTEI, &st, ia.size(0));
    for (i2 = 0; i2 < loop_ub_tmp; i2++) {
      c[i2] = ia[i2];
    }
    st.site = &uoc_emlrtRSI;
    t9_AbsolutePose.parenReference(st, keyFramesIndices[b_i], prePose);
    for (i2 = 0; i2 < 3; i2++) {
      c_cameraPose[i2] = cameraPose.Translation[i2] - prePose.Translation[i2];
      f = prePose.R[3 * i2];
      f1 = prePose.R[3 * i2 + 1];
      f2 = prePose.R[3 * i2 + 2];
      for (i3 = 0; i3 < 3; i3++) {
        b_prePose[i2 + 3 * i3] =
            (f * cameraPose.R[3 * i3] + f1 * cameraPose.R[3 * i3 + 1]) +
            f2 * cameraPose.R[3 * i3 + 2];
      }
    }
    f = c_cameraPose[0];
    f1 = c_cameraPose[1];
    f2 = c_cameraPose[2];
    for (i2 = 0; i2 < 3; i2++) {
      c_cameraPose[i2] = (f * prePose.R[3 * i2] + f1 * prePose.R[3 * i2 + 1]) +
                         f2 * prePose.R[3 * i2 + 2];
    }
    st.site = &yoc_emlrtRSI;
    prePose.init(st, b_prePose, c_cameraPose);
    if (c.size(0) > 5) {
      i1 = ib.size(0);
      fIndices.set_size(&wac_emlrtRTEI, &sp, ib.size(0));
      for (i2 = 0; i2 < i1; i2++) {
        if ((ib[i2] < 1) || (ib[i2] > featureIndices.size(0))) {
          emlrtDynamicBoundsCheckR2012b(ib[i2], 1, featureIndices.size(0),
                                        &jib_emlrtBCI, (emlrtConstCTX)&sp);
        }
        fIndices[i2] = featureIndices[ib[i2] - 1];
      }
      st.site = &voc_emlrtRSI;
      for (i2 = 0; i2 < loop_ub_tmp; i2++) {
        i3 = static_cast<int32_T>(c[i2]);
        if ((i3 < 1) || (i3 > index2dCg.data[0].f1.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, index2dCg.data[0].f1.size(0),
                                        &kib_emlrtBCI, &st);
        }
      }
      b_st.site = &ij_emlrtRSI;
      c_st.site = &jj_emlrtRSI;
      if (ib.size(0) != c.size(0)) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      st.site = &woc_emlrtRSI;
      b_st.site = &keb_emlrtRSI;
      c_st.site = &ipc_emlrtRSI;
      coder::ViewSetBaseImpl::checkViewId(c_st, &keyFramesIndices[b_i]);
      c_st.site = &jpc_emlrtRSI;
      coder::ViewSetBaseImpl::checkViewId(c_st, &qY);
      for (i2 = 0; i2 < 3; i2++) {
        i1 = i2 << 2;
        b_cameraPose[i1] = prePose.R[3 * i2];
        b_cameraPose[i1 + 1] = prePose.R[3 * i2 + 1];
        b_cameraPose[i1 + 2] = prePose.R[3 * i2 + 2];
        b_cameraPose[i2 + 12] = prePose.Translation[i2];
      }
      b_cameraPose[3] = 0.0F;
      b_cameraPose[7] = 0.0F;
      b_cameraPose[11] = 0.0F;
      b_cameraPose[15] = 1.0F;
      c_st.site = &meb_emlrtRSI;
      prePose.b_init(c_st, b_cameraPose);
      b_f1.set_size(&xac_emlrtRTEI, &b_st, ia.size(0), 2);
      for (i2 = 0; i2 < loop_ub_tmp; i2++) {
        d = muDoubleScalarRound(
            index2dCg.data[0].f1[static_cast<int32_T>(c[i2]) - 1]);
        if (d < 4.294967296E+9) {
          if (d >= 0.0) {
            q0 = static_cast<uint32_T>(d);
          } else {
            q0 = 0U;
          }
        } else if (d >= 4.294967296E+9) {
          q0 = MAX_uint32_T;
        } else {
          q0 = 0U;
        }
        b_f1[i2] = q0;
      }
      loop_ub = fIndices.size(0);
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_f1[i2 + b_f1.size(0)] = fIndices[i2];
      }
      c_st.site = &neb_emlrtRSI;
      coder::imageviewset::parseMatches(c_st, b_f1);
      c_st.site = &oeb_emlrtRSI;
      vSetKeyFrames.checkMatchesOutOfBounds(c_st, b_f1, keyFramesIndices[b_i],
                                            qY);
      c_st.site = &peb_emlrtRSI;
      if (!vSetKeyFrames.hasView(c_st, keyFramesIndices[b_i])) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &jg_emlrtRTEI, "vision:viewSet:missingViewId",
            "vision:viewSet:missingViewId", 2, 13, keyFramesIndices[b_i]);
      }
      c_st.site = &qeb_emlrtRSI;
      if (!vSetKeyFrames.hasView(c_st, qY)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &kg_emlrtRTEI, "vision:viewSet:missingViewId",
            "vision:viewSet:missingViewId", 2, 13, qY);
      }
      c_f1.set_size(&ivb_emlrtRTEI, &b_st, 6, 6);
      for (i2 = 0; i2 < 36; i2++) {
        c_f1[i2] = iv5[i2];
      }
      b_st.site = &jeb_emlrtRSI;
      viewExists = vSetKeyFrames.hasConnection(b_st, keyFramesIndices[b_i], qY);
      if (viewExists) {
        emlrtErrorWithMessageIdR2018a(&st, &ig_emlrtRTEI,
                                      "vision:viewSet:connectionAlreadyExists",
                                      "vision:viewSet:connectionAlreadyExists",
                                      4, 13, keyFramesIndices[b_i], 13, qY);
      }
      i2 = vSetKeyFrames.ViewId1.size(0);
      vSetKeyFrames.ViewId1.set_size(&uac_emlrtRTEI, &st, i2 + 1);
      vSetKeyFrames.ViewId1[i2] = keyFramesIndices[b_i];
      i2 = vSetKeyFrames.ViewId2.size(0);
      vSetKeyFrames.ViewId2.set_size(&uac_emlrtRTEI, &st, i2 + 1);
      vSetKeyFrames.ViewId2[i2] = qY;
      b_st.site = &hpc_emlrtRSI;
      vSetKeyFrames.RrigidPoseSingle.horzcat(b_st, prePose);
      b_st.site = &gpc_emlrtRSI;
      b_this = vSetKeyFrames;
      vSetKeyFrames.InfoMatDouble.set_size(&yac_emlrtRTEI, &b_st,
                                           vSetKeyFrames.ViewId1.size(0), 1);
      i2 = b_this.ViewId1.size(0);
      for (int32_T c_i{0}; c_i < i2; c_i++) {
        if (c_i + 1 == b_this.ViewId1.size(0)) {
          i3 = vSetKeyFrames.InfoMatDouble.size(0) - 1;
          if (c_i > i3) {
            emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &uhb_emlrtBCI, &b_st);
          }
          vSetKeyFrames.InfoMatDouble[c_i].f1.set_size(&bbc_emlrtRTEI, &b_st, 6,
                                                       6);
          for (i3 = 0; i3 < 36; i3++) {
            vSetKeyFrames.InfoMatDouble[c_i].f1[i3] = c_f1[i3];
          }
        } else {
          int32_T b_loop_ub_tmp;
          if (c_i > b_this.InfoMatDouble.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(
                c_i, 0, b_this.InfoMatDouble.size(0) - 1, &thb_emlrtBCI, &b_st);
          }
          i1 = b_this.InfoMatDouble[c_i].f1.size(0);
          b_loop_ub_tmp = b_this.InfoMatDouble[c_i].f1.size(1);
          loop_ub = i1 * b_loop_ub_tmp;
          i3 = vSetKeyFrames.InfoMatDouble.size(0) - 1;
          if (c_i > i3) {
            emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &shb_emlrtBCI, &b_st);
          }
          vSetKeyFrames.InfoMatDouble[c_i].f1.set_size(&abc_emlrtRTEI, &b_st,
                                                       i1, b_loop_ub_tmp);
          for (i3 = 0; i3 < loop_ub; i3++) {
            vSetKeyFrames.InfoMatDouble[c_i].f1[i3] =
                b_this.InfoMatDouble[c_i].f1[i3];
          }
        }
      }
      b_st.site = &fpc_emlrtRSI;
      b_this = vSetKeyFrames;
      vSetKeyFrames.MatchesInt.set_size(&cbc_emlrtRTEI, &b_st,
                                        vSetKeyFrames.ViewId1.size(0), 1);
      i2 = b_this.ViewId1.size(0);
      for (int32_T c_i{0}; c_i < i2; c_i++) {
        if (c_i + 1 == b_this.ViewId1.size(0)) {
          loop_ub = b_f1.size(0) << 1;
          i3 = vSetKeyFrames.MatchesInt.size(0) - 1;
          if (c_i > i3) {
            emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &xhb_emlrtBCI, &b_st);
          }
          vSetKeyFrames.MatchesInt[c_i].f1.set_size(&ebc_emlrtRTEI, &b_st,
                                                    loop_ub_tmp, 2);
          for (i3 = 0; i3 < loop_ub; i3++) {
            vSetKeyFrames.MatchesInt[c_i].f1[i3] = b_f1[i3];
          }
        } else {
          if (c_i > b_this.MatchesInt.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(c_i, 0, b_this.MatchesInt.size(0) - 1,
                                          &whb_emlrtBCI, &b_st);
          }
          i1 = b_this.MatchesInt[c_i].f1.size(0);
          loop_ub = i1 << 1;
          i3 = vSetKeyFrames.MatchesInt.size(0) - 1;
          if (c_i > i3) {
            emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &vhb_emlrtBCI, &b_st);
          }
          vSetKeyFrames.MatchesInt[c_i].f1.set_size(&dbc_emlrtRTEI, &b_st, i1,
                                                    2);
          for (i3 = 0; i3 < loop_ub; i3++) {
            vSetKeyFrames.MatchesInt[c_i].f1[i3] =
                b_this.MatchesInt[c_i].f1[i3];
          }
        }
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  st.site = &xoc_emlrtRSI;
  mapPoints.addCorrespondences(st, qY, mapPointsIndices, featureIndices);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (helperAddNewKeyFrame.cpp)
