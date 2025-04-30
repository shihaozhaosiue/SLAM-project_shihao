//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperTrackLastKeyFrameKLT.cpp
//
// Code generation for function 'helperTrackLastKeyFrameKLT'
//

// Include files
#include "helperTrackLastKeyFrameKLT.h"
#include "ORBPoints.h"
#include "PointTracker.h"
#include "binaryFeatures.h"
#include "bundleAdjustmentMotion.h"
#include "cameraIntrinsics.h"
#include "cameraIntrinsicsArray.h"
#include "estRelPoseImpl.h"
#include "find.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "helperVisualSLAMCodegen_types.h"
#include "matchFeaturesInRadius.h"
#include "msac.h"
#include "rigidtform3d.h"
#include "rigidtform3dImpl.h"
#include "rt_nonfinite.h"
#include "worldpointset.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include "pointTrackerCore_api.hpp"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo sec_emlrtRSI{
    1,                    // lineNo
    "SystemCore/release", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+"
    "coder\\SystemCore.p" // pathName
};

static emlrtRSInfo
    afc_emlrtRSI{
        345,                               // lineNo
        "PointTracker/validateInputsImpl", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pathName
    };

static emlrtRSInfo hfc_emlrtRSI{
    37,                           // lineNo
    "helperTrackLastKeyFrameKLT", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pathName
};

static emlrtRSInfo ifc_emlrtRSI{
    47,                           // lineNo
    "helperTrackLastKeyFrameKLT", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pathName
};

static emlrtRSInfo jfc_emlrtRSI{
    51,                           // lineNo
    "helperTrackLastKeyFrameKLT", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pathName
};

static emlrtRSInfo kfc_emlrtRSI{
    56,                           // lineNo
    "helperTrackLastKeyFrameKLT", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pathName
};

static emlrtRSInfo lfc_emlrtRSI{
    71,                           // lineNo
    "helperTrackLastKeyFrameKLT", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pathName
};

static emlrtRSInfo mfc_emlrtRSI{
    82,                           // lineNo
    "helperTrackLastKeyFrameKLT", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pathName
};

static emlrtRSInfo nfc_emlrtRSI{
    87,                           // lineNo
    "helperTrackLastKeyFrameKLT", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pathName
};

static emlrtRSInfo
    bgc_emlrtRSI{
        323,                     // lineNo
        "PointTracker/stepImpl", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pathName
    };

static emlrtRSInfo
    cgc_emlrtRSI{
        331,                     // lineNo
        "PointTracker/stepImpl", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pathName
    };

static emlrtRSInfo
    dgc_emlrtRSI{
        334,                     // lineNo
        "PointTracker/stepImpl", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pathName
    };

static emlrtRSInfo
    ugc_emlrtRSI{
        10,             // lineNo
        "estworldpose", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estworldpose.m" // pathName
    };

static emlrtRSInfo
    vgc_emlrtRSI{
        14,             // lineNo
        "estworldpose", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estworldpose.m" // pathName
    };

static emlrtRSInfo
    wgc_emlrtRSI{
        19,             // lineNo
        "estworldpose", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estworldpose.m" // pathName
    };

static emlrtRSInfo xgc_emlrtRSI{
    37,                 // lineNo
    "estWorldPoseImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pathName
};

static emlrtRSInfo ygc_emlrtRSI{
    36,                 // lineNo
    "estWorldPoseImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pathName
};

static emlrtRSInfo ahc_emlrtRSI{
    10,                 // lineNo
    "estWorldPoseImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pathName
};

static emlrtRSInfo bhc_emlrtRSI{
    150,           // lineNo
    "parseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pathName
};

static emlrtRSInfo chc_emlrtRSI{
    159,           // lineNo
    "parseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pathName
};

static emlrtRSInfo dhc_emlrtRSI{
    131,    // lineNo
    "pack", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pathName
};

static emlrtRTEInfo
    ke_emlrtRTEI{
        34,                   // lineNo
        45,                   // colNo
        "checkRuntimeStatus", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estworldpose.m" // pName
    };

static emlrtRTEInfo
    le_emlrtRTEI{
        31,                   // lineNo
        57,                   // colNo
        "checkRuntimeStatus", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estworldpose.m" // pName
    };

static emlrtECInfo
    vc_emlrtECI{
        1,                                 // nDims
        603,                               // lineNo
        14,                                // colNo
        "PointTracker/pointsOutsideImage", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pName
    };

static emlrtDCInfo ib_emlrtDCI{
    135,                                       // lineNo
    43,                                        // colNo
    "pointTrackerBuildable/pointTracker_step", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\pointTrackerBuildable.m", // pName
    4                                     // checkKind
};

static emlrtRTEInfo
    me_emlrtRTEI{
        317,                     // lineNo
        7,                       // colNo
        "PointTracker/stepImpl", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pName
    };

static emlrtRTEInfo
    ne_emlrtRTEI{
        308,                     // lineNo
        11,                      // colNo
        "PointTracker/stepImpl", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pName
    };

