//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperVisualSLAMCodegen_data.cpp
//
// Code generation for function 'helperVisualSLAMCodegen_data'
//

// Include files
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_types.h"
#include "rt_nonfinite.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

const volatile char_T *emlrtBreakCheckR2012bFlagVar{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                               // bFirstTime
    false,                                              // bInitialized
    131659U,                                            // fVersionInfo
    nullptr,                                            // fErrorFunction
    "helperVisualSLAMCodegen",                          // fFunctionName
    nullptr,                                            // fRTCallStack
    false,                                              // bDebugMode
    {484843642U, 120961338U, 3062646369U, 3495121251U}, // fSigWrd
    nullptr                                             // fSigMem
};

emlrtRSInfo od_emlrtRSI{
    12,                          // lineNo
    "ORBPoints_cg/ORBPoints_cg", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPoints_cg.m" // pathName
};

emlrtRSInfo pd_emlrtRSI{
    25,                            // lineNo
    "ORBPointsImpl/ORBPointsImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pathName
};

emlrtRSInfo qd_emlrtRSI{
    26,                            // lineNo
    "ORBPointsImpl/ORBPointsImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pathName
};

emlrtRSInfo rd_emlrtRSI{
    193,                      // lineNo
    "ORBPointsImpl/validate", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pathName
};

emlrtRSInfo sd_emlrtRSI{
    195,                      // lineNo
    "ORBPointsImpl/validate", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pathName
};

emlrtRSInfo td_emlrtRSI{
    196,                      // lineNo
    "ORBPointsImpl/validate", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pathName
};

emlrtRSInfo ud_emlrtRSI{
    200,                      // lineNo
    "ORBPointsImpl/validate", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pathName
};

emlrtRSInfo vd_emlrtRSI{
    201,                      // lineNo
    "ORBPointsImpl/validate", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pathName
};

