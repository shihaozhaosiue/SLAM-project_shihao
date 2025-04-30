//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// validateAndParseInputs1.cpp
//
// Code generation for function 'validateAndParseInputs1'
//

// Include files
#include "validateAndParseInputs1.h"
#include "ORBPoints.h"
#include "ViewSetBaseImpl.h"
#include "any1.h"
#include "bundleAdjustmentValidation.h"
#include "cameraIntrinsics.h"
#include "cameraIntrinsicsArray.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_setop.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "imageviewset.h"
#include "ismember.h"
#include "pointTrack.h"
#include "pointTrackImpl.h"
#include "rigidtform3d.h"
#include "rigidtform3dImpl.h"
#include "rowNamesDim.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "sparse1.h"
#include "table.h"
#include "validateAndParseInputs.h"
#include "varNamesDim.h"
#include "worldpointset.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo msb_emlrtRSI{
    184,                      // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\validateAndParseInputs.m" // pathName
};

static emlrtRSInfo nsb_emlrtRSI{
    75,                       // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo osb_emlrtRSI{
    79,                       // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo psb_emlrtRSI{
    94,                       // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo qsb_emlrtRSI{
    97,                       // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo rsb_emlrtRSI{
    100,                      // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo ssb_emlrtRSI{
    117,                      // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo tsb_emlrtRSI{
    168,                      // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo usb_emlrtRSI{
    205,                 // lineNo
    "validateXYZPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo vsb_emlrtRSI{
    214,                   // lineNo
    "validatePointTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo wsb_emlrtRSI{
    227,                     // lineNo
    "validatePoseTableFull", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo xsb_emlrtRSI{
    228,                     // lineNo
    "validatePoseTableFull", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo ysb_emlrtRSI{
    279,                               // lineNo
    "checkAndConvertPoseTableRigid3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo atb_emlrtRSI{
    280,                               // lineNo
    "checkAndConvertPoseTableRigid3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo btb_emlrtRSI{
    286,                               // lineNo
    "checkAndConvertPoseTableRigid3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo ctb_emlrtRSI{
    289,                               // lineNo
    "checkAndConvertPoseTableRigid3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo dtb_emlrtRSI{
    291,                               // lineNo
    "checkAndConvertPoseTableRigid3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo etb_emlrtRSI{
    292,                               // lineNo
    "checkAndConvertPoseTableRigid3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo ftb_emlrtRSI{
    294,                               // lineNo
    "checkAndConvertPoseTableRigid3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo gtb_emlrtRSI{
    300,                               // lineNo
    "checkAndConvertPoseTableRigid3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo mtb_emlrtRSI{
    198,                        // lineNo
    "validateCameraIntrinsics", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo ntb_emlrtRSI{
    199,                        // lineNo
    "validateCameraIntrinsics", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo dub_emlrtRSI{
    237,                            // lineNo
    "convertFixedViewIDsToIndices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo eub_emlrtRSI{
    242,                            // lineNo
    "convertFixedViewIDsToIndices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo sjc_emlrtRSI{
    83,                       // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo tjc_emlrtRSI{
    86,                       // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo ujc_emlrtRSI{
    89,                       // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo vjc_emlrtRSI{
    115,                      // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo wjc_emlrtRSI{
    383,                   // lineNo
    "validateImagePoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo xjc_emlrtRSI{
    32,                                              // lineNo
    "bundleAdjustmentValidation/validateSinglePose", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\bundleAdjustmentValidation.m" // pathName
};

static emlrtRSInfo yjc_emlrtRSI{
    191,                        // lineNo
    "validateCameraIntrinsics", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo akc_emlrtRSI{
    196,                        // lineNo
    "validateCameraIntrinsics", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo bkc_emlrtRSI{
    20,                             // lineNo
    "checkIntrinsicsAndParameters", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkIntrinsicsAndParameters.m" // pathName
};

static emlrtRSInfo ysc_emlrtRSI{
    22,                       // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo atc_emlrtRSI{
    31,                       // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo btc_emlrtRSI{
    32,                       // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo ctc_emlrtRSI{
    35,                       // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo dtc_emlrtRSI{
    38,                       // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo etc_emlrtRSI{
    43,                       // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo ftc_emlrtRSI{
    52,                       // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo gtc_emlrtRSI{
    53,                       // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo htc_emlrtRSI{
    65,                       // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo itc_emlrtRSI{
    142,                      // lineNo
    "validateAndParseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo duc_emlrtRSI{
    753,                  // lineNo
    "imageviewset/poses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRSInfo euc_emlrtRSI{
    754,                  // lineNo
    "imageviewset/poses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRSInfo fuc_emlrtRSI{
    755,                  // lineNo
    "imageviewset/poses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRSInfo guc_emlrtRSI{
    757,                  // lineNo
    "imageviewset/poses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

static emlrtRSInfo huc_emlrtRSI{
    42,         // lineNo
    "ismember", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

static emlrtRSInfo iuc_emlrtRSI{
    39,                                                // lineNo
    "bundleAdjustmentValidation/validateFixedViewIDs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\bundleAdjustmentValidation.m" // pathName
};

static emlrtRSInfo juc_emlrtRSI{
    238,                            // lineNo
    "convertFixedViewIDsToIndices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRTEInfo sg_emlrtRTEI{
    216,                   // lineNo
    1,                     // colNo
    "validatePointTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtRTEInfo tg_emlrtRTEI{
    199,                        // lineNo
    1,                          // colNo
    "validateCameraIntrinsics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtBCInfo xdb_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    240,                            // lineNo
    77,                             // colNo
    "",                             // aName
    "convertFixedViewIDsToIndices", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtRTEInfo ug_emlrtRTEI{
    240,                            // lineNo
    9,                              // colNo
    "convertFixedViewIDsToIndices", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtRTEInfo dh_emlrtRTEI{
    386,                   // lineNo
    1,                     // colNo
    "validateImagePoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtDCInfo rd_emlrtDCI{
    41,                       // lineNo
    33,                       // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    4    // checkKind
};

static emlrtRTEInfo nh_emlrtRTEI{
    52,                       // lineNo
    13,                       // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtBCInfo ckb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    60,                       // lineNo
    29,                       // colNo
    "",                       // aName
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtBCInfo dkb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    60,                       // lineNo
    36,                       // colNo
    "",                       // aName
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtECInfo if_emlrtECI{
    -1,                       // nDims
    60,                       // lineNo
    13,                       // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtBCInfo ekb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    48,                       // lineNo
    49,                       // colNo
    "",                       // aName
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtBCInfo fkb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    49,                       // lineNo
    52,                       // colNo
    "",                       // aName
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtBCInfo gkb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    756,                  // lineNo
    39,                   // colNo
    "",                   // aName
    "imageviewset/poses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo hkb_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    239,                            // lineNo
    39,                             // colNo
    "",                             // aName
    "convertFixedViewIDsToIndices", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtBCInfo ikb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    60,                       // lineNo
    85,                       // colNo
    "",                       // aName
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtDCInfo sd_emlrtDCI{
    60,                       // lineNo
    85,                       // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    1    // checkKind
};

static emlrtBCInfo jkb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    53,                       // lineNo
    69,                       // colNo
    "",                       // aName
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtBCInfo kkb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    64,                       // lineNo
    49,                       // colNo
    "",                       // aName
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtRTEInfo uwb_emlrtRTEI{
    75,                       // lineNo
    9,                        // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtRTEInfo xxb_emlrtRTEI{
    114,                      // lineNo
    13,                       // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtRTEInfo yxb_emlrtRTEI{
    115,                      // lineNo
    35,                       // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtRTEInfo adc_emlrtRTEI{
    31,                       // lineNo
    9,                        // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtRTEInfo bdc_emlrtRTEI{
    41,                       // lineNo
    9,                        // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtRTEInfo cdc_emlrtRTEI{
    60,                       // lineNo
    13,                       // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtRTEInfo ddc_emlrtRTEI{
    64,                       // lineNo
    9,                        // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtRTEInfo edc_emlrtRTEI{
    43,         // lineNo
    9,          // colNo
    "ismember", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pName
};

static emlrtRTEInfo fdc_emlrtRTEI{
    762,            // lineNo
    44,             // colNo
    "imageviewset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pName
};

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace bundleAdjust {
int32_T validateAndParseInputs(
    const emlrtStack &sp, const array<real32_T, 2U> &varargin_1,
    const pointTrack &varargin_2, const table &varargin_3,
    cameraIntrinsics **varargin_4, array<real_T, 2U> &xyzPoints,
    array<real_T, 2U> &measurements, sparse &visibility,
    uint32_T cameraPoses_ViewId_data[],
    b_rigidtform3d &cameraPoses_AbsolutePose,
    char_T cameraPoses_VariableNames_f1[6],
    char_T cameraPoses_VariableNames_f2[12], real_T fixedCameraIndex_data[],
    int32_T &fixedCameraIndex_size)
{
  static real_T dv[2]{0.0, 2.0};
  static const char_T b_cv[6]{'V', 'i', 'e', 'w', 'I', 'd'};
  c_table t;
  matlab::internal::coder::tabular::b_private::varNamesDim mjd_emlrtRSI;
  array<images::geotrans::internal::b_rigidtform3dImpl, 2U> dataArray;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T cameraPoses_ViewId_size;
  int32_T ia_data;
  int32_T ib_size;
  int32_T n;
  uint32_T c_data;
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
  dv[0U] = rtNaN;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  for (ib_size = 0; ib_size < 6; ib_size++) {
    cameraPoses_VariableNames_f1[ib_size] = b_cv[ib_size];
  }
  for (ib_size = 0; ib_size < 12; ib_size++) {
    cameraPoses_VariableNames_f2[ib_size] = cv6[ib_size];
  }
  st.site = &msb_emlrtRSI;
  b_st.site = &nsb_emlrtRSI;
  c_st.site = &usb_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  p = true;
  ib_size = varargin_1.size(0) * 3;
  ia_data = 0;
  exitg1 = false;
  while ((!exitg1) && (ia_data <= ib_size - 1)) {
    if ((!muSingleScalarIsInf(varargin_1[ia_data])) &&
        (!muSingleScalarIsNaN(varargin_1[ia_data]))) {
      ia_data++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:bundleAdjustment:expectedFinite", 3, 4, 9, "xyzPoints");
  }
  d_st.site = &be_emlrtRSI;
  if (varargin_1.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &kc_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedNonempty",
        "MATLAB:bundleAdjustment:expectedNonempty", 3, 4, 9, "xyzPoints");
  }
  ia_data = varargin_1.size(0);
  xyzPoints.set_size(&uwb_emlrtRTEI, &b_st, 3, varargin_1.size(0));
  for (ib_size = 0; ib_size < ia_data; ib_size++) {
    xyzPoints[3 * ib_size] = varargin_1[ib_size];
    xyzPoints[3 * ib_size + 1] = varargin_1[ib_size + varargin_1.size(0)];
    xyzPoints[3 * ib_size + 2] = varargin_1[ib_size + varargin_1.size(0) * 2];
  }
  b_st.site = &osb_emlrtRSI;
  b_st.site = &psb_emlrtRSI;
  c_st.site = &vsb_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  ib_size = varargin_2.Data.size(0) * varargin_2.Data.size(1);
  if (ib_size == 0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &kc_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedNonempty",
        "MATLAB:bundleAdjustment:expectedNonempty", 3, 4, 11, "pointTracks");
  }
  if (ib_size != xyzPoints.size(1)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &sg_emlrtRTEI,
                                  "vision:sfm:unmatchedXYZTrack",
                                  "vision:sfm:unmatchedXYZTrack", 0);
  }
  b_st.site = &qsb_emlrtRSI;
  c_st.site = &wsb_emlrtRSI;
  d_st.site = &xab_emlrtRSI;
  c_st.site = &xsb_emlrtRSI;
  d_st.site = &ysb_emlrtRSI;
  e_st.site = &be_emlrtRSI;
  p = true;
  for (ia_data = 0; ia_data < 2; ia_data++) {
    if (p) {
      real_T d;
      d = dv[ia_data];
      if (!(d != d)) {
        int8_T unnamed_idx_0;
        unnamed_idx_0 = 1;
        if (ia_data + 1 == 1) {
          unnamed_idx_0 = 2;
        }
        if (ia_data + 1 == 2) {
          unnamed_idx_0 = 2;
        }
        if (unnamed_idx_0 != 2) {
          p = false;
        }
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:bundleAdjustment:incorrectSize", 3, 4, 11, "cameraPoses");
  }
  d_st.site = &atb_emlrtRSI;
  d_st.site = &btb_emlrtRSI;
  e_st.site = &be_emlrtRSI;
  p = true;
  ia_data = 0;
  exitg1 = false;
  while ((!exitg1) && (ia_data <= 1)) {
    if (varargin_3.data.f1[ia_data] > 0U) {
      ia_data++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:bundleAdjustment:expectedPositive", 3, 4, 7, "ViewIds");
  }
  d_st.site = &ctb_emlrtRSI;
  varargin_3.parenReference(d_st, t);
  cameraPoses_AbsolutePose = t.data.f2[0];
  d_st.site = &dtb_emlrtRSI;
  d_st.site = &etb_emlrtRSI;
  e_st.site = &htb_emlrtRSI;
  if (varargin_3.rowDim.length < 2.0) {
    emlrtErrorWithMessageIdR2018a(&e_st, &pd_emlrtRTEI,
                                  "MATLAB:table:RowIndexOutOfRange",
                                  "MATLAB:table:RowIndexOutOfRange", 0);
  }
  e_st.site = &itb_emlrtRSI;
  matlab::internal::coder::tabular::b_private::c_varNamesDim::subs2inds(
      e_st, mjd_emlrtRSI);
  ia_data = varargin_3.data.f1.size(0);
  if (varargin_3.data.f1.size(0) < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, varargin_3.data.f1.size(0),
                                  &ev_emlrtBCI, &d_st);
  }
  if (varargin_3.data.f2.size(0) - 1 < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 0, varargin_3.data.f2.size(0) - 1,
                                  &gj_emlrtBCI, &d_st);
  }
  d_st.site = &ftb_emlrtRSI;
  ib_size = t.data.f2[0].Data.size(1);
  if (t.data.f2[0].Data.size(1) < 2) {
    dataArray.set_size(&qkb_emlrtRTEI, &d_st, 1, 2);
    for (n = 0; n < ib_size; n++) {
      if (n > 1) {
        emlrtDynamicBoundsCheckR2012b(n, 0, 1, &mr_emlrtBCI, &d_st);
      }
      if (n > t.data.f2[0].Data.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(n, 0, t.data.f2[0].Data.size(1) - 1,
                                      &lr_emlrtBCI, &d_st);
      }
      dataArray[n] = t.data.f2[0].Data[n];
    }
    ib_size = varargin_3.data.f2[1].Data.size(1);
    if (ib_size - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, ib_size - 1, &cr_emlrtBCI, &d_st);
    }
    dataArray[1] = varargin_3.data.f2[1].Data[0];
    cameraPoses_AbsolutePose.Data.set_size(&rkb_emlrtRTEI, &d_st, 1, 2);
    for (ib_size = 0; ib_size < 2; ib_size++) {
      cameraPoses_AbsolutePose.Data[ib_size] = dataArray[ib_size];
    }
  } else {
    ib_size = varargin_3.data.f2[1].Data.size(1);
    if (ib_size - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, ib_size - 1, &dr_emlrtBCI, &d_st);
    }
    if (t.data.f2[0].Data.size(1) - 1 < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 0, t.data.f2[0].Data.size(1) - 1,
                                    &kr_emlrtBCI, &d_st);
    }
    cameraPoses_AbsolutePose.Data[1] = varargin_3.data.f2[1].Data[0];
  }
  cameraPoses_ViewId_size = varargin_3.data.f1.size(0);
  for (ib_size = 0; ib_size < ia_data; ib_size++) {
    cameraPoses_ViewId_data[ib_size] = varargin_3.data.f1[ib_size];
  }
  d_st.site = &gtb_emlrtRSI;
  b_st.site = &rsb_emlrtRSI;
  c_st.site = &mtb_emlrtRSI;
  n = (*varargin_4)->cameraIntrinsicsArrayData.size(0) *
      (*varargin_4)->cameraIntrinsicsArrayData.size(1);
  c_st.site = &ntb_emlrtRSI;
  p = ((*varargin_4)->cameraIntrinsicsArrayData.size(0) *
           (*varargin_4)->cameraIntrinsicsArrayData.size(1) ==
       1);
  if ((!p) && (n != 2)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &tg_emlrtRTEI,
                                  "vision:sfm:unmatchedParamsPoses",
                                  "vision:sfm:unmatchedParamsPoses", 0);
  }
  b_st.site = &ssb_emlrtRSI;
  codegen::bundleAdjust::c_convertToMeasurementsAndVisib(
      b_st, varargin_3, varargin_2, measurements, visibility);
  b_st.site = &tsb_emlrtRSI;
  c_st.site = &dub_emlrtRSI;
  d_st.site = &bdb_emlrtRSI;
  p = false;
  ia_data = 0;
  exitg1 = false;
  while ((!exitg1) && (ia_data < 2)) {
    if (varargin_3.data.f1[ia_data] == 1U) {
      p = true;
      exitg1 = true;
    } else {
      ia_data++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &ug_emlrtRTEI,
                                  "vision:viewSet:missingViewId",
                                  "vision:viewSet:missingViewId", 2, 13, 1U);
  }
  c_st.site = &eub_emlrtRSI;
  d_st.site = &dfb_emlrtRSI;
  e_st.site = &efb_emlrtRSI;
  do_vectors(
      e_st, (const uint32_T *)varargin_3.data.f1.data(),
      (*(int32_T(*)[1])((array<uint32_T, 1U> *)&varargin_3.data.f1)->size())[0],
      (uint32_T *)&c_data, (int32_T *)&ia_data, fixedCameraIndex_size,
      (int32_T *)&n, ib_size);
  for (ib_size = 0; ib_size < fixedCameraIndex_size; ib_size++) {
    fixedCameraIndex_data[0] = ia_data;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return cameraPoses_ViewId_size;
}

int32_T validateAndParseInputs(
    const emlrtStack &sp, const worldpointset &varargin_1,
    const imageviewset &varargin_2, const array<uint32_T, 1U> &varargin_3,
    cameraIntrinsics **varargin_4, const uint32_T varargin_6_data[],
    int32_T varargin_6_size, array<real_T, 2U> &xyzPoints,
    array<real_T, 2U> &measurements, sparse &visibility,
    array<uint32_T, 1U> &cameraPoses_ViewId,
    b_rigidtform3d &cameraPoses_AbsolutePose, real_T fixedCameraIndex_data[],
    array<real_T, 1U> &varargout_3)
{
  b_rigidtform3d b_expl_temp;
  array<b_ORBPoints, 1U> refinedViewTable_Points;
  array<cell_wrap_25, 1U> a__1;
  array<cell_wrap_25, 1U> featureIdxAll;
  array<cell_wrap_8, 2U> d_expl_temp;
  array<cell_wrap_8, 1U> c_expl_temp;
  array<real_T, 2U> b_r;
  array<real_T, 1U> idx;
  array<int32_T, 1U> ib;
  array<int32_T, 1U> iloc;
  array<uint32_T, 1U> b_varargin_6_data;
  array<uint32_T, 1U> c_varargin_6_data;
  array<uint32_T, 1U> expl_temp;
  array<uint32_T, 1U> viewIds;
  array<boolean_T, 1U> b_missingViewIdx_data;
  array<boolean_T, 1U> tf;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  real_T b_index;
  int32_T b_iv[2];
  int32_T a;
  int32_T b_k;
  int32_T fixedCameraIndex_size;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int8_T tmp_data[10];
  boolean_T missingViewIdx_data[10];
  boolean_T n;
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
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &msb_emlrtRSI;
  b_st.site = &ysc_emlrtRSI;
  loop_ub = varargin_3.size(0);
  viewIds.set_size(&adc_emlrtRTEI, &st, varargin_3.size(0));
  for (i = 0; i < loop_ub; i++) {
    viewIds[i] = varargin_3[i];
  }
  b_st.site = &atc_emlrtRSI;
  bundleAdjustmentValidation::validateViewIds(b_st, viewIds);
  b_st.site = &btc_emlrtRSI;
  bundleAdjustmentValidation::checkIfViewIdsMissing(b_st, viewIds, varargin_1,
                                                    varargin_2);
  b_st.site = &ctc_emlrtRSI;
  c_st.site = &akc_emlrtRSI;
  fixedCameraIndex_size = (*varargin_4)->cameraIntrinsicsArrayData.size(0) *
                          (*varargin_4)->cameraIntrinsicsArrayData.size(1);
  c_st.site = &ntb_emlrtRSI;
  n = ((*varargin_4)->cameraIntrinsicsArrayData.size(0) *
           (*varargin_4)->cameraIntrinsicsArrayData.size(1) ==
       1);
  if ((!n) && (fixedCameraIndex_size != viewIds.size(0))) {
    emlrtErrorWithMessageIdR2018a(&b_st, &tg_emlrtRTEI,
                                  "vision:sfm:unmatchedParamsPoses",
                                  "vision:sfm:unmatchedParamsPoses", 0);
  }
  b_st.site = &dtc_emlrtRSI;
  varargin_1.findVisibilityOfView(b_st, varargin_3, a__1, featureIdxAll,
                                  varargout_3, visibility);
  i = visibility.colidx[visibility.colidx.size(0) - 1] - 1;
  if (i < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(i), &rd_emlrtDCI, &st);
  }
  measurements.set_size(&bdc_emlrtRTEI, &st, 2, i);
  fixedCameraIndex_size = i << 1;
  for (i1 = 0; i1 < fixedCameraIndex_size; i1++) {
    measurements[i1] = 0.0;
  }
  b_st.site = &etc_emlrtRSI;
  varargin_2.findView(b_st, varargin_3, expl_temp, b_expl_temp, c_expl_temp,
                      refinedViewTable_Points);
  b_index = 1.0;
  for (int32_T k{0}; k < loop_ub; k++) {
    real_T d;
    real_T ex;
    int32_T last;
    boolean_T exitg1;
    if (k > featureIdxAll.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(k, 0, featureIdxAll.size(0) - 1,
                                    &ekb_emlrtBCI, &st);
    }
    if (k > refinedViewTable_Points.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(k, 0, refinedViewTable_Points.size(0) - 1,
                                    &fkb_emlrtBCI, &st);
    }
    b_st.site = &ftc_emlrtRSI;
    c_st.site = &mbb_emlrtRSI;
    d_st.site = &nbb_emlrtRSI;
    e_st.site = &obb_emlrtRSI;
    last = featureIdxAll[k].f1.size(0);
    if (last < 1) {
      emlrtErrorWithMessageIdR2018a(
          &e_st, &m_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    f_st.site = &pbb_emlrtRSI;
    g_st.site = &qbb_emlrtRSI;
    if (last <= 2) {
      if (last == 1) {
        ex = featureIdxAll[k].f1[0];
      } else {
        ex = featureIdxAll[k].f1[1];
        if ((!(featureIdxAll[k].f1[0] < ex)) &&
            ((!muDoubleScalarIsNaN(featureIdxAll[k].f1[0])) ||
             muDoubleScalarIsNaN(ex))) {
          ex = featureIdxAll[k].f1[0];
        }
      }
    } else {
      h_st.site = &if_emlrtRSI;
      if (!muDoubleScalarIsNaN(featureIdxAll[k].f1[0])) {
        fixedCameraIndex_size = 1;
      } else {
        fixedCameraIndex_size = 0;
        i_st.site = &jf_emlrtRSI;
        if (last > 2147483646) {
          j_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(j_st);
        }
        b_k = 2;
        exitg1 = false;
        while ((!exitg1) && (b_k <= last)) {
          if (!muDoubleScalarIsNaN(featureIdxAll[k].f1[b_k - 1])) {
            fixedCameraIndex_size = b_k;
            exitg1 = true;
          } else {
            b_k++;
          }
        }
      }
      if (fixedCameraIndex_size == 0) {
        ex = featureIdxAll[k].f1[0];
      } else {
        h_st.site = &hf_emlrtRSI;
        ex = featureIdxAll[k].f1[fixedCameraIndex_size - 1];
        a = fixedCameraIndex_size + 1;
        i_st.site = &kf_emlrtRSI;
        if ((fixedCameraIndex_size + 1 <= last) && (last > 2147483646)) {
          j_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(j_st);
        }
        for (b_k = a; b_k <= last; b_k++) {
          d = featureIdxAll[k].f1[b_k - 1];
          if (ex < d) {
            ex = d;
          }
        }
      }
    }
    i1 = refinedViewTable_Points[k].pLocation.size(0);
    if (i1 < ex) {
      b_st.site = &gtc_emlrtRSI;
      c_st.site = &mbb_emlrtRSI;
      d_st.site = &nbb_emlrtRSI;
      e_st.site = &obb_emlrtRSI;
      f_st.site = &pbb_emlrtRSI;
      g_st.site = &qbb_emlrtRSI;
      if (last <= 2) {
        if (last == 1) {
          ex = featureIdxAll[k].f1[0];
        } else {
          ex = featureIdxAll[k].f1[1];
          if ((!(featureIdxAll[k].f1[0] < ex)) &&
              ((!muDoubleScalarIsNaN(featureIdxAll[k].f1[0])) ||
               muDoubleScalarIsNaN(ex))) {
            ex = featureIdxAll[k].f1[0];
          }
        }
      } else {
        h_st.site = &if_emlrtRSI;
        if (!muDoubleScalarIsNaN(featureIdxAll[k].f1[0])) {
          fixedCameraIndex_size = 1;
        } else {
          fixedCameraIndex_size = 0;
          i_st.site = &jf_emlrtRSI;
          if (last > 2147483646) {
            j_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(j_st);
          }
          b_k = 2;
          exitg1 = false;
          while ((!exitg1) && (b_k <= last)) {
            if (!muDoubleScalarIsNaN(featureIdxAll[k].f1[b_k - 1])) {
              fixedCameraIndex_size = b_k;
              exitg1 = true;
            } else {
              b_k++;
            }
          }
        }
        if (fixedCameraIndex_size == 0) {
          ex = featureIdxAll[k].f1[0];
        } else {
          h_st.site = &hf_emlrtRSI;
          ex = featureIdxAll[k].f1[fixedCameraIndex_size - 1];
          a = fixedCameraIndex_size + 1;
          i_st.site = &kf_emlrtRSI;
          if ((fixedCameraIndex_size + 1 <= last) && (last > 2147483646)) {
            j_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(j_st);
          }
          for (b_k = a; b_k <= last; b_k++) {
            d = featureIdxAll[k].f1[b_k - 1];
            if (ex < d) {
              ex = d;
            }
          }
        }
      }
      if (k + 1 > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, loop_ub, &jkb_emlrtBCI, &st);
      }
      emlrtErrorWithMessageIdR2018a(
          &st, &nh_emlrtRTEI, "vision:sfm:notEnoughFeaturePoints",
          "vision:sfm:notEnoughFeaturePoints", 4, 13, varargin_3[k], 6, ex);
    }
    d = static_cast<real_T>(last) + b_index;
    if (b_index > d - 1.0) {
      b_k = 0;
      a = 0;
    } else {
      if ((static_cast<int32_T>(b_index) < 1) ||
          (static_cast<int32_T>(b_index) > i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_index), 1, i,
                                      &ckb_emlrtBCI, &st);
      }
      b_k = static_cast<int32_T>(b_index) - 1;
      if ((static_cast<int32_T>(d - 1.0) < 1) ||
          (static_cast<int32_T>(d - 1.0) > i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d - 1.0), 1, i,
                                      &dkb_emlrtBCI, &st);
      }
      a = static_cast<int32_T>(d - 1.0);
    }
    fixedCameraIndex_size = refinedViewTable_Points[k].pLocation.size(1);
    b_r.set_size(&cdc_emlrtRTEI, &st, fixedCameraIndex_size, last);
    for (int32_T i2{0}; i2 < last; i2++) {
      for (int32_T i3{0}; i3 < fixedCameraIndex_size; i3++) {
        b_index = featureIdxAll[k].f1[i2];
        if (b_index != static_cast<int32_T>(muDoubleScalarFloor(b_index))) {
          emlrtIntegerCheckR2012b(b_index, &sd_emlrtDCI, &st);
        }
        if ((static_cast<int32_T>(b_index) < 1) ||
            (static_cast<int32_T>(b_index) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_index), 1, i1,
                                        &ikb_emlrtBCI, &st);
        }
        b_r[i3 + b_r.size(0) * i2] =
            refinedViewTable_Points[k]
                .pLocation[(static_cast<int32_T>(b_index) +
                            refinedViewTable_Points[k].pLocation.size(0) * i3) -
                           1];
      }
    }
    b_iv[0] = 2;
    fixedCameraIndex_size = a - b_k;
    b_iv[1] = fixedCameraIndex_size;
    emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, b_r.size(), 2, &if_emlrtECI,
                                  &st);
    for (i1 = 0; i1 < fixedCameraIndex_size; i1++) {
      a = b_k + i1;
      measurements[2 * a] = b_r[2 * i1];
      measurements[2 * a + 1] = b_r[2 * i1 + 1];
    }
    b_index = d;
  }
  fixedCameraIndex_size = varargin_1.WorldPoints.size(0);
  loop_ub = varargout_3.size(0);
  xyzPoints.set_size(&ddc_emlrtRTEI, &st, 3, varargout_3.size(0));
  for (i = 0; i < loop_ub; i++) {
    i1 = static_cast<int32_T>(varargout_3[i]);
    if ((i1 < 1) || (i1 > fixedCameraIndex_size)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, fixedCameraIndex_size, &kkb_emlrtBCI,
                                    &st);
    }
    xyzPoints[3 * i] = varargin_1.WorldPoints[i1 - 1];
    xyzPoints[3 * i + 1] =
        varargin_1.WorldPoints[(i1 + varargin_1.WorldPoints.size(0)) - 1];
    xyzPoints[3 * i + 2] =
        varargin_1.WorldPoints[(i1 + varargin_1.WorldPoints.size(0) * 2) - 1];
  }
  b_st.site = &htc_emlrtRSI;
  c_st.site = &duc_emlrtRSI;
  ViewSetBaseImpl::checkViewIds(c_st, viewIds);
  c_st.site = &euc_emlrtRSI;
  varargin_2.checkIfViewIsMissing(c_st, viewIds);
  c_st.site = &fuc_emlrtRSI;
  d_st.site = &huc_emlrtRSI;
  d_isMember(d_st, viewIds, varargin_2.ViewId, tf, iloc);
  loop_ub = iloc.size(0);
  idx.set_size(&edc_emlrtRTEI, &c_st, iloc.size(0));
  for (i = 0; i < loop_ub; i++) {
    idx[i] = iloc[i];
  }
  fixedCameraIndex_size = varargin_2.ViewId.size(0);
  cameraPoses_ViewId.set_size(&fdc_emlrtRTEI, &b_st, iloc.size(0));
  for (i = 0; i < loop_ub; i++) {
    i1 = static_cast<int32_T>(idx[i]);
    if ((i1 < 1) || (i1 > fixedCameraIndex_size)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, fixedCameraIndex_size, &gkb_emlrtBCI,
                                    &b_st);
    }
    cameraPoses_ViewId[i] = varargin_2.ViewId[i1 - 1];
  }
  c_st.site = &guc_emlrtRSI;
  varargin_2.imageviewsetBase_get_Views(c_st, expl_temp, d_expl_temp,
                                        refinedViewTable_Points, b_expl_temp);
  c_st.site = &guc_emlrtRSI;
  b_expl_temp.parenReference(c_st, idx, cameraPoses_AbsolutePose);
  b_st.site = &itc_emlrtRSI;
  if (varargin_6_size != 0) {
    c_st.site = &iuc_emlrtRSI;
    d_st.site = &be_emlrtRSI;
  }
  if (varargin_6_size != 0) {
    b_st.site = &tsb_emlrtRSI;
    c_st.site = &dub_emlrtRSI;
    b_varargin_6_data.set((uint32_T *)&varargin_6_data[0], varargin_6_size);
    d_st.site = &bdb_emlrtRSI;
    b_isMember(d_st, b_varargin_6_data, cameraPoses_ViewId, tf);
    loop_ub = tf.size(0);
    fixedCameraIndex_size = tf.size(0);
    for (i = 0; i < loop_ub; i++) {
      missingViewIdx_data[i] = !tf[i];
    }
    b_missingViewIdx_data.set(&missingViewIdx_data[0], fixedCameraIndex_size);
    c_st.site = &juc_emlrtRSI;
    if (any(c_st, b_missingViewIdx_data)) {
      a = 0;
      fixedCameraIndex_size = 0;
      for (b_k = 0; b_k < loop_ub; b_k++) {
        if (missingViewIdx_data[b_k]) {
          a++;
        }
        if (missingViewIdx_data[b_k]) {
          tmp_data[fixedCameraIndex_size] = static_cast<int8_T>(b_k);
          fixedCameraIndex_size++;
        }
      }
      for (i = 0; i < a; i++) {
        int8_T i4;
        i4 = tmp_data[i];
        if (i4 > varargin_6_size - 1) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i4), 0,
                                        varargin_6_size - 1, &hkb_emlrtBCI,
                                        &b_st);
        }
      }
      if (a < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, a, &xdb_emlrtBCI, &b_st);
      }
      emlrtErrorWithMessageIdR2018a(
          &b_st, &ug_emlrtRTEI, "vision:viewSet:missingViewId",
          "vision:viewSet:missingViewId", 2, 13, varargin_6_data[tmp_data[0]]);
    }
    c_st.site = &eub_emlrtRSI;
    d_st.site = &dfb_emlrtRSI;
    c_varargin_6_data.set((uint32_T *)&varargin_6_data[0], varargin_6_size);
    e_st.site = &efb_emlrtRSI;
    b_do_vectors(e_st, cameraPoses_ViewId, c_varargin_6_data, viewIds, iloc,
                 ib);
    loop_ub = iloc.size(0);
    fixedCameraIndex_size = iloc.size(0);
    for (i = 0; i < loop_ub; i++) {
      fixedCameraIndex_data[i] = iloc[i];
    }
  } else {
    fixedCameraIndex_size = 1;
    fixedCameraIndex_data[0] = 0.0;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return fixedCameraIndex_size;
}