static emlrtRTEInfo
    oe_emlrtRTEI{
        296,                     // lineNo
        7,                       // colNo
        "PointTracker/stepImpl", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pName
    };

static emlrtBCInfo on_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    45,                           // lineNo
    40,                           // colNo
    "views.Features",             // aName
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo pn_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    43,                           // lineNo
    26,                           // colNo
    "index2d",                    // aName
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo qn_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    42,                           // lineNo
    26,                           // colNo
    "index3d",                    // aName
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo jb_emlrtDCI{
    45,                           // lineNo
    40,                           // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo
    rn_emlrtBCI{
        -1,                             // iFirst
        -1,                             // iLast
        569,                            // lineNo
        14,                             // colNo
        "",                             // aName
        "PointTracker/normalizeScores", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo sn_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    45,                               // lineNo
    56,                               // colNo
    "views.Features{lastKeyFrameId}", // aName
    "helperTrackLastKeyFrameKLT",     // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo kb_emlrtDCI{
    45,                           // lineNo
    56,                           // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo
    tn_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        332,                     // lineNo
        21,                      // colNo
        "",                      // aName
        "PointTracker/stepImpl", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo un_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    51,                           // lineNo
    74,                           // colNo
    "lastKeyFrameFeatures",       // aName
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo vn_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    52,                           // lineNo
    69,                           // colNo
    "centerPoints",               // aName
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo wn_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    56,                           // lineNo
    78,                           // colNo
    "lastKeyFrameFeatures",       // aName
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo xn_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    73,                           // lineNo
    33,                           // colNo
    "index3dVal",                 // aName
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo yn_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    73,                           // lineNo
    41,                           // colNo
    "tempIdx",                    // aName
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ao_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    77,                           // lineNo
    42,                           // colNo
    "currPoints.Location",        // aName
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo bo_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    78,                           // lineNo
    44,                           // colNo
    "mapPoints.WorldPoints",      // aName
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo co_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    57,                           // lineNo
    73,                           // colNo
    "centerPoints",               // aName
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo do_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    87,                           // lineNo
    54,                           // colNo
    "matchedWorldPoints",         // aName
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo eo_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    87,                           // lineNo
    84,                           // colNo
    "matchedImagePoints",         // aName
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo fo_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    91,                           // lineNo
    27,                           // colNo
    "mapPointIdx",                // aName
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo go_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    92,                           // lineNo
    25,                           // colNo
    "featureIdx",                 // aName
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m", // pName
    0                                               // checkKind
};

static emlrtRTEInfo sfb_emlrtRTEI{
    45,                           // lineNo
    1,                            // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pName
};

static emlrtRTEInfo tfb_emlrtRTEI{
    135,                     // lineNo
    13,                      // colNo
    "pointTrackerBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\pointTrackerBuildable.m" // pName
};

static emlrtRTEInfo ufb_emlrtRTEI{
    136,                     // lineNo
    44,                      // colNo
    "pointTrackerBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\pointTrackerBuildable.m" // pName
};

static emlrtRTEInfo vfb_emlrtRTEI{
    137,                     // lineNo
    37,                      // colNo
    "pointTrackerBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\pointTrackerBuildable.m" // pName
};

static emlrtRTEInfo
    wfb_emlrtRTEI{
        603,            // lineNo
        15,             // colNo
        "PointTracker", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pName
    };

static emlrtRTEInfo
    xfb_emlrtRTEI{
        603,            // lineNo
        25,             // colNo
        "PointTracker", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pName
    };

static emlrtRTEInfo
    yfb_emlrtRTEI{
        604,            // lineNo
        12,             // colNo
        "PointTracker", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pName
    };

static emlrtRTEInfo
    agb_emlrtRTEI{
        604,            // lineNo
        37,             // colNo
        "PointTracker", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pName
    };

static emlrtRTEInfo cgb_emlrtRTEI{
    32,                           // lineNo
    48,                           // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pName
};

static emlrtRTEInfo dgb_emlrtRTEI{
    52,                           // lineNo
    56,                           // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pName
};

static emlrtRTEInfo egb_emlrtRTEI{
    57,                           // lineNo
    60,                           // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pName
};

static emlrtRTEInfo fgb_emlrtRTEI{
    71,                           // lineNo
    1,                            // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pName
};

static emlrtRTEInfo ggb_emlrtRTEI{
    73,                           // lineNo
    1,                            // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pName
};

static emlrtRTEInfo hgb_emlrtRTEI{
    77,                           // lineNo
    1,                            // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pName
};

static emlrtRTEInfo igb_emlrtRTEI{
    78,                           // lineNo
    1,                            // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pName
};

static emlrtRTEInfo jgb_emlrtRTEI{
    151,                // lineNo
    1,                  // colNo
    "estWorldPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pName
};

static emlrtRTEInfo kgb_emlrtRTEI{
    152,                // lineNo
    1,                  // colNo
    "estWorldPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pName
};

static emlrtRTEInfo lgb_emlrtRTEI{
    41,    // lineNo
    14,    // colNo
    "cat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pName
};

static emlrtRTEInfo mgb_emlrtRTEI{
    48,                 // lineNo
    9,                  // colNo
    "estWorldPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pName
};

static emlrtRTEInfo ngb_emlrtRTEI{
    87,                           // lineNo
    35,                           // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pName
};

static emlrtRTEInfo ogb_emlrtRTEI{
    87,                           // lineNo
    65,                           // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pName
};

static emlrtRTEInfo pgb_emlrtRTEI{
    91,                           // lineNo
    15,                           // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pName
};

static emlrtRTEInfo qgb_emlrtRTEI{
    91,                           // lineNo
    1,                            // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pName
};

static emlrtRTEInfo rgb_emlrtRTEI{
    92,                           // lineNo
    1,                            // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pName
};

static emlrtRTEInfo sgb_emlrtRTEI{
    64,                           // lineNo
    5,                            // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pName
};

static emlrtRTEInfo tgb_emlrtRTEI{
    65,                           // lineNo
    5,                            // colNo
    "helperTrackLastKeyFrameKLT", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperTrackLastKeyFrameKLT.m" // pName
};

static emlrtRSInfo
    yid_emlrtRSI{
        603,                               // lineNo
        "PointTracker/pointsOutsideImage", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pathName
    };

// Function Definitions
void b_helperTrackLastKeyFrameKLT(
    c_helperVisualSLAMCodegenStackD *SD, const emlrtStack &sp,
    coder::vision::PointTracker &tracker, const uint8_T currI[307200],
    const coder::worldpointset &mapPoints,
    const coder::array<cell_wrap_8, 2U> &views_Features,
    const coder::binaryFeatures &currFeatures,
    const coder::ORBPoints &currPoints, real_T lastKeyFrameId,
    const coder::cameraIntrinsics &intrinsics, coder::c_rigidtform3d &currPose,
    coder::array<real_T, 1U> &mapPointIdx,
    coder::array<uint32_T, 1U> &featureIdx)
{
  void *ptrObj;
  coder::b_binaryFeatures b_this;
  coder::binaryFeatures c_this;
  coder::c_rigidtform3d b_currPose;
  coder::array<real_T, 2U> b_imagePts;
  coder::array<real_T, 2U> imagePts;
  coder::array<real_T, 2U> worldPts;
  coder::array<real_T, 1U> tempIdx;
  coder::array<int32_T, 1U> ii;
  coder::array<int32_T, 1U> r5;
  coder::array<real32_T, 2U> b_matchedImagePoints;
  coder::array<real32_T, 2U> b_matchedWorldPoints;
  coder::array<real32_T, 2U> matchedImagePoints;
  coder::array<real32_T, 2U> matchedWorldPoints;
  coder::array<real32_T, 2U> pointsTmp;
  coder::array<uint32_T, 2U> indexPairs;
  coder::array<uint8_T, 2U> lastKeyFrameFeatures;
  coder::array<boolean_T, 1U> b_r;
  coder::array<boolean_T, 1U> pointValidity;
  coder::array<boolean_T, 1U> r1;
  coder::array<boolean_T, 1U> r2;
  coder::bounded_array<cell_wrap_25, 1U, 1U> index2d;
  coder::bounded_array<cell_wrap_25, 1U, 1U> index3d;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T pose_R[9];
  real_T pose_t[3];
  real_T num_points;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T k;
  int32_T loop_ub;
  boolean_T x[2];
  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
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
  // helperTrackLastKeyFrameKLT Estimate the camera pose by tracking the last
  // key frame
  //    [currPose, mapPointIdx, featureIdx] =
  //    helperTrackLastKeyFrameKLT(tracker, currI, mapPoints, views,
  //    currFeatures, currPoints, lastKeyFrameId, intrinsics) estimates the
  //    camera pose of the current frame by matching features with the previous
  //    key frame.
  //
  //    This is an example helper function that is subject to change or removal
  //    in future releases.
  //
  //    Inputs
  //    ------
  //    tracker           - A vision.PointTracker object
  //    currI             - Current image frame
  //    mapPoints         - A mapPointSet objects storing map points
  //    views             - View attributes of key frames
  //    currFeatures      - Features in the current frame
  //    currPoints        - Feature points in the current frame
  //    centerPoints      - Predicted locations of feature points from last key
  //                        frame on the current frame
  //    lastKeyFrameId    - ViewId of the last key frame
  //    intrinsics        - Camera intrinsics
  //    scaleFactor       - scale factor of features
  //
  //    Outputs
  //    -------
  //    currPose          - Estimated camera pose of the current frame
  //    mapPointIdx       - Indices of map points observed in the current frame
  //    featureIdx        - Indices of features corresponding to mapPointIdx
  //    Copyright 2024 The MathWorks, Inc.
  //  Match features from the previous key frame with known world locations
  st.site = &hfc_emlrtRSI;
  index3d.size[0] = mapPoints.findWorldPointsInView(
      st, lastKeyFrameId, index3d.data, index2d.data, i);
  index2d.size[0] = i;
  if (index3d.size[0] - 1 < 0) {
    emlrtDynamicBoundsCheckR2012b(0, 0, index3d.size[0] - 1, &qn_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if (index2d.size[0] - 1 < 0) {
    emlrtDynamicBoundsCheckR2012b(0, 0, index2d.size[0] - 1, &pn_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if (lastKeyFrameId !=
      static_cast<int32_T>(muDoubleScalarFloor(lastKeyFrameId))) {
    emlrtIntegerCheckR2012b(lastKeyFrameId, &jb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(lastKeyFrameId) - 1 < 0) ||
      (static_cast<int32_T>(lastKeyFrameId) - 1 > views_Features.size(0) - 1)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(lastKeyFrameId) - 1, 0,
                                  views_Features.size(0) - 1, &on_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  i = views_Features[static_cast<int32_T>(lastKeyFrameId) - 1].f1.size(1);
  loop_ub = index2d.data[0].f1.size(0);
  lastKeyFrameFeatures.set_size(&sfb_emlrtRTEI, &sp, index2d.data[0].f1.size(0),
                                i);
  for (i1 = 0; i1 < i; i1++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      k = views_Features[static_cast<int32_T>(lastKeyFrameId) - 1].f1.size(0);
      num_points = index2d.data[0].f1[i2];
      if (num_points != static_cast<int32_T>(muDoubleScalarFloor(num_points))) {
        emlrtIntegerCheckR2012b(num_points, &kb_emlrtDCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(num_points) < 1) ||
          (static_cast<int32_T>(num_points) > k)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(num_points), 1, k,
                                      &sn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      lastKeyFrameFeatures[i2 + lastKeyFrameFeatures.size(0) * i1] =
          views_Features[static_cast<int32_T>(lastKeyFrameId) - 1]
              .f1[(static_cast<int32_T>(num_points) +
                   views_Features[static_cast<int32_T>(lastKeyFrameId) - 1]
                           .f1.size(0) *
                       i1) -
                  1];
    }
  }
  st.site = &ifc_emlrtRSI;
  b_st.site = &sec_emlrtRSI;
  if (tracker.isInitialized == 2) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &je_emlrtRTEI, "MATLAB:system:methodCalledWhenReleasedCodegen",
        "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, "step");
  }
  if (tracker.isInitialized != 1) {
    c_st.site = &sec_emlrtRSI;
    d_st.site = &sec_emlrtRSI;
    tracker.setup(d_st);
  }
  c_st.site = &sec_emlrtRSI;
  anyInputSizeChanged = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (tracker.inputVarSize[0].f1[k] != static_cast<uint32_T>(iv4[k])) {
      anyInputSizeChanged = true;
      for (i1 = 0; i1 < 8; i1++) {
        tracker.inputVarSize[0].f1[i1] = static_cast<uint32_T>(iv4[i1]);
      }
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (anyInputSizeChanged) {
    c_st.site = &sec_emlrtRSI;
    d_st.site = &afc_emlrtRSI;
  }
  c_st.site = &sec_emlrtRSI;
  if (tracker.FrameClassID != 2.0) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &oe_emlrtRTEI,
        "vision:PointTracker:expectedSameImageClassAsInitialized",
        "vision:PointTracker:expectedSameImageClassAsInitialized", 0);
  }
  if (tracker.IsRGB) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ne_emlrtRTEI,
                                  "vision:PointTracker:expectedRGB",
                                  "vision:PointTracker:expectedRGB", 0);
  }
  x[0] = (tracker.FrameSize[0] != 480.0);
  x[1] = (tracker.FrameSize[1] != 640.0);
  anyInputSizeChanged = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (x[k]) {
      anyInputSizeChanged = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (anyInputSizeChanged) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &me_emlrtRTEI,
        "vision:PointTracker:expectedSameImageSizeAsInitialized",
        "vision:PointTracker:expectedSameImageSizeAsInitialized", 0);
  }
  d_st.site = &bgc_emlrtRSI;
  ptrObj = tracker.pTracker;
  num_points = tracker.NumPoints;
  num_points = muDoubleScalarRound(num_points);
  if (num_points < 2.147483648E+9) {
    if (num_points >= -2.147483648E+9) {
      i1 = static_cast<int32_T>(num_points);
    } else {
      i1 = MIN_int32_T;
    }
  } else if (num_points >= 2.147483648E+9) {
    i1 = MAX_int32_T;
  } else {
    i1 = 0;
  }
  if (i1 < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(i1), &ib_emlrtDCI, &d_st);
  }
  pointsTmp.set_size(&tfb_emlrtRTEI, &d_st, i1, 2);
  pointValidity.set_size(&ufb_emlrtRTEI, &d_st, i1);
  tempIdx.set_size(&vfb_emlrtRTEI, &d_st, i1);
  for (i1 = 0; i1 < 480; i1++) {
    for (i2 = 0; i2 < 640; i2++) {
      SD->f2.Iu8_grayT[i2 + 640 * i1] = currI[i1 + 480 * i2];
    }
  }
  pointTracker_step(ptrObj, &SD->f2.Iu8_grayT[0], 480, 640, &pointsTmp[0],
                    &(pointValidity.data())[0], &(tempIdx.data())[0]);
  d_st.site = &cgc_emlrtRSI;
  loop_ub = pointsTmp.size(0);
  b_r.set_size(&wfb_emlrtRTEI, &d_st, pointsTmp.size(0));
  r1.set_size(&xfb_emlrtRTEI, &d_st, pointsTmp.size(0));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_r[i1] = (pointsTmp[i1] < 1.0F);
    r1[i1] = (pointsTmp[i1 + pointsTmp.size(0)] < 1.0F);
  }
  if (b_r.size(0) == r1.size(0)) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_r[i1] = (b_r[i1] || r1[i1]);
    }
  } else {
    e_st.site = &yid_emlrtRSI;
    b_or(e_st, b_r, r1);
  }
  num_points = tracker.FrameSize[1];
  r1.set_size(&yfb_emlrtRTEI, &d_st, pointsTmp.size(0));
  for (i1 = 0; i1 < loop_ub; i1++) {
    r1[i1] = (pointsTmp[i1] > num_points);
  }
  b_loop_ub = b_r.size(0);
  if ((b_r.size(0) != pointsTmp.size(0)) &&
      ((b_r.size(0) != 1) && (pointsTmp.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_r.size(0), pointsTmp.size(0), &vc_emlrtECI,
                                &d_st);
  }
  if (b_r.size(0) == r1.size(0)) {
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_r[i1] = (b_r[i1] || r1[i1]);
    }
  } else {
    e_st.site = &yid_emlrtRSI;
    b_or(e_st, b_r, r1);
  }
  num_points = tracker.FrameSize[0];
  r1.set_size(&agb_emlrtRTEI, &d_st, pointsTmp.size(0));
  for (i1 = 0; i1 < loop_ub; i1++) {
    r1[i1] = (pointsTmp[i1 + pointsTmp.size(0)] > num_points);
  }
  loop_ub = b_r.size(0);
  if ((b_r.size(0) != pointsTmp.size(0)) &&
      ((b_r.size(0) != 1) && (pointsTmp.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_r.size(0), pointsTmp.size(0), &vc_emlrtECI,
                                &d_st);
  }
  if (b_r.size(0) == r1.size(0)) {
    r2.set_size(&bgb_emlrtRTEI, &c_st, b_r.size(0));
    for (i1 = 0; i1 < loop_ub; i1++) {
      r2[i1] = (b_r[i1] || r1[i1]);
    }
  } else {
    d_st.site = &yid_emlrtRSI;
    c_or(d_st, r2, b_r, r1);
  }
  k = r2.size(0);
  for (b_loop_ub = 0; b_loop_ub < k; b_loop_ub++) {
    if (r2[b_loop_ub]) {
      if (b_loop_ub > pointValidity.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_loop_ub, 0, pointValidity.size(0) - 1,
                                      &tn_emlrtBCI, &c_st);
      }
      pointValidity[b_loop_ub] = false;
    }
  }
  d_st.site = &dgc_emlrtRSI;
  k = pointValidity.size(0);
  for (b_loop_ub = 0; b_loop_ub < k; b_loop_ub++) {
    if ((!pointValidity[b_loop_ub]) && (b_loop_ub > tempIdx.size(0) - 1)) {
      emlrtDynamicBoundsCheckR2012b(b_loop_ub, 0, tempIdx.size(0) - 1,
                                    &rn_emlrtBCI, &d_st);
    }
  }
  loop_ub = 0;
  for (b_loop_ub = 0; b_loop_ub < k; b_loop_ub++) {
    if (pointValidity[b_loop_ub]) {
      loop_ub++;
    }
  }
  ii.set_size(&cgb_emlrtRTEI, &sp, loop_ub);
  loop_ub = 0;
  for (b_loop_ub = 0; b_loop_ub < k; b_loop_ub++) {
    if (pointValidity[b_loop_ub]) {
      ii[loop_ub] = b_loop_ub;
      loop_ub++;
    }
  }
  k = ii.size(0);
  for (i1 = 0; i1 < k; i1++) {
    if (ii[i1] > index2d.data[0].f1.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(ii[i1], 0, index2d.data[0].f1.size(0) - 1,
                                    &un_emlrtBCI, (emlrtConstCTX)&sp);
    }
  }
  num_points = static_cast<real_T>(i) * 8.0;
  b_this.NumBits = num_points;
  b_this.Features.set_size(&uh_emlrtRTEI, &sp, ii.size(0), i);
  for (i1 = 0; i1 < i; i1++) {
    for (i2 = 0; i2 < k; i2++) {
      b_this.Features[i2 + b_this.Features.size(0) * i1] =
          lastKeyFrameFeatures[ii[i2] + lastKeyFrameFeatures.size(0) * i1];
    }
  }
  c_this.NumBits = 256.0;
  c_this.NumFeatures = currFeatures.Features.size(0);
  c_this.Features.set_size(&uh_emlrtRTEI, &sp, currFeatures.Features.size(0),
                           32);
  loop_ub = currFeatures.Features.size(0) << 5;
  for (i1 = 0; i1 < loop_ub; i1++) {
    c_this.Features[i1] = currFeatures.Features[i1];
  }
  matchedImagePoints.set_size(&dgb_emlrtRTEI, &sp, ii.size(0), 2);
  for (i1 = 0; i1 < 2; i1++) {
    for (i2 = 0; i2 < k; i2++) {
      if (ii[i2] > pointsTmp.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(ii[i2], 0, pointsTmp.size(0) - 1,
                                      &vn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      matchedImagePoints[i2 + matchedImagePoints.size(0) * i1] =
          pointsTmp[ii[i2] + pointsTmp.size(0) * i1];
    }
  }
  st.site = &jfc_emlrtRSI;
  coder::matchFeaturesInRadius(st, b_this, c_this, currPoints,
                               matchedImagePoints, indexPairs);
  if (indexPairs.size(0) < 20) {
    for (i1 = 0; i1 < k; i1++) {
      if (ii[i1] > index2d.data[0].f1.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(ii[i1], 0, index2d.data[0].f1.size(0) - 1,
                                      &wn_emlrtBCI, (emlrtConstCTX)&sp);
      }
    }
    b_this.NumBits = num_points;
    b_this.Features.set_size(&uh_emlrtRTEI, &sp, ii.size(0), i);
    for (i1 = 0; i1 < i; i1++) {
      for (i2 = 0; i2 < k; i2++) {
        b_this.Features[i2 + b_this.Features.size(0) * i1] =
            lastKeyFrameFeatures[ii[i2] + lastKeyFrameFeatures.size(0) * i1];
      }
    }
    c_this.NumBits = 256.0;
    c_this.NumFeatures = currFeatures.Features.size(0);
    c_this.Features.set_size(&uh_emlrtRTEI, &sp, currFeatures.Features.size(0),
                             32);
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_this.Features[i1] = currFeatures.Features[i1];
    }
    matchedImagePoints.set_size(&egb_emlrtRTEI, &sp, ii.size(0), 2);
    for (i1 = 0; i1 < 2; i1++) {
      for (i2 = 0; i2 < k; i2++) {
        if (ii[i2] > pointsTmp.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(ii[i2], 0, pointsTmp.size(0) - 1,
                                        &co_emlrtBCI, (emlrtConstCTX)&sp);
        }
        matchedImagePoints[i2 + matchedImagePoints.size(0) * i1] =
            pointsTmp[ii[i2] + pointsTmp.size(0) * i1];
      }
    }
    st.site = &kfc_emlrtRSI;
    coder::b_matchFeaturesInRadius(st, b_this, c_this, currPoints,
                                   matchedImagePoints, indexPairs);
  }
  if (indexPairs.size(0) < 10) {
    for (i1 = 0; i1 < 9; i1++) {
      currPose.R[i1] = iv1[i1];
    }
    currPose.Translation[0] = 0.0;
    currPose.Translation[1] = 0.0;
    currPose.Translation[2] = 0.0;
    currPose.Data.size[0] = 1;
    currPose.Data.size[1] = 1;
    currPose.Data.size[0] = 0;
    currPose.Data.size[1] = 0;
    mapPointIdx.set_size(&sgb_emlrtRTEI, &sp, 0);
    featureIdx.set_size(&tgb_emlrtRTEI, &sp, 0);
  } else {
    real_T b_intrinsics[9];
    real_T orientation[9];
    //  Obtain the index of matched map points and features
    st.site = &lfc_emlrtRSI;
    b_st.site = &aq_emlrtRSI;
    coder::b_eml_find(b_st, pointValidity, ii);
    loop_ub = ii.size(0);
    tempIdx.set_size(&fgb_emlrtRTEI, &st, ii.size(0));
    for (i1 = 0; i1 < loop_ub; i1++) {
      tempIdx[i1] = ii[i1];
    }
    //  Convert to linear index
    b_loop_ub = indexPairs.size(0);
    mapPointIdx.set_size(&ggb_emlrtRTEI, &sp, indexPairs.size(0));
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      if ((static_cast<int32_T>(indexPairs[i1]) < 1) ||
          (static_cast<int32_T>(indexPairs[i1]) > loop_ub)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indexPairs[i1]), 1,
                                      loop_ub, &yn_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i2 = static_cast<int32_T>(
          tempIdx[static_cast<int32_T>(indexPairs[i1]) - 1]);
      if ((i2 < 1) || (i2 > index3d.data[0].f1.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, index3d.data[0].f1.size(0),
                                      &xn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      mapPointIdx[i1] = index3d.data[0].f1[i2 - 1];
    }
    matchedImagePoints.set_size(&hgb_emlrtRTEI, &sp, indexPairs.size(0), 2);
    for (i1 = 0; i1 < 2; i1++) {
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        if ((static_cast<int32_T>(indexPairs[i2 + indexPairs.size(0)]) < 1) ||
            (static_cast<int32_T>(indexPairs[i2 + indexPairs.size(0)]) >
             currPoints.pLocation.size(0))) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(indexPairs[i2 + indexPairs.size(0)]), 1,
              currPoints.pLocation.size(0), &ao_emlrtBCI, (emlrtConstCTX)&sp);
        }
        matchedImagePoints[i2 + matchedImagePoints.size(0) * i1] =
            currPoints.pLocation[(static_cast<int32_T>(
                                      indexPairs[i2 + indexPairs.size(0)]) +
                                  currPoints.pLocation.size(0) * i1) -
                                 1];
      }
    }
    loop_ub = mapPointIdx.size(0);
    matchedWorldPoints.set_size(&igb_emlrtRTEI, &sp, mapPointIdx.size(0), 3);
    for (i1 = 0; i1 < 3; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        k = static_cast<int32_T>(mapPointIdx[i2]);
        if ((k < 1) || (k > mapPoints.WorldPoints.size(0))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, mapPoints.WorldPoints.size(0),
                                        &bo_emlrtBCI, (emlrtConstCTX)&sp);
        }
        matchedWorldPoints[i2 + matchedWorldPoints.size(0) * i1] =
            mapPoints.WorldPoints[(k + mapPoints.WorldPoints.size(0) * i1) - 1];
      }
    }
    //  Estimate the camera pose
    st.site = &mfc_emlrtRSI;
    b_st.site = &ugc_emlrtRSI;
    c_st.site = &ahc_emlrtRSI;
    d_st.site = &bhc_emlrtRSI;
    loop_ub = matchedImagePoints.size(0);
    imagePts.set_size(&jgb_emlrtRTEI, &c_st, matchedImagePoints.size(0), 2);
    i = matchedImagePoints.size(0) << 1;
    for (i1 = 0; i1 < i; i1++) {
      imagePts[i1] = matchedImagePoints[i1];
    }
    b_loop_ub = matchedWorldPoints.size(0);
    worldPts.set_size(&kgb_emlrtRTEI, &c_st, matchedWorldPoints.size(0), 3);
    i = matchedWorldPoints.size(0) * 3;
    for (i1 = 0; i1 < i; i1++) {
      worldPts[i1] = matchedWorldPoints[i1];
    }
    d_st.site = &chc_emlrtRSI;
    e_st.site = &be_emlrtRSI;
    if (intrinsics.cameraIntrinsicsArrayData.size(0) *
            intrinsics.cameraIntrinsicsArrayData.size(1) !=
        1) {
      emlrtErrorWithMessageIdR2018a(
          &e_st, &ob_emlrtRTEI,
          "Coder:toolbox:ValidateattributesexpectedScalar",
          "MATLAB:estworldpose:expectedScalar", 3, 4, 12, "cameraParams");
    }
    c_st.site = &ygc_emlrtRSI;
    d_st.site = &dhc_emlrtRSI;
    e_st.site = &kn_emlrtRSI;
    f_st.site = &jj_emlrtRSI;
    if (worldPts.size(0) != imagePts.size(0)) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    k = matchedImagePoints.size(0);
    b_imagePts.set_size(&lgb_emlrtRTEI, &b_st, matchedImagePoints.size(0), 5);
    for (i1 = 0; i1 < 2; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_imagePts[i2 + b_imagePts.size(0) * i1] =
            imagePts[i2 + imagePts.size(0) * i1];
      }
    }
    for (i1 = 0; i1 < 3; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_imagePts[i2 + b_imagePts.size(0) * (i1 + 2)] = worldPts[i2 + k * i1];
      }
    }
    for (i1 = 0; i1 < 3; i1++) {
      b_intrinsics[3 * i1] = intrinsics.K[i1];
      b_intrinsics[3 * i1 + 1] = intrinsics.K[i1 + 3];
      b_intrinsics[3 * i1 + 2] = intrinsics.K[i1 + 6];
    }
    c_st.site = &xgc_emlrtRSI;
    anyInputSizeChanged = coder::vision::internal::ransac::c_msac(
        c_st, b_imagePts, b_intrinsics, pose_R, pose_t, pointValidity);
    if (anyInputSizeChanged) {
      for (i1 = 0; i1 < 3; i1++) {
        orientation[3 * i1] = pose_R[i1];
        orientation[3 * i1 + 1] = pose_R[i1 + 3];
        orientation[3 * i1 + 2] = pose_R[i1 + 6];
        pose_t[i1] = -pose_t[i1];
      }
      __m128d r3;
      __m128d r4;
      real_T d;
      real_T d1;
      num_points = pose_t[0];
      d = pose_t[1];
      d1 = pose_t[2];
      r3 = _mm_loadu_pd(&pose_R[0]);
      r3 = _mm_mul_pd(_mm_set1_pd(num_points), r3);
      r4 = _mm_loadu_pd(&pose_R[3]);
      r4 = _mm_mul_pd(_mm_set1_pd(d), r4);
      r3 = _mm_add_pd(r3, r4);
      r4 = _mm_loadu_pd(&pose_R[6]);
      r4 = _mm_mul_pd(_mm_set1_pd(d1), r4);
      r3 = _mm_add_pd(r3, r4);
      _mm_storeu_pd(&pose_t[0], r3);
      pose_t[2] = (num_points * pose_R[2] + d * pose_R[5]) + d1 * pose_R[8];
      k = 0;
    } else {
      k = 2;
      pointValidity.set_size(&mgb_emlrtRTEI, &b_st, matchedWorldPoints.size(0));
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        pointValidity[i1] = false;
      }
      for (i1 = 0; i1 < 9; i1++) {
        orientation[i1] = rtNaN;
      }
      pose_t[0] = rtNaN;
      pose_t[1] = rtNaN;
      pose_t[2] = rtNaN;
    }
    b_st.site = &vgc_emlrtRSI;
    if (k == 1) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &le_emlrtRTEI, "vision:points:notEnoughMatchedPts",
          "vision:points:notEnoughMatchedPts", 8, 4, 11, "imagePoints", 4, 11,
          "worldPoints", 6, 4.0);
    }
    if (k == 2) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ke_emlrtRTEI,
                                    "vision:points:notEnoughInlierMatches",
                                    "vision:points:notEnoughInlierMatches", 6,
                                    4, 11, "imagePoints", 4, 11, "worldPoints");
    }
    if (k == 0) {
      for (i1 = 0; i1 < 3; i1++) {
        b_intrinsics[3 * i1] = orientation[i1];
        b_intrinsics[3 * i1 + 1] = orientation[i1 + 3];
        b_intrinsics[3 * i1 + 2] = orientation[i1 + 6];
      }
      b_st.site = &wgc_emlrtRSI;
      b_currPose.init(b_st, b_intrinsics, pose_t);
    } else {
      for (i1 = 0; i1 < 9; i1++) {
        b_currPose.R[i1] = iv1[i1];
      }
      b_currPose.Translation[0] = 0.0;
      b_currPose.Translation[1] = 0.0;
      b_currPose.Translation[2] = 0.0;
      b_currPose.Data.size[0] = 1;
      b_currPose.Data.size[1] = 1;
      b_currPose.Data.data[0] = currPose.Data.data[0];
    }
    //  Refine the camera pose
    k = pointValidity.size(0);
    loop_ub = 0;
    for (b_loop_ub = 0; b_loop_ub < k; b_loop_ub++) {
      if (pointValidity[b_loop_ub]) {
        loop_ub++;
      }
    }
    r5.set_size(&cgb_emlrtRTEI, &sp, loop_ub);
    loop_ub = 0;
    for (b_loop_ub = 0; b_loop_ub < k; b_loop_ub++) {
      if (pointValidity[b_loop_ub]) {
        r5[loop_ub] = b_loop_ub;
        loop_ub++;
      }
    }
    loop_ub = r5.size(0);
    b_matchedWorldPoints.set_size(&ngb_emlrtRTEI, &sp, r5.size(0), 3);
    for (i1 = 0; i1 < 3; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        if (r5[i2] > indexPairs.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(r5[i2], 0, indexPairs.size(0) - 1,
                                        &do_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_matchedWorldPoints[i2 + b_matchedWorldPoints.size(0) * i1] =
            matchedWorldPoints[r5[i2] + matchedWorldPoints.size(0) * i1];
      }
    }
    b_matchedImagePoints.set_size(&ogb_emlrtRTEI, &sp, r5.size(0), 2);
    for (i1 = 0; i1 < 2; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        if (r5[i2] > indexPairs.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(r5[i2], 0, indexPairs.size(0) - 1,
                                        &eo_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_matchedImagePoints[i2 + b_matchedImagePoints.size(0) * i1] =
            matchedImagePoints[r5[i2] + matchedImagePoints.size(0) * i1];
      }
    }
    st.site = &nfc_emlrtRSI;
    coder::bundleAdjustmentMotion(st, b_matchedWorldPoints,
                                  b_matchedImagePoints, b_currPose, &intrinsics,
                                  currPose);
    tempIdx.set_size(&pgb_emlrtRTEI, &sp, r5.size(0));
    for (i1 = 0; i1 < loop_ub; i1++) {
      if (r5[i1] > indexPairs.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r5[i1], 0, indexPairs.size(0) - 1,
                                      &fo_emlrtBCI, (emlrtConstCTX)&sp);
      }
      tempIdx[i1] = mapPointIdx[r5[i1]];
    }
    b_loop_ub = tempIdx.size(0);
    mapPointIdx.set_size(&qgb_emlrtRTEI, &sp, tempIdx.size(0));
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      mapPointIdx[i1] = tempIdx[i1];
    }
    featureIdx.set_size(&rgb_emlrtRTEI, &sp, r5.size(0));
    for (i1 = 0; i1 < loop_ub; i1++) {
      if (r5[i1] > indexPairs.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r5[i1], 0, indexPairs.size(0) - 1,
                                      &go_emlrtBCI, (emlrtConstCTX)&sp);
      }
      featureIdx[i1] = indexPairs[r5[i1] + indexPairs.size(0)];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (helperTrackLastKeyFrameKLT.cpp)