emlrtRSInfo wd_emlrtRSI{
    305,                          // lineNo
    "FeaturePointsImpl/validate", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

emlrtRSInfo xd_emlrtRSI{
    306,                          // lineNo
    "FeaturePointsImpl/validate", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

emlrtRSInfo yd_emlrtRSI{
    310,                          // lineNo
    "FeaturePointsImpl/validate", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

emlrtRSInfo ae_emlrtRSI{
    357,                               // lineNo
    "FeaturePointsImpl/checkLocation", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

emlrtRSInfo be_emlrtRSI{
    93,                   // lineNo
    "validateattributes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes"
    ".m" // pathName
};

emlrtRSInfo ge_emlrtRSI{
    174,                       // lineNo
    "ORBPointsImpl/configure", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pathName
};

emlrtRSInfo he_emlrtRSI{
    175,                       // lineNo
    "ORBPointsImpl/configure", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pathName
};

emlrtRSInfo ie_emlrtRSI{
    182,                       // lineNo
    "ORBPointsImpl/configure", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pathName
};

emlrtRSInfo je_emlrtRSI{
    184,                       // lineNo
    "ORBPointsImpl/configure", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pathName
};

emlrtRSInfo ke_emlrtRSI{
    188,                       // lineNo
    "ORBPointsImpl/configure", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pathName
};

emlrtRSInfo le_emlrtRSI{
    348,                           // lineNo
    "FeaturePointsImpl/configure", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

emlrtRSInfo me_emlrtRSI{
    408,                             // lineNo
    "FeaturePointsImpl/assignValue", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

emlrtRSInfo ne_emlrtRSI{
    34,       // lineNo
    "repmat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" // pathName
};

emlrtRSInfo oe_emlrtRSI{
    75,       // lineNo
    "repmat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" // pathName
};

emlrtRSInfo pe_emlrtRSI{
    77,       // lineNo
    "repmat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" // pathName
};

emlrtRSInfo qe_emlrtRSI{
    20,                               // lineNo
    "eml_int_forloop_overflow_check", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_"
    "overflow_check.m" // pathName
};

emlrtRSInfo re_emlrtRSI{
    246,                              // lineNo
    "FeaturePointsImpl/set.Location", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

emlrtRSInfo se_emlrtRSI{
    247,                              // lineNo
    "FeaturePointsImpl/set.Location", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

emlrtRSInfo te_emlrtRSI{
    257,                            // lineNo
    "ORBPointsImpl/setScaleFactor", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pathName
};

emlrtRSInfo gf_emlrtRSI{
    238,             // lineNo
    "unaryMinOrMax", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

emlrtRSInfo hf_emlrtRSI{
    73,                      // lineNo
    "vectorMinOrMaxInPlace", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" // pathName
};

emlrtRSInfo if_emlrtRSI{
    65,                      // lineNo
    "vectorMinOrMaxInPlace", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" // pathName
};

emlrtRSInfo jf_emlrtRSI{
    114,         // lineNo
    "findFirst", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" // pathName
};

emlrtRSInfo kf_emlrtRSI{
    131,                        // lineNo
    "minOrMaxRealVectorKernel", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" // pathName
};

emlrtRSInfo lf_emlrtRSI{
    34,               // lineNo
    "rdivide_helper", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
    "helper.m" // pathName
};

emlrtRSInfo mf_emlrtRSI{
    53,    // lineNo
    "div", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pathName
};

emlrtRSInfo sf_emlrtRSI{
    9,                 // lineNo
    "extractFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\extractFeatures.m" // pathName
};

emlrtRSInfo tf_emlrtRSI{
    35,                // lineNo
    "extractFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\extractFeatures.m" // pathName
};

emlrtRSInfo vf_emlrtRSI{
    20,            // lineNo
    "checkPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkPoints.m" // pathName
};

emlrtRSInfo wf_emlrtRSI{
    42,                 // lineNo
    "checkPointObject", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkPoints.m" // pathName
};

emlrtRSInfo xf_emlrtRSI{
    47,                   // lineNo
    "checkPtsAttributes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkPoints.m" // pathName
};

emlrtRSInfo yf_emlrtRSI{
    819,                  // lineNo
    "extractORBFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\extractFeatures.m" // pathName
};

emlrtRSInfo ag_emlrtRSI{
    834,                  // lineNo
    "extractORBFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\extractFeatures.m" // pathName
};

emlrtRSInfo bg_emlrtRSI{
    842,                  // lineNo
    "extractORBFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\extractFeatures.m" // pathName
};

emlrtRSInfo fg_emlrtRSI{
    294,                          // lineNo
    "MatrixTransformation/set.A", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pathName
};

emlrtRSInfo gg_emlrtRSI{
    312,                          // lineNo
    "MatrixTransformation/set.A", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pathName
};

emlrtRSInfo hg_emlrtRSI{
    23,      // lineNo
    "xnrm2", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xnrm2."
    "m" // pathName
};

emlrtRSInfo ig_emlrtRSI{
    38,      // lineNo
    "xnrm2", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xnrm2.m" // pathName
};

emlrtRSInfo qg_emlrtRSI{
    41,        // lineNo
    "xzgetrf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgetrf.m" // pathName
};

emlrtRSInfo rg_emlrtRSI{
    55,        // lineNo
    "xzgetrf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgetrf.m" // pathName
};

emlrtRSInfo sg_emlrtRSI{
    63,        // lineNo
    "xzgetrf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgetrf.m" // pathName
};

emlrtRSInfo tg_emlrtRSI{
    23,       // lineNo
    "ixamax", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\ixamax.m" // pathName
};

emlrtRSInfo ug_emlrtRSI{
    24,       // lineNo
    "ixamax", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\ixamax.m" // pathName
};

emlrtRSInfo vg_emlrtRSI{
    45,      // lineNo
    "xgeru", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgeru."
    "m" // pathName
};

emlrtRSInfo
    wg_emlrtRSI{
        45,     // lineNo
        "xger", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
        "blas\\xger.m" // pathName
    };

emlrtRSInfo xg_emlrtRSI{
    15,     // lineNo
    "xger", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xger.m" // pathName
};

emlrtRSInfo yg_emlrtRSI{
    41,      // lineNo
    "xgerx", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xgerx.m" // pathName
};

emlrtRSInfo ah_emlrtRSI{
    54,      // lineNo
    "xgerx", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xgerx.m" // pathName
};

emlrtRSInfo bh_emlrtRSI{
    22,                                   // lineNo
    "checkTransformationMatrixCondition", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\checkTransformationMatrixCondition.m" // pathName
};

emlrtRSInfo ch_emlrtRSI{
    8,           // lineNo
    "warningIf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\warningIf.m" // pathName
};

emlrtRSInfo dh_emlrtRSI{
    19,              // lineNo
    "matchFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeatures.m" // pathName
};

emlrtRSInfo eh_emlrtRSI{
    42,              // lineNo
    "matchFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeatures.m" // pathName
};

emlrtRSInfo fh_emlrtRSI{
    46,                   // lineNo
    "cvalgMatchFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

emlrtRSInfo gh_emlrtRSI{
    163,                     // lineNo
    "findMatchesExhaustive", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

emlrtRSInfo hh_emlrtRSI{
    178,                     // lineNo
    "findMatchesExhaustive", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

emlrtRSInfo ih_emlrtRSI{
    180,                     // lineNo
    "findMatchesExhaustive", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

emlrtRSInfo jh_emlrtRSI{
    183,                     // lineNo
    "findMatchesExhaustive", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

emlrtRSInfo kh_emlrtRSI{
    191,                     // lineNo
    "findMatchesExhaustive", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

emlrtRSInfo lh_emlrtRSI{
    197,                     // lineNo
    "findMatchesExhaustive", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

emlrtRSInfo mh_emlrtRSI{
    218,                // lineNo
    "exhaustiveSearch", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

emlrtRSInfo nh_emlrtRSI{
    229,                // lineNo
    "exhaustiveSearch", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

emlrtRSInfo oh_emlrtRSI{
    231,                // lineNo
    "exhaustiveSearch", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

emlrtRSInfo rh_emlrtRSI{
    21,                          // lineNo
    "exhaustiveDistanceMetrics", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\exhaustiveDistanceMetrics.m" // pathName
};

emlrtRSInfo sh_emlrtRSI{
    19,              // lineNo
    "metricHamming", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\metricHamming.m" // pathName
};

emlrtRSInfo vh_emlrtRSI{
    28,            // lineNo
    "partialSort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m" // pathName
};

emlrtRSInfo wh_emlrtRSI{
    33,            // lineNo
    "partialSort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m" // pathName
};

emlrtRSInfo xh_emlrtRSI{
    37,            // lineNo
    "partialSort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m" // pathName
};

emlrtRSInfo yh_emlrtRSI{
    38,            // lineNo
    "partialSort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m" // pathName
};

emlrtRSInfo ai_emlrtRSI{
    49,            // lineNo
    "partialSort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m" // pathName
};

emlrtRSInfo bi_emlrtRSI{
    17,    // lineNo
    "min", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" // pathName
};

emlrtRSInfo
    ci_emlrtRSI{
        60,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

emlrtRSInfo
    di_emlrtRSI{
        110,       // lineNo
        "minimum", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

emlrtRSInfo hi_emlrtRSI{
    562,                         // lineNo
    "minOrMax2DColumnMajorDim2", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

emlrtRSInfo ii_emlrtRSI{
    561,                         // lineNo
    "minOrMax2DColumnMajorDim2", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

emlrtRSInfo ji_emlrtRSI{
    558,                         // lineNo
    "minOrMax2DColumnMajorDim2", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

emlrtRSInfo ki_emlrtRSI{
    16,        // lineNo
    "sub2ind", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m" // pathName
};

emlrtRSInfo li_emlrtRSI{
    37,     // lineNo
    "sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m" // pathName
};

emlrtRSInfo qi_emlrtRSI{
    105,       // lineNo
    "sortIdx", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

emlrtRSInfo ri_emlrtRSI{
    301,                // lineNo
    "block_merge_sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

emlrtRSInfo si_emlrtRSI{
    309,                // lineNo
    "block_merge_sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

emlrtRSInfo ti_emlrtRSI{
    310,                // lineNo
    "block_merge_sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

emlrtRSInfo ui_emlrtRSI{
    318,                // lineNo
    "block_merge_sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

emlrtRSInfo vi_emlrtRSI{
    326,                // lineNo
    "block_merge_sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

emlrtRSInfo wi_emlrtRSI{
    381,                      // lineNo
    "initialize_vector_sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

emlrtRSInfo xi_emlrtRSI{
    409,                      // lineNo
    "initialize_vector_sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

emlrtRSInfo yi_emlrtRSI{
    416,                      // lineNo
    "initialize_vector_sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

emlrtRSInfo aj_emlrtRSI{
    576,                // lineNo
    "merge_pow2_block", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

emlrtRSInfo bj_emlrtRSI{
    578,                // lineNo
    "merge_pow2_block", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

emlrtRSInfo cj_emlrtRSI{
    606,                // lineNo
    "merge_pow2_block", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

emlrtRSInfo ij_emlrtRSI{
    39,    // lineNo
    "cat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pathName
};

emlrtRSInfo jj_emlrtRSI{
    65,         // lineNo
    "cat_impl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pathName
};

emlrtRSInfo
    pj_emlrtRSI{
        28,      // lineNo
        "colon", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pathName
    };

emlrtRSInfo
    qj_emlrtRSI{
        125,     // lineNo
        "colon", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pathName
    };

emlrtRSInfo sj_emlrtRSI{
    20,    // lineNo
    "sum", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m" // pathName
};

emlrtRSInfo tj_emlrtRSI{
    99,        // lineNo
    "sumprod", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumpro"
    "d.m" // pathName
};

emlrtRSInfo uj_emlrtRSI{
    86,                      // lineNo
    "combineVectorElements", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

emlrtRSInfo vj_emlrtRSI{
    99,                 // lineNo
    "blockedSummation", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blocke"
    "dSummation.m" // pathName
};

emlrtRSInfo wj_emlrtRSI{
    22,                    // lineNo
    "sumMatrixIncludeNaN", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" // pathName
};

emlrtRSInfo xj_emlrtRSI{
    42,                 // lineNo
    "sumMatrixColumns", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" // pathName
};

emlrtRSInfo ak_emlrtRSI{
    57,                 // lineNo
    "sumMatrixColumns", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" // pathName
};

emlrtRSInfo ok_emlrtRSI{
    31,                              // lineNo
    "algEstimateGeometricTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

emlrtRSInfo pk_emlrtRSI{
    46,                              // lineNo
    "algEstimateGeometricTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

emlrtRSInfo qk_emlrtRSI{
    48,                              // lineNo
    "algEstimateGeometricTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

emlrtRSInfo rk_emlrtRSI{
    57,                              // lineNo
    "algEstimateGeometricTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

emlrtRSInfo sk_emlrtRSI{
    73,                              // lineNo
    "algEstimateGeometricTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

emlrtRSInfo vk_emlrtRSI{
    12,                             // lineNo
    "checkAndConvertMatchedPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkAndConvertMatchedPoints.m" // pathName
};

emlrtRSInfo wk_emlrtRSI{
    14,                             // lineNo
    "checkAndConvertMatchedPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkAndConvertMatchedPoints.m" // pathName
};

emlrtRSInfo xk_emlrtRSI{
    33,                      // lineNo
    "checkAndConvertPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkAndConvertPoints.m" // pathName
};

emlrtRSInfo yk_emlrtRSI{
    18,            // lineNo
    "checkPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkPoints.m" // pathName
};

emlrtRSInfo al_emlrtRSI{
    31,                // lineNo
    "checkPointArray", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkPoints.m" // pathName
};

emlrtRSInfo
    bl_emlrtRSI{
        134,   // lineNo
        "cat", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m" // pathName
    };

emlrtRSInfo am_emlrtRSI{
    14,    // lineNo
    "svd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m" // pathName
};

emlrtRSInfo bm_emlrtRSI{
    36,    // lineNo
    "svd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m" // pathName
};

emlrtRSInfo cm_emlrtRSI{
    42,    // lineNo
    "svd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m" // pathName
};

emlrtRSInfo dm_emlrtRSI{
    29,             // lineNo
    "anyNonFinite", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\anyNonFinite."
    "m" // pathName
};

emlrtRSInfo
    em_emlrtRSI{
        44,          // lineNo
        "vAllOrAny", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\vAllOrAny.m" // pathName
    };

emlrtRSInfo
    fm_emlrtRSI{
        103,                  // lineNo
        "flatVectorAllOrAny", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\vAllOrAny.m" // pathName
    };

emlrtRSInfo gm_emlrtRSI{
    52,    // lineNo
    "svd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" // pathName
};

emlrtRSInfo hm_emlrtRSI{
    89,           // lineNo
    "callLAPACK", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" // pathName
};

emlrtRSInfo im_emlrtRSI{
    84,           // lineNo
    "callLAPACK", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" // pathName
};

emlrtRSInfo jm_emlrtRSI{
    209,      // lineNo
    "xgesdd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgesdd.m" // pathName
};

emlrtRSInfo km_emlrtRSI{
    31,       // lineNo
    "xgesvd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgesvd.m" // pathName
};

emlrtRSInfo lm_emlrtRSI{
    205,            // lineNo
    "ceval_xgesvd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgesvd.m" // pathName
};

emlrtRSInfo xm_emlrtRSI{
    20,         // lineNo
    "mldivide", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" // pathName
};

emlrtRSInfo ym_emlrtRSI{
    42,      // lineNo
    "mldiv", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" // pathName
};

emlrtRSInfo an_emlrtRSI{
    61,        // lineNo
    "lusolve", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m" // pathName
};

emlrtRSInfo bn_emlrtRSI{
    293,          // lineNo
    "lusolve3x3", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m" // pathName
};

emlrtRSInfo cn_emlrtRSI{
    90,              // lineNo
    "warn_singular", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m" // pathName
};

emlrtRSInfo kn_emlrtRSI{
    41,    // lineNo
    "cat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pathName
};

emlrtRSInfo
    ln_emlrtRSI{
        94,                  // lineNo
        "eml_mtimes_helper", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pathName
    };

emlrtRSInfo
    mn_emlrtRSI{
        69,                  // lineNo
        "eml_mtimes_helper", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pathName
    };

emlrtRSInfo nn_emlrtRSI{
    142,      // lineNo
    "mtimes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" // pathName
};

emlrtRSInfo on_emlrtRSI{
    178,           // lineNo
    "mtimes_blas", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" // pathName
};

emlrtRSInfo pn_emlrtRSI{
    14,      // lineNo
    "hypot", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\hypot.m" // pathName
};

emlrtRSInfo xn_emlrtRSI{
    107,                // lineNo
    "blockedSummation", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blocke"
    "dSummation.m" // pathName
};

emlrtRSInfo yn_emlrtRSI{
    15,    // lineNo
    "sum", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m" // pathName
};

emlrtRSInfo do_emlrtRSI{
    19,                  // lineNo
    "computeLoopNumber", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\computeLoopNumber.m" // pathName
};

emlrtRSInfo eo_emlrtRSI{
    44,       // lineNo
    "mpower", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" // pathName
};

emlrtRSInfo
    fo_emlrtRSI{
        71,      // lineNo
        "power", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pathName
    };

emlrtRSInfo
    io_emlrtRSI{
        143,        // lineNo
        "allOrAny", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny."
        "m" // pathName
    };

emlrtRSInfo mo_emlrtRSI{
    112,    // lineNo
    "mean", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m" // pathName
};

emlrtRSInfo no_emlrtRSI{
    112,                // lineNo
    "blockedSummation", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blocke"
    "dSummation.m" // pathName
};

emlrtRSInfo oo_emlrtRSI{
    41,                 // lineNo
    "sumMatrixColumns", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" // pathName
};

emlrtRSInfo po_emlrtRSI{
    16,     // lineNo
    "sqrt", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" // pathName
};

emlrtRSInfo qo_emlrtRSI{
    38,                           // lineNo
    "applyScalarFunctionInPlace", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunctionInPlace.m" // pathName
};

emlrtRSInfo uo_emlrtRSI{
    21,    // lineNo
    "det", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\det.m" // pathName
};

emlrtRSInfo vo_emlrtRSI{
    27,       // lineNo
    "xgetrf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" // pathName
};

emlrtRSInfo wo_emlrtRSI{
    91,             // lineNo
    "ceval_xgetrf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" // pathName
};

emlrtRSInfo
    yo_emlrtRSI{
        82,      // lineNo
        "colon", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pathName
    };

emlrtRSInfo
    ap_emlrtRSI{
        148,                            // lineNo
        "eml_integer_colon_dispatcher", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pathName
    };

emlrtRSInfo
    bp_emlrtRSI{
        171,                        // lineNo
        "eml_signed_integer_colon", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pathName
    };

emlrtRSInfo
    cp_emlrtRSI{
        176,                        // lineNo
        "eml_signed_integer_colon", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pathName
    };

emlrtRSInfo ep_emlrtRSI{
    299,                          // lineNo
    "MatrixTransformation/set.A", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pathName
};

emlrtRSInfo fp_emlrtRSI{
    20,                    // lineNo
    "matricesNearlyEqual", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\matricesNearlyEqual.m" // pathName
};

emlrtRSInfo gp_emlrtRSI{
    30,                    // lineNo
    "matricesNearlyEqual", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\matricesNearlyEqual.m" // pathName
};

emlrtRSInfo hp_emlrtRSI{
    119,    // lineNo
    "norm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\norm.m" // pathName
};

emlrtRSInfo ip_emlrtRSI{
    156,        // lineNo
    "mat2norm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\norm.m" // pathName
};

emlrtRSInfo jp_emlrtRSI{
    28,    // lineNo
    "svd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" // pathName
};

emlrtRSInfo kp_emlrtRSI{
    107,          // lineNo
    "callLAPACK", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" // pathName
};

emlrtRSInfo lp_emlrtRSI{
    34,       // lineNo
    "xgesvd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgesvd.m" // pathName
};

emlrtRSInfo pp_emlrtRSI{
    17,                                   // lineNo
    "checkTransformationMatrixCondition", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\checkTransformationMatrixCondition.m" // pathName
};

emlrtRSInfo qp_emlrtRSI{
    19,                                   // lineNo
    "checkTransformationMatrixCondition", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\checkTransformationMatrixCondition.m" // pathName
};

emlrtRSInfo rp_emlrtRSI{
    38,                   // lineNo
    "isBadlyConditioned", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\checkTransformationMatrixCondition.m" // pathName
};

emlrtRSInfo yp_emlrtRSI{
    30,       // lineNo
    "xgetrf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" // pathName
};

emlrtRSInfo aq_emlrtRSI{
    39,     // lineNo
    "find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

emlrtRSInfo bq_emlrtRSI{
    152,        // lineNo
    "eml_find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

emlrtRSInfo cq_emlrtRSI{
    138,        // lineNo
    "eml_find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

emlrtRSInfo dq_emlrtRSI{
    376,                  // lineNo
    "find_first_indices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

emlrtRSInfo eq_emlrtRSI{
    396,                  // lineNo
    "find_first_indices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

emlrtRSInfo fq_emlrtRSI{
    234,                                           // lineNo
    "MatrixTransformation/transformPointsForward", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pathName
};

emlrtRSInfo gq_emlrtRSI{
    356,                                    // lineNo
    "MatrixTransformation/transformPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pathName
};

emlrtRSInfo hq_emlrtRSI{
    393,                                          // lineNo
    "MatrixTransformation/transformPackedPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pathName
};

emlrtRSInfo oq_emlrtRSI{
    20,                // lineNo
    "mrdivide_helper", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_"
    "helper.m" // pathName
};

emlrtRSInfo pq_emlrtRSI{
    42,      // lineNo
    "mrdiv", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_"
    "helper.m" // pathName
};

emlrtRSInfo qq_emlrtRSI{
    55,        // lineNo
    "lusolve", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m" // pathName
};

emlrtRSInfo rq_emlrtRSI{
    210,          // lineNo
    "lusolve2x2", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m" // pathName
};

emlrtRSInfo uq_emlrtRSI{
    173,                // lineNo
    "colMajorFlatIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blocke"
    "dSummation.m" // pathName
};

emlrtRSInfo wr_emlrtRSI{
    11,               // lineNo
    "validatescalar", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatescalar.m" // pathName
};

emlrtRSInfo
    cs_emlrtRSI{
        378,                  // lineNo
        "fivePointAlgorithm", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatri"
        "x.m" // pathName
    };

emlrtRSInfo
    ds_emlrtRSI{
        385,                  // lineNo
        "fivePointAlgorithm", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatri"
        "x.m" // pathName
    };

emlrtRSInfo
    es_emlrtRSI{
        387,                  // lineNo
        "fivePointAlgorithm", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatri"
        "x.m" // pathName
    };

emlrtRSInfo et_emlrtRSI{
    18,    // lineNo
    "svd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m" // pathName
};

emlrtRSInfo ut_emlrtRSI{
    147,        // lineNo
    "mat2norm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\norm.m" // pathName
};

emlrtRSInfo vt_emlrtRSI{
    148,        // lineNo
    "mat2norm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\norm.m" // pathName
};

emlrtRSInfo vu_emlrtRSI{
    165,                        // lineNo
    "chooseRealizableSolution", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

emlrtRSInfo wu_emlrtRSI{
    167,                        // lineNo
    "chooseRealizableSolution", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

emlrtRSInfo xu_emlrtRSI{
    168,                        // lineNo
    "chooseRealizableSolution", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

emlrtRSInfo yu_emlrtRSI{
    169,                        // lineNo
    "chooseRealizableSolution", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

emlrtRSInfo av_emlrtRSI{
    170,                        // lineNo
    "chooseRealizableSolution", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

emlrtRSInfo dv_emlrtRSI{
    10,                 // lineNo
    "cameraProjection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\cameraProjection.m" // pathName
};

emlrtRSInfo ev_emlrtRSI{
    10,                 // lineNo
    "cameraMatrixImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\cameraMatrixImpl.m" // pathName
};

emlrtRSInfo fv_emlrtRSI{
    47,            // lineNo
    "parseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\cameraMatrixImpl.m" // pathName
};

emlrtRSInfo hv_emlrtRSI{
    117,                      // lineNo
    "rigidtform3dImpl/set.R", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\rigidtform3dImpl.m" // pathName
};

emlrtRSInfo iv_emlrtRSI{
    13,                      // lineNo
    "checkRotationMatrix3D", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\checkRotationMatrix3D.m" // pathName
};

emlrtRSInfo jv_emlrtRSI{
    14,                      // lineNo
    "checkRotationMatrix3D", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\checkRotationMatrix3D.m" // pathName
};

emlrtRSInfo kv_emlrtRSI{
    10,                            // lineNo
    "constrainToRotationMatrix3D", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\constrainToRotationMatrix3D.m" // pathName
};

emlrtRSInfo lv_emlrtRSI{
    17,                            // lineNo
    "constrainToRotationMatrix3D", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\constrainToRotationMatrix3D.m" // pathName
};

emlrtRSInfo mv_emlrtRSI{
    35,                            // lineNo
    "constrainToRotationMatrix3D", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\constrainToRotationMatrix3D.m" // pathName
};

emlrtRSInfo vv_emlrtRSI{
    15,    // lineNo
    "min", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" // pathName
};

emlrtRSInfo
    wv_emlrtRSI{
        66,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

emlrtRSInfo
    xv_emlrtRSI{
        112,       // lineNo
        "minimum", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

emlrtRSInfo yv_emlrtRSI{
    273,             // lineNo
    "unaryMinOrMax", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

emlrtRSInfo aw_emlrtRSI{
    962,                    // lineNo
    "minRealVectorOmitNaN", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

emlrtRSInfo hw_emlrtRSI{
    337,                          // lineNo
    "MatrixTransformation/get.T", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pathName
};

emlrtRSInfo iw_emlrtRSI{
    323,                          // lineNo
    "MatrixTransformation/get.A", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pathName
};

emlrtRSInfo jw_emlrtRSI{
    191,                           // lineNo
    "rigidtform3dImpl/constructA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\rigidtform3dImpl.m" // pathName
};

emlrtRSInfo
    cx_emlrtRSI{
        11,          // lineNo
        "pose2extr", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pose2extr.m" // pathName
    };

emlrtRSInfo dx_emlrtRSI{
    249,                           // lineNo
    "MatrixTransformation/invert", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pathName
};

emlrtRSInfo ex_emlrtRSI{
    22,    // lineNo
    "inv", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

emlrtRSInfo fx_emlrtRSI{
    42,          // lineNo
    "checkcond", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

emlrtRSInfo gx_emlrtRSI{
    46,          // lineNo
    "checkcond", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

emlrtRSInfo qx_emlrtRSI{
    315,                          // lineNo
    "MatrixTransformation/set.A", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pathName
};

emlrtRSInfo rx_emlrtRSI{
    165,                           // lineNo
    "rigidtform3dImpl/constrainA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\rigidtform3dImpl.m" // pathName
};

emlrtRSInfo sx_emlrtRSI{
    202,              // lineNo
    "constrainA_alg", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\rigidtform3dImpl.m" // pathName
};

emlrtRSInfo tx_emlrtRSI{
    183,                                        // lineNo
    "rigidtform3dImpl/setUnderlyingParameters", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\rigidtform3dImpl.m" // pathName
};

emlrtRSInfo ry_emlrtRSI{
    72,       // lineNo
    "repmat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" // pathName
};

emlrtRSInfo wy_emlrtRSI{
    57,      // lineNo
    "ixfun", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pathName
};

emlrtRSInfo xy_emlrtRSI{
    102,                          // lineNo
    "binaryImplicitExpansionFun", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pathName
};

emlrtRSInfo aab_emlrtRSI{
    72,                    // lineNo
    "applyVectorFunction", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyVectorFunction.m" // pathName
};

emlrtRSInfo bab_emlrtRSI{
    149,        // lineNo
    "looper1D", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyVectorFunction.m" // pathName
};

emlrtRSInfo pab_emlrtRSI{
    96,            // lineNo
    "table/table", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@table\\table.m" // pathName
};

emlrtRSInfo qab_emlrtRSI{
    217,           // lineNo
    "table/table", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@table\\table.m" // pathName
};

emlrtRSInfo rab_emlrtRSI{
    265,                     // lineNo
    "tabular/initInternals", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\tabular.m" // pathName
};

emlrtRSInfo sab_emlrtRSI{
    267,                     // lineNo
    "tabular/initInternals", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\tabular.m" // pathName
};

emlrtRSInfo tab_emlrtRSI{
    56,                       // lineNo
    "rowNamesDim/createLike", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "rowNamesDim.m" // pathName
};

emlrtRSInfo uab_emlrtRSI{
    70,                            // lineNo
    "tabularDimension/createLike", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "tabularDimension.m" // pathName
};

emlrtRSInfo vab_emlrtRSI{
    68,                // lineNo
    "metaDim/metaDim", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "metaDim.m" // pathName
};

emlrtRSInfo xab_emlrtRSI{
    46,                     // lineNo
    "tabular/dotReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\dotRefere"
    "nce.m" // pathName
};

emlrtRSInfo yab_emlrtRSI{
    92,                      // lineNo
    "tabular/getProperties", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\tabular.m" // pathName
};

emlrtRSInfo abb_emlrtRSI{
    60,                                              // lineNo
    "graphPropertyContainer/graphPropertyContainer", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m" // pathName
};

emlrtRSInfo fbb_emlrtRSI{
    104,           // lineNo
    "graph/graph", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graph\\graph.m" // pathName
};

emlrtRSInfo gbb_emlrtRSI{
    99,            // lineNo
    "graph/graph", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graph\\graph.m" // pathName
};

emlrtRSInfo hbb_emlrtRSI{
    81,                      // lineNo
    "constructFromEdgeList", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\constructFromEdgeList.m" // pathName
};

emlrtRSInfo jbb_emlrtRSI{
    123,                     // lineNo
    "constructFromEdgeList", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\constructFromEdgeList.m" // pathName
};

emlrtRSInfo kbb_emlrtRSI{
    82,                      // lineNo
    "constructFromEdgeList", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\constructFromEdgeList.m" // pathName
};

emlrtRSInfo lbb_emlrtRSI{
    79,                      // lineNo
    "constructFromEdgeList", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\constructFromEdgeList.m" // pathName
};

emlrtRSInfo mbb_emlrtRSI{
    15,    // lineNo
    "max", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" // pathName
};

emlrtRSInfo
    nbb_emlrtRSI{
        64,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

emlrtRSInfo
    obb_emlrtRSI{
        99,        // lineNo
        "maximum", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

emlrtRSInfo pbb_emlrtRSI{
    255,             // lineNo
    "unaryMinOrMax", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

emlrtRSInfo qbb_emlrtRSI{
    966,                    // lineNo
    "maxRealVectorOmitNaN", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

emlrtRSInfo
    acb_emlrtRSI{
        16,    // lineNo
        "fix", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\fix.m" // pathName
    };

emlrtRSInfo dcb_emlrtRSI{
    106,                   // lineNo
    "applyToMultipleDims", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyToMultipleDims.m" // pathName
};

emlrtRSInfo ecb_emlrtRSI{
    63,                               // lineNo
    "function_handle/parenReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\function_"
    "handle.m" // pathName
};

emlrtRSInfo gcb_emlrtRSI{
    42,     // lineNo
    "sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m" // pathName
};

emlrtRSInfo hcb_emlrtRSI{
    27,         // lineNo
    "sortrows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m" // pathName
};

emlrtRSInfo icb_emlrtRSI{
    28,         // lineNo
    "sortrows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m" // pathName
};

emlrtRSInfo kcb_emlrtRSI{
    86,        // lineNo
    "sortIdx", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

emlrtRSInfo
    lcb_emlrtRSI{
        57,          // lineNo
        "mergesort", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\mergesort.m" // pathName
    };

emlrtRSInfo
    mcb_emlrtRSI{
        113,         // lineNo
        "mergesort", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\mergesort.m" // pathName
    };

emlrtRSInfo ncb_emlrtRSI{
    39,                      // lineNo
    "apply_row_permutation", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m" // pathName
};

emlrtRSInfo ocb_emlrtRSI{
    42,                      // lineNo
    "apply_row_permutation", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m" // pathName
};

emlrtRSInfo qcb_emlrtRSI{
    13,       // lineNo
    "sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\sparse.m" // pathName
};

emlrtRSInfo rcb_emlrtRSI{
    1621,              // lineNo
    "assertValidSize", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo scb_emlrtRSI{
    44,                     // lineNo
    "imageviewset/addView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo tcb_emlrtRSI{
    951,                            // lineNo
    "imageviewset/parseViewInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo ucb_emlrtRSI{
    950,                            // lineNo
    "imageviewset/parseViewInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo vcb_emlrtRSI{
    1010,                       // lineNo
    "imageviewset/parseParams", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo adb_emlrtRSI{
    12,               // lineNo
    "checkIfHasView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkIfHasView.m" // pathName
};

emlrtRSInfo bdb_emlrtRSI{
    45,         // lineNo
    "ismember", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

emlrtRSInfo cdb_emlrtRSI{
    163,        // lineNo
    "isMember", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

emlrtRSInfo feb_emlrtRSI{
    103,                    // lineNo
    "imageviewset/addView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo geb_emlrtRSI{
    50,                     // lineNo
    "imageviewset/addView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo jeb_emlrtRSI{
    360,                          // lineNo
    "imageviewset/addConnection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo keb_emlrtRSI{
    358,                          // lineNo
    "imageviewset/addConnection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo meb_emlrtRSI{
    1275,                                 // lineNo
    "imageviewset/parseConnectionInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo neb_emlrtRSI{
    1277,                                 // lineNo
    "imageviewset/parseConnectionInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo oeb_emlrtRSI{
    1339,                                 // lineNo
    "imageviewset/parseConnectionInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo peb_emlrtRSI{
    1363,                                 // lineNo
    "imageviewset/parseConnectionInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo qeb_emlrtRSI{
    1365,                                 // lineNo
    "imageviewset/parseConnectionInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo dfb_emlrtRSI{
    20,          // lineNo
    "intersect", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\intersect.m" // pathName
};

emlrtRSInfo efb_emlrtRSI{
    97,          // lineNo
    "eml_setop", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pathName
};

emlrtRSInfo jfb_emlrtRSI{
    290,             // lineNo
    "unaryMinOrMax", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

emlrtRSInfo kfb_emlrtRSI{
    377,                     // lineNo
    "unaryMinOrMaxDispatch", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

emlrtRSInfo lfb_emlrtRSI{
    418,          // lineNo
    "minOrMax1D", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

emlrtRSInfo agb_emlrtRSI{
    29,                    // lineNo
    "graphBase/get.Nodes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\graphBase.m" // pathName
};

emlrtRSInfo bgb_emlrtRSI{
    155,                                // lineNo
    "graphPropertyContainer/makeTable", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m" // pathName
};

emlrtRSInfo fgb_emlrtRSI{
    284,                          // lineNo
    "tabularDimension/subs2inds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "tabularDimension.m" // pathName
};

emlrtRSInfo ggb_emlrtRSI{
    294,                          // lineNo
    "tabularDimension/subs2inds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "tabularDimension.m" // pathName
};

emlrtRSInfo hgb_emlrtRSI{
    442,                          // lineNo
    "tabularDimension/subs2inds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "tabularDimension.m" // pathName
};

emlrtRSInfo nhb_emlrtRSI{
    49,              // lineNo
    "sparse/sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo ohb_emlrtRSI{
    50,              // lineNo
    "sparse/sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo phb_emlrtRSI{
    65,              // lineNo
    "sparse/sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo qhb_emlrtRSI{
    66,              // lineNo
    "sparse/sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo rhb_emlrtRSI{
    12,               // lineNo
    "sparse/vertcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\vertcat.m" // pathName
};

emlrtRSInfo shb_emlrtRSI{
    13,               // lineNo
    "sparse/vertcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\vertcat.m" // pathName
};

emlrtRSInfo thb_emlrtRSI{
    71,                       // lineNo
    "sparse/sparse_catCheck", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\private\\catCheck.m" // pathName
};

emlrtRSInfo uhb_emlrtRSI{
    72,                       // lineNo
    "sparse/sparse_catCheck", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\private\\catCheck.m" // pathName
};

emlrtRSInfo vhb_emlrtRSI{
    17,             // lineNo
    "sparse/spcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\spcat.m" // pathName
};

emlrtRSInfo whb_emlrtRSI{
    74,          // lineNo
    "dovertcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\spcat.m" // pathName
};

emlrtRSInfo xhb_emlrtRSI{
    82,          // lineNo
    "dovertcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\spcat.m" // pathName
};

emlrtRSInfo yhb_emlrtRSI{
    1476,                 // lineNo
    "sparse/spallocLike", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo aib_emlrtRSI{
    219,             // lineNo
    "sparse/sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo bib_emlrtRSI{
    197,             // lineNo
    "sparse/sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo cib_emlrtRSI{
    176,             // lineNo
    "sparse/sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo dib_emlrtRSI{
    143,             // lineNo
    "sparse/sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo eib_emlrtRSI{
    142,             // lineNo
    "sparse/sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo fib_emlrtRSI{
    14,              // lineNo
    "sparse/fillIn", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\fillIn.m" // pathName
};

emlrtRSInfo uib_emlrtRSI{
    51,                  // lineNo
    "reshapeSizeChecks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" // pathName
};

emlrtRSInfo bjb_emlrtRSI{
    16,          // lineNo
    "intersect", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\intersect.m" // pathName
};

emlrtRSInfo ijb_emlrtRSI{
    1206,                             // lineNo
    "worldpointset/viewId2ViewIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

emlrtRSInfo blb_emlrtRSI{
    28,                                // lineNo
    "visualWordsImpl/visualWordsImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\visualWordsImpl.m" // pathName
};

emlrtRSInfo clb_emlrtRSI{
    49,                            // lineNo
    "visualWordsImpl/checkInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\visualWordsImpl.m" // pathName
};

emlrtRSInfo vlb_emlrtRSI{
    62,                       // lineNo
    "EncoderStrategy/encode", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bof\\EncoderStrategy.m" // pathName
};

emlrtRSInfo wlb_emlrtRSI{
    64,                       // lineNo
    "EncoderStrategy/encode", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bof\\EncoderStrategy.m" // pathName
};

emlrtRSInfo xlb_emlrtRSI{
    67,                       // lineNo
    "EncoderStrategy/encode", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bof\\EncoderStrategy.m" // pathName
};

emlrtRSInfo amb_emlrtRSI{
    148,                                       // lineNo
    "EncoderVocabularyTree/assignVisualWords", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pathName
};

emlrtRSInfo bmb_emlrtRSI{
    161,                                       // lineNo
    "EncoderVocabularyTree/assignVisualWords", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pathName
};

emlrtRSInfo pmb_emlrtRSI{
    383,             // lineNo
    "sparse/spones", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo tnb_emlrtRSI{
    275,           // lineNo
    "sparse/full", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo unb_emlrtRSI{
    93,          // lineNo
    "dovertcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\spcat.m" // pathName
};

emlrtRSInfo sob_emlrtRSI{
    307,              // lineNo
    "sparse/rdivide", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo tob_emlrtRSI{
    194,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

emlrtRSInfo uob_emlrtRSI{
    204,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

emlrtRSInfo vob_emlrtRSI{
    206,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

emlrtRSInfo wob_emlrtRSI{
    18,      // lineNo
    "spfun", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\spfun.m" // pathName
};

emlrtRSInfo xob_emlrtRSI{
    462,                // lineNo
    "sparse/spfunImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo yob_emlrtRSI{
    465,                // lineNo
    "sparse/spfunImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo apb_emlrtRSI{
    468,                // lineNo
    "sparse/spfunImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo bpb_emlrtRSI{
    437,           // lineNo
    "scalarBinOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

emlrtRSInfo cpb_emlrtRSI{
    438,           // lineNo
    "scalarBinOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

emlrtRSInfo
    epb_emlrtRSI{
        17,    // lineNo
        "log", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\log.m" // pathName
    };

emlrtRSInfo kpb_emlrtRSI{
    26,                      // lineNo
    "pointTrack/pointTrack", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrack.m" // pathName
};

emlrtRSInfo lpb_emlrtRSI{
    28,                      // lineNo
    "pointTrack/pointTrack", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrack.m" // pathName
};

emlrtRSInfo mpb_emlrtRSI{
    42,                              // lineNo
    "pointTrackImpl/pointTrackImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\pointTrackImpl.m" // pathName
};

emlrtRSInfo npb_emlrtRSI{
    43,                              // lineNo
    "pointTrackImpl/pointTrackImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\pointTrackImpl.m" // pathName
};

emlrtRSInfo opb_emlrtRSI{
    44,                              // lineNo
    "pointTrackImpl/pointTrackImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\pointTrackImpl.m" // pathName
};

emlrtRSInfo qpb_emlrtRSI{
    51,                          // lineNo
    "pointTrackImpl/set.Points", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\pointTrackImpl.m" // pathName
};

emlrtRSInfo spb_emlrtRSI{
    358,                                // lineNo
    "imageviewsetBase/get.Connections", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pathName
};

emlrtRSInfo tqb_emlrtRSI{
    48,       // lineNo
    "unique", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pathName
};

emlrtRSInfo drb_emlrtRSI{
    250,                     // lineNo
    "sparse/parenReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo krb_emlrtRSI{
    24,                    // lineNo
    "graphBase/get.Edges", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\graphBase.m" // pathName
};

emlrtRSInfo lrb_emlrtRSI{
    25,                    // lineNo
    "graphBase/get.Edges", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\graphBase.m" // pathName
};

emlrtRSInfo mrb_emlrtRSI{
    167,                                // lineNo
    "graphPropertyContainer/makeTable", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m" // pathName
};

emlrtRSInfo wrb_emlrtRSI{
    343,             // lineNo
    "list/pushBack", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\list.m" // pathName
};

emlrtRSInfo esb_emlrtRSI{
    409,        // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\sparseBA.m" // pathName
};

emlrtRSInfo fsb_emlrtRSI{
    36,         // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

emlrtRSInfo gsb_emlrtRSI{
    45,         // lineNo
    "sparseBA", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

emlrtRSInfo htb_emlrtRSI{
    19,                       // lineNo
    "tabular/parenReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenRefe"
    "rence.m" // pathName
};

emlrtRSInfo itb_emlrtRSI{
    24,                       // lineNo
    "tabular/parenReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenRefe"
    "rence.m" // pathName
};

emlrtRSInfo jtb_emlrtRSI{
    314,                      // lineNo
    "varNamesDim/selectFrom", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "varNamesDim.m" // pathName
};

emlrtRSInfo ktb_emlrtRSI{
    283,                     // lineNo
    "varNamesDim/subs2inds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "varNamesDim.m" // pathName
};

emlrtRSInfo ltb_emlrtRSI{
    319,                          // lineNo
    "tabularDimension/subs2inds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "tabularDimension.m" // pathName
};

emlrtRSInfo hub_emlrtRSI{
    69,                       // lineNo
    "convertInputDataFormat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\convertInputDataFormat.m" // pathName
};

emlrtRSInfo tvb_emlrtRSI{
    47,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

emlrtRSInfo uvb_emlrtRSI{
    48,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

emlrtRSInfo vvb_emlrtRSI{
    49,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

emlrtRSInfo wvb_emlrtRSI{
    50,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

emlrtRSInfo xvb_emlrtRSI{
    57,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

emlrtRSInfo yvb_emlrtRSI{
    58,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

emlrtRSInfo awb_emlrtRSI{
    59,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

emlrtRSInfo bwb_emlrtRSI{
    62,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

emlrtRSInfo cwb_emlrtRSI{
    64,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

emlrtRSInfo dwb_emlrtRSI{
    65,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

emlrtRSInfo ewb_emlrtRSI{
    68,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

emlrtRSInfo fwb_emlrtRSI{
    69,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

emlrtRSInfo gwb_emlrtRSI{
    71,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

emlrtRSInfo hwb_emlrtRSI{
    74,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

emlrtRSInfo iwb_emlrtRSI{
    75,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

emlrtRSInfo jwb_emlrtRSI{
    76,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

emlrtRSInfo nwb_emlrtRSI{
    139,              // lineNo
    "binaryMinOrMax", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\binaryMinOrMax.m" // pathName
};

emlrtRSInfo vwb_emlrtRSI{
    35,     // lineNo
    "find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

emlrtRSInfo wwb_emlrtRSI{
    132,        // lineNo
    "eml_find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

emlrtRSInfo xwb_emlrtRSI{
    196,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

emlrtRSInfo ywb_emlrtRSI{
    199,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

emlrtRSInfo axb_emlrtRSI{
    247,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

emlrtRSInfo bxb_emlrtRSI{
    248,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

emlrtRSInfo cxb_emlrtRSI{
    249,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

emlrtRSInfo dxb_emlrtRSI{
    20,                        // lineNo
    "sparse/parenReference2D", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pathName
};

emlrtRSInfo exb_emlrtRSI{
    81,                        // lineNo
    "parenReference2DColumns", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pathName
};

emlrtRSInfo fxb_emlrtRSI{
    93,                        // lineNo
    "parenReference2DColumns", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pathName
};

emlrtRSInfo gxb_emlrtRSI{
    104,                       // lineNo
    "parenReference2DColumns", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pathName
};

emlrtRSInfo ryb_emlrtRSI{
    897,                            // lineNo
    "imageviewset/parseViewInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo tyb_emlrtRSI{
    143,                           // lineNo
    "ViewSetBaseImpl/checkViewId", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetBaseImpl.m" // pathName
};

emlrtRSInfo uyb_emlrtRSI{
    6,              // lineNo
    "checkViewIds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkViewIds.m" // pathName
};

emlrtRSInfo xyb_emlrtRSI{
    6,                      // lineNo
    "checkIfViewIsMissing", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkIfViewIsMissing.m" // pathName
};

emlrtRSInfo mac_emlrtRSI{
    13,               // lineNo
    "nullAssignment", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

emlrtRSInfo nac_emlrtRSI{
    17,               // lineNo
    "nullAssignment", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

emlrtRSInfo vac_emlrtRSI{
    22,               // lineNo
    "nullAssignment", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

emlrtRSInfo wac_emlrtRSI{
    26,               // lineNo
    "nullAssignment", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

emlrtRSInfo xac_emlrtRSI{
    274,           // lineNo
    "delete_rows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

emlrtRSInfo yac_emlrtRSI{
    282,           // lineNo
    "delete_rows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

emlrtRSInfo abc_emlrtRSI{
    284,           // lineNo
    "delete_rows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

emlrtRSInfo bbc_emlrtRSI{
    287,           // lineNo
    "delete_rows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

emlrtRSInfo vbc_emlrtRSI{
    19,        // lineNo
    "ind2sub", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m" // pathName
};

emlrtRSInfo edc_emlrtRSI{
    10,             // lineNo
    "checkViewIds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkViewIds.m" // pathName
};

emlrtRSInfo fdc_emlrtRSI{
    12,             // lineNo
    "checkViewIds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkViewIds.m" // pathName
};

emlrtRSInfo ydc_emlrtRSI{
    9,                      // lineNo
    "checkIfViewIsMissing", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkIfViewIsMissing.m" // pathName
};

emlrtRSInfo aec_emlrtRSI{
    129,             // lineNo
    "unaryMinOrMax", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

emlrtRSInfo rec_emlrtRSI{
    18,          // lineNo
    "metricSSD", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\metricSSD.m" // pathName
};

emlrtRSInfo ofc_emlrtRSI{
    912,                                   // lineNo
    "worldpointset/findWorldPointsInView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

emlrtRSInfo pfc_emlrtRSI{
    1091,                                 // lineNo
    "worldpointset/findVisibilityOfView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

emlrtRSInfo qfc_emlrtRSI{
    1092,                                 // lineNo
    "worldpointset/findVisibilityOfView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

emlrtRSInfo rfc_emlrtRSI{
    1093,                                 // lineNo
    "worldpointset/findVisibilityOfView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

emlrtRSInfo sfc_emlrtRSI{
    1095,                                 // lineNo
    "worldpointset/findVisibilityOfView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

emlrtRSInfo tfc_emlrtRSI{
    1097,                                 // lineNo
    "worldpointset/findVisibilityOfView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

emlrtRSInfo ufc_emlrtRSI{
    1111,                                 // lineNo
    "worldpointset/findVisibilityOfView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

emlrtRSInfo sic_emlrtRSI{
    28,                      // lineNo
    "computeRigidTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\computeRigidTransform.m" // pathName
};

emlrtRSInfo uic_emlrtRSI{
    35,                      // lineNo
    "computeRigidTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\computeRigidTransform.m" // pathName
};

emlrtRSInfo vic_emlrtRSI{
    37,                      // lineNo
    "computeRigidTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\computeRigidTransform.m" // pathName
};

emlrtRSInfo wic_emlrtRSI{
    40,                      // lineNo
    "computeRigidTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\computeRigidTransform.m" // pathName
};

emlrtRSInfo nkc_emlrtRSI{
    59,      // lineNo
    "xtrsm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm."
    "m" // pathName
};

emlrtRSInfo wkc_emlrtRSI{
    16,      // lineNo
    "cumop", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop."
    "m" // pathName
};

emlrtRSInfo plc_emlrtRSI{
    684,                           // lineNo
    "imageviewset/connectedViews", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo qlc_emlrtRSI{
    702,                           // lineNo
    "imageviewset/connectedViews", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo rlc_emlrtRSI{
    713,                           // lineNo
    "imageviewset/connectedViews", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo slc_emlrtRSI{
    714,                           // lineNo
    "imageviewset/connectedViews", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo tlc_emlrtRSI{
    704,                           // lineNo
    "imageviewset/connectedViews", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo ulc_emlrtRSI{
    711,                           // lineNo
    "imageviewset/connectedViews", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo smc_emlrtRSI{
    108,    // lineNo
    "diff", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m" // pathName
};

emlrtRSInfo tmc_emlrtRSI{
    106,    // lineNo
    "diff", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m" // pathName
};

emlrtRSInfo lnc_emlrtRSI{
    1115,                                 // lineNo
    "worldpointset/findVisibilityOfView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

emlrtRSInfo mnc_emlrtRSI{
    19,        // lineNo
    "setdiff", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\setdiff.m" // pathName
};

emlrtRSInfo epc_emlrtRSI{
    134,                            // lineNo
    "ViewSetBaseImpl/checkViewIds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetBaseImpl.m" // pathName
};

emlrtRSInfo fpc_emlrtRSI{
    429,                          // lineNo
    "imageviewset/addConnection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo gpc_emlrtRSI{
    421,                          // lineNo
    "imageviewset/addConnection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo hpc_emlrtRSI{
    412,                          // lineNo
    "imageviewset/addConnection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo ipc_emlrtRSI{
    1229,                                 // lineNo
    "imageviewset/parseConnectionInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo jpc_emlrtRSI{
    1230,                                 // lineNo
    "imageviewset/parseConnectionInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo nrc_emlrtRSI{
    622,                           // lineNo
    "imageviewset/connectedViews", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pathName
};

emlrtRSInfo utc_emlrtRSI{
    248,                     // lineNo
    "sparse/parenReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo vtc_emlrtRSI{
    17,                        // lineNo
    "sparse/parenReference1D", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference1D.m" // pathName
};

emlrtRSInfo wtc_emlrtRSI{
    53,                        // lineNo
    "parenReference1DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference1D.m" // pathName
};

emlrtRSInfo xtc_emlrtRSI{
    55,                        // lineNo
    "parenReference1DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference1D.m" // pathName
};

emlrtRSInfo ytc_emlrtRSI{
    82,                        // lineNo
    "parenReference1DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference1D.m" // pathName
};

emlrtRSInfo auc_emlrtRSI{
    94,                        // lineNo
    "parenReference1DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference1D.m" // pathName
};

emlrtRSInfo cuc_emlrtRSI{
    189,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

emlrtRSInfo jvc_emlrtRSI{
    19,               // lineNo
    "retrieveImages", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\retrieveImages.m" // pathName
};

emlrtRSInfo kvc_emlrtRSI{
    132,                         // lineNo
    "invertedImageIndex/search", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

emlrtRSInfo lvc_emlrtRSI{
    133,                         // lineNo
    "invertedImageIndex/search", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

emlrtRSInfo mvc_emlrtRSI{
    137,                         // lineNo
    "invertedImageIndex/search", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

emlrtRSInfo nvc_emlrtRSI{
    138,                         // lineNo
    "invertedImageIndex/search", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

emlrtRSInfo ovc_emlrtRSI{
    144,                         // lineNo
    "invertedImageIndex/search", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

emlrtRSInfo pvc_emlrtRSI{
    146,                         // lineNo
    "invertedImageIndex/search", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

emlrtRSInfo qvc_emlrtRSI{
    148,                         // lineNo
    "invertedImageIndex/search", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

emlrtRSInfo rvc_emlrtRSI{
    150,                         // lineNo
    "invertedImageIndex/search", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

emlrtRSInfo svc_emlrtRSI{
    152,                         // lineNo
    "invertedImageIndex/search", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

emlrtRSInfo pwc_emlrtRSI{
    337,         // lineNo
    "sparse/ge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo qwc_emlrtRSI{
    212,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

emlrtRSInfo rwc_emlrtRSI{
    214,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

emlrtRSInfo vwc_emlrtRSI{
    395,                 // lineNo
    "sparse/ctranspose", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo wwc_emlrtRSI{
    17,                    // lineNo
    "sparse/locTranspose", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\locTranspose.m" // pathName
};

emlrtRSInfo xwc_emlrtRSI{
    33,                    // lineNo
    "sparse/locTranspose", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\locTranspose.m" // pathName
};

emlrtRSInfo ywc_emlrtRSI{
    24,                    // lineNo
    "sparse/locTranspose", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\locTranspose.m" // pathName
};

emlrtRSInfo oyc_emlrtRSI{
    209,             // lineNo
    "sparse/sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo pyc_emlrtRSI{
    147,             // lineNo
    "sparse/sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo qyc_emlrtRSI{
    138,             // lineNo
    "sparse/sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo ryc_emlrtRSI{
    126,             // lineNo
    "sparse/sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo syc_emlrtRSI{
    120,             // lineNo
    "sparse/sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo tyc_emlrtRSI{
    119,             // lineNo
    "sparse/sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo vyc_emlrtRSI{
    1666,          // lineNo
    "locSortrows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo wyc_emlrtRSI{
    1668,          // lineNo
    "locSortrows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo xyc_emlrtRSI{
    1669,          // lineNo
    "locSortrows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

emlrtRSInfo aad_emlrtRSI{
    33,              // lineNo
    "sparse/mtimes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pathName
};

emlrtRSInfo bad_emlrtRSI{
    49,         // lineNo
    "ssmtimes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pathName
};

emlrtRSInfo cad_emlrtRSI{
    50,         // lineNo
    "ssmtimes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pathName
};

emlrtRSInfo dad_emlrtRSI{
    62,         // lineNo
    "ssmtimes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pathName
};

emlrtRSInfo ead_emlrtRSI{
    74,         // lineNo
    "ssmtimes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pathName
};

emlrtRSInfo fad_emlrtRSI{
    86,         // lineNo
    "ssmtimes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pathName
};

emlrtRSInfo gad_emlrtRSI{
    98,         // lineNo
    "ssmtimes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pathName
};

emlrtRSInfo had_emlrtRSI{
    118,        // lineNo
    "ssmtimes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pathName
};

emlrtRSInfo iad_emlrtRSI{
    120,        // lineNo
    "ssmtimes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pathName
};

emlrtRSInfo jad_emlrtRSI{
    124,        // lineNo
    "ssmtimes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pathName
};

emlrtRSInfo kad_emlrtRSI{
    279,                 // lineNo
    "countNnzInProduct", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pathName
};

emlrtRSInfo lad_emlrtRSI{
    290,                 // lineNo
    "countNnzInProduct", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pathName
};

emlrtRSInfo gbd_emlrtRSI{
    609,                                  // lineNo
    "invertedImageIndex/selectStrongest", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

emlrtRSInfo hbd_emlrtRSI{
    617,                                  // lineNo
    "invertedImageIndex/selectStrongest", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

emlrtRSInfo eed_emlrtRSI{
    172,                           // lineNo
    "tabularDimension/selectFrom", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "tabularDimension.m" // pathName
};

emlrtRSInfo jed_emlrtRSI{
    612,                              // lineNo
    "MLDigraph/edgesConstrWithIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

emlrtRSInfo ked_emlrtRSI{
    613,                              // lineNo
    "MLDigraph/edgesConstrWithIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

emlrtRSInfo led_emlrtRSI{
    617,                              // lineNo
    "MLDigraph/edgesConstrWithIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

emlrtRSInfo med_emlrtRSI{
    620,                              // lineNo
    "MLDigraph/edgesConstrWithIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

emlrtRSInfo ned_emlrtRSI{
    626,                              // lineNo
    "MLDigraph/edgesConstrWithIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

emlrtRSInfo oed_emlrtRSI{
    637,                              // lineNo
    "MLDigraph/edgesConstrWithIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

emlrtMCInfo e_emlrtMCI{
    53,        // lineNo
    19,        // colNo
    "flt2str", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\flt2str.m" // pName
};

emlrtMCInfo f_emlrtMCI{
    27,      // lineNo
    5,       // colNo
    "error", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\error.m" // pName
};

omp_lock_t emlrtLockGlobal;

omp_nest_lock_t helperVisualSLAMCodegen_nestLockGlobal;

emlrtRTEInfo emlrtRTEI{
    225,                   // lineNo
    27,                    // colNo
    "check_non_axis_size", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pName
};

emlrtRTEInfo b_emlrtRTEI{
    123,                      // lineNo
    21,                       // colNo
    "rigidtform3dImpl/set.R", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\rigidtform3dImpl.m" // pName
};

emlrtRTEInfo c_emlrtRTEI{
    305,                          // lineNo
    21,                           // colNo
    "MatrixTransformation/set.A", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pName
};

emlrtRTEInfo d_emlrtRTEI{
    146,                                // lineNo
    21,                                 // colNo
    "rigidtform3dImpl/set.Translation", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\rigidtform3dImpl.m" // pName
};

emlrtECInfo b_emlrtECI{
    -1,                            // nDims
    347,                           // lineNo
    13,                            // colNo
    "FeaturePointsImpl/configure", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

emlrtECInfo c_emlrtECI{
    -1,                        // nDims
    183,                       // lineNo
    13,                        // colNo
    "ORBPointsImpl/configure", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pName
};

emlrtECInfo d_emlrtECI{
    -1,                        // nDims
    181,                       // lineNo
    13,                        // colNo
    "ORBPointsImpl/configure", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pName
};

emlrtRTEInfo e_emlrtRTEI{
    396,                                     // lineNo
    17,                                      // colNo
    "FeaturePointsImpl/validateParamLength", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

emlrtRTEInfo f_emlrtRTEI{
    14,               // lineNo
    37,               // colNo
    "validatenonnan", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatenonnan.m" // pName
};

emlrtRTEInfo g_emlrtRTEI{
    14,               // lineNo
    37,               // colNo
    "validatefinite", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatefinite.m" // pName
};

emlrtRTEInfo h_emlrtRTEI{
    14,                 // lineNo
    37,                 // colNo
    "validatepositive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatepositive.m" // pName
};

emlrtRTEInfo i_emlrtRTEI{
    15,             // lineNo
    19,             // colNo
    "validatesize", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatesize.m" // pName
};

emlrtRTEInfo k_emlrtRTEI{
    58,                   // lineNo
    23,                   // colNo
    "assertValidSizeArg", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertValidSizeArg.m" // pName
};

emlrtRTEInfo m_emlrtRTEI{
    198,             // lineNo
    27,              // colNo
    "unaryMinOrMax", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pName
};

emlrtRTEInfo n_emlrtRTEI{
    13,     // lineNo
    9,      // colNo
    "sqrt", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" // pName
};

emlrtDCInfo g_emlrtDCI{
    97,                                     // lineNo
    41,                                     // colNo
    "extractORBBuildable/extractORB_uint8", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\extractORBBuildable.m", // pName
    4                                   // checkKind
};

emlrtBCInfo tb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    204,                     // lineNo
    60,                      // colNo
    "",                      // aName
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtBCInfo ub_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    203,                     // lineNo
    61,                      // colNo
    "",                      // aName
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtBCInfo vb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    187,                     // lineNo
    25,                      // colNo
    "",                      // aName
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtECInfo g_emlrtECI{
    -1,                      // nDims
    204,                     // lineNo
    9,                       // colNo
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtBCInfo wb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    204,                     // lineNo
    34,                      // colNo
    "",                      // aName
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtBCInfo xb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    204,                     // lineNo
    21,                      // colNo
    "",                      // aName
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtECInfo h_emlrtECI{
    -1,                      // nDims
    203,                     // lineNo
    9,                       // colNo
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtBCInfo yb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    203,                     // lineNo
    36,                      // colNo
    "",                      // aName
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtBCInfo ac_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    203,                     // lineNo
    23,                      // colNo
    "",                      // aName
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtDCInfo h_emlrtDCI{
    199,                     // lineNo
    28,                      // colNo
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    1                                      // checkKind
};

emlrtDCInfo i_emlrtDCI{
    198,                     // lineNo
    27,                      // colNo
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    1                                      // checkKind
};

emlrtBCInfo bc_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    192,                     // lineNo
    52,                      // colNo
    "",                      // aName
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtBCInfo cc_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    180,                     // lineNo
    41,                      // colNo
    "",                      // aName
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtBCInfo dc_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    46,                   // lineNo
    5,                    // colNo
    "",                   // aName
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtBCInfo ec_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    184,                     // lineNo
    26,                      // colNo
    "",                      // aName
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtDCInfo j_emlrtDCI{
    184,                     // lineNo
    26,                      // colNo
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    1                                      // checkKind
};

emlrtBCInfo fc_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    186,                     // lineNo
    20,                      // colNo
    "",                      // aName
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtBCInfo gc_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    202,                     // lineNo
    42,                      // colNo
    "",                      // aName
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtBCInfo hc_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    191,                     // lineNo
    9,                       // colNo
    "",                      // aName
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtBCInfo ic_emlrtBCI{
    -1,                  // iFirst
    -1,                  // iLast
    526,                 // lineNo
    24,                  // colNo
    "",                  // aName
    "removeWeakMatches", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtBCInfo kc_emlrtBCI{
    -1,                  // iFirst
    -1,                  // iLast
    530,                 // lineNo
    30,                  // colNo
    "",                  // aName
    "removeWeakMatches", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtBCInfo mc_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    255,                // lineNo
    30,                 // colNo
    "",                 // aName
    "exhaustiveSearch", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtBCInfo nc_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    254,                // lineNo
    29,                 // colNo
    "",                 // aName
    "exhaustiveSearch", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtBCInfo pc_emlrtBCI{
    -1,                  // iFirst
    -1,                  // iLast
    529,                 // lineNo
    22,                  // colNo
    "",                  // aName
    "removeWeakMatches", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

emlrtRTEInfo p_emlrtRTEI{
    28,        // lineNo
    19,        // colNo
    "sub2ind", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sub2ind.m" // pName
};

emlrtRTEInfo q_emlrtRTEI{
    18,        // lineNo
    23,        // colNo
    "sub2ind", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sub2ind.m" // pName
};

emlrtBCInfo qc_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    37,            // lineNo
    21,            // colNo
    "",            // aName
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m", // pName
    0                          // checkKind
};

emlrtBCInfo rc_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    51,            // lineNo
    25,            // colNo
    "",            // aName
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m", // pName
    0                          // checkKind
};

emlrtBCInfo sc_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    51,            // lineNo
    23,            // colNo
    "",            // aName
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m", // pName
    0                          // checkKind
};

emlrtBCInfo tc_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    50,            // lineNo
    27,            // colNo
    "",            // aName
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m", // pName
    0                          // checkKind
};

emlrtBCInfo uc_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    50,            // lineNo
    25,            // colNo
    "",            // aName
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m", // pName
    0                          // checkKind
};

emlrtBCInfo vc_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    38,            // lineNo
    59,            // colNo
    "",            // aName
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m", // pName
    0                          // checkKind
};

emlrtBCInfo wc_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    37,            // lineNo
    36,            // colNo
    "",            // aName
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m", // pName
    0                          // checkKind
};

emlrtBCInfo yc_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    39,            // lineNo
    15,            // colNo
    "",            // aName
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m", // pName
    0                          // checkKind
};

emlrtRTEInfo
    u_emlrtRTEI{
        133,                   // lineNo
        23,                    // colNo
        "dynamic_size_checks", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pName
    };

emlrtRTEInfo
    v_emlrtRTEI{
        138,                   // lineNo
        23,                    // colNo
        "dynamic_size_checks", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pName
    };

emlrtRTEInfo w_emlrtRTEI{
    16,                // lineNo
    19,                // colNo
    "mrdivide_helper", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_"
    "helper.m" // pName
};

emlrtRTEInfo
    x_emlrtRTEI{
        95,    // lineNo
        27,    // colNo
        "cat", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m" // pName
    };

emlrtRTEInfo y_emlrtRTEI{
    137,                  // lineNo
    5,                    // colNo
    "checkRuntimeStatus", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

emlrtRTEInfo ab_emlrtRTEI{
    140,                  // lineNo
    5,                    // colNo
    "checkRuntimeStatus", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

emlrtRTEInfo bb_emlrtRTEI{
    18,                             // lineNo
    37,                             // colNo
    "checkAndConvertMatchedPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkAndConvertMatchedPoints.m" // pName
};

emlrtRTEInfo cb_emlrtRTEI{
    23,         // lineNo
    19,         // colNo
    "randperm", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m" // pName
};

emlrtRTEInfo db_emlrtRTEI{
    14,      // lineNo
    9,       // colNo
    "log10", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\log10.m" // pName
};

emlrtRTEInfo eb_emlrtRTEI{
    111,          // lineNo
    5,            // colNo
    "callLAPACK", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" // pName
};

emlrtRTEInfo fb_emlrtRTEI{
    45,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" // pName
};

emlrtRTEInfo gb_emlrtRTEI{
    48,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" // pName
};

emlrtRTEInfo hb_emlrtRTEI{
    13,                     // lineNo
    27,                     // colNo
    "assertCompatibleDims", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\assertCompatibleDims.m" // pName
};

emlrtRTEInfo lb_emlrtRTEI{
    386,                  // lineNo
    1,                    // colNo
    "find_first_indices", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

emlrtRTEInfo ob_emlrtRTEI{
    14,               // lineNo
    37,               // colNo
    "validatescalar", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatescalar.m" // pName
};

emlrtECInfo db_emlrtECI{
    1,                          // nDims
    170,                        // lineNo
    31,                         // colNo
    "chooseRealizableSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pName
};

emlrtBCInfo qe_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    190,                        // lineNo
    11,                         // colNo
    "",                         // aName
    "chooseRealizableSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

emlrtBCInfo re_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    191,                        // lineNo
    7,                          // colNo
    "",                         // aName
    "chooseRealizableSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

emlrtBCInfo te_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    183,                        // lineNo
    21,                         // colNo
    "",                         // aName
    "chooseRealizableSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

emlrtBCInfo ue_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    184,                        // lineNo
    17,                         // colNo
    "",                         // aName
    "chooseRealizableSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

emlrtRTEInfo wb_emlrtRTEI{
    53,       // lineNo
    15,       // colNo
    "bsxfun", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m" // pName
};

emlrtRTEInfo ec_emlrtRTEI{
    329,                      // lineNo
    43,                       // colNo
    "tabular/countVarInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\tabular.m" // pName
};

emlrtBCInfo dh_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    231,                          // lineNo
    29,                           // colNo
    "",                           // aName
    "tabularDimension/setLabels", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "tabularDimension.m", // pName
    0                     // checkKind
};

emlrtRTEInfo kc_emlrtRTEI{
    13,                 // lineNo
    37,                 // colNo
    "validatenonempty", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatenonempty.m" // pName
};

emlrtRTEInfo lc_emlrtRTEI{
    1626,              // lineNo
    31,                // colNo
    "assertValidSize", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

emlrtRTEInfo mc_emlrtRTEI{
    1623,              // lineNo
    9,                 // colNo
    "assertValidSize", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

emlrtRTEInfo oc_emlrtRTEI{
    80,                  // lineNo
    13,                  // colNo
    "reshapeSizeChecks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" // pName
};

emlrtRTEInfo qc_emlrtRTEI{
    13,                // lineNo
    37,                // colNo
    "validateinteger", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validateinteger.m" // pName
};

emlrtRTEInfo tc_emlrtRTEI{
    18,              // lineNo
    23,              // colNo
    "validatenumel", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatenumel.m" // pName
};

emlrtRTEInfo uc_emlrtRTEI{
    11,                                   // lineNo
    27,                                   // colNo
    "sparse/sparse_validateNumericIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\private\\validateNumericIndex.m" // pName
};

emlrtRTEInfo vc_emlrtRTEI{
    12,                                   // lineNo
    27,                                   // colNo
    "sparse/sparse_validateNumericIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\private\\validateNumericIndex.m" // pName
};

emlrtRTEInfo wc_emlrtRTEI{
    42,                       // lineNo
    27,                       // colNo
    "sparse/sparse_catCheck", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\private\\catCheck.m" // pName
};

emlrtRTEInfo xc_emlrtRTEI{
    95,                   // lineNo
    43,                   // colNo
    "sparse/addOrAssert", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\private\\catCheck.m" // pName
};

emlrtRTEInfo cd_emlrtRTEI{
    132,                                       // lineNo
    23,                                        // colNo
    "EncoderVocabularyTree/assignVisualWords", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

emlrtBCInfo ii_emlrtBCI{
    -1,                                        // iFirst
    -1,                                        // iLast
    131,                                       // lineNo
    27,                                        // colNo
    "",                                        // aName
    "EncoderVocabularyTree/assignVisualWords", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

emlrtRTEInfo dd_emlrtRTEI{
    154,                                       // lineNo
    23,                                        // colNo
    "EncoderVocabularyTree/assignVisualWords", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

emlrtBCInfo ji_emlrtBCI{
    -1,                                        // iFirst
    -1,                                        // iLast
    148,                                       // lineNo
    107,                                       // colNo
    "",                                        // aName
    "EncoderVocabularyTree/assignVisualWords", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

emlrtDCInfo t_emlrtDCI{
    130,                                       // lineNo
    17,                                        // colNo
    "EncoderVocabularyTree/assignVisualWords", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    1                                         // checkKind
};

emlrtDCInfo u_emlrtDCI{
    130,                                       // lineNo
    17,                                        // colNo
    "EncoderVocabularyTree/assignVisualWords", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    4                                         // checkKind
};

emlrtBCInfo ki_emlrtBCI{
    -1,                                        // iFirst
    -1,                                        // iLast
    133,                                       // lineNo
    46,                                        // colNo
    "",                                        // aName
    "EncoderVocabularyTree/assignVisualWords", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

emlrtBCInfo li_emlrtBCI{
    -1,                                        // iFirst
    -1,                                        // iLast
    133,                                       // lineNo
    31,                                        // colNo
    "",                                        // aName
    "EncoderVocabularyTree/assignVisualWords", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

emlrtDCInfo w_emlrtDCI{
    1495,                  // lineNo
    44,                    // colNo
    "sparse/nullcopyLike", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m", // pName
    4                   // checkKind
};

emlrtRTEInfo
    id_emlrtRTEI{
        14,    // lineNo
        9,     // colNo
        "log", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\log.m" // pName
    };

emlrtRTEInfo jd_emlrtRTEI{
    460,                // lineNo
    34,                 // colNo
    "sparse/spfunImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

emlrtRTEInfo kd_emlrtRTEI{
    178,             // lineNo
    39,              // colNo
    "sparse/sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

emlrtDCInfo x_emlrtDCI{
    203,            // lineNo
    42,             // colNo
    "sparse/binOp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m", // pName
    4                  // checkKind
};

emlrtDCInfo y_emlrtDCI{
    203,            // lineNo
    73,             // colNo
    "sparse/binOp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m", // pName
    4                  // checkKind
};

emlrtRTEInfo nd_emlrtRTEI{
    92,                        // lineNo
    1,                         // colNo
    "parenReference2DColumns", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pName
};

emlrtBCInfo gj_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    63,                       // lineNo
    53,                       // colNo
    "",                       // aName
    "tabular/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenRefe"
    "rence.m", // pName
    0          // checkKind
};

emlrtRTEInfo pd_emlrtRTEI{
    316,                          // lineNo
    25,                           // colNo
    "tabularDimension/subs2inds", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "tabularDimension.m" // pName
};

emlrtRTEInfo qd_emlrtRTEI{
    284,                          // lineNo
    21,                           // colNo
    "tabularDimension/subs2inds", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "tabularDimension.m" // pName
};

emlrtECInfo fc_emlrtECI{
    -1,                     // nDims
    47,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtECInfo gc_emlrtECI{
    -1,                     // nDims
    48,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtECInfo hc_emlrtECI{
    -1,                     // nDims
    49,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtECInfo ic_emlrtECI{
    -1,                     // nDims
    50,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo ud_emlrtRTEI{
    233,                           // lineNo
    1,                             // colNo
    "find_first_nonempty_triples", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

emlrtDCInfo gb_emlrtDCI{
    189,                           // lineNo
    30,                            // colNo
    "find_first_nonempty_triples", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m", // pName
    4 // checkKind
};

emlrtBCInfo wm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    12,                     // lineNo
    20,                     // colNo
    "",                     // aName
    "checkIfViewIsMissing", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkIfViewIsMissing.m", // pName
    0                                          // checkKind
};

emlrtRTEInfo yd_emlrtRTEI{
    11,                     // lineNo
    5,                      // colNo
    "checkIfViewIsMissing", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkIfViewIsMissing.m" // pName
};

emlrtRTEInfo ae_emlrtRTEI{
    21,        // lineNo
    15,        // colNo
    "ind2sub", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\ind2sub.m" // pName
};

emlrtRTEInfo ce_emlrtRTEI{
    18,              // lineNo
    23,              // colNo
    "validatenrows", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatenrows.m" // pName
};

emlrtRTEInfo de_emlrtRTEI{
    6,                            // lineNo
    23,                           // colNo
    "checkNonEmptyCellValueList", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\checkNonEmptyCellValueList.m" // pName
};

emlrtBCInfo hn_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    10,                     // lineNo
    29,                     // colNo
    "",                     // aName
    "checkIfViewIsMissing", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkIfViewIsMissing.m", // pName
    0                                          // checkKind
};

emlrtRTEInfo je_emlrtRTEI{
    1,                    // lineNo
    1,                    // colNo
    "SystemCore/release", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+"
    "coder\\SystemCore.p" // pName
};

emlrtBCInfo ho_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    1111,                                 // lineNo
    35,                                   // colNo
    "",                                   // aName
    "worldpointset/findVisibilityOfView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

emlrtRTEInfo pe_emlrtRTEI{
    1336,                                  // lineNo
    13,                                    // colNo
    "worldpointset/checkIfNoPointIsAdded", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

emlrtRTEInfo qe_emlrtRTEI{
    7,                         // lineNo
    1,                         // colNo
    "checkFeatureConsistency", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\checkFeatureConsistency.m" // pName
};

emlrtRTEInfo re_emlrtRTEI{
    10,             // lineNo
    23,             // colNo
    "validatesize", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatesize.m" // pName
};

emlrtBCInfo yo_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    137,      // lineNo
    25,       // colNo
    "",       // aName
    "unpack", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m", // pName
    0                                  // checkKind
};

emlrtBCInfo hq_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    714,                           // lineNo
    21,                            // colNo
    "",                            // aName
    "imageviewset/connectedViews", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m", // pName
    0                                         // checkKind
};

emlrtBCInfo iq_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    684,                           // lineNo
    31,                            // colNo
    "",                            // aName
    "imageviewset/connectedViews", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m", // pName
    0                                         // checkKind
};

emlrtBCInfo jq_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    358,                                // lineNo
    31,                                 // colNo
    "",                                 // aName
    "imageviewsetBase/get.Connections", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

emlrtBCInfo kq_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    1115,                                 // lineNo
    93,                                   // colNo
    "",                                   // aName
    "worldpointset/findVisibilityOfView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

emlrtBCInfo cr_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    104,                                        // lineNo
    50,                                         // colNo
    "",                                         // aName
    "OneDimArrayBehaviorTransform/parenAssign", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m", // pName
    0                                        // checkKind
};

emlrtBCInfo dr_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    110,                                        // lineNo
    50,                                         // colNo
    "",                                         // aName
    "OneDimArrayBehaviorTransform/parenAssign", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m", // pName
    0                                        // checkKind
};

emlrtBCInfo kr_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    110,                                        // lineNo
    31,                                         // colNo
    "",                                         // aName
    "OneDimArrayBehaviorTransform/parenAssign", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m", // pName
    0                                        // checkKind
};

emlrtBCInfo lr_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    99,                                         // lineNo
    46,                                         // colNo
    "",                                         // aName
    "OneDimArrayBehaviorTransform/parenAssign", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m", // pName
    0                                        // checkKind
};

emlrtBCInfo mr_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    99,                                         // lineNo
    31,                                         // colNo
    "",                                         // aName
    "OneDimArrayBehaviorTransform/parenAssign", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m", // pName
    0                                        // checkKind
};

emlrtBCInfo nr_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    104,                                        // lineNo
    31,                                         // colNo
    "",                                         // aName
    "OneDimArrayBehaviorTransform/parenAssign", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m", // pName
    0                                        // checkKind
};

emlrtRTEInfo af_emlrtRTEI{
    237,            // lineNo
    13,             // colNo
    "sparse/numel", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

emlrtBCInfo ku_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    154,                         // lineNo
    42,                          // colNo
    "",                          // aName
    "invertedImageIndex/search", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m", // pName
    0 // checkKind
};

emlrtBCInfo mu_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    618,                                  // lineNo
    45,                                   // colNo
    "",                                   // aName
    "invertedImageIndex/selectStrongest", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m", // pName
    0 // checkKind
};

emlrtBCInfo nu_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    618,                                  // lineNo
    49,                                   // colNo
    "",                                   // aName
    "invertedImageIndex/selectStrongest", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m", // pName
    0 // checkKind
};

emlrtBCInfo ou_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    618,                                  // lineNo
    31,                                   // colNo
    "",                                   // aName
    "invertedImageIndex/selectStrongest", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m", // pName
    0 // checkKind
};

emlrtBCInfo pu_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    619,                                  // lineNo
    54,                                   // colNo
    "",                                   // aName
    "invertedImageIndex/selectStrongest", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m", // pName
    0 // checkKind
};

emlrtBCInfo qu_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    619,                                  // lineNo
    36,                                   // colNo
    "",                                   // aName
    "invertedImageIndex/selectStrongest", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m", // pName
    0 // checkKind
};

emlrtBCInfo ru_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    154,                         // lineNo
    45,                          // colNo
    "",                          // aName
    "invertedImageIndex/search", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m", // pName
    0 // checkKind
};

emlrtRTEInfo jf_emlrtRTEI{
    148,             // lineNo
    43,              // colNo
    "sparse/sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

emlrtRTEInfo kf_emlrtRTEI{
    153,             // lineNo
    43,              // colNo
    "sparse/sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

emlrtRTEInfo nf_emlrtRTEI{
    29,              // lineNo
    23,              // colNo
    "sparse/mtimes", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pName
};

emlrtRTEInfo of_emlrtRTEI{
    300,                 // lineNo
    9,                   // colNo
    "countNnzInProduct", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pName
};

emlrtBCInfo cv_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    63,                       // lineNo
    71,                       // colNo
    "",                       // aName
    "tabular/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenRefe"
    "rence.m", // pName
    0          // checkKind
};

emlrtBCInfo dv_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    63,                       // lineNo
    33,                       // colNo
    "",                       // aName
    "tabular/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenRefe"
    "rence.m", // pName
    0          // checkKind
};

emlrtBCInfo ev_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    69,                       // lineNo
    31,                       // colNo
    "",                       // aName
    "tabular/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenRefe"
    "rence.m", // pName
    0          // checkKind
};

emlrtRTEInfo tf_emlrtRTEI{
    612,                              // lineNo
    35,                               // colNo
    "MLDigraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

emlrtBCInfo fv_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    630,                              // lineNo
    23,                               // colNo
    "",                               // aName
    "MLDigraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

emlrtBCInfo gv_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    630,                              // lineNo
    36,                               // colNo
    "",                               // aName
    "MLDigraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

emlrtBCInfo hv_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    630,                              // lineNo
    64,                               // colNo
    "",                               // aName
    "MLDigraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

emlrtRTEInfo xf_emlrtRTEI{
    660,            // lineNo
    8,              // colNo
    "rowColtoIrJc", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

emlrtDCInfo jc_emlrtDCI{
    652,            // lineNo
    1,              // colNo
    "rowColtoIrJc", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    1                                // checkKind
};

emlrtBCInfo jv_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    664,            // lineNo
    8,              // colNo
    "",             // aName
    "rowColtoIrJc", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

emlrtRTEInfo yf_emlrtRTEI{
    51,     // lineNo
    19,     // colNo
    "diff", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m" // pName
};

emlrtBCInfo tab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    117,                   // lineNo
    26,                    // colNo
    "",                    // aName
    "minPriorityQueue/LE", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

emlrtBCInfo uab_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    116,                   // lineNo
    26,                    // colNo
    "",                    // aName
    "minPriorityQueue/LE", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

emlrtBCInfo ubb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    118,                   // lineNo
    23,                    // colNo
    "",                    // aName
    "minPriorityQueue/LE", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

emlrtBCInfo vbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    118,                   // lineNo
    33,                    // colNo
    "",                    // aName
    "minPriorityQueue/LE", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

emlrtBCInfo wbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    118,                   // lineNo
    46,                    // colNo
    "",                    // aName
    "minPriorityQueue/LE", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

emlrtBCInfo xbb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    118,                   // lineNo
    57,                    // colNo
    "",                    // aName
    "minPriorityQueue/LE", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

emlrtRTEInfo hg_emlrtRTEI{
    55,                     // lineNo
    17,                     // colNo
    "imageviewset/addView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pName
};

emlrtRTEInfo ig_emlrtRTEI{
    362,                          // lineNo
    13,                           // colNo
    "imageviewset/addConnection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pName
};

emlrtRTEInfo jg_emlrtRTEI{
    1364,                                 // lineNo
    36,                                   // colNo
    "imageviewset/parseConnectionInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pName
};

emlrtRTEInfo kg_emlrtRTEI{
    1366,                                 // lineNo
    36,                                   // colNo
    "imageviewset/parseConnectionInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pName
};

emlrtRTEInfo xg_emlrtRTEI{
    81,                // lineNo
    27,                // colNo
    "validate_inputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

emlrtRTEInfo yg_emlrtRTEI{
    296,           // lineNo
    1,             // colNo
    "delete_rows", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

emlrtRTEInfo ch_emlrtRTEI{
    12,             // lineNo
    5,              // colNo
    "checkViewIds", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "inputValidation\\checkViewIds.m" // pName
};

emlrtBCInfo shb_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    783,                                  // lineNo
    40,                                   // colNo
    "",                                   // aName
    "imageviewsetBase/getUpdatedInfoMat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

emlrtBCInfo thb_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    783,                                  // lineNo
    59,                                   // colNo
    "",                                   // aName
    "imageviewsetBase/getUpdatedInfoMat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

emlrtBCInfo uhb_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    778,                                  // lineNo
    36,                                   // colNo
    "",                                   // aName
    "imageviewsetBase/getUpdatedInfoMat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

emlrtBCInfo vhb_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    808,                                  // lineNo
    34,                                   // colNo
    "",                                   // aName
    "imageviewsetBase/getUpdatedMatches", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

emlrtBCInfo whb_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    808,                                  // lineNo
    50,                                   // colNo
    "",                                   // aName
    "imageviewsetBase/getUpdatedMatches", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

emlrtBCInfo xhb_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    801,                                  // lineNo
    30,                                   // colNo
    "",                                   // aName
    "imageviewsetBase/getUpdatedMatches", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m", // pName
    0                                             // checkKind
};

emlrtRTEInfo mh_emlrtRTEI{
    85,                // lineNo
    27,                // colNo
    "validate_inputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

emlrtRTEInfo uh_emlrtRTEI{
    25,               // lineNo
    13,               // colNo
    "binaryFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\binaryFeatures.m" // pName
};

emlrtRTEInfo ni_emlrtRTEI{
    54,    // lineNo
    9,     // colNo
    "div", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pName
};

emlrtRTEInfo tj_emlrtRTEI{
    348,                 // lineNo
    17,                  // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

emlrtRTEInfo vj_emlrtRTEI{
    182,             // lineNo
    17,              // colNo
    "ORBPointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pName
};

emlrtRTEInfo wj_emlrtRTEI{
    184,             // lineNo
    17,              // colNo
    "ORBPointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pName
};

emlrtRTEInfo xj_emlrtRTEI{
    65,       // lineNo
    28,       // colNo
    "repmat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" // pName
};

emlrtRTEInfo rk_emlrtRTEI{
    97,                    // lineNo
    35,                    // colNo
    "extractORBBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\extractORBBuildable.m" // pName
};

emlrtRTEInfo sk_emlrtRTEI{
    98,                    // lineNo
    35,                    // colNo
    "extractORBBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\extractORBBuildable.m" // pName
};

emlrtRTEInfo tk_emlrtRTEI{
    99,                    // lineNo
    35,                    // colNo
    "extractORBBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\extractORBBuildable.m" // pName
};

emlrtRTEInfo uk_emlrtRTEI{
    100,                   // lineNo
    35,                    // colNo
    "extractORBBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\extractORBBuildable.m" // pName
};

emlrtRTEInfo vk_emlrtRTEI{
    104,                   // lineNo
    35,                    // colNo
    "extractORBBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\extractORBBuildable.m" // pName
};

emlrtRTEInfo wk_emlrtRTEI{
    54,             // lineNo
    13,             // colNo
    "rigidtform3d", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\rigidtform3d.m" // pName
};

emlrtRTEInfo bl_emlrtRTEI{
    13,                   // lineNo
    1,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo cl_emlrtRTEI{
    14,                   // lineNo
    15,                   // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo dl_emlrtRTEI{
    14,                   // lineNo
    1,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo el_emlrtRTEI{
    46,                   // lineNo
    5,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo fl_emlrtRTEI{
    174,                  // lineNo
    5,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo gl_emlrtRTEI{
    180,                  // lineNo
    13,                   // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo hl_emlrtRTEI{
    178,                  // lineNo
    13,                   // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo il_emlrtRTEI{
    184,                  // lineNo
    13,                   // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo jl_emlrtRTEI{
    187,                  // lineNo
    9,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo kl_emlrtRTEI{
    192,                  // lineNo
    13,                   // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo ll_emlrtRTEI{
    191,                  // lineNo
    9,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo ml_emlrtRTEI{
    198,                  // lineNo
    5,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo ol_emlrtRTEI{
    51,                   // lineNo
    1,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo ql_emlrtRTEI{
    17,                   // lineNo
    5,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo sl_emlrtRTEI{
    17,              // lineNo
    9,               // colNo
    "metricHamming", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\metricHamming.m" // pName
};

emlrtRTEInfo tl_emlrtRTEI{
    18,              // lineNo
    21,              // colNo
    "metricHamming", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\metricHamming.m" // pName
};

emlrtRTEInfo ul_emlrtRTEI{
    18,              // lineNo
    9,               // colNo
    "metricHamming", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\metricHamming.m" // pName
};

emlrtRTEInfo vl_emlrtRTEI{
    218,                  // lineNo
    1,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo wl_emlrtRTEI{
    42,                       // lineNo
    21,                       // colNo
    "ComputeMetricBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\ComputeMetricBuildable.m" // pName
};

emlrtRTEInfo xl_emlrtRTEI{
    43,                       // lineNo
    21,                       // colNo
    "ComputeMetricBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\ComputeMetricBuildable.m" // pName
};

emlrtRTEInfo yl_emlrtRTEI{
    526,                  // lineNo
    12,                   // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo bm_emlrtRTEI{
    529,                  // lineNo
    11,                   // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo cm_emlrtRTEI{
    529,                  // lineNo
    1,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo em_emlrtRTEI{
    530,                  // lineNo
    1,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo km_emlrtRTEI{
    254,                  // lineNo
    1,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo lm_emlrtRTEI{
    255,                  // lineNo
    1,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo mm_emlrtRTEI{
    243,                  // lineNo
    5,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo nm_emlrtRTEI{
    244,                  // lineNo
    5,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo tm_emlrtRTEI{
    550,             // lineNo
    21,              // colNo
    "unaryMinOrMax", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pName
};

emlrtRTEInfo
    wm_emlrtRTEI{
        28,      // lineNo
        9,       // colNo
        "colon", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pName
    };

emlrtRTEInfo pn_emlrtRTEI{
    247,   // lineNo
    5,     // colNo
    "cat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pName
};

emlrtRTEInfo tn_emlrtRTEI{
    218,      // lineNo
    20,       // colNo
    "mtimes", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" // pName
};

emlrtRTEInfo
    un_emlrtRTEI{
        94,                  // lineNo
        5,                   // colNo
        "eml_mtimes_helper", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pName
    };

emlrtRTEInfo vn_emlrtRTEI{
    393,                    // lineNo
    25,                     // colNo
    "MatrixTransformation", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+"
    "internal\\MatrixTransformation.m" // pName
};

emlrtRTEInfo
    ao_emlrtRTEI{
        31,            // lineNo
        30,            // colNo
        "unsafeSxfun", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\unsafeSxfun.m" // pName
    };

emlrtRTEInfo bo_emlrtRTEI{
    63,                              // lineNo
    5,                               // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

emlrtRTEInfo
    co_emlrtRTEI{
        105,   // lineNo
        24,    // colNo
        "cat", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m" // pName
    };

emlrtRTEInfo do_emlrtRTEI{
    48,                              // lineNo
    24,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

emlrtRTEInfo jp_emlrtRTEI{
    60,       // lineNo
    20,       // colNo
    "bsxfun", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m" // pName
};

emlrtRTEInfo lp_emlrtRTEI{
    35,                    // lineNo
    20,                    // colNo
    "sumMatrixIncludeNaN", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" // pName
};

emlrtRTEInfo np_emlrtRTEI{
    41,    // lineNo
    14,    // colNo
    "svd", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m" // pName
};

emlrtRTEInfo
    vp_emlrtRTEI{
        172,     // lineNo
        20,      // colNo
        "colon", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pName
    };

emlrtRTEInfo wp_emlrtRTEI{
    363,    // lineNo
    24,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

emlrtRTEInfo dq_emlrtRTEI{
    146,                // lineNo
    24,                 // colNo
    "blockedSummation", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blocke"
    "dSummation.m" // pName
};

emlrtRTEInfo
    yq_emlrtRTEI{
        210,                       // lineNo
        25,                        // colNo
        "estimateEssentialMatrix", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatri"
        "x.m" // pName
    };

emlrtRTEInfo rr_emlrtRTEI{
    41,    // lineNo
    5,     // colNo
    "cat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pName
};

emlrtRTEInfo tr_emlrtRTEI{
    37,     // lineNo
    6,      // colNo
    "sort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m" // pName
};

emlrtRTEInfo vr_emlrtRTEI{
    170,              // lineNo
    32,               // colNo
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pName
};

emlrtRTEInfo wr_emlrtRTEI{
    170,              // lineNo
    48,               // colNo
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pName
};

emlrtRTEInfo cs_emlrtRTEI{
    39,     // lineNo
    5,      // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

emlrtRTEInfo tt_emlrtRTEI{
    60,                       // lineNo
    23,                       // colNo
    "graphPropertyContainer", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m" // pName
};

emlrtRTEInfo
    cv_emlrtRTEI{
        52,          // lineNo
        9,           // colNo
        "mergesort", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\mergesort.m" // pName
    };

emlrtRTEInfo dv_emlrtRTEI{
    70,                 // lineNo
    23,                 // colNo
    "tabularDimension", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "tabularDimension.m" // pName
};

emlrtRTEInfo ev_emlrtRTEI{
    199,           // lineNo
    17,            // colNo
    "varNamesDim", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "varNamesDim.m" // pName
};

emlrtRTEInfo fv_emlrtRTEI{
    209,           // lineNo
    17,            // colNo
    "varNamesDim", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "varNamesDim.m" // pName
};

emlrtRTEInfo hv_emlrtRTEI{
    268,       // lineNo
    22,        // colNo
    "tabular", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\tabular.m" // pName
};

emlrtRTEInfo jv_emlrtRTEI{
    27,         // lineNo
    1,          // colNo
    "sortrows", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m" // pName
};

emlrtRTEInfo kv_emlrtRTEI{
    37,         // lineNo
    23,         // colNo
    "sortrows", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m" // pName
};

emlrtRTEInfo sv_emlrtRTEI{
    247,       // lineNo
    13,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

emlrtRTEInfo ew_emlrtRTEI{
    56,        // lineNo
    5,         // colNo
    "sortIdx", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pName
};

emlrtRTEInfo ax_emlrtRTEI{
    62,                // lineNo
    13,                // colNo
    "EncoderStrategy", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bof\\EncoderStrategy.m" // pName
};

emlrtRTEInfo bx_emlrtRTEI{
    136,                     // lineNo
    17,                      // colNo
    "EncoderVocabularyTree", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

emlrtRTEInfo cx_emlrtRTEI{
    130,                     // lineNo
    17,                      // colNo
    "EncoderVocabularyTree", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

emlrtRTEInfo dx_emlrtRTEI{
    157,                     // lineNo
    37,                      // colNo
    "EncoderVocabularyTree", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

emlrtRTEInfo px_emlrtRTEI{
    1492,     // lineNo
    38,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

emlrtRTEInfo qx_emlrtRTEI{
    1494,     // lineNo
    39,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

emlrtRTEInfo rx_emlrtRTEI{
    1495,     // lineNo
    39,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

emlrtRTEInfo xx_emlrtRTEI{
    203,     // lineNo
    9,       // colNo
    "binOp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pName
};

emlrtRTEInfo yx_emlrtRTEI{
    307,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

emlrtRTEInfo ay_emlrtRTEI{
    459,      // lineNo
    12,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

emlrtRTEInfo by_emlrtRTEI{
    272,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

emlrtRTEInfo dy_emlrtRTEI{
    13,                   // lineNo
    15,                   // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

emlrtRTEInfo ey_emlrtRTEI{
    17,              // lineNo
    21,              // colNo
    "metricHamming", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\metricHamming.m" // pName
};

emlrtRTEInfo ry_emlrtRTEI{
    28,           // lineNo
    21,           // colNo
    "pointTrack", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrack.m" // pName
};

emlrtRTEInfo sy_emlrtRTEI{
    50,               // lineNo
    13,               // colNo
    "pointTrackImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\pointTrackImpl.m" // pName
};

emlrtRTEInfo ty_emlrtRTEI{
    29,           // lineNo
    13,           // colNo
    "pointTrack", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrack.m" // pName
};

emlrtRTEInfo adb_emlrtRTEI{
    47,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo bdb_emlrtRTEI{
    48,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo cdb_emlrtRTEI{
    49,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo ddb_emlrtRTEI{
    50,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo gdb_emlrtRTEI{
    57,                     // lineNo
    15,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo hdb_emlrtRTEI{
    58,                     // lineNo
    15,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo idb_emlrtRTEI{
    59,                     // lineNo
    15,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo jdb_emlrtRTEI{
    62,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo ldb_emlrtRTEI{
    64,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo mdb_emlrtRTEI{
    65,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo ndb_emlrtRTEI{
    68,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo odb_emlrtRTEI{
    69,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo qdb_emlrtRTEI{
    71,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo rdb_emlrtRTEI{
    74,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo sdb_emlrtRTEI{
    75,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo tdb_emlrtRTEI{
    76,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

emlrtRTEInfo wdb_emlrtRTEI{
    189,    // lineNo
    24,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

emlrtRTEInfo ydb_emlrtRTEI{
    247,    // lineNo
    5,      // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

emlrtRTEInfo beb_emlrtRTEI{
    241,    // lineNo
    17,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

emlrtRTEInfo deb_emlrtRTEI{
    127,    // lineNo
    17,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

emlrtRTEInfo yeb_emlrtRTEI{
    249,    // lineNo
    5,      // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

emlrtRTEInfo pfb_emlrtRTEI{
    17,          // lineNo
    9,           // colNo
    "metricSSD", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\metricSSD.m" // pName
};

emlrtRTEInfo
    bgb_emlrtRTEI{
        603,            // lineNo
        14,             // colNo
        "PointTracker", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\PointTracker."
        "m" // pName
    };

emlrtRTEInfo ugb_emlrtRTEI{
    18,          // lineNo
    5,           // colNo
    "intersect", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\intersect.m" // pName
};

emlrtRTEInfo vgb_emlrtRTEI{
    1107,            // lineNo
    70,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

emlrtRTEInfo wgb_emlrtRTEI{
    1108,            // lineNo
    72,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

emlrtRTEInfo njb_emlrtRTEI{
    684,            // lineNo
    31,             // colNo
    "imageviewset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pName
};

emlrtRTEInfo ojb_emlrtRTEI{
    356,                // lineNo
    42,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo pjb_emlrtRTEI{
    702,            // lineNo
    38,             // colNo
    "imageviewset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pName
};

emlrtRTEInfo qjb_emlrtRTEI{
    714,            // lineNo
    21,             // colNo
    "imageviewset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pName
};

emlrtRTEInfo bkb_emlrtRTEI{
    101,                     // lineNo
    5,                       // colNo
    "constructFromEdgeList", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\constructFromEdgeList.m" // pName
};

emlrtRTEInfo ckb_emlrtRTEI{
    102,                     // lineNo
    5,                       // colNo
    "constructFromEdgeList", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\constructFromEdgeList.m" // pName
};

emlrtRTEInfo dkb_emlrtRTEI{
    123,                     // lineNo
    25,                      // colNo
    "constructFromEdgeList", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\constructFromEdgeList.m" // pName
};

emlrtRTEInfo fkb_emlrtRTEI{
    93,        // lineNo
    47,        // colNo
    "nearest", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\nearest.m" // pName
};

emlrtRTEInfo qkb_emlrtRTEI{
    94,                             // lineNo
    57,                             // colNo
    "OneDimArrayBehaviorTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pName
};

emlrtRTEInfo rkb_emlrtRTEI{
    106,                            // lineNo
    17,                             // colNo
    "OneDimArrayBehaviorTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\OneDimArrayBehaviorTransform.m" // pName
};

emlrtRTEInfo enb_emlrtRTEI{
    248,      // lineNo
    17,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

emlrtRTEInfo jnb_emlrtRTEI{
    38,     // lineNo
    5,      // colNo
    "sort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m" // pName
};

emlrtRTEInfo knb_emlrtRTEI{
    152,                  // lineNo
    28,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

emlrtRTEInfo lnb_emlrtRTEI{
    140,                  // lineNo
    17,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

emlrtRTEInfo unb_emlrtRTEI{
    211,     // lineNo
    9,       // colNo
    "binOp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pName
};

emlrtRTEInfo vnb_emlrtRTEI{
    337,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

emlrtRTEInfo mob_emlrtRTEI{
    275,      // lineNo
    1,        // colNo
    "mtimes", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pName
};

emlrtRTEInfo dpb_emlrtRTEI{
    381,                             // lineNo
    12,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

emlrtRTEInfo epb_emlrtRTEI{
    382,                             // lineNo
    12,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

emlrtRTEInfo fpb_emlrtRTEI{
    383,                             // lineNo
    12,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

emlrtRTEInfo lpb_emlrtRTEI{
    21,      // lineNo
    9,       // colNo
    "isnan", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\isnan.m" // pName
};

emlrtRTEInfo mpb_emlrtRTEI{
    58,               // lineNo
    73,               // colNo
    "parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenRefe"
    "rence.m" // pName
};

emlrtRTEInfo npb_emlrtRTEI{
    63,               // lineNo
    25,               // colNo
    "parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenRefe"
    "rence.m" // pName
};

emlrtRTEInfo opb_emlrtRTEI{
    78,               // lineNo
    1,                // colNo
    "parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenRefe"
    "rence.m" // pName
};

emlrtRTEInfo ppb_emlrtRTEI{
    69,               // lineNo
    13,               // colNo
    "parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenRefe"
    "rence.m" // pName
};

emlrtRTEInfo spb_emlrtRTEI{
    612,         // lineNo
    44,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

emlrtRTEInfo tpb_emlrtRTEI{
    612,         // lineNo
    39,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

emlrtRTEInfo upb_emlrtRTEI{
    612,         // lineNo
    70,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

emlrtRTEInfo vpb_emlrtRTEI{
    612,         // lineNo
    65,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

emlrtRTEInfo wpb_emlrtRTEI{
    613,         // lineNo
    21,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

emlrtRTEInfo xpb_emlrtRTEI{
    613,         // lineNo
    39,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

emlrtRTEInfo ypb_emlrtRTEI{
    623,         // lineNo
    17,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

emlrtRTEInfo aqb_emlrtRTEI{
    624,         // lineNo
    17,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

emlrtRTEInfo bqb_emlrtRTEI{
    621,         // lineNo
    17,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

emlrtRTEInfo cqb_emlrtRTEI{
    618,         // lineNo
    17,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

emlrtRTEInfo dqb_emlrtRTEI{
    626,         // lineNo
    14,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

emlrtRTEInfo eqb_emlrtRTEI{
    637,         // lineNo
    45,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

emlrtRTEInfo fqb_emlrtRTEI{
    637,         // lineNo
    55,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

emlrtRTEInfo gqb_emlrtRTEI{
    652,         // lineNo
    1,           // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

emlrtRTEInfo lqb_emlrtRTEI{
    78,     // lineNo
    21,     // colNo
    "diff", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m" // pName
};

emlrtRTEInfo rtb_emlrtRTEI{
    181,                        // lineNo
    1,                          // colNo
    "helperCreateNewMapPoints", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCreateNewMapPoints.m" // pName
};

emlrtRTEInfo ytb_emlrtRTEI{
    296,       // lineNo
    1,         // colNo
    "sortIdx", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pName
};

emlrtRTEInfo aub_emlrtRTEI{
    298,       // lineNo
    24,        // colNo
    "sortIdx", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pName
};

emlrtRTEInfo kub_emlrtRTEI{
    1055,               // lineNo
    25,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo lub_emlrtRTEI{
    1061,               // lineNo
    13,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo nub_emlrtRTEI{
    1079,               // lineNo
    25,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo oub_emlrtRTEI{
    1085,               // lineNo
    13,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo qub_emlrtRTEI{
    1103,               // lineNo
    25,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo rub_emlrtRTEI{
    1109,               // lineNo
    13,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo uub_emlrtRTEI{
    724,                // lineNo
    25,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo vub_emlrtRTEI{
    715,                // lineNo
    29,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo yub_emlrtRTEI{
    761,                // lineNo
    25,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo avb_emlrtRTEI{
    753,                // lineNo
    33,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo cvb_emlrtRTEI{
    1058,               // lineNo
    21,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo dvb_emlrtRTEI{
    1082,               // lineNo
    21,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo evb_emlrtRTEI{
    1106,               // lineNo
    21,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo ivb_emlrtRTEI{
    358,            // lineNo
    13,             // colNo
    "imageviewset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewset.m" // pName
};

emlrtRTEInfo owb_emlrtRTEI{
    247,   // lineNo
    14,    // colNo
    "cat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pName
};

emlrtRTEInfo yac_emlrtRTEI{
    773,                // lineNo
    63,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo abc_emlrtRTEI{
    783,                // lineNo
    25,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo bbc_emlrtRTEI{
    778,                // lineNo
    21,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo cbc_emlrtRTEI{
    795,                // lineNo
    51,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo dbc_emlrtRTEI{
    808,                // lineNo
    25,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

emlrtRTEInfo ebc_emlrtRTEI{
    801,                // lineNo
    21,                 // colNo
    "imageviewsetBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+imageviewset\\imageviewsetBase.m" // pName
};

const int8_T iv[16]{1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};

const int8_T iv1[9]{1, 0, 0, 0, 1, 0, 0, 0, 1};

const char_T cv[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                    '_', 's', 'g', 'e', 's', 'd', 'd'};

const char_T cv1[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                     '_', 's', 'g', 'e', 's', 'v', 'd'};

const char_T cv2[19]{'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 's', 'g',
                     'e', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k'};

const char_T cv3[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                     '_', 'd', 'g', 'e', 's', 'v', 'd'};

const int32_T iv3[4]{0, 1, 2, 3};

const b_struct_T r{
    0, // addr
    0, // next
    0  // prev
};

const int16_T iv4[8]{480, 640, 1, 1, 1, 1, 1, 1};

const char_T cv6[12]{'A', 'b', 's', 'o', 'l', 'u',
                     't', 'e', 'P', 'o', 's', 'e'};

const int8_T iv5[36]{1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
                     0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1};

emlrtRSInfo fid_emlrtRSI{
    27,      // lineNo
    "error", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\error.m" // pathName
};

emlrtRSInfo hid_emlrtRSI{
    53,        // lineNo
    "flt2str", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\flt2str.m" // pathName
};

emlrtRSInfo uid_emlrtRSI{
    54,    // lineNo
    "div", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pathName
};

// End of code generation (helperVisualSLAMCodegen_data.cpp)