void validateAndParseInputs(
    const emlrtStack &sp, const array<real32_T, 2U> &varargin_1,
    const array<real32_T, 2U> &varargin_2, const c_rigidtform3d &varargin_3,
    cameraIntrinsics **varargin_4, array<real_T, 2U> &xyzPoints,
    array<real_T, 2U> &measurements, b_sparse &visibility)
{
  static real_T dv[2]{0.0, 2.0};
  array<real_T, 1U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  int32_T i;
  int32_T k;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  dv[0U] = rtNaN;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &msb_emlrtRSI;
  b_st.site = &nsb_emlrtRSI;
  c_st.site = &usb_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  p = true;
  i = varargin_1.size(0) * 3;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i - 1)) {
    if ((!muSingleScalarIsInf(varargin_1[k])) &&
        (!muSingleScalarIsNaN(varargin_1[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:bundleAdjustmentMotion:expectedFinite", 3, 4, 9, "xyzPoints");
  }
  d_st.site = &be_emlrtRSI;
  if (varargin_1.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &kc_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedNonempty",
        "MATLAB:bundleAdjustmentMotion:expectedNonempty", 3, 4, 9, "xyzPoints");
  }
  k = varargin_1.size(0);
  xyzPoints.set_size(&uwb_emlrtRTEI, &b_st, 3, varargin_1.size(0));
  for (i = 0; i < k; i++) {
    xyzPoints[3 * i] = varargin_1[i];
    xyzPoints[3 * i + 1] = varargin_1[i + varargin_1.size(0)];
    xyzPoints[3 * i + 2] = varargin_1[i + varargin_1.size(0) * 2];
  }
  b_st.site = &osb_emlrtRSI;
  b_st.site = &sjc_emlrtRSI;
  c_st.site = &wjc_emlrtRSI;
  d_st.site = &xk_emlrtRSI;
  e_st.site = &yk_emlrtRSI;
  f_st.site = &al_emlrtRSI;
  g_st.site = &xf_emlrtRSI;
  h_st.site = &be_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    if (p) {
      real_T d;
      d = dv[k];
      if ((!(d != d)) && (varargin_2.size(k) != 2)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &h_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:bundleAdjustmentMotion:incorrectSize", 3, 4, 11, "imagePoints");
  }
  if (varargin_2.size(0) != xyzPoints.size(1)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &dh_emlrtRTEI,
                                  "vision:sfm:unmatchedXYZImagePoints",
                                  "vision:sfm:unmatchedXYZImagePoints", 0);
  }
  b_st.site = &tjc_emlrtRSI;
  c_st.site = &xjc_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  if (varargin_3.Data.size[0] * varargin_3.Data.size[1] != 1) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &ob_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedScalar",
        "MATLAB:bundleAdjustmentMotion:expectedScalar", 3, 4, 12,
        "absolutePose");
  }
  d_st.site = &be_emlrtRSI;
  b_st.site = &ujc_emlrtRSI;
  c_st.site = &yjc_emlrtRSI;
  d_st.site = &bkc_emlrtRSI;
  e_st.site = &be_emlrtRSI;
  f_st.site = &wr_emlrtRSI;
  p = ((*varargin_4)->cameraIntrinsicsArrayData.size(0) *
           (*varargin_4)->cameraIntrinsicsArrayData.size(1) ==
       1);
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &ob_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedScalar",
        "MATLAB:bundleAdjustmentMotion:expectedScalar", 3, 4, 5, "input");
  }
  c_st.site = &akc_emlrtRSI;
  k = (*varargin_4)->cameraIntrinsicsArrayData.size(0) *
      (*varargin_4)->cameraIntrinsicsArrayData.size(1);
  c_st.site = &ntb_emlrtRSI;
  p = ((*varargin_4)->cameraIntrinsicsArrayData.size(0) *
           (*varargin_4)->cameraIntrinsicsArrayData.size(1) ==
       1);
  if ((!p) && (k != 1)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &tg_emlrtRTEI,
                                  "vision:sfm:unmatchedParamsPoses",
                                  "vision:sfm:unmatchedParamsPoses", 0);
  }
  k = varargin_2.size(0);
  measurements.set_size(&xxb_emlrtRTEI, &st, 2, varargin_2.size(0));
  b_r.set_size(&yxb_emlrtRTEI, &st, varargin_2.size(0));
  for (i = 0; i < k; i++) {
    measurements[2 * i] = varargin_2[i];
    measurements[2 * i + 1] = varargin_2[i + varargin_2.size(0)];
    b_r[i] = 1.0;
  }
  b_st.site = &vjc_emlrtRSI;
  h_sparse(b_st, b_r, visibility);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace bundleAdjust
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (validateAndParseInputs1.cpp)
