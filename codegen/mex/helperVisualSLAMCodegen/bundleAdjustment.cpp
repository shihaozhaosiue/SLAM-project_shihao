//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// bundleAdjustment.cpp
//
// Code generation for function 'bundleAdjustment'
//

// Include files
#include "bundleAdjustment.h"
#include "ORBPoints.h"
#include "ViewSetBaseImpl.h"
#include "assertValidSizeArg.h"
#include "cameraIntrinsics.h"
#include "cameraIntrinsicsArray.h"
#include "convertInputDataFormat.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_setop.h"
#include "find.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "imageviewset.h"
#include "pointTrack.h"
#include "rigidtform3d.h"
#include "rigidtform3dImpl.h"
#include "rotationToQuaternion.h"
#include "rt_nonfinite.h"
#include "sparse1.h"
#include "sparseBA.h"
#include "squeeze.h"
#include "table.h"
#include "validateAndParseInputs1.h"
#include "validateNumericIndex.h"
#include "worldpointset.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "cvstCG_bundleAdjust.h"
#include <algorithm>
#include <cstring>
#include <emmintrin.h>

// Type Definitions
struct cell_19 {
  char_T f1[6];
  char_T f2[12];
};

struct d_struct_T {
  coder::array<real_T, 2U> focalLength;
  coder::array<real_T, 2U> principalPoint;
  coder::bounded_array<real_T, 3U, 2U> radialDistortion;
  coder::bounded_array<real_T, 2U, 2U> tangentialDistortion;
  coder::array<real_T, 2U> skew;
};

// Variable Definitions
static emlrtRSInfo dsb_emlrtRSI{
    9,                  // lineNo
    "bundleAdjustment", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\bundleAdjustment.m" // pathName
};

