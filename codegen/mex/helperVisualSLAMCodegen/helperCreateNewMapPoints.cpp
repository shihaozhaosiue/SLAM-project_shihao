//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperCreateNewMapPoints.cpp
//
// Code generation for function 'helperCreateNewMapPoints'
//

// Include files
#include "helperCreateNewMapPoints.h"
#include "ORBPoints.h"
#include "abs.h"
#include "any1.h"
#include "binaryFeatures.h"
#include "cameraIntrinsics.h"
#include "cameraProjection.h"
#include "cosd.h"
#include "div.h"
#include "eml_setop.h"
#include "epipolarLine.h"
#include "estRelPoseImpl.h"
#include "helperTrackLocalMapCg.h"
#include "helperVisualSLAMCodegen.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "imageviewset.h"
#include "ixfun.h"
#include "matchFeatures.h"
#include "median.h"
#include "mldivide.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "norm.h"
#include "pose2extr.h"
#include "rigidtform3d.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "sum.h"
#include "triangulate.h"
#include "vecnorm.h"
#include "world2img.h"
#include "worldpointset.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo iqc_emlrtRSI{
    13,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo jqc_emlrtRSI{
    17,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo kqc_emlrtRSI{
    18,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo lqc_emlrtRSI{
    25,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo mqc_emlrtRSI{
    29,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo nqc_emlrtRSI{
    33,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo oqc_emlrtRSI{
    38,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo pqc_emlrtRSI{
    57,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo qqc_emlrtRSI{
    61,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo rqc_emlrtRSI{
    62,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo sqc_emlrtRSI{
    73,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo tqc_emlrtRSI{
    84,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo uqc_emlrtRSI{
    85,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo vqc_emlrtRSI{
    88,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo wqc_emlrtRSI{
    91,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo xqc_emlrtRSI{
    92,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo yqc_emlrtRSI{
    93,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo arc_emlrtRSI{
    102,                        // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo brc_emlrtRSI{
    109,                        // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo crc_emlrtRSI{
    112,                        // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo drc_emlrtRSI{
    116,                        // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo erc_emlrtRSI{
    121,                        // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo frc_emlrtRSI{
    128,                        // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo grc_emlrtRSI{
    132,                        // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo hrc_emlrtRSI{
    133,                        // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo irc_emlrtRSI{
    141,                        // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo jrc_emlrtRSI{
    142,                        // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo krc_emlrtRSI{
    144,                        // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo lrc_emlrtRSI{
    146,                        // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo mrc_emlrtRSI{
    147,                        // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo xrc_emlrtRSI{
    168,        // lineNo
    "computeF", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo yrc_emlrtRSI{
    196,               // lineNo
    "isLargeParalalx", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo asc_emlrtRSI{
    197,               // lineNo
    "isLargeParalalx", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo bsc_emlrtRSI{
    199,               // lineNo
    "isLargeParalalx", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo csc_emlrtRSI{
    178,                           // lineNo
    "filterTriangulatedMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo dsc_emlrtRSI{
    179,                           // lineNo
    "filterTriangulatedMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo esc_emlrtRSI{
    180,                           // lineNo
    "filterTriangulatedMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo fsc_emlrtRSI{
    181,                           // lineNo
    "filterTriangulatedMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo gsc_emlrtRSI{
    185,                           // lineNo
    "filterTriangulatedMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo hsc_emlrtRSI{
    186,                           // lineNo
    "filterTriangulatedMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo isc_emlrtRSI{
    189,                           // lineNo
    "filterTriangulatedMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo
    jsc_emlrtRSI{
        51,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo
    ksc_emlrtRSI{
        87,         // lineNo
        "minimum2", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo osc_emlrtRSI{
    95,          // lineNo
    "eml_setop", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pathName
};

static emlrtECInfo sd_emlrtECI{
    1,                 // nDims
    199,               // lineNo
    39,                // colNo
    "isLargeParalalx", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtECInfo td_emlrtECI{
    1,                 // nDims
    199,               // lineNo
    19,                // colNo
    "isLargeParalalx", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtBCInfo st_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    197,               // lineNo
    38,                // colNo
    "points1",         // aName
    "isLargeParalalx", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo tt_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    196,               // lineNo
    38,                // colNo
    "points1",         // aName
    "isLargeParalalx", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtECInfo he_emlrtECI{
    1,                             // nDims
    185,                           // lineNo
    16,                            // colNo
    "filterTriangulatedMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtECInfo ie_emlrtECI{
    1,                             // nDims
    189,                           // lineNo
    15,                            // colNo
    "filterTriangulatedMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtECInfo je_emlrtECI{
    1,                             // nDims
    190,                           // lineNo
    15,                            // colNo
    "filterTriangulatedMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtBCInfo mib_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    144,                        // lineNo
    46,                         // colNo
    "connections.Matches",      // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo nib_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    58,                         // lineNo
    37,                         // colNo
    "currIndex2dCg",            // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo oib_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    49,                         // lineNo
    32,                         // colNo
    "views.Points",             // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo pib_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    48,                         // lineNo
    34,                         // colNo
    "views.Features",           // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo qib_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    35,                         // lineNo
    33,                         // colNo
    "kfIndex2dCg",              // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo rib_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    34,                         // lineNo
    33,                         // colNo
    "kfIndex3dCg",              // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo sib_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    20,                         // lineNo
    32,                         // colNo
    "views.Points",             // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo tib_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    19,                         // lineNo
    34,                         // colNo
    "views.Features",           // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo uib_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    143,                        // lineNo
    24,                         // colNo
    "KcIDs",                    // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtECInfo df_emlrtECI{
    1,                          // nDims
    94,                         // lineNo
    15,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtECInfo ef_emlrtECI{
    1,                          // nDims
    95,                         // lineNo
    9,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtECInfo ff_emlrtECI{
    2,                          // nDims
    92,                         // lineNo
    26,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtECInfo gf_emlrtECI{
    1,                          // nDims
    92,                         // lineNo
    26,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtECInfo hf_emlrtECI{
    2,                          // nDims
    85,                         // lineNo
    29,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtDCInfo md_emlrtDCI{
    49,                         // lineNo
    32,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    1                                             // checkKind
};

static emlrtDCInfo nd_emlrtDCI{
    48,                         // lineNo
    34,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    1                                             // checkKind
};

static emlrtDCInfo od_emlrtDCI{
    20,                         // lineNo
    32,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    1                                             // checkKind
};

static emlrtDCInfo pd_emlrtDCI{
    19,                         // lineNo
    34,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo vib_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    29,                         // lineNo
    44,                         // colNo
    "KcIDs",                    // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo wib_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    33,                         // lineNo
    77,                         // colNo
    "KcIDs",                    // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo xib_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    37,                         // lineNo
    41,                         // colNo
    "mapPoints.WorldPoints",    // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo yib_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    48,                         // lineNo
    40,                         // colNo
    "KcIDs",                    // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ajb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    49,                         // lineNo
    38,                         // colNo
    "KcIDs",                    // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo bjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    64,                         // lineNo
    30,                         // colNo
    "kfFeatures",               // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo cjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    65,                         // lineNo
    32,                         // colNo
    "currFeatures",             // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo djb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    67,                         // lineNo
    31,                         // colNo
    "kfLocations",              // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ejb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    68,                         // lineNo
    33,                         // colNo
    "currLocations",            // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo fjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    70,                         // lineNo
    28,                         // colNo
    "kfScales",                 // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo gjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    71,                         // lineNo
    30,                         // colNo
    "currScales",               // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo hjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    80,                         // lineNo
    34,                         // colNo
    "uLocations1",              // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ijb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    81,                         // lineNo
    34,                         // colNo
    "uLocations2",              // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo jjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    94,                         // lineNo
    39,                         // colNo
    "uScales2",                 // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo kjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    95,                         // lineNo
    37,                         // colNo
    "uScales2",                 // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ljb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    97,                         // lineNo
    29,                         // colNo
    "indexPairs",               // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo mjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    98,                         // lineNo
    37,                         // colNo
    "matchedPoints1",           // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo njb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    99,                         // lineNo
    37,                         // colNo
    "matchedPoints2",           // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ojb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    105,                        // lineNo
    38,                         // colNo
    "matchedPoints1",           // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo pjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    106,                        // lineNo
    38,                         // colNo
    "matchedPoints2",           // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo qjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    107,                        // lineNo
    34,                         // colNo
    "indexPairs",               // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo rjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    117,                        // lineNo
    18,                         // colNo
    "uScales1",                 // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo sjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    117,                        // lineNo
    45,                         // colNo
    "uScales2",                 // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo tjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    122,                        // lineNo
    33,                         // colNo
    "xyzPoints",                // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ujb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    123,                        // lineNo
    34,                         // colNo
    "indexPairs",               // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo vjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    125,                        // lineNo
    33,                         // colNo
    "uIndices1",                // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo wjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    126,                        // lineNo
    33,                         // colNo
    "uIndices2",                // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo xjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    132,                        // lineNo
    58,                         // colNo
    "KcIDs",                    // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo yjb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    147,                        // lineNo
    64,                         // colNo
    "KcIDs",                    // aName
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m", // pName
    0                                             // checkKind
};

static emlrtRTEInfo omb_emlrtRTEI{
    199,                        // lineNo
    19,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo pmb_emlrtRTEI{
    200,                        // lineNo
    15,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo qmb_emlrtRTEI{
    200,                        // lineNo
    49,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo ptb_emlrtRTEI{
    174,                        // lineNo
    15,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo qtb_emlrtRTEI{
    175,                        // lineNo
    15,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo stb_emlrtRTEI{
    185,                        // lineNo
    16,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo ttb_emlrtRTEI{
    186,                        // lineNo
    5,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo utb_emlrtRTEI{
    15,    // lineNo
    5,     // colNo
    "min", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" // pName
};

static emlrtRTEInfo vtb_emlrtRTEI{
    189,                        // lineNo
    1,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo nbc_emlrtRTEI{
    27,                         // lineNo
    1,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo obc_emlrtRTEI{
    38,                         // lineNo
    34,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo pbc_emlrtRTEI{
    61,                         // lineNo
    27,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo qbc_emlrtRTEI{
    62,                         // lineNo
    27,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo rbc_emlrtRTEI{
    71,                         // lineNo
    5,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo sbc_emlrtRTEI{
    80,                         // lineNo
    5,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo tbc_emlrtRTEI{
    81,                         // lineNo
    5,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo ubc_emlrtRTEI{
    85,                         // lineNo
    29,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo vbc_emlrtRTEI{
    92,                         // lineNo
    36,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo wbc_emlrtRTEI{
    92,                         // lineNo
    26,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo xbc_emlrtRTEI{
    94,                         // lineNo
    28,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo ybc_emlrtRTEI{
    95,                         // lineNo
    25,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo acc_emlrtRTEI{
    94,                         // lineNo
    15,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo bcc_emlrtRTEI{
    95,                         // lineNo
    9,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo ccc_emlrtRTEI{
    1,                          // lineNo
    55,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo dcc_emlrtRTEI{
    97,                         // lineNo
    18,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo ecc_emlrtRTEI{
    97,                         // lineNo
    5,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo fcc_emlrtRTEI{
    98,                         // lineNo
    22,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo gcc_emlrtRTEI{
    98,                         // lineNo
    5,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo hcc_emlrtRTEI{
    99,                         // lineNo
    22,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo icc_emlrtRTEI{
    99,                         // lineNo
    5,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo jcc_emlrtRTEI{
    105,                        // lineNo
    23,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo kcc_emlrtRTEI{
    105,                        // lineNo
    5,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo lcc_emlrtRTEI{
    106,                        // lineNo
    23,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo mcc_emlrtRTEI{
    106,                        // lineNo
    5,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo ncc_emlrtRTEI{
    107,                        // lineNo
    23,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo occ_emlrtRTEI{
    107,                        // lineNo
    5,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo pcc_emlrtRTEI{
    70,                         // lineNo
    19,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo qcc_emlrtRTEI{
    117,                        // lineNo
    36,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo rcc_emlrtRTEI{
    123,                        // lineNo
    23,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo scc_emlrtRTEI{
    123,                        // lineNo
    9,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo tcc_emlrtRTEI{
    125,                        // lineNo
    9,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo ucc_emlrtRTEI{
    126,                        // lineNo
    9,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo vcc_emlrtRTEI{
    122,                        // lineNo
    23,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo wcc_emlrtRTEI{
    146,                        // lineNo
    22,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRTEInfo jfc_emlrtRTEI{
    190,                        // lineNo
    15,                         // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

static emlrtRSInfo jid_emlrtRSI{
    94,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo nid_emlrtRSI{
    190,                           // lineNo
    "filterTriangulatedMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

static emlrtRSInfo kjd_emlrtRSI{
    95,                         // lineNo
    "helperCreateNewMapPoints", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pathName
};

// Function Declarations
static void binary_expand_op_39(const emlrtStack &sp,
                                coder::array<real32_T, 1U> &in1,
                                const emlrtRSInfo in2,
                                const coder::array<real32_T, 2U> &in3,
                                const coder::array<real32_T, 2U> &in4);

static void binary_expand_op_54(const emlrtStack &sp,
                                coder::array<boolean_T, 1U> &in1,
                                const coder::array<real32_T, 1U> &in2,
                                const coder::array<real32_T, 1U> &in3);

static void binary_expand_op_59(const emlrtStack &sp,
                                coder::array<real32_T, 1U> &in1,
                                const emlrtRSInfo in2,
                                const coder::array<real32_T, 2U> &in3,
                                const coder::array<real32_T, 2U> &in4);

static void binary_expand_op_60(const emlrtStack &sp,
                                coder::array<real32_T, 1U> &in1,
                                const emlrtRSInfo in2,
                                const coder::array<real32_T, 2U> &in3,
                                const real32_T in4[2]);

static void filterTriangulatedMapPoints(
    const emlrtStack &sp, const coder::array<real32_T, 2U> &xyzPoints,
    const coder::b_rigidtform3d &pose1, const coder::b_rigidtform3d &pose2,
    const coder::array<real32_T, 1U> &scales1,
    const coder::array<real32_T, 1U> &scales2,
    const coder::array<real32_T, 1U> &reprojectionErrors,
    const coder::array<boolean_T, 1U> &isInFront,
    coder::array<boolean_T, 1U> &inlier);

static void g_and(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
                  const coder::array<boolean_T, 1U> &in2);

static void isLargeParalalx(const emlrtStack &sp,
                            const coder::array<real32_T, 2U> &points1,
                            const coder::array<real32_T, 2U> &points2,
                            const coder::b_rigidtform3d &pose1,
                            const coder::b_rigidtform3d &pose2,
                            const coder::cameraIntrinsics &intrinsics,
                            coder::array<boolean_T, 1U> &isLarge);

static void lt(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
               const coder::array<real32_T, 1U> &in2,
               const coder::array<real32_T, 1U> &in3);

// Function Definitions
static void binary_expand_op_39(const emlrtStack &sp,
                                coder::array<real32_T, 1U> &in1,
                                const emlrtRSInfo in2,
                                const coder::array<real32_T, 2U> &in3,
                                const coder::array<real32_T, 2U> &in4)
{
  coder::array<real32_T, 2U> b_in3;
  emlrtStack st;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }
  b_in3.set_size(&omb_emlrtRTEI, &sp, loop_ub, 3);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  for (int32_T i{0}; i < 3; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in3[i1 + b_in3.size(0) * i] = in3[i1 * stride_0_0 + in3.size(0) * i] *
                                      in4[i1 * stride_1_0 + in4.size(0) * i];
    }
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::b_sum(st, b_in3, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_54(const emlrtStack &sp,
                                coder::array<boolean_T, 1U> &in1,
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
  in1.set_size(&ttb_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] / in3[i * stride_1_0] < 1.7999999999999998);
  }
}

static void binary_expand_op_59(const emlrtStack &sp,
                                coder::array<real32_T, 1U> &in1,
                                const emlrtRSInfo in2,
                                const coder::array<real32_T, 2U> &in3,
                                const coder::array<real32_T, 2U> &in4)
{
  coder::array<real32_T, 2U> b_in3;
  emlrtStack st;
  int32_T aux_1_1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_1_1;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }
  b_in3.set_size(&wbc_emlrtRTEI, &sp, loop_ub, 3);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  stride_1_1 = (in4.size(1) != 1);
  aux_1_1 = 0;
  for (int32_T i{0}; i < 3; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in3[i1 + b_in3.size(0) * i] =
          in3[i1 * stride_0_0 + in3.size(0) * i] *
          in4[i1 * stride_1_0 + in4.size(0) * aux_1_1];
    }
    aux_1_1 += stride_1_1;
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::b_sum(st, b_in3, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_60(const emlrtStack &sp,
                                coder::array<real32_T, 1U> &in1,
                                const emlrtRSInfo in2,
                                const coder::array<real32_T, 2U> &in3,
                                const real32_T in4[2])
{
  coder::array<real32_T, 2U> b_in3;
  emlrtStack st;
  int32_T aux_0_1;
  int32_T loop_ub;
  int32_T scalarLB;
  int32_T stride_0_1;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  loop_ub = in3.size(0);
  b_in3.set_size(&ubc_emlrtRTEI, &sp, loop_ub, 2);
  stride_0_1 = (in3.size(1) != 1);
  aux_0_1 = 0;
  scalarLB = (loop_ub / 4) << 2;
  vectorUB = scalarLB - 4;
  for (int32_T i{0}; i < 2; i++) {
    for (int32_T i1{0}; i1 <= vectorUB; i1 += 4) {
      __m128 b_r;
      b_r = _mm_loadu_ps(&in3[i1 + in3.size(0) * aux_0_1]);
      _mm_storeu_ps(&b_in3[i1 + b_in3.size(0) * i],
                    _mm_sub_ps(b_r, _mm_set1_ps(in4[i])));
    }
    for (int32_T i1{scalarLB}; i1 < loop_ub; i1++) {
      b_in3[i1 + b_in3.size(0) * i] = in3[i1 + in3.size(0) * aux_0_1] - in4[i];
    }
    aux_0_1 += stride_0_1;
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::b_vecnorm(st, b_in3, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void filterTriangulatedMapPoints(
    const emlrtStack &sp, const coder::array<real32_T, 2U> &xyzPoints,
    const coder::b_rigidtform3d &pose1, const coder::b_rigidtform3d &pose2,
    const coder::array<real32_T, 1U> &scales1,
    const coder::array<real32_T, 1U> &scales2,
    const coder::array<real32_T, 1U> &reprojectionErrors,
    const coder::array<boolean_T, 1U> &isInFront,
    coder::array<boolean_T, 1U> &inlier)
{
  __m128 b_r;
  coder::array<real32_T, 2U> b_xyzPoints;
  coder::array<real32_T, 1U> distances1;
  coder::array<real32_T, 1U> distances2;
  coder::array<boolean_T, 1U> isSmallError;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T loop_ub;
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
  //  Check scale consistency and reprojection errors
  loop_ub = xyzPoints.size(0);
  b_xyzPoints.set_size(&ptb_emlrtRTEI, &sp, xyzPoints.size(0), 3);
  scalarLB = (loop_ub / 4) << 2;
  vectorUB = scalarLB - 4;
  for (int32_T i{0}; i < 3; i++) {
    for (int32_T i1{0}; i1 <= vectorUB; i1 += 4) {
      _mm_storeu_ps(
          &b_xyzPoints[i1 + b_xyzPoints.size(0) * i],
          _mm_sub_ps(_mm_loadu_ps(&xyzPoints[i1 + xyzPoints.size(0) * i]),
                     _mm_set1_ps(pose1.Translation[i])));
    }
    for (int32_T i1{scalarLB}; i1 < loop_ub; i1++) {
      b_xyzPoints[i1 + b_xyzPoints.size(0) * i] =
          xyzPoints[i1 + xyzPoints.size(0) * i] - pose1.Translation[i];
    }
  }
  st.site = &csc_emlrtRSI;
  coder::vecnorm(st, b_xyzPoints, distances1);
  b_xyzPoints.set_size(&qtb_emlrtRTEI, &sp, xyzPoints.size(0), 3);
  scalarLB = (loop_ub / 4) << 2;
  vectorUB = scalarLB - 4;
  for (int32_T i{0}; i < 3; i++) {
    for (int32_T i1{0}; i1 <= vectorUB; i1 += 4) {
      _mm_storeu_ps(
          &b_xyzPoints[i1 + b_xyzPoints.size(0) * i],
          _mm_sub_ps(_mm_loadu_ps(&xyzPoints[i1 + xyzPoints.size(0) * i]),
                     _mm_set1_ps(pose2.Translation[i])));
    }
    for (int32_T i1{scalarLB}; i1 < loop_ub; i1++) {
      b_xyzPoints[i1 + b_xyzPoints.size(0) * i] =
          xyzPoints[i1 + xyzPoints.size(0) * i] - pose2.Translation[i];
    }
  }
  st.site = &dsc_emlrtRSI;
  coder::vecnorm(st, b_xyzPoints, distances2);
  st.site = &esc_emlrtRSI;
  b_st.site = &lf_emlrtRSI;
  c_st.site = &mf_emlrtRSI;
  if ((distances1.size(0) != 1) && (distances2.size(0) != 1) &&
      (distances1.size(0) != distances2.size(0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  if (distances1.size(0) == distances2.size(0)) {
    loop_ub = distances1.size(0);
    scalarLB = (distances1.size(0) / 4) << 2;
    vectorUB = scalarLB - 4;
    for (int32_T i{0}; i <= vectorUB; i += 4) {
      __m128 r1;
      b_r = _mm_loadu_ps(&distances1[i]);
      r1 = _mm_loadu_ps(&distances2[i]);
      _mm_storeu_ps(&distances1[i], _mm_div_ps(b_r, r1));
    }
    for (int32_T i{scalarLB}; i < loop_ub; i++) {
      distances1[i] = distances1[i] / distances2[i];
    }
  } else {
    c_st.site = &uid_emlrtRSI;
    rdivide(c_st, distances1, distances2);
  }
  st.site = &fsc_emlrtRSI;
  b_st.site = &lf_emlrtRSI;
  c_st.site = &mf_emlrtRSI;
  if ((scales2.size(0) != 1) && (scales1.size(0) != 1) &&
      (scales2.size(0) != scales1.size(0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  if (scales2.size(0) == scales1.size(0)) {
    loop_ub = scales2.size(0);
    distances2.set_size(&rtb_emlrtRTEI, &b_st, scales2.size(0));
    scalarLB = (scales2.size(0) / 4) << 2;
    vectorUB = scalarLB - 4;
    for (int32_T i{0}; i <= vectorUB; i += 4) {
      _mm_storeu_ps(&distances2[i], _mm_div_ps(_mm_loadu_ps(&scales2[i]),
                                               _mm_loadu_ps(&scales1[i])));
    }
    for (int32_T i{scalarLB}; i < loop_ub; i++) {
      distances2[i] = scales2[i] / scales1[i];
    }
  } else {
    c_st.site = &uid_emlrtRSI;
    rdivide(c_st, distances2, scales2, scales1);
  }
  st.site = &gsc_emlrtRSI;
  b_st.site = &lf_emlrtRSI;
  c_st.site = &mf_emlrtRSI;
  if ((distances1.size(0) != 1) && (distances2.size(0) != 1) &&
      (distances1.size(0) != distances2.size(0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  if (distances1.size(0) == distances2.size(0)) {
    loop_ub = distances1.size(0);
    inlier.set_size(&stb_emlrtRTEI, &sp, distances1.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      inlier[i] = (distances1[i] / distances2[i] < 1.7999999999999998);
    }
  } else {
    st.site = &gsc_emlrtRSI;
    binary_expand_op_54(st, inlier, distances1, distances2);
  }
  st.site = &hsc_emlrtRSI;
  b_st.site = &lf_emlrtRSI;
  c_st.site = &mf_emlrtRSI;
  if ((distances2.size(0) != 1) && (distances1.size(0) != 1) &&
      (distances2.size(0) != distances1.size(0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  if (distances2.size(0) == distances1.size(0)) {
    loop_ub = distances2.size(0);
    isSmallError.set_size(&ttb_emlrtRTEI, &sp, distances2.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      isSmallError[i] = (distances2[i] / distances1[i] < 1.7999999999999998);
    }
  } else {
    st.site = &hsc_emlrtRSI;
    binary_expand_op_54(st, isSmallError, distances2, distances1);
  }
  loop_ub = inlier.size(0);
  if ((inlier.size(0) != isSmallError.size(0)) &&
      ((inlier.size(0) != 1) && (isSmallError.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(inlier.size(0), isSmallError.size(0),
                                &he_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (inlier.size(0) == isSmallError.size(0)) {
    for (int32_T i{0}; i < loop_ub; i++) {
      inlier[i] = (inlier[i] || isSmallError[i]);
    }
  } else {
    st.site = &gsc_emlrtRSI;
    b_or(st, inlier, isSmallError);
  }
  st.site = &isc_emlrtRSI;
  b_st.site = &vv_emlrtRSI;
  c_st.site = &jsc_emlrtRSI;
  d_st.site = &ksc_emlrtRSI;
  e_st.site = &nwb_emlrtRSI;
  f_st.site = &wy_emlrtRSI;
  if (scales1.size(0) == scales2.size(0)) {
    loop_ub = scales1.size(0);
    distances2.set_size(&utb_emlrtRTEI, &f_st, scales1.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      real32_T varargin_1;
      real32_T varargin_2;
      varargin_1 = scales1[i];
      varargin_2 = scales2[i];
      distances2[i] = muSingleScalarMin(varargin_1, varargin_2);
    }
  } else {
    g_st.site = &xy_emlrtRSI;
    coder::internal::expand_min(g_st, scales1, scales2, distances2);
  }
  loop_ub = distances2.size(0);
  scalarLB = (distances2.size(0) / 4) << 2;
  vectorUB = scalarLB - 4;
  for (int32_T i{0}; i <= vectorUB; i += 4) {
    b_r = _mm_loadu_ps(&distances2[i]);
    _mm_storeu_ps(&distances2[i], _mm_mul_ps(_mm_set1_ps(2.44948983F), b_r));
  }
  for (int32_T i{scalarLB}; i < loop_ub; i++) {
    distances2[i] = 2.44948983F * distances2[i];
  }
  loop_ub = reprojectionErrors.size(0);
  if ((reprojectionErrors.size(0) != distances2.size(0)) &&
      ((reprojectionErrors.size(0) != 1) && (distances2.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(reprojectionErrors.size(0), distances2.size(0),
                                &ie_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (reprojectionErrors.size(0) == distances2.size(0)) {
    isSmallError.set_size(&vtb_emlrtRTEI, &sp, reprojectionErrors.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      isSmallError[i] = (reprojectionErrors[i] < distances2[i]);
    }
  } else {
    st.site = &isc_emlrtRSI;
    lt(st, isSmallError, reprojectionErrors, distances2);
  }
  loop_ub = inlier.size(0);
  if ((inlier.size(0) != isSmallError.size(0)) &&
      ((inlier.size(0) != 1) && (isSmallError.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(inlier.size(0), isSmallError.size(0),
                                &je_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (inlier.size(0) == isSmallError.size(0)) {
    for (int32_T i{0}; i < loop_ub; i++) {
      inlier[i] = (inlier[i] && isSmallError[i]);
    }
  } else {
    st.site = &nid_emlrtRSI;
    c_and(st, inlier, isSmallError);
  }
  loop_ub = inlier.size(0);
  if ((inlier.size(0) != isInFront.size(0)) &&
      ((inlier.size(0) != 1) && (isInFront.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(inlier.size(0), isInFront.size(0), &je_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (inlier.size(0) == isInFront.size(0)) {
    for (int32_T i{0}; i < loop_ub; i++) {
      inlier[i] = (inlier[i] && isInFront[i]);
    }
  } else {
    st.site = &nid_emlrtRSI;
    g_and(st, inlier, isInFront);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void g_and(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
                  const coder::array<boolean_T, 1U> &in2)
{
  coder::array<boolean_T, 1U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  b_in1.set_size(&jfc_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = (in1[i * stride_0_0] && in2[i * stride_1_0]);
  }
  in1.set_size(&jfc_emlrtRTEI, &sp, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void isLargeParalalx(const emlrtStack &sp,
                            const coder::array<real32_T, 2U> &points1,
                            const coder::array<real32_T, 2U> &points2,
                            const coder::b_rigidtform3d &pose1,
                            const coder::b_rigidtform3d &pose2,
                            const coder::cameraIntrinsics &intrinsics,
                            coder::array<boolean_T, 1U> &isLarge)
{
  __m128 r1;
  __m128 r2;
  coder::array<real32_T, 2U> Y;
  coder::array<real32_T, 2U> b_result;
  coder::array<real32_T, 2U> ray1;
  coder::array<real32_T, 2U> ray2;
  coder::array<real32_T, 1U> b_r;
  coder::array<real32_T, 1U> cosParallax;
  coder::array<real32_T, 1U> y;
  coder::array<boolean_T, 1U> r3;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T ray1_tmp[9];
  real_T d;
  int32_T loop_ub;
  int32_T result;
  int32_T scalarLB;
  int32_T vectorUB;
  int8_T input_sizes_idx_1;
  int8_T sizes_idx_1;
  boolean_T b;
  boolean_T empty_non_axis_sizes;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  //  Parallax check
  if (points1.size(1) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, points1.size(1), &tt_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  for (int32_T i{0}; i < 3; i++) {
    ray1_tmp[3 * i] = intrinsics.K[i];
    ray1_tmp[3 * i + 1] = intrinsics.K[i + 3];
    ray1_tmp[3 * i + 2] = intrinsics.K[i + 6];
  }
  st.site = &yrc_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  b = ((points1.size(0) != 0) && (points1.size(1) != 0));
  if (b) {
    result = points1.size(0);
  } else if (points1.size(0) != 0) {
    result = points1.size(0);
  } else {
    result = 0;
  }
  c_st.site = &jj_emlrtRSI;
  if ((points1.size(0) != result) &&
      ((points1.size(0) != 0) && (points1.size(1) != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((points1.size(0) != result) && (points1.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || b) {
    input_sizes_idx_1 = static_cast<int8_T>(points1.size(1));
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (points1.size(0) != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  b_result.set_size(&rr_emlrtRTEI, &b_st, result,
                    input_sizes_idx_1 + sizes_idx_1);
  loop_ub = input_sizes_idx_1;
  for (int32_T i{0}; i < loop_ub; i++) {
    for (scalarLB = 0; scalarLB < result; scalarLB++) {
      b_result[scalarLB + b_result.size(0) * i] =
          points1[scalarLB + result * i];
    }
  }
  loop_ub = sizes_idx_1;
  for (int32_T i{0}; i < loop_ub; i++) {
    for (scalarLB = 0; scalarLB < result; scalarLB++) {
      b_result[scalarLB + b_result.size(0) * input_sizes_idx_1] = 1.0F;
    }
  }
  st.site = &yrc_emlrtRSI;
  if (b_result.size(1) != 3) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  b_st.site = &oq_emlrtRSI;
  coder::internal::mrdiv(b_st, b_result, ray1_tmp, Y);
  st.site = &yrc_emlrtRSI;
  b_st.site = &ln_emlrtRSI;
  coder::internal::blas::b_mtimes(b_st, Y, pose1.R, ray1);
  if (points1.size(1) < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, points1.size(1), &st_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  st.site = &asc_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  b = ((points2.size(0) != 0) && (points2.size(1) != 0));
  if (b) {
    result = points2.size(0);
  } else if (points1.size(0) != 0) {
    result = points1.size(0);
  } else {
    result = points2.size(0);
  }
  c_st.site = &jj_emlrtRSI;
  if ((points2.size(0) != result) &&
      ((points2.size(0) != 0) && (points2.size(1) != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((points1.size(0) != result) && (points1.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || b) {
    input_sizes_idx_1 = static_cast<int8_T>(points2.size(1));
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (points1.size(0) != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  b_result.set_size(&rr_emlrtRTEI, &b_st, result,
                    input_sizes_idx_1 + sizes_idx_1);
  loop_ub = input_sizes_idx_1;
  for (int32_T i{0}; i < loop_ub; i++) {
    for (scalarLB = 0; scalarLB < result; scalarLB++) {
      b_result[scalarLB + b_result.size(0) * i] =
          points2[scalarLB + result * i];
    }
  }
  loop_ub = sizes_idx_1;
  for (int32_T i{0}; i < loop_ub; i++) {
    for (scalarLB = 0; scalarLB < result; scalarLB++) {
      b_result[scalarLB + b_result.size(0) * input_sizes_idx_1] = 1.0F;
    }
  }
  st.site = &asc_emlrtRSI;
  if (b_result.size(1) != 3) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  b_st.site = &oq_emlrtRSI;
  coder::internal::mrdiv(b_st, b_result, ray1_tmp, Y);
  st.site = &asc_emlrtRSI;
  b_st.site = &ln_emlrtRSI;
  coder::internal::blas::b_mtimes(b_st, Y, pose2.R, ray2);
  if ((ray1.size(0) != ray2.size(0)) &&
      ((ray1.size(0) != 1) && (ray2.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(ray1.size(0), ray2.size(0), &td_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  st.site = &bsc_emlrtRSI;
  coder::vecnorm(st, ray1, y);
  st.site = &bsc_emlrtRSI;
  coder::vecnorm(st, ray2, b_r);
  loop_ub = y.size(0);
  if ((y.size(0) != b_r.size(0)) && ((y.size(0) != 1) && (b_r.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(y.size(0), b_r.size(0), &sd_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  st.site = &bsc_emlrtRSI;
  if (ray1.size(0) == ray2.size(0)) {
    Y.set_size(&omb_emlrtRTEI, &st, ray1.size(0), 3);
    result = ray1.size(0) * 3;
    scalarLB = (result / 4) << 2;
    vectorUB = scalarLB - 4;
    for (int32_T i{0}; i <= vectorUB; i += 4) {
      r1 = _mm_loadu_ps(&ray1[i]);
      r2 = _mm_loadu_ps(&ray2[i]);
      _mm_storeu_ps(&Y[i], _mm_mul_ps(r1, r2));
    }
    for (int32_T i{scalarLB}; i < result; i++) {
      Y[i] = ray1[i] * ray2[i];
    }
    b_st.site = &bsc_emlrtRSI;
    coder::b_sum(b_st, Y, cosParallax);
  } else {
    b_st.site = &bsc_emlrtRSI;
    binary_expand_op_39(b_st, cosParallax, bsc_emlrtRSI, ray1, ray2);
  }
  if (y.size(0) == b_r.size(0)) {
    scalarLB = (y.size(0) / 4) << 2;
    vectorUB = scalarLB - 4;
    for (int32_T i{0}; i <= vectorUB; i += 4) {
      r1 = _mm_loadu_ps(&y[i]);
      r2 = _mm_loadu_ps(&b_r[i]);
      _mm_storeu_ps(&y[i], _mm_mul_ps(r1, r2));
    }
    for (int32_T i{scalarLB}; i < loop_ub; i++) {
      y[i] = y[i] * b_r[i];
    }
  } else {
    b_st.site = &bsc_emlrtRSI;
    times(b_st, y, b_r);
  }
  b_st.site = &lf_emlrtRSI;
  c_st.site = &mf_emlrtRSI;
  if ((cosParallax.size(0) != 1) && (y.size(0) != 1) &&
      (cosParallax.size(0) != y.size(0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  if (cosParallax.size(0) == y.size(0)) {
    loop_ub = cosParallax.size(0);
    scalarLB = (cosParallax.size(0) / 4) << 2;
    vectorUB = scalarLB - 4;
    for (int32_T i{0}; i <= vectorUB; i += 4) {
      r1 = _mm_loadu_ps(&cosParallax[i]);
      r2 = _mm_loadu_ps(&y[i]);
      _mm_storeu_ps(&cosParallax[i], _mm_div_ps(r1, r2));
    }
    for (int32_T i{scalarLB}; i < loop_ub; i++) {
      cosParallax[i] = cosParallax[i] / y[i];
    }
  } else {
    c_st.site = &uid_emlrtRSI;
    rdivide(c_st, cosParallax, y);
  }
  d = 3.0;
  coder::b_cosd(d);
  loop_ub = cosParallax.size(0);
  isLarge.set_size(&pmb_emlrtRTEI, &sp, cosParallax.size(0));
  r3.set_size(&qmb_emlrtRTEI, &sp, cosParallax.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    isLarge[i] = (cosParallax[i] < d);
    r3[i] = (cosParallax[i] > 0.0F);
  }
  for (int32_T i{0}; i < loop_ub; i++) {
    isLarge[i] = (isLarge[i] && r3[i]);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void lt(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
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
  in1.set_size(&vtb_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] < in3[i * stride_1_0]);
  }
}

void helperCreateNewMapPoints(const emlrtStack &sp,
                              coder::worldpointset &mapPoints,
                              coder::imageviewset &vSetKeyFrames,
                              real_T currKeyFrameId,
                              const coder::cameraIntrinsics &intrinsics,
                              coder::array<real_T, 1U> &recentPointIdx)
{
  coder::b_binaryFeatures b_this;
  coder::b_binaryFeatures c_this;
  coder::b_rigidtform3d b_r;
  coder::b_rigidtform3d currPose;
  coder::b_rigidtform3d expl_temp;
  coder::b_rigidtform3d kfPose;
  coder::array<coder::b_ORBPoints, 2U> c_expl_temp;
  coder::array<coder::b_ORBPoints, 1U> views_Points;
  coder::array<coder::b_rigidtform3d, 1U> e_expl_temp;
  coder::array<cell_wrap_11, 2U> connections_Matches;
  coder::array<cell_wrap_7, 2U> f_expl_temp;
  coder::array<cell_wrap_8, 2U> b_expl_temp;
  coder::array<cell_wrap_8, 2U> views_Features;
  coder::array<real_T, 1U> indices;
  coder::array<int32_T, 1U> ia;
  coder::array<int32_T, 1U> r5;
  coder::array<int32_T, 1U> r6;
  coder::array<int32_T, 1U> r7;
  coder::array<real32_T, 2U> b_epiLine;
  coder::array<real32_T, 2U> b_matchedPoints1;
  coder::array<real32_T, 2U> b_matchedPoints2;
  coder::array<real32_T, 2U> epiLine;
  coder::array<real32_T, 2U> matchedPoints1;
  coder::array<real32_T, 2U> matchedPoints2;
  coder::array<real32_T, 2U> r2;
  coder::array<real32_T, 1U> b_uScales2;
  coder::array<real32_T, 1U> distToEpipole;
  coder::array<real32_T, 1U> distToLine;
  coder::array<real32_T, 1U> uScales2;
  coder::array<real32_T, 1U> y;
  coder::array<uint32_T, 2U> b_indexPairs;
  coder::array<uint32_T, 2U> c_y;
  coder::array<uint32_T, 2U> indexPairs;
  coder::array<uint32_T, 1U> KcViews_ViewId;
  coder::array<uint32_T, 1U> d_expl_temp;
  coder::array<uint32_T, 1U> mIndices1;
  coder::array<uint32_T, 1U> uIndices1;
  coder::array<uint32_T, 1U> uIndices2;
  coder::array<boolean_T, 1U> inlier;
  coder::array<boolean_T, 1U> isLarge;
  coder::array<boolean_T, 1U> r4;
  coder::bounded_array<cell_wrap_25, 1U, 1U> currIndex2dCg;
  coder::bounded_array<cell_wrap_25, 1U, 1U> kfIndex2dCg;
  coder::bounded_array<cell_wrap_25, 1U, 1U> kfIndex3dCg;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  real32_T currCamMatrix[12];
  uint32_T c_data[2];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  // helperCreateNewMapPoints creates new map points by triangulating matched
  //    feature points in the current key frame and the connected key frames.
  //
  //    This is an example helper function that is subject to change or removal
  //    in future releases.
  //    Copyright 2019-2023 The MathWorks, Inc.
  //  Get connected key frames
  st.site = &iqc_emlrtRSI;
  vSetKeyFrames.connectedViews(st, currKeyFrameId, KcViews_ViewId, expl_temp,
                               b_expl_temp, c_expl_temp);
  //  Retreive data of the current key frame
  st.site = &jqc_emlrtRSI;
  vSetKeyFrames.imageviewsetBase_get_Views(st, d_expl_temp, views_Features,
                                           views_Points, expl_temp);
  st.site = &kqc_emlrtRSI;
  expl_temp.parenReference(st, currKeyFrameId, &currPose);
  i = views_Features.size(0) - 1;
  i1 = static_cast<int32_T>(muDoubleScalarFloor(currKeyFrameId));
  if (currKeyFrameId != i1) {
    emlrtIntegerCheckR2012b(currKeyFrameId, &pd_emlrtDCI, (emlrtConstCTX)&sp);
  }
  i2 = static_cast<int32_T>(currKeyFrameId);
  if ((i2 - 1 < 0) || (i2 - 1 > views_Features.size(0) - 1)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(currKeyFrameId) - 1, 0,
                                  views_Features.size(0) - 1, &tib_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  i3 = views_Points.size(0) - 1;
  if (i2 != i1) {
    emlrtIntegerCheckR2012b(currKeyFrameId, &od_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if ((i2 - 1 < 0) || (i2 - 1 > views_Points.size(0) - 1)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(currKeyFrameId) - 1, 0,
                                  views_Points.size(0) - 1, &sib_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  //  Camera projection matrix
  b_r = currPose;
  st.site = &lqc_emlrtRSI;
  coder::pose2extr(st, b_r);
  st.site = &lqc_emlrtRSI;
  coder::cameraProjection(st, intrinsics, b_r, currCamMatrix);
  recentPointIdx.set_size(&nbc_emlrtRTEI, &sp, 0);
  i1 = KcViews_ViewId.size(0);
  for (int32_T b_i{0}; b_i < i1; b_i++) {
    int32_T b_mapPoints;
    int32_T i4;
    int32_T i5;
    int32_T loop_ub_tmp;
    real32_T t12[3];
    real32_T b_y;
    uint32_T kfPose_tmp;
    if (b_i + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &vib_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    kfPose_tmp = KcViews_ViewId[b_i];
    st.site = &mqc_emlrtRSI;
    expl_temp.parenReference(st, kfPose_tmp, kfPose);
    if (b_i + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &wib_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    st.site = &nqc_emlrtRSI;
    kfIndex3dCg.size[0] =
        mapPoints.findWorldPointsInView(st, kfPose_tmp, kfIndex3dCg.data,
                                        kfIndex2dCg.data, kfIndex2dCg.size[0]);
    if (kfIndex3dCg.size[0] - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, kfIndex3dCg.size[0] - 1,
                                    &rib_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (kfIndex2dCg.size[0] - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, kfIndex2dCg.size[0] - 1,
                                    &qib_emlrtBCI, (emlrtConstCTX)&sp);
    }
    b_mapPoints = mapPoints.WorldPoints.size(0);
    loop_ub_tmp = kfIndex3dCg.data[0].f1.size(0);
    for (i4 = 0; i4 < loop_ub_tmp; i4++) {
      i5 = static_cast<int32_T>(kfIndex3dCg.data[0].f1[i4]);
      if ((i5 < 1) || (i5 > b_mapPoints)) {
        emlrtDynamicBoundsCheckR2012b(i5, 1, b_mapPoints, &xib_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
    }
    epiLine.set_size(&obc_emlrtRTEI, &sp, kfIndex3dCg.data[0].f1.size(0), 3);
    for (i4 = 0; i4 < 3; i4++) {
      for (i5 = 0; i5 < loop_ub_tmp; i5++) {
        epiLine[i5 + epiLine.size(0) * i4] =
            mapPoints
                .WorldPoints[(static_cast<int32_T>(kfIndex3dCg.data[0].f1[i5]) +
                              mapPoints.WorldPoints.size(0) * i4) -
                             1] -
            kfPose.Translation[i4];
      }
    }
    st.site = &oqc_emlrtRSI;
    coder::vecnorm(st, epiLine, y);
    st.site = &oqc_emlrtRSI;
    b_y = coder::median(st, y);
    //  Skip the key frame is the change of view is small
    t12[0] = kfPose.Translation[0] - currPose.Translation[0];
    t12[1] = kfPose.Translation[1] - currPose.Translation[1];
    t12[2] = kfPose.Translation[2] - currPose.Translation[2];
    if (!(coder::b_norm(t12) / b_y < 0.01)) {
      int32_T b_loop_ub_tmp;
      int32_T i6;
      int32_T loop_ub;
      //  Retrieve data of the connected key frame
      if (b_i + 1 > i1) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &yib_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (static_cast<real_T>(kfPose_tmp) != static_cast<int32_T>(kfPose_tmp)) {
        emlrtIntegerCheckR2012b(static_cast<real_T>(kfPose_tmp), &nd_emlrtDCI,
                                (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(kfPose_tmp) - 1 < 0) ||
          (static_cast<int32_T>(kfPose_tmp) - 1 > i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(kfPose_tmp) - 1, 0,
                                      i, &pib_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if (b_i + 1 > i1) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &ajb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (static_cast<real_T>(kfPose_tmp) != static_cast<int32_T>(kfPose_tmp)) {
        emlrtIntegerCheckR2012b(static_cast<real_T>(kfPose_tmp), &md_emlrtDCI,
                                (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(kfPose_tmp) - 1 < 0) ||
          (static_cast<int32_T>(kfPose_tmp) - 1 > i3)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(kfPose_tmp) - 1, 0,
                                      i3, &oib_emlrtBCI, (emlrtConstCTX)&sp);
      }
      //  currIndex2d changes in each iteration as new map points are created
      st.site = &pqc_emlrtRSI;
      kfIndex3dCg.size[0] = mapPoints.findWorldPointsInView(
          st, currKeyFrameId, kfIndex3dCg.data, currIndex2dCg.data,
          currIndex2dCg.size[0]);
      if (currIndex2dCg.size[0] - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, currIndex2dCg.size[0] - 1,
                                      &nib_emlrtBCI, (emlrtConstCTX)&sp);
      }
      //  Only use unmatched feature points
      i4 = static_cast<int32_T>(KcViews_ViewId[b_i]) - 1;
      i5 =
          views_Features[static_cast<int32_T>(KcViews_ViewId[b_i]) - 1].f1.size(
              0);
      if (i5 < 1) {
        c_y.set_size(&wm_emlrtRTEI, &sp, 1, 0);
      } else {
        c_y.set_size(&wm_emlrtRTEI, &sp, 1, i5);
        loop_ub = i5 - 1;
        for (i6 = 0; i6 <= loop_ub; i6++) {
          c_y[i6] = static_cast<uint32_T>(i6) + 1U;
        }
      }
      st.site = &qqc_emlrtRSI;
      b_st.site = &mnc_emlrtRSI;
      loop_ub = c_y.size(1);
      d_expl_temp.set_size(&pbc_emlrtRTEI, &b_st, c_y.size(1));
      for (i6 = 0; i6 < loop_ub; i6++) {
        d_expl_temp[i6] = c_y[i6];
      }
      c_st.site = &efb_emlrtRSI;
      coder::do_vectors(c_st, d_expl_temp, kfIndex2dCg.data[0].f1, uIndices1,
                        ia);
      i6 = views_Features[static_cast<int32_T>(currKeyFrameId) - 1].f1.size(0);
      if (i6 < 1) {
        c_y.set_size(&wm_emlrtRTEI, &sp, 1, 0);
      } else {
        c_y.set_size(&wm_emlrtRTEI, &sp, 1, i6);
        loop_ub = i6 - 1;
        for (b_mapPoints = 0; b_mapPoints <= loop_ub; b_mapPoints++) {
          c_y[b_mapPoints] = static_cast<uint32_T>(b_mapPoints) + 1U;
        }
      }
      st.site = &rqc_emlrtRSI;
      b_st.site = &mnc_emlrtRSI;
      loop_ub = c_y.size(1);
      d_expl_temp.set_size(&qbc_emlrtRTEI, &b_st, c_y.size(1));
      for (b_mapPoints = 0; b_mapPoints < loop_ub; b_mapPoints++) {
        d_expl_temp[b_mapPoints] = c_y[b_mapPoints];
      }
      c_st.site = &efb_emlrtRSI;
      coder::do_vectors(c_st, d_expl_temp, currIndex2dCg.data[0].f1, uIndices2,
                        ia);
      loop_ub_tmp = uIndices1.size(0);
      for (b_mapPoints = 0; b_mapPoints < loop_ub_tmp; b_mapPoints++) {
        if ((static_cast<int32_T>(uIndices1[b_mapPoints]) < 1) ||
            (static_cast<int32_T>(uIndices1[b_mapPoints]) > i5)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(uIndices1[b_mapPoints]), 1, i5,
              &bjb_emlrtBCI, (emlrtConstCTX)&sp);
        }
      }
      b_loop_ub_tmp = uIndices2.size(0);
      for (i5 = 0; i5 < b_loop_ub_tmp; i5++) {
        if ((static_cast<int32_T>(uIndices2[i5]) < 1) ||
            (static_cast<int32_T>(uIndices2[i5]) > i6)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(uIndices2[i5]), 1,
                                        i6, &cjb_emlrtBCI, (emlrtConstCTX)&sp);
        }
      }
      for (i5 = 0; i5 < loop_ub_tmp; i5++) {
        i6 = views_Points[i4].pLocation.size(0);
        if ((static_cast<int32_T>(uIndices1[i5]) < 1) ||
            (static_cast<int32_T>(uIndices1[i5]) > i6)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(uIndices1[i5]), 1,
                                        i6, &djb_emlrtBCI, (emlrtConstCTX)&sp);
        }
      }
      for (i5 = 0; i5 < b_loop_ub_tmp; i5++) {
        i6 = views_Points[static_cast<int32_T>(currKeyFrameId) - 1]
                 .pLocation.size(0);
        if ((static_cast<int32_T>(uIndices2[i5]) < 1) ||
            (static_cast<int32_T>(uIndices2[i5]) > i6)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(uIndices2[i5]), 1,
                                        i6, &ejb_emlrtBCI, (emlrtConstCTX)&sp);
        }
      }
      for (i5 = 0; i5 < loop_ub_tmp; i5++) {
        i6 = views_Points[i4].pScale.size(0);
        if ((static_cast<int32_T>(uIndices1[i5]) < 1) ||
            (static_cast<int32_T>(uIndices1[i5]) > i6)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(uIndices1[i5]), 1,
                                        i6, &fjb_emlrtBCI, (emlrtConstCTX)&sp);
        }
      }
      uScales2.set_size(&rbc_emlrtRTEI, &sp, uIndices2.size(0));
      for (i5 = 0; i5 < b_loop_ub_tmp; i5++) {
        i6 = views_Points[static_cast<int32_T>(currKeyFrameId) - 1].pScale.size(
            0);
        if ((static_cast<int32_T>(uIndices2[i5]) < 1) ||
            (static_cast<int32_T>(uIndices2[i5]) > i6)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(uIndices2[i5]), 1,
                                        i6, &gjb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        uScales2[i5] = views_Points[static_cast<int32_T>(currKeyFrameId) - 1]
                           .pScale[static_cast<int32_T>(uIndices2[i5]) - 1];
      }
      b_mapPoints =
          views_Features[static_cast<int32_T>(KcViews_ViewId[b_i]) - 1].f1.size(
              1);
      b_this.NumBits = static_cast<real_T>(b_mapPoints) * 8.0;
      b_this.Features.set_size(&uh_emlrtRTEI, &sp, uIndices1.size(0),
                               b_mapPoints);
      for (i5 = 0; i5 < b_mapPoints; i5++) {
        for (i6 = 0; i6 < loop_ub_tmp; i6++) {
          b_this.Features[i6 + b_this.Features.size(0) * i5] =
              views_Features[i4].f1[(static_cast<int32_T>(uIndices1[i6]) +
                                     views_Features[i4].f1.size(0) * i5) -
                                    1];
        }
      }
      b_mapPoints =
          views_Features[static_cast<int32_T>(currKeyFrameId) - 1].f1.size(1);
      c_this.NumBits = static_cast<real_T>(b_mapPoints) * 8.0;
      c_this.Features.set_size(&uh_emlrtRTEI, &sp, uIndices2.size(0),
                               b_mapPoints);
      for (i5 = 0; i5 < b_mapPoints; i5++) {
        for (i6 = 0; i6 < b_loop_ub_tmp; i6++) {
          c_this.Features[i6 + c_this.Features.size(0) * i5] =
              views_Features[static_cast<int32_T>(currKeyFrameId) - 1]
                  .f1[(static_cast<int32_T>(uIndices2[i6]) +
                       views_Features[static_cast<int32_T>(currKeyFrameId) - 1]
                               .f1.size(0) *
                           i5) -
                      1];
        }
      }
      st.site = &sqc_emlrtRSI;
      coder::matchFeatures(st, b_this, c_this, indexPairs);
      if (indexPairs.size(0) != 0) {
        __m128 r1;
        __m128 r3;
        real_T b_intrinsics[9];
        int32_T b_loop_ub;
        int32_T c_loop_ub_tmp;
        int32_T vectorUB;
        real32_T F[9];
        real32_T a[9];
        real32_T b_F[9];
        real32_T b_a[9];
        real32_T epiPole[2];
        real32_T f;
        real32_T f1;
        int8_T i7;
        c_loop_ub_tmp =
            views_Points[static_cast<int32_T>(KcViews_ViewId[b_i]) - 1]
                .pLocation.size(1);
        loop_ub = indexPairs.size(0);
        matchedPoints1.set_size(&sbc_emlrtRTEI, &sp, indexPairs.size(0),
                                c_loop_ub_tmp);
        for (i5 = 0; i5 < c_loop_ub_tmp; i5++) {
          for (i6 = 0; i6 < loop_ub; i6++) {
            if ((static_cast<int32_T>(indexPairs[i6]) < 1) ||
                (static_cast<int32_T>(indexPairs[i6]) > loop_ub_tmp)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(indexPairs[i6]), 1, loop_ub_tmp,
                  &hjb_emlrtBCI, (emlrtConstCTX)&sp);
            }
            matchedPoints1[i6 + matchedPoints1.size(0) * i5] =
                views_Points[i4].pLocation
                    [(static_cast<int32_T>(
                          uIndices1[static_cast<int32_T>(indexPairs[i6]) - 1]) +
                      views_Points[i4].pLocation.size(0) * i5) -
                     1];
          }
        }
        b_mapPoints = views_Points[static_cast<int32_T>(currKeyFrameId) - 1]
                          .pLocation.size(1);
        matchedPoints2.set_size(&tbc_emlrtRTEI, &sp, indexPairs.size(0),
                                b_mapPoints);
        for (i5 = 0; i5 < b_mapPoints; i5++) {
          for (i6 = 0; i6 < loop_ub; i6++) {
            if ((static_cast<int32_T>(indexPairs[i6 + indexPairs.size(0)]) <
                 1) ||
                (static_cast<int32_T>(indexPairs[i6 + indexPairs.size(0)]) >
                 b_loop_ub_tmp)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(indexPairs[i6 + indexPairs.size(0)]), 1,
                  b_loop_ub_tmp, &ijb_emlrtBCI, (emlrtConstCTX)&sp);
            }
            matchedPoints2[i6 + matchedPoints2.size(0) * i5] =
                views_Points[static_cast<int32_T>(currKeyFrameId) - 1].pLocation
                    [(static_cast<int32_T>(
                          uIndices2[static_cast<int32_T>(
                                        indexPairs[i6 + indexPairs.size(0)]) -
                                    1]) +
                      views_Points[static_cast<int32_T>(currKeyFrameId) - 1]
                              .pLocation.size(0) *
                          i5) -
                     1];
          }
        }
        //  Epipole in the current key frame
        b_r = currPose;
        st.site = &tqc_emlrtRSI;
        coder::pose2extr(st, b_r);
        st.site = &tqc_emlrtRSI;
        coder::b_world2img(st, kfPose.Translation, b_r, intrinsics, epiPole);
        if ((b_mapPoints != 2) && (b_mapPoints != 1)) {
          emlrtDimSizeImpxCheckR2021b(0, 2, &hf_emlrtECI, (emlrtConstCTX)&sp);
        }
        if (matchedPoints2.size(1) == 2) {
          b_loop_ub = matchedPoints2.size(0);
          b_matchedPoints2.set_size(&ubc_emlrtRTEI, &sp, matchedPoints2.size(0),
                                    2);
          for (i5 = 0; i5 < 2; i5++) {
            b_mapPoints = (matchedPoints2.size(0) / 4) << 2;
            vectorUB = b_mapPoints - 4;
            for (i6 = 0; i6 <= vectorUB; i6 += 4) {
              r1 = _mm_loadu_ps(
                  &matchedPoints2[i6 + matchedPoints2.size(0) * i5]);
              _mm_storeu_ps(
                  &b_matchedPoints2[i6 + b_matchedPoints2.size(0) * i5],
                  _mm_sub_ps(r1, _mm_set1_ps(epiPole[i5])));
            }
            for (i6 = b_mapPoints; i6 < b_loop_ub; i6++) {
              b_matchedPoints2[i6 + b_matchedPoints2.size(0) * i5] =
                  matchedPoints2[i6 + matchedPoints2.size(0) * i5] -
                  epiPole[i5];
            }
          }
          st.site = &uqc_emlrtRSI;
          coder::b_vecnorm(st, b_matchedPoints2, distToEpipole);
        } else {
          st.site = &uqc_emlrtRSI;
          binary_expand_op_60(st, distToEpipole, uqc_emlrtRSI, matchedPoints2,
                              epiPole);
        }
        //  Compute fundamental matrix
        st.site = &vqc_emlrtRSI;
        for (i5 = 0; i5 < 3; i5++) {
          F[3 * i5] = kfPose.R[i5];
          F[3 * i5 + 1] = kfPose.R[i5 + 3];
          F[3 * i5 + 2] = kfPose.R[i5 + 6];
          t12[i5] = currPose.Translation[i5] - kfPose.Translation[i5];
        }
        //  Skew symmetric matrix
        b_y = t12[0];
        f = t12[1];
        f1 = t12[2];
        for (i5 = 0; i5 < 3; i5++) {
          b_intrinsics[3 * i5] = intrinsics.K[i5];
          b_intrinsics[3 * i5 + 1] = intrinsics.K[i5 + 3];
          b_intrinsics[3 * i5 + 2] = intrinsics.K[i5 + 6];
          t12[i5] = (F[i5] * b_y + F[i5 + 3] * f) + F[i5 + 6] * f1;
        }
        b_F[0] = 0.0F;
        b_F[3] = -t12[2];
        b_F[6] = t12[1];
        b_F[1] = t12[2];
        b_F[4] = 0.0F;
        b_F[7] = -t12[0];
        b_F[2] = -t12[1];
        b_F[5] = t12[0];
        b_F[8] = 0.0F;
        b_st.site = &xrc_emlrtRSI;
        coder::mldivide(b_st, b_intrinsics, b_F, a);
        b_st.site = &xrc_emlrtRSI;
        for (i5 = 0; i5 < 3; i5++) {
          b_y = F[i5];
          f = F[i5 + 3];
          f1 = F[i5 + 6];
          for (i6 = 0; i6 < 3; i6++) {
            b_F[i5 + 3 * i6] =
                (b_y * currPose.R[3 * i6] + f * currPose.R[3 * i6 + 1]) +
                f1 * currPose.R[3 * i6 + 2];
          }
        }
        for (i5 = 0; i5 < 3; i5++) {
          b_y = a[i5];
          f = a[i5 + 3];
          f1 = a[i5 + 6];
          for (i6 = 0; i6 < 3; i6++) {
            b_a[i5 + 3 * i6] = (b_y * b_F[3 * i6] + f * b_F[3 * i6 + 1]) +
                               f1 * b_F[3 * i6 + 2];
          }
        }
        c_st.site = &oq_emlrtRSI;
        coder::internal::mrdiv(c_st, b_a, intrinsics.K, F);
        //  Epipolar line in the second image
        st.site = &wqc_emlrtRSI;
        coder::epipolarLine(st, F, matchedPoints2, epiLine);
        st.site = &xqc_emlrtRSI;
        b_st.site = &kn_emlrtRSI;
        if (c_loop_ub_tmp != 0) {
          i7 = static_cast<int8_T>(c_loop_ub_tmp);
        } else {
          i7 = 0;
        }
        b_mapPoints = indexPairs.size(0);
        b_loop_ub = i7;
        r2.set_size(&vbc_emlrtRTEI, &b_st, indexPairs.size(0), i7 + 1);
        for (i5 = 0; i5 < b_loop_ub; i5++) {
          for (i6 = 0; i6 < loop_ub; i6++) {
            r2[i6 + r2.size(0) * i5] = matchedPoints1[i6 + b_mapPoints * i5];
          }
        }
        for (i5 = 0; i5 < loop_ub; i5++) {
          r2[i5 + r2.size(0) * i7] = 1.0F;
        }
        if ((epiLine.size(0) != indexPairs.size(0)) &&
            ((epiLine.size(0) != 1) && (indexPairs.size(0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(epiLine.size(0), indexPairs.size(0),
                                      &gf_emlrtECI, (emlrtConstCTX)&sp);
        }
        if ((i7 + 1 != 3) && (i7 + 1 != 1)) {
          emlrtDimSizeImpxCheckR2021b(3, 2, &ff_emlrtECI, (emlrtConstCTX)&sp);
        }
        st.site = &xqc_emlrtRSI;
        if ((epiLine.size(0) == r2.size(0)) && (r2.size(1) == 3)) {
          b_epiLine.set_size(&wbc_emlrtRTEI, &st, epiLine.size(0), 3);
          c_loop_ub_tmp = epiLine.size(0) * 3;
          b_mapPoints = (c_loop_ub_tmp / 4) << 2;
          vectorUB = b_mapPoints - 4;
          for (i5 = 0; i5 <= vectorUB; i5 += 4) {
            r1 = _mm_loadu_ps(&epiLine[i5]);
            r3 = _mm_loadu_ps(&r2[i5]);
            _mm_storeu_ps(&b_epiLine[i5], _mm_mul_ps(r1, r3));
          }
          for (i5 = b_mapPoints; i5 < c_loop_ub_tmp; i5++) {
            b_epiLine[i5] = epiLine[i5] * r2[i5];
          }
          b_st.site = &xqc_emlrtRSI;
          coder::b_sum(b_st, b_epiLine, y);
        } else {
          b_st.site = &xqc_emlrtRSI;
          binary_expand_op_59(b_st, y, xqc_emlrtRSI, epiLine, r2);
        }
        b_st.site = &xqc_emlrtRSI;
        coder::b_abs(b_st, y, distToLine);
        b_loop_ub = epiLine.size(0);
        b_matchedPoints2.set_size(&ao_emlrtRTEI, &st, epiLine.size(0), 2);
        for (i5 = 0; i5 < 2; i5++) {
          for (i6 = 0; i6 < b_loop_ub; i6++) {
            b_y = epiLine[i6 + epiLine.size(0) * i5];
            b_matchedPoints2[i6 + b_matchedPoints2.size(0) * i5] = b_y * b_y;
          }
        }
        b_st.site = &yqc_emlrtRSI;
        coder::sum(b_st, b_matchedPoints2, y);
        b_st.site = &yqc_emlrtRSI;
        coder::b_sqrt(b_st, y);
        b_st.site = &lf_emlrtRSI;
        c_st.site = &mf_emlrtRSI;
        if ((distToLine.size(0) != 1) && (y.size(0) != 1) &&
            (distToLine.size(0) != y.size(0))) {
          emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
                                        "MATLAB:sizeDimensionsMustMatch",
                                        "MATLAB:sizeDimensionsMustMatch", 0);
        }
        if (distToLine.size(0) == y.size(0)) {
          b_loop_ub = distToLine.size(0);
          b_mapPoints = (distToLine.size(0) / 4) << 2;
          vectorUB = b_mapPoints - 4;
          for (i5 = 0; i5 <= vectorUB; i5 += 4) {
            r1 = _mm_loadu_ps(&distToLine[i5]);
            r3 = _mm_loadu_ps(&y[i5]);
            _mm_storeu_ps(&distToLine[i5], _mm_div_ps(r1, r3));
          }
          for (i5 = b_mapPoints; i5 < b_loop_ub; i5++) {
            distToLine[i5] = distToLine[i5] / y[i5];
          }
        } else {
          c_st.site = &uid_emlrtRSI;
          rdivide(c_st, distToLine, y);
        }
        for (i5 = 0; i5 < loop_ub; i5++) {
          if ((static_cast<int32_T>(indexPairs[i5 + indexPairs.size(0)]) < 1) ||
              (static_cast<int32_T>(indexPairs[i5 + indexPairs.size(0)]) >
               b_loop_ub_tmp)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(indexPairs[i5 + indexPairs.size(0)]), 1,
                b_loop_ub_tmp, &jjb_emlrtBCI, (emlrtConstCTX)&sp);
          }
        }
        y.set_size(&xbc_emlrtRTEI, &sp, indexPairs.size(0));
        for (i5 = 0; i5 < loop_ub; i5++) {
          y[i5] = 2.0F * uScales2[static_cast<int32_T>(
                                      indexPairs[i5 + indexPairs.size(0)]) -
                                  1];
        }
        b_loop_ub = distToLine.size(0);
        if ((distToLine.size(0) != indexPairs.size(0)) &&
            ((distToLine.size(0) != 1) && (indexPairs.size(0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(distToLine.size(0), indexPairs.size(0),
                                      &df_emlrtECI, (emlrtConstCTX)&sp);
        }
        for (i5 = 0; i5 < loop_ub; i5++) {
          if ((static_cast<int32_T>(indexPairs[i5 + indexPairs.size(0)]) < 1) ||
              (static_cast<int32_T>(indexPairs[i5 + indexPairs.size(0)]) >
               b_loop_ub_tmp)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(indexPairs[i5 + indexPairs.size(0)]), 1,
                b_loop_ub_tmp, &kjb_emlrtBCI, (emlrtConstCTX)&sp);
          }
        }
        b_uScales2.set_size(&ybc_emlrtRTEI, &sp, indexPairs.size(0));
        for (i5 = 0; i5 < loop_ub; i5++) {
          b_uScales2[i5] =
              10.0F * uScales2[static_cast<int32_T>(
                                   indexPairs[i5 + indexPairs.size(0)]) -
                               1];
        }
        loop_ub = distToEpipole.size(0);
        if ((distToEpipole.size(0) != indexPairs.size(0)) &&
            ((distToEpipole.size(0) != 1) && (indexPairs.size(0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(distToEpipole.size(0), indexPairs.size(0),
                                      &ef_emlrtECI, (emlrtConstCTX)&sp);
        }
        if (distToLine.size(0) == y.size(0)) {
          isLarge.set_size(&acc_emlrtRTEI, &sp, distToLine.size(0));
          for (i5 = 0; i5 < b_loop_ub; i5++) {
            isLarge[i5] = (distToLine[i5] < y[i5]);
          }
        } else {
          st.site = &jid_emlrtRSI;
          b_lt(st, isLarge, distToLine, y);
        }
        if (distToEpipole.size(0) == b_uScales2.size(0)) {
          inlier.set_size(&bcc_emlrtRTEI, &sp, distToEpipole.size(0));
          for (i5 = 0; i5 < loop_ub; i5++) {
            inlier[i5] = (distToEpipole[i5] > b_uScales2[i5]);
          }
        } else {
          st.site = &kjd_emlrtRSI;
          gt(st, inlier, distToEpipole, b_uScales2);
        }
        loop_ub = isLarge.size(0);
        if ((isLarge.size(0) != inlier.size(0)) &&
            ((isLarge.size(0) != 1) && (inlier.size(0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(isLarge.size(0), inlier.size(0),
                                      &df_emlrtECI, (emlrtConstCTX)&sp);
        }
        if (isLarge.size(0) == inlier.size(0)) {
          r4.set_size(&acc_emlrtRTEI, &sp, isLarge.size(0));
          for (i5 = 0; i5 < loop_ub; i5++) {
            r4[i5] = (isLarge[i5] && inlier[i5]);
          }
        } else {
          st.site = &jid_emlrtRSI;
          b_and(st, r4, isLarge, inlier);
        }
        c_loop_ub_tmp = r4.size(0);
        b_mapPoints = 0;
        for (loop_ub = 0; loop_ub < c_loop_ub_tmp; loop_ub++) {
          if (r4[loop_ub]) {
            b_mapPoints++;
          }
        }
        r5.set_size(&ccc_emlrtRTEI, &sp, b_mapPoints);
        b_mapPoints = 0;
        for (loop_ub = 0; loop_ub < c_loop_ub_tmp; loop_ub++) {
          if (r4[loop_ub]) {
            r5[b_mapPoints] = loop_ub;
            b_mapPoints++;
          }
        }
        c_loop_ub_tmp = r5.size(0);
        b_indexPairs.set_size(&dcc_emlrtRTEI, &sp, r5.size(0), 2);
        for (i5 = 0; i5 < 2; i5++) {
          for (i6 = 0; i6 < c_loop_ub_tmp; i6++) {
            if (r5[i6] > indexPairs.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(r5[i6], 0, indexPairs.size(0) - 1,
                                            &ljb_emlrtBCI, (emlrtConstCTX)&sp);
            }
            b_indexPairs[i6 + b_indexPairs.size(0) * i5] =
                indexPairs[r5[i6] + indexPairs.size(0) * i5];
          }
        }
        indexPairs.set_size(&ecc_emlrtRTEI, &sp, b_indexPairs.size(0), 2);
        b_mapPoints = b_indexPairs.size(0) << 1;
        for (i5 = 0; i5 < b_mapPoints; i5++) {
          indexPairs[i5] = b_indexPairs[i5];
        }
        b_mapPoints = matchedPoints1.size(1);
        b_matchedPoints1.set_size(&fcc_emlrtRTEI, &sp, r5.size(0),
                                  matchedPoints1.size(1));
        for (i5 = 0; i5 < b_mapPoints; i5++) {
          for (i6 = 0; i6 < c_loop_ub_tmp; i6++) {
            if (r5[i6] > matchedPoints1.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(r5[i6], 0,
                                            matchedPoints1.size(0) - 1,
                                            &mjb_emlrtBCI, (emlrtConstCTX)&sp);
            }
            b_matchedPoints1[i6 + b_matchedPoints1.size(0) * i5] =
                matchedPoints1[r5[i6] + matchedPoints1.size(0) * i5];
          }
        }
        b_loop_ub = b_matchedPoints1.size(1);
        matchedPoints1.set_size(&gcc_emlrtRTEI, &sp, b_matchedPoints1.size(0),
                                b_matchedPoints1.size(1));
        b_mapPoints = b_matchedPoints1.size(0) * b_matchedPoints1.size(1);
        for (i5 = 0; i5 < b_mapPoints; i5++) {
          matchedPoints1[i5] = b_matchedPoints1[i5];
        }
        b_mapPoints = matchedPoints2.size(1);
        b_matchedPoints1.set_size(&hcc_emlrtRTEI, &sp, r5.size(0),
                                  matchedPoints2.size(1));
        for (i5 = 0; i5 < b_mapPoints; i5++) {
          for (i6 = 0; i6 < c_loop_ub_tmp; i6++) {
            if (r5[i6] > matchedPoints2.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(r5[i6], 0,
                                            matchedPoints2.size(0) - 1,
                                            &njb_emlrtBCI, (emlrtConstCTX)&sp);
            }
            b_matchedPoints1[i6 + b_matchedPoints1.size(0) * i5] =
                matchedPoints2[r5[i6] + matchedPoints2.size(0) * i5];
          }
        }
        vectorUB = b_matchedPoints1.size(1);
        matchedPoints2.set_size(&icc_emlrtRTEI, &sp, b_matchedPoints1.size(0),
                                b_matchedPoints1.size(1));
        c_loop_ub_tmp = b_matchedPoints1.size(0) * b_matchedPoints1.size(1);
        for (i5 = 0; i5 < c_loop_ub_tmp; i5++) {
          matchedPoints2[i5] = b_matchedPoints1[i5];
        }
        //  Parallax check
        st.site = &arc_emlrtRSI;
        isLargeParalalx(st, matchedPoints1, matchedPoints2, kfPose, currPose,
                        intrinsics, isLarge);
        c_loop_ub_tmp = isLarge.size(0);
        b_mapPoints = 0;
        for (loop_ub = 0; loop_ub < c_loop_ub_tmp; loop_ub++) {
          if (isLarge[loop_ub]) {
            b_mapPoints++;
          }
        }
        r6.set_size(&ccc_emlrtRTEI, &sp, b_mapPoints);
        b_mapPoints = 0;
        for (loop_ub = 0; loop_ub < c_loop_ub_tmp; loop_ub++) {
          if (isLarge[loop_ub]) {
            r6[b_mapPoints] = loop_ub;
            b_mapPoints++;
          }
        }
        loop_ub = r6.size(0);
        b_matchedPoints1.set_size(&jcc_emlrtRTEI, &sp, r6.size(0), b_loop_ub);
        for (i5 = 0; i5 < b_loop_ub; i5++) {
          for (i6 = 0; i6 < loop_ub; i6++) {
            if (r6[i6] > matchedPoints1.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(r6[i6], 0,
                                            matchedPoints1.size(0) - 1,
                                            &ojb_emlrtBCI, (emlrtConstCTX)&sp);
            }
            b_matchedPoints1[i6 + b_matchedPoints1.size(0) * i5] =
                matchedPoints1[r6[i6] + matchedPoints1.size(0) * i5];
          }
        }
        matchedPoints1.set_size(&kcc_emlrtRTEI, &sp, b_matchedPoints1.size(0),
                                b_matchedPoints1.size(1));
        c_loop_ub_tmp = b_matchedPoints1.size(0) * b_matchedPoints1.size(1);
        for (i5 = 0; i5 < c_loop_ub_tmp; i5++) {
          matchedPoints1[i5] = b_matchedPoints1[i5];
        }
        b_matchedPoints1.set_size(&lcc_emlrtRTEI, &sp, r6.size(0), vectorUB);
        for (i5 = 0; i5 < vectorUB; i5++) {
          for (i6 = 0; i6 < loop_ub; i6++) {
            if (r6[i6] > matchedPoints2.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(r6[i6], 0,
                                            matchedPoints2.size(0) - 1,
                                            &pjb_emlrtBCI, (emlrtConstCTX)&sp);
            }
            b_matchedPoints1[i6 + b_matchedPoints1.size(0) * i5] =
                matchedPoints2[r6[i6] + matchedPoints2.size(0) * i5];
          }
        }
        matchedPoints2.set_size(&mcc_emlrtRTEI, &sp, b_matchedPoints1.size(0),
                                b_matchedPoints1.size(1));
        c_loop_ub_tmp = b_matchedPoints1.size(0) * b_matchedPoints1.size(1);
        for (i5 = 0; i5 < c_loop_ub_tmp; i5++) {
          matchedPoints2[i5] = b_matchedPoints1[i5];
        }
        b_indexPairs.set_size(&ncc_emlrtRTEI, &sp, r6.size(0), 2);
        for (i5 = 0; i5 < 2; i5++) {
          for (i6 = 0; i6 < loop_ub; i6++) {
            if (r6[i6] > indexPairs.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(r6[i6], 0, indexPairs.size(0) - 1,
                                            &qjb_emlrtBCI, (emlrtConstCTX)&sp);
            }
            b_indexPairs[i6 + b_indexPairs.size(0) * i5] =
                indexPairs[r6[i6] + indexPairs.size(0) * i5];
          }
        }
        loop_ub = b_indexPairs.size(0);
        indexPairs.set_size(&occ_emlrtRTEI, &sp, b_indexPairs.size(0), 2);
        c_loop_ub_tmp = b_indexPairs.size(0) << 1;
        for (i5 = 0; i5 < c_loop_ub_tmp; i5++) {
          indexPairs[i5] = b_indexPairs[i5];
        }
        real32_T kfCamMatrix[12];
        b_r = kfPose;
        st.site = &brc_emlrtRSI;
        coder::pose2extr(st, b_r);
        st.site = &brc_emlrtRSI;
        coder::cameraProjection(st, intrinsics, b_r, kfCamMatrix);
        //  Triangulate two views to create new world points
        st.site = &crc_emlrtRSI;
        coder::b_triangulate(st, matchedPoints1, matchedPoints2, kfCamMatrix,
                             currCamMatrix, epiLine, y, isLarge);
        //  Filtering by view direction and reprojection error
        distToLine.set_size(&pcc_emlrtRTEI, &sp, b_indexPairs.size(0));
        for (i5 = 0; i5 < loop_ub; i5++) {
          if ((static_cast<int32_T>(indexPairs[i5]) < 1) ||
              (static_cast<int32_T>(indexPairs[i5]) > loop_ub_tmp)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indexPairs[i5]),
                                          1, loop_ub_tmp, &rjb_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          distToLine[i5] =
              views_Points[i4].pScale
                  [static_cast<int32_T>(
                       uIndices1[static_cast<int32_T>(indexPairs[i5]) - 1]) -
                   1];
        }
        b_uScales2.set_size(&qcc_emlrtRTEI, &sp, b_indexPairs.size(0));
        for (i4 = 0; i4 < loop_ub; i4++) {
          if ((static_cast<int32_T>(indexPairs[i4 + indexPairs.size(0)]) < 1) ||
              (static_cast<int32_T>(indexPairs[i4 + indexPairs.size(0)]) >
               b_loop_ub_tmp)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(indexPairs[i4 + indexPairs.size(0)]), 1,
                b_loop_ub_tmp, &sjb_emlrtBCI, (emlrtConstCTX)&sp);
          }
          b_uScales2[i4] = uScales2[static_cast<int32_T>(
                                        indexPairs[i4 + indexPairs.size(0)]) -
                                    1];
        }
        st.site = &drc_emlrtRSI;
        filterTriangulatedMapPoints(st, epiLine, kfPose, currPose, distToLine,
                                    b_uScales2, y, isLarge, inlier);
        //  Add new map points and update connections
        st.site = &erc_emlrtRSI;
        if (coder::any(st, inlier)) {
          int32_T c_size[2];
          uint32_T b_KcViews_ViewId[2];
          uint32_T u;
          c_loop_ub_tmp = inlier.size(0);
          b_mapPoints = 0;
          for (loop_ub = 0; loop_ub < c_loop_ub_tmp; loop_ub++) {
            if (inlier[loop_ub]) {
              b_mapPoints++;
            }
          }
          r7.set_size(&ccc_emlrtRTEI, &sp, b_mapPoints);
          b_mapPoints = 0;
          for (loop_ub = 0; loop_ub < c_loop_ub_tmp; loop_ub++) {
            if (inlier[loop_ub]) {
              r7[b_mapPoints] = loop_ub;
              b_mapPoints++;
            }
          }
          c_loop_ub_tmp = r7.size(0);
          for (i4 = 0; i4 < c_loop_ub_tmp; i4++) {
            if (r7[i4] > epiLine.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(r7[i4], 0, epiLine.size(0) - 1,
                                            &tjb_emlrtBCI, (emlrtConstCTX)&sp);
            }
          }
          b_indexPairs.set_size(&rcc_emlrtRTEI, &sp, r7.size(0), 2);
          for (i4 = 0; i4 < 2; i4++) {
            for (i5 = 0; i5 < c_loop_ub_tmp; i5++) {
              if (r7[i5] > indexPairs.size(0) - 1) {
                emlrtDynamicBoundsCheckR2012b(r7[i5], 0, indexPairs.size(0) - 1,
                                              &ujb_emlrtBCI,
                                              (emlrtConstCTX)&sp);
              }
              b_indexPairs[i5 + b_indexPairs.size(0) * i4] =
                  indexPairs[r7[i5] + indexPairs.size(0) * i4];
            }
          }
          loop_ub = b_indexPairs.size(0);
          indexPairs.set_size(&scc_emlrtRTEI, &sp, b_indexPairs.size(0), 2);
          b_mapPoints = b_indexPairs.size(0) << 1;
          for (i4 = 0; i4 < b_mapPoints; i4++) {
            indexPairs[i4] = b_indexPairs[i4];
          }
          mIndices1.set_size(&tcc_emlrtRTEI, &sp, b_indexPairs.size(0));
          for (i4 = 0; i4 < loop_ub; i4++) {
            if ((static_cast<int32_T>(indexPairs[i4]) < 1) ||
                (static_cast<int32_T>(indexPairs[i4]) > loop_ub_tmp)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(indexPairs[i4]), 1, loop_ub_tmp,
                  &vjb_emlrtBCI, (emlrtConstCTX)&sp);
            }
            mIndices1[i4] = uIndices1[static_cast<int32_T>(indexPairs[i4]) - 1];
          }
          uIndices1.set_size(&ucc_emlrtRTEI, &sp, b_indexPairs.size(0));
          for (i4 = 0; i4 < loop_ub; i4++) {
            if ((static_cast<int32_T>(indexPairs[i4 + indexPairs.size(0)]) <
                 1) ||
                (static_cast<int32_T>(indexPairs[i4 + indexPairs.size(0)]) >
                 b_loop_ub_tmp)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(indexPairs[i4 + indexPairs.size(0)]), 1,
                  b_loop_ub_tmp, &wjb_emlrtBCI, (emlrtConstCTX)&sp);
            }
            uIndices1[i4] = uIndices2[static_cast<int32_T>(
                                          indexPairs[i4 + indexPairs.size(0)]) -
                                      1];
          }
          b_epiLine.set_size(&vcc_emlrtRTEI, &sp, r7.size(0), 3);
          for (i4 = 0; i4 < 3; i4++) {
            for (i5 = 0; i5 < c_loop_ub_tmp; i5++) {
              b_epiLine[i5 + b_epiLine.size(0) * i4] =
                  epiLine[r7[i5] + epiLine.size(0) * i4];
            }
          }
          st.site = &frc_emlrtRSI;
          mapPoints.b_addWorldPoints(st, b_epiLine, indices);
          i4 = recentPointIdx.size(0);
          recentPointIdx.set_size(&ccc_emlrtRTEI, &sp,
                                  recentPointIdx.size(0) + indices.size(0));
          loop_ub = indices.size(0);
          for (i5 = 0; i5 < loop_ub; i5++) {
            recentPointIdx[i4 + i5] = indices[i5];
          }
          //  Add new observations
          if (b_i + 1 > i1) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &xjb_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          st.site = &grc_emlrtRSI;
          mapPoints.addCorrespondences(st, kfPose_tmp, indices, mIndices1);
          st.site = &hrc_emlrtRSI;
          mapPoints.addCorrespondences(st, currKeyFrameId, indices, uIndices1);
          //  Update connections with new feature matches
          st.site = &irc_emlrtRSI;
          vSetKeyFrames.get_Connections(st, d_expl_temp, uIndices2, e_expl_temp,
                                        f_expl_temp, connections_Matches);
          st.site = &jrc_emlrtRSI;
          b_st.site = &ij_emlrtRSI;
          c_st.site = &jj_emlrtRSI;
          if (uIndices2.size(0) != d_expl_temp.size(0)) {
            emlrtErrorWithMessageIdR2018a(
                &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
                "MATLAB:catenate:matrixDimensionMismatch", 0);
          }
          st.site = &jrc_emlrtRSI;
          if (b_i + 1 > i1) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &uib_emlrtBCI, &st);
          }
          b_st.site = &dfb_emlrtRSI;
          loop_ub = d_expl_temp.size(0);
          indexPairs.set_size(&owb_emlrtRTEI, &b_st, d_expl_temp.size(0), 2);
          for (i4 = 0; i4 < loop_ub; i4++) {
            indexPairs[i4] = d_expl_temp[i4];
          }
          loop_ub = uIndices2.size(0);
          for (i4 = 0; i4 < loop_ub; i4++) {
            indexPairs[i4 + indexPairs.size(0)] = uIndices2[i4];
          }
          b_KcViews_ViewId[0] = KcViews_ViewId[b_i];
          if (i2 >= 0) {
            u = static_cast<uint32_T>(i2);
          } else {
            u = 0U;
          }
          b_KcViews_ViewId[1] = u;
          c_st.site = &osc_emlrtRSI;
          b_mapPoints = coder::do_rows(c_st, indexPairs, b_KcViews_ViewId,
                                       c_data, c_size, (int32_T *)&vectorUB,
                                       (int32_T *)&b_loop_ub, c_loop_ub_tmp);
          st.site = &krc_emlrtRSI;
          if (b_mapPoints == 0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &de_emlrtRTEI,
                "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces",
                "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces", 0);
          }
          if ((vectorUB - 1 < 0) ||
              (vectorUB - 1 > connections_Matches.size(0) - 1)) {
            emlrtDynamicBoundsCheckR2012b(vectorUB - 1, 0,
                                          connections_Matches.size(0) - 1,
                                          &mib_emlrtBCI, (emlrtConstCTX)&sp);
          }
          st.site = &lrc_emlrtRSI;
          b_st.site = &ij_emlrtRSI;
          loop_ub = connections_Matches[vectorUB - 1].f1.size(0);
          indexPairs.set_size(&wcc_emlrtRTEI, &sp, loop_ub + mIndices1.size(0),
                              2);
          for (i4 = 0; i4 < 2; i4++) {
            for (i5 = 0; i5 < loop_ub; i5++) {
              indexPairs[i5 + indexPairs.size(0) * i4] =
                  connections_Matches[vectorUB - 1]
                      .f1[i5 +
                          connections_Matches[vectorUB - 1].f1.size(0) * i4];
            }
          }
          b_loop_ub = mIndices1.size(0);
          for (i4 = 0; i4 < b_loop_ub; i4++) {
            b_mapPoints = i4 + loop_ub;
            indexPairs[b_mapPoints] = mIndices1[i4];
            indexPairs[b_mapPoints + indexPairs.size(0)] = uIndices1[i4];
          }
          if (b_i + 1 > i1) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &yjb_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          st.site = &mrc_emlrtRSI;
          vSetKeyFrames.updateConnection(st, kfPose_tmp, currKeyFrameId,
                                         indexPairs);
        }
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (helperCreateNewMapPoints.cpp)
