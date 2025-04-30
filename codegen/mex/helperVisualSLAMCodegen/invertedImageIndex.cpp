//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// invertedImageIndex.cpp
//
// Code generation for function 'invertedImageIndex'
//

// Include files
#include "invertedImageIndex.h"
#include "EncoderBinaryFeatures.h"
#include "EncoderVocabularyTree.h"
#include "anonymous_function.h"
#include "bagOfFeatures.h"
#include "binaryFeatures.h"
#include "eml_int_forloop_overflow_check.h"
#include "find.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "histcounts.h"
#include "ind2sub.h"
#include "indexShapeCheck.h"
#include "introsort.h"
#include "locBsearch.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "sparse1.h"
#include "spdiags.h"
#include "strcmp.h"
#include "string1.h"
#include "sum.h"
#include "unique.h"
#include "validateattributes.h"
#include "visualWords.h"
#include "visualWordsImpl.h"
#include "warning.h"
#include "blas.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>
#include <emmintrin.h>
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo skb_emlrtRSI{
    84,                                      // lineNo
    "invertedImageIndex/invertedImageIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo tkb_emlrtRSI{
    102,                                     // lineNo
    "invertedImageIndex/invertedImageIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo ukb_emlrtRSI{
    108,                                     // lineNo
    "invertedImageIndex/invertedImageIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo xkb_emlrtRSI{
    1037,                                      // lineNo
    "invertedImageIndex/makeEmptyVisualWords", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo ykb_emlrtRSI{
    27,                        // lineNo
    "visualWords/visualWords", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\visualWords.m" // pathName
};

static emlrtRSInfo alb_emlrtRSI{
    29,                        // lineNo
    "visualWords/visualWords", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\visualWords.m" // pathName
};

static emlrtRSInfo dlb_emlrtRSI{
    368,                                   // lineNo
    "invertedImageIndex/addImageFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo elb_emlrtRSI{
    372,                                   // lineNo
    "invertedImageIndex/addImageFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo flb_emlrtRSI{
    376,                                   // lineNo
    "invertedImageIndex/addImageFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo glb_emlrtRSI{
    378,                                   // lineNo
    "invertedImageIndex/addImageFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo hlb_emlrtRSI{
    379,                                   // lineNo
    "invertedImageIndex/addImageFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo ilb_emlrtRSI{
    388,                                   // lineNo
    "invertedImageIndex/addImageFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo jlb_emlrtRSI{
    389,                                   // lineNo
    "invertedImageIndex/addImageFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo klb_emlrtRSI{
    390,                                   // lineNo
    "invertedImageIndex/addImageFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo llb_emlrtRSI{
    399,                                   // lineNo
    "invertedImageIndex/addImageFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo mlb_emlrtRSI{
    401,                                   // lineNo
    "invertedImageIndex/addImageFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo nlb_emlrtRSI{
    402,                                   // lineNo
    "invertedImageIndex/addImageFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo olb_emlrtRSI{
    404,                                   // lineNo
    "invertedImageIndex/addImageFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo plb_emlrtRSI{
    405,                                   // lineNo
    "invertedImageIndex/addImageFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo qlb_emlrtRSI{
    409,                                   // lineNo
    "invertedImageIndex/addImageFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo rlb_emlrtRSI{
    986,                                  // lineNo
    "invertedImageIndex/validateImageID", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo slb_emlrtRSI{
    266,                            // lineNo
    "bagOfFeatures/encodeFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pathName
};

static emlrtRSInfo tlb_emlrtRSI{
    291,                            // lineNo
    "bagOfFeatures/encodeFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pathName
};

static emlrtRSInfo ulb_emlrtRSI{
    293,                            // lineNo
    "bagOfFeatures/encodeFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pathName
};

static emlrtRSInfo ylb_emlrtRSI{
    133,                                       // lineNo
    "EncoderVocabularyTree/assignVisualWords", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pathName
};

static emlrtRSInfo vnb_emlrtRSI{
    896,                                      // lineNo
    "invertedImageIndex/updateImageLocation", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo qob_emlrtRSI{
    534,                                        // lineNo
    "invertedImageIndex/updateIndexStatistics", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo rob_emlrtRSI{
    536,                                        // lineNo
    "invertedImageIndex/updateIndexStatistics", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo dpb_emlrtRSI{
    273,           // lineNo
    "sparse/full", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo mwc_emlrtRSI{
    580,                                  // lineNo
    "invertedImageIndex/removeStopWords", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo nwc_emlrtRSI{
    581,                                  // lineNo
    "invertedImageIndex/removeStopWords", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo owc_emlrtRSI{
    587,                                  // lineNo
    "invertedImageIndex/removeStopWords", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo swc_emlrtRSI{
    332,         // lineNo
    "sparse/le", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo hxc_emlrtRSI{
    545,                                            // lineNo
    "invertedImageIndex/findImagesContainingWords", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo ixc_emlrtRSI{
    546,                                            // lineNo
    "invertedImageIndex/findImagesContainingWords", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo jxc_emlrtRSI{
    555,                                                 // lineNo
    "invertedImageIndex/removeImagesWithLowWordMatches", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo kxc_emlrtRSI{
    556,                                                 // lineNo
    "invertedImageIndex/removeImagesWithLowWordMatches", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo lxc_emlrtRSI{
    557,                                                 // lineNo
    "invertedImageIndex/removeImagesWithLowWordMatches", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo mxc_emlrtRSI{
    561,                                                 // lineNo
    "invertedImageIndex/removeImagesWithLowWordMatches", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo qxc_emlrtRSI{
    570,                                         // lineNo
    "invertedImageIndex/getIndicesImagesToKeep", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo rxc_emlrtRSI{
    571,                                         // lineNo
    "invertedImageIndex/getIndicesImagesToKeep", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo sxc_emlrtRSI{
    342,         // lineNo
    "sparse/eq", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo txc_emlrtRSI{
    628,                                     // lineNo
    "invertedImageIndex/computeMatchMetric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo uxc_emlrtRSI{
    631,                                     // lineNo
    "invertedImageIndex/computeMatchMetric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo vxc_emlrtRSI{
    632,                                     // lineNo
    "invertedImageIndex/computeMatchMetric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo wxc_emlrtRSI{
    635,                                     // lineNo
    "invertedImageIndex/computeMatchMetric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo xxc_emlrtRSI{
    636,                                     // lineNo
    "invertedImageIndex/computeMatchMetric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo yxc_emlrtRSI{
    639,                                     // lineNo
    "invertedImageIndex/computeMatchMetric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo ayc_emlrtRSI{
    640,                                     // lineNo
    "invertedImageIndex/computeMatchMetric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo byc_emlrtRSI{
    643,                                     // lineNo
    "invertedImageIndex/computeMatchMetric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo cyc_emlrtRSI{
    65,                        // lineNo
    "parenReference1DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference1D.m" // pathName
};

static emlrtRSInfo dyc_emlrtRSI{
    92,                        // lineNo
    "parenReference1DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference1D.m" // pathName
};

static emlrtRSInfo eyc_emlrtRSI{
    680,                                 // lineNo
    "invertedImageIndex/applyWeighting", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo fyc_emlrtRSI{
    683,                                 // lineNo
    "invertedImageIndex/applyWeighting", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo gyc_emlrtRSI{
    687,                                 // lineNo
    "invertedImageIndex/applyWeighting", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo hyc_emlrtRSI{
    690,                                 // lineNo
    "invertedImageIndex/applyWeighting", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo iyc_emlrtRSI{
    695,                                 // lineNo
    "invertedImageIndex/applyWeighting", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo jyc_emlrtRSI{
    696,                                 // lineNo
    "invertedImageIndex/applyWeighting", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo mad_emlrtRSI{
    18,              // lineNo
    "sparse/mtimes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pathName
};

static emlrtRSInfo oad_emlrtRSI{
    711,                                      // lineNo
    "invertedImageIndex/l2NormalizeFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo pad_emlrtRSI{
    712,                                      // lineNo
    "invertedImageIndex/l2NormalizeFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo qad_emlrtRSI{
    715,                                      // lineNo
    "invertedImageIndex/l2NormalizeFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo rad_emlrtRSI{
    722,                                      // lineNo
    "invertedImageIndex/l2NormalizeFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo sad_emlrtRSI{
    725,                                      // lineNo
    "invertedImageIndex/l2NormalizeFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo tad_emlrtRSI{
    729,                                      // lineNo
    "invertedImageIndex/l2NormalizeFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo uad_emlrtRSI{
    459,                // lineNo
    "sparse/spfunImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo vad_emlrtRSI{
    710,        // lineNo
    "@(x)x.^2", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRSInfo wad_emlrtRSI{
    12,     // lineNo
    "sqrt", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" // pathName
};

static emlrtRSInfo abd_emlrtRSI{
    28,              // lineNo
    "isDomainError", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\isDomainError.m" // pathName
};

static emlrtRSInfo bbd_emlrtRSI{
    26,              // lineNo
    "isDomainError", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\isDomainError.m" // pathName
};

static emlrtRSInfo cbd_emlrtRSI{
    22,                           // lineNo
    "applyScalarFunctionInPlace", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunctionInPlace.m" // pathName
};

static emlrtRSInfo dbd_emlrtRSI{
    24,                           // lineNo
    "applyScalarFunctionInPlace", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunctionInPlace.m" // pathName
};

static emlrtRSInfo ebd_emlrtRSI{
    10,                                  // lineNo
    "sparse/applyScalarFunctionInPlace", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\applyScalarFunctionInPlace.m" // pathName
};

static emlrtRSInfo fbd_emlrtRSI{
    55,                                  // lineNo
    "sparse/applyScalarFunctionInPlace", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\applyScalarFunctionInPlace.m" // pathName
};

static emlrtRSInfo jdd_emlrtRSI{
    985,                                  // lineNo
    "invertedImageIndex/validateImageID", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pathName
};

static emlrtRTEInfo yc_emlrtRTEI{
    814,                              // lineNo
    13,                               // colNo
    "invertedImageIndex/parseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo ad_emlrtRTEI{
    987,                                  // lineNo
    45,                                   // colNo
    "invertedImageIndex/validateImageID", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo bd_emlrtRTEI{
    274,                            // lineNo
    17,                             // colNo
    "bagOfFeatures/encodeFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pName
};

static emlrtBCInfo oi_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    900,                                      // lineNo
    33,                                       // colNo
    "",                                       // aName
    "invertedImageIndex/updateImageLocation", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m", // pName
    0 // checkKind
};

static emlrtBCInfo pi_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    897,                                      // lineNo
    33,                                       // colNo
    "",                                       // aName
    "invertedImageIndex/updateImageLocation", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m", // pName
    0 // checkKind
};

static emlrtBCInfo qi_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    897,                                      // lineNo
    57,                                       // colNo
    "",                                       // aName
    "invertedImageIndex/updateImageLocation", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m", // pName
    0 // checkKind
};

static emlrtDCInfo ab_emlrtDCI{
    193,             // lineNo
    33,              // colNo
    "sparse/sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m", // pName
    4                   // checkKind
};

static emlrtDCInfo bb_emlrtDCI{
    307,              // lineNo
    13,               // colNo
    "sparse/rdivide", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m", // pName
    4                   // checkKind
};

static emlrtDCInfo cb_emlrtDCI{
    272,           // lineNo
    23,            // colNo
    "sparse/full", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m", // pName
    4                   // checkKind
};

static emlrtDCInfo td_emlrtDCI{
    211,            // lineNo
    42,             // colNo
    "sparse/binOp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m", // pName
    4                  // checkKind
};

static emlrtDCInfo ud_emlrtDCI{
    211,            // lineNo
    45,             // colNo
    "sparse/binOp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m", // pName
    4                  // checkKind
};

static emlrtDCInfo vd_emlrtDCI{
    363,                  // lineNo
    30,                   // colNo
    "find_first_indices", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m", // pName
    4 // checkKind
};

static emlrtBCInfo lkb_emlrtBCI{
    -1,                                                  // iFirst
    -1,                                                  // iLast
    562,                                                 // lineNo
    41,                                                  // colNo
    "",                                                  // aName
    "invertedImageIndex/removeImagesWithLowWordMatches", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m", // pName
    0 // checkKind
};

static emlrtDCInfo wd_emlrtDCI{
    555,                                                 // lineNo
    13,                                                  // colNo
    "invertedImageIndex/removeImagesWithLowWordMatches", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m", // pName
    4 // checkKind
};

static emlrtRTEInfo oh_emlrtRTEI{
    570,                                         // lineNo
    19,                                          // colNo
    "invertedImageIndex/getIndicesImagesToKeep", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo hw_emlrtRTEI{
    89,                   // lineNo
    13,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo iw_emlrtRTEI{
    93,                   // lineNo
    24,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo jw_emlrtRTEI{
    94,                   // lineNo
    13,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo kw_emlrtRTEI{
    110,                  // lineNo
    17,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo lw_emlrtRTEI{
    1037,                 // lineNo
    13,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo mw_emlrtRTEI{
    31,                // lineNo
    17,                // colNo
    "visualWordsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\visualWordsImpl.m" // pName
};

static emlrtRTEInfo nw_emlrtRTEI{
    30,            // lineNo
    13,            // colNo
    "visualWords", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\visualWords.m" // pName
};

static emlrtRTEInfo ow_emlrtRTEI{
    283,           // lineNo
    13,            // colNo
    "visualWords", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\visualWords.m" // pName
};

static emlrtRTEInfo pw_emlrtRTEI{
    986,                  // lineNo
    70,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo qw_emlrtRTEI{
    293,             // lineNo
    36,              // colNo
    "bagOfFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pName
};

static emlrtRTEInfo rw_emlrtRTEI{
    399,                  // lineNo
    17,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo sw_emlrtRTEI{
    313,                  // lineNo
    18,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo tw_emlrtRTEI{
    405,                  // lineNo
    42,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo uw_emlrtRTEI{
    405,                  // lineNo
    17,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo vw_emlrtRTEI{
    383,                  // lineNo
    39,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo ww_emlrtRTEI{
    383,                  // lineNo
    17,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo xw_emlrtRTEI{
    392,                  // lineNo
    17,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo yw_emlrtRTEI{
    394,                  // lineNo
    17,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo ux_emlrtRTEI{
    895,                  // lineNo
    75,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo vx_emlrtRTEI{
    897,                  // lineNo
    17,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo wx_emlrtRTEI{
    900,                  // lineNo
    17,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo cy_emlrtRTEI{
    291,             // lineNo
    13,              // colNo
    "bagOfFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pName
};

static emlrtRTEInfo snb_emlrtRTEI{
    36,     // lineNo
    5,      // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo wnb_emlrtRTEI{
    248,      // lineNo
    21,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo xnb_emlrtRTEI{
    632,                  // lineNo
    13,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo ynb_emlrtRTEI{
    625,                  // lineNo
    27,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo sob_emlrtRTEI{
    711,                  // lineNo
    17,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo gdc_emlrtRTEI{
    332,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo hdc_emlrtRTEI{
    587,                  // lineNo
    17,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo idc_emlrtRTEI{
    555,                  // lineNo
    13,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo jdc_emlrtRTEI{
    561,                  // lineNo
    17,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo kdc_emlrtRTEI{
    550,                  // lineNo
    29,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo ldc_emlrtRTEI{
    562,                  // lineNo
    32,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

static emlrtRTEInfo mdc_emlrtRTEI{
    562,                  // lineNo
    17,                   // colNo
    "invertedImageIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\invertedImageIndex.m" // pName
};

// Function Definitions
namespace coder {
void invertedImageIndex::applyWeighting(const emlrtStack &sp, const c_sparse &h,
                                        c_sparse &tfidf) const
{
  c_sparse tf;
  d_anonymous_function uniOp;
  d_sparse diagTermFreq;
  sparse diagInvData;
  array<real_T, 2U> tmp_data;
  array<real_T, 1U> b_this;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T wd;
  int32_T a_tmp;
  int32_T b;
  int32_T bcidx;
  int32_T cmax;
  int32_T cnnz;
  int32_T cstart;
  int32_T flag;
  int32_T j;
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
  st.site = &fyc_emlrtRSI;
  sum(st, h, diagTermFreq);
  if (diagTermFreq.colidx[diagTermFreq.colidx.size(0) - 1] - 1 > 0) {
    uniOp.workspace.sa = diagTermFreq.d[0];
  } else {
    uniOp.workspace.sa = 0.0;
  }
  st.site = &fyc_emlrtRSI;
  spdiags(st, 1.0 / (uniOp.workspace.sa + 2.2204460492503131E-16),
          diagTermFreq);
  if (h.n == 0) {
    tmp_data.set(nullptr, 0, 0);
    st.site = &gyc_emlrtRSI;
    h_sparse(st, tmp_data, diagInvData);
  } else {
    bcidx = InverseDocumentFrequency.size(0) * InverseDocumentFrequency.size(1);
    b_this = InverseDocumentFrequency.reshape(bcidx);
    st.site = &hyc_emlrtRSI;
    spdiags(st, b_this, static_cast<real_T>(h.n), static_cast<real_T>(h.n),
            diagInvData);
  }
  st.site = &iyc_emlrtRSI;
  b_st.site = &mad_emlrtRSI;
  diagTermFreq.b_times(b_st, h, tf);
  st.site = &jyc_emlrtRSI;
  if (tf.n != diagInvData.m) {
    emlrtErrorWithMessageIdR2018a(&st, &nf_emlrtRTEI, "MATLAB:innerdim",
                                  "MATLAB:innerdim", 0);
  }
  b_st.site = &aad_emlrtRSI;
  c_st.site = &bad_emlrtRSI;
  bcidx = diagInvData.colidx.size(0);
  tfidf.colidx.set_size(&mob_emlrtRTEI, &c_st, diagInvData.colidx.size(0));
  for (cstart = 0; cstart < bcidx; cstart++) {
    tfidf.colidx[cstart] = 0;
  }
  flag = 0;
  cnnz = 0;
  d_st.site = &kad_emlrtRSI;
  if (diagInvData.n > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  j = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if (j <= diagInvData.n - 1) {
      bcidx = diagInvData.colidx[j] - 1;
      cstart = cnnz;
      cmax = cnnz + 1;
      tfidf.colidx[j] = cnnz + 1;
      while ((bcidx + 1 < diagInvData.colidx[j + 1]) && (cnnz <= cmax)) {
        b = tf.colidx[diagInvData.rowidx[bcidx]];
        a_tmp = tf.colidx[diagInvData.rowidx[bcidx] - 1];
        d_st.site = &lad_emlrtRSI;
        if ((a_tmp <= b - 1) && (b - 1 > 2147483646)) {
          e_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(e_st);
        }
        for (int32_T pa{a_tmp}; pa < b; pa++) {
          if (flag != j + 1) {
            flag = j + 1;
            cnnz++;
          }
        }
        bcidx++;
      }
      if (cnnz < cstart) {
        emlrtErrorWithMessageIdR2018a(&c_st, &of_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        j++;
      }
    } else {
      tfidf.colidx[diagInvData.n] = cnnz + 1;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  c_st.site = &cad_emlrtRSI;
  tfidf.n = diagInvData.n;
  if (cnnz < 1) {
    cnnz = 1;
  }
  tfidf.maxnz = cnnz;
  tfidf.d.set_size(&px_emlrtRTEI, &c_st, cnnz);
  tfidf.rowidx.set_size(&qx_emlrtRTEI, &c_st, cnnz);
  if (diagInvData.n + 1 < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(diagInvData.n + 1),
                                &w_emlrtDCI, &c_st);
  }
  wd = 0.0;
  flag = -1;
  cmax = 0;
  cnnz = -1;
  b = diagInvData.n;
  c_st.site = &dad_emlrtRSI;
  for (j = 0; j < b; j++) {
    boolean_T needSort;
    needSort = false;
    cstart = cnnz + 2;
    bcidx = (diagInvData.colidx[j + 1] - cmax) - 1;
    if (bcidx != 0) {
      if (bcidx == 1) {
        bcidx = tf.colidx[diagInvData.rowidx[cmax]];
        a_tmp = tf.colidx[diagInvData.rowidx[cmax] - 1];
        c_st.site = &ead_emlrtRSI;
        if ((a_tmp <= bcidx - 1) && (bcidx - 1 > 2147483646)) {
          d_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(d_st);
        }
        for (int32_T pa{a_tmp}; pa < bcidx; pa++) {
          tfidf.rowidx[((cnnz + pa) - a_tmp) + 1] = tf.rowidx[pa - 1];
          wd = tf.d[pa - 1] * diagInvData.d[cmax];
        }
        if (bcidx - 1 >= a_tmp) {
          cnnz = (cnnz + bcidx) - a_tmp;
        }
        cmax++;
      } else {
        bcidx = tf.colidx[diagInvData.rowidx[cmax]];
        a_tmp = tf.colidx[diagInvData.rowidx[cmax] - 1];
        c_st.site = &fad_emlrtRSI;
        if ((a_tmp <= bcidx - 1) && (bcidx - 1 > 2147483646)) {
          d_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(d_st);
        }
        for (int32_T pa{a_tmp}; pa < bcidx; pa++) {
          flag = ((cnnz + pa) - a_tmp) + 1;
          tfidf.rowidx[flag] = 1;
          wd = tf.d[pa - 1] * diagInvData.d[cmax];
        }
        if (bcidx - 1 >= a_tmp) {
          cnnz = (cnnz + bcidx) - a_tmp;
        }
        for (cmax++; cmax + 1 < diagInvData.colidx[j + 1]; cmax++) {
          real_T bd;
          bd = diagInvData.d[cmax];
          bcidx = tf.colidx[diagInvData.rowidx[cmax]];
          a_tmp = tf.colidx[diagInvData.rowidx[cmax] - 1];
          c_st.site = &gad_emlrtRSI;
          if ((a_tmp <= bcidx - 1) && (bcidx - 1 > 2147483646)) {
            d_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(d_st);
          }
          for (int32_T pa{a_tmp}; pa < bcidx; pa++) {
            if (flag + 1 < cstart) {
              cnnz++;
              flag = cnnz;
              tfidf.rowidx[cnnz] = 1;
              wd = tf.d[pa - 1] * bd;
              needSort = true;
            } else {
              wd += tf.d[pa - 1] * bd;
            }
          }
        }
      }
    }
    bcidx = tfidf.colidx[j + 1];
    cstart = tfidf.colidx[j];
    if (needSort) {
      c_st.site = &had_emlrtRSI;
      internal::introsort(c_st, tfidf.rowidx, cstart, tfidf.colidx[j + 1] - 1);
    }
    c_st.site = &iad_emlrtRSI;
    if ((cstart <= tfidf.colidx[j + 1] - 1) &&
        (tfidf.colidx[j + 1] - 1 > 2147483646)) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (a_tmp = cstart; a_tmp < bcidx; a_tmp++) {
      tfidf.d[a_tmp - 1] = wd;
    }
  }
  c_st.site = &jad_emlrtRSI;
  tfidf.fillIn();
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void invertedImageIndex::l2NormalizeFeatures(const emlrtStack &sp,
                                             const sparse &features,
                                             sparse &normalizedFeatures)
{
  __m128d b_r;
  b_sparse fNorm;
  d_sparse val1;
  sparse featuresProd;
  array<real_T, 2U> tmp_data;
  array<real_T, 1U> tmpd;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T i;
  int32_T nx;
  int32_T nzs_tmp_tmp;
  int32_T vectorUB;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &oad_emlrtRSI;
  b_st.site = &wob_emlrtRSI;
  nzs_tmp_tmp = features.colidx[features.colidx.size(0) - 1];
  if (nzs_tmp_tmp - 1 < 1) {
    nx = 0;
  } else {
    nx = nzs_tmp_tmp - 1;
  }
  c_st.site = &uad_emlrtRSI;
  d_st.site = &vad_emlrtRSI;
  e_st.site = &fo_emlrtRSI;
  tmpd.set_size(&ay_emlrtRTEI, &e_st, nx);
  for (i = 0; i < nx; i++) {
    real_T varargin_1;
    varargin_1 = features.d[i];
    tmpd[i] = varargin_1 * varargin_1;
  }
  if (tmpd.size(0) != nzs_tmp_tmp - 1) {
    emlrtErrorWithMessageIdR2018a(&b_st, &jd_emlrtRTEI, "MATLAB:samelen",
                                  "MATLAB:samelen", 0);
  }
  c_st.site = &xob_emlrtRSI;
  sparse::spallocLike(c_st, features.m, features.n, nzs_tmp_tmp - 1,
                      featuresProd);
  if (nzs_tmp_tmp - 1 < 1) {
    nx = 1;
  } else {
    nx = nzs_tmp_tmp;
  }
  for (i = 0; i <= nx - 2; i++) {
    featuresProd.rowidx[i] = features.rowidx[i];
  }
  nx = features.colidx.size(0);
  featuresProd.colidx.set_size(&sob_emlrtRTEI, &b_st, features.colidx.size(0));
  for (i = 0; i < nx; i++) {
    featuresProd.colidx[i] = features.colidx[i];
  }
  c_st.site = &yob_emlrtRSI;
  if (nzs_tmp_tmp - 1 > 2147483646) {
    d_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (int32_T k{0}; k <= nzs_tmp_tmp - 2; k++) {
    featuresProd.d[k] = tmpd[k];
  }
  c_st.site = &apb_emlrtRSI;
  featuresProd.b_fillIn();
  st.site = &pad_emlrtRSI;
  b_st.site = &pad_emlrtRSI;
  b_sum(b_st, featuresProd, fNorm);
  b_st.site = &wad_emlrtRSI;
  c_st.site = &wad_emlrtRSI;
  sparse::zerosLike(c_st, val1);
  i = fNorm.colidx[fNorm.colidx.size(0) - 1];
  if (i - 1 < 1) {
    i = 1;
  }
  c_st.site = &bbd_emlrtRSI;
  d_st.site = &tnb_emlrtRSI;
  if ((val1.colidx[0] <= val1.colidx[1] - 1) &&
      (val1.colidx[1] - 1 > 2147483646)) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  p = false;
  for (int32_T k{0}; k <= i - 2; k++) {
    if (p || (fNorm.d[k] < 0.0)) {
      p = true;
    }
  }
  if (!p) {
    c_st.site = &abd_emlrtRSI;
    nzs_tmp_tmp = fNorm.m >> 16;
    nx = nzs_tmp_tmp >> 16;
    if (static_cast<int32_T>(static_cast<uint32_T>(fNorm.m) & 65535U) >
        MAX_int32_T - (nzs_tmp_tmp << 16)) {
      nx++;
    }
    if (nx != 0) {
      emlrtErrorWithMessageIdR2018a(&c_st, &af_emlrtRTEI,
                                    "Coder:toolbox:SparseNumelTooBig",
                                    "Coder:toolbox:SparseNumelTooBig", 0);
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  b_st.site = &po_emlrtRSI;
  c_st.site = &cbd_emlrtRSI;
  nzs_tmp_tmp = fNorm.m >> 16;
  nx = nzs_tmp_tmp >> 16;
  if (static_cast<int32_T>(static_cast<uint32_T>(fNorm.m) & 65535U) >
      MAX_int32_T - (nzs_tmp_tmp << 16)) {
    nx++;
  }
  if (nx != 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &af_emlrtRTEI,
                                  "Coder:toolbox:SparseNumelTooBig",
                                  "Coder:toolbox:SparseNumelTooBig", 0);
  }
  c_st.site = &dbd_emlrtRSI;
  d_st.site = &ebd_emlrtRSI;
  nx = fNorm.d.size(0);
  e_st.site = &qo_emlrtRSI;
  if (fNorm.d.size(0) > 2147483646) {
    f_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(f_st);
  }
  nzs_tmp_tmp = (fNorm.d.size(0) / 2) << 1;
  vectorUB = nzs_tmp_tmp - 2;
  for (int32_T k{0}; k <= vectorUB; k += 2) {
    b_r = _mm_loadu_pd(&fNorm.d[k]);
    _mm_storeu_pd(&fNorm.d[k], _mm_sqrt_pd(b_r));
  }
  for (int32_T k{nzs_tmp_tmp}; k < nx; k++) {
    fNorm.d[k] = muDoubleScalarSqrt(fNorm.d[k]);
  }
  d_st.site = &fbd_emlrtRSI;
  fNorm.fillIn();
  st.site = &qad_emlrtRSI;
  fNorm.c_plus(st, tmpd);
  if (features.m == 0) {
    tmp_data.set(nullptr, 0, 0);
    st.site = &rad_emlrtRSI;
    h_sparse(st, tmp_data, featuresProd);
  } else {
    nx = tmpd.size(0);
    nzs_tmp_tmp = (tmpd.size(0) / 2) << 1;
    vectorUB = nzs_tmp_tmp - 2;
    for (i = 0; i <= vectorUB; i += 2) {
      b_r = _mm_loadu_pd(&tmpd[i]);
      _mm_storeu_pd(&tmpd[i], _mm_div_pd(_mm_set1_pd(1.0), b_r));
    }
    for (i = nzs_tmp_tmp; i < nx; i++) {
      tmpd[i] = 1.0 / tmpd[i];
    }
    st.site = &sad_emlrtRSI;
    spdiags(st, tmpd, static_cast<real_T>(features.m),
            static_cast<real_T>(features.m), featuresProd);
  }
  st.site = &tad_emlrtRSI;
  featuresProd.mtimes(st, features, normalizedFeatures);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void invertedImageIndex::l2NormalizeFeatures(const emlrtStack &sp,
                                             const c_sparse &features,
                                             c_sparse &normalizedFeatures)
{
  c_sparse featuresProd;
  d_anonymous_function uniOp;
  d_sparse fNorm;
  d_sparse val1;
  array<real_T, 1U> tmpd;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T val;
  int32_T i;
  int32_T loop_ub;
  int32_T numalloc;
  int32_T ridx;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &oad_emlrtRSI;
  b_st.site = &wob_emlrtRSI;
  ridx = features.colidx[features.colidx.size(0) - 1];
  numalloc = ridx - 1;
  if (ridx - 1 < 1) {
    loop_ub = 0;
  } else {
    loop_ub = ridx - 1;
  }
  c_st.site = &uad_emlrtRSI;
  d_st.site = &vad_emlrtRSI;
  e_st.site = &fo_emlrtRSI;
  tmpd.set_size(&ay_emlrtRTEI, &e_st, loop_ub);
  for (i = 0; i < loop_ub; i++) {
    val = features.d[i];
    tmpd[i] = val * val;
  }
  if (tmpd.size(0) != ridx - 1) {
    emlrtErrorWithMessageIdR2018a(&b_st, &jd_emlrtRTEI, "MATLAB:samelen",
                                  "MATLAB:samelen", 0);
  }
  c_st.site = &xob_emlrtRSI;
  d_st.site = &yhb_emlrtRSI;
  e_st.site = &dib_emlrtRSI;
  if (features.n < 0) {
    emlrtErrorWithMessageIdR2018a(&e_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (features.n >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  featuresProd.n = features.n;
  e_st.site = &cib_emlrtRSI;
  if (ridx - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&e_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (ridx - 1 >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  if (ridx - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&d_st, &kd_emlrtRTEI,
                                  "Coder:toolbox:SparseNzmaxTooSmall",
                                  "Coder:toolbox:SparseNzmaxTooSmall", 0);
  }
  numalloc = muIntScalarMax_sint32(numalloc, 1);
  featuresProd.d.set_size(&sob_emlrtRTEI, &d_st, numalloc);
  for (i = 0; i < numalloc; i++) {
    featuresProd.d[i] = 0.0;
  }
  featuresProd.maxnz = numalloc;
  featuresProd.colidx.set_size(&sob_emlrtRTEI, &d_st, features.n + 1);
  loop_ub = features.n;
  for (i = 0; i <= loop_ub; i++) {
    featuresProd.colidx[i] = 0;
  }
  featuresProd.rowidx.set_size(&sob_emlrtRTEI, &d_st, numalloc);
  for (i = 0; i < numalloc; i++) {
    featuresProd.rowidx[i] = 0;
  }
  e_st.site = &bib_emlrtRSI;
  e_st.site = &aib_emlrtRSI;
  if (ridx - 1 < 1) {
    loop_ub = 1;
  } else {
    loop_ub = ridx;
  }
  for (i = 0; i <= loop_ub - 2; i++) {
    featuresProd.rowidx[i] = features.rowidx[i];
  }
  loop_ub = features.colidx.size(0);
  featuresProd.colidx.set_size(&sob_emlrtRTEI, &b_st, features.colidx.size(0));
  for (i = 0; i < loop_ub; i++) {
    featuresProd.colidx[i] = features.colidx[i];
  }
  c_st.site = &yob_emlrtRSI;
  if (ridx - 1 > 2147483646) {
    d_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (int32_T k{0}; k <= ridx - 2; k++) {
    featuresProd.d[k] = tmpd[k];
  }
  c_st.site = &apb_emlrtRSI;
  featuresProd.fillIn();
  st.site = &pad_emlrtRSI;
  b_st.site = &pad_emlrtRSI;
  sum(b_st, featuresProd, fNorm);
  b_st.site = &wad_emlrtRSI;
  c_st.site = &wad_emlrtRSI;
  sparse::zerosLike(c_st, val1);
  i = fNorm.colidx[fNorm.colidx.size(0) - 1];
  if (i - 1 < 1) {
    i = 1;
  }
  c_st.site = &bbd_emlrtRSI;
  d_st.site = &tnb_emlrtRSI;
  if ((val1.colidx[0] <= val1.colidx[1] - 1) &&
      (val1.colidx[1] - 1 > 2147483646)) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  p = false;
  for (int32_T k{0}; k <= i - 2; k++) {
    if (p || (fNorm.d[k] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  b_st.site = &po_emlrtRSI;
  c_st.site = &dbd_emlrtRSI;
  d_st.site = &ebd_emlrtRSI;
  numalloc = fNorm.d.size(0);
  e_st.site = &qo_emlrtRSI;
  if (fNorm.d.size(0) > 2147483646) {
    f_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(f_st);
  }
  ridx = (fNorm.d.size(0) / 2) << 1;
  loop_ub = ridx - 2;
  for (int32_T k{0}; k <= loop_ub; k += 2) {
    __m128d b_r;
    b_r = _mm_loadu_pd(&fNorm.d[k]);
    _mm_storeu_pd(&fNorm.d[k], _mm_sqrt_pd(b_r));
  }
  for (int32_T k{ridx}; k < numalloc; k++) {
    fNorm.d[k] = muDoubleScalarSqrt(fNorm.d[k]);
  }
  d_st.site = &fbd_emlrtRSI;
  numalloc = 1;
  i = fNorm.colidx.size(0);
  e_st.site = &fib_emlrtRSI;
  for (loop_ub = 0; loop_ub <= i - 2; loop_ub++) {
    ridx = fNorm.colidx[loop_ub];
    fNorm.colidx[loop_ub] = numalloc;
    while (ridx < fNorm.colidx[loop_ub + 1]) {
      val = fNorm.d[ridx - 1];
      ridx++;
      if (val != 0.0) {
        fNorm.d[numalloc - 1] = val;
        numalloc++;
      }
    }
  }
  fNorm.colidx[fNorm.colidx.size(0) - 1] = numalloc;
  if (fNorm.colidx[fNorm.colidx.size(0) - 1] - 1 > 0) {
    uniOp.workspace.sa = fNorm.d[0];
  } else {
    uniOp.workspace.sa = 0.0;
  }
  st.site = &sad_emlrtRSI;
  spdiags(st, 1.0 / (uniOp.workspace.sa + 2.2204460492503131E-16), fNorm);
  st.site = &tad_emlrtRSI;
  b_st.site = &mad_emlrtRSI;
  fNorm.b_times(b_st, features, normalizedFeatures);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void invertedImageIndex::updateImageLocation(
    const emlrtStack &sp, const invertedImageIndex *b_this,
    array<cell_wrap_17, 1U> &updatedLocation)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T oldLocation;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((b_this->ImageID.size(0) == 0) || (b_this->ImageID.size(1) == 0)) {
    oldLocation = 0;
  } else {
    oldLocation = b_this->ImageLocation.size(0);
  }
  updatedLocation.set_size(&ux_emlrtRTEI, &sp, oldLocation + 1);
  st.site = &vnb_emlrtRSI;
  if (oldLocation > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T i{0}; i < oldLocation; i++) {
    int32_T b_i;
    int32_T loop_ub_tmp;
    b_i = b_this->ImageLocation.size(0) - 1;
    if (i > b_i) {
      emlrtDynamicBoundsCheckR2012b(i, 0, b_i, &qi_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (i > updatedLocation.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, updatedLocation.size(0) - 1,
                                    &pi_emlrtBCI, (emlrtConstCTX)&sp);
    }
    b_i = b_this->ImageLocation[i].f1.size(0);
    loop_ub_tmp = b_this->ImageLocation[i].f1.size(1);
    updatedLocation[i].f1.set_size(&vx_emlrtRTEI, &sp, b_i, loop_ub_tmp);
    loop_ub_tmp *= b_i;
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      updatedLocation[i].f1[b_i] = b_this->ImageLocation[i].f1[b_i];
    }
  }
  if (oldLocation > updatedLocation.size(0) - 1) {
    emlrtDynamicBoundsCheckR2012b(oldLocation, 0, updatedLocation.size(0) - 1,
                                  &oi_emlrtBCI, (emlrtConstCTX)&sp);
  }
  updatedLocation[oldLocation].f1.set_size(&wx_emlrtRTEI, &sp, 0, 0);
}

void invertedImageIndex::updateIndexStatistics(const emlrtStack &sp)
{
  __m128d b_r;
  b_anonymous_function uniOp;
  array<real_T, 1U> tmpd;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  int32_T col;
  int32_T ctr;
  int32_T i;
  int32_T numalloc;
  int32_T vectorUB;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &qob_emlrtRSI;
  uniOp.workspace.sb = ImageID.size(0) * ImageID.size(1);
  st.site = &qob_emlrtRSI;
  b_st.site = &sob_emlrtRSI;
  if (0.0 / uniOp.workspace.sb == 0.0) {
    c_st.site = &tob_emlrtRSI;
    d_st.site = &wob_emlrtRSI;
    col = NumImagesPerWord.colidx[NumImagesPerWord.colidx.size(0) - 1];
    if (NumImagesPerWord.colidx[NumImagesPerWord.colidx.size(0) - 1] - 1 < 1) {
      ctr = 0;
    } else {
      ctr = NumImagesPerWord.colidx[NumImagesPerWord.colidx.size(0) - 1] - 1;
    }
    tmpd.set_size(&ay_emlrtRTEI, &d_st, ctr);
    numalloc = (ctr / 2) << 1;
    vectorUB = numalloc - 2;
    for (i = 0; i <= vectorUB; i += 2) {
      b_r = _mm_loadu_pd(&NumImagesPerWord.d[i]);
      _mm_storeu_pd(&tmpd[i], _mm_div_pd(b_r, _mm_set1_pd(uniOp.workspace.sb)));
    }
    for (i = numalloc; i < ctr; i++) {
      tmpd[i] = NumImagesPerWord.d[i] / uniOp.workspace.sb;
    }
    if (tmpd.size(0) !=
        NumImagesPerWord.colidx[NumImagesPerWord.colidx.size(0) - 1] - 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &jd_emlrtRTEI, "MATLAB:samelen",
                                    "MATLAB:samelen", 0);
    }
    e_st.site = &xob_emlrtRSI;
    f_st.site = &yhb_emlrtRSI;
    g_st.site = &eib_emlrtRSI;
    sparse::assertValidSize(g_st, NumImagesPerWord.m);
    g_st.site = &dib_emlrtRSI;
    sparse::assertValidSize(g_st, NumImagesPerWord.n);
    WordFrequency.m = NumImagesPerWord.m;
    WordFrequency.n = NumImagesPerWord.n;
    g_st.site = &cib_emlrtRSI;
    sparse::assertValidSize(
        g_st, NumImagesPerWord.colidx[NumImagesPerWord.colidx.size(0) - 1] - 1);
    if (NumImagesPerWord.colidx[NumImagesPerWord.colidx.size(0) - 1] - 1 < 0) {
      emlrtErrorWithMessageIdR2018a(&f_st, &kd_emlrtRTEI,
                                    "Coder:toolbox:SparseNzmaxTooSmall",
                                    "Coder:toolbox:SparseNzmaxTooSmall", 0);
    }
    ctr = NumImagesPerWord.colidx[NumImagesPerWord.colidx.size(0) - 1] - 1;
    numalloc = muIntScalarMax_sint32(ctr, 1);
    WordFrequency.d.set_size(&yx_emlrtRTEI, &f_st, numalloc);
    for (i = 0; i < numalloc; i++) {
      WordFrequency.d[i] = 0.0;
    }
    WordFrequency.maxnz = numalloc;
    ctr = NumImagesPerWord.n + 1;
    if (ctr < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(ctr), &ab_emlrtDCI,
                                  &f_st);
    }
    WordFrequency.colidx.set_size(&yx_emlrtRTEI, &f_st, ctr);
    for (i = 0; i < ctr; i++) {
      WordFrequency.colidx[i] = 0;
    }
    WordFrequency.rowidx.set_size(&yx_emlrtRTEI, &f_st, numalloc);
    for (i = 0; i < numalloc; i++) {
      WordFrequency.rowidx[i] = 0;
    }
    g_st.site = &bib_emlrtRSI;
    if (NumImagesPerWord.n > 2147483646) {
      h_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(h_st);
    }
    g_st.site = &aib_emlrtRSI;
    if (NumImagesPerWord.colidx[NumImagesPerWord.colidx.size(0) - 1] - 1 < 1) {
      ctr = 1;
    } else {
      ctr = NumImagesPerWord.colidx[NumImagesPerWord.colidx.size(0) - 1];
    }
    for (i = 0; i <= ctr - 2; i++) {
      WordFrequency.rowidx[i] = NumImagesPerWord.rowidx[i];
    }
    WordFrequency.colidx.set_size(&yx_emlrtRTEI, &d_st,
                                  NumImagesPerWord.colidx.size(0));
    ctr = NumImagesPerWord.colidx.size(0);
    for (i = 0; i < ctr; i++) {
      WordFrequency.colidx[i] = NumImagesPerWord.colidx[i];
    }
    e_st.site = &yob_emlrtRSI;
    if (NumImagesPerWord.colidx[NumImagesPerWord.colidx.size(0) - 1] - 1 >
        2147483646) {
      f_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }
    for (ctr = 0; ctr <= col - 2; ctr++) {
      WordFrequency.d[ctr] = tmpd[ctr];
    }
    e_st.site = &apb_emlrtRSI;
    WordFrequency.b_fillIn();
  } else {
    i = NumImagesPerWord.m;
    if (i < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(i), &x_emlrtDCI, &b_st);
    }
    vectorUB = NumImagesPerWord.n;
    if (vectorUB < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(vectorUB), &y_emlrtDCI,
                                  &b_st);
    }
    InverseDocumentFrequency.set_size(&xx_emlrtRTEI, &b_st, i, vectorUB);
    ctr = i * vectorUB;
    for (i = 0; i < ctr; i++) {
      InverseDocumentFrequency[i] = rtNaN;
    }
    c_st.site = &uob_emlrtRSI;
    i = NumImagesPerWord.n;
    d_st.site = &bpb_emlrtRSI;
    if (NumImagesPerWord.n > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (col = 0; col < i; col++) {
      numalloc = NumImagesPerWord.colidx[col];
      ctr = NumImagesPerWord.colidx[col + 1];
      d_st.site = &cpb_emlrtRSI;
      if ((numalloc <= ctr - 1) && (ctr - 1 > 2147483646)) {
        e_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(e_st);
      }
      for (int32_T idx{numalloc}; idx < ctr; idx++) {
        InverseDocumentFrequency[(NumImagesPerWord.rowidx[idx - 1] +
                                  InverseDocumentFrequency.size(0) * col) -
                                 1] =
            NumImagesPerWord.d[idx - 1] / uniOp.workspace.sb;
      }
    }
    if (NumImagesPerWord.m < 1) {
      i = 0;
    } else {
      i = NumImagesPerWord.m;
    }
    if (NumImagesPerWord.n < 1) {
      vectorUB = 0;
    }
    c_st.site = &vob_emlrtRSI;
    d_st.site = &qcb_emlrtRSI;
    e_st.site = &nhb_emlrtRSI;
    sparse::assertValidSize(e_st, i);
    e_st.site = &ohb_emlrtRSI;
    sparse::assertValidSize(e_st, vectorUB);
    numalloc = 0;
    col = i * vectorUB;
    for (ctr = 0; ctr < col; ctr++) {
      if (InverseDocumentFrequency[ctr % i + InverseDocumentFrequency.size(0) *
                                                 (ctr / i)] != 0.0) {
        numalloc++;
      }
    }
    WordFrequency.m = i;
    WordFrequency.n = vectorUB;
    numalloc = muIntScalarMax_sint32(numalloc, 1);
    WordFrequency.maxnz = numalloc;
    WordFrequency.d.set_size(&yx_emlrtRTEI, &d_st, numalloc);
    for (col = 0; col < numalloc; col++) {
      WordFrequency.d[col] = 0.0;
    }
    if (vectorUB + 1 < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(vectorUB + 1),
                                  &bb_emlrtDCI, &d_st);
    }
    ctr = vectorUB + 1;
    WordFrequency.colidx.set_size(&yx_emlrtRTEI, &d_st, vectorUB + 1);
    for (col = 0; col < ctr; col++) {
      WordFrequency.colidx[col] = 0;
    }
    WordFrequency.colidx[0] = 1;
    WordFrequency.rowidx.set_size(&yx_emlrtRTEI, &d_st, numalloc);
    for (col = 0; col < numalloc; col++) {
      WordFrequency.rowidx[col] = 0;
    }
    WordFrequency.rowidx[0] = 1;
    ctr = 0;
    e_st.site = &phb_emlrtRSI;
    if (vectorUB > 2147483646) {
      f_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }
    for (col = 0; col < vectorUB; col++) {
      e_st.site = &qhb_emlrtRSI;
      if (i > 2147483646) {
        f_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(f_st);
      }
      for (numalloc = 0; numalloc < i; numalloc++) {
        real_T xrc;
        xrc = InverseDocumentFrequency[numalloc +
                                       InverseDocumentFrequency.size(0) * col];
        if (xrc != 0.0) {
          WordFrequency.rowidx[ctr] = numalloc + 1;
          WordFrequency.d[ctr] = xrc;
          ctr++;
        }
      }
      WordFrequency.colidx[col + 1] = ctr + 1;
    }
  }
  st.site = &rob_emlrtRSI;
  col = ImageID.size(0) * ImageID.size(1);
  st.site = &rob_emlrtRSI;
  ctr = NumImagesPerWord.m;
  numalloc = NumImagesPerWord.n;
  i = NumImagesPerWord.m;
  if (i < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(i), &cb_emlrtDCI, &st);
  }
  i = NumImagesPerWord.n;
  if (i < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(i), &cb_emlrtDCI, &st);
  }
  InverseDocumentFrequency.set_size(&by_emlrtRTEI, &st, ctr, numalloc);
  ctr *= numalloc;
  for (i = 0; i < ctr; i++) {
    InverseDocumentFrequency[i] = 0.0;
  }
  ctr = NumImagesPerWord.n;
  b_st.site = &dpb_emlrtRSI;
  if (NumImagesPerWord.n > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (vectorUB = 0; vectorUB < ctr; vectorUB++) {
    i = NumImagesPerWord.colidx[vectorUB + 1];
    numalloc = NumImagesPerWord.colidx[vectorUB];
    b_st.site = &tnb_emlrtRSI;
    if ((numalloc <= i - 1) && (i - 1 > 2147483646)) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (int32_T idx{numalloc}; idx < i; idx++) {
      InverseDocumentFrequency[(NumImagesPerWord.rowidx[idx - 1] +
                                InverseDocumentFrequency.size(0) * vectorUB) -
                               1] = NumImagesPerWord.d[idx - 1];
    }
  }
  ctr = InverseDocumentFrequency.size(0) * InverseDocumentFrequency.size(1);
  numalloc = (ctr / 2) << 1;
  vectorUB = numalloc - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    b_r = _mm_loadu_pd(&InverseDocumentFrequency[i]);
    _mm_storeu_pd(
        &InverseDocumentFrequency[i],
        _mm_div_pd(_mm_set1_pd(static_cast<real_T>(col)),
                   _mm_add_pd(b_r, _mm_set1_pd(2.2204460492503131E-16))));
  }
  for (i = numalloc; i < ctr; i++) {
    InverseDocumentFrequency[i] =
        static_cast<real_T>(col) /
        (InverseDocumentFrequency[i] + 2.2204460492503131E-16);
  }
  st.site = &rob_emlrtRSI;
  p = false;
  i = InverseDocumentFrequency.size(0) * InverseDocumentFrequency.size(1);
  for (ctr = 0; ctr < i; ctr++) {
    if (p || (InverseDocumentFrequency[ctr] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &id_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
  }
  b_st.site = &epb_emlrtRSI;
  c_st.site = &qo_emlrtRSI;
  if (i > 2147483646) {
    d_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (ctr = 0; ctr < i; ctr++) {
    InverseDocumentFrequency[ctr] =
        muDoubleScalarLog(InverseDocumentFrequency[ctr]);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void invertedImageIndex::addImageFeatures(const emlrtStack &sp,
                                          const binaryFeatures &features)
{
  static const char_T t31_Value[4]{'N', 'o', 'n', 'e'};
  bagOfFeatures *b_this;
  c_sparse b_r;
  c_sparse numImagesPerWord;
  c_sparse wordHistograms;
  d_sparse r1;
  sparse varSizeSparseData;
  vision::internal::bof::EncoderVocabularyTree *obj;
  vision::internal::visualWords words;
  array<cell_wrap_17, 1U> r2;
  array<real_T, 2U> b_fVector;
  array<real32_T, 2U> fVector;
  array<uint32_T, 2U> viewsOrViewIds;
  cell_wrap_17 r3;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T wordsPerImage;
  int32_T cend;
  int32_T k;
  boolean_T b;
  boolean_T hasView;
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
  st.site = &dlb_emlrtRSI;
  b_st.site = &rlb_emlrtRSI;
  viewsOrViewIds.set_size(&pw_emlrtRTEI, &b_st, ImageID.size(0),
                          ImageID.size(1));
  cend = ImageID.size(0) * ImageID.size(1);
  for (k = 0; k < cend; k++) {
    viewsOrViewIds[k] = ImageID[k];
  }
  if ((viewsOrViewIds.size(0) == 0) || (viewsOrViewIds.size(1) == 0)) {
    hasView = false;
  } else {
    boolean_T exitg1;
    c_st.site = &adb_emlrtRSI;
    d_st.site = &bdb_emlrtRSI;
    cend = viewsOrViewIds.size(0) * viewsOrViewIds.size(1);
    hasView = false;
    e_st.site = &cdb_emlrtRSI;
    if (cend > 2147483646) {
      f_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= cend - 1)) {
      if (viewsOrViewIds[k] == 1U) {
        hasView = true;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (hasView) {
    emlrtErrorWithMessageIdR2018a(
        &st, &ad_emlrtRTEI, "vision:invertedImageIndex:imageIdExists",
        "vision:invertedImageIndex:imageIdExists", 2, 6, 1.0);
  }
  st.site = &elb_emlrtRSI;
  b_this = BagOfFeatures;
  b_st.site = &slb_emlrtRSI;
  obj = b_this->Encoder;
  c_st.site = &slb_emlrtRSI;
  obj->Normalization.init(c_st, t31_Value);
  if (b_this->CustomFeatureLength != 256.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &bd_emlrtRTEI, "vision:bagOfFeatures:encodeInvalidFeatureLength",
        "vision:bagOfFeatures:encodeInvalidFeatureLength", 4, 6,
        b_this->CustomFeatureLength, 6, 256.0);
  }
  b_st.site = &tlb_emlrtRSI;
  b_this->Encoder->encode(b_st, features.Features, fVector);
  cend = fVector.size(1);
  b_fVector.set_size(&qw_emlrtRTEI, &st, 1, fVector.size(1));
  for (k = 0; k < cend; k++) {
    b_fVector[k] = fVector[k];
  }
  b_st.site = &ulb_emlrtRSI;
  h_sparse(b_st, b_fVector, wordHistograms);
  st.site = &flb_emlrtRSI;
  invertedImageIndex::makeEmptyVisualWords(st, words);
  st.site = &glb_emlrtRSI;
  wordHistograms.spones(st, b_r);
  st.site = &glb_emlrtRSI;
  sum(st, b_r, numImagesPerWord);
  st.site = &hlb_emlrtRSI;
  sum(st, wordHistograms, r1);
  st.site = &hlb_emlrtRSI;
  wordsPerImage = 0.0;
  cend = r1.colidx[1];
  k = r1.colidx[0];
  b_st.site = &tnb_emlrtRSI;
  if ((r1.colidx[0] <= r1.colidx[1] - 1) && (r1.colidx[1] - 1 > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T idx{k}; idx < cend; idx++) {
    wordsPerImage = r1.d[idx - 1];
  }
  hasView = (ImageID.size(0) == 0);
  b = (ImageID.size(1) == 0);
  if (hasView || b) {
    r3.f1.set_size(&vw_emlrtRTEI, &sp, 0, 0);
    ImageLocation.set_size(&ww_emlrtRTEI, &sp, 1);
    ImageLocation[0] = r3;
    st.site = &ilb_emlrtRSI;
    h_sparse(st, varSizeSparseData);
    st.site = &jlb_emlrtRSI;
    varSizeSparseData.vertcat(st, wordHistograms, WordHistograms);
    st.site = &klb_emlrtRSI;
    varSizeSparseData.b_vertcat(st, numImagesPerWord, NumImagesPerWord);
    WordsPerImage.set_size(&xw_emlrtRTEI, &sp, 1);
    WordsPerImage[0] = wordsPerImage;
    ImageWords = words;
    ImageID.set_size(&yw_emlrtRTEI, &sp, 1, 1);
    ImageID[0] = 1U;
  } else {
    st.site = &llb_emlrtRSI;
    invertedImageIndex::updateImageLocation(st, this, r2);
    ImageLocation.set_size(&rw_emlrtRTEI, &sp, r2.size(0));
    cend = r2.size(0) - 1;
    for (k = 0; k <= cend; k++) {
      ImageLocation[k] = r2[k];
    }
    varSizeSparseData = WordHistograms;
    st.site = &mlb_emlrtRSI;
    varSizeSparseData.c_vertcat(st, wordHistograms, WordHistograms);
    varSizeSparseData = NumImagesPerWord;
    st.site = &nlb_emlrtRSI;
    varSizeSparseData.c_plus(st, numImagesPerWord, NumImagesPerWord);
    k = WordsPerImage.size(0);
    WordsPerImage.set_size(&sw_emlrtRTEI, &sp, k + 1);
    WordsPerImage[k] = wordsPerImage;
    words = ImageWords;
    st.site = &olb_emlrtRSI;
    words.vertcat(st);
    ImageWords = words;
    st.site = &plb_emlrtRSI;
    viewsOrViewIds.set_size(&tw_emlrtRTEI, &st, ImageID.size(0),
                            ImageID.size(1));
    cend = ImageID.size(0) * ImageID.size(1);
    for (k = 0; k < cend; k++) {
      viewsOrViewIds[k] = ImageID[k];
    }
    b_st.site = &kn_emlrtRSI;
    c_st.site = &jj_emlrtRSI;
    if ((viewsOrViewIds.size(0) != 1) &&
        ((viewsOrViewIds.size(0) != 0) && (viewsOrViewIds.size(1) != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((viewsOrViewIds.size(0) != 0) && (viewsOrViewIds.size(1) != 0)) {
      cend = viewsOrViewIds.size(1);
    } else {
      cend = 0;
    }
    ImageID.set_size(&uw_emlrtRTEI, &sp, 1, cend + 1);
    for (k = 0; k < cend; k++) {
      ImageID[ImageID.size(0) * k] = viewsOrViewIds[k];
    }
    ImageID[ImageID.size(0) * cend] = 1U;
  }
  st.site = &qlb_emlrtRSI;
  updateIndexStatistics(st);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void invertedImageIndex::addImageFeatures(const emlrtStack &sp,
                                          const b_binaryFeatures &features)
{
  static const char_T t32_Value[4]{'N', 'o', 'n', 'e'};
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  bagOfFeatures *b_this;
  c_sparse b_r;
  c_sparse numImagesPerWord;
  c_sparse wordHistograms;
  d_sparse r1;
  sparse varSizeSparseData;
  vision::internal::bof::EncoderVocabularyTree *obj;
  vision::internal::visualWords words;
  array<cell_wrap_17, 1U> r3;
  array<real_T, 2U> h;
  array<real_T, 2U> y;
  array<real_T, 1U> assignments;
  array<real_T, 1U> leafNodes;
  array<real32_T, 2U> fVector;
  array<uint32_T, 2U> viewsOrViewIds;
  array<uint32_T, 1U> whichBranch;
  array<boolean_T, 1U> b_whichBranch;
  cell_wrap_17 r4;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T offset;
  real_T wordsPerImage;
  int32_T cend;
  int32_T i;
  int32_T loop_ub;
  int32_T vectorUB;
  uint8_T uv[320];
  boolean_T b;
  boolean_T hasView;
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
  st.site = &dlb_emlrtRSI;
  b_st.site = &rlb_emlrtRSI;
  viewsOrViewIds.set_size(&pw_emlrtRTEI, &b_st, ImageID.size(0),
                          ImageID.size(1));
  loop_ub = ImageID.size(0) * ImageID.size(1);
  for (i = 0; i < loop_ub; i++) {
    viewsOrViewIds[i] = ImageID[i];
  }
  if ((viewsOrViewIds.size(0) == 0) || (viewsOrViewIds.size(1) == 0)) {
    hasView = false;
  } else {
    boolean_T exitg1;
    c_st.site = &adb_emlrtRSI;
    d_st.site = &bdb_emlrtRSI;
    cend = viewsOrViewIds.size(0) * viewsOrViewIds.size(1);
    hasView = false;
    e_st.site = &cdb_emlrtRSI;
    if (cend > 2147483646) {
      f_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub <= cend - 1)) {
      if (viewsOrViewIds[loop_ub] == 2U) {
        hasView = true;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
  }
  if (hasView) {
    emlrtErrorWithMessageIdR2018a(
        &st, &ad_emlrtRTEI, "vision:invertedImageIndex:imageIdExists",
        "vision:invertedImageIndex:imageIdExists", 2, 6, 2.0);
  }
  st.site = &elb_emlrtRSI;
  b_this = BagOfFeatures;
  b_st.site = &slb_emlrtRSI;
  obj = b_this->Encoder;
  c_st.site = &slb_emlrtRSI;
  obj->Normalization.init(c_st, t32_Value);
  if (b_this->CustomFeatureLength != features.NumBits) {
    emlrtErrorWithMessageIdR2018a(
        &st, &bd_emlrtRTEI, "vision:bagOfFeatures:encodeInvalidFeatureLength",
        "vision:bagOfFeatures:encodeInvalidFeatureLength", 4, 6,
        b_this->CustomFeatureLength, 6, features.NumBits);
  }
  b_st.site = &tlb_emlrtRSI;
  obj = b_this->Encoder;
  c_st.site = &vlb_emlrtRSI;
  loop_ub = features.Features.size(0);
  assignments.set_size(&ax_emlrtRTEI, &c_st, features.Features.size(0));
  for (i = 0; i < loop_ub; i++) {
    assignments[i] = 0.0;
  }
  if (obj->Vocabulary.size(0) > 1) {
    wordsPerImage = obj->NumLevels - 1.0;
    if (!(wordsPerImage >= 0.0)) {
      emlrtNonNegativeCheckR2012b(wordsPerImage, &u_emlrtDCI, &c_st);
    }
    if (wordsPerImage !=
        static_cast<int32_T>(muDoubleScalarFloor(wordsPerImage))) {
      emlrtIntegerCheckR2012b(wordsPerImage, &t_emlrtDCI, &c_st);
    }
    leafNodes.set_size(&cx_emlrtRTEI, &c_st,
                       static_cast<int32_T>(wordsPerImage));
    wordsPerImage = obj->NumLevels - 1.0;
    if (!(wordsPerImage >= 0.0)) {
      emlrtNonNegativeCheckR2012b(wordsPerImage, &u_emlrtDCI, &c_st);
    }
    if (wordsPerImage !=
        static_cast<int32_T>(muDoubleScalarFloor(wordsPerImage))) {
      emlrtIntegerCheckR2012b(wordsPerImage, &t_emlrtDCI, &c_st);
    }
    loop_ub = static_cast<int32_T>(wordsPerImage);
    for (i = 0; i < loop_ub; i++) {
      leafNodes[i] = 0.0;
    }
    if (leafNodes.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, leafNodes.size(0), &ii_emlrtBCI,
                                    &c_st);
    }
    leafNodes[0] = 2.0;
    wordsPerImage = obj->NumLevels - 1.0;
    i = static_cast<int32_T>(wordsPerImage - 1.0);
    emlrtForLoopVectorCheckR2021a(2.0, 1.0, wordsPerImage, mxDOUBLE_CLASS,
                                  static_cast<int32_T>(wordsPerImage - 1.0),
                                  &cd_emlrtRTEI, &c_st);
    for (cend = 0; cend < i; cend++) {
      if ((static_cast<int32_T>(static_cast<uint32_T>(cend) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(cend) + 1U) >
           leafNodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(cend) + 1U), 1,
            leafNodes.size(0), &ki_emlrtBCI, &c_st);
      }
      if ((static_cast<int32_T>(static_cast<uint32_T>(cend) + 2U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(cend) + 2U) >
           leafNodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(cend) + 2U), 1,
            leafNodes.size(0), &li_emlrtBCI, &c_st);
      }
      d_st.site = &ylb_emlrtRSI;
      wordsPerImage = obj->BranchingFactor;
      e_st.site = &eo_emlrtRSI;
      leafNodes[cend + 1] =
          leafNodes[cend] +
          muDoubleScalarPower(
              wordsPerImage,
              static_cast<real_T>(static_cast<uint32_T>(cend) + 1U));
    }
  } else {
    leafNodes.set_size(&bx_emlrtRTEI, &c_st, 1);
    leafNodes[0] = 1.0;
  }
  offset = 0.0;
  i = obj->Vocabulary.size(0) - 1;
  if (i < 0) {
    emlrtDynamicBoundsCheckR2012b(0, 0, i, &ji_emlrtBCI, &c_st);
  }
  std::copy(&obj->Vocabulary[0].f1[0], &obj->Vocabulary[0].f1[320], &uv[0]);
  d_st.site = &amb_emlrtRSI;
  vision::internal::bof::EncoderBinaryFeatures::b_assignVisualWords(
      d_st, uv, features.Features, whichBranch);
  if (obj->Vocabulary.size(0) == 1) {
    loop_ub = whichBranch.size(0);
    assignments.set_size(&ax_emlrtRTEI, &c_st, whichBranch.size(0));
    for (i = 0; i < loop_ub; i++) {
      assignments[i] = whichBranch[i];
    }
  } else {
    wordsPerImage = obj->BranchingFactor;
    i = static_cast<int32_T>(wordsPerImage);
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, wordsPerImage, mxDOUBLE_CLASS,
                                  static_cast<int32_T>(wordsPerImage),
                                  &dd_emlrtRTEI, &c_st);
    for (loop_ub = 0; loop_ub < i; loop_ub++) {
      cend = whichBranch.size(0);
      b_whichBranch.set_size(&dx_emlrtRTEI, &c_st, whichBranch.size(0));
      for (vectorUB = 0; vectorUB < cend; vectorUB++) {
        b_whichBranch[vectorUB] =
            (whichBranch[vectorUB] == static_cast<uint32_T>(loop_ub) + 1U);
      }
      d_st.site = &bmb_emlrtRSI;
      vision::internal::bof::EncoderVocabularyTree::b_iAssignRecursively(
          &d_st, obj->Vocabulary, obj->VocabularySizes, assignments,
          features.Features, b_whichBranch, &offset,
          (static_cast<real_T>(loop_ub) + 1.0) + 1.0, 2.0, obj->NumLevels,
          obj->BranchingFactor, leafNodes);
    }
  }
  wordsPerImage = obj->VocabularySize + 1.0;
  if (muDoubleScalarIsNaN(wordsPerImage)) {
    y.set_size(&wm_emlrtRTEI, &b_st, 1, 1);
    y[0] = rtNaN;
  } else if (wordsPerImage < 1.0) {
    y.set_size(&wm_emlrtRTEI, &b_st, 1, 0);
  } else {
    y.set_size(&wm_emlrtRTEI, &b_st, 1,
               static_cast<int32_T>(wordsPerImage - 1.0) + 1);
    loop_ub = static_cast<int32_T>(wordsPerImage - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      y[i] = static_cast<real_T>(i) + 1.0;
    }
  }
  c_st.site = &wlb_emlrtRSI;
  histcounts(c_st, assignments, y, h);
  loop_ub = h.size(1);
  fVector.set_size(&cy_emlrtRTEI, &b_st, 1, h.size(1));
  for (i = 0; i < loop_ub; i++) {
    fVector[i] = static_cast<real32_T>(h[i]);
  }
  c_st.site = &xlb_emlrtRSI;
  if (internal::b_strcmp(c_st, obj->Normalization)) {
    real32_T b_y;
    n_t = (ptrdiff_t)fVector.size(1);
    incx_t = (ptrdiff_t)1;
    b_y = snrm2(&n_t, &fVector[0], &incx_t);
    fVector.set_size(&cy_emlrtRTEI, &b_st, 1, fVector.size(1));
    loop_ub = fVector.size(1) - 1;
    cend = (fVector.size(1) / 4) << 2;
    vectorUB = cend - 4;
    for (i = 0; i <= vectorUB; i += 4) {
      __m128 r2;
      r2 = _mm_loadu_ps(&fVector[i]);
      _mm_storeu_ps(&fVector[i],
                    _mm_div_ps(r2, _mm_set1_ps(b_y + 1.1920929E-7F)));
    }
    for (i = cend; i <= loop_ub; i++) {
      fVector[i] = fVector[i] / (b_y + 1.1920929E-7F);
    }
  }
  loop_ub = fVector.size(1);
  y.set_size(&qw_emlrtRTEI, &st, 1, fVector.size(1));
  for (i = 0; i < loop_ub; i++) {
    y[i] = fVector[i];
  }
  b_st.site = &ulb_emlrtRSI;
  h_sparse(b_st, y, wordHistograms);
  st.site = &flb_emlrtRSI;
  invertedImageIndex::makeEmptyVisualWords(st, words);
  st.site = &glb_emlrtRSI;
  wordHistograms.spones(st, b_r);
  st.site = &glb_emlrtRSI;
  sum(st, b_r, numImagesPerWord);
  st.site = &hlb_emlrtRSI;
  sum(st, wordHistograms, r1);
  st.site = &hlb_emlrtRSI;
  wordsPerImage = 0.0;
  cend = r1.colidx[1];
  loop_ub = r1.colidx[0];
  b_st.site = &tnb_emlrtRSI;
  if ((r1.colidx[0] <= r1.colidx[1] - 1) && (r1.colidx[1] - 1 > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (vectorUB = loop_ub; vectorUB < cend; vectorUB++) {
    wordsPerImage = r1.d[vectorUB - 1];
  }
  hasView = (ImageID.size(0) == 0);
  b = (ImageID.size(1) == 0);
  if (hasView || b) {
    r4.f1.set_size(&vw_emlrtRTEI, &sp, 0, 0);
    ImageLocation.set_size(&ww_emlrtRTEI, &sp, 1);
    ImageLocation[0] = r4;
    st.site = &ilb_emlrtRSI;
    h_sparse(st, varSizeSparseData);
    st.site = &jlb_emlrtRSI;
    varSizeSparseData.vertcat(st, wordHistograms, WordHistograms);
    st.site = &klb_emlrtRSI;
    varSizeSparseData.b_vertcat(st, numImagesPerWord, NumImagesPerWord);
    WordsPerImage.set_size(&xw_emlrtRTEI, &sp, 1);
    WordsPerImage[0] = wordsPerImage;
    ImageWords = words;
    ImageID.set_size(&yw_emlrtRTEI, &sp, 1, 1);
    ImageID[0] = 2U;
  } else {
    st.site = &llb_emlrtRSI;
    invertedImageIndex::updateImageLocation(st, this, r3);
    ImageLocation.set_size(&rw_emlrtRTEI, &sp, r3.size(0));
    loop_ub = r3.size(0) - 1;
    for (i = 0; i <= loop_ub; i++) {
      ImageLocation[i] = r3[i];
    }
    varSizeSparseData = WordHistograms;
    st.site = &mlb_emlrtRSI;
    varSizeSparseData.c_vertcat(st, wordHistograms, WordHistograms);
    varSizeSparseData = NumImagesPerWord;
    st.site = &nlb_emlrtRSI;
    varSizeSparseData.c_plus(st, numImagesPerWord, NumImagesPerWord);
    i = WordsPerImage.size(0);
    WordsPerImage.set_size(&sw_emlrtRTEI, &sp, i + 1);
    WordsPerImage[i] = wordsPerImage;
    words = ImageWords;
    st.site = &olb_emlrtRSI;
    words.vertcat(st);
    ImageWords = words;
    st.site = &plb_emlrtRSI;
    viewsOrViewIds.set_size(&tw_emlrtRTEI, &st, ImageID.size(0),
                            ImageID.size(1));
    loop_ub = ImageID.size(0) * ImageID.size(1);
    for (i = 0; i < loop_ub; i++) {
      viewsOrViewIds[i] = ImageID[i];
    }
    b_st.site = &kn_emlrtRSI;
    c_st.site = &jj_emlrtRSI;
    if ((viewsOrViewIds.size(0) != 1) &&
        ((viewsOrViewIds.size(0) != 0) && (viewsOrViewIds.size(1) != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((viewsOrViewIds.size(0) != 0) && (viewsOrViewIds.size(1) != 0)) {
      cend = viewsOrViewIds.size(1);
    } else {
      cend = 0;
    }
    ImageID.set_size(&uw_emlrtRTEI, &sp, 1, cend + 1);
    for (i = 0; i < cend; i++) {
      ImageID[ImageID.size(0) * i] = viewsOrViewIds[i];
    }
    ImageID[ImageID.size(0) * cend] = 2U;
  }
  st.site = &qlb_emlrtRSI;
  updateIndexStatistics(st);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void invertedImageIndex::addImageFeatures(const emlrtStack &sp,
                                          const binaryFeatures &features,
                                          real_T imageId)
{
  static const char_T t47_Value[4]{'N', 'o', 'n', 'e'};
  bagOfFeatures *b_this;
  c_sparse b_r;
  c_sparse numImagesPerWord;
  c_sparse wordHistograms;
  d_sparse r1;
  sparse varSizeSparseData;
  vision::internal::bof::EncoderVocabularyTree *obj;
  vision::internal::visualWords words;
  array<cell_wrap_17, 1U> r2;
  array<real_T, 2U> b_fVector;
  array<real32_T, 2U> fVector;
  array<uint32_T, 2U> viewsOrViewIds;
  cell_wrap_17 r3;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T wordsPerImage;
  int32_T cend;
  int32_T k;
  uint32_T u;
  boolean_T b;
  boolean_T hasView;
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
  st.site = &dlb_emlrtRSI;
  b_st.site = &jdd_emlrtRSI;
  c_st.site = &uyb_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  if (muDoubleScalarIsInf(imageId) || muDoubleScalarIsNaN(imageId) ||
      (!(muDoubleScalarFloor(imageId) == imageId))) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &qc_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedInteger",
        "MATLAB:invertedImageIndex:expectedInteger", 3, 4, 7, "imageID");
  }
  d_st.site = &be_emlrtRSI;
  if (imageId <= 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:invertedImageIndex:expectedPositive", 3, 4, 7, "imageID");
  }
  if (imageId < 4.294967296E+9) {
    u = static_cast<uint32_T>(imageId);
  } else {
    u = MAX_uint32_T;
  }
  b_st.site = &rlb_emlrtRSI;
  viewsOrViewIds.set_size(&pw_emlrtRTEI, &b_st, ImageID.size(0),
                          ImageID.size(1));
  cend = ImageID.size(0) * ImageID.size(1);
  for (k = 0; k < cend; k++) {
    viewsOrViewIds[k] = ImageID[k];
  }
  if ((viewsOrViewIds.size(0) == 0) || (viewsOrViewIds.size(1) == 0)) {
    hasView = false;
  } else {
    boolean_T exitg1;
    c_st.site = &adb_emlrtRSI;
    d_st.site = &bdb_emlrtRSI;
    cend = viewsOrViewIds.size(0) * viewsOrViewIds.size(1);
    hasView = false;
    e_st.site = &cdb_emlrtRSI;
    if (cend > 2147483646) {
      f_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= cend - 1)) {
      if (imageId == viewsOrViewIds[k]) {
        hasView = true;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (hasView) {
    emlrtErrorWithMessageIdR2018a(
        &st, &ad_emlrtRTEI, "vision:invertedImageIndex:imageIdExists",
        "vision:invertedImageIndex:imageIdExists", 2, 6, imageId);
  }
  st.site = &elb_emlrtRSI;
  b_this = BagOfFeatures;
  b_st.site = &slb_emlrtRSI;
  obj = b_this->Encoder;
  c_st.site = &slb_emlrtRSI;
  obj->Normalization.init(c_st, t47_Value);
  if (b_this->CustomFeatureLength != 256.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &bd_emlrtRTEI, "vision:bagOfFeatures:encodeInvalidFeatureLength",
        "vision:bagOfFeatures:encodeInvalidFeatureLength", 4, 6,
        b_this->CustomFeatureLength, 6, 256.0);
  }
  b_st.site = &tlb_emlrtRSI;
  b_this->Encoder->encode(b_st, features.Features, fVector);
  cend = fVector.size(1);
  b_fVector.set_size(&qw_emlrtRTEI, &st, 1, fVector.size(1));
  for (k = 0; k < cend; k++) {
    b_fVector[k] = fVector[k];
  }
  b_st.site = &ulb_emlrtRSI;
  h_sparse(b_st, b_fVector, wordHistograms);
  st.site = &flb_emlrtRSI;
  invertedImageIndex::makeEmptyVisualWords(st, words);
  st.site = &glb_emlrtRSI;
  wordHistograms.spones(st, b_r);
  st.site = &glb_emlrtRSI;
  sum(st, b_r, numImagesPerWord);
  st.site = &hlb_emlrtRSI;
  sum(st, wordHistograms, r1);
  st.site = &hlb_emlrtRSI;
  wordsPerImage = 0.0;
  cend = r1.colidx[1];
  k = r1.colidx[0];
  b_st.site = &tnb_emlrtRSI;
  if ((r1.colidx[0] <= r1.colidx[1] - 1) && (r1.colidx[1] - 1 > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T idx{k}; idx < cend; idx++) {
    wordsPerImage = r1.d[idx - 1];
  }
  hasView = (ImageID.size(0) == 0);
  b = (ImageID.size(1) == 0);
  if (hasView || b) {
    r3.f1.set_size(&vw_emlrtRTEI, &sp, 0, 0);
    ImageLocation.set_size(&ww_emlrtRTEI, &sp, 1);
    ImageLocation[0] = r3;
    st.site = &ilb_emlrtRSI;
    h_sparse(st, varSizeSparseData);
    st.site = &jlb_emlrtRSI;
    varSizeSparseData.vertcat(st, wordHistograms, WordHistograms);
    st.site = &klb_emlrtRSI;
    varSizeSparseData.b_vertcat(st, numImagesPerWord, NumImagesPerWord);
    WordsPerImage.set_size(&xw_emlrtRTEI, &sp, 1);
    WordsPerImage[0] = wordsPerImage;
    ImageWords = words;
    ImageID.set_size(&yw_emlrtRTEI, &sp, 1, 1);
    ImageID[0] = u;
  } else {
    st.site = &llb_emlrtRSI;
    invertedImageIndex::updateImageLocation(st, this, r2);
    ImageLocation.set_size(&rw_emlrtRTEI, &sp, r2.size(0));
    cend = r2.size(0) - 1;
    for (k = 0; k <= cend; k++) {
      ImageLocation[k] = r2[k];
    }
    varSizeSparseData = WordHistograms;
    st.site = &mlb_emlrtRSI;
    varSizeSparseData.c_vertcat(st, wordHistograms, WordHistograms);
    varSizeSparseData = NumImagesPerWord;
    st.site = &nlb_emlrtRSI;
    varSizeSparseData.c_plus(st, numImagesPerWord, NumImagesPerWord);
    k = WordsPerImage.size(0);
    WordsPerImage.set_size(&sw_emlrtRTEI, &sp, k + 1);
    WordsPerImage[k] = wordsPerImage;
    words = ImageWords;
    st.site = &olb_emlrtRSI;
    words.vertcat(st);
    ImageWords = words;
    st.site = &plb_emlrtRSI;
    viewsOrViewIds.set_size(&tw_emlrtRTEI, &st, ImageID.size(0),
                            ImageID.size(1));
    cend = ImageID.size(0) * ImageID.size(1);
    for (k = 0; k < cend; k++) {
      viewsOrViewIds[k] = ImageID[k];
    }
    b_st.site = &kn_emlrtRSI;
    c_st.site = &jj_emlrtRSI;
    if ((viewsOrViewIds.size(0) != 1) &&
        ((viewsOrViewIds.size(0) != 0) && (viewsOrViewIds.size(1) != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((viewsOrViewIds.size(0) != 0) && (viewsOrViewIds.size(1) != 0)) {
      cend = viewsOrViewIds.size(1);
    } else {
      cend = 0;
    }
    ImageID.set_size(&uw_emlrtRTEI, &sp, 1, cend + 1);
    for (k = 0; k < cend; k++) {
      ImageID[ImageID.size(0) * k] = viewsOrViewIds[k];
    }
    ImageID[ImageID.size(0) * cend] = u;
  }
  st.site = &qlb_emlrtRSI;
  updateIndexStatistics(st);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void invertedImageIndex::computeMatchMetric(const emlrtStack &sp,
                                            const array<real_T, 1U> &imageIDs,
                                            const array<real_T, 1U> &words,
                                            const c_sparse &queryFeatures,
                                            array<real_T, 1U> &scores) const
{
  b_sparse b_r;
  b_sparse y;
  c_sparse b_qFeatures;
  c_sparse qFeatures;
  sparse diagInvData;
  sparse iFeatures;
  sparse indexFeatures;
  sparse tf;
  array<real_T, 2U> b_tmp_data;
  array<real_T, 2U> tmp_data;
  array<real_T, 1U> b_this;
  array<real_T, 1U> b_words;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T c_words[2];
  real_T dv[2];
  int32_T colNnz;
  int32_T counts;
  int32_T i;
  int32_T k;
  int32_T nl;
  boolean_T found;
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
  st.site = &txc_emlrtRSI;
  WordHistograms.b_parenReference(st, imageIDs, indexFeatures);
  st.site = &uxc_emlrtRSI;
  indexFeatures.parenReference(st, words, iFeatures);
  st.site = &vxc_emlrtRSI;
  b_st.site = &utc_emlrtRSI;
  c_st.site = &vtc_emlrtRSI;
  counts = queryFeatures.n >> 16;
  colNnz = counts >> 16;
  if (static_cast<int32_T>(static_cast<uint32_T>(queryFeatures.n) & 65535U) >
      MAX_int32_T - (counts << 16)) {
    colNnz++;
  }
  if (colNnz == 0) {
    k = words.size(0);
    b_words.set_size(&wnb_emlrtRTEI, &c_st, words.size(0));
    for (i = 0; i < k; i++) {
      b_words[i] = words[i];
    }
    d_st.site = &wtc_emlrtRSI;
    counts = queryFeatures.n;
    i = b_words.size(0);
    for (k = 0; k < i; k++) {
      if ((!(muDoubleScalarFloor(b_words[k]) == b_words[k])) ||
          muDoubleScalarIsInf(b_words[k]) || (!(b_words[k] > 0.0))) {
        emlrtErrorWithMessageIdR2018a(&d_st, &uc_emlrtRTEI,
                                      "Coder:MATLAB:badsubscript",
                                      "Coder:MATLAB:badsubscript", 0);
      }
      if (!(b_words[k] <= counts)) {
        emlrtErrorWithMessageIdR2018a(&d_st, &vc_emlrtRTEI,
                                      "Coder:builtins:IndexOutOfBounds",
                                      "Coder:builtins:IndexOutOfBounds", 6, 6,
                                      b_words[k], 12, 1, 12, counts);
      }
    }
  } else {
    d_st.site = &xtc_emlrtRSI;
    i = words.size(0);
    for (k = 0; k < i; k++) {
      if ((!(muDoubleScalarFloor(words[k]) == words[k])) ||
          muDoubleScalarIsInf(words[k]) || (!(words[k] > 0.0))) {
        emlrtErrorWithMessageIdR2018a(&d_st, &uc_emlrtRTEI,
                                      "Coder:MATLAB:badsubscript",
                                      "Coder:MATLAB:badsubscript", 0);
      }
    }
  }
  nl = words.size(0);
  dv[0] = 1.0;
  dv[1] = queryFeatures.n;
  c_words[0] = words.size(0);
  c_words[1] = 1.0;
  d_st.site = &cyc_emlrtRSI;
  internal::indexShapeCheck(d_st, dv, c_words);
  d_st.site = &ytc_emlrtRSI;
  qFeatures.n = words.size(0);
  found = (words.size(0) + 1 < 0);
  if (found) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(words.size(0) + 1),
                                &w_emlrtDCI, &d_st);
  }
  qFeatures.d.set_size(&xnb_emlrtRTEI, &c_st, 0);
  qFeatures.rowidx.set_size(&xnb_emlrtRTEI, &c_st, 0);
  k = words.size(0) + 1;
  qFeatures.colidx.set_size(&xnb_emlrtRTEI, &c_st, words.size(0) + 1);
  for (i = 0; i < k; i++) {
    qFeatures.colidx[i] = 0;
  }
  qFeatures.colidx[0] = 1;
  colNnz = 1;
  d_st.site = &dyc_emlrtRSI;
  if (words.size(0) > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  for (int32_T cidx{0}; cidx < nl; cidx++) {
    d_st.site = &auc_emlrtRSI;
    e_st.site = &vbc_emlrtRSI;
    i = static_cast<int32_T>(words[cidx]);
    if ((i < 1) || (i > static_cast<int32_T>(dv[1]))) {
      emlrtErrorWithMessageIdR2018a(&e_st, &ae_emlrtRTEI,
                                    "Coder:MATLAB:ind2sub_IndexOutOfRange",
                                    "Coder:MATLAB:ind2sub_IndexOutOfRange", 0);
    }
    k = b_sparse_locBsearch(queryFeatures.rowidx, 1.0,
                            queryFeatures.colidx[i - 1],
                            queryFeatures.colidx[i], found);
    if (found) {
      i = qFeatures.d.size(0);
      counts = qFeatures.d.size(0) + 1;
      qFeatures.d.set_size(&ynb_emlrtRTEI, &c_st, qFeatures.d.size(0) + 1);
      qFeatures.d[i] = queryFeatures.d[k - 1];
      qFeatures.rowidx.set_size(&ynb_emlrtRTEI, &c_st, counts);
      qFeatures.rowidx[i] = 1;
      colNnz++;
    }
    qFeatures.colidx[cidx + 1] = colNnz;
  }
  if (qFeatures.d.size(0) == 0) {
    qFeatures.d.set_size(&xnb_emlrtRTEI, &c_st, 1);
    qFeatures.d[0] = 0.0;
    qFeatures.rowidx.set_size(&xnb_emlrtRTEI, &c_st, 1);
    qFeatures.rowidx[0] = 0;
  }
  counts = qFeatures.colidx[qFeatures.colidx.size(0) - 1] - 1;
  qFeatures.maxnz = muIntScalarMax_sint32(counts, 1);
  st.site = &wxc_emlrtRSI;
  if (iFeatures.m == 0) {
    tmp_data.set(nullptr, 0, 0);
    b_st.site = &eyc_emlrtRSI;
    h_sparse(b_st, tmp_data, indexFeatures);
  } else {
    b_st.site = &fyc_emlrtRSI;
    b_sum(b_st, iFeatures, b_r);
    b_st.site = &fyc_emlrtRSI;
    b_r.c_plus(b_st, b_words);
    k = b_words.size(0);
    counts = (b_words.size(0) / 2) << 1;
    colNnz = counts - 2;
    for (i = 0; i <= colNnz; i += 2) {
      __m128d r1;
      r1 = _mm_loadu_pd(&b_words[i]);
      _mm_storeu_pd(&b_words[i], _mm_div_pd(_mm_set1_pd(1.0), r1));
    }
    for (i = counts; i < k; i++) {
      b_words[i] = 1.0 / b_words[i];
    }
    b_st.site = &fyc_emlrtRSI;
    spdiags(b_st, b_words, static_cast<real_T>(iFeatures.m),
            static_cast<real_T>(iFeatures.m), indexFeatures);
  }
  if (iFeatures.n == 0) {
    b_tmp_data.set(nullptr, 0, 0);
    b_st.site = &gyc_emlrtRSI;
    h_sparse(b_st, b_tmp_data, diagInvData);
  } else {
    counts =
        InverseDocumentFrequency.size(0) * InverseDocumentFrequency.size(1);
    b_this = InverseDocumentFrequency.reshape(counts);
    b_st.site = &hyc_emlrtRSI;
    spdiags(b_st, b_this, static_cast<real_T>(iFeatures.n),
            static_cast<real_T>(iFeatures.n), diagInvData);
  }
  b_st.site = &iyc_emlrtRSI;
  indexFeatures.mtimes(b_st, iFeatures, tf);
  b_st.site = &jyc_emlrtRSI;
  tf.mtimes(b_st, diagInvData, iFeatures);
  st.site = &xxc_emlrtRSI;
  applyWeighting(st, qFeatures, b_qFeatures);
  st.site = &yxc_emlrtRSI;
  invertedImageIndex::l2NormalizeFeatures(st, iFeatures, indexFeatures);
  st.site = &ayc_emlrtRSI;
  invertedImageIndex::l2NormalizeFeatures(st, b_qFeatures, qFeatures);
  st.site = &byc_emlrtRSI;
  b_st.site = &vwc_emlrtRSI;
  nl = qFeatures.n;
  colNnz = qFeatures.colidx[qFeatures.colidx.size(0) - 1];
  c_st.site = &wwc_emlrtRSI;
  y.init(c_st, qFeatures.n, colNnz - 1);
  if (qFeatures.n != 0) {
    k = y.colidx.size(0);
    for (i = 0; i < k; i++) {
      y.colidx[i] = 0;
    }
    c_st.site = &ywc_emlrtRSI;
    if (colNnz - 1 > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (k = 0; k <= colNnz - 2; k++) {
      y.colidx[qFeatures.rowidx[k]] = y.colidx[qFeatures.rowidx[k]] + 1;
    }
    y.colidx[0] = 1;
    y.colidx[1] = y.colidx[0] + y.colidx[1];
    counts = -1;
    c_st.site = &xwc_emlrtRSI;
    if (qFeatures.n > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (colNnz = 0; colNnz < nl; colNnz++) {
      for (k = qFeatures.colidx[colNnz]; k < qFeatures.colidx[colNnz + 1];
           k++) {
        counts += y.colidx[0];
        y.d[counts] = qFeatures.d[k - 1];
        y.rowidx[counts] = colNnz + 1;
      }
    }
  }
  st.site = &byc_emlrtRSI;
  indexFeatures.mtimes(st, y, b_r);
  st.site = &byc_emlrtRSI;
  b_r.full(st, scores);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void invertedImageIndex::findImagesContainingWords(
    const emlrtStack &sp, const array<real_T, 1U> &words,
    array<real_T, 1U> &imageIDs) const
{
  sparse x;
  array<real_T, 1U> b_id;
  array<real_T, 1U> id;
  array<int32_T, 1U> ii;
  array<int32_T, 1U> jj;
  emlrtStack b_st;
  emlrtStack st;
  int32_T loop_ub;
  int32_T n;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &hxc_emlrtRSI;
  b_st.site = &hxc_emlrtRSI;
  WordHistograms.parenReference(b_st, words, x);
  b_st.site = &vwb_emlrtRSI;
  e_eml_find(b_st, x, ii, jj);
  loop_ub = ii.size(0);
  id.set_size(&snb_emlrtRTEI, &st, ii.size(0));
  for (n = 0; n < loop_ub; n++) {
    id[n] = ii[n];
  }
  st.site = &ixc_emlrtRSI;
  n = ii.size(0);
  if (id.size(0) < 1) {
    n = 1;
  }
  if (id.size(0) > muIntScalarMax_sint32(loop_ub, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &oc_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  st.site = &ixc_emlrtRSI;
  n = ii.size(0);
  b_id = id.reshape(n);
  b_st.site = &tqb_emlrtRSI;
  unique_vector(b_st, b_id, imageIDs);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

invertedImageIndex *invertedImageIndex::init(const emlrtStack &sp,
                                             bagOfFeatures &bag)
{
  invertedImageIndex *this_;
  sparse initialWordsData;
  vision::internal::visualWords iWords;
  array<real_T, 2U> tmp_data;
  cell_wrap_17 b_r;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  this_ = this;
  this_->MatchThreshold = 0.01;
  this_->WordFrequencyRange[0] = 0.01;
  this_->WordFrequencyRange[1] = 0.9;
  st.site = &skb_emlrtRSI;
  if (bag.NumVisualWords == 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &yc_emlrtRTEI,
                                  "vision:bagOfFeatures:emptyBagOfFeatures",
                                  "vision:bagOfFeatures:emptyBagOfFeatures", 0);
  }
  this_->BagOfFeatures = &bag;
  this_->ImageID.set_size(&hw_emlrtRTEI, &sp, 0, 0);
  b_r.f1.set_size(&iw_emlrtRTEI, &sp, 0, 0);
  this_->ImageLocation.set_size(&jw_emlrtRTEI, &sp, 1);
  this_->ImageLocation[0] = b_r;
  tmp_data.set(nullptr, 0, 0);
  st.site = &tkb_emlrtRSI;
  h_sparse(st, tmp_data, initialWordsData);
  this_->WordHistograms = initialWordsData;
  this_->NumImagesPerWord = initialWordsData;
  this_->WordFrequency = initialWordsData;
  st.site = &ukb_emlrtRSI;
  invertedImageIndex::makeEmptyVisualWords(st, iWords);
  this_->ImageWords = iWords;
  this_->WordsPerImage.set_size(&kw_emlrtRTEI, &sp, 0);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return this_;
}

void invertedImageIndex::makeEmptyVisualWords(
    const emlrtStack &sp, vision::internal::visualWords &emptyWords)
{
  vision::internal::visualWordsImpl b_r;
  array<real32_T, 2U> b_loc_data;
  array<real32_T, 2U> loc_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &xkb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &ykb_emlrtRSI;
  c_st.site = &blb_emlrtRSI;
  loc_data.set(nullptr, 0, 2);
  d_st.site = &clb_emlrtRSI;
  validateattributes(d_st, loc_data);
  emptyWords.WordIndex.set_size(&lw_emlrtRTEI, &b_st, 0);
  emptyWords.Location.set_size(&mw_emlrtRTEI, &b_st, 0, 2);
  emptyWords.VocabularySize = 1.0;
  b_st.site = &alb_emlrtRSI;
  c_st.site = &blb_emlrtRSI;
  b_loc_data.set(nullptr, 0, 2);
  d_st.site = &clb_emlrtRSI;
  validateattributes(d_st, b_loc_data);
  emptyWords.Data.set_size(&nw_emlrtRTEI, &st, 1, 1);
  emptyWords.Data[0] = b_r;
  emptyWords.Data.set_size(&ow_emlrtRTEI, &sp, 0, 0);
}

void invertedImageIndex::removeImagesWithLowWordMatches(
    const emlrtStack &sp, array<real_T, 1U> &imageIDs,
    const array<real_T, 1U> &words, real_T threshold) const
{
  b_sparse b_r;
  b_sparse numMatches;
  e_sparse b_s;
  e_sparse s;
  g_sparse imagesToKeep;
  sparse b_this;
  sparse binaryHist;
  array<real_T, 1U> b_imageIDs;
  array<uint32_T, 1U> imKeepIndices;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T b_imagesToKeep[2];
  int32_T highOrderA{0};
  int32_T i;
  int32_T i1;
  int32_T loop_ub_tmp;
  int32_T numalloc;
  boolean_T found;
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
  st.site = &jxc_emlrtRSI;
  b_st.site = &jxc_emlrtRSI;
  WordHistograms.parenReference(b_st, imageIDs, words, b_this);
  b_st.site = &pmb_emlrtRSI;
  c_st.site = &yhb_emlrtRSI;
  d_st.site = &eib_emlrtRSI;
  e_st.site = &rcb_emlrtRSI;
  if (b_this.m < 0) {
    emlrtErrorWithMessageIdR2018a(&d_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (b_this.m >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  d_st.site = &dib_emlrtRSI;
  e_st.site = &rcb_emlrtRSI;
  if (b_this.n < 0) {
    emlrtErrorWithMessageIdR2018a(&d_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (b_this.n >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  binaryHist.m = b_this.m;
  binaryHist.n = b_this.n;
  d_st.site = &cib_emlrtRSI;
  e_st.site = &rcb_emlrtRSI;
  if (b_this.maxnz < 0) {
    emlrtErrorWithMessageIdR2018a(&d_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (b_this.maxnz >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  numalloc = muIntScalarMax_sint32(b_this.maxnz, 1);
  binaryHist.d.set_size(&idc_emlrtRTEI, &c_st, numalloc);
  for (i = 0; i < numalloc; i++) {
    binaryHist.d[i] = 0.0;
  }
  binaryHist.maxnz = numalloc;
  binaryHist.colidx.set_size(&idc_emlrtRTEI, &c_st, b_this.n + 1);
  loop_ub_tmp = b_this.n;
  for (i = 0; i <= loop_ub_tmp; i++) {
    binaryHist.colidx[i] = 0;
  }
  binaryHist.colidx[0] = 1;
  binaryHist.rowidx.set_size(&idc_emlrtRTEI, &c_st, numalloc);
  for (i = 0; i < numalloc; i++) {
    binaryHist.rowidx[i] = 0;
  }
  d_st.site = &bib_emlrtRSI;
  for (numalloc = 0; numalloc < loop_ub_tmp; numalloc++) {
    binaryHist.colidx[numalloc + 1] = 1;
  }
  d_st.site = &aib_emlrtRSI;
  binaryHist.fillIn();
  loop_ub_tmp = b_this.rowidx.size(0);
  binaryHist.rowidx.set_size(&idc_emlrtRTEI, &st, b_this.rowidx.size(0));
  for (i = 0; i < loop_ub_tmp; i++) {
    binaryHist.rowidx[i] = b_this.rowidx[i];
  }
  loop_ub_tmp = b_this.colidx.size(0);
  binaryHist.colidx.set_size(&idc_emlrtRTEI, &st, b_this.colidx.size(0));
  for (i = 0; i < loop_ub_tmp; i++) {
    binaryHist.colidx[i] = b_this.colidx[i];
  }
  loop_ub_tmp = b_this.colidx[b_this.colidx.size(0) - 1] - 1;
  if (loop_ub_tmp < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(loop_ub_tmp), &wd_emlrtDCI,
                                &st);
  }
  binaryHist.d.set_size(&idc_emlrtRTEI, &st, loop_ub_tmp);
  for (i = 0; i < loop_ub_tmp; i++) {
    binaryHist.d[i] = 1.0;
  }
  st.site = &kxc_emlrtRSI;
  sum(st, binaryHist, numMatches);
  st.site = &lxc_emlrtRSI;
  numMatches.b_rdivide(st, static_cast<real_T>(words.size(0)), b_r);
  st.site = &lxc_emlrtRSI;
  b_r.ge(st, threshold, imagesToKeep);
  st.site = &mxc_emlrtRSI;
  imKeepIndices.set_size(&jdc_emlrtRTEI, &st, 0);
  b_st.site = &qxc_emlrtRSI;
  numalloc = imagesToKeep.m >> 16;
  loop_ub_tmp = numalloc >> 16;
  i = static_cast<int32_T>(static_cast<uint32_T>(imagesToKeep.m) & 65535U);
  if (i > MAX_int32_T - (numalloc << 16)) {
    loop_ub_tmp++;
  }
  if (loop_ub_tmp != 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &af_emlrtRTEI,
                                  "Coder:toolbox:SparseNumelTooBig",
                                  "Coder:toolbox:SparseNumelTooBig", 0);
  }
  i1 = imagesToKeep.m;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, static_cast<real_T>(imagesToKeep.m),
                                mxDOUBLE_CLASS, imagesToKeep.m, &oh_emlrtRTEI,
                                &st);
  if (imagesToKeep.m - 1 >= 0) {
    highOrderA = numalloc;
    b_imagesToKeep[0] = imagesToKeep.m;
    b_imagesToKeep[1] = 1.0;
  }
  for (int32_T b_i{0}; b_i < i1; b_i++) {
    int32_T idx;
    b_st.site = &rxc_emlrtRSI;
    c_st.site = &utc_emlrtRSI;
    d_st.site = &vtc_emlrtRSI;
    loop_ub_tmp = highOrderA >> 16;
    if (i > MAX_int32_T - (highOrderA << 16)) {
      loop_ub_tmp++;
    }
    if (loop_ub_tmp == 0) {
      e_st.site = &wtc_emlrtRSI;
      numalloc = imagesToKeep.m;
      if (!(static_cast<real_T>(static_cast<uint32_T>(b_i) + 1U) <= numalloc)) {
        emlrtErrorWithMessageIdR2018a(
            &e_st, &vc_emlrtRTEI, "Coder:builtins:IndexOutOfBounds",
            "Coder:builtins:IndexOutOfBounds", 6, 6,
            static_cast<real_T>(static_cast<uint32_T>(b_i) + 1U), 12, 1, 12,
            numalloc);
      }
    } else {
      e_st.site = &xtc_emlrtRSI;
    }
    e_st.site = &ytc_emlrtRSI;
    s.colidx.set_size(&enb_emlrtRTEI, &d_st, 2);
    s.colidx[1] = 1;
    e_st.site = &auc_emlrtRSI;
    f_st.site = &vbc_emlrtRSI;
    numalloc = internal::ind2sub(f_st, b_imagesToKeep, b_i + 1, loop_ub_tmp);
    idx =
        b_sparse_locBsearch(imagesToKeep.rowidx, static_cast<real_T>(numalloc),
                            imagesToKeep.colidx[loop_ub_tmp - 1],
                            imagesToKeep.colidx[loop_ub_tmp], found);
    if (found) {
      s.d.set_size(&enb_emlrtRTEI, &d_st, 1);
      s.d[0] = imagesToKeep.d[idx - 1];
      s.colidx[1] = 2;
    } else {
      s.d.set_size(&enb_emlrtRTEI, &d_st, 1);
      s.d[0] = false;
    }
    b_st.site = &rxc_emlrtRSI;
    c_st.site = &sxc_emlrtRSI;
    if (s.colidx[1] - 1 > 0) {
      found = s.d[0];
    } else {
      found = false;
    }
    d_st.site = &cuc_emlrtRSI;
    i_sparse(d_st, found, b_s);
    b_st.site = &rxc_emlrtRSI;
    found = false;
    numalloc = b_s.colidx[1];
    loop_ub_tmp = b_s.colidx[0];
    c_st.site = &tnb_emlrtRSI;
    if ((b_s.colidx[0] <= b_s.colidx[1] - 1) &&
        (b_s.colidx[1] - 1 > 2147483646)) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (idx = loop_ub_tmp; idx < numalloc; idx++) {
      found = b_s.d[0];
    }
    if (found) {
      numalloc = imKeepIndices.size(0);
      imKeepIndices.set_size(&kdc_emlrtRTEI, &st, imKeepIndices.size(0) + 1);
      imKeepIndices[numalloc] = static_cast<uint32_T>(b_i) + 1U;
    }
  }
  numalloc = imageIDs.size(0);
  loop_ub_tmp = imKeepIndices.size(0);
  b_imageIDs.set_size(&ldc_emlrtRTEI, &sp, imKeepIndices.size(0));
  for (i = 0; i < loop_ub_tmp; i++) {
    if ((static_cast<int32_T>(imKeepIndices[i]) < 1) ||
        (static_cast<int32_T>(imKeepIndices[i]) > numalloc)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(imKeepIndices[i]), 1,
                                    numalloc, &lkb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    b_imageIDs[i] = imageIDs[static_cast<int32_T>(imKeepIndices[i]) - 1];
  }
  loop_ub_tmp = b_imageIDs.size(0);
  imageIDs.set_size(&mdc_emlrtRTEI, &sp, b_imageIDs.size(0));
  for (i = 0; i < loop_ub_tmp; i++) {
    imageIDs[i] = b_imageIDs[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void invertedImageIndex::removeStopWords(const emlrtStack &sp,
                                         const c_sparse &queryHist,
                                         const real_T freqRange[2],
                                         array<real_T, 1U> &words) const
{
  b_sparse y;
  f_sparse b_s;
  f_sparse s;
  f_sparse stopWordFilter;
  array<int32_T, 1U> ii;
  array<boolean_T, 2U> S;
  array<boolean_T, 1U> tmpd;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T b;
  int32_T col;
  int32_T counts;
  int32_T i;
  int32_T idx;
  int32_T nl;
  int32_T varargout_1_tmp;
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
  st.site = &mwc_emlrtRSI;
  b_st.site = &pwc_emlrtRSI;
  nl = WordFrequency.m;
  varargout_1_tmp = WordFrequency.n;
  if (!(freqRange[0] <= 0.0)) {
    c_st.site = &tob_emlrtRSI;
    d_st.site = &wob_emlrtRSI;
    b = WordFrequency.colidx[WordFrequency.colidx.size(0) - 1] - 1;
    if (b < 1) {
      counts = 0;
    } else {
      counts = WordFrequency.colidx[WordFrequency.colidx.size(0) - 1] - 1;
    }
    tmpd.set_size(&ay_emlrtRTEI, &d_st, counts);
    for (i = 0; i < counts; i++) {
      tmpd[i] = (WordFrequency.d[i] >= freqRange[0]);
    }
    if (tmpd.size(0) !=
        WordFrequency.colidx[WordFrequency.colidx.size(0) - 1] - 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &jd_emlrtRTEI, "MATLAB:samelen",
                                    "MATLAB:samelen", 0);
    }
    e_st.site = &xob_emlrtRSI;
    sparse::spallocLike(
        e_st, WordFrequency.m, WordFrequency.n,
        WordFrequency.colidx[WordFrequency.colidx.size(0) - 1] - 1, s);
    if (b < 1) {
      counts = 1;
    } else {
      counts = WordFrequency.colidx[WordFrequency.colidx.size(0) - 1];
    }
    for (i = 0; i <= counts - 2; i++) {
      s.rowidx[i] = WordFrequency.rowidx[i];
    }
    s.colidx.set_size(&vnb_emlrtRTEI, &d_st, WordFrequency.colidx.size(0));
    counts = WordFrequency.colidx.size(0);
    for (i = 0; i < counts; i++) {
      s.colidx[i] = WordFrequency.colidx[i];
    }
    e_st.site = &yob_emlrtRSI;
    if (WordFrequency.colidx[WordFrequency.colidx.size(0) - 1] - 1 >
        2147483646) {
      f_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }
    for (counts = 0; counts < b; counts++) {
      s.d[counts] = tmpd[counts];
    }
    e_st.site = &apb_emlrtRSI;
    s.b_fillIn();
  } else {
    if (nl < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(nl), &td_emlrtDCI, &b_st);
    }
    if (varargout_1_tmp < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(varargout_1_tmp),
                                  &ud_emlrtDCI, &b_st);
    }
    S.set_size(&unb_emlrtRTEI, &b_st, nl, varargout_1_tmp);
    counts = nl * varargout_1_tmp;
    for (i = 0; i < counts; i++) {
      S[i] = true;
    }
    c_st.site = &qwc_emlrtRSI;
    d_st.site = &bpb_emlrtRSI;
    if (varargout_1_tmp > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (col = 0; col < varargout_1_tmp; col++) {
      counts = WordFrequency.colidx[col];
      b = WordFrequency.colidx[col + 1];
      d_st.site = &cpb_emlrtRSI;
      if ((counts <= b - 1) && (b - 1 > 2147483646)) {
        e_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(e_st);
      }
      for (idx = counts; idx < b; idx++) {
        S[(WordFrequency.rowidx[idx - 1] + S.size(0) * col) - 1] =
            (WordFrequency.d[idx - 1] >= freqRange[0]);
      }
    }
    c_st.site = &rwc_emlrtRSI;
    j_sparse(c_st, S, s);
  }
  st.site = &nwc_emlrtRSI;
  b_st.site = &swc_emlrtRSI;
  if (!(freqRange[1] >= 0.0)) {
    c_st.site = &tob_emlrtRSI;
    d_st.site = &wob_emlrtRSI;
    b = WordFrequency.colidx[WordFrequency.colidx.size(0) - 1] - 1;
    if (b < 1) {
      counts = 0;
    } else {
      counts = WordFrequency.colidx[WordFrequency.colidx.size(0) - 1] - 1;
    }
    tmpd.set_size(&ay_emlrtRTEI, &d_st, counts);
    for (i = 0; i < counts; i++) {
      tmpd[i] = (WordFrequency.d[i] <= freqRange[1]);
    }
    if (tmpd.size(0) !=
        WordFrequency.colidx[WordFrequency.colidx.size(0) - 1] - 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &jd_emlrtRTEI, "MATLAB:samelen",
                                    "MATLAB:samelen", 0);
    }
    e_st.site = &xob_emlrtRSI;
    sparse::spallocLike(
        e_st, WordFrequency.m, WordFrequency.n,
        WordFrequency.colidx[WordFrequency.colidx.size(0) - 1] - 1, b_s);
    if (b < 1) {
      counts = 1;
    } else {
      counts = WordFrequency.colidx[WordFrequency.colidx.size(0) - 1];
    }
    for (i = 0; i <= counts - 2; i++) {
      b_s.rowidx[i] = WordFrequency.rowidx[i];
    }
    b_s.colidx.set_size(&gdc_emlrtRTEI, &d_st, WordFrequency.colidx.size(0));
    counts = WordFrequency.colidx.size(0);
    for (i = 0; i < counts; i++) {
      b_s.colidx[i] = WordFrequency.colidx[i];
    }
    e_st.site = &yob_emlrtRSI;
    if (WordFrequency.colidx[WordFrequency.colidx.size(0) - 1] - 1 >
        2147483646) {
      f_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }
    for (counts = 0; counts < b; counts++) {
      b_s.d[counts] = tmpd[counts];
    }
    e_st.site = &apb_emlrtRSI;
    b_s.b_fillIn();
  } else {
    if (nl < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(nl), &td_emlrtDCI, &b_st);
    }
    if (varargout_1_tmp < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(varargout_1_tmp),
                                  &ud_emlrtDCI, &b_st);
    }
    S.set_size(&unb_emlrtRTEI, &b_st, nl, varargout_1_tmp);
    counts = nl * varargout_1_tmp;
    for (i = 0; i < counts; i++) {
      S[i] = true;
    }
    c_st.site = &qwc_emlrtRSI;
    d_st.site = &bpb_emlrtRSI;
    if (varargout_1_tmp > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (col = 0; col < varargout_1_tmp; col++) {
      counts = WordFrequency.colidx[col];
      b = WordFrequency.colidx[col + 1];
      d_st.site = &cpb_emlrtRSI;
      if ((counts <= b - 1) && (b - 1 > 2147483646)) {
        e_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(e_st);
      }
      for (idx = counts; idx < b; idx++) {
        S[(WordFrequency.rowidx[idx - 1] + S.size(0) * col) - 1] =
            (WordFrequency.d[idx - 1] <= freqRange[1]);
      }
    }
    c_st.site = &rwc_emlrtRSI;
    j_sparse(c_st, S, b_s);
  }
  st.site = &mwc_emlrtRSI;
  s.h_and(st, b_s, stopWordFilter);
  st.site = &owc_emlrtRSI;
  b_st.site = &owc_emlrtRSI;
  c_st.site = &vwc_emlrtRSI;
  nl = queryHist.n;
  b = queryHist.colidx[queryHist.colidx.size(0) - 1];
  d_st.site = &wwc_emlrtRSI;
  y.init(d_st, queryHist.n, b - 1);
  counts = y.colidx.size(0);
  for (i = 0; i < counts; i++) {
    y.colidx[i] = 0;
  }
  d_st.site = &ywc_emlrtRSI;
  if (b - 1 > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  for (counts = 0; counts <= b - 2; counts++) {
    y.colidx[queryHist.rowidx[counts]] = y.colidx[queryHist.rowidx[counts]] + 1;
  }
  y.colidx[0] = 1;
  y.colidx[1] = y.colidx[0] + y.colidx[1];
  counts = -1;
  d_st.site = &xwc_emlrtRSI;
  if (queryHist.n > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  for (b = 0; b < nl; b++) {
    for (idx = queryHist.colidx[b]; idx < queryHist.colidx[b + 1]; idx++) {
      counts += y.colidx[0];
      y.d[counts] = queryHist.d[idx - 1];
      y.rowidx[counts] = b + 1;
    }
  }
  b_st.site = &owc_emlrtRSI;
  stopWordFilter.ctranspose(b_st, b_s);
  b_st.site = &owc_emlrtRSI;
  y.h_and(b_st, b_s, s);
  b_st.site = &aq_emlrtRSI;
  c_st.site = &cq_emlrtRSI;
  idx = 0;
  i = s.colidx[s.colidx.size(0) - 1] - 1;
  if (i < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(i), &vd_emlrtDCI, &c_st);
  }
  ii.set_size(&wp_emlrtRTEI, &c_st, i);
  col = 1;
  while (idx < i) {
    if (idx == s.colidx[col] - 1) {
      col++;
    } else {
      idx++;
      ii[idx - 1] = (col - 1) * s.m + s.rowidx[idx - 1];
    }
  }
  if (idx > i) {
    emlrtErrorWithMessageIdR2018a(&c_st, &lb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (i == 1) {
    if (idx == 0) {
      ii.set_size(&cs_emlrtRTEI, &c_st, 0);
    }
  } else {
    int32_T b_iv[2];
    b_iv[0] = 1;
    b_iv[1] = idx;
    d_st.site = &eq_emlrtRSI;
    internal::indexShapeCheck(d_st, ii.size(0), b_iv);
    ii.set_size(&cs_emlrtRTEI, &c_st, idx);
  }
  if ((s.m == 1) && (ii.size(0) != 1) && (s.n >= 2)) {
    c_st.site = &bq_emlrtRSI;
    internal::d_warning(c_st);
  }
  counts = ii.size(0);
  words.set_size(&hdc_emlrtRTEI, &st, ii.size(0));
  for (i = 0; i < counts; i++) {
    words[i] = ii[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (invertedImageIndex.cpp)
