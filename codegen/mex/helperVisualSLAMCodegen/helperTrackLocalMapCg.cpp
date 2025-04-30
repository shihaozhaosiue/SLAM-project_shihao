//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperTrackLocalMapCg.cpp
//
// Code generation for function 'helperTrackLocalMapCg'
//

// Include files
#include "helperTrackLocalMapCg.h"
#include "ORBPoints.h"
#include "acosd.h"
#include "any1.h"
#include "binaryFeatures.h"
#include "bundleAdjustmentMotion.h"
#include "cameraIntrinsics.h"
#include "div.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_setop.h"
#include "find.h"
#include "graph.h"
#include "helperVisualSLAMCodegen.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "helperVisualSLAMCodegen_mexutil.h"
#include "imageviewset.h"
#include "ismember.h"
#include "matchFeaturesInRadius.h"
#include "pose2extr.h"
#include "rigidtform3d.h"
#include "rigidtform3dImpl.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sum.h"
#include "vecnorm.h"
#include "world2img.h"
#include "worldpointset.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include "omp.h"
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo xkc_emlrtRSI{
    53,                      // lineNo
    "helperTrackLocalMapCg", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo ykc_emlrtRSI{
    57,                      // lineNo
    "helperTrackLocalMapCg", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo alc_emlrtRSI{
    58,                      // lineNo
    "helperTrackLocalMapCg", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo blc_emlrtRSI{
    59,                      // lineNo
    "helperTrackLocalMapCg", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo clc_emlrtRSI{
    60,                      // lineNo
    "helperTrackLocalMapCg", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo dlc_emlrtRSI{
    66,                      // lineNo
    "helperTrackLocalMapCg", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo elc_emlrtRSI{
    74,                      // lineNo
    "helperTrackLocalMapCg", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo flc_emlrtRSI{
    115,                     // lineNo
    "helperTrackLocalMapCg", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo glc_emlrtRSI{
    179,                               // lineNo
    "updateRefKeyFrameAndLocalPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo hlc_emlrtRSI{
    175,                               // lineNo
    "updateRefKeyFrameAndLocalPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo ilc_emlrtRSI{
    149,                               // lineNo
    "updateRefKeyFrameAndLocalPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo jlc_emlrtRSI{
    147,                               // lineNo
    "updateRefKeyFrameAndLocalPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo klc_emlrtRSI{
    146,                               // lineNo
    "updateRefKeyFrameAndLocalPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo llc_emlrtRSI{
    132,                               // lineNo
    "updateRefKeyFrameAndLocalPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo mlc_emlrtRSI{
    57,     // lineNo
    "mode", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\mode.m" // pathName
};

static emlrtRSInfo nlc_emlrtRSI{
    93,          // lineNo
    "arraymode", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\mode.m" // pathName
};

static emlrtRSInfo olc_emlrtRSI{
    148,          // lineNo
    "vectormode", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\mode.m" // pathName
};

static emlrtRSInfo nnc_emlrtRSI{
    200,           // lineNo
    "getFeatures", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo onc_emlrtRSI{
    204,           // lineNo
    "getFeatures", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo pnc_emlrtRSI{
    205,           // lineNo
    "getFeatures", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo qnc_emlrtRSI{
    206,           // lineNo
    "getFeatures", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo
    rnc_emlrtRSI{
        18,            // lineNo
        "ifWhileCond", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\ifWhileCond.m" // pathName
    };

static emlrtRSInfo
    snc_emlrtRSI{
        31,            // lineNo
        "checkNoNaNs", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\ifWhileCond.m" // pathName
    };

static emlrtRSInfo tnc_emlrtRSI{
    238,                      // lineNo
    "removeOutlierMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo unc_emlrtRSI{
    241,                      // lineNo
    "removeOutlierMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo vnc_emlrtRSI{
    248,                      // lineNo
    "removeOutlierMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo wnc_emlrtRSI{
    249,                      // lineNo
    "removeOutlierMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo xnc_emlrtRSI{
    255,                      // lineNo
    "removeOutlierMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo ync_emlrtRSI{
    260,                      // lineNo
    "removeOutlierMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo aoc_emlrtRSI{
    272,                      // lineNo
    "removeOutlierMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo boc_emlrtRSI{
    273,                      // lineNo
    "removeOutlierMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo koc_emlrtRSI{
    16,     // lineNo
    "ceil", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\ceil.m" // pathName
};

static emlrtBCInfo rp_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    165,                               // lineNo
    48,                                // colNo
    "pointIdx",                        // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo sp_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    172,                               // lineNo
    73,                                // colNo
    "pointIdx",                        // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo tp_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    178,                               // lineNo
    28,                                // colNo
    "pointIdx",                        // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo up_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    177,                               // lineNo
    43,                                // colNo
    "pointIdx",                        // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo vp_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    164,                               // lineNo
    30,                                // colNo
    "pointIdx",                        // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo wp_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    159,                               // lineNo
    41,                                // colNo
    "pointIdx",                        // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo xp_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    143,                               // lineNo
    46,                                // colNo
    "viewIds",                         // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo yp_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    142,                               // lineNo
    29,                                // colNo
    "viewIds",                         // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo aq_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    136,                               // lineNo
    40,                                // colNo
    "viewIds",                         // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo bq_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    138,                               // lineNo
    29,                                // colNo
    "viewIds",                         // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo cq_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    133,                               // lineNo
    24,                                // colNo
    "viewIds",                         // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtECInfo jd_emlrtECI{
    -1,                                // nDims
    165,                               // lineNo
    5,                                 // colNo
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtBCInfo dq_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    165,                               // lineNo
    21,                                // colNo
    "pointIdxCol",                     // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo eq_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    165,                               // lineNo
    17,                                // colNo
    "pointIdxCol",                     // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtECInfo kd_emlrtECI{
    -1,                                // nDims
    143,                               // lineNo
    5,                                 // colNo
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtBCInfo fq_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    143,                               // lineNo
    20,                                // colNo
    "viewIdsCol",                      // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo gq_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    143,                               // lineNo
    16,                                // colNo
    "viewIdsCol",                      // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo nb_emlrtDCI{
    139,                               // lineNo
    35,                                // colNo
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo lq_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    1116,                                 // lineNo
    38,                                   // colNo
    "",                                   // aName
    "worldpointset/findVisibilityOfView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo nq_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    153,                               // lineNo
    25,                                // colNo
    "localKeyFrameIds",                // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo oq_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    154,                               // lineNo
    21,                                // colNo
    "keyFrameIdx",                     // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo ob_emlrtDCI{
    161,                               // lineNo
    36,                                // colNo
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo pq_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    171,                               // lineNo
    24,                                // colNo
    "keyFrameIdx",                     // aName
    "updateRefKeyFrameAndLocalPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo rr_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    194,           // lineNo
    28,            // colNo
    "mapPointIdx", // aName
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo qb_emlrtDCI{
    196,           // lineNo
    54,            // colNo
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo sr_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    196,                              // lineNo
    54,                               // colNo
    "mapPoints.RepresentativeViewId", // aName
    "getFeatures",                    // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo rb_emlrtDCI{
    199,           // lineNo
    45,            // colNo
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    1                                          // checkKind
};

static emlrtDCInfo sb_emlrtDCI{
    201,           // lineNo
    52,            // colNo
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo tr_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    206,           // lineNo
    34,            // colNo
    "idx",         // aName
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo ur_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    206,           // lineNo
    30,            // colNo
    "count",       // aName
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo vr_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    217,           // lineNo
    35,            // colNo
    "uIds",        // aName
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo tb_emlrtDCI{
    217,           // lineNo
    30,            // colNo
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    1                                          // checkKind
};

static emlrtDCInfo ub_emlrtDCI{
    219,           // lineNo
    46,            // colNo
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo wr_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    221,           // lineNo
    42,            // colNo
    "uIds",        // aName
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo vb_emlrtDCI{
    221,           // lineNo
    37,            // colNo
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    1                                          // checkKind
};

static emlrtDCInfo wb_emlrtDCI{
    225,           // lineNo
    34,            // colNo
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    1                                          // checkKind
};

static emlrtDCInfo xb_emlrtDCI{
    226,           // lineNo
    55,            // colNo
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo xr_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    226,           // lineNo
    17,            // colNo
    "allFeatures", // aName
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo yr_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    226,           // lineNo
    21,            // colNo
    "allFeatures", // aName
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtECInfo od_emlrtECI{
    -1,            // nDims
    226,           // lineNo
    5,             // colNo
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtBCInfo as_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    217,             // lineNo
    30,              // colNo
    "viewsFeatures", // aName
    "getFeatures",   // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo bs_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    199,             // lineNo
    45,              // colNo
    "viewsFeatures", // aName
    "getFeatures",   // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo cs_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    201,             // lineNo
    52,              // colNo
    "viewsFeatures", // aName
    "getFeatures",   // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo ds_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    221,             // lineNo
    37,              // colNo
    "viewsFeatures", // aName
    "getFeatures",   // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo es_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    219,             // lineNo
    46,              // colNo
    "viewsFeatures", // aName
    "getFeatures",   // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo fs_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    225,             // lineNo
    34,              // colNo
    "viewsFeatures", // aName
    "getFeatures",   // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo gs_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    226,             // lineNo
    55,              // colNo
    "viewsFeatures", // aName
    "getFeatures",   // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo hs_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    219,           // lineNo
    51,            // colNo
    "uIds",        // aName
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo yb_emlrtDCI{
    222,           // lineNo
    36,            // colNo
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo is_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    225,           // lineNo
    39,            // colNo
    "uIds",        // aName
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo js_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    229,           // lineNo
    27,            // colNo
    "allFeatures", // aName
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo ac_emlrtDCI{
    229,           // lineNo
    27,            // colNo
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo ks_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    226,           // lineNo
    60,            // colNo
    "uIds",        // aName
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo ls_emlrtBCI{
    -1,                                     // iFirst
    -1,                                     // iLast
    210,                                    // lineNo
    58,                                     // colNo
    "mapPoints.RepresentativeFeatureIndex", // aName
    "getFeatures",                          // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo ms_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    210,           // lineNo
    16,            // colNo
    "allIndices",  // aName
    "getFeatures", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtRTEInfo eh_emlrtRTEI{
    266,                      // lineNo
    11,                       // colNo
    "removeOutlierMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtBCInfo sfb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    266,                      // lineNo
    19,                       // colNo
    "level",                  // aName
    "removeOutlierMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtECInfo ye_emlrtECI{
    1,                        // nDims
    258,                      // lineNo
    20,                       // colNo
    "removeOutlierMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtECInfo af_emlrtECI{
    1,                        // nDims
    257,                      // lineNo
    20,                       // colNo
    "removeOutlierMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtECInfo bf_emlrtECI{
    1,                        // nDims
    248,                      // lineNo
    20,                       // colNo
    "removeOutlierMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtBCInfo tfb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    100,                     // lineNo
    47,                      // colNo
    "maxiScale",             // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo ufb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    100,                     // lineNo
    32,                      // colNo
    "miniScale",             // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtECInfo cf_emlrtECI{
    1,                       // nDims
    73,                      // lineNo
    19,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtBCInfo vfb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    237,                      // lineNo
    35,                       // colNo
    "mapPoints.WorldPoints",  // aName
    "removeOutlierMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo ed_emlrtDCI{
    237,                      // lineNo
    35,                       // colNo
    "removeOutlierMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo wfb_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    247,                          // lineNo
    47,                           // colNo
    "mapPoints.ViewingDirection", // aName
    "removeOutlierMapPoints",     // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo xfb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    253,                        // lineNo
    45,                         // colNo
    "mapPoints.DistanceLimits", // aName
    "removeOutlierMapPoints",   // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo yfb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    254,                        // lineNo
    45,                         // colNo
    "mapPoints.DistanceLimits", // aName
    "removeOutlierMapPoints",   // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo agb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    261,                      // lineNo
    7,                        // colNo
    "level",                  // aName
    "removeOutlierMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo bgb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    262,                      // lineNo
    7,                        // colNo
    "level",                  // aName
    "removeOutlierMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo cgb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    269,                      // lineNo
    21,                       // colNo
    "predictedScales",        // aName
    "removeOutlierMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo dgb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    275,                      // lineNo
    36,                       // colNo
    "predictedScales",        // aName
    "removeOutlierMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo egb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    276,                      // lineNo
    31,                       // colNo
    "viewAngles",             // aName
    "removeOutlierMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo fgb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    278,                      // lineNo
    35,                       // colNo
    "projectedPoints",        // aName
    "removeOutlierMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo ggb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    62,                      // lineNo
    33,                      // colNo
    "newMapPointIdx",        // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo hgb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    63,                      // lineNo
    32,                      // colNo
    "localFeatures",         // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo igb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    68,                      // lineNo
    45,                      // colNo
    "currFeatures.Features", // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo jgb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    69,                      // lineNo
    44,                      // colNo
    "currPoints.Location",   // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo kgb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    72,                      // lineNo
    14,                      // colNo
    "searchRadius",          // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo lgb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    79,                      // lineNo
    30,                      // colNo
    "currPoints.Scale",      // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo mgb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    80,                      // lineNo
    36,                      // colNo
    "predictedScales",       // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo ngb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    81,                      // lineNo
    29,                      // colNo
    "predictedScales",       // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo ogb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    85,                      // lineNo
    19,                      // colNo
    "currScale",             // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo pgb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    85,                      // lineNo
    37,                      // colNo
    "minScales",             // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo qgb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    88,                      // lineNo
    19,                      // colNo
    "miniScale",             // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo rgb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    86,                      // lineNo
    19,                      // colNo
    "miniScale",             // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo sgb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    91,                      // lineNo
    19,                      // colNo
    "currScale",             // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo tgb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    91,                      // lineNo
    35,                      // colNo
    "maxScales",             // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo ugb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    94,                      // lineNo
    19,                      // colNo
    "maxiScale",             // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo vgb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    92,                      // lineNo
    19,                      // colNo
    "maxiScale",             // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo wgb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    100,                     // lineNo
    17,                      // colNo
    "isGoodScale",           // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo xgb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    102,                     // lineNo
    26,                      // colNo
    "indexPairs",            // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo ygb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    104,                     // lineNo
    18,                      // colNo
    "newMapPointIdx",        // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo ahb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    105,                     // lineNo
    19,                      // colNo
    "unmatchedfeatureIdx",   // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo fd_emlrtDCI{
    106,                     // lineNo
    44,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo bhb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    106,                     // lineNo
    44,                      // colNo
    "mapPoints.WorldPoints", // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo chb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    107,                     // lineNo
    42,                      // colNo
    "currPoints.Location",   // aName
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m", // pName
    0                                          // checkKind
};

static emlrtRTEInfo mjb_emlrtRTEI{
    139,                     // lineNo
    29,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo rjb_emlrtRTEI{
    147,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo sjb_emlrtRTEI{
    148,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo tjb_emlrtRTEI{
    151,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo ujb_emlrtRTEI{
    161,                     // lineNo
    30,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo vjb_emlrtRTEI{
    179,                     // lineNo
    5,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo ukb_emlrtRTEI{
    187,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo vkb_emlrtRTEI{
    190,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo wkb_emlrtRTEI{
    200,                     // lineNo
    17,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo xkb_emlrtRTEI{
    201,                     // lineNo
    17,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo ykb_emlrtRTEI{
    201,                     // lineNo
    9,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo alb_emlrtRTEI{
    199,                     // lineNo
    9,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo blb_emlrtRTEI{
    204,                     // lineNo
    16,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo clb_emlrtRTEI{
    205,                     // lineNo
    8,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo dlb_emlrtRTEI{
    206,                     // lineNo
    22,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo elb_emlrtRTEI{
    222,                     // lineNo
    30,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo flb_emlrtRTEI{
    229,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo ayb_emlrtRTEI{
    237,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo byb_emlrtRTEI{
    246,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo cyb_emlrtRTEI{
    248,                     // lineNo
    24,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo dyb_emlrtRTEI{
    248,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo eyb_emlrtRTEI{
    253,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo fyb_emlrtRTEI{
    254,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo gyb_emlrtRTEI{
    255,                     // lineNo
    28,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo hyb_emlrtRTEI{
    257,                     // lineNo
    20,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo iyb_emlrtRTEI{
    257,                     // lineNo
    37,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo jyb_emlrtRTEI{
    263,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo kyb_emlrtRTEI{
    272,                     // lineNo
    38,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo lyb_emlrtRTEI{
    272,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo myb_emlrtRTEI{
    258,                     // lineNo
    20,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo nyb_emlrtRTEI{
    2,                       // lineNo
    5,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo oyb_emlrtRTEI{
    275,                     // lineNo
    20,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo pyb_emlrtRTEI{
    275,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo qyb_emlrtRTEI{
    276,                     // lineNo
    20,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo ryb_emlrtRTEI{
    276,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo syb_emlrtRTEI{
    62,                      // lineNo
    18,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo tyb_emlrtRTEI{
    62,                      // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo uyb_emlrtRTEI{
    63,                      // lineNo
    18,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo vyb_emlrtRTEI{
    63,                      // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo wyb_emlrtRTEI{
    65,                      // lineNo
    24,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo xyb_emlrtRTEI{
    71,                      // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo yyb_emlrtRTEI{
    69,                      // lineNo
    24,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo aac_emlrtRTEI{
    278,                     // lineNo
    19,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo bac_emlrtRTEI{
    73,                      // lineNo
    19,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo cac_emlrtRTEI{
    79,                      // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo dac_emlrtRTEI{
    80,                      // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo eac_emlrtRTEI{
    81,                      // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo fac_emlrtRTEI{
    82,                      // lineNo
    28,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo gac_emlrtRTEI{
    83,                      // lineNo
    28,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo hac_emlrtRTEI{
    97,                      // lineNo
    30,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo iac_emlrtRTEI{
    102,                     // lineNo
    15,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo jac_emlrtRTEI{
    102,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo kac_emlrtRTEI{
    104,                     // lineNo
    17,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo lac_emlrtRTEI{
    104,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo mac_emlrtRTEI{
    105,                     // lineNo
    18,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo nac_emlrtRTEI{
    105,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo oac_emlrtRTEI{
    111,                     // lineNo
    1,                       // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo pac_emlrtRTEI{
    106,                     // lineNo
    22,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRTEInfo qac_emlrtRTEI{
    107,                     // lineNo
    22,                      // colNo
    "helperTrackLocalMapCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pName
};

static emlrtRSInfo kid_emlrtRSI{
    258,                      // lineNo
    "removeOutlierMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

static emlrtRSInfo mid_emlrtRSI{
    257,                      // lineNo
    "removeOutlierMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLocalMapCg.m" // pathName
};

// Function Declarations
static void binary_expand_op_57(
    const emlrtStack &sp, coder::array<uint32_T, 2U> &in1,
    const emlrtRSInfo in2, const coder::b_binaryFeatures &in3,
    const coder::binaryFeatures &in4, const coder::ORBPoints &in5,
    const coder::array<uint32_T, 1U> &in6,
    const coder::array<real32_T, 2U> &in7, const coder::array<int32_T, 1U> &in8,
    const coder::array<real_T, 1U> &in9,
    const coder::array<real32_T, 1U> &in10);

static void binary_expand_op_58(const emlrtStack &sp,
                                coder::array<creal32_T, 1U> &in1,
                                const coder::array<real32_T, 1U> &in2,
                                const coder::array<real32_T, 1U> &in3);

static void getFeatures(const emlrtStack &sp,
                        const coder::worldpointset &mapPoints,
                        const coder::array<cell_wrap_8, 2U> &views_Features,
                        const coder::array<real_T, 1U> &mapPointIdx,
                        coder::array<uint8_T, 2U> &features);

static real_T
updateRefKeyFrameAndLocalPoints(const emlrtStack &sp,
                                const coder::worldpointset &mapPoints,
                                const coder::imageviewset &vSetKeyFrames,
                                const coder::array<real_T, 1U> &pointIndices,
                                coder::array<real_T, 1U> &localPointsIndices,
                                coder::array<uint32_T, 1U> &localKeyFrameIds);

// Function Definitions
static void binary_expand_op_57(
    const emlrtStack &sp, coder::array<uint32_T, 2U> &in1,
    const emlrtRSInfo in2, const coder::b_binaryFeatures &in3,
    const coder::binaryFeatures &in4, const coder::ORBPoints &in5,
    const coder::array<uint32_T, 1U> &in6,
    const coder::array<real32_T, 2U> &in7, const coder::array<int32_T, 1U> &in8,
    const coder::array<real_T, 1U> &in9, const coder::array<real32_T, 1U> &in10)
{
  coder::array<real32_T, 2U> b_in5;
  coder::array<real32_T, 2U> b_in7;
  coder::array<real32_T, 1U> b_in9;
  emlrtStack st;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_1_0;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  loop_ub = in6.size(0);
  b_in5.set_size(&yyb_emlrtRTEI, &sp, loop_ub, 2);
  b_loop_ub = in8.size(0);
  b_in7.set_size(&aac_emlrtRTEI, &sp, b_loop_ub, 2);
  for (int32_T i{0}; i < 2; i++) {
    for (stride_1_0 = 0; stride_1_0 < loop_ub; stride_1_0++) {
      b_in5[stride_1_0 + b_in5.size(0) * i] =
          in5.pLocation[(static_cast<int32_T>(in6[stride_1_0]) +
                         in5.pLocation.size(0) * i) -
                        1];
    }
    for (stride_1_0 = 0; stride_1_0 < b_loop_ub; stride_1_0++) {
      b_in7[stride_1_0 + b_in7.size(0) * i] =
          in7[in8[stride_1_0] + in7.size(0) * i];
    }
  }
  if (in10.size(0) == 1) {
    loop_ub = in9.size(0);
  } else {
    loop_ub = in10.size(0);
  }
  b_in9.set_size(&bac_emlrtRTEI, &sp, loop_ub);
  b_loop_ub = (in9.size(0) != 1);
  stride_1_0 = (in10.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in9[i] = static_cast<real32_T>(in9[i * b_loop_ub]) * in10[i * stride_1_0];
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::matchFeaturesInRadius(st, in3, in4, b_in5, b_in7, b_in9, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_58(const emlrtStack &sp,
                                coder::array<creal32_T, 1U> &in1,
                                const coder::array<real32_T, 1U> &in2,
                                const coder::array<real32_T, 1U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&lyb_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i].re = in2[i * stride_0_0] / in3[i * stride_1_0];
    in1[i].im = 0.0F;
  }
}

static void getFeatures(const emlrtStack &sp,
                        const coder::worldpointset &mapPoints,
                        const coder::array<cell_wrap_8, 2U> &views_Features,
                        const coder::array<real_T, 1U> &mapPointIdx,
                        coder::array<uint8_T, 2U> &features)
{
  coder::array<real_T, 2U> allIndices;
  coder::array<real_T, 2U> c_count;
  coder::array<real_T, 2U> count;
  coder::array<real_T, 1U> d_count;
  coder::array<int32_T, 1U> ii;
  coder::array<uint8_T, 2U> allFeatures;
  coder::array<boolean_T, 1U> b_count;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T d;
  real_T offset;
  int32_T b_iv[2];
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  //  Efficiently retrieve features and image points corresponding to map points
  //  denoted by mapPointIdx
  loop_ub = mapPointIdx.size(0);
  allIndices.set_size(&ukb_emlrtRTEI, &sp, 1, mapPointIdx.size(0));
  for (i = 0; i < loop_ub; i++) {
    allIndices[i] = 0.0;
  }
  //  ViewId and offset pair
  count.set_size(&vkb_emlrtRTEI, &sp, 0, 2);
  //  (ViewId, NumFeatures)
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    boolean_T y;
    if (b_i + 1 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub, &rr_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (mapPointIdx[b_i] !=
        static_cast<int32_T>(muDoubleScalarFloor(mapPointIdx[b_i]))) {
      emlrtIntegerCheckR2012b(mapPointIdx[b_i], &qb_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    i = mapPoints.RepresentativeViewId.size(0) *
        mapPoints.RepresentativeViewId.size(1);
    i1 = static_cast<int32_T>(mapPointIdx[b_i]);
    if ((i1 < 1) || (i1 > i)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i, &sr_emlrtBCI, (emlrtConstCTX)&sp);
    }
    loop_ub_tmp = count.size(0);
    if (count.size(0) == 0) {
      d = mapPoints.RepresentativeViewId[i1 - 1];
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &rb_emlrtDCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(d) - 1 < 0) ||
          (static_cast<int32_T>(d) - 1 > views_Features.size(0) - 1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d) - 1, 0,
                                      views_Features.size(0) - 1, &bs_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      count.set_size(&alb_emlrtRTEI, &sp, 1, 2);
      count[0] = mapPoints.RepresentativeViewId[i1 - 1];
      count[1] =
          views_Features[static_cast<int32_T>(
                             mapPoints.RepresentativeViewId
                                 [static_cast<int32_T>(mapPointIdx[b_i]) - 1]) -
                         1]
              .f1.size(0);
    } else {
      b_count.set_size(&wkb_emlrtRTEI, &sp, count.size(0));
      for (i = 0; i < loop_ub_tmp; i++) {
        b_count[i] = (count[i] == mapPoints.RepresentativeViewId[i1 - 1]);
      }
      st.site = &nnc_emlrtRSI;
      if (!coder::any(st, b_count)) {
        d = mapPoints.RepresentativeViewId[i1 - 1];
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &sb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(d) - 1 < 0) ||
            (static_cast<int32_T>(d) - 1 > views_Features.size(0) - 1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d) - 1, 0,
                                        views_Features.size(0) - 1,
                                        &cs_emlrtBCI, (emlrtConstCTX)&sp);
        }
        i = count.size(0) + 1;
        c_count.set_size(&xkb_emlrtRTEI, &sp, count.size(0) + 1, 2);
        for (i2 = 0; i2 < 2; i2++) {
          for (i3 = 0; i3 < loop_ub_tmp; i3++) {
            c_count[i3 + c_count.size(0) * i2] = count[i3 + count.size(0) * i2];
          }
        }
        c_count[count.size(0)] = mapPoints.RepresentativeViewId[i1 - 1];
        c_count[count.size(0) + c_count.size(0)] =
            views_Features[static_cast<int32_T>(
                               mapPoints.RepresentativeViewId
                                   [static_cast<int32_T>(mapPointIdx[b_i]) -
                                    1]) -
                           1]
                .f1.size(0);
        count.set_size(&ykb_emlrtRTEI, &sp, i, 2);
        loop_ub_tmp = c_count.size(0) << 1;
        for (i = 0; i < loop_ub_tmp; i++) {
          count[i] = c_count[i];
        }
      }
    }
    st.site = &onc_emlrtRSI;
    loop_ub_tmp = count.size(0);
    b_count.set_size(&blb_emlrtRTEI, &st, count.size(0));
    for (i = 0; i < loop_ub_tmp; i++) {
      b_count[i] = (count[i] == mapPoints.RepresentativeViewId[i1 - 1]);
    }
    b_st.site = &aq_emlrtRSI;
    coder::b_eml_find(b_st, b_count, ii);
    st.site = &pnc_emlrtRSI;
    loop_ub_tmp = ii.size(0);
    b_count.set_size(&clb_emlrtRTEI, &st, ii.size(0));
    for (i = 0; i < loop_ub_tmp; i++) {
      b_count[i] = (ii[i] > 1);
    }
    y = (b_count.size(0) != 0);
    if (y) {
      boolean_T exitg1;
      b_st.site = &rnc_emlrtRSI;
      c_st.site = &snc_emlrtRSI;
      if (b_count.size(0) > 2147483646) {
        d_st.site = &qe_emlrtRSI;
        coder::check_forloop_overflow_error(d_st);
      }
      loop_ub_tmp = 0;
      exitg1 = false;
      while ((!exitg1) && (loop_ub_tmp <= b_count.size(0) - 1)) {
        if (!b_count[loop_ub_tmp]) {
          y = false;
          exitg1 = true;
        } else {
          loop_ub_tmp++;
        }
      }
    }
    if (y) {
      if (ii.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, ii.size(0), &tr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (static_cast<real_T>(ii[0]) - 1.0 < 1.0) {
        loop_ub_tmp = 0;
      } else {
        if ((ii[0] - 1 < 1) || (ii[0] - 1 > count.size(0))) {
          emlrtDynamicBoundsCheckR2012b(ii[0] - 1, 1, count.size(0),
                                        &ur_emlrtBCI, (emlrtConstCTX)&sp);
        }
        loop_ub_tmp = ii[0] - 1;
      }
      d_count.set_size(&dlb_emlrtRTEI, &sp, loop_ub_tmp);
      for (i = 0; i < loop_ub_tmp; i++) {
        d_count[i] = count[i + count.size(0)];
      }
      st.site = &qnc_emlrtRSI;
      offset = coder::sum(st, d_count);
    } else {
      offset = 0.0;
    }
    i = mapPoints.RepresentativeFeatureIndex.size(0) *
        mapPoints.RepresentativeFeatureIndex.size(1);
    if (i1 > i) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i, &ls_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (b_i + 1 > allIndices.size(1)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, allIndices.size(1),
                                    &ms_emlrtBCI, (emlrtConstCTX)&sp);
    }
    allIndices[b_i] = mapPoints.RepresentativeFeatureIndex[i1 - 1] + offset;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  //  Concatenating features and indexing once is faster than accessing via a
  //  for loop
  offset = 0.0;
  i = count.size(0);
  if (count.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, count.size(0), &vr_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  i1 = static_cast<int32_T>(muDoubleScalarFloor(count[0]));
  if (count[0] != i1) {
    emlrtIntegerCheckR2012b(count[0], &tb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  i2 = views_Features.size(0) - 1;
  i3 = static_cast<int32_T>(count[0]) - 1;
  if ((i3 < 0) || (i3 > views_Features.size(0) - 1)) {
    emlrtDynamicBoundsCheckR2012b(i3, 0, views_Features.size(0) - 1,
                                  &as_emlrtBCI, (emlrtConstCTX)&sp);
  }
  for (int32_T b_i{0}; b_i < i; b_i++) {
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &hs_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    d = count[b_i];
    if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
      emlrtIntegerCheckR2012b(d, &ub_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d) - 1 < 0) ||
        (static_cast<int32_T>(d) - 1 > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d) - 1, 0, i2,
                                    &es_emlrtBCI, (emlrtConstCTX)&sp);
    }
    offset += static_cast<real_T>(
        views_Features[static_cast<int32_T>(count[b_i]) - 1].f1.size(0));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  if (count.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, count.size(0), &wr_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if (count[0] != i1) {
    emlrtIntegerCheckR2012b(count[0], &vb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if (i3 > views_Features.size(0) - 1) {
    emlrtDynamicBoundsCheckR2012b(i3, 0, views_Features.size(0) - 1,
                                  &ds_emlrtBCI, (emlrtConstCTX)&sp);
  }
  if (offset != static_cast<int32_T>(offset)) {
    emlrtIntegerCheckR2012b(offset, &yb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  loop_ub = views_Features[static_cast<int32_T>(count[0]) - 1].f1.size(1);
  allFeatures.set_size(&elb_emlrtRTEI, &sp, static_cast<int32_T>(offset),
                       loop_ub);
  offset = 1.0;
  for (int32_T b_i{0}; b_i < i; b_i++) {
    real_T d1;
    real_T d2;
    int32_T i4;
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &is_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    d = count[b_i];
    d1 = static_cast<int32_T>(muDoubleScalarFloor(d));
    if (d != d1) {
      emlrtIntegerCheckR2012b(d, &wb_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d) - 1 < 0) ||
        (static_cast<int32_T>(d) - 1 > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d) - 1, 0, i2,
                                    &fs_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i1 = static_cast<int32_T>(count[b_i]) - 1;
    d2 = offset +
         static_cast<real_T>(
             views_Features[static_cast<int32_T>(count[b_i]) - 1].f1.size(0));
    if (offset > d2 - 1.0) {
      i3 = 0;
      i4 = 0;
    } else {
      if ((static_cast<int32_T>(offset) < 1) ||
          (static_cast<int32_T>(offset) > allFeatures.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(offset), 1,
                                      allFeatures.size(0), &xr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i3 = static_cast<int32_T>(offset) - 1;
      if ((static_cast<int32_T>(d2 - 1.0) < 1) ||
          (static_cast<int32_T>(d2 - 1.0) > allFeatures.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2 - 1.0), 1,
                                      allFeatures.size(0), &yr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i4 = static_cast<int32_T>(d2 - 1.0);
    }
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &ks_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (d != d1) {
      emlrtIntegerCheckR2012b(d, &xb_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d) - 1 < 0) ||
        (static_cast<int32_T>(d) - 1 > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d) - 1, 0, i2,
                                    &gs_emlrtBCI, (emlrtConstCTX)&sp);
    }
    loop_ub_tmp = i4 - i3;
    b_iv[0] = loop_ub_tmp;
    b_iv[1] = loop_ub;
    emlrtSubAssignSizeCheckR2012b(
        &b_iv[0], 2,
        ((coder::array<uint8_T, 2U> *)&views_Features[i1].f1)->size(), 2,
        &od_emlrtECI, (emlrtCTX)&sp);
    for (i4 = 0; i4 < loop_ub; i4++) {
      for (int32_T i5{0}; i5 < loop_ub_tmp; i5++) {
        allFeatures[(i3 + i5) + allFeatures.size(0) * i4] =
            views_Features[i1].f1[i5 + loop_ub_tmp * i4];
      }
    }
    offset = d2;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  loop_ub_tmp = allIndices.size(1);
  features.set_size(&flb_emlrtRTEI, &sp, allIndices.size(1), loop_ub);
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      if (allIndices[i1] !=
          static_cast<int32_T>(muDoubleScalarFloor(allIndices[i1]))) {
        emlrtIntegerCheckR2012b(allIndices[i1], &ac_emlrtDCI,
                                (emlrtConstCTX)&sp);
      }
      i2 = static_cast<int32_T>(allIndices[i1]);
      if ((i2 < 1) || (i2 > allFeatures.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, allFeatures.size(0), &js_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      features[i1 + features.size(0) * i] =
          allFeatures[(i2 + allFeatures.size(0) * i) - 1];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static real_T
updateRefKeyFrameAndLocalPoints(const emlrtStack &sp,
                                const coder::worldpointset &mapPoints,
                                const coder::imageviewset &vSetKeyFrames,
                                const coder::array<real_T, 1U> &pointIndices,
                                coder::array<real_T, 1U> &localPointsIndices,
                                coder::array<uint32_T, 1U> &localKeyFrameIds)
{
  coder::b_rigidtform3d mjd_emlrtRSI;
  coder::b_rigidtform3d obj;
  coder::c_graph G;
  coder::array<coder::b_ORBPoints, 2U> localKeyFrames_Points;
  coder::array<coder::b_ORBPoints, 1U> t11_Points;
  coder::array<coder::b_rigidtform3d, 1U> rPose;
  coder::array<cell_wrap_133, 1U> viewIds;
  coder::array<cell_wrap_25, 1U> featureIndices;
  coder::array<cell_wrap_25, 1U> pointIdx;
  coder::array<cell_wrap_8, 1U> t11_Features;
  coder::array<real_T, 1U> dist;
  coder::array<real_T, 1U> viewIndex;
  coder::array<int32_T, 1U> ia;
  coder::array<int32_T, 1U> ib;
  coder::array<uint32_T, 1U> b_vSetKeyFrames;
  coder::array<boolean_T, 1U> keyFrameIdx;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T d;
  real_T numPointsRefKeyFrame;
  int32_T F;
  int32_T ftmp;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T loop_ub;
  uint32_T refKeyFrameId;
  boolean_T tf;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  //  The reference key frame has the most covisible map points
  st.site = &llc_emlrtRSI;
  mapPoints.findViewsOfWorldPoint(st, pointIndices, viewIds);
  i = viewIds.size(0) - 1;
  if (viewIds.size(0) - 1 < 0) {
    emlrtDynamicBoundsCheckR2012b(0, 0, viewIds.size(0) - 1, &cq_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  numPointsRefKeyFrame = 0.0;
  k = viewIds.size(0);
  for (int32_T b_i{0}; b_i < k; b_i++) {
    if (b_i > i) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &aq_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    numPointsRefKeyFrame += static_cast<real_T>(viewIds[b_i].f1.size(0));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  if (viewIds.size(0) - 1 < 0) {
    emlrtDynamicBoundsCheckR2012b(0, 0, viewIds.size(0) - 1, &bq_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if (numPointsRefKeyFrame != static_cast<int32_T>(numPointsRefKeyFrame)) {
    emlrtIntegerCheckR2012b(numPointsRefKeyFrame, &nb_emlrtDCI,
                            (emlrtConstCTX)&sp);
  }
  localKeyFrameIds.set_size(&mjb_emlrtRTEI, &sp,
                            static_cast<int32_T>(numPointsRefKeyFrame));
  numPointsRefKeyFrame = 1.0;
  for (int32_T b_i{0}; b_i < k; b_i++) {
    if (b_i > i) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &yp_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i1 = viewIds[b_i].f1.size(0);
    d = numPointsRefKeyFrame + static_cast<real_T>(i1);
    if (numPointsRefKeyFrame > d - 1.0) {
      ftmp = 0;
      F = 0;
    } else {
      if ((static_cast<int32_T>(numPointsRefKeyFrame) < 1) ||
          (static_cast<int32_T>(numPointsRefKeyFrame) >
           localKeyFrameIds.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(numPointsRefKeyFrame), 1,
            localKeyFrameIds.size(0), &gq_emlrtBCI, (emlrtConstCTX)&sp);
      }
      ftmp = static_cast<int32_T>(numPointsRefKeyFrame) - 1;
      if ((static_cast<int32_T>(d - 1.0) < 1) ||
          (static_cast<int32_T>(d - 1.0) > localKeyFrameIds.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d - 1.0), 1,
                                      localKeyFrameIds.size(0), &fq_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      F = static_cast<int32_T>(d - 1.0);
    }
    if (b_i > i) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &xp_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    loop_ub = F - ftmp;
    if (loop_ub != i1) {
      emlrtSubAssignSizeCheck1dR2017a(loop_ub, i1, &kd_emlrtECI,
                                      (emlrtConstCTX)&sp);
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      localKeyFrameIds[ftmp + i1] = viewIds[b_i].f1[i1];
    }
    numPointsRefKeyFrame = d;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  st.site = &klc_emlrtRSI;
  b_st.site = &mlc_emlrtRSI;
  if (localKeyFrameIds.size(0) == 0) {
    refKeyFrameId = 0U;
  } else {
    uint32_T mtmp;
    c_st.site = &nlc_emlrtRSI;
    d_st.site = &olc_emlrtRSI;
    e_st.site = &gcb_emlrtRSI;
    coder::internal::sort(e_st, localKeyFrameIds);
    refKeyFrameId = localKeyFrameIds[0];
    F = 1;
    mtmp = localKeyFrameIds[0];
    ftmp = 1;
    i = localKeyFrameIds.size(0);
    for (k = 0; k <= i - 2; k++) {
      uint32_T u;
      u = localKeyFrameIds[k + 1];
      if (u == mtmp) {
        ftmp++;
      } else {
        if (ftmp > F) {
          refKeyFrameId = mtmp;
          F = ftmp;
        }
        mtmp = u;
        ftmp = 1;
      }
    }
    if (ftmp > F) {
      refKeyFrameId = mtmp;
    }
  }
  st.site = &jlc_emlrtRSI;
  b_st.site = &plc_emlrtRSI;
  ftmp = vSetKeyFrames.RrigidPoseSingle.Data.size(1);
  F = vSetKeyFrames.RrigidPoseSingle.Data.size(1);
  rPose.set_size(&njb_emlrtRTEI, &b_st,
                 vSetKeyFrames.RrigidPoseSingle.Data.size(1));
  for (i = 0; i < F; i++) {
    if (i > rPose.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, rPose.size(0) - 1, &iq_emlrtBCI,
                                    &b_st);
    }
    rPose[i].Data.set_size(&njb_emlrtRTEI, &b_st, 0, rPose[i].Data.size(1));
    if (i > rPose.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, rPose.size(0) - 1, &iq_emlrtBCI,
                                    &b_st);
    }
    rPose[i].Data.set_size(&njb_emlrtRTEI, &b_st, rPose[i].Data.size(0), 0);
  }
  rPose.set_size(&ojb_emlrtRTEI, &b_st,
                 vSetKeyFrames.RrigidPoseSingle.Data.size(1));
  for (int32_T b_i{0}; b_i < ftmp; b_i++) {
    real32_T b_obj[16];
    c_st.site = &spb_emlrtRSI;
    vSetKeyFrames.RrigidPoseSingle.parenReference(
        c_st, static_cast<real_T>(b_i) + 1.0, &obj);
    for (i = 0; i < 3; i++) {
      F = i << 2;
      b_obj[F] = obj.R[3 * i];
      b_obj[F + 1] = obj.R[3 * i + 1];
      b_obj[F + 2] = obj.R[3 * i + 2];
      b_obj[i + 12] = obj.Translation[i];
    }
    b_obj[3] = 0.0F;
    b_obj[7] = 0.0F;
    b_obj[11] = 0.0F;
    b_obj[15] = 1.0F;
    if (b_i > rPose.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, rPose.size(0) - 1, &jq_emlrtBCI,
                                    &b_st);
    }
    c_st.site = &spb_emlrtRSI;
    rPose[b_i].b_init(c_st, b_obj);
  }
  b_st.site = &qlc_emlrtRSI;
  b_vSetKeyFrames.set_size(&pjb_emlrtRTEI, &b_st,
                           vSetKeyFrames.ViewId1.size(0) +
                               vSetKeyFrames.ViewId2.size(0));
  loop_ub = vSetKeyFrames.ViewId1.size(0);
  for (i = 0; i < loop_ub; i++) {
    b_vSetKeyFrames[i] = vSetKeyFrames.ViewId1[i];
  }
  loop_ub = vSetKeyFrames.ViewId2.size(0);
  for (i = 0; i < loop_ub; i++) {
    b_vSetKeyFrames[i + vSetKeyFrames.ViewId1.size(0)] =
        vSetKeyFrames.ViewId2[i];
  }
  c_st.site = &bdb_emlrtRSI;
  tf = coder::isMember(c_st, refKeyFrameId, b_vSetKeyFrames);
  if (!tf) {
    b_st.site = &tlc_emlrtRSI;
    mjd_emlrtRSI.init(b_st);
    b_vSetKeyFrames.set_size(&rjb_emlrtRTEI, &st, 0);
  } else {
    b_st.site = &ulc_emlrtRSI;
    G.init(b_st, vSetKeyFrames.ViewId1, vSetKeyFrames.ViewId2);
    b_st.site = &rlc_emlrtRSI;
    G.b_nearest(b_st, static_cast<real_T>(refKeyFrameId), viewIndex, dist);
    b_st.site = &slc_emlrtRSI;
    vSetKeyFrames.findView(b_st, viewIndex, b_vSetKeyFrames, obj, t11_Features,
                           t11_Points);
    for (i = 0; i < t11_Features.size(0); i++) {
      if (i > t11_Features.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, t11_Features.size(0) - 1,
                                      &hq_emlrtBCI, &st);
      }
    }
    localKeyFrames_Points.set_size(&qjb_emlrtRTEI, &st, t11_Points.size(0), 1);
    for (i = 0; i < t11_Points.size(0); i++) {
      if (i > t11_Points.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, t11_Points.size(0) - 1,
                                      &hq_emlrtBCI, &st);
      }
      if (i > localKeyFrames_Points.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, localKeyFrames_Points.size(0) - 1,
                                      &hq_emlrtBCI, &st);
      }
      localKeyFrames_Points[i] = t11_Points[i];
    }
  }
  loop_ub = b_vSetKeyFrames.size(0) + 1;
  localKeyFrameIds.set_size(&sjb_emlrtRTEI, &sp, b_vSetKeyFrames.size(0) + 1);
  F = b_vSetKeyFrames.size(0);
  for (i = 0; i < F; i++) {
    localKeyFrameIds[i] = b_vSetKeyFrames[i];
  }
  localKeyFrameIds[b_vSetKeyFrames.size(0)] = refKeyFrameId;
  st.site = &ilc_emlrtRSI;
  b_st.site = &ofc_emlrtRSI;
  c_st.site = &pfc_emlrtRSI;
  coder::worldpointset::checkViewIds(c_st, localKeyFrameIds);
  c_st.site = &qfc_emlrtRSI;
  mapPoints.checkIfViewIsMissing(c_st, localKeyFrameIds);
  c_st.site = &rfc_emlrtRSI;
  if (mapPoints.WorldPoints.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &pe_emlrtRTEI,
                                  "vision:worldpointset:noWorldPoints",
                                  "vision:worldpointset:noWorldPoints", 0);
  }
  c_st.site = &sfc_emlrtRSI;
  d_st.site = &ijb_emlrtRSI;
  e_st.site = &bjb_emlrtRSI;
  f_st.site = &efb_emlrtRSI;
  coder::do_vectors(f_st, localKeyFrameIds, mapPoints.ViewIds, b_vSetKeyFrames,
                    ia, ib);
  F = ib.size(0);
  viewIndex.set_size(&ugb_emlrtRTEI, &d_st, ib.size(0));
  for (i = 0; i < F; i++) {
    viewIndex[i] = ib[i];
  }
  c_st.site = &tfc_emlrtRSI;
  pointIdx.set_size(&vgb_emlrtRTEI, &b_st, ib.size(0));
  featureIndices.set_size(&wgb_emlrtRTEI, &b_st, ib.size(0));
  if (localKeyFrameIds.size(0) == 1) {
    c_st.site = &ufc_emlrtRSI;
    mapPoints.findWorldPointsInSingleView(c_st, viewIndex, pointIdx[0].f1,
                                          dist);
    if (viewIndex.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, viewIndex.size(0) - 1, &ho_emlrtBCI,
                                    &b_st);
    }
  } else {
    for (int32_T b_i{0}; b_i < F; b_i++) {
      if (b_i + 1 > F) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, F, &kq_emlrtBCI, &b_st);
      }
      if (b_i > pointIdx.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, pointIdx.size(0) - 1,
                                      &lq_emlrtBCI, &b_st);
      }
      c_st.site = &lnc_emlrtRSI;
      mapPoints.findWorldPointsInSingleView(
          c_st, viewIndex[b_i], pointIdx[b_i].f1, featureIndices[b_i].f1);
    }
  }
  keyFrameIdx.set_size(&tjb_emlrtRTEI, &sp, loop_ub);
  for (i = 0; i < loop_ub; i++) {
    keyFrameIdx[i] = false;
  }
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i + 1 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub, &nq_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (localKeyFrameIds[b_i] == refKeyFrameId) {
      if (b_i + 1 > keyFrameIdx.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, keyFrameIdx.size(0),
                                      &oq_emlrtBCI, (emlrtConstCTX)&sp);
      }
      keyFrameIdx[b_i] = true;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  numPointsRefKeyFrame = 0.0;
  for (int32_T b_i{0}; b_i < F; b_i++) {
    if (b_i > pointIdx.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, pointIdx.size(0) - 1, &wp_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    numPointsRefKeyFrame += static_cast<real_T>(pointIdx[b_i].f1.size(0));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  if (numPointsRefKeyFrame != static_cast<int32_T>(numPointsRefKeyFrame)) {
    emlrtIntegerCheckR2012b(numPointsRefKeyFrame, &ob_emlrtDCI,
                            (emlrtConstCTX)&sp);
  }
  localPointsIndices.set_size(&ujb_emlrtRTEI, &sp,
                              static_cast<int32_T>(numPointsRefKeyFrame));
  numPointsRefKeyFrame = 1.0;
  for (int32_T b_i{0}; b_i < F; b_i++) {
    if (b_i > pointIdx.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, pointIdx.size(0) - 1, &vp_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i = pointIdx[b_i].f1.size(0);
    d = numPointsRefKeyFrame + static_cast<real_T>(i);
    if (numPointsRefKeyFrame > d - 1.0) {
      k = 0;
      i1 = 0;
    } else {
      if ((static_cast<int32_T>(numPointsRefKeyFrame) < 1) ||
          (static_cast<int32_T>(numPointsRefKeyFrame) >
           localPointsIndices.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(numPointsRefKeyFrame), 1,
            localPointsIndices.size(0), &eq_emlrtBCI, (emlrtConstCTX)&sp);
      }
      k = static_cast<int32_T>(numPointsRefKeyFrame) - 1;
      if ((static_cast<int32_T>(d - 1.0) < 1) ||
          (static_cast<int32_T>(d - 1.0) > localPointsIndices.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d - 1.0), 1,
                                      localPointsIndices.size(0), &dq_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i1 = static_cast<int32_T>(d - 1.0);
    }
    if (b_i > pointIdx.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, pointIdx.size(0) - 1, &rp_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    loop_ub = i1 - k;
    if (loop_ub != i) {
      emlrtSubAssignSizeCheck1dR2017a(loop_ub, i, &jd_emlrtECI,
                                      (emlrtConstCTX)&sp);
    }
    for (i = 0; i < loop_ub; i++) {
      localPointsIndices[k + i] = pointIdx[b_i].f1[i];
    }
    numPointsRefKeyFrame = d;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  numPointsRefKeyFrame = 0.0;
  if (pointIdx.size(0) > 1) {
    i = keyFrameIdx.size(0);
    for (int32_T b_i{0}; b_i < i; b_i++) {
      if (b_i + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &pq_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (keyFrameIdx[b_i]) {
        if (b_i > pointIdx.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, pointIdx.size(0) - 1,
                                        &sp_emlrtBCI, (emlrtConstCTX)&sp);
        }
        numPointsRefKeyFrame += static_cast<real_T>(pointIdx[b_i].f1.size(0));
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
    st.site = &hlc_emlrtRSI;
    b_st.site = &gcb_emlrtRSI;
    coder::internal::sort(b_st, localPointsIndices);
  } else {
    if (pointIdx.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, pointIdx.size(0) - 1, &up_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    numPointsRefKeyFrame = pointIdx[0].f1.size(0);
    if (pointIdx.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, pointIdx.size(0) - 1, &tp_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    st.site = &glc_emlrtRSI;
    loop_ub = pointIdx[0].f1.size(0);
    localPointsIndices.set_size(&vjb_emlrtRTEI, &st, pointIdx[0].f1.size(0));
    for (i = 0; i < loop_ub; i++) {
      localPointsIndices[i] = pointIdx[0].f1[i];
    }
    b_st.site = &gcb_emlrtRSI;
    coder::internal::sort(b_st, localPointsIndices);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return numPointsRefKeyFrame;
}

void b_lt(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
          const coder::array<real32_T, 1U> &in2,
          const coder::array<real32_T, 1U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&iyb_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] < in3[i * stride_1_0]);
  }
}

void gt(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
        const coder::array<real32_T, 1U> &in2,
        const coder::array<real32_T, 1U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&hyb_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] > in3[i * stride_1_0]);
  }
}

boolean_T helperTrackLocalMapCg(
    const emlrtStack &sp, const coder::worldpointset &mapPoints,
    const coder::imageviewset &vSetKeyFrames,
    coder::array<real_T, 1U> &mapPointIdx,
    coder::array<uint32_T, 1U> &featureIdx, coder::c_rigidtform3d &currPose,
    const coder::binaryFeatures &currFeatures,
    const coder::ORBPoints &currPoints,
    const coder::cameraIntrinsics &intrinsics, boolean_T newKeyFrameAdded,
    real_T lastKeyFrameIndex, real_T currFrameIndex,
    real_T &numPointsRefKeyFrame, coder::array<real_T, 1U> &localPointsIndices,
    coder::array<uint32_T, 1U> &localKeyFrameIdsInternal,
    coder::array<uint32_T, 1U> &localKeyFrameIds)
{
  static const int32_T b_iv[2]{1, 62};
  static const char_T varargin_1[62]{
      'T', 'r', 'a', 'c', 'k', 'i', 'n', 'g', ' ', 'f', 'a', 'i', 'l',
      'e', 'd', '.', ' ', 'T', 'r', 'y', ' ', 'i', 'n', 's', 'e', 'r',
      't', 'i', 'n', 'g', ' ', 'n', 'e', 'w', ' ', 'k', 'e', 'y', ' ',
      'f', 'r', 'a', 'm', 'e', 's', ' ', 'm', 'o', 'r', 'e', ' ', 'f',
      'r', 'e', 'q', 'u', 'e', 'n', 't', 'l', 'y', '.'};
  __m128 b_r;
  __m128 r1;
  coder::b_binaryFeatures b_this;
  coder::b_rigidtform3d unusedExpr;
  coder::binaryFeatures d_this;
  coder::c_rigidtform3d b_currPose;
  coder::array<coder::b_ORBPoints, 1U> b_expl_temp;
  coder::array<cell_wrap_8, 2U> views_Features;
  coder::array<creal32_T, 1U> b_viewAngles;
  coder::array<creal32_T, 1U> viewAngles;
  coder::array<real_T, 1U> newMapPointIdx;
  coder::array<real_T, 1U> searchRadius;
  coder::array<int32_T, 1U> ia;
  coder::array<int32_T, 1U> r3;
  coder::array<int32_T, 1U> r4;
  coder::array<real32_T, 2U> b_currPoints;
  coder::array<real32_T, 2U> b_mapPoints;
  coder::array<real32_T, 2U> b_projectedPoints;
  coder::array<real32_T, 2U> cameraToPoints;
  coder::array<real32_T, 2U> projectedPoints;
  coder::array<real32_T, 2U> xyzPoints;
  coder::array<real32_T, 1U> dist;
  coder::array<real32_T, 1U> maxDist;
  coder::array<real32_T, 1U> minDist;
  coder::array<real32_T, 1U> predictedScales;
  coder::array<uint32_T, 2U> b_indexPairs;
  coder::array<uint32_T, 2U> b_y;
  coder::array<uint32_T, 2U> indexPairs;
  coder::array<uint32_T, 1U> expl_temp;
  coder::array<uint32_T, 1U> unmatchedfeatureIdx;
  coder::array<uint8_T, 2U> c_this;
  coder::array<boolean_T, 1U> isGoodScale;
  coder::array<boolean_T, 1U> miniScale;
  coder::array<boolean_T, 1U> r2;
  coder::array<boolean_T, 1U> validByDistance;
  coder::array<boolean_T, 1U> validByView;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  real_T temp;
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T helperTrackLocalMapCg_numThreads;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T scalarLB;
  int32_T vectorUB;
  real32_T a[3];
  real32_T varargin_2;
  uint32_T unnamed_idx_0;
  boolean_T emlrtHadParallelError{false};
  boolean_T isKeyFrame;
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
  // helperTrackLocalMapCg Refine camera pose by tracking the local map
  //
  //    This is an example helper function that is subject to change or removal
  //    in future releases.
  //
  //    Inputs
  //    ------
  //    mapPoints                - A worldpointset object storing map points
  //    vSetKeyFrames            - An imageviewset storing key frames
  //    mapPointsIndices         - Indices of map points observed in the current
  //    frame featureIndices           - Indices of features in the current
  //    frame
  //                               corresponding to map points denoted by
  //                               mapPointsIndices
  //    currPose                 - Current camera pose
  //    currFeatures             - ORB Features in the current frame
  //    currPoints               - Feature points in the current frame
  //    intrinsics               - Camera intrinsics
  //    scaleFactor              - scale factor of features
  //    numLevels                - number of levels in feature exatraction
  //    newKeyFrameAdded         - A boolean scalar indicating if a new key
  //    frame is
  //                               added recently
  //    lastKeyFrameIndex        - Frame index of the last key frame
  //    currFrameIndex           - Frame index of the current frame
  //    numSkipFrames            - Largest number of frames to skip
  //    numPointsKeyFrame        - Minimum number of points tracked by a key
  //    frame numPointsRefKeyFrame     - Number of points in reference key frame
  //    localPointsIndices       - Indices of points in the local frame
  //    localKeyFrameIdsInternal - View ids of the frames connected with
  //                               current frame
  //
  //    Outputs
  //    -------
  //    localKeyFrameIds         - ViewIds of the local key frames
  //    currPose                 - Refined camera pose of the current frame
  //    mapPointIdx              - Indices of map points observed in the current
  //    frame featureIdx               - Indices of features in the current
  //    frame corresponding
  //                               to mapPointIdx
  //    isKeyFrame               - A boolean scalar indicating if the current
  //    frame is
  //                               a key frame
  //    numPointsKeyFrame        - Minimum number of points tracked by a key
  //    frame numPointsRefKeyFrame     - Number of points in reference key frame
  //    localPointsIndices       - Indices of points in the local frame
  //    localKeyFrameIdsInternal - View ids of the frames connected with
  //                               current frame
  //    Copyright 2023 The MathWorks, Inc.
  if (newKeyFrameAdded) {
    st.site = &xkc_emlrtRSI;
    numPointsRefKeyFrame = updateRefKeyFrameAndLocalPoints(
        st, mapPoints, vSetKeyFrames, mapPointIdx, localPointsIndices,
        localKeyFrameIdsInternal);
  }
  //  Project the map into the frame and search for more map point
  //  correspondences
  st.site = &ykc_emlrtRSI;
  b_st.site = &mnc_emlrtRSI;
  c_st.site = &efb_emlrtRSI;
  coder::do_vectors(c_st, localPointsIndices, mapPointIdx, newMapPointIdx, ia);
  st.site = &alc_emlrtRSI;
  vSetKeyFrames.imageviewsetBase_get_Views(st, expl_temp, views_Features,
                                           b_expl_temp, unusedExpr);
  st.site = &blc_emlrtRSI;
  getFeatures(st, mapPoints, views_Features, newMapPointIdx, b_this.Features);
  st.site = &clc_emlrtRSI;
  //  1) Points within the image bounds
  loop_ub = newMapPointIdx.size(0);
  xyzPoints.set_size(&ayb_emlrtRTEI, &st, newMapPointIdx.size(0), 3);
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      if (newMapPointIdx[i1] !=
          static_cast<int32_T>(muDoubleScalarFloor(newMapPointIdx[i1]))) {
        emlrtIntegerCheckR2012b(newMapPointIdx[i1], &ed_emlrtDCI, &st);
      }
      scalarLB = static_cast<int32_T>(newMapPointIdx[i1]);
      if ((scalarLB < 1) || (scalarLB > mapPoints.WorldPoints.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            scalarLB, 1, mapPoints.WorldPoints.size(0), &vfb_emlrtBCI, &st);
      }
      xyzPoints[i1 + xyzPoints.size(0) * i] =
          mapPoints
              .WorldPoints[(scalarLB + mapPoints.WorldPoints.size(0) * i) - 1];
    }
  }
  b_currPose = currPose;
  b_st.site = &tnc_emlrtRSI;
  coder::pose2extr(b_st, b_currPose);
  b_st.site = &tnc_emlrtRSI;
  coder::world2img(b_st, xyzPoints, b_currPose, intrinsics, projectedPoints,
                   miniScale);
  if (projectedPoints.size(0) == 0) {
    b_st.site = &unc_emlrtRSI;
    y = nullptr;
    m = emlrtCreateCharArray(2, &b_iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 62, m, &varargin_1[0]);
    emlrtAssign(&y, m);
    c_st.site = &fid_emlrtRSI;
    b_error(c_st, y, f_emlrtMCI);
  }
  //  2) Parallax less than 60 degrees
  b_loop_ub = xyzPoints.size(0);
  cameraToPoints.set_size(&byb_emlrtRTEI, &st, xyzPoints.size(0), 3);
  scalarLB = (b_loop_ub / 4) << 2;
  vectorUB = scalarLB - 4;
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 <= vectorUB; i1 += 4) {
      b_r = _mm_loadu_ps(&xyzPoints[i1 + xyzPoints.size(0) * i]);
      _mm_storeu_ps(&cameraToPoints[i1 + cameraToPoints.size(0) * i],
                    _mm_sub_ps(b_r, _mm_set1_ps(static_cast<real32_T>(
                                        currPose.Translation[i]))));
    }
    for (i1 = scalarLB; i1 < b_loop_ub; i1++) {
      cameraToPoints[i1 + cameraToPoints.size(0) * i] =
          xyzPoints[i1 + xyzPoints.size(0) * i] -
          static_cast<real32_T>(currPose.Translation[i]);
    }
  }
  for (i = 0; i < loop_ub; i++) {
    i1 = static_cast<int32_T>(newMapPointIdx[i]);
    if ((i1 < 1) || (i1 > mapPoints.ViewingDirection.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, mapPoints.ViewingDirection.size(0),
                                    &wfb_emlrtBCI, &st);
    }
  }
  b_mapPoints.set_size(&cyb_emlrtRTEI, &st, newMapPointIdx.size(0), 3);
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_mapPoints[i1 + b_mapPoints.size(0) * i] =
          mapPoints.ViewingDirection[(static_cast<int32_T>(newMapPointIdx[i1]) +
                                      mapPoints.ViewingDirection.size(0) * i) -
                                     1] *
          cameraToPoints[i1 + cameraToPoints.size(0) * i];
    }
  }
  b_st.site = &vnc_emlrtRSI;
  coder::b_sum(b_st, b_mapPoints, minDist);
  b_st.site = &wnc_emlrtRSI;
  coder::vecnorm(b_st, cameraToPoints, dist);
  c_loop_ub = dist.size(0);
  scalarLB = (dist.size(0) / 4) << 2;
  vectorUB = scalarLB - 4;
  for (i = 0; i <= vectorUB; i += 4) {
    b_r = _mm_loadu_ps(&dist[i]);
    _mm_storeu_ps(&dist[i], _mm_mul_ps(_mm_set1_ps(0.5F), b_r));
  }
  for (i = scalarLB; i < c_loop_ub; i++) {
    dist[i] = 0.5F * dist[i];
  }
  c_loop_ub = minDist.size(0);
  if ((minDist.size(0) != dist.size(0)) &&
      ((minDist.size(0) != 1) && (dist.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(minDist.size(0), dist.size(0), &bf_emlrtECI,
                                &st);
  }
  if (minDist.size(0) == dist.size(0)) {
    validByView.set_size(&dyb_emlrtRTEI, &st, minDist.size(0));
    for (i = 0; i < c_loop_ub; i++) {
      validByView[i] = (minDist[i] > dist[i]);
    }
  } else {
    b_st.site = &vnc_emlrtRSI;
    gt(b_st, validByView, minDist, dist);
  }
  //  3) Distance from map point to camera center is in the range of scale
  //  invariant depth
  for (i = 0; i < loop_ub; i++) {
    i1 = static_cast<int32_T>(newMapPointIdx[i]);
    if ((i1 < 1) || (i1 > mapPoints.DistanceLimits.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, mapPoints.DistanceLimits.size(0),
                                    &xfb_emlrtBCI, &st);
    }
  }
  minDist.set_size(&eyb_emlrtRTEI, &st, newMapPointIdx.size(0));
  for (i = 0; i < loop_ub; i++) {
    minDist[i] =
        mapPoints.DistanceLimits[static_cast<int32_T>(newMapPointIdx[i]) - 1] /
        1.2F;
  }
  for (i = 0; i < loop_ub; i++) {
    i1 = static_cast<int32_T>(newMapPointIdx[i]);
    if ((i1 < 1) || (i1 > mapPoints.DistanceLimits.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, mapPoints.DistanceLimits.size(0),
                                    &yfb_emlrtBCI, &st);
    }
  }
  maxDist.set_size(&fyb_emlrtRTEI, &st, newMapPointIdx.size(0));
  for (i = 0; i < loop_ub; i++) {
    maxDist[i] =
        mapPoints.DistanceLimits[(static_cast<int32_T>(newMapPointIdx[i]) +
                                  mapPoints.DistanceLimits.size(0)) -
                                 1] *
        1.2F;
  }
  b_mapPoints.set_size(&gyb_emlrtRTEI, &st, xyzPoints.size(0), 3);
  scalarLB = (b_loop_ub / 4) << 2;
  vectorUB = scalarLB - 4;
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 <= vectorUB; i1 += 4) {
      b_r = _mm_loadu_ps(&xyzPoints[i1 + xyzPoints.size(0) * i]);
      _mm_storeu_ps(&b_mapPoints[i1 + b_mapPoints.size(0) * i],
                    _mm_sub_ps(b_r, _mm_set1_ps(static_cast<real32_T>(
                                        currPose.Translation[i]))));
    }
    for (i1 = scalarLB; i1 < b_loop_ub; i1++) {
      b_mapPoints[i1 + b_mapPoints.size(0) * i] =
          xyzPoints[i1 + xyzPoints.size(0) * i] -
          static_cast<real32_T>(currPose.Translation[i]);
    }
  }
  loop_ub = b_mapPoints.size(0);
  xyzPoints.set_size(&gyb_emlrtRTEI, &st, b_mapPoints.size(0), 3);
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      xyzPoints[i1 + xyzPoints.size(0) * i] =
          b_mapPoints[i1 + b_mapPoints.size(0) * i];
    }
  }
  b_st.site = &xnc_emlrtRSI;
  coder::vecnorm(b_st, xyzPoints, dist);
  loop_ub = dist.size(0);
  if ((dist.size(0) != newMapPointIdx.size(0)) &&
      ((dist.size(0) != 1) && (newMapPointIdx.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(dist.size(0), newMapPointIdx.size(0),
                                &af_emlrtECI, &st);
  }
  if (dist.size(0) == minDist.size(0)) {
    validByDistance.set_size(&hyb_emlrtRTEI, &st, dist.size(0));
    for (i = 0; i < loop_ub; i++) {
      validByDistance[i] = (dist[i] > minDist[i]);
    }
  } else {
    b_st.site = &mid_emlrtRSI;
    gt(b_st, validByDistance, dist, minDist);
  }
  if (dist.size(0) == maxDist.size(0)) {
    loop_ub = dist.size(0);
    isGoodScale.set_size(&iyb_emlrtRTEI, &st, dist.size(0));
    for (i = 0; i < loop_ub; i++) {
      isGoodScale[i] = (dist[i] < maxDist[i]);
    }
  } else {
    b_st.site = &mid_emlrtRSI;
    b_lt(b_st, isGoodScale, dist, maxDist);
  }
  loop_ub = validByDistance.size(0);
  if ((validByDistance.size(0) != isGoodScale.size(0)) &&
      ((validByDistance.size(0) != 1) && (isGoodScale.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(validByDistance.size(0), isGoodScale.size(0),
                                &af_emlrtECI, &st);
  }
  if (validByDistance.size(0) == isGoodScale.size(0)) {
    for (i = 0; i < loop_ub; i++) {
      validByDistance[i] = (validByDistance[i] && isGoodScale[i]);
    }
  } else {
    b_st.site = &mid_emlrtRSI;
    c_and(b_st, validByDistance, isGoodScale);
  }
  loop_ub = miniScale.size(0);
  if ((miniScale.size(0) != validByView.size(0)) &&
      ((miniScale.size(0) != 1) && (validByView.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(miniScale.size(0), validByView.size(0),
                                &ye_emlrtECI, &st);
  }
  if (miniScale.size(0) == validByView.size(0)) {
    for (i = 0; i < loop_ub; i++) {
      miniScale[i] = (miniScale[i] && validByView[i]);
    }
  } else {
    b_st.site = &kid_emlrtRSI;
    c_and(b_st, miniScale, validByView);
  }
  loop_ub = miniScale.size(0);
  if ((miniScale.size(0) != validByDistance.size(0)) &&
      ((miniScale.size(0) != 1) && (validByDistance.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(miniScale.size(0), validByDistance.size(0),
                                &ye_emlrtECI, &st);
  }
  //  Predicted scales
  b_st.site = &ync_emlrtRSI;
  c_st.site = &lf_emlrtRSI;
  d_st.site = &mf_emlrtRSI;
  if ((maxDist.size(0) != 1) && (dist.size(0) != 1) &&
      (maxDist.size(0) != dist.size(0))) {
    emlrtErrorWithMessageIdR2018a(&d_st, &hb_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  if (maxDist.size(0) == dist.size(0)) {
    b_loop_ub = maxDist.size(0);
    scalarLB = (maxDist.size(0) / 4) << 2;
    vectorUB = scalarLB - 4;
    for (i = 0; i <= vectorUB; i += 4) {
      b_r = _mm_loadu_ps(&maxDist[i]);
      r1 = _mm_loadu_ps(&dist[i]);
      _mm_storeu_ps(&maxDist[i], _mm_div_ps(b_r, r1));
    }
    for (i = scalarLB; i < b_loop_ub; i++) {
      maxDist[i] = maxDist[i] / dist[i];
    }
  } else {
    d_st.site = &uid_emlrtRSI;
    rdivide(d_st, maxDist, dist);
  }
  b_st.site = &ync_emlrtRSI;
  isKeyFrame = false;
  b_loop_ub = maxDist.size(0);
  for (vectorUB = 0; vectorUB < b_loop_ub; vectorUB++) {
    if (isKeyFrame || (maxDist[vectorUB] < 0.0F)) {
      isKeyFrame = true;
    }
  }
  if (isKeyFrame) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &id_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
  }
  c_st.site = &epb_emlrtRSI;
  d_st.site = &qo_emlrtRSI;
  if (maxDist.size(0) > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    coder::check_forloop_overflow_error(e_st);
  }
  for (vectorUB = 0; vectorUB < b_loop_ub; vectorUB++) {
    maxDist[vectorUB] = muSingleScalarLog(maxDist[vectorUB]);
  }
  scalarLB = (maxDist.size(0) / 4) << 2;
  vectorUB = scalarLB - 4;
  for (i = 0; i <= vectorUB; i += 4) {
    b_r = _mm_loadu_ps(&maxDist[i]);
    _mm_storeu_ps(&maxDist[i], _mm_div_ps(b_r, _mm_set1_ps(0.182321563F)));
  }
  for (i = scalarLB; i < b_loop_ub; i++) {
    maxDist[i] = maxDist[i] / 0.182321563F;
  }
  b_st.site = &ync_emlrtRSI;
  c_st.site = &koc_emlrtRSI;
  scalarLB = maxDist.size(0);
  d_st.site = &qo_emlrtRSI;
  if (maxDist.size(0) > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    coder::check_forloop_overflow_error(e_st);
  }
  for (vectorUB = 0; vectorUB < scalarLB; vectorUB++) {
    maxDist[vectorUB] = muSingleScalarCeil(maxDist[vectorUB]);
  }
  for (c_loop_ub = 0; c_loop_ub < scalarLB; c_loop_ub++) {
    if (maxDist[c_loop_ub] < 0.0F) {
      if (c_loop_ub > maxDist.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(c_loop_ub, 0, maxDist.size(0) - 1,
                                      &agb_emlrtBCI, &st);
      }
      maxDist[c_loop_ub] = 0.0F;
    }
  }
  vectorUB = maxDist.size(0);
  for (c_loop_ub = 0; c_loop_ub < vectorUB; c_loop_ub++) {
    if (maxDist[c_loop_ub] >= 7.0F) {
      if (c_loop_ub > maxDist.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(c_loop_ub, 0, maxDist.size(0) - 1,
                                      &bgb_emlrtBCI, &st);
      }
      maxDist[c_loop_ub] = 7.0F;
    }
  }
  b_loop_ub = maxDist.size(0);
  predictedScales.set_size(&jyb_emlrtRTEI, &st, maxDist.size(0));
  for (i = 0; i < b_loop_ub; i++) {
    predictedScales[i] = 0.0F;
  }
  for (c_loop_ub = 0; c_loop_ub < b_loop_ub; c_loop_ub++) {
    temp = 1.0;
    if (c_loop_ub + 1 > b_loop_ub) {
      emlrtDynamicBoundsCheckR2012b(c_loop_ub + 1, 1, b_loop_ub, &sfb_emlrtBCI,
                                    &st);
    }
    i = static_cast<int32_T>(maxDist[c_loop_ub]);
    emlrtForLoopVectorCheckR2021a(1.0, 1.0,
                                  static_cast<real_T>(maxDist[c_loop_ub]),
                                  mxSINGLE_CLASS, i, &eh_emlrtRTEI, &st);
    for (scalarLB = 0; scalarLB < i; scalarLB++) {
      temp *= 1.2;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    if (c_loop_ub + 1 > predictedScales.size(0)) {
      emlrtDynamicBoundsCheckR2012b(c_loop_ub + 1, 1, predictedScales.size(0),
                                    &cgb_emlrtBCI, &st);
    }
    predictedScales[c_loop_ub] = static_cast<real32_T>(temp);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  //  View angles
  b_st.site = &aoc_emlrtRSI;
  b_loop_ub = cameraToPoints.size(0);
  xyzPoints.set_size(&kyb_emlrtRTEI, &b_st, cameraToPoints.size(0), 3);
  scalarLB = (b_loop_ub / 4) << 2;
  vectorUB = scalarLB - 4;
  for (i = 0; i < 3; i++) {
    a[i] = static_cast<real32_T>(
        (0.0 * currPose.R[i] + 0.0 * currPose.R[i + 3]) + currPose.R[i + 6]);
    for (i1 = 0; i1 <= vectorUB; i1 += 4) {
      b_r = _mm_loadu_ps(&cameraToPoints[i1 + cameraToPoints.size(0) * i]);
      _mm_storeu_ps(&xyzPoints[i1 + xyzPoints.size(0) * i],
                    _mm_mul_ps(_mm_set1_ps(a[i]), b_r));
    }
    for (i1 = scalarLB; i1 < b_loop_ub; i1++) {
      xyzPoints[i1 + xyzPoints.size(0) * i] =
          a[i] * cameraToPoints[i1 + cameraToPoints.size(0) * i];
    }
  }
  c_st.site = &aoc_emlrtRSI;
  coder::b_sum(c_st, xyzPoints, minDist);
  c_st.site = &boc_emlrtRSI;
  coder::vecnorm(c_st, cameraToPoints, dist);
  c_st.site = &lf_emlrtRSI;
  d_st.site = &mf_emlrtRSI;
  if ((minDist.size(0) != 1) && (dist.size(0) != 1) &&
      (minDist.size(0) != dist.size(0))) {
    emlrtErrorWithMessageIdR2018a(&d_st, &hb_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  if (minDist.size(0) == dist.size(0)) {
    b_loop_ub = minDist.size(0);
    viewAngles.set_size(&lyb_emlrtRTEI, &st, minDist.size(0));
    for (i = 0; i < b_loop_ub; i++) {
      viewAngles[i].re = minDist[i] / dist[i];
      viewAngles[i].im = 0.0F;
    }
  } else {
    binary_expand_op_58(st, viewAngles, minDist, dist);
  }
  b_st.site = &aoc_emlrtRSI;
  coder::b_acosd(b_st, viewAngles);
  if (miniScale.size(0) == validByDistance.size(0)) {
    r2.set_size(&myb_emlrtRTEI, &st, miniScale.size(0));
    for (i = 0; i < loop_ub; i++) {
      r2[i] = (miniScale[i] && validByDistance[i]);
    }
  } else {
    b_st.site = &kid_emlrtRSI;
    b_and(b_st, r2, miniScale, validByDistance);
  }
  vectorUB = r2.size(0);
  scalarLB = 0;
  for (c_loop_ub = 0; c_loop_ub < vectorUB; c_loop_ub++) {
    if (r2[c_loop_ub]) {
      scalarLB++;
    }
  }
  r3.set_size(&nyb_emlrtRTEI, &st, scalarLB);
  scalarLB = 0;
  for (c_loop_ub = 0; c_loop_ub < vectorUB; c_loop_ub++) {
    if (r2[c_loop_ub]) {
      r3[scalarLB] = c_loop_ub;
      scalarLB++;
    }
  }
  loop_ub = r3.size(0);
  minDist.set_size(&oyb_emlrtRTEI, &st, r3.size(0));
  for (i = 0; i < loop_ub; i++) {
    if (r3[i] > predictedScales.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, predictedScales.size(0) - 1,
                                    &dgb_emlrtBCI, &st);
    }
    minDist[i] = predictedScales[r3[i]];
  }
  b_loop_ub = minDist.size(0);
  predictedScales.set_size(&pyb_emlrtRTEI, &st, minDist.size(0));
  for (i = 0; i < b_loop_ub; i++) {
    predictedScales[i] = minDist[i];
  }
  b_viewAngles.set_size(&qyb_emlrtRTEI, &st, r3.size(0));
  for (i = 0; i < loop_ub; i++) {
    if (r3[i] > viewAngles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, viewAngles.size(0) - 1,
                                    &egb_emlrtBCI, &st);
    }
    b_viewAngles[i].re = viewAngles[r3[i]].re;
    if (r3[i] > viewAngles.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, viewAngles.size(0) - 1,
                                    &egb_emlrtBCI, &st);
    }
    b_viewAngles[i].im = viewAngles[r3[i]].im;
  }
  viewAngles.set_size(&ryb_emlrtRTEI, &st, r3.size(0));
  for (i = 0; i < loop_ub; i++) {
    viewAngles[i] = b_viewAngles[i];
  }
  for (i = 0; i < loop_ub; i++) {
    if (r3[i] > projectedPoints.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, projectedPoints.size(0) - 1,
                                    &fgb_emlrtBCI, &st);
    }
  }
  searchRadius.set_size(&syb_emlrtRTEI, &sp, r3.size(0));
  for (i = 0; i < loop_ub; i++) {
    if (r3[i] > newMapPointIdx.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, newMapPointIdx.size(0) - 1,
                                    &ggb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    searchRadius[i] = newMapPointIdx[r3[i]];
  }
  b_loop_ub = searchRadius.size(0);
  newMapPointIdx.set_size(&tyb_emlrtRTEI, &sp, searchRadius.size(0));
  for (i = 0; i < b_loop_ub; i++) {
    newMapPointIdx[i] = searchRadius[i];
  }
  scalarLB = b_this.Features.size(1);
  c_this.set_size(&uyb_emlrtRTEI, &sp, r3.size(0), b_this.Features.size(1));
  for (i = 0; i < scalarLB; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      if (r3[i1] > b_this.Features.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r3[i1], 0, b_this.Features.size(0) - 1,
                                      &hgb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      c_this[i1 + c_this.size(0) * i] =
          b_this.Features[r3[i1] + b_this.Features.size(0) * i];
    }
  }
  c_loop_ub = c_this.size(0);
  b_this.Features.set_size(&vyb_emlrtRTEI, &sp, c_this.size(0), c_this.size(1));
  scalarLB = c_this.size(0) * c_this.size(1);
  for (i = 0; i < scalarLB; i++) {
    b_this.Features[i] = c_this[i];
  }
  if (currFeatures.Features.size(0) < 1) {
    b_y.set_size(&wm_emlrtRTEI, &sp, 1, 0);
  } else {
    b_y.set_size(&wm_emlrtRTEI, &sp, 1, currFeatures.Features.size(0));
    scalarLB = currFeatures.Features.size(0) - 1;
    for (i = 0; i <= scalarLB; i++) {
      b_y[i] = static_cast<uint32_T>(i) + 1U;
    }
  }
  st.site = &dlc_emlrtRSI;
  b_st.site = &mnc_emlrtRSI;
  scalarLB = b_y.size(1);
  expl_temp.set_size(&wyb_emlrtRTEI, &b_st, b_y.size(1));
  for (i = 0; i < scalarLB; i++) {
    expl_temp[i] = b_y[i];
  }
  c_st.site = &efb_emlrtRSI;
  coder::do_vectors(c_st, expl_temp, featureIdx, unmatchedfeatureIdx, ia);
  scalarLB = unmatchedfeatureIdx.size(0);
  for (i = 0; i < scalarLB; i++) {
    if ((static_cast<int32_T>(unmatchedfeatureIdx[i]) < 1) ||
        (static_cast<int32_T>(unmatchedfeatureIdx[i]) >
         currFeatures.Features.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(unmatchedfeatureIdx[i]), 1,
          currFeatures.Features.size(0), &igb_emlrtBCI, (emlrtConstCTX)&sp);
    }
  }
  for (i = 0; i < scalarLB; i++) {
    if ((static_cast<int32_T>(unmatchedfeatureIdx[i]) < 1) ||
        (static_cast<int32_T>(unmatchedfeatureIdx[i]) >
         currPoints.pLocation.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(unmatchedfeatureIdx[i]), 1,
          currPoints.pLocation.size(0), &jgb_emlrtBCI, (emlrtConstCTX)&sp);
    }
  }
  //  Search radius depends on scale and view direction
  searchRadius.set_size(&xyb_emlrtRTEI, &sp, c_this.size(0));
  for (i = 0; i < c_loop_ub; i++) {
    searchRadius[i] = 4.0;
  }
  for (c_loop_ub = 0; c_loop_ub < loop_ub; c_loop_ub++) {
    if (viewAngles[c_loop_ub].re < 3.0F) {
      if (c_loop_ub > b_this.Features.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(c_loop_ub, 0, b_this.Features.size(0) - 1,
                                      &kgb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      searchRadius[c_loop_ub] = 2.5;
    }
  }
  c_loop_ub = searchRadius.size(0);
  if ((searchRadius.size(0) != minDist.size(0)) &&
      ((searchRadius.size(0) != 1) && (minDist.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(searchRadius.size(0), minDist.size(0),
                                &cf_emlrtECI, (emlrtConstCTX)&sp);
  }
  b_this.NumBits = static_cast<real_T>(b_this.Features.size(1)) * 8.0;
  d_this.NumBits = 256.0;
  d_this.NumFeatures = unmatchedfeatureIdx.size(0);
  d_this.Features.set_size(&uh_emlrtRTEI, &sp, unmatchedfeatureIdx.size(0), 32);
  for (i = 0; i < 32; i++) {
    for (i1 = 0; i1 < scalarLB; i1++) {
      d_this.Features[i1 + d_this.Features.size(0) * i] =
          currFeatures.Features[(static_cast<int32_T>(unmatchedfeatureIdx[i1]) +
                                 currFeatures.Features.size(0) * i) -
                                1];
    }
  }
  if (searchRadius.size(0) == predictedScales.size(0)) {
    b_currPoints.set_size(&yyb_emlrtRTEI, &sp, unmatchedfeatureIdx.size(0), 2);
    b_projectedPoints.set_size(&aac_emlrtRTEI, &sp, r3.size(0), 2);
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < scalarLB; i1++) {
        b_currPoints[i1 + b_currPoints.size(0) * i] =
            currPoints
                .pLocation[(static_cast<int32_T>(unmatchedfeatureIdx[i1]) +
                            currPoints.pLocation.size(0) * i) -
                           1];
      }
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_projectedPoints[i1 + b_projectedPoints.size(0) * i] =
            projectedPoints[r3[i1] + projectedPoints.size(0) * i];
      }
    }
    minDist.set_size(&bac_emlrtRTEI, &sp, searchRadius.size(0));
    for (i = 0; i < c_loop_ub; i++) {
      minDist[i] = static_cast<real32_T>(searchRadius[i]) * predictedScales[i];
    }
    st.site = &elc_emlrtRSI;
    coder::matchFeaturesInRadius(st, b_this, d_this, b_currPoints,
                                 b_projectedPoints, minDist, indexPairs);
  } else {
    st.site = &elc_emlrtRSI;
    binary_expand_op_57(st, indexPairs, elc_emlrtRSI, b_this, d_this,
                        currPoints, unmatchedfeatureIdx, projectedPoints, r3,
                        searchRadius, predictedScales);
  }
  //  Filter by scales
  loop_ub = indexPairs.size(0);
  minDist.set_size(&cac_emlrtRTEI, &sp, indexPairs.size(0));
  for (i = 0; i < loop_ub; i++) {
    if ((static_cast<int32_T>(indexPairs[i + indexPairs.size(0)]) < 1) ||
        (static_cast<int32_T>(indexPairs[i + indexPairs.size(0)]) >
         currPoints.pScale.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(indexPairs[i + indexPairs.size(0)]), 1,
          currPoints.pScale.size(0), &lgb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    minDist[i] =
        currPoints
            .pScale[static_cast<int32_T>(indexPairs[i + indexPairs.size(0)]) -
                    1];
  }
  for (i = 0; i < loop_ub; i++) {
    if ((static_cast<int32_T>(indexPairs[i]) < 1) ||
        (static_cast<int32_T>(indexPairs[i]) > predictedScales.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indexPairs[i]), 1,
                                    predictedScales.size(0), &mgb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  dist.set_size(&dac_emlrtRTEI, &sp, indexPairs.size(0));
  for (i = 0; i < loop_ub; i++) {
    varargin_2 =
        predictedScales[static_cast<int32_T>(indexPairs[i]) - 1] / 1.2F;
    dist[i] = muSingleScalarMax(1.0F, varargin_2);
  }
  maxDist.set_size(&eac_emlrtRTEI, &sp, indexPairs.size(0));
  for (i = 0; i < loop_ub; i++) {
    if ((static_cast<int32_T>(indexPairs[i]) < 1) ||
        (static_cast<int32_T>(indexPairs[i]) > predictedScales.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indexPairs[i]), 1,
                                    predictedScales.size(0), &ngb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    maxDist[i] = predictedScales[static_cast<int32_T>(indexPairs[i]) - 1];
  }
  unnamed_idx_0 = static_cast<uint32_T>(dist.size(0));
  miniScale.set_size(&fac_emlrtRTEI, &sp, indexPairs.size(0));
  validByView.set_size(&gac_emlrtRTEI, &sp, indexPairs.size(0));
  scalarLB = indexPairs.size(0);
  emlrtEnterParallelRegion((emlrtCTX)&sp,
                           static_cast<boolean_T>(omp_in_parallel()));
  helperTrackLocalMapCg_numThreads =
      emlrtAllocRegionTLSs(sp.tls, static_cast<boolean_T>(omp_in_parallel()),
                           omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(helperTrackLocalMapCg_numThreads) private(    \
        f_st) firstprivate(emlrtHadParallelError)
  {
    try {
      f_st.prev = &sp;
      f_st.tls = emlrtAllocTLS((emlrtCTX)&sp, omp_get_thread_num());
      f_st.site = nullptr;
    } catch (...) {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (b_i = 0; b_i < scalarLB; b_i++) {
      if (emlrtHadParallelError) {
        continue;
      }
      try {
        if (b_i + 1 > minDist.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, minDist.size(0),
                                        &ogb_emlrtBCI, &f_st);
        }
        if (b_i + 1 > dist.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, dist.size(0), &pgb_emlrtBCI,
                                        &f_st);
        }
        if (minDist[b_i] >= dist[b_i]) {
          if (b_i + 1 > miniScale.size(0)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, miniScale.size(0),
                                          &rgb_emlrtBCI, &f_st);
          }
          miniScale[b_i] = true;
        } else {
          if (b_i + 1 > miniScale.size(0)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, miniScale.size(0),
                                          &qgb_emlrtBCI, &f_st);
          }
          miniScale[b_i] = false;
        }
        if (b_i + 1 > minDist.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, minDist.size(0),
                                        &sgb_emlrtBCI, &f_st);
        }
        if (b_i + 1 > maxDist.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, maxDist.size(0),
                                        &tgb_emlrtBCI, &f_st);
        }
        if (minDist[b_i] <= maxDist[b_i]) {
          if (b_i + 1 > validByView.size(0)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, validByView.size(0),
                                          &vgb_emlrtBCI, &f_st);
          }
          validByView[b_i] = true;
        } else {
          if (b_i + 1 > validByView.size(0)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, validByView.size(0),
                                          &ugb_emlrtBCI, &f_st);
          }
          validByView[b_i] = false;
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&f_st);
        }
      } catch (...) {
        emlrtHadParallelError = true;
      }
    }
  }
  emlrtExitParallelRegion((emlrtCTX)&sp,
                          static_cast<boolean_T>(omp_in_parallel()));
  isGoodScale.set_size(&hac_emlrtRTEI, &sp,
                       static_cast<int32_T>(unnamed_idx_0));
  //  Filter by scales
  emlrtEnterParallelRegion((emlrtCTX)&sp,
                           static_cast<boolean_T>(omp_in_parallel()));
  helperTrackLocalMapCg_numThreads =
      emlrtAllocRegionTLSs(sp.tls, static_cast<boolean_T>(omp_in_parallel()),
                           omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(helperTrackLocalMapCg_numThreads) private(    \
        g_st) firstprivate(emlrtHadParallelError)
  {
    try {
      g_st.prev = &sp;
      g_st.tls = emlrtAllocTLS((emlrtCTX)&sp, omp_get_thread_num());
      g_st.site = nullptr;
    } catch (...) {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (b_i = 0; b_i < loop_ub; b_i++) {
      if (emlrtHadParallelError) {
        continue;
      }
      try {
        if (b_i + 1 > miniScale.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, miniScale.size(0),
                                        &ufb_emlrtBCI, &g_st);
        }
        if (b_i + 1 > validByView.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, validByView.size(0),
                                        &tfb_emlrtBCI, &g_st);
        }
        if (b_i + 1 > isGoodScale.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, isGoodScale.size(0),
                                        &wgb_emlrtBCI, &g_st);
        }
        isGoodScale[b_i] = (miniScale[b_i] && validByView[b_i]);
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&g_st);
        }
      } catch (...) {
        emlrtHadParallelError = true;
      }
    }
  }
  emlrtExitParallelRegion((emlrtCTX)&sp,
                          static_cast<boolean_T>(omp_in_parallel()));
  vectorUB = isGoodScale.size(0);
  scalarLB = 0;
  for (c_loop_ub = 0; c_loop_ub < vectorUB; c_loop_ub++) {
    if (isGoodScale[c_loop_ub]) {
      scalarLB++;
    }
  }
  r4.set_size(&nyb_emlrtRTEI, &sp, scalarLB);
  scalarLB = 0;
  for (c_loop_ub = 0; c_loop_ub < vectorUB; c_loop_ub++) {
    if (isGoodScale[c_loop_ub]) {
      r4[scalarLB] = c_loop_ub;
      scalarLB++;
    }
  }
  loop_ub = r4.size(0);
  b_indexPairs.set_size(&iac_emlrtRTEI, &sp, r4.size(0), 2);
  for (i = 0; i < 2; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      if (r4[i1] > indexPairs.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r4[i1], 0, indexPairs.size(0) - 1,
                                      &xgb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      b_indexPairs[i1 + b_indexPairs.size(0) * i] =
          indexPairs[r4[i1] + indexPairs.size(0) * i];
    }
  }
  loop_ub = b_indexPairs.size(0);
  indexPairs.set_size(&jac_emlrtRTEI, &sp, b_indexPairs.size(0), 2);
  scalarLB = b_indexPairs.size(0) << 1;
  for (i = 0; i < scalarLB; i++) {
    indexPairs[i] = b_indexPairs[i];
  }
  //  Refine camera pose with more 3D-to-2D correspondences
  searchRadius.set_size(&kac_emlrtRTEI, &sp,
                        indexPairs.size(0) + mapPointIdx.size(0));
  for (i = 0; i < loop_ub; i++) {
    if ((static_cast<int32_T>(indexPairs[i]) < 1) ||
        (static_cast<int32_T>(indexPairs[i]) > b_loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indexPairs[i]), 1,
                                    b_loop_ub, &ygb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    searchRadius[i] = newMapPointIdx[static_cast<int32_T>(indexPairs[i]) - 1];
  }
  b_loop_ub = mapPointIdx.size(0);
  for (i = 0; i < b_loop_ub; i++) {
    searchRadius[i + indexPairs.size(0)] = mapPointIdx[i];
  }
  b_loop_ub = searchRadius.size(0);
  mapPointIdx.set_size(&lac_emlrtRTEI, &sp, searchRadius.size(0));
  for (i = 0; i < b_loop_ub; i++) {
    mapPointIdx[i] = searchRadius[i];
  }
  expl_temp.set_size(&mac_emlrtRTEI, &sp,
                     indexPairs.size(0) + featureIdx.size(0));
  for (i = 0; i < loop_ub; i++) {
    if ((static_cast<int32_T>(indexPairs[i + indexPairs.size(0)]) < 1) ||
        (static_cast<int32_T>(indexPairs[i + indexPairs.size(0)]) >
         unmatchedfeatureIdx.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(indexPairs[i + indexPairs.size(0)]), 1,
          unmatchedfeatureIdx.size(0), &ahb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    expl_temp[i] = unmatchedfeatureIdx[static_cast<int32_T>(
                                           indexPairs[i + indexPairs.size(0)]) -
                                       1];
  }
  loop_ub = featureIdx.size(0);
  for (i = 0; i < loop_ub; i++) {
    expl_temp[i + indexPairs.size(0)] = featureIdx[i];
  }
  loop_ub = expl_temp.size(0);
  featureIdx.set_size(&nac_emlrtRTEI, &sp, expl_temp.size(0));
  for (i = 0; i < loop_ub; i++) {
    featureIdx[i] = expl_temp[i];
  }
  for (i = 0; i < b_loop_ub; i++) {
    if (mapPointIdx[i] !=
        static_cast<int32_T>(muDoubleScalarFloor(mapPointIdx[i]))) {
      emlrtIntegerCheckR2012b(mapPointIdx[i], &fd_emlrtDCI, (emlrtConstCTX)&sp);
    }
    i1 = static_cast<int32_T>(mapPointIdx[i]);
    if ((i1 < 1) || (i1 > mapPoints.WorldPoints.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, mapPoints.WorldPoints.size(0),
                                    &bhb_emlrtBCI, (emlrtConstCTX)&sp);
    }
  }
  for (i = 0; i < loop_ub; i++) {
    if ((static_cast<int32_T>(featureIdx[i]) < 1) ||
        (static_cast<int32_T>(featureIdx[i]) > currPoints.pLocation.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(featureIdx[i]), 1,
                                    currPoints.pLocation.size(0), &chb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  //  More than numSkipFrames frames have passed from last key frame insertion
  //  Track less than numPointsKeyFrame map points
  //  Tracked map points are fewer than 90% of points tracked by
  //  the reference key frame
  if (((currFrameIndex > lastKeyFrameIndex + 20.0) ||
       (mapPointIdx.size(0) < 80)) &&
      (mapPointIdx.size(0) < 0.9 * numPointsRefKeyFrame)) {
    isKeyFrame = true;
  } else {
    isKeyFrame = false;
  }
  c_loop_ub = localKeyFrameIdsInternal.size(0);
  localKeyFrameIds.set_size(&oac_emlrtRTEI, &sp, c_loop_ub);
  for (i = 0; i < c_loop_ub; i++) {
    localKeyFrameIds[i] = localKeyFrameIdsInternal[i];
  }
  if (isKeyFrame) {
    //  Refine camera pose only if the current frame is a key frame
    b_mapPoints.set_size(&pac_emlrtRTEI, &sp, searchRadius.size(0), 3);
    for (i = 0; i < 3; i++) {
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        b_mapPoints[i1 + b_mapPoints.size(0) * i] =
            mapPoints.WorldPoints[(static_cast<int32_T>(mapPointIdx[i1]) +
                                   mapPoints.WorldPoints.size(0) * i) -
                                  1];
      }
    }
    b_currPoints.set_size(&qac_emlrtRTEI, &sp, expl_temp.size(0), 2);
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_currPoints[i1 + b_currPoints.size(0) * i] =
            currPoints.pLocation[(static_cast<int32_T>(featureIdx[i1]) +
                                  currPoints.pLocation.size(0) * i) -
                                 1];
      }
    }
    b_currPose = currPose;
    st.site = &flc_emlrtRSI;
    coder::b_bundleAdjustmentMotion(st, b_mapPoints, b_currPoints, b_currPose,
                                    &intrinsics, currPose);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return isKeyFrame;
}

// End of code generation (helperTrackLocalMapCg.cpp)