static emlrtRSInfo hsb_emlrtRSI{
    66,         // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo isb_emlrtRSI{
    75,         // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo jsb_emlrtRSI{
    81,         // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo ksb_emlrtRSI{
    91,         // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo lsb_emlrtRSI{
    95,         // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo fub_emlrtRSI{
    42,                       // lineNo
    "convertInputDataFormat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

static emlrtRSInfo gub_emlrtRSI{
    50,                       // lineNo
    "convertInputDataFormat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

static emlrtRSInfo iub_emlrtRSI{
    54,                       // lineNo
    "convertInputDataFormat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

static emlrtRSInfo jub_emlrtRSI{
    55,                       // lineNo
    "convertInputDataFormat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

static emlrtRSInfo kub_emlrtRSI{
    65,                       // lineNo
    "convertInputDataFormat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

static emlrtRSInfo xub_emlrtRSI{
    124,                           // lineNo
    "convertToProjectionMatrices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

static emlrtRSInfo yub_emlrtRSI{
    125,                           // lineNo
    "convertToProjectionMatrices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

static emlrtRSInfo avb_emlrtRSI{
    128,                           // lineNo
    "convertToProjectionMatrices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

static emlrtRSInfo bvb_emlrtRSI{
    129,                           // lineNo
    "convertToProjectionMatrices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

static emlrtRSInfo cvb_emlrtRSI{
    132,                           // lineNo
    "convertToProjectionMatrices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

static emlrtRSInfo dvb_emlrtRSI{
    158,                           // lineNo
    "convertToProjectionMatrices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

static emlrtRSInfo evb_emlrtRSI{
    159,                           // lineNo
    "convertToProjectionMatrices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

static emlrtRSInfo fvb_emlrtRSI{
    160,                           // lineNo
    "convertToProjectionMatrices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

static emlrtRSInfo gvb_emlrtRSI{
    163,                           // lineNo
    "convertToProjectionMatrices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

static emlrtRSInfo owb_emlrtRSI{
    35,                                               // lineNo
    "visionG2OBundleAdjustBuildable/bundleAdjustG2O", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m" // pathName
};

static emlrtRSInfo pwb_emlrtRSI{
    40,                                               // lineNo
    "visionG2OBundleAdjustBuildable/bundleAdjustG2O", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m" // pathName
};

static emlrtRSInfo qwb_emlrtRSI{
    51,                                               // lineNo
    "visionG2OBundleAdjustBuildable/bundleAdjustG2O", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m" // pathName
};

static emlrtRSInfo rwb_emlrtRSI{
    52,                                               // lineNo
    "visionG2OBundleAdjustBuildable/bundleAdjustG2O", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m" // pathName
};

static emlrtRSInfo swb_emlrtRSI{
    53,                                               // lineNo
    "visionG2OBundleAdjustBuildable/bundleAdjustG2O", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m" // pathName
};

static emlrtRSInfo twb_emlrtRSI{
    54,                                               // lineNo
    "visionG2OBundleAdjustBuildable/bundleAdjustG2O", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m" // pathName
};

static emlrtRSInfo uwb_emlrtRSI{
    55,                                               // lineNo
    "visionG2OBundleAdjustBuildable/bundleAdjustG2O", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m" // pathName
};

static emlrtRSInfo usc_emlrtRSI{
    108,        // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo vsc_emlrtRSI{
    111,        // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo wsc_emlrtRSI{
    112,        // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo xsc_emlrtRSI{
    110,        // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo kuc_emlrtRSI{
    140,                       // lineNo
    "imageviewset/updateView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRSInfo luc_emlrtRSI{
    141,                       // lineNo
    "imageviewset/updateView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRSInfo muc_emlrtRSI{
    143,                       // lineNo
    "imageviewset/updateView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRSInfo nuc_emlrtRSI{
    144,                       // lineNo
    "imageviewset/updateView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRSInfo ouc_emlrtRSI{
    158,                       // lineNo
    "imageviewset/updateView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRSInfo puc_emlrtRSI{
    1056,                          // lineNo
    "imageviewset/checkViewTable", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRSInfo quc_emlrtRSI{
    1074,                          // lineNo
    "imageviewset/checkViewTable", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRSInfo ruc_emlrtRSI{
    1107,                          // lineNo
    "imageviewset/checkViewTable", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRSInfo suc_emlrtRSI{
    1112,                          // lineNo
    "imageviewset/checkViewTable", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRSInfo tuc_emlrtRSI{
    1116,                          // lineNo
    "imageviewset/checkViewTable", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRSInfo uuc_emlrtRSI{
    1094,                          // lineNo
    "imageviewset/checkViewTable", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtECInfo qb_emlrtECI{
    -1,              // nDims
    170,             // lineNo
    9,               // colNo
    "transposePage", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtBCInfo aj_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    170,             // lineNo
    19,              // colNo
    "",              // aName
    "transposePage", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo bj_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    170,             // lineNo
    32,              // colNo
    "",              // aName
    "transposePage", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m", // pName
    0                                         // checkKind
};

static emlrtECInfo rb_emlrtECI{
    -1,                            // nDims
    160,                           // lineNo
    9,                             // colNo
    "convertToProjectionMatrices", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtECInfo sb_emlrtECI{
    -1,                            // nDims
    128,                           // lineNo
    13,                            // colNo
    "convertToProjectionMatrices", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtBCInfo cj_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    128,                           // lineNo
    20,                            // colNo
    "",                            // aName
    "convertToProjectionMatrices", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m", // pName
    0                                         // checkKind
};

static emlrtECInfo tb_emlrtECI{
    -1,                            // nDims
    124,                           // lineNo
    9,                             // colNo
    "convertToProjectionMatrices", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtECInfo ub_emlrtECI{
    -1,                            // nDims
    129,                           // lineNo
    13,                            // colNo
    "convertToProjectionMatrices", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtBCInfo dj_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    129,                           // lineNo
    20,                            // colNo
    "",                            // aName
    "convertToProjectionMatrices", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m", // pName
    0                                         // checkKind
};

static emlrtECInfo vb_emlrtECI{
    -1,                            // nDims
    125,                           // lineNo
    9,                             // colNo
    "convertToProjectionMatrices", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtRTEInfo od_emlrtRTEI{
    6,                              // lineNo
    23,                             // colNo
    "checkNonEmptyMemberValueList", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\checkNonEmptyMemberValueList.m" // pName
};

static emlrtBCInfo ej_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    65,                       // lineNo
    96,                       // colNo
    "",                       // aName
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo fj_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    54,                       // lineNo
    26,                       // colNo
    "",                       // aName
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo yt_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    1102,                          // lineNo
    58,                            // colNo
    "",                            // aName
    "imageviewset/checkViewTable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo au_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    1082,                          // lineNo
    54,                            // colNo
    "",                            // aName
    "imageviewset/checkViewTable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo bu_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    152,                       // lineNo
    30,                        // colNo
    "",                        // aName
    "imageviewset/updateView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m", // pName
    0                                         // checkKind
};

static emlrtRTEInfo ye_emlrtRTEI{
    39,                                               // lineNo
    21,                                               // colNo
    "visionG2OBundleAdjustBuildable/bundleAdjustG2O", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m" // pName
};

static emlrtDCInfo dc_emlrtDCI{
    37,                                               // lineNo
    29,                                               // colNo
    "visionG2OBundleAdjustBuildable/bundleAdjustG2O", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m", // pName
    1                                              // checkKind
};

static emlrtBCInfo cu_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    80,         // lineNo
    55,         // colNo
    "",         // aName
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo du_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    79,         // lineNo
    54,         // colNo
    "",         // aName
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo eu_emlrtBCI{
    -1,                                               // iFirst
    -1,                                               // iLast
    40,                                               // lineNo
    60,                                               // colNo
    "",                                               // aName
    "visionG2OBundleAdjustBuildable/bundleAdjustG2O", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo fu_emlrtBCI{
    -1,                                               // iFirst
    -1,                                               // iLast
    40,                                               // lineNo
    22,                                               // colNo
    "",                                               // aName
    "visionG2OBundleAdjustBuildable/bundleAdjustG2O", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo gu_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    409,        // lineNo
    5,          // colNo
    "",         // aName
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\sparseBA.m", // pName
    0                           // checkKind
};

static emlrtBCInfo hu_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    91,         // lineNo
    16,         // colNo
    "",         // aName
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo iu_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    108,        // lineNo
    16,         // colNo
    "",         // aName
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m", // pName
    0                                     // checkKind
};

static emlrtRTEInfo bab_emlrtRTEI{
    44,                       // lineNo
    31,                       // colNo
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtRTEInfo cab_emlrtRTEI{
    45,                       // lineNo
    27,                       // colNo
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtRTEInfo dab_emlrtRTEI{
    48,                       // lineNo
    17,                       // colNo
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtRTEInfo eab_emlrtRTEI{
    50,                       // lineNo
    5,                        // colNo
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtRTEInfo fab_emlrtRTEI{
    54,                       // lineNo
    9,                        // colNo
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtRTEInfo gab_emlrtRTEI{
    55,                       // lineNo
    9,                        // colNo
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtRTEInfo hab_emlrtRTEI{
    65,                       // lineNo
    67,                       // colNo
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtRTEInfo iab_emlrtRTEI{
    65,                       // lineNo
    9,                        // colNo
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtRTEInfo jab_emlrtRTEI{
    119,                      // lineNo
    9,                        // colNo
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtRTEInfo kab_emlrtRTEI{
    120,                      // lineNo
    9,                        // colNo
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtRTEInfo lab_emlrtRTEI{
    157,                      // lineNo
    9,                        // colNo
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtRTEInfo mab_emlrtRTEI{
    168,                      // lineNo
    5,                        // colNo
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtRTEInfo nab_emlrtRTEI{
    159,                      // lineNo
    27,                       // colNo
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtRTEInfo oab_emlrtRTEI{
    37,                               // lineNo
    13,                               // colNo
    "visionG2OBundleAdjustBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m" // pName
};

static emlrtRTEInfo pab_emlrtRTEI{
    43,                               // lineNo
    13,                               // colNo
    "visionG2OBundleAdjustBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m" // pName
};

static emlrtRTEInfo qab_emlrtRTEI{
    51,                               // lineNo
    13,                               // colNo
    "visionG2OBundleAdjustBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m" // pName
};

static emlrtRTEInfo rab_emlrtRTEI{
    52,                               // lineNo
    13,                               // colNo
    "visionG2OBundleAdjustBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m" // pName
};

static emlrtRTEInfo sab_emlrtRTEI{
    55,                               // lineNo
    13,                               // colNo
    "visionG2OBundleAdjustBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m" // pName
};

static emlrtRTEInfo tab_emlrtRTEI{
    62,                               // lineNo
    13,                               // colNo
    "visionG2OBundleAdjustBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m" // pName
};

static emlrtRTEInfo uab_emlrtRTEI{
    63,                               // lineNo
    13,                               // colNo
    "visionG2OBundleAdjustBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m" // pName
};

static emlrtRTEInfo vab_emlrtRTEI{
    64,                               // lineNo
    13,                               // colNo
    "visionG2OBundleAdjustBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\visionG2OBundleAdjustBuildable.m" // pName
};

static emlrtRTEInfo wab_emlrtRTEI{
    89,         // lineNo
    30,         // colNo
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pName
};

static emlrtRTEInfo xab_emlrtRTEI{
    117,        // lineNo
    9,          // colNo
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pName
};

static emlrtRTEInfo xmb_emlrtRTEI{
    158,                      // lineNo
    9,                        // colNo
    "convertInputDataFormat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pName
};

static emlrtRTEInfo ymb_emlrtRTEI{
    409,        // lineNo
    5,          // colNo
    "sparseBA", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\sparseBA.m" // pName
};

// Function Definitions
namespace coder {
void bundleAdjustment(const emlrtStack &sp,
                      const array<real32_T, 2U> &varargin_1,
                      const pointTrack &varargin_2, const table &varargin_3,
                      cameraIntrinsics *varargin_4,
                      array<real32_T, 2U> &varargout_1, table &varargout_2)
{
  b_cameraIntrinsics lobj_0[4];
  b_cameraIntrinsics *b_r;
  b_rigidtform3d mjd_emlrtRSI;
  b_rigidtform3d obj;
  b_rigidtform3d poseArr;
  b_sparse b_this;
  sparse visibility;
  array<b_rigidtform3d, 1U> b_tc;
  array<d_struct_T, 2U> intrinsics;
  array<real_T, 3U> b_Rs_data;
  array<real_T, 3U> b_tmp_data;
  array<real_T, 3U> r1;
  array<real_T, 3U> r3;
  array<real_T, 3U> trans;
  array<real_T, 2U> center;
  array<real_T, 2U> focal;
  array<real_T, 2U> measurements;
  array<real_T, 2U> r4;
  array<real_T, 2U> reprojError;
  array<real_T, 2U> skew;
  array<real_T, 2U> xyzPoints;
  array<real_T, 2U> xyzRefinedPoints;
  array<int32_T, 1U> irs;
  array<int32_T, 1U> jj;
  array<uint32_T, 1U> b_refinedPoseCg_ViewId_data;
  bounded_array<b_rigidtform3d, 2U, 1U> tc;
  cell_19 expl_temp;
  d_struct_T st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  real_T refinedPosesTform_data[24];
  real_T Rs_data[18];
  real_T cameraMatrices_data[12];
  real_T refinedPosesTform[9];
  real_T tmp_data[6];
  real_T jcsd_data[3];
  real_T tangDistort_data[2];
  real_T fixedCameraIndex_data;
  int32_T jcs_data[3];
  int32_T b_iv[2];
  int32_T b_iv1[2];
  int32_T Rs_size_idx_2;
  int32_T fixedCameraIndex_size;
  int32_T i;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T n;
  int32_T numCameras_tmp;
  int32_T refinedPoseCg_ViewId_size;
  real32_T t[9];
  real32_T b_t[3];
  uint32_T refinedPoseCg_ViewId_data[2];
  b_st.prev = &sp;
  b_st.tls = sp.tls;
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
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_st.site = &dsb_emlrtRSI;
  c_st.site = &esb_emlrtRSI;
  d_st.site = &fsb_emlrtRSI;
  refinedPoseCg_ViewId_size =
      vision::internal::bundleAdjust::validateAndParseInputs(
          d_st, varargin_1, varargin_2, varargin_3, &varargin_4, xyzPoints,
          measurements, visibility, refinedPoseCg_ViewId_data, poseArr,
          expl_temp.f1, expl_temp.f2, (real_T *)&fixedCameraIndex_data,
          fixedCameraIndex_size);
  d_st.site = &gsb_emlrtRSI;
  e_st.site = &fub_emlrtRSI;
  numCameras_tmp = varargin_4->cameraIntrinsicsArrayData.size(0) *
                   varargin_4->cameraIntrinsicsArrayData.size(1);
  st.focalLength.set_size(&bab_emlrtRTEI, &d_st, 1, 2);
  st.principalPoint.set_size(&cab_emlrtRTEI, &d_st, 1, 2);
  st.focalLength[0] = 0.0;
  st.principalPoint[0] = 0.0;
  st.focalLength[1] = 0.0;
  st.principalPoint[1] = 0.0;
  st.radialDistortion.size[0] = 1;
  st.radialDistortion.size[1] = 3;
  st.radialDistortion.data[0] = 0.0;
  st.radialDistortion.data[1] = 0.0;
  st.radialDistortion.data[2] = 0.0;
  st.tangentialDistortion.size[0] = 1;
  st.tangentialDistortion.size[1] = 2;
  st.tangentialDistortion.data[0] = 0.0;
  st.tangentialDistortion.data[1] = 0.0;
  st.skew.set_size(&dab_emlrtRTEI, &d_st, 1, 1);
  st.skew[0] = 0.0;
  e_st.site = &gub_emlrtRSI;
  f_st.site = &ne_emlrtRSI;
  internal::assertValidSizeArg(f_st, static_cast<real_T>(numCameras_tmp));
  intrinsics.set_size(&eab_emlrtRTEI, &e_st, 1, numCameras_tmp);
  for (i = 0; i < numCameras_tmp; i++) {
    intrinsics[i] = st;
  }
  for (n = 0; n < numCameras_tmp; n++) {
    e_st.site = &iub_emlrtRSI;
    b_r = varargin_4->parenReference(e_st, static_cast<real_T>(n) + 1.0,
                                     lobj_0[0]);
    if ((static_cast<int32_T>(static_cast<uint32_T>(n) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(n) + 1U) >
         numCameras_tmp)) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(n) + 1U), 1,
          numCameras_tmp, &fj_emlrtBCI, &d_st);
    }
    intrinsics[intrinsics.size(0) * n].focalLength.set_size(
        &fab_emlrtRTEI, &d_st, b_r->FocalLength.size(0),
        b_r->FocalLength.size(1));
    loop_ub = b_r->FocalLength.size(0) * b_r->FocalLength.size(1);
    for (i = 0; i < loop_ub; i++) {
      intrinsics[n].focalLength[i] = b_r->FocalLength[i];
    }
    e_st.site = &jub_emlrtRSI;
    b_r = varargin_4->parenReference(e_st, static_cast<real_T>(n) + 1.0,
                                     lobj_0[1]);
    intrinsics[intrinsics.size(0) * n].principalPoint.set_size(
        &gab_emlrtRTEI, &d_st, b_r->PrincipalPoint.size(0),
        b_r->PrincipalPoint.size(1));
    loop_ub = b_r->PrincipalPoint.size(0) * b_r->PrincipalPoint.size(1);
    for (i = 0; i < loop_ub; i++) {
      intrinsics[n].principalPoint[i] = b_r->PrincipalPoint[i];
    }
    e_st.site = &kub_emlrtRSI;
    b_r = varargin_4->parenReference(e_st, static_cast<real_T>(n) + 1.0,
                                     lobj_0[3]);
    focal.set_size(&hab_emlrtRTEI, &d_st, b_r->FocalLength.size(0),
                   b_r->FocalLength.size(1));
    loop_ub = b_r->FocalLength.size(0) * b_r->FocalLength.size(1);
    for (i = 0; i < loop_ub; i++) {
      focal[i] = b_r->FocalLength[i];
    }
    i = focal.size(0) * focal.size(1);
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &ej_emlrtBCI, &d_st);
    }
    e_st.site = &kub_emlrtRSI;
    b_r = varargin_4->parenReference(e_st, static_cast<real_T>(n) + 1.0,
                                     lobj_0[2]);
    intrinsics[intrinsics.size(0) * n].skew.set_size(
        &iab_emlrtRTEI, &d_st, b_r->Skew.size(0), b_r->Skew.size(1));
    loop_ub = b_r->Skew.size(0) * b_r->Skew.size(1);
    for (i = 0; i < loop_ub; i++) {
      intrinsics[n].skew[i] = b_r->Skew[i] / focal[0];
    }
  }
  e_st.site = &hub_emlrtRSI;
  i = poseArr.Data.size(1);
  r1.set_size(&jab_emlrtRTEI, &e_st, 1, 3, poseArr.Data.size(1));
  loop_ub_tmp = 3 * poseArr.Data.size(1);
  for (n = 0; n < loop_ub_tmp; n++) {
    r1[n] = 0.0;
  }
  Rs_size_idx_2 = poseArr.Data.size(1);
  numCameras_tmp = 9 * poseArr.Data.size(1);
  if (numCameras_tmp - 1 >= 0) {
    std::memset(&Rs_data[0], 0,
                static_cast<uint32_T>(numCameras_tmp) * sizeof(real_T));
  }
  b_iv[0] = 1;
  b_iv1[0] = 1;
  b_iv[1] = 3;
  b_iv1[1] = 3;
  emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &b_iv1[0], 2, &tb_emlrtECI, &e_st);
  f_st.site = &xub_emlrtRSI;
  poseArr.parenReference(f_st, obj);
  r1[0] = obj.Translation[0];
  r1[1] = obj.Translation[1];
  r1[2] = obj.Translation[2];
  b_iv[0] = 3;
  b_iv1[0] = 3;
  b_iv[1] = 3;
  b_iv1[1] = 3;
  emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &b_iv1[0], 2, &vb_emlrtECI, &e_st);
  f_st.site = &yub_emlrtRSI;
  poseArr.parenReference(f_st, obj);
  for (n = 0; n < 3; n++) {
    Rs_data[3 * n] = obj.R[n];
    Rs_data[3 * n + 1] = obj.R[n + 3];
    Rs_data[3 * n + 2] = obj.R[n + 6];
  }
  for (loop_ub = 0; loop_ub <= i - 2; loop_ub++) {
    if (i < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i, &cj_emlrtBCI, &e_st);
    }
    b_iv[0] = 1;
    b_iv1[0] = 1;
    b_iv[1] = 3;
    b_iv1[1] = 3;
    emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &b_iv1[0], 2, &sb_emlrtECI,
                                  &e_st);
    f_st.site = &avb_emlrtRSI;
    poseArr.parenReference(f_st, 2.0, &obj);
    r1[3] = obj.Translation[0];
    r1[4] = obj.Translation[1];
    r1[5] = obj.Translation[2];
    b_iv[0] = 3;
    b_iv1[0] = 3;
    b_iv[1] = 3;
    b_iv1[1] = 3;
    emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &b_iv1[0], 2, &ub_emlrtECI,
                                  &e_st);
    f_st.site = &bvb_emlrtRSI;
    poseArr.parenReference(f_st, 2.0, &obj);
    for (n = 0; n < 3; n++) {
      Rs_data[3 * n + 9] = obj.R[n];
      Rs_data[3 * n + 10] = obj.R[n + 3];
      Rs_data[3 * n + 11] = obj.R[n + 6];
    }
  }
  f_st.site = &cvb_emlrtRSI;
  poseArr.parenReference(f_st, mjd_emlrtRSI);
  std::memset(&cameraMatrices_data[0], 0, 12U * sizeof(real_T));
  f_st.site = &dvb_emlrtRSI;
  trans.set_size(&mab_emlrtRTEI, &f_st, 3, 3,
                 static_cast<int32_T>(static_cast<int8_T>(Rs_size_idx_2)));
  numCameras_tmp = 9 * static_cast<int8_T>(Rs_size_idx_2);
  for (n = 0; n < numCameras_tmp; n++) {
    trans[n] = 0.0;
  }
  b_iv[0] = 3;
  b_iv1[0] = 3;
  b_iv[1] = 3;
  b_iv1[1] = 3;
  for (loop_ub = 0; loop_ub < i; loop_ub++) {
    if (loop_ub + 1 > trans.size(2)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, trans.size(2), &aj_emlrtBCI,
                                    &f_st);
    }
    if (loop_ub + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, i, &bj_emlrtBCI, &f_st);
    }
    for (n = 0; n < 3; n++) {
      numCameras_tmp = n + 9 * loop_ub;
      trans[3 * n + 9 * loop_ub] = Rs_data[numCameras_tmp];
      trans[(3 * n + 9 * loop_ub) + 1] = Rs_data[numCameras_tmp + 3];
      trans[(3 * n + 9 * loop_ub) + 2] = Rs_data[numCameras_tmp + 6];
    }
    emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &b_iv1[0], 2, &qb_emlrtECI,
                                  &f_st);
  }
  numCameras_tmp = poseArr.Data.size(1);
  loop_ub = (loop_ub_tmp / 2) << 1;
  n = loop_ub - 2;
  for (i = 0; i <= n; i += 2) {
    __m128d r2;
    r2 = _mm_loadu_pd(&r1[i]);
    _mm_storeu_pd(&tmp_data[i], _mm_mul_pd(r2, _mm_set1_pd(-1.0)));
  }
  for (i = loop_ub; i < loop_ub_tmp; i++) {
    tmp_data[i] = -r1[i];
  }
  b_tmp_data.set(&tmp_data[0], 1, 3, numCameras_tmp);
  f_st.site = &evb_emlrtRSI;
  vision::internal::bundleAdjust::mtimesPage(f_st, b_tmp_data, trans, r1);
  f_st.site = &fvb_emlrtRSI;
  squeeze(f_st, r1, r3);
  b_iv[0] = 3;
  b_iv[1] = 2;
  jcs_data[0] = r3.size(0);
  jcs_data[1] = r3.size(1);
  jcs_data[2] = 1;
  emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &jcs_data[0], 3, &rb_emlrtECI,
                                &e_st);
  for (i = 0; i < 2; i++) {
    cameraMatrices_data[6 * i + 3] = r3[3 * i];
    cameraMatrices_data[6 * i + 4] = r3[3 * i + 1];
    cameraMatrices_data[6 * i + 5] = r3[3 * i + 2];
  }
  b_Rs_data.set(&Rs_data[0], 3, 3, Rs_size_idx_2);
  f_st.site = &gvb_emlrtRSI;
  vision::internal::quaternion::rotationToQuaternion(f_st, b_Rs_data, r4);
  d_st.site = &hsb_emlrtRSI;
  e_st.site = &owb_emlrtRSI;
  f_st.site = &vwb_emlrtRSI;
  d_eml_find(f_st, visibility, irs, jj);
  loop_ub = irs.size(0);
  for (i = 0; i < loop_ub; i++) {
    real_T d;
    d = static_cast<real_T>(irs[i]) - 1.0;
    if (d >= -2.147483648E+9) {
      n = static_cast<int32_T>(d);
    } else {
      n = MIN_int32_T;
    }
    irs[i] = n;
  }
  jcsd_data[1] = 0.0;
  jcsd_data[2] = 0.0;
  jcsd_data[0] = 0.0;
  for (loop_ub = 0; loop_ub < 2; loop_ub++) {
    e_st.site = &pwb_emlrtRSI;
    f_st.site = &drb_emlrtRSI;
    g_st.site = &dxb_emlrtRSI;
    h_st.site = &exb_emlrtRSI;
    sparse_validateNumericIndex(h_st,
                                (static_cast<real_T>(loop_ub) + 2.0) - 1.0);
    numCameras_tmp =
        visibility.colidx[loop_ub + 1] - visibility.colidx[loop_ub];
    if ((numCameras_tmp > visibility.m) && (visibility.m != 0)) {
      emlrtErrorWithMessageIdR2018a(&g_st, &nd_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    h_st.site = &fxb_emlrtRSI;
    i_st.site = &yhb_emlrtRSI;
    b_this.init(i_st, visibility.m, numCameras_tmp);
    if (numCameras_tmp != 0) {
      h_st.site = &gxb_emlrtRSI;
      if (numCameras_tmp > 2147483646) {
        i_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(i_st);
      }
      b_this.colidx[1] = b_this.colidx[0] + numCameras_tmp;
    }
    jcsd_data[loop_ub + 1] =
        static_cast<real_T>(b_this.colidx[b_this.colidx.size(0) - 1] - 1) +
        jcsd_data[loop_ub];
  }
  jcs_data[0] = 0;
  if (jcsd_data[1] < 2.147483648E+9) {
    if (jcsd_data[1] >= -2.147483648E+9) {
      i = static_cast<int32_T>(jcsd_data[1]);
    } else {
      i = MIN_int32_T;
    }
  } else {
    i = MAX_int32_T;
  }
  jcs_data[1] = i;
  if (jcsd_data[2] < 2.147483648E+9) {
    if (jcsd_data[2] >= -2.147483648E+9) {
      i = static_cast<int32_T>(jcsd_data[2]);
    } else {
      i = MIN_int32_T;
    }
  } else {
    i = MAX_int32_T;
  }
  jcs_data[2] = i;
  e_st.site = &qwb_emlrtRSI;
  if (intrinsics.size(1) == 0) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &od_emlrtRTEI, "MATLAB:legacy_two_part:needMoreRhsOutputs",
        "MATLAB:legacy_two_part:needMoreRhsOutputs", 0);
  }
  focal.set_size(&qab_emlrtRTEI, &d_st, intrinsics[0].focalLength.size(0),
                 intrinsics[0].focalLength.size(1));
  loop_ub_tmp =
      intrinsics[0].focalLength.size(0) * intrinsics[0].focalLength.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    focal[i] = intrinsics[0].focalLength[i];
  }
  e_st.site = &rwb_emlrtRSI;
  center.set_size(&rab_emlrtRTEI, &d_st, intrinsics[0].principalPoint.size(0),
                  intrinsics[0].principalPoint.size(1));
  loop_ub_tmp = intrinsics[0].principalPoint.size(0) *
                intrinsics[0].principalPoint.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    center[i] = intrinsics[0].principalPoint[i];
  }
  e_st.site = &swb_emlrtRSI;
  jcsd_data[0] = 0.0;
  jcsd_data[1] = 0.0;
  jcsd_data[2] = 0.0;
  e_st.site = &twb_emlrtRSI;
  tangDistort_data[0] = 0.0;
  tangDistort_data[1] = 0.0;
  e_st.site = &uwb_emlrtRSI;
  skew.set_size(&sab_emlrtRTEI, &d_st, intrinsics[0].skew.size(0),
                intrinsics[0].skew.size(1));
  loop_ub_tmp = intrinsics[0].skew.size(0) * intrinsics[0].skew.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    skew[i] = intrinsics[0].skew[i];
  }
  xyzRefinedPoints.set_size(&tab_emlrtRTEI, &d_st, xyzPoints.size(1), 3);
  loop_ub_tmp = xyzPoints.size(1) * 3;
  for (i = 0; i < loop_ub_tmp; i++) {
    xyzRefinedPoints[i] = 0.0;
  }
  std::memset(&refinedPosesTform_data[0], 0, 24U * sizeof(real_T));
  reprojError.set_size(&vab_emlrtRTEI, &d_st, 2, measurements.size(1));
  loop_ub_tmp = measurements.size(1) << 1;
  for (i = 0; i < loop_ub_tmp; i++) {
    reprojError[i] = 0.0;
  }
  visionbundleAdjust(
      xyzPoints.size(1), &xyzPoints[0], &measurements[0], measurements.size(1),
      2, &cameraMatrices_data[0], &r4[0], intrinsics.size(1) == 1,
      &(irs.data())[0], &jcs_data[0], 1.0E-7, 1.0E-15, 20,
      &fixedCameraIndex_data, fixedCameraIndex_size, &focal[0], &center[0],
      &skew[0], &jcsd_data[0], &tangDistort_data[0], 3, &xyzRefinedPoints[0],
      &refinedPosesTform_data[0], &reprojError[0]);
  std::copy(&refinedPosesTform_data[0], &refinedPosesTform_data[9],
            &refinedPosesTform[0]);
  for (i = 0; i < 3; i++) {
    numCameras_tmp = 3 * i + 1;
    loop_ub = 3 * i + 2;
    t[3 * i] = static_cast<real32_T>(refinedPosesTform[3 * i]);
    t[numCameras_tmp] =
        static_cast<real32_T>(refinedPosesTform[numCameras_tmp]);
    t[loop_ub] = static_cast<real32_T>(refinedPosesTform[loop_ub]);
    b_t[i] = static_cast<real32_T>(refinedPosesTform_data[i + 9]);
  }
  d_st.site = &isb_emlrtRSI;
  vision::internal::codegen::bundleAdjust::inOutTypeMatchPreConjugate(
      d_st, t, b_t, poseArr);
  std::copy(&refinedPosesTform_data[12], &refinedPosesTform_data[21],
            &refinedPosesTform[0]);
  for (i = 0; i < 3; i++) {
    numCameras_tmp = 3 * i + 1;
    loop_ub = 3 * i + 2;
    t[3 * i] = static_cast<real32_T>(refinedPosesTform[3 * i]);
    t[numCameras_tmp] =
        static_cast<real32_T>(refinedPosesTform[numCameras_tmp]);
    t[loop_ub] = static_cast<real32_T>(refinedPosesTform[loop_ub]);
    b_t[i] = static_cast<real32_T>(refinedPosesTform_data[i + 21]);
  }
  d_st.site = &jsb_emlrtRSI;
  vision::internal::codegen::bundleAdjust::inOutTypeMatchPreConjugate(d_st, t,
                                                                      b_t, obj);
  d_st.site = &jsb_emlrtRSI;
  poseArr.horzcat(d_st, obj);
  tc.size[0] = 2;
  d_st.site = &ksb_emlrtRSI;
  poseArr.parenReference(d_st, 1.0, &tc.data[0]);
  d_st.site = &ksb_emlrtRSI;
  poseArr.parenReference(d_st, 2.0, &tc.data[1]);
  b_refinedPoseCg_ViewId_data.set(&refinedPoseCg_ViewId_data[0],
                                  refinedPoseCg_ViewId_size);
  b_tc.set(&tc.data[0], tc.size[0]);
  d_st.site = &lsb_emlrtRSI;
  varargout_2.init(d_st, b_refinedPoseCg_ViewId_data, b_tc);
  varargout_1.set_size(&xab_emlrtRTEI, &c_st, xyzRefinedPoints.size(0), 3);
  loop_ub_tmp = xyzRefinedPoints.size(0) * 3;
  for (i = 0; i < loop_ub_tmp; i++) {
    varargout_1[i] = static_cast<real32_T>(xyzRefinedPoints[i]);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void bundleAdjustment(const emlrtStack &sp, const worldpointset &varargin_1,
                      const imageviewset &varargin_2,
                      const array<uint32_T, 1U> &varargin_3,
                      cameraIntrinsics *varargin_4,
                      const uint32_T varargin_6_data[], int32_T varargin_6_size,
                      imageviewset &varargout_2, array<real_T, 1U> &varargout_3,
                      worldpointset &varargout_1)
{
  b_cameraIntrinsics lobj_0[4];
  b_cameraIntrinsics *b_r;
  b_rigidtform3d absPose;
  b_rigidtform3d mjd_emlrtRSI;
  b_rigidtform3d ojd_emlrtRSI;
  b_rigidtform3d pjd_emlrtRSI;
  b_rigidtform3d poseArr;
  b_sparse b_this;
  sparse visibility;
  table njd_emlrtRSI;
  table viewsTable;
  array<b_ORBPoints, 1U> b_expl_temp;
  array<b_rigidtform3d, 1U> b_tc;
  array<b_rigidtform3d, 1U> tc;
  array<images::geotrans::internal::b_rigidtform3dImpl, 2U> dataArray;
  array<cell_wrap_8, 2U> expl_temp;
  array<d_struct_T, 2U> intrinsics;
  array<real_T, 3U> Rs;
  array<real_T, 3U> b_ts;
  array<real_T, 3U> r2;
  array<real_T, 3U> rsTranspose;
  array<real_T, 3U> ts;
  array<real_T, 2U> cameraMatrices;
  array<real_T, 2U> center;
  array<real_T, 2U> focal;
  array<real_T, 2U> jcsd;
  array<real_T, 2U> measurements;
  array<real_T, 2U> quaternionBases;
  array<real_T, 2U> refinedPosesTform;
  array<real_T, 2U> reprojError;
  array<real_T, 2U> skew;
  array<real_T, 2U> xyzPoints;
  array<real_T, 2U> xyzRefinedPoints;
  array<int32_T, 2U> jcs;
  array<int32_T, 1U> irs;
  array<int32_T, 1U> jj;
  array<uint32_T, 1U> c;
  array<uint32_T, 1U> refinedPoseCg_ViewId;
  d_struct_T st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  real_T fixedCameraIndex_data[10];
  real_T b_refinedPosesTform[9];
  real_T radDistort_data[3];
  real_T tangDistort_data[2];
  real_T d;
  int32_T b_iv[2];
  int32_T b_iv1[2];
  int32_T fixedCameraIndex_size;
  int32_T i;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T n;
  int32_T numCameras_tmp;
  real32_T t[16];
  real32_T b_t[9];
  real32_T c_t[3];
  real32_T f;
  b_st.prev = &sp;
  b_st.tls = sp.tls;
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
  b_st.site = &dsb_emlrtRSI;
  c_st.site = &esb_emlrtRSI;
  varargout_1 = varargin_1;
  varargout_2 = varargin_2;
  d_st.site = &fsb_emlrtRSI;
  fixedCameraIndex_size =
      vision::internal::bundleAdjust::validateAndParseInputs(
          d_st, varargin_1, varargout_2, varargin_3, &varargin_4,
          varargin_6_data, varargin_6_size, xyzPoints, measurements, visibility,
          refinedPoseCg_ViewId, poseArr, fixedCameraIndex_data, varargout_3);
  d_st.site = &gsb_emlrtRSI;
  e_st.site = &fub_emlrtRSI;
  numCameras_tmp = varargin_4->cameraIntrinsicsArrayData.size(0) *
                   varargin_4->cameraIntrinsicsArrayData.size(1);
  st.focalLength.set_size(&bab_emlrtRTEI, &d_st, 1, 2);
  st.principalPoint.set_size(&cab_emlrtRTEI, &d_st, 1, 2);
  st.focalLength[0] = 0.0;
  st.principalPoint[0] = 0.0;
  st.focalLength[1] = 0.0;
  st.principalPoint[1] = 0.0;
  st.radialDistortion.size[0] = 1;
  st.radialDistortion.size[1] = 3;
  st.radialDistortion.data[0] = 0.0;
  st.radialDistortion.data[1] = 0.0;
  st.radialDistortion.data[2] = 0.0;
  st.tangentialDistortion.size[0] = 1;
  st.tangentialDistortion.size[1] = 2;
  st.tangentialDistortion.data[0] = 0.0;
  st.tangentialDistortion.data[1] = 0.0;
  st.skew.set_size(&dab_emlrtRTEI, &d_st, 1, 1);
  st.skew[0] = 0.0;
  e_st.site = &gub_emlrtRSI;
  f_st.site = &ne_emlrtRSI;
  internal::assertValidSizeArg(f_st, static_cast<real_T>(numCameras_tmp));
  intrinsics.set_size(&eab_emlrtRTEI, &e_st, 1, numCameras_tmp);
  for (i = 0; i < numCameras_tmp; i++) {
    intrinsics[i] = st;
  }
  for (n = 0; n < numCameras_tmp; n++) {
    e_st.site = &iub_emlrtRSI;
    b_r = varargin_4->parenReference(e_st, static_cast<real_T>(n) + 1.0,
                                     lobj_0[0]);
    if ((static_cast<int32_T>(static_cast<uint32_T>(n) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(n) + 1U) >
         numCameras_tmp)) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(n) + 1U), 1,
          numCameras_tmp, &fj_emlrtBCI, &d_st);
    }
    intrinsics[intrinsics.size(0) * n].focalLength.set_size(
        &fab_emlrtRTEI, &d_st, b_r->FocalLength.size(0),
        b_r->FocalLength.size(1));
    loop_ub = b_r->FocalLength.size(0) * b_r->FocalLength.size(1);
    for (i = 0; i < loop_ub; i++) {
      intrinsics[n].focalLength[i] = b_r->FocalLength[i];
    }
    e_st.site = &jub_emlrtRSI;
    b_r = varargin_4->parenReference(e_st, static_cast<real_T>(n) + 1.0,
                                     lobj_0[1]);
    intrinsics[intrinsics.size(0) * n].principalPoint.set_size(
        &gab_emlrtRTEI, &d_st, b_r->PrincipalPoint.size(0),
        b_r->PrincipalPoint.size(1));
    loop_ub = b_r->PrincipalPoint.size(0) * b_r->PrincipalPoint.size(1);
    for (i = 0; i < loop_ub; i++) {
      intrinsics[n].principalPoint[i] = b_r->PrincipalPoint[i];
    }
    e_st.site = &kub_emlrtRSI;
    b_r = varargin_4->parenReference(e_st, static_cast<real_T>(n) + 1.0,
                                     lobj_0[3]);
    focal.set_size(&hab_emlrtRTEI, &d_st, b_r->FocalLength.size(0),
                   b_r->FocalLength.size(1));
    loop_ub = b_r->FocalLength.size(0) * b_r->FocalLength.size(1);
    for (i = 0; i < loop_ub; i++) {
      focal[i] = b_r->FocalLength[i];
    }
    i = focal.size(0) * focal.size(1);
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &ej_emlrtBCI, &d_st);
    }
    e_st.site = &kub_emlrtRSI;
    b_r = varargin_4->parenReference(e_st, static_cast<real_T>(n) + 1.0,
                                     lobj_0[2]);
    intrinsics[intrinsics.size(0) * n].skew.set_size(
        &iab_emlrtRTEI, &d_st, b_r->Skew.size(0), b_r->Skew.size(1));
    loop_ub = b_r->Skew.size(0) * b_r->Skew.size(1);
    for (i = 0; i < loop_ub; i++) {
      intrinsics[n].skew[i] = b_r->Skew[i] / focal[0];
    }
  }
  e_st.site = &hub_emlrtRSI;
  n = poseArr.Data.size(1);
  ts.set_size(&jab_emlrtRTEI, &e_st, 1, 3, poseArr.Data.size(1));
  loop_ub_tmp = 3 * poseArr.Data.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    ts[i] = 0.0;
  }
  Rs.set_size(&kab_emlrtRTEI, &e_st, 3, 3, poseArr.Data.size(1));
  numCameras_tmp = 9 * poseArr.Data.size(1);
  for (i = 0; i < numCameras_tmp; i++) {
    Rs[i] = 0.0;
  }
  b_iv[0] = 1;
  b_iv1[0] = 1;
  b_iv[1] = 3;
  b_iv1[1] = 3;
  emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &b_iv1[0], 2, &tb_emlrtECI, &e_st);
  f_st.site = &xub_emlrtRSI;
  poseArr.parenReference(f_st, absPose);
  ts[0] = absPose.Translation[0];
  ts[1] = absPose.Translation[1];
  ts[2] = absPose.Translation[2];
  b_iv[0] = 3;
  b_iv1[0] = 3;
  b_iv[1] = 3;
  b_iv1[1] = 3;
  emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &b_iv1[0], 2, &vb_emlrtECI, &e_st);
  f_st.site = &yub_emlrtRSI;
  poseArr.parenReference(f_st, absPose);
  for (i = 0; i < 3; i++) {
    Rs[3 * i] = absPose.R[i];
    Rs[3 * i + 1] = absPose.R[i + 3];
    Rs[3 * i + 2] = absPose.R[i + 6];
  }
  for (int32_T b_i{0}; b_i <= n - 2; b_i++) {
    if (b_i + 2 > n) {
      emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, n, &cj_emlrtBCI, &e_st);
    }
    b_iv[0] = 1;
    b_iv1[0] = 1;
    b_iv[1] = 3;
    b_iv1[1] = 3;
    emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &b_iv1[0], 2, &sb_emlrtECI,
                                  &e_st);
    f_st.site = &avb_emlrtRSI;
    poseArr.parenReference(f_st, static_cast<real_T>(b_i) + 2.0, &absPose);
    ts[3 * (b_i + 1)] = absPose.Translation[0];
    ts[3 * (b_i + 1) + 1] = absPose.Translation[1];
    ts[3 * (b_i + 1) + 2] = absPose.Translation[2];
    if (b_i + 2 > n) {
      emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, n, &dj_emlrtBCI, &e_st);
    }
    b_iv[0] = 3;
    b_iv1[0] = 3;
    b_iv[1] = 3;
    b_iv1[1] = 3;
    emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &b_iv1[0], 2, &ub_emlrtECI,
                                  &e_st);
    f_st.site = &bvb_emlrtRSI;
    poseArr.parenReference(f_st, static_cast<real_T>(b_i) + 2.0, &absPose);
    for (i = 0; i < 3; i++) {
      Rs[3 * i + 9 * (b_i + 1)] = absPose.R[i];
      Rs[(3 * i + 9 * (b_i + 1)) + 1] = absPose.R[i + 3];
      Rs[(3 * i + 9 * (b_i + 1)) + 2] = absPose.R[i + 6];
    }
  }
  f_st.site = &cvb_emlrtRSI;
  poseArr.parenReference(f_st, mjd_emlrtRSI);
  loop_ub = refinedPoseCg_ViewId.size(0);
  cameraMatrices.set_size(&lab_emlrtRTEI, &e_st, 6,
                          refinedPoseCg_ViewId.size(0));
  numCameras_tmp = 6 * refinedPoseCg_ViewId.size(0);
  for (i = 0; i < numCameras_tmp; i++) {
    cameraMatrices[i] = 0.0;
  }
  f_st.site = &dvb_emlrtRSI;
  rsTranspose.set_size(&xmb_emlrtRTEI, &f_st, 3, 3, Rs.size(2));
  numCameras_tmp = 9 * Rs.size(2);
  for (i = 0; i < numCameras_tmp; i++) {
    rsTranspose[i] = 0.0;
  }
  b_iv[0] = 3;
  b_iv1[0] = 3;
  b_iv[1] = 3;
  b_iv1[1] = 3;
  for (int32_T b_i{0}; b_i < n; b_i++) {
    if (b_i + 1 > rsTranspose.size(2)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, rsTranspose.size(2),
                                    &aj_emlrtBCI, &f_st);
    }
    if (b_i + 1 > n) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, n, &bj_emlrtBCI, &f_st);
    }
    for (i = 0; i < 3; i++) {
      rsTranspose[3 * i + 9 * b_i] = Rs[i + 9 * b_i];
      rsTranspose[(3 * i + 9 * b_i) + 1] = Rs[(i + 9 * b_i) + 3];
      rsTranspose[(3 * i + 9 * b_i) + 2] = Rs[(i + 9 * b_i) + 6];
    }
    emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &b_iv1[0], 2, &qb_emlrtECI,
                                  &f_st);
  }
  b_ts.set_size(&nab_emlrtRTEI, &e_st, 1, 3, poseArr.Data.size(1));
  numCameras_tmp = (loop_ub_tmp / 2) << 1;
  n = numCameras_tmp - 2;
  for (i = 0; i <= n; i += 2) {
    __m128d r1;
    r1 = _mm_loadu_pd(&ts[i]);
    _mm_storeu_pd(&b_ts[i], _mm_mul_pd(r1, _mm_set1_pd(-1.0)));
  }
  for (i = numCameras_tmp; i < loop_ub_tmp; i++) {
    b_ts[i] = -ts[i];
  }
  f_st.site = &evb_emlrtRSI;
  vision::internal::bundleAdjust::mtimesPage(f_st, b_ts, rsTranspose, ts);
  f_st.site = &fvb_emlrtRSI;
  squeeze(f_st, ts, r2);
  b_iv[0] = 3;
  b_iv[1] = refinedPoseCg_ViewId.size(0);
  emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, r2.size(), 3, &rb_emlrtECI, &e_st);
  for (i = 0; i < loop_ub; i++) {
    cameraMatrices[6 * i + 3] = r2[3 * i];
    cameraMatrices[6 * i + 4] = r2[3 * i + 1];
    cameraMatrices[6 * i + 5] = r2[3 * i + 2];
  }
  f_st.site = &gvb_emlrtRSI;
  vision::internal::quaternion::rotationToQuaternion(f_st, Rs, quaternionBases);
  d_st.site = &hsb_emlrtRSI;
  e_st.site = &owb_emlrtRSI;
  f_st.site = &vwb_emlrtRSI;
  e_eml_find(f_st, visibility, irs, jj);
  numCameras_tmp = irs.size(0);
  for (i = 0; i < numCameras_tmp; i++) {
    d = static_cast<real_T>(irs[i]) - 1.0;
    if (d >= -2.147483648E+9) {
      loop_ub_tmp = static_cast<int32_T>(d);
    } else {
      loop_ub_tmp = MIN_int32_T;
    }
    irs[i] = loop_ub_tmp;
  }
  if (static_cast<real_T>(visibility.n) + 1.0 != visibility.n + 1) {
    emlrtIntegerCheckR2012b(static_cast<real_T>(visibility.n) + 1.0,
                            &dc_emlrtDCI, &d_st);
  }
  loop_ub_tmp = visibility.n + 1;
  jcsd.set_size(&oab_emlrtRTEI, &d_st, 1, loop_ub_tmp);
  for (i = 0; i < loop_ub_tmp; i++) {
    jcsd[i] = 0.0;
  }
  jcsd[0] = 0.0;
  i = visibility.n;
  emlrtForLoopVectorCheckR2021a(
      2.0, 1.0, static_cast<real_T>(visibility.n) + 1.0, mxDOUBLE_CLASS,
      visibility.n, &ye_emlrtRTEI, &d_st);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    e_st.site = &pwb_emlrtRSI;
    visibility.parenReference(e_st, (static_cast<real_T>(b_i) + 2.0) - 1.0,
                              b_this);
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         jcsd.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          jcsd.size(1), &eu_emlrtBCI, &d_st);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 2U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 2U) >
         jcsd.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 2U), 1,
          jcsd.size(1), &fu_emlrtBCI, &d_st);
    }
    jcsd[b_i + 1] =
        static_cast<real_T>(b_this.colidx[b_this.colidx.size(0) - 1] - 1) +
        jcsd[b_i];
  }
  numCameras_tmp = jcsd.size(1);
  jcs.set_size(&pab_emlrtRTEI, &d_st, 1, jcsd.size(1));
  for (i = 0; i < numCameras_tmp; i++) {
    d = jcsd[i];
    if (d < 2.147483648E+9) {
      if (d >= -2.147483648E+9) {
        loop_ub_tmp = static_cast<int32_T>(d);
      } else {
        loop_ub_tmp = MIN_int32_T;
      }
    } else {
      loop_ub_tmp = MAX_int32_T;
    }
    jcs[i] = loop_ub_tmp;
  }
  e_st.site = &qwb_emlrtRSI;
  if (intrinsics.size(1) == 0) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &od_emlrtRTEI, "MATLAB:legacy_two_part:needMoreRhsOutputs",
        "MATLAB:legacy_two_part:needMoreRhsOutputs", 0);
  }
  focal.set_size(&qab_emlrtRTEI, &d_st, intrinsics[0].focalLength.size(0),
                 intrinsics[0].focalLength.size(1));
  loop_ub_tmp =
      intrinsics[0].focalLength.size(0) * intrinsics[0].focalLength.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    focal[i] = intrinsics[0].focalLength[i];
  }
  e_st.site = &rwb_emlrtRSI;
  center.set_size(&rab_emlrtRTEI, &d_st, intrinsics[0].principalPoint.size(0),
                  intrinsics[0].principalPoint.size(1));
  loop_ub_tmp = intrinsics[0].principalPoint.size(0) *
                intrinsics[0].principalPoint.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    center[i] = intrinsics[0].principalPoint[i];
  }
  e_st.site = &swb_emlrtRSI;
  radDistort_data[0] = 0.0;
  radDistort_data[1] = 0.0;
  radDistort_data[2] = 0.0;
  e_st.site = &twb_emlrtRSI;
  tangDistort_data[0] = 0.0;
  tangDistort_data[1] = 0.0;
  e_st.site = &uwb_emlrtRSI;
  skew.set_size(&sab_emlrtRTEI, &d_st, intrinsics[0].skew.size(0),
                intrinsics[0].skew.size(1));
  loop_ub_tmp = intrinsics[0].skew.size(0) * intrinsics[0].skew.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    skew[i] = intrinsics[0].skew[i];
  }
  xyzRefinedPoints.set_size(&tab_emlrtRTEI, &d_st, xyzPoints.size(1), 3);
  loop_ub_tmp = xyzPoints.size(1) * 3;
  for (i = 0; i < loop_ub_tmp; i++) {
    xyzRefinedPoints[i] = 0.0;
  }
  refinedPosesTform.set_size(&uab_emlrtRTEI, &d_st, 12,
                             refinedPoseCg_ViewId.size(0));
  loop_ub_tmp = 12 * cameraMatrices.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    refinedPosesTform[i] = 0.0;
  }
  reprojError.set_size(&vab_emlrtRTEI, &d_st, 2, measurements.size(1));
  loop_ub_tmp = measurements.size(1) << 1;
  for (i = 0; i < loop_ub_tmp; i++) {
    reprojError[i] = 0.0;
  }
  visionbundleAdjust(
      xyzPoints.size(1), &xyzPoints[0], &measurements[0], measurements.size(1),
      cameraMatrices.size(1), &cameraMatrices[0], &quaternionBases[0],
      intrinsics.size(1) == 1, &(irs.data())[0], &jcs[0], 1.0E-7, 1.0E-16, 10,
      &fixedCameraIndex_data[0], fixedCameraIndex_size, &focal[0], &center[0],
      &skew[0], &radDistort_data[0], &tangDistort_data[0], 3,
      &xyzRefinedPoints[0], &refinedPosesTform[0], &reprojError[0]);
  for (i = 0; i < 9; i++) {
    b_refinedPosesTform[i] = refinedPosesTform[i];
  }
  for (i = 0; i < 3; i++) {
    n = 3 * i + 1;
    numCameras_tmp = 3 * i + 2;
    f = static_cast<real32_T>(refinedPosesTform[i + 9]);
    b_t[3 * i] = static_cast<real32_T>(b_refinedPosesTform[3 * i]);
    b_t[n] = static_cast<real32_T>(b_refinedPosesTform[n]);
    b_t[numCameras_tmp] =
        static_cast<real32_T>(b_refinedPosesTform[numCameras_tmp]);
    c_t[i] = f;
  }
  d_st.site = &isb_emlrtRSI;
  vision::internal::codegen::bundleAdjust::inOutTypeMatchPreConjugate(
      d_st, b_t, c_t, poseArr);
  for (loop_ub_tmp = 0; loop_ub_tmp <= loop_ub - 2; loop_ub_tmp++) {
    if (loop_ub_tmp + 2 > refinedPosesTform.size(1)) {
      emlrtDynamicBoundsCheckR2012b(
          loop_ub_tmp + 2, 1, refinedPosesTform.size(1), &du_emlrtBCI, &c_st);
    }
    for (i = 0; i < 9; i++) {
      b_refinedPosesTform[i] = refinedPosesTform[i + 12 * (loop_ub_tmp + 1)];
    }
    if (loop_ub_tmp + 2 > refinedPosesTform.size(1)) {
      emlrtDynamicBoundsCheckR2012b(
          loop_ub_tmp + 2, 1, refinedPosesTform.size(1), &cu_emlrtBCI, &c_st);
    }
    for (i = 0; i < 3; i++) {
      n = 3 * i + 1;
      numCameras_tmp = 3 * i + 2;
      f = static_cast<real32_T>(
          refinedPosesTform[(i + 12 * (loop_ub_tmp + 1)) + 9]);
      b_t[3 * i] = static_cast<real32_T>(b_refinedPosesTform[3 * i]);
      b_t[n] = static_cast<real32_T>(b_refinedPosesTform[n]);
      b_t[numCameras_tmp] =
          static_cast<real32_T>(b_refinedPosesTform[numCameras_tmp]);
      c_t[i] = f;
    }
    d_st.site = &jsb_emlrtRSI;
    vision::internal::codegen::bundleAdjust::inOutTypeMatchPreConjugate(
        d_st, b_t, c_t, absPose);
    d_st.site = &jsb_emlrtRSI;
    poseArr.horzcat(d_st, absPose);
  }
  tc.set_size(&ymb_emlrtRTEI, &c_st, refinedPoseCg_ViewId.size(0));
  for (i = 0; i < loop_ub; i++) {
    if (i > tc.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, tc.size(0) - 1, &gu_emlrtBCI, &c_st);
    }
    tc[i].Data.set_size(&ymb_emlrtRTEI, &c_st, 0, tc[i].Data.size(1));
    if (i > tc.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, tc.size(0) - 1, &gu_emlrtBCI, &c_st);
    }
    tc[i].Data.set_size(&ymb_emlrtRTEI, &c_st, tc[i].Data.size(0), 0);
  }
  tc.set_size(&wab_emlrtRTEI, &c_st, refinedPoseCg_ViewId.size(0));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i > tc.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, tc.size(0) - 1, &hu_emlrtBCI,
                                    &c_st);
    }
    d_st.site = &ksb_emlrtRSI;
    poseArr.parenReference(d_st, static_cast<real_T>(b_i) + 1.0, &tc[b_i]);
  }
  d_st.site = &lsb_emlrtRSI;
  njd_emlrtRSI.init(d_st, refinedPoseCg_ViewId, tc);
  numCameras_tmp = poseArr.Data.size(1);
  b_tc.set_size(&ymb_emlrtRTEI, &c_st, poseArr.Data.size(1));
  for (i = 0; i < numCameras_tmp; i++) {
    if (i > b_tc.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, b_tc.size(0) - 1, &gu_emlrtBCI,
                                    &c_st);
    }
    b_tc[i].Data.set_size(&ymb_emlrtRTEI, &c_st, 0, b_tc[i].Data.size(1));
    if (i > b_tc.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, b_tc.size(0) - 1, &gu_emlrtBCI,
                                    &c_st);
    }
    b_tc[i].Data.set_size(&ymb_emlrtRTEI, &c_st, b_tc[i].Data.size(0), 0);
  }
  b_tc.set_size(&wab_emlrtRTEI, &c_st, poseArr.Data.size(1));
  for (int32_T b_i{0}; b_i < numCameras_tmp; b_i++) {
    if (b_i > b_tc.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, b_tc.size(0) - 1, &iu_emlrtBCI,
                                    &c_st);
    }
    d_st.site = &usc_emlrtRSI;
    poseArr.parenReference(d_st, static_cast<real_T>(b_i) + 1.0, &b_tc[b_i]);
  }
  d_st.site = &xsc_emlrtRSI;
  viewsTable.init(d_st, refinedPoseCg_ViewId, b_tc);
  d_st.site = &vsc_emlrtRSI;
  e_st.site = &kuc_emlrtRSI;
  f_st.site = &puc_emlrtRSI;
  f_st.site = &quc_emlrtRSI;
  ViewSetBaseImpl::checkViewIds(f_st, viewsTable.data.f1);
  i = viewsTable.data.f2.size(0) - 1;
  if (viewsTable.data.f2.size(0) - 1 < 0) {
    emlrtDynamicBoundsCheckR2012b(0, 0, viewsTable.data.f2.size(0) - 1,
                                  &au_emlrtBCI, &e_st);
  }
  for (loop_ub_tmp = 0; loop_ub_tmp < 3; loop_ub_tmp++) {
    n = loop_ub_tmp << 2;
    t[n] = viewsTable.data.f2[0].R[3 * loop_ub_tmp];
    t[n + 1] = viewsTable.data.f2[0].R[3 * loop_ub_tmp + 1];
    t[n + 2] = viewsTable.data.f2[0].R[3 * loop_ub_tmp + 2];
    t[loop_ub_tmp + 12] = viewsTable.data.f2[0].Translation[loop_ub_tmp];
  }
  t[3] = 0.0F;
  t[7] = 0.0F;
  t[11] = 0.0F;
  t[15] = 1.0F;
  f_st.site = &uuc_emlrtRSI;
  absPose.b_init(f_st, t);
  loop_ub_tmp = viewsTable.data.f1.size(0);
  for (int32_T b_i{0}; b_i < loop_ub_tmp; b_i++) {
    if (b_i > i) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &yt_emlrtBCI, &e_st);
    }
    f_st.site = &ruc_emlrtRSI;
    for (numCameras_tmp = 0; numCameras_tmp < 3; numCameras_tmp++) {
      n = numCameras_tmp << 2;
      t[n] = viewsTable.data.f2[b_i].R[3 * numCameras_tmp];
      t[n + 1] = viewsTable.data.f2[b_i].R[3 * numCameras_tmp + 1];
      t[n + 2] = viewsTable.data.f2[b_i].R[3 * numCameras_tmp + 2];
      t[numCameras_tmp + 12] =
          viewsTable.data.f2[b_i].Translation[numCameras_tmp];
    }
    t[3] = 0.0F;
    t[7] = 0.0F;
    t[11] = 0.0F;
    t[15] = 1.0F;
    g_st.site = &ruc_emlrtRSI;
    poseArr.b_init(g_st, t);
    numCameras_tmp = absPose.Data.size(1);
    if (b_i + 1 > absPose.Data.size(1)) {
      dataArray.set_size(&qkb_emlrtRTEI, &f_st, 1, b_i + 1);
      for (n = 0; n < numCameras_tmp; n++) {
        if (n > absPose.Data.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(n, 0, absPose.Data.size(1) - 1,
                                        &lr_emlrtBCI, &f_st);
        }
        if (n > dataArray.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(n, 0, dataArray.size(1) - 1,
                                        &mr_emlrtBCI, &f_st);
        }
        dataArray[n] = absPose.Data[n];
      }
      if (poseArr.Data.size(1) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, poseArr.Data.size(1) - 1,
                                      &cr_emlrtBCI, &f_st);
      }
      if (b_i > dataArray.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, dataArray.size(1) - 1,
                                      &nr_emlrtBCI, &f_st);
      }
      dataArray[b_i] = poseArr.Data[0];
      loop_ub = dataArray.size(1);
      absPose.Data.set_size(&rkb_emlrtRTEI, &f_st, 1, dataArray.size(1));
      for (numCameras_tmp = 0; numCameras_tmp < loop_ub; numCameras_tmp++) {
        absPose.Data[numCameras_tmp] = dataArray[numCameras_tmp];
      }
    } else {
      if (poseArr.Data.size(1) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, poseArr.Data.size(1) - 1,
                                      &dr_emlrtBCI, &f_st);
      }
      if (b_i > absPose.Data.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, absPose.Data.size(1) - 1,
                                      &kr_emlrtBCI, &f_st);
      }
      absPose.Data[b_i] = poseArr.Data[0];
    }
    f_st.site = &suc_emlrtRSI;
    absPose.parenReference(f_st, static_cast<real_T>(b_i) + 1.0, &ojd_emlrtRSI);
    f_st.site = &tuc_emlrtRSI;
    absPose.parenReference(f_st, static_cast<real_T>(b_i) + 1.0, &pjd_emlrtRSI);
  }
  e_st.site = &luc_emlrtRSI;
  varargout_2.checkIfViewIsMissing(e_st, viewsTable.data.f1);
  e_st.site = &muc_emlrtRSI;
  varargout_2.imageviewsetBase_get_Views(e_st, refinedPoseCg_ViewId, expl_temp,
                                         b_expl_temp, poseArr);
  e_st.site = &nuc_emlrtRSI;
  f_st.site = &bjb_emlrtRSI;
  g_st.site = &efb_emlrtRSI;
  b_do_vectors(g_st, viewsTable.data.f1, refinedPoseCg_ViewId, c, jj, irs);
  for (int32_T b_i{0}; b_i < loop_ub_tmp; b_i++) {
    if (b_i + 1 > irs.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, irs.size(0), &bu_emlrtBCI,
                                    &d_st);
    }
    e_st.site = &ouc_emlrtRSI;
    f_st.site = &ouc_emlrtRSI;
    absPose.parenReference(f_st, static_cast<real_T>(b_i) + 1.0, &poseArr);
    if (irs[b_i] > varargout_2.AbsPosesSingle.Data.size(1)) {
      dataArray.set_size(&qkb_emlrtRTEI, &e_st, 1, irs[b_i]);
      i = varargout_2.AbsPosesSingle.Data.size(1);
      for (n = 0; n < i; n++) {
        if (n > varargout_2.AbsPosesSingle.Data.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(
              n, 0, varargout_2.AbsPosesSingle.Data.size(1) - 1, &lr_emlrtBCI,
              &e_st);
        }
        if (n > dataArray.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(n, 0, dataArray.size(1) - 1,
                                        &mr_emlrtBCI, &e_st);
        }
        dataArray[n] = varargout_2.AbsPosesSingle.Data[n];
      }
      if (poseArr.Data.size(1) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, poseArr.Data.size(1) - 1,
                                      &cr_emlrtBCI, &e_st);
      }
      i = irs[b_i] - 1;
      if ((i < 0) || (i > dataArray.size(1) - 1)) {
        emlrtDynamicBoundsCheckR2012b(i, 0, dataArray.size(1) - 1, &nr_emlrtBCI,
                                      &e_st);
      }
      dataArray[i] = poseArr.Data[0];
      loop_ub = dataArray.size(1);
      varargout_2.AbsPosesSingle.Data.set_size(&rkb_emlrtRTEI, &e_st, 1,
                                               dataArray.size(1));
      for (i = 0; i < loop_ub; i++) {
        varargout_2.AbsPosesSingle.Data[i] = dataArray[i];
      }
    } else {
      if (poseArr.Data.size(1) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, poseArr.Data.size(1) - 1,
                                      &dr_emlrtBCI, &e_st);
      }
      i = irs[b_i] - 1;
      if ((i < 0) || (i > varargout_2.AbsPosesSingle.Data.size(1) - 1)) {
        emlrtDynamicBoundsCheckR2012b(
            i, 0, varargout_2.AbsPosesSingle.Data.size(1) - 1, &kr_emlrtBCI,
            &e_st);
      }
      varargout_2.AbsPosesSingle.Data[i] = poseArr.Data[0];
    }
  }
  d_st.site = &wsc_emlrtRSI;
  varargout_1.updateWorldPoints(d_st, varargout_3, xyzRefinedPoints);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (bundleAdjustment.cpp)
