//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// worldpointset.cpp
//
// Code generation for function 'worldpointset'
//

// Include files
#include "worldpointset.h"
#include "any1.h"
#include "bigProduct.h"
#include "combineVectorElements.h"
#include "div.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_setop.h"
#include "find.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "helperVisualSLAMCodegen_mexutil.h"
#include "ind2sub.h"
#include "indexShapeCheck.h"
#include "ismember.h"
#include "locBsearch.h"
#include "mean.h"
#include "norm.h"
#include "rigidtform3d.h"
#include "rigidtform3dImpl.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "sparse1.h"
#include "sumMatrixIncludeNaN.h"
#include "unaryMinOrMax.h"
#include "unique.h"
#include "validatenrows.h"
#include "vecnorm.h"
#include "warning.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "cvstCG_ComputeMetric.h"
#include "mwmathutil.h"
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo yj_emlrtRSI{
    53,                 // lineNo
    "sumMatrixColumns", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" // pathName
};

static emlrtRSInfo pt_emlrtRSI{
    50,                 // lineNo
    "sumMatrixColumns", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" // pathName
};

static emlrtRSInfo pcb_emlrtRSI{
    187,                           // lineNo
    "worldpointset/worldpointset", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo hhb_emlrtRSI{
    303,                            // lineNo
    "worldpointset/addWorldPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo ihb_emlrtRSI{
    299,                            // lineNo
    "worldpointset/addWorldPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo jhb_emlrtRSI{
    274,                            // lineNo
    "worldpointset/addWorldPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo khb_emlrtRSI{
    269,                            // lineNo
    "worldpointset/addWorldPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo lhb_emlrtRSI{
    1343,                             // lineNo
    "worldpointset/checkWorldPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo mhb_emlrtRSI{
    1355,                             // lineNo
    "worldpointset/checkWorldPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo gib_emlrtRSI{
    483,                                // lineNo
    "worldpointset/addCorrespondences", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo hib_emlrtRSI{
    481,                                // lineNo
    "worldpointset/addCorrespondences", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo iib_emlrtRSI{
    480,                                // lineNo
    "worldpointset/addCorrespondences", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo jib_emlrtRSI{
    466,                                // lineNo
    "worldpointset/addCorrespondences", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo kib_emlrtRSI{
    464,                                // lineNo
    "worldpointset/addCorrespondences", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo lib_emlrtRSI{
    462,                                // lineNo
    "worldpointset/addCorrespondences", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo mib_emlrtRSI{
    461,                                // lineNo
    "worldpointset/addCorrespondences", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo nib_emlrtRSI{
    459,                                // lineNo
    "worldpointset/addCorrespondences", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo oib_emlrtRSI{
    458,                                // lineNo
    "worldpointset/addCorrespondences", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo pib_emlrtRSI{
    1215,                                // lineNo
    "worldpointset/pointIdOrPointIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo qib_emlrtRSI{
    1260,                          // lineNo
    "worldpointset/checkPointIds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo rib_emlrtRSI{
    1258,                          // lineNo
    "worldpointset/checkPointIds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo sib_emlrtRSI{
    1257,                          // lineNo
    "worldpointset/checkPointIds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo tib_emlrtRSI{
    1362,                             // lineNo
    "worldpointset/validatePointIds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo vib_emlrtRSI{
    37,       // lineNo
    "unique", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pathName
};

static emlrtRSInfo wib_emlrtRSI{
    303,           // lineNo
    "unique_rows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pathName
};

static emlrtRSInfo xib_emlrtRSI{
    321,           // lineNo
    "unique_rows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pathName
};

static emlrtRSInfo yib_emlrtRSI{
    334,           // lineNo
    "unique_rows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pathName
};

static emlrtRSInfo djb_emlrtRSI{
    1368,                              // lineNo
    "worldpointset/checkPointIndices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo ejb_emlrtRSI{
    28,           // lineNo
    "validatele", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatele.m" // pathName
};

static emlrtRSInfo fjb_emlrtRSI{
    17,              // lineNo
    "local_num2str", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\private\\local_num2str.m" // pathName
};

static emlrtRSInfo gjb_emlrtRSI{
    15,        // lineNo
    "num2str", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\num2str.m" // pathName
};

static emlrtRSInfo hjb_emlrtRSI{
    1375,                                // lineNo
    "worldpointset/checkFeatureIndices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo qkb_emlrtRSI{
    476,                                // lineNo
    "worldpointset/addCorrespondences", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo dcc_emlrtRSI{
    416,                               // lineNo
    "worldpointset/updateWorldPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo ecc_emlrtRSI{
    417,                               // lineNo
    "worldpointset/updateWorldPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo fcc_emlrtRSI{
    418,                               // lineNo
    "worldpointset/updateWorldPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo gcc_emlrtRSI{
    1353,                             // lineNo
    "worldpointset/checkWorldPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo hcc_emlrtRSI{
    724,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo icc_emlrtRSI{
    716,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo jcc_emlrtRSI{
    713,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo kcc_emlrtRSI{
    710,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo lcc_emlrtRSI{
    702,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo mcc_emlrtRSI{
    693,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo ncc_emlrtRSI{
    691,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo occ_emlrtRSI{
    684,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo pcc_emlrtRSI{
    681,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo qcc_emlrtRSI{
    677,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo rcc_emlrtRSI{
    676,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo scc_emlrtRSI{
    674,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo tcc_emlrtRSI{
    669,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo ucc_emlrtRSI{
    664,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo vcc_emlrtRSI{
    659,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo wcc_emlrtRSI{
    651,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo xcc_emlrtRSI{
    650,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo ycc_emlrtRSI{
    649,                                      // lineNo
    "worldpointset/updateLimitsAndDirection", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo adc_emlrtRSI{
    1389,                           // lineNo
    "worldpointset/checkViewTable", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo bdc_emlrtRSI{
    1402,                           // lineNo
    "worldpointset/checkViewTable", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo cdc_emlrtRSI{
    1405,                           // lineNo
    "worldpointset/checkViewTable", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo ddc_emlrtRSI{
    1286,                         // lineNo
    "worldpointset/checkViewIds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo gdc_emlrtRSI{
    1417,                               // lineNo
    "worldpointset/checkFeaturesArray", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo hdc_emlrtRSI{
    980,                                   // lineNo
    "worldpointset/findViewsOfWorldPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo idc_emlrtRSI{
    982,                                   // lineNo
    "worldpointset/findViewsOfWorldPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo jdc_emlrtRSI{
    999,                                   // lineNo
    "worldpointset/findViewsOfWorldPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo kdc_emlrtRSI{
    1001,                                  // lineNo
    "worldpointset/findViewsOfWorldPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo ldc_emlrtRSI{
    1002,                                  // lineNo
    "worldpointset/findViewsOfWorldPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo mdc_emlrtRSI{
    1005,                                  // lineNo
    "worldpointset/findViewsOfWorldPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo ndc_emlrtRSI{
    1160,                                        // lineNo
    "worldpointset/findViewsOfSingleWorldPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo odc_emlrtRSI{
    1179,                                        // lineNo
    "worldpointset/findViewsOfSingleWorldPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo pdc_emlrtRSI{
    1178,                                        // lineNo
    "worldpointset/findViewsOfSingleWorldPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo qdc_emlrtRSI{
    1181,                                        // lineNo
    "worldpointset/findViewsOfSingleWorldPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo udc_emlrtRSI{
    31,     // lineNo
    "find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo vdc_emlrtRSI{
    1227,                             // lineNo
    "worldpointset/viewIndex2ViewId", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo wdc_emlrtRSI{
    1304,                                        // lineNo
    "worldpointset/checkMissingViewInViewTable", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo xdc_emlrtRSI{
    1315,                                        // lineNo
    "worldpointset/checkMissingViewInViewTable", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo cec_emlrtRSI{
    856,                                      // lineNo
    "worldpointset/updateRepresentativeView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo dec_emlrtRSI{
    841,                                      // lineNo
    "worldpointset/updateRepresentativeView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo eec_emlrtRSI{
    825,                                      // lineNo
    "worldpointset/updateRepresentativeView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo fec_emlrtRSI{
    823,                                      // lineNo
    "worldpointset/updateRepresentativeView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo gec_emlrtRSI{
    815,                                      // lineNo
    "worldpointset/updateRepresentativeView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo hec_emlrtRSI{
    812,                                      // lineNo
    "worldpointset/updateRepresentativeView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo iec_emlrtRSI{
    808,                                      // lineNo
    "worldpointset/updateRepresentativeView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo jec_emlrtRSI{
    807,                                      // lineNo
    "worldpointset/updateRepresentativeView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo kec_emlrtRSI{
    805,                                      // lineNo
    "worldpointset/updateRepresentativeView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo lec_emlrtRSI{
    800,                                      // lineNo
    "worldpointset/updateRepresentativeView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo mec_emlrtRSI{
    782,                                      // lineNo
    "worldpointset/updateRepresentativeView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo nec_emlrtRSI{
    781,                                      // lineNo
    "worldpointset/updateRepresentativeView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo oec_emlrtRSI{
    780,                                      // lineNo
    "worldpointset/updateRepresentativeView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo pec_emlrtRSI{
    1245,                              // lineNo
    "worldpointset/findMedoidFeature", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo qec_emlrtRSI{
    1247,                              // lineNo
    "worldpointset/findMedoidFeature", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo vfc_emlrtRSI{
    1298,                                 // lineNo
    "worldpointset/checkIfViewIsMissing", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo wfc_emlrtRSI{
    1201,                                        // lineNo
    "worldpointset/findWorldPointsInSingleView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo xfc_emlrtRSI{
    1200,                                        // lineNo
    "worldpointset/findWorldPointsInSingleView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo mpc_emlrtRSI{
    460,                                // lineNo
    "worldpointset/addCorrespondences", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo npc_emlrtRSI{
    1292,                        // lineNo
    "worldpointset/checkViewId", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo lsc_emlrtRSI{
    309,                            // lineNo
    "worldpointset/addWorldPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo msc_emlrtRSI{
    308,                            // lineNo
    "worldpointset/addWorldPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo nsc_emlrtRSI{
    305,                            // lineNo
    "worldpointset/addWorldPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo mtc_emlrtRSI{
    1123,                                 // lineNo
    "worldpointset/findVisibilityOfView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo ntc_emlrtRSI{
    1132,                                 // lineNo
    "worldpointset/findVisibilityOfView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo otc_emlrtRSI{
    1135,                                 // lineNo
    "worldpointset/findVisibilityOfView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo ptc_emlrtRSI{
    1139,                                 // lineNo
    "worldpointset/findVisibilityOfView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo qtc_emlrtRSI{
    1140,                                 // lineNo
    "worldpointset/findVisibilityOfView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo rtc_emlrtRSI{
    1143,                                 // lineNo
    "worldpointset/findVisibilityOfView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo stc_emlrtRSI{
    1144,                                 // lineNo
    "worldpointset/findVisibilityOfView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo ttc_emlrtRSI{
    1145,                                 // lineNo
    "worldpointset/findVisibilityOfView", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pathName
};

static emlrtRSInfo buc_emlrtRSI{
    327,         // lineNo
    "sparse/ne", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRTEInfo nc_emlrtRTEI{
    1261,                          // lineNo
    13,                            // colNo
    "worldpointset/checkPointIds", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo pc_emlrtRTEI{
    331,           // lineNo
    1,             // colNo
    "unique_rows", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pName
};

static emlrtRTEInfo rc_emlrtRTEI{
    28,           // lineNo
    27,           // colNo
    "validatele", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatele.m" // pName
};

static emlrtRTEInfo sc_emlrtRTEI{
    10,              // lineNo
    23,              // colNo
    "validatenumel", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatenumel.m" // pName
};

static emlrtBCInfo xm_emlrtBCI{
    -1,                                    // iFirst
    -1,                                    // iLast
    1006,                                  // lineNo
    42,                                    // colNo
    "",                                    // aName
    "worldpointset/findViewsOfWorldPoint", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo ym_emlrtBCI{
    -1,                                    // iFirst
    -1,                                    // iLast
    1007,                                  // lineNo
    25,                                    // colNo
    "",                                    // aName
    "worldpointset/findViewsOfWorldPoint", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo an_emlrtBCI{
    -1,                                    // iFirst
    -1,                                    // iLast
    1008,                                  // lineNo
    25,                                    // colNo
    "",                                    // aName
    "worldpointset/findViewsOfWorldPoint", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo bn_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    1175,                                        // lineNo
    43,                                          // colNo
    "",                                          // aName
    "worldpointset/findViewsOfSingleWorldPoint", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo cn_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    1179,                                        // lineNo
    69,                                          // colNo
    "",                                          // aName
    "worldpointset/findViewsOfSingleWorldPoint", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo dn_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    1227,                             // lineNo
    38,                               // colNo
    "",                               // aName
    "worldpointset/viewIndex2ViewId", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo en_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    1187,                                        // lineNo
    25,                                          // colNo
    "",                                          // aName
    "worldpointset/findViewsOfSingleWorldPoint", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo fn_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    1188,                                        // lineNo
    25,                                          // colNo
    "",                                          // aName
    "worldpointset/findViewsOfSingleWorldPoint", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo gn_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    1316,                                        // lineNo
    53,                                          // colNo
    "",                                          // aName
    "worldpointset/checkMissingViewInViewTable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo mq_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    1117,                                 // lineNo
    40,                                   // colNo
    "",                                   // aName
    "worldpointset/findVisibilityOfView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo ju_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    1135,                                 // lineNo
    91,                                   // colNo
    "",                                   // aName
    "worldpointset/findVisibilityOfView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo gy_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    1423,                               // lineNo
    39,                                 // colNo
    "",                                 // aName
    "worldpointset/checkFeaturesArray", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtECInfo re_emlrtECI{
    -1,                                // nDims
    421,                               // lineNo
    13,                                // colNo
    "worldpointset/updateWorldPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtDCInfo wc_emlrtDCI{
    421,                               // lineNo
    29,                                // colNo
    "worldpointset/updateWorldPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    1 // checkKind
};

static emlrtBCInfo meb_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    421,                               // lineNo
    29,                                // colNo
    "",                                // aName
    "worldpointset/updateWorldPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo neb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    707,                                      // lineNo
    95,                                       // colNo
    "",                                       // aName
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo oeb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    682,                                      // lineNo
    75,                                       // colNo
    "",                                       // aName
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo peb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    685,                                      // lineNo
    74,                                       // colNo
    "",                                       // aName
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo qeb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    682,                                      // lineNo
    46,                                       // colNo
    "",                                       // aName
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtECInfo se_emlrtECI{
    -1,                                       // nDims
    682,                                      // lineNo
    25,                                       // colNo
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtBCInfo reb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    685,                                      // lineNo
    47,                                       // colNo
    "",                                       // aName
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtECInfo te_emlrtECI{
    -1,                                       // nDims
    685,                                      // lineNo
    25,                                       // colNo
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtBCInfo seb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    704,                                      // lineNo
    49,                                       // colNo
    "",                                       // aName
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtDCInfo xc_emlrtDCI{
    707,                                      // lineNo
    60,                                       // colNo
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    1 // checkKind
};

static emlrtBCInfo teb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    707,                                      // lineNo
    60,                                       // colNo
    "",                                       // aName
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo ueb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    664,                                      // lineNo
    38,                                       // colNo
    "",                                       // aName
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtRTEInfo bh_emlrtRTEI{
    713,                                      // lineNo
    88,                                       // colNo
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtBCInfo veb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    723,                                      // lineNo
    42,                                       // colNo
    "",                                       // aName
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtECInfo ue_emlrtECI{
    -1,                                       // nDims
    723,                                      // lineNo
    21,                                       // colNo
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtBCInfo web_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    724,                                      // lineNo
    40,                                       // colNo
    "",                                       // aName
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtECInfo ve_emlrtECI{
    -1,                                       // nDims
    724,                                      // lineNo
    21,                                       // colNo
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtBCInfo xeb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    696,                                      // lineNo
    60,                                       // colNo
    "",                                       // aName
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo yeb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    847,                                      // lineNo
    63,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo afb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    830,                                      // lineNo
    66,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo bfb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    829,                                      // lineNo
    67,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo cfb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    851,                                      // lineNo
    57,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo dfb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    835,                                      // lineNo
    45,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtECInfo we_emlrtECI{
    -1,                                       // nDims
    816,                                      // lineNo
    25,                                       // colNo
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtBCInfo efb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    816,                                      // lineNo
    59,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtECInfo xe_emlrtECI{
    -1,                                       // nDims
    813,                                      // lineNo
    25,                                       // colNo
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtBCInfo ffb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    813,                                      // lineNo
    53,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo gfb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    816,                                      // lineNo
    98,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo hfb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    813,                                      // lineNo
    86,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtDCInfo yc_emlrtDCI{
    810,                                      // lineNo
    72,                                       // colNo
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    1 // checkKind
};

static emlrtDCInfo ad_emlrtDCI{
    810,                                      // lineNo
    72,                                       // colNo
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    4 // checkKind
};

static emlrtBCInfo ifb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    837,                                      // lineNo
    89,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo jfb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    837,                                      // lineNo
    46,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtDCInfo bd_emlrtDCI{
    837,                                      // lineNo
    46,                                       // colNo
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    1 // checkKind
};

static emlrtBCInfo kfb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    838,                                      // lineNo
    96,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo lfb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    838,                                      // lineNo
    52,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo mfb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    847,                                      // lineNo
    66,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo nfb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    858,                                      // lineNo
    89,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo ofb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    858,                                      // lineNo
    46,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtDCInfo cd_emlrtDCI{
    858,                                      // lineNo
    46,                                       // colNo
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    1 // checkKind
};

static emlrtBCInfo pfb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    851,                                      // lineNo
    29,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtDCInfo dd_emlrtDCI{
    851,                                      // lineNo
    29,                                       // colNo
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    1 // checkKind
};

static emlrtBCInfo qfb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    859,                                      // lineNo
    96,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo rfb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    859,                                      // lineNo
    52,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtDCInfo qd_emlrtDCI{
    308,                            // lineNo
    69,                             // colNo
    "worldpointset/addWorldPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    4 // checkKind
};

static emlrtDCInfo yd_emlrtDCI{
    679,                                      // lineNo
    65,                                       // colNo
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    1 // checkKind
};

static emlrtDCInfo ae_emlrtDCI{
    680,                                      // lineNo
    66,                                       // colNo
    "worldpointset/updateLimitsAndDirection", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    1 // checkKind
};

static emlrtBCInfo wkb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    813,                                      // lineNo
    25,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtBCInfo xkb_emlrtBCI{
    -1,                                       // iFirst
    -1,                                       // iLast
    816,                                      // lineNo
    25,                                       // colNo
    "",                                       // aName
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    0 // checkKind
};

static emlrtDCInfo be_emlrtDCI{
    811,                                      // lineNo
    78,                                       // colNo
    "worldpointset/updateRepresentativeView", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m", // pName
    1 // checkKind
};

static emlrtRTEInfo mu_emlrtRTEI{
    181,             // lineNo
    13,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo nu_emlrtRTEI{
    182,             // lineNo
    13,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo ou_emlrtRTEI{
    190,             // lineNo
    13,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo pu_emlrtRTEI{
    191,             // lineNo
    13,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo qu_emlrtRTEI{
    192,             // lineNo
    13,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo ru_emlrtRTEI{
    193,             // lineNo
    13,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo bw_emlrtRTEI{
    1215,            // lineNo
    4,               // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo cw_emlrtRTEI{
    1260,            // lineNo
    46,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo dw_emlrtRTEI{
    37,       // lineNo
    9,        // colNo
    "unique", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pName
};

static emlrtRTEInfo neb_emlrtRTEI{
    996,             // lineNo
    68,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo oeb_emlrtRTEI{
    1007,            // lineNo
    25,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo peb_emlrtRTEI{
    1001,            // lineNo
    21,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo qeb_emlrtRTEI{
    1157,            // lineNo
    46,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo reb_emlrtRTEI{
    1175,            // lineNo
    43,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo seb_emlrtRTEI{
    1181,            // lineNo
    21,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo teb_emlrtRTEI{
    1187,            // lineNo
    25,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo ueb_emlrtRTEI{
    1188,            // lineNo
    25,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo gfb_emlrtRTEI{
    1303,            // lineNo
    18,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo lfb_emlrtRTEI{
    997,             // lineNo
    75,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo mfb_emlrtRTEI{
    1008,            // lineNo
    25,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo nfb_emlrtRTEI{
    1002,            // lineNo
    21,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo ofb_emlrtRTEI{
    16,          // lineNo
    9,           // colNo
    "metricSSD", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\metricSSD.m" // pName
};

static emlrtRTEInfo qfb_emlrtRTEI{
    1245,            // lineNo
    17,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo xgb_emlrtRTEI{
    193,    // lineNo
    24,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo ygb_emlrtRTEI{
    243,    // lineNo
    13,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo ahb_emlrtRTEI{
    129,    // lineNo
    13,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo bhb_emlrtRTEI{
    32,     // lineNo
    5,      // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo kkb_emlrtRTEI{
    21,          // lineNo
    5,           // colNo
    "intersect", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\intersect.m" // pName
};

static emlrtRTEInfo tkb_emlrtRTEI{
    1297,            // lineNo
    18,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo bnb_emlrtRTEI{
    1130,            // lineNo
    21,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo cnb_emlrtRTEI{
    1135,            // lineNo
    57,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo dnb_emlrtRTEI{
    1132,            // lineNo
    25,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo bsb_emlrtRTEI{
    1402,            // lineNo
    13,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo nvb_emlrtRTEI{
    274,             // lineNo
    13,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo ovb_emlrtRTEI{
    80,    // lineNo
    10,    // colNo
    "cat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pName
};

static emlrtRTEInfo pvb_emlrtRTEI{
    299,             // lineNo
    13,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo qvb_emlrtRTEI{
    303,             // lineNo
    54,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo rvb_emlrtRTEI{
    425,             // lineNo
    24,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo svb_emlrtRTEI{
    480,             // lineNo
    40,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo gxb_emlrtRTEI{
    421,             // lineNo
    29,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo hxb_emlrtRTEI{
    1402,            // lineNo
    24,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo ixb_emlrtRTEI{
    655,             // lineNo
    17,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo jxb_emlrtRTEI{
    656,             // lineNo
    17,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo kxb_emlrtRTEI{
    662,             // lineNo
    17,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo lxb_emlrtRTEI{
    679,             // lineNo
    59,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo mxb_emlrtRTEI{
    680,             // lineNo
    60,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo nxb_emlrtRTEI{
    687,             // lineNo
    21,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo oxb_emlrtRTEI{
    688,             // lineNo
    21,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo pxb_emlrtRTEI{
    707,             // lineNo
    21,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo qxb_emlrtRTEI{
    713,             // lineNo
    48,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo rxb_emlrtRTEI{
    786,             // lineNo
    17,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo sxb_emlrtRTEI{
    787,             // lineNo
    17,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo txb_emlrtRTEI{
    810,             // lineNo
    66,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo uxb_emlrtRTEI{
    818,             // lineNo
    21,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo vxb_emlrtRTEI{
    819,             // lineNo
    21,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo wxb_emlrtRTEI{
    844,             // lineNo
    21,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo xcc_emlrtRTEI{
    308,             // lineNo
    49,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

static emlrtRTEInfo gec_emlrtRTEI{
    811,             // lineNo
    72,              // colNo
    "worldpointset", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m" // pName
};

// Function Declarations
static void binary_expand_op_61(const emlrtStack &sp, const emlrtRSInfo in2,
                                const coder::array<real32_T, 2U> &in3,
                                const coder::array<real32_T, 1U> &in4,
                                real32_T in1[3]);

// Function Definitions
namespace coder {
void worldpointset::checkFeatureIndices(
    const emlrtStack &sp, const array<uint32_T, 1U> &featureIndices,
    real_T numFeatures)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hjb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= featureIndices.size(0) - 1)) {
    if (featureIndices[k] > 0U) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:worldpointset:expectedPositive", 3, 4, 14, "featureIndices");
  }
  b_st.site = &be_emlrtRSI;
  if ((!(muDoubleScalarFloor(numFeatures) == numFeatures)) ||
      muDoubleScalarIsInf(numFeatures)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &sc_emlrtRTEI,
                                  "Coder:toolbox:ValidateattributesBadNumel",
                                  "MATLAB:validateattributes:badnumel", 0);
  }
  if (!(featureIndices.size(0) == numFeatures)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &tc_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectNumel",
        "MATLAB:worldpointset:incorrectNumel", 5, 4, 14, "featureIndices", 6,
        numFeatures);
  }
}

void worldpointset::checkIfViewIsMissing(const emlrtStack &sp,
                                         uint32_T viewId) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T tf;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &vfc_emlrtRSI;
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
  b_st.site = &xyb_emlrtRSI;
  c_st.site = &adb_emlrtRSI;
  d_st.site = &bdb_emlrtRSI;
  tf = false;
  e_st.site = &cdb_emlrtRSI;
  if (ViewIds.size(1) > 2147483646) {
    f_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(f_st);
  }
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= ViewIds.size(1) - 1)) {
    if (viewId == ViewIds[k]) {
      tf = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!tf) {
    emlrtErrorWithMessageIdR2018a(
        &st, &yd_emlrtRTEI, "vision:viewSet:missingViewId",
        "vision:viewSet:missingViewId", 2, 13, viewId);
  }
}

void worldpointset::checkMissingViewInViewTable(
    const emlrtStack &sp, const array<cell_wrap_133, 1U> &viewIdsToUpdate,
    const array<uint32_T, 1U> &allViewIds)
{
  array<int32_T, 1U> b_r;
  array<boolean_T, 1U> missingViewIdx;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &wdc_emlrtRSI;
  i = viewIdsToUpdate.size(0);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    int32_T loop_ub_tmp;
    st.site = &xdc_emlrtRSI;
    if (b_i > viewIdsToUpdate.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, viewIdsToUpdate.size(0) - 1,
                                    &gn_emlrtBCI, &st);
    }
    b_st.site = &xyb_emlrtRSI;
    c_st.site = &adb_emlrtRSI;
    d_st.site = &bdb_emlrtRSI;
    b_isMember(d_st, viewIdsToUpdate[b_i].f1, allViewIds, missingViewIdx);
    loop_ub_tmp = missingViewIdx.size(0);
    for (int32_T c_i{0}; c_i < loop_ub_tmp; c_i++) {
      missingViewIdx[c_i] = !missingViewIdx[c_i];
    }
    b_st.site = &ydc_emlrtRSI;
    if (any(b_st, missingViewIdx)) {
      int32_T trueCount;
      trueCount = 0;
      for (int32_T c_i{0}; c_i < loop_ub_tmp; c_i++) {
        if (missingViewIdx[c_i]) {
          trueCount++;
        }
      }
      b_r.set_size(&gfb_emlrtRTEI, &st, trueCount);
      trueCount = 0;
      for (int32_T c_i{0}; c_i < loop_ub_tmp; c_i++) {
        if (missingViewIdx[c_i]) {
          b_r[trueCount] = c_i;
          trueCount++;
        }
      }
      loop_ub_tmp = b_r.size(0);
      for (int32_T c_i{0}; c_i < loop_ub_tmp; c_i++) {
        trueCount = viewIdsToUpdate[b_i].f1.size(0) - 1;
        if (b_r[c_i] > trueCount) {
          emlrtDynamicBoundsCheckR2012b(b_r[c_i], 0, trueCount, &hn_emlrtBCI,
                                        &st);
        }
      }
      if (b_r.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, b_r.size(0), &wm_emlrtBCI, &st);
      }
      emlrtErrorWithMessageIdR2018a(&st, &yd_emlrtRTEI,
                                    "vision:viewSet:missingViewId",
                                    "vision:viewSet:missingViewId", 2, 13,
                                    viewIdsToUpdate[b_i].f1[b_r[0]]);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::checkViewTable(
    const emlrtStack &sp, const array<uint32_T, 1U> &viewTable_ViewId,
    const b_rigidtform3d &viewTable_AbsolutePose,
    const array<cell_wrap_8, 2U> &viewTable_Features,
    array<uint32_T, 1U> &viewIds, b_rigidtform3d &poses)
{
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  loop_ub = viewTable_ViewId.size(0);
  viewIds.set_size(&bsb_emlrtRTEI, &sp, viewTable_ViewId.size(0));
  for (i = 0; i < loop_ub; i++) {
    viewIds[i] = viewTable_ViewId[i];
  }
  st.site = &bdc_emlrtRSI;
  worldpointset::checkViewIds(st, viewIds);
  poses = viewTable_AbsolutePose;
  st.site = &cdc_emlrtRSI;
  i = viewTable_Features.size(0);
  for (loop_ub = 0; loop_ub < i; loop_ub++) {
    if (loop_ub > viewTable_Features.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 0, viewTable_Features.size(0) - 1,
                                    &gy_emlrtBCI, &st);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::checkWorldPoints(const emlrtStack &sp,
                                     const array<real32_T, 2U> &worldPoints)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &lhb_emlrtRSI;
  st.site = &mhb_emlrtRSI;
  b_st.site = &be_emlrtRSI;
  p = true;
  i = worldPoints.size(0) * 3;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i - 1)) {
    if ((!muSingleScalarIsInf(worldPoints[k])) &&
        (!muSingleScalarIsNaN(worldPoints[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:worldpointset:expectedFinite", 3, 4, 11, "worldPoints");
  }
  b_st.site = &be_emlrtRSI;
  if (worldPoints.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &kc_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedNonempty",
        "MATLAB:worldpointset:expectedNonempty", 3, 4, 11, "worldPoints");
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

real_T worldpointset::findMedoidFeature(const emlrtStack &sp,
                                        const array<real32_T, 2U> &features,
                                        real_T N)
{
  array<real32_T, 2U> b_r;
  array<real32_T, 2U> features1;
  array<real32_T, 2U> features2;
  array<real32_T, 2U> r1;
  array<real32_T, 2U> scores;
  array<real32_T, 2U> varargin_1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  real_T medoidIdx;
  int32_T inb;
  int32_T last;
  int32_T nfb;
  int32_T nleft;
  real32_T s;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &pec_emlrtRSI;
  inb = features.size(1);
  nleft = features.size(0);
  features1.set_size(&ofb_emlrtRTEI, &st, features.size(1), features.size(0));
  features2.set_size(&pfb_emlrtRTEI, &st, features.size(1), features.size(0));
  for (last = 0; last < nleft; last++) {
    for (nfb = 0; nfb < inb; nfb++) {
      features1[nfb + features1.size(0) * last] =
          features[last + features.size(0) * nfb];
      features2[nfb + features2.size(0) * last] =
          features[last + features.size(0) * nfb];
    }
  }
  b_st.site = &rec_emlrtRSI;
  scores.set_size(&qfb_emlrtRTEI, &b_st, static_cast<int32_T>(N),
                  static_cast<int32_T>(N));
  nfb = static_cast<int32_T>(N) * static_cast<int32_T>(N);
  for (last = 0; last < nfb; last++) {
    scores[last] = 0.0F;
  }
  b_r.set_size(&wl_emlrtRTEI, &b_st, features.size(0), features.size(1));
  r1.set_size(&xl_emlrtRTEI, &b_st, features.size(0), features.size(1));
  for (last = 0; last < inb; last++) {
    for (nfb = 0; nfb < nleft; nfb++) {
      b_r[nfb + b_r.size(0) * last] = features1[last + features1.size(0) * nfb];
    }
    for (nfb = 0; nfb < nleft; nfb++) {
      r1[nfb + r1.size(0) * last] = features2[last + features2.size(0) * nfb];
    }
  }
  ComputeMetric_ssd_single(&b_r[0], &r1[0], &scores[0],
                           static_cast<uint32_T>(features1.size(0)),
                           static_cast<uint32_T>(features2.size(0)),
                           static_cast<uint32_T>(features1.size(1)));
  st.site = &qec_emlrtRSI;
  b_st.site = &qec_emlrtRSI;
  c_st.site = &sj_emlrtRSI;
  d_st.site = &tj_emlrtRSI;
  e_st.site = &uj_emlrtRSI;
  f_st.site = &xn_emlrtRSI;
  g_st.site = &wj_emlrtRSI;
  last = scores.size(1);
  varargin_1.set_size(&lp_emlrtRTEI, &g_st, 1, scores.size(1));
  if (scores.size(0) < 4096) {
    h_st.site = &oo_emlrtRSI;
    if (scores.size(1) > 2147483646) {
      i_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(i_st);
    }
    for (int32_T col{0}; col < last; col++) {
      h_st.site = &xj_emlrtRSI;
      varargin_1[col] = sumColumnB(h_st, scores, col + 1, scores.size(0));
    }
  } else {
    nfb = static_cast<int32_T>(static_cast<uint32_T>(scores.size(0)) >> 12);
    inb = nfb << 12;
    nleft = scores.size(0) - inb;
    h_st.site = &pt_emlrtRSI;
    if (scores.size(1) > 2147483646) {
      i_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(i_st);
    }
    for (int32_T col{0}; col < last; col++) {
      s = sumColumnB4(scores, col + 1, 1);
      h_st.site = &yj_emlrtRSI;
      for (int32_T ib{2}; ib <= nfb; ib++) {
        s += sumColumnB4(scores, col + 1, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        h_st.site = &ak_emlrtRSI;
        s += sumColumnB(h_st, scores, col + 1, nleft, inb + 1);
      }
      varargin_1[col] = s;
    }
  }
  b_st.site = &bi_emlrtRSI;
  c_st.site = &ci_emlrtRSI;
  d_st.site = &di_emlrtRSI;
  if (varargin_1.size(1) < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &gf_emlrtRSI;
  if (varargin_1.size(1) <= 2) {
    if (varargin_1.size(1) == 1) {
      nfb = 1;
    } else if ((varargin_1[0] > varargin_1[1]) ||
               (muSingleScalarIsNaN(varargin_1[0]) &&
                (!muSingleScalarIsNaN(varargin_1[1])))) {
      nfb = 2;
    } else {
      nfb = 1;
    }
  } else {
    f_st.site = &if_emlrtRSI;
    if (!muSingleScalarIsNaN(varargin_1[0])) {
      nfb = 1;
    } else {
      boolean_T exitg1;
      nfb = 0;
      g_st.site = &jf_emlrtRSI;
      if (varargin_1.size(1) > 2147483646) {
        h_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(h_st);
      }
      nleft = 2;
      exitg1 = false;
      while ((!exitg1) && (nleft <= last)) {
        if (!muSingleScalarIsNaN(varargin_1[nleft - 1])) {
          nfb = nleft;
          exitg1 = true;
        } else {
          nleft++;
        }
      }
    }
    if (nfb == 0) {
      nfb = 1;
    } else {
      f_st.site = &hf_emlrtRSI;
      s = varargin_1[nfb - 1];
      inb = nfb + 1;
      g_st.site = &kf_emlrtRSI;
      if ((nfb + 1 <= varargin_1.size(1)) &&
          (varargin_1.size(1) > 2147483646)) {
        h_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(h_st);
      }
      for (nleft = inb; nleft <= last; nleft++) {
        real32_T f;
        f = varargin_1[nleft - 1];
        if (s > f) {
          s = f;
          nfb = nleft;
        }
      }
    }
  }
  medoidIdx = nfb;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return medoidIdx;
}

void worldpointset::findViewsOfSingleWorldPoint(
    const emlrtStack &sp, const array<real_T, 2U> &pointIndex,
    array<cell_wrap_133, 1U> &viewIds,
    array<cell_wrap_25, 1U> &featureIndices) const
{
  c_sparse x;
  array<real_T, 2U> v;
  array<int32_T, 2U> ii;
  array<int32_T, 2U> jj;
  array<uint32_T, 2U> vIds;
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  int32_T obj_idx_0_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &ndc_emlrtRSI;
  obj_idx_0_tmp = pointIndex.size(1);
  viewIds.set_size(&qeb_emlrtRTEI, &sp, pointIndex.size(1));
  for (i = 0; i < obj_idx_0_tmp; i++) {
    if (i > viewIds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, viewIds.size(0) - 1, &bn_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    viewIds[i].f1.set_size(&qeb_emlrtRTEI, &sp, 0);
  }
  featureIndices.set_size(&qeb_emlrtRTEI, &sp, pointIndex.size(1));
  for (i = 0; i < obj_idx_0_tmp; i++) {
    if (i > featureIndices.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, featureIndices.size(0) - 1,
                                    &bn_emlrtBCI, (emlrtConstCTX)&sp);
    }
    featureIndices[i].f1.set_size(&qeb_emlrtRTEI, &sp, 0);
  }
  viewIds.set_size(&reb_emlrtRTEI, &sp, pointIndex.size(1));
  featureIndices.set_size(&reb_emlrtRTEI, &sp, pointIndex.size(1));
  for (int32_T b_i{0}; b_i < obj_idx_0_tmp; b_i++) {
    int32_T loop_ub;
    st.site = &pdc_emlrtRSI;
    if (b_i + 1 > obj_idx_0_tmp) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, obj_idx_0_tmp, &cn_emlrtBCI,
                                    &st);
    }
    b_st.site = &odc_emlrtRSI;
    CorrespondencesInternal.parenReference(b_st, pointIndex[b_i], x);
    b_st.site = &udc_emlrtRSI;
    d_eml_find(b_st, x, ii, jj, v);
    st.site = &qdc_emlrtRSI;
    if (jj.size(1) == 0) {
      vIds.set_size(&seb_emlrtRTEI, &st, 1, 0);
    } else {
      int32_T b_iv[2];
      b_iv[0] = (*(int32_T(*)[2])((array<uint32_T, 2U> *)&ViewIds)->size())[0];
      b_iv[1] = (*(int32_T(*)[2])((array<uint32_T, 2U> *)&ViewIds)->size())[1];
      b_st.site = &vdc_emlrtRSI;
      internal::b_indexShapeCheck(b_st, b_iv, jj.size(1));
      loop_ub = jj.size(1);
      vIds.set_size(&seb_emlrtRTEI, &st, 1, jj.size(1));
      for (i = 0; i < loop_ub; i++) {
        if ((jj[i] < 1) || (jj[i] > ViewIds.size(1))) {
          emlrtDynamicBoundsCheckR2012b(jj[i], 1, ViewIds.size(1), &dn_emlrtBCI,
                                        &st);
        }
        vIds[i] = ViewIds[jj[i] - 1];
      }
    }
    i = viewIds.size(0) - 1;
    if (b_i > viewIds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, viewIds.size(0) - 1, &en_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    loop_ub = vIds.size(1);
    viewIds[b_i].f1.set_size(&teb_emlrtRTEI, &sp, vIds.size(1));
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      if (b_i > i) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &en_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      viewIds[b_i].f1[i1] = vIds[i1];
    }
    loop_ub = v.size(1);
    if (b_i > viewIds.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, viewIds.size(0) - 1, &fn_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    featureIndices[b_i].f1.set_size(&ueb_emlrtRTEI, &sp, v.size(1));
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      if (b_i > i) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &fn_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      featureIndices[b_i].f1[i1] = v[i1];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::findViewsOfSingleWorldPoint(
    const emlrtStack &sp, real_T pointIndex, cell_wrap_133 &viewIds,
    cell_wrap_25 &featureIndices) const
{
  c_sparse x;
  array<real_T, 2U> v;
  array<int32_T, 2U> ii;
  array<int32_T, 2U> jj;
  array<uint32_T, 2U> vIds;
  emlrtStack b_st;
  emlrtStack st;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &ndc_emlrtRSI;
  st.site = &pdc_emlrtRSI;
  b_st.site = &odc_emlrtRSI;
  CorrespondencesInternal.parenReference(b_st, pointIndex, x);
  b_st.site = &udc_emlrtRSI;
  d_eml_find(b_st, x, ii, jj, v);
  st.site = &qdc_emlrtRSI;
  if (jj.size(1) == 0) {
    vIds.set_size(&seb_emlrtRTEI, &st, 1, 0);
  } else {
    int32_T b_iv[2];
    b_iv[0] = (*(int32_T(*)[2])((array<uint32_T, 2U> *)&ViewIds)->size())[0];
    b_iv[1] = (*(int32_T(*)[2])((array<uint32_T, 2U> *)&ViewIds)->size())[1];
    b_st.site = &vdc_emlrtRSI;
    internal::b_indexShapeCheck(b_st, b_iv, jj.size(1));
    loop_ub = jj.size(1);
    vIds.set_size(&seb_emlrtRTEI, &st, 1, jj.size(1));
    for (int32_T i{0}; i < loop_ub; i++) {
      if ((jj[i] < 1) || (jj[i] > ViewIds.size(1))) {
        emlrtDynamicBoundsCheckR2012b(jj[i], 1, ViewIds.size(1), &dn_emlrtBCI,
                                      &st);
      }
      vIds[i] = ViewIds[jj[i] - 1];
    }
  }
  loop_ub = vIds.size(1);
  viewIds.f1.set_size(&teb_emlrtRTEI, &sp, vIds.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    viewIds.f1[i] = vIds[i];
  }
  loop_ub = v.size(1);
  featureIndices.f1.set_size(&ueb_emlrtRTEI, &sp, v.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    featureIndices.f1[i] = v[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::findViewsOfWorldPoint(
    const emlrtStack &sp, const array<real_T, 1U> &pointIds,
    array<cell_wrap_133, 1U> &viewIds,
    array<cell_wrap_25, 1U> &featureIndices) const
{
  array<cell_wrap_133, 1U> vIds;
  array<cell_wrap_25, 1U> fIndices;
  array<real_T, 2U> pointIndices;
  cell_wrap_133 b_vIds;
  cell_wrap_25 b_fIndices;
  emlrtStack st;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &hdc_emlrtRSI;
  worldpointset::pointIdOrPointIndex(st, pointIds, pointIndices);
  st.site = &idc_emlrtRSI;
  checkPointIndices(st, pointIndices);
  i = pointIndices.size(1);
  viewIds.set_size(&neb_emlrtRTEI, &sp, pointIndices.size(1));
  featureIndices.set_size(&lfb_emlrtRTEI, &sp, pointIndices.size(1));
  if (pointIndices.size(1) == 1) {
    int32_T loop_ub_tmp;
    st.site = &jdc_emlrtRSI;
    findViewsOfSingleWorldPoint(st, pointIndices, vIds, fIndices);
    st.site = &kdc_emlrtRSI;
    if (vIds.size(0) == 0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &de_emlrtRTEI,
          "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces",
          "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces", 0);
    }
    loop_ub_tmp = vIds[0].f1.size(0);
    viewIds[0].f1.set_size(&peb_emlrtRTEI, &sp, vIds[0].f1.size(0));
    for (i = 0; i < loop_ub_tmp; i++) {
      viewIds[0].f1[i] = vIds[0].f1[i];
    }
    st.site = &ldc_emlrtRSI;
    if (fIndices.size(0) == 0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &de_emlrtRTEI,
          "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces",
          "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces", 0);
    }
    loop_ub_tmp = fIndices[0].f1.size(0);
    featureIndices[0].f1.set_size(&nfb_emlrtRTEI, &sp, fIndices[0].f1.size(0));
    for (i = 0; i < loop_ub_tmp; i++) {
      featureIndices[0].f1[i] = fIndices[0].f1[i];
    }
  } else {
    for (int32_T b_i{0}; b_i < i; b_i++) {
      int32_T i1;
      int32_T loop_ub_tmp;
      if (b_i + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &xm_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      st.site = &mdc_emlrtRSI;
      findViewsOfSingleWorldPoint(st, pointIndices[b_i], b_vIds, b_fIndices);
      loop_ub_tmp = b_vIds.f1.size(0);
      i1 = viewIds.size(0) - 1;
      if (b_i > viewIds.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, viewIds.size(0) - 1, &ym_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      viewIds[b_i].f1.set_size(&oeb_emlrtRTEI, &sp, b_vIds.f1.size(0));
      for (int32_T i2{0}; i2 < loop_ub_tmp; i2++) {
        if (b_i > i1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &ym_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        viewIds[b_i].f1[i2] = b_vIds.f1[i2];
      }
      loop_ub_tmp = b_fIndices.f1.size(0);
      if (b_i > viewIds.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, viewIds.size(0) - 1, &an_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      featureIndices[b_i].f1.set_size(&mfb_emlrtRTEI, &sp,
                                      b_fIndices.f1.size(0));
      for (int32_T i2{0}; i2 < loop_ub_tmp; i2++) {
        if (b_i > i1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &an_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        featureIndices[b_i].f1[i2] = b_fIndices.f1[i2];
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder
static void binary_expand_op_61(const emlrtStack &sp, const emlrtRSInfo in2,
                                const coder::array<real32_T, 2U> &in3,
                                const coder::array<real32_T, 1U> &in4,
                                real32_T in1[3])
{
  coder::array<real32_T, 2U> b_in3;
  emlrtStack st;
  int32_T in4_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  in4_idx_0 = in4.size(0);
  if (in4_idx_0 == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4_idx_0;
  }
  b_in3.set_size(&ni_emlrtRTEI, &sp, loop_ub, 3);
  stride_0_0 = (in3.size(0) != 1);
  in4_idx_0 = (in4_idx_0 != 1);
  for (int32_T i{0}; i < 3; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in3[i1 + b_in3.size(0) * i] =
          in3[i1 * stride_0_0 + in3.size(0) * i] / in4[i1 * in4_idx_0];
    }
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::mean(st, b_in3, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

namespace coder {
void worldpointset::addCorrespondences(
    const emlrtStack &sp, uint32_T viewId, const array<real_T, 1U> &pointIds,
    const array<uint32_T, 1U> &featureIndices)
{
  b_sparse corresUpd;
  sparse obj;
  array<real_T, 2U> pointIndices;
  array<real_T, 1U> b_pointIndices;
  array<real_T, 1U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T viewIndex_data;
  int32_T c_size[2];
  int32_T ia_data;
  int32_T ia_size;
  int32_T ib_data;
  int32_T ib_size;
  uint32_T c_data;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &oib_emlrtRSI;
  worldpointset::pointIdOrPointIndex(st, pointIds, pointIndices);
  st.site = &nib_emlrtRSI;
  if (WorldPoints.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(&st, &pe_emlrtRTEI,
                                  "vision:worldpointset:noWorldPoints",
                                  "vision:worldpointset:noWorldPoints", 0);
  }
  st.site = &mpc_emlrtRSI;
  b_st.site = &npc_emlrtRSI;
  c_st.site = &uyb_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  if (viewId <= 0U) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:worldpointset:expectedPositive", 3, 4, 6, "viewId");
  }
  st.site = &mib_emlrtRSI;
  checkPointIndices(st, pointIndices);
  st.site = &lib_emlrtRSI;
  worldpointset::checkFeatureIndices(st, featureIndices,
                                     static_cast<real_T>(pointIndices.size(1)));
  st.site = &kib_emlrtRSI;
  b_st.site = &ijb_emlrtRSI;
  c_st.site = &bjb_emlrtRSI;
  d_st.site = &efb_emlrtRSI;
  do_vectors(d_st, viewId, ViewIds, (uint32_T *)&c_data, c_size,
             (int32_T *)&ia_data, (int32_T *)&ib_data, ib_size);
  for (ia_size = 0; ia_size < ib_size; ia_size++) {
    viewIndex_data = ib_data;
  }
  st.site = &jib_emlrtRSI;
  if (ib_size != 0) {
    ia_data = pointIndices.size(1);
    b_pointIndices = pointIndices.reshape(ia_data);
    st.site = &qkb_emlrtRSI;
    CorrespondencesInternal.parenAssign(st, featureIndices, b_pointIndices,
                                        (real_T *)&viewIndex_data, ib_size);
  } else {
    ia_size = ViewIds.size(1);
    ViewIds.set_size(&rvb_emlrtRTEI, &sp, ViewIds.size(0), ia_size + 1);
    ViewIds[ia_size] = viewId;
    ia_data = WorldPoints.size(0);
    b_r.set_size(&svb_emlrtRTEI, &sp, ia_data);
    for (ia_size = 0; ia_size < ia_data; ia_size++) {
      b_r[ia_size] = 0.0;
    }
    st.site = &iib_emlrtRSI;
    h_sparse(st, b_r, corresUpd);
    ia_data = pointIndices.size(1);
    b_pointIndices = pointIndices.reshape(ia_data);
    st.site = &hib_emlrtRSI;
    corresUpd.parenAssign(st, featureIndices, b_pointIndices);
    obj = CorrespondencesInternal;
    st.site = &gib_emlrtRSI;
    obj.horzcat(st, corresUpd, CorrespondencesInternal);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::addCorrespondences(
    const emlrtStack &sp, real_T viewId, const array<real_T, 1U> &pointIds,
    const array<uint32_T, 1U> &featureIndices)
{
  b_sparse corresUpd;
  sparse obj;
  array<real_T, 2U> pointIndices;
  array<real_T, 1U> b_pointIndices;
  array<real_T, 1U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T viewIndex_data;
  int32_T c_size[2];
  int32_T ia_data;
  int32_T ia_size;
  int32_T ib_data;
  int32_T ib_size;
  uint32_T b_viewId;
  uint32_T c_data;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &oib_emlrtRSI;
  worldpointset::pointIdOrPointIndex(st, pointIds, pointIndices);
  st.site = &nib_emlrtRSI;
  if (WorldPoints.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(&st, &pe_emlrtRTEI,
                                  "vision:worldpointset:noWorldPoints",
                                  "vision:worldpointset:noWorldPoints", 0);
  }
  st.site = &mpc_emlrtRSI;
  b_st.site = &npc_emlrtRSI;
  c_st.site = &uyb_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  if (muDoubleScalarIsInf(viewId) || muDoubleScalarIsNaN(viewId) ||
      (!(muDoubleScalarFloor(viewId) == viewId))) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &qc_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedInteger",
        "MATLAB:worldpointset:expectedInteger", 3, 4, 6, "viewId");
  }
  d_st.site = &be_emlrtRSI;
  if (viewId <= 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:worldpointset:expectedPositive", 3, 4, 6, "viewId");
  }
  if (viewId < 4.294967296E+9) {
    b_viewId = static_cast<uint32_T>(viewId);
  } else {
    b_viewId = MAX_uint32_T;
  }
  st.site = &mib_emlrtRSI;
  checkPointIndices(st, pointIndices);
  st.site = &lib_emlrtRSI;
  worldpointset::checkFeatureIndices(st, featureIndices,
                                     static_cast<real_T>(pointIndices.size(1)));
  st.site = &kib_emlrtRSI;
  b_st.site = &ijb_emlrtRSI;
  c_st.site = &bjb_emlrtRSI;
  d_st.site = &efb_emlrtRSI;
  do_vectors(d_st, b_viewId, ViewIds, (uint32_T *)&c_data, c_size,
             (int32_T *)&ia_data, (int32_T *)&ib_data, ib_size);
  for (ia_size = 0; ia_size < ib_size; ia_size++) {
    viewIndex_data = ib_data;
  }
  st.site = &jib_emlrtRSI;
  if (ib_size != 0) {
    ia_data = pointIndices.size(1);
    b_pointIndices = pointIndices.reshape(ia_data);
    st.site = &qkb_emlrtRSI;
    CorrespondencesInternal.parenAssign(st, featureIndices, b_pointIndices,
                                        (real_T *)&viewIndex_data, ib_size);
  } else {
    ia_size = ViewIds.size(1);
    ViewIds.set_size(&rvb_emlrtRTEI, &sp, ViewIds.size(0), ia_size + 1);
    ViewIds[ia_size] = b_viewId;
    ia_data = WorldPoints.size(0);
    b_r.set_size(&svb_emlrtRTEI, &sp, ia_data);
    for (ia_size = 0; ia_size < ia_data; ia_size++) {
      b_r[ia_size] = 0.0;
    }
    st.site = &iib_emlrtRSI;
    h_sparse(st, b_r, corresUpd);
    ia_data = pointIndices.size(1);
    b_pointIndices = pointIndices.reshape(ia_data);
    st.site = &hib_emlrtRSI;
    corresUpd.parenAssign(st, featureIndices, b_pointIndices);
    obj = CorrespondencesInternal;
    st.site = &gib_emlrtRSI;
    obj.horzcat(st, corresUpd, CorrespondencesInternal);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::addCorrespondences(
    const emlrtStack &sp, const array<real_T, 1U> &pointIds,
    const array<uint32_T, 1U> &featureIndices)
{
  b_sparse corresUpd;
  sparse obj;
  array<real_T, 2U> pointIndices;
  array<real_T, 1U> b_pointIndices;
  array<real_T, 1U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T b_iv[2];
  int32_T c_size[2];
  int32_T ia_size;
  int32_T ib_size;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &oib_emlrtRSI;
  worldpointset::pointIdOrPointIndex(st, pointIds, pointIndices);
  st.site = &nib_emlrtRSI;
  if (WorldPoints.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(&st, &pe_emlrtRTEI,
                                  "vision:worldpointset:noWorldPoints",
                                  "vision:worldpointset:noWorldPoints", 0);
  }
  st.site = &mib_emlrtRSI;
  checkPointIndices(st, pointIndices);
  st.site = &lib_emlrtRSI;
  worldpointset::checkFeatureIndices(st, featureIndices,
                                     static_cast<real_T>(pointIndices.size(1)));
  st.site = &kib_emlrtRSI;
  b_st.site = &ijb_emlrtRSI;
  c_st.site = &bjb_emlrtRSI;
  b_iv[0] = (*(int32_T(*)[2])ViewIds.size())[0];
  b_iv[1] = (*(int32_T(*)[2])ViewIds.size())[1];
  d_st.site = &efb_emlrtRSI;
  do_vectors(d_st, b_iv, c_size, ib_size);
  st.site = &jib_emlrtRSI;
  ib_size = ViewIds.size(1);
  ViewIds.set_size(&rvb_emlrtRTEI, &sp, ViewIds.size(0), ib_size + 1);
  ViewIds[ib_size] = 1U;
  ia_size = WorldPoints.size(0);
  b_r.set_size(&svb_emlrtRTEI, &sp, ia_size);
  for (ib_size = 0; ib_size < ia_size; ib_size++) {
    b_r[ib_size] = 0.0;
  }
  st.site = &iib_emlrtRSI;
  h_sparse(st, b_r, corresUpd);
  ia_size = pointIndices.size(1);
  b_pointIndices = pointIndices.reshape(ia_size);
  st.site = &hib_emlrtRSI;
  corresUpd.parenAssign(st, featureIndices, b_pointIndices);
  obj = CorrespondencesInternal;
  st.site = &gib_emlrtRSI;
  obj.horzcat(st, corresUpd, CorrespondencesInternal);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::addWorldPoints(const emlrtStack &sp,
                                   const array<real32_T, 2U> &worldPoints,
                                   array<real_T, 1U> &newPointIndices)
{
  array<real_T, 2U> b_r;
  array<real32_T, 2U> b_obj;
  array<uint32_T, 2U> y;
  emlrtStack b_st;
  emlrtStack st;
  int32_T input_sizes_tmp;
  int32_T loop_ub;
  int32_T obj;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &khb_emlrtRSI;
  worldpointset::checkWorldPoints(st, worldPoints);
  st.site = &jhb_emlrtRSI;
  b_st.site = &pj_emlrtRSI;
  if (worldPoints.size(0) < 1) {
    y.set_size(&wm_emlrtRTEI, &b_st, 1, 0);
  } else {
    y.set_size(&wm_emlrtRTEI, &b_st, 1, worldPoints.size(0));
    loop_ub = worldPoints.size(0) - 1;
    for (int32_T i{0}; i <= loop_ub; i++) {
      y[i] = static_cast<uint32_T>(i) + 1U;
    }
  }
  loop_ub = y.size(1);
  newPointIndices.set_size(&nvb_emlrtRTEI, &sp, y.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    newPointIndices[i] = y[i];
  }
  st.site = &ihb_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  if (WorldPoints.size(0) != 0) {
    loop_ub = WorldPoints.size(0);
  } else {
    loop_ub = 0;
  }
  if (worldPoints.size(0) != 0) {
    input_sizes_tmp = worldPoints.size(0);
  } else {
    input_sizes_tmp = 0;
  }
  obj = loop_ub + input_sizes_tmp;
  b_obj.set_size(&ovb_emlrtRTEI, &b_st, obj, 3);
  for (int32_T i{0}; i < 3; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_obj[i1 + b_obj.size(0) * i] = WorldPoints[i1 + loop_ub * i];
    }
  }
  for (int32_T i{0}; i < 3; i++) {
    for (int32_T i1{0}; i1 < input_sizes_tmp; i1++) {
      b_obj[(i1 + loop_ub) + b_obj.size(0) * i] =
          worldPoints[i1 + input_sizes_tmp * i];
    }
  }
  WorldPoints.set_size(&pvb_emlrtRTEI, &b_st, obj, 3);
  loop_ub = b_obj.size(0) * 3;
  for (int32_T i{0}; i < loop_ub; i++) {
    WorldPoints[i] = b_obj[i];
  }
  b_r.set_size(&qvb_emlrtRTEI, &sp, obj, 0);
  st.site = &hhb_emlrtRSI;
  h_sparse(st, b_r, CorrespondencesInternal);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::b_addCorrespondences(
    const emlrtStack &sp, const array<real_T, 1U> &pointIds,
    const array<uint32_T, 1U> &featureIndices)
{
  b_sparse corresUpd;
  sparse obj;
  array<real_T, 2U> pointIndices;
  array<real_T, 1U> b_pointIndices;
  array<real_T, 1U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T viewIndex_data;
  int32_T b_iv[2];
  int32_T c_size[2];
  int32_T ia_data;
  int32_T ia_size;
  int32_T ib_data;
  int32_T ib_size;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &oib_emlrtRSI;
  worldpointset::pointIdOrPointIndex(st, pointIds, pointIndices);
  st.site = &nib_emlrtRSI;
  if (WorldPoints.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(&st, &pe_emlrtRTEI,
                                  "vision:worldpointset:noWorldPoints",
                                  "vision:worldpointset:noWorldPoints", 0);
  }
  st.site = &mib_emlrtRSI;
  checkPointIndices(st, pointIndices);
  st.site = &lib_emlrtRSI;
  worldpointset::checkFeatureIndices(st, featureIndices,
                                     static_cast<real_T>(pointIndices.size(1)));
  st.site = &kib_emlrtRSI;
  b_st.site = &ijb_emlrtRSI;
  c_st.site = &bjb_emlrtRSI;
  b_iv[0] = (*(int32_T(*)[2])ViewIds.size())[0];
  b_iv[1] = (*(int32_T(*)[2])ViewIds.size())[1];
  d_st.site = &efb_emlrtRSI;
  do_vectors(d_st, (const uint32_T *)ViewIds.data(), b_iv, c_size,
             (int32_T *)&ia_data, (int32_T *)&ib_data, ib_size);
  for (ia_size = 0; ia_size < ib_size; ia_size++) {
    viewIndex_data = ib_data;
  }
  st.site = &jib_emlrtRSI;
  if (ib_size != 0) {
    ia_data = pointIndices.size(1);
    b_pointIndices = pointIndices.reshape(ia_data);
    st.site = &qkb_emlrtRSI;
    CorrespondencesInternal.parenAssign(st, featureIndices, b_pointIndices,
                                        (real_T *)&viewIndex_data, ib_size);
  } else {
    ia_size = ViewIds.size(1);
    ViewIds.set_size(&rvb_emlrtRTEI, &sp, ViewIds.size(0), ia_size + 1);
    ViewIds[ia_size] = 2U;
    ia_data = WorldPoints.size(0);
    b_r.set_size(&svb_emlrtRTEI, &sp, ia_data);
    for (ia_size = 0; ia_size < ia_data; ia_size++) {
      b_r[ia_size] = 0.0;
    }
    st.site = &iib_emlrtRSI;
    h_sparse(st, b_r, corresUpd);
    ia_data = pointIndices.size(1);
    b_pointIndices = pointIndices.reshape(ia_data);
    st.site = &hib_emlrtRSI;
    corresUpd.parenAssign(st, featureIndices, b_pointIndices);
    obj = CorrespondencesInternal;
    st.site = &gib_emlrtRSI;
    obj.horzcat(st, corresUpd, CorrespondencesInternal);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::b_addWorldPoints(const emlrtStack &sp,
                                     const array<real32_T, 2U> &worldPoints,
                                     array<real_T, 1U> &newPointIndices)
{
  sparse newCorrespondences;
  sparse varargin_1;
  array<real_T, 2U> b_r;
  array<real_T, 2U> y;
  array<real32_T, 2U> obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T cnfixeddim;
  int32_T cnvardim;
  int32_T i;
  int32_T kpend;
  int32_T nzCount;
  uint32_T b;
  boolean_T allEmpty;
  boolean_T emptyflag_idx_0;
  boolean_T emptyflag_idx_1;
  boolean_T foundSize_tmp;
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
  st.site = &khb_emlrtRSI;
  worldpointset::checkWorldPoints(st, worldPoints);
  st.site = &jhb_emlrtRSI;
  b = static_cast<uint32_T>(WorldPoints.size(0)) +
      static_cast<uint32_T>(worldPoints.size(0));
  b_st.site = &pj_emlrtRSI;
  if (b < static_cast<uint32_T>(WorldPoints.size(0)) + 1U) {
    y.set_size(&wm_emlrtRTEI, &b_st, 1, 0);
  } else {
    uint32_T u;
    u = static_cast<uint32_T>(WorldPoints.size(0)) + 1U;
    nzCount = static_cast<int32_T>(b) - static_cast<int32_T>(u);
    y.set_size(&wm_emlrtRTEI, &b_st, 1, nzCount + 1);
    for (i = 0; i <= nzCount; i++) {
      y[i] = u + static_cast<uint32_T>(i);
    }
  }
  nzCount = y.size(1);
  newPointIndices.set_size(&nvb_emlrtRTEI, &sp, y.size(1));
  for (i = 0; i < nzCount; i++) {
    newPointIndices[i] = y[i];
  }
  st.site = &ihb_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  c_st.site = &jj_emlrtRSI;
  if (WorldPoints.size(0) != 0) {
    nzCount = WorldPoints.size(0);
  } else {
    nzCount = 0;
  }
  if (worldPoints.size(0) != 0) {
    cnvardim = worldPoints.size(0);
  } else {
    cnvardim = 0;
  }
  cnfixeddim = nzCount + cnvardim;
  obj.set_size(&ovb_emlrtRTEI, &b_st, cnfixeddim, 3);
  for (i = 0; i < 3; i++) {
    for (kpend = 0; kpend < nzCount; kpend++) {
      obj[kpend + obj.size(0) * i] = WorldPoints[kpend + nzCount * i];
    }
  }
  for (i = 0; i < 3; i++) {
    for (kpend = 0; kpend < cnvardim; kpend++) {
      obj[(kpend + nzCount) + obj.size(0) * i] =
          worldPoints[kpend + cnvardim * i];
    }
  }
  WorldPoints.set_size(&pvb_emlrtRTEI, &b_st, cnfixeddim, 3);
  nzCount = obj.size(0) * 3;
  for (i = 0; i < nzCount; i++) {
    WorldPoints[i] = obj[i];
  }
  st.site = &nsc_emlrtRSI;
  cnfixeddim = CorrespondencesInternal.n;
  if (cnfixeddim < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(cnfixeddim), &qd_emlrtDCI,
                                (emlrtConstCTX)&sp);
  }
  b_r.set_size(&xcc_emlrtRTEI, &sp, worldPoints.size(0), cnfixeddim);
  nzCount = worldPoints.size(0) * cnfixeddim;
  for (i = 0; i < nzCount; i++) {
    b_r[i] = 0.0;
  }
  st.site = &msc_emlrtRSI;
  h_sparse(st, b_r, newCorrespondences);
  st.site = &lsc_emlrtRSI;
  varargin_1 = CorrespondencesInternal;
  b_st.site = &rhb_emlrtRSI;
  if ((CorrespondencesInternal.m == 0) || (CorrespondencesInternal.n == 0)) {
    emptyflag_idx_0 = true;
  } else {
    emptyflag_idx_0 = false;
  }
  foundSize_tmp = !emptyflag_idx_0;
  if ((newCorrespondences.m == 0) || (newCorrespondences.n == 0)) {
    emptyflag_idx_1 = true;
  } else {
    emptyflag_idx_1 = false;
  }
  allEmpty = (emptyflag_idx_0 && emptyflag_idx_1);
  if ((!emptyflag_idx_1) && foundSize_tmp &&
      (newCorrespondences.n != CorrespondencesInternal.n)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &wc_emlrtRTEI, "Coder:toolbox:ConcatenationDimensionMismatch",
        "Coder:toolbox:ConcatenationDimensionMismatch", 6, 12, 2, 12, 2, 12,
        CorrespondencesInternal.n);
  }
  emptyflag_idx_0 = !emptyflag_idx_1;
  if (emptyflag_idx_0 && (!foundSize_tmp)) {
    cnfixeddim = newCorrespondences.n;
  }
  nzCount = 0;
  cnvardim = 0;
  if (allEmpty || foundSize_tmp) {
    nzCount = CorrespondencesInternal
                  .colidx[CorrespondencesInternal.colidx.size(0) - 1] -
              1;
    cnvardim = CorrespondencesInternal.m;
  }
  if (allEmpty || emptyflag_idx_0) {
    c_st.site = &thb_emlrtRSI;
    i = newCorrespondences.colidx[newCorrespondences.colidx.size(0) - 1];
    if (nzCount > MIN_int32_T - i) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &xc_emlrtRTEI, "Coder:toolbox:SparseCatTooBig",
          "Coder:toolbox:SparseCatTooBig", 3, 4, 8, "nonzeros");
    }
    nzCount = (nzCount + i) - 1;
    c_st.site = &uhb_emlrtRSI;
    if (cnvardim > MAX_int32_T - newCorrespondences.m) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &xc_emlrtRTEI, "Coder:toolbox:SparseCatTooBig",
          "Coder:toolbox:SparseCatTooBig", 3, 4, 4, "rows");
    }
    cnvardim += newCorrespondences.m;
  }
  b_st.site = &shb_emlrtRSI;
  c_st.site = &vhb_emlrtRSI;
  d_st.site = &whb_emlrtRSI;
  sparse::spallocLike(d_st, cnvardim, cnfixeddim, nzCount,
                      CorrespondencesInternal);
  nzCount = -1;
  if ((varargin_1.m == 0) || (varargin_1.n == 0)) {
    emptyflag_idx_0 = true;
  } else {
    emptyflag_idx_0 = false;
  }
  if ((newCorrespondences.m == 0) || (newCorrespondences.n == 0)) {
    emptyflag_idx_1 = true;
  } else {
    emptyflag_idx_1 = false;
  }
  cnvardim = CorrespondencesInternal.n;
  d_st.site = &xhb_emlrtRSI;
  if (CorrespondencesInternal.n > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  for (int32_T ccol{0}; ccol < cnvardim; ccol++) {
    if (!emptyflag_idx_0) {
      cnfixeddim = varargin_1.colidx[ccol];
      kpend = varargin_1.colidx[ccol + 1];
      d_st.site = &unb_emlrtRSI;
      if ((cnfixeddim <= varargin_1.colidx[ccol + 1] - 1) &&
          (varargin_1.colidx[ccol + 1] - 1 > 2147483646)) {
        e_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(e_st);
      }
      for (int32_T kp{cnfixeddim}; kp < kpend; kp++) {
        i = ((nzCount + kp) - cnfixeddim) + 1;
        CorrespondencesInternal.rowidx[i] = varargin_1.rowidx[kp - 1];
        CorrespondencesInternal.d[i] = varargin_1.d[kp - 1];
      }
      nzCount = (nzCount + varargin_1.colidx[ccol + 1]) - cnfixeddim;
    }
    if (!emptyflag_idx_1) {
      cnfixeddim = newCorrespondences.colidx[ccol];
      kpend = newCorrespondences.colidx[ccol + 1];
      d_st.site = &unb_emlrtRSI;
      if ((cnfixeddim <= newCorrespondences.colidx[ccol + 1] - 1) &&
          (newCorrespondences.colidx[ccol + 1] - 1 > 2147483646)) {
        e_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(e_st);
      }
      for (int32_T kp{cnfixeddim}; kp < kpend; kp++) {
        // Check node always fails. would cause program termination and was
        // eliminated
      }
      nzCount = (nzCount + newCorrespondences.colidx[ccol + 1]) - cnfixeddim;
    }
    CorrespondencesInternal.colidx[ccol + 1] = nzCount + 2;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::b_updateLimitsAndDirection(
    const emlrtStack &sp, const array<real_T, 1U> &pointIds,
    const array<uint32_T, 1U> &viewTable_ViewId,
    const b_rigidtform3d &viewTable_AbsolutePose,
    const array<cell_wrap_8, 2U> &viewTable_Features)
{
  b_rigidtform3d allPoses;
  b_rigidtform3d b_r;
  array<cell_wrap_133, 1U> viewIdsToUpdate;
  array<real_T, 2U> allViewLocations;
  array<real_T, 2U> pointIndices;
  array<real_T, 1U> c_pointIndices;
  array<int32_T, 1U> ia;
  array<int32_T, 1U> ib;
  array<real32_T, 2U> b_updatedViewDirection;
  array<real32_T, 2U> updatedDistanceLimits;
  array<real32_T, 2U> updatedViewDirection;
  array<real32_T, 1U> viewToPointDistances;
  array<uint32_T, 1U> allViewIds;
  array<uint32_T, 1U> c;
  array<boolean_T, 1U> b_viewToPointDistances;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  real_T viewDirectionSize;
  int32_T b_iv[2];
  int32_T obj[2];
  int32_T b_pointIndices;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T loop_ub;
  int32_T obj_tmp;
  int32_T pointIndices_tmp;
  boolean_T b;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &ycc_emlrtRSI;
  worldpointset::pointIdOrPointIndex(st, pointIds, pointIndices);
  st.site = &xcc_emlrtRSI;
  checkPointIndices(st, pointIndices);
  st.site = &wcc_emlrtRSI;
  worldpointset::checkViewTable(st, viewTable_ViewId, viewTable_AbsolutePose,
                                viewTable_Features, allViewIds, allPoses);
  if (ViewingDirection.size(0) == 0) {
    obj_tmp = WorldPoints.size(0);
    ViewingDirection.set_size(&ixb_emlrtRTEI, &sp, obj_tmp, 3);
    loop_ub = obj_tmp * 3;
    for (i = 0; i < loop_ub; i++) {
      ViewingDirection[i] = rtNaNF;
    }
    obj[0] = obj_tmp;
    obj[1] = 2;
    DistanceLimits.set_size(&jxb_emlrtRTEI, &sp, obj_tmp, 2);
    obj_tmp <<= 1;
    for (i = 0; i < obj_tmp; i++) {
      DistanceLimits[i] = rtNaNF;
    }
  }
  st.site = &vcc_emlrtRSI;
  i = allPoses.Data.size(1);
  allViewLocations.set_size(&kxb_emlrtRTEI, &sp, allPoses.Data.size(1), 3);
  obj_tmp = allPoses.Data.size(1) * 3;
  for (k = 0; k < obj_tmp; k++) {
    allViewLocations[k] = 0.0;
  }
  for (int32_T b_i{0}; b_i < i; b_i++) {
    st.site = &ucc_emlrtRSI;
    allPoses.parenReference(st, static_cast<real_T>(b_i) + 1.0, &b_r);
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &ueb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    allViewLocations[b_i] = b_r.Translation[0];
    allViewLocations[b_i + allViewLocations.size(0)] = b_r.Translation[1];
    allViewLocations[b_i + allViewLocations.size(0) * 2] = b_r.Translation[2];
  }
  st.site = &tcc_emlrtRSI;
  findViewsOfWorldPoint(st, pointIds, viewIdsToUpdate);
  b = (pointIndices.size(1) == 1);
  st.site = &scc_emlrtRSI;
  worldpointset::checkMissingViewInViewTable(st, viewIdsToUpdate, allViewIds);
  st.site = &rcc_emlrtRSI;
  st.site = &qcc_emlrtRSI;
  b_st.site = &mbb_emlrtRSI;
  c_st.site = &nbb_emlrtRSI;
  d_st.site = &obb_emlrtRSI;
  e_st.site = &aec_emlrtRSI;
  f_st.site = &dcb_emlrtRSI;
  pointIndices_tmp = pointIndices.size(1);
  b_pointIndices = pointIndices.size(1);
  c_pointIndices = pointIndices.reshape(b_pointIndices);
  g_st.site = &ecb_emlrtRSI;
  viewDirectionSize = internal::unaryMinOrMax_anonFcn1(g_st, c_pointIndices);
  if (viewDirectionSize > ViewingDirection.size(0)) {
    k = static_cast<int32_T>(muDoubleScalarFloor(viewDirectionSize));
    if (viewDirectionSize != k) {
      emlrtIntegerCheckR2012b(viewDirectionSize, &yd_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    i1 = static_cast<int32_T>(viewDirectionSize);
    updatedViewDirection.set_size(&lxb_emlrtRTEI, &sp, i1, 3);
    if (i1 != k) {
      emlrtIntegerCheckR2012b(viewDirectionSize, &ae_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    updatedDistanceLimits.set_size(&mxb_emlrtRTEI, &sp, i1, 2);
    obj_tmp = ViewingDirection.size(0);
    st.site = &pcc_emlrtRSI;
    if (ViewingDirection.size(0) > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    if (obj_tmp - 1 >= 0) {
      obj[0] = 1;
      b_iv[0] = 1;
      obj[1] = 3;
      b_iv[1] = 3;
    }
    for (int32_T b_i{0}; b_i < obj_tmp; b_i++) {
      if (b_i + 1 > updatedViewDirection.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, updatedViewDirection.size(0),
                                      &qeb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if (b_i + 1 > obj_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, obj_tmp, &oeb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      emlrtSubAssignSizeCheckR2012b(&obj[0], 2, &b_iv[0], 2, &se_emlrtECI,
                                    (emlrtCTX)&sp);
      updatedViewDirection[b_i] = ViewingDirection[b_i];
      updatedViewDirection[b_i + updatedViewDirection.size(0)] =
          ViewingDirection[b_i + ViewingDirection.size(0)];
      updatedViewDirection[b_i + updatedViewDirection.size(0) * 2] =
          ViewingDirection[b_i + ViewingDirection.size(0) * 2];
    }
    obj_tmp = DistanceLimits.size(0);
    st.site = &occ_emlrtRSI;
    if (DistanceLimits.size(0) > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    if (obj_tmp - 1 >= 0) {
      obj[0] = 1;
      b_iv[0] = 1;
      obj[1] = 2;
      b_iv[1] = 2;
    }
    for (int32_T b_i{0}; b_i < obj_tmp; b_i++) {
      if (b_i + 1 > updatedDistanceLimits.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, updatedDistanceLimits.size(0),
                                      &reb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if (b_i + 1 > obj_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, obj_tmp, &peb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      emlrtSubAssignSizeCheckR2012b(&obj[0], 2, &b_iv[0], 2, &te_emlrtECI,
                                    (emlrtCTX)&sp);
      updatedDistanceLimits[b_i] = DistanceLimits[b_i];
      updatedDistanceLimits[b_i + updatedDistanceLimits.size(0)] =
          DistanceLimits[b_i + DistanceLimits.size(0)];
    }
    ViewingDirection.set_size(&nxb_emlrtRTEI, &sp, updatedViewDirection.size(0),
                              3);
    obj_tmp = updatedViewDirection.size(0) * 3;
    for (k = 0; k < obj_tmp; k++) {
      ViewingDirection[k] = updatedViewDirection[k];
    }
    DistanceLimits.set_size(&oxb_emlrtRTEI, &sp, updatedDistanceLimits.size(0),
                            2);
    obj_tmp = updatedDistanceLimits.size(0) << 1;
    for (k = 0; k < obj_tmp; k++) {
      DistanceLimits[k] = updatedDistanceLimits[k];
    }
  }
  st.site = &ncc_emlrtRSI;
  if (pointIndices.size(1) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T b_i{0}; b_i < pointIndices_tmp; b_i++) {
    if (b) {
      st.site = &mcc_emlrtRSI;
    }
    if (b_i > viewIdsToUpdate.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, viewIdsToUpdate.size(0) - 1,
                                    &xeb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (viewIdsToUpdate[b_i].f1.size(0) != 0) {
      int32_T idx;
      real32_T meanDirectionVector[3];
      real32_T ex;
      real32_T f;
      real32_T meanDirectionVectorNorm;
      boolean_T exitg1;
      st.site = &lcc_emlrtRSI;
      b_st.site = &dfb_emlrtRSI;
      c_st.site = &efb_emlrtRSI;
      do_vectors(c_st, allViewIds, viewIdsToUpdate[b_i].f1, c, ia, ib);
      if (b_i + 1 > pointIndices_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, pointIndices_tmp,
                                      &seb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      k = WorldPoints.size(0);
      if (pointIndices[b_i] !=
          static_cast<int32_T>(muDoubleScalarFloor(pointIndices[b_i]))) {
        emlrtIntegerCheckR2012b(pointIndices[b_i], &xc_emlrtDCI,
                                (emlrtConstCTX)&sp);
      }
      b_pointIndices = static_cast<int32_T>(pointIndices[b_i]);
      if ((b_pointIndices < 1) || (b_pointIndices > k)) {
        emlrtDynamicBoundsCheckR2012b(b_pointIndices, 1, k, &teb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      obj_tmp = ia.size(0);
      updatedViewDirection.set_size(&pxb_emlrtRTEI, &sp, ia.size(0), 3);
      for (k = 0; k < 3; k++) {
        for (i1 = 0; i1 < obj_tmp; i1++) {
          if ((ia[i1] < 1) || (ia[i1] > i)) {
            emlrtDynamicBoundsCheckR2012b(ia[i1], 1, i, &neb_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          updatedViewDirection[i1 + updatedViewDirection.size(0) * k] =
              WorldPoints[(b_pointIndices + WorldPoints.size(0) * k) - 1] -
              static_cast<real32_T>(
                  allViewLocations[(ia[i1] + allViewLocations.size(0) * k) -
                                   1]);
        }
      }
      st.site = &kcc_emlrtRSI;
      vecnorm(st, updatedViewDirection, viewToPointDistances);
      loop_ub = viewToPointDistances.size(0);
      b_viewToPointDistances.set_size(&qxb_emlrtRTEI, &sp,
                                      viewToPointDistances.size(0));
      for (k = 0; k < loop_ub; k++) {
        b_viewToPointDistances[k] = (viewToPointDistances[k] < 1.1920929E-6F);
      }
      st.site = &jcc_emlrtRSI;
      if (any(st, b_viewToPointDistances)) {
        emlrtErrorWithMessageIdR2018a(
            &sp, &bh_emlrtRTEI, "vision:worldpointset:invalidViewLocation",
            "vision:worldpointset:invalidViewLocation", 2, 6,
            pointIndices[b_i]);
      }
      st.site = &icc_emlrtRSI;
      b_st.site = &lf_emlrtRSI;
      c_st.site = &mf_emlrtRSI;
      if ((updatedViewDirection.size(0) != 1) &&
          (viewToPointDistances.size(0) != 1) &&
          (updatedViewDirection.size(0) != viewToPointDistances.size(0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
                                      "MATLAB:sizeDimensionsMustMatch",
                                      "MATLAB:sizeDimensionsMustMatch", 0);
      }
      if (updatedViewDirection.size(0) == viewToPointDistances.size(0)) {
        loop_ub = updatedViewDirection.size(0);
        b_updatedViewDirection.set_size(&ni_emlrtRTEI, &sp,
                                        updatedViewDirection.size(0), 3);
        obj_tmp = (loop_ub / 4) << 2;
        idx = obj_tmp - 4;
        for (k = 0; k < 3; k++) {
          for (i1 = 0; i1 <= idx; i1 += 4) {
            __m128 r1;
            __m128 r2;
            r1 = _mm_loadu_ps(
                &updatedViewDirection[i1 + updatedViewDirection.size(0) * k]);
            r2 = _mm_loadu_ps(&viewToPointDistances[i1]);
            _mm_storeu_ps(
                &b_updatedViewDirection[i1 +
                                        b_updatedViewDirection.size(0) * k],
                _mm_div_ps(r1, r2));
          }
          for (i1 = obj_tmp; i1 < loop_ub; i1++) {
            b_updatedViewDirection[i1 + b_updatedViewDirection.size(0) * k] =
                updatedViewDirection[i1 + updatedViewDirection.size(0) * k] /
                viewToPointDistances[i1];
          }
        }
        loop_ub = b_updatedViewDirection.size(0);
        updatedViewDirection.set_size(&ni_emlrtRTEI, &sp,
                                      b_updatedViewDirection.size(0), 3);
        for (k = 0; k < 3; k++) {
          for (i1 = 0; i1 < loop_ub; i1++) {
            updatedViewDirection[i1 + updatedViewDirection.size(0) * k] =
                b_updatedViewDirection[i1 + b_updatedViewDirection.size(0) * k];
          }
        }
        st.site = &icc_emlrtRSI;
        mean(st, updatedViewDirection, meanDirectionVector);
      } else {
        st.site = &icc_emlrtRSI;
        binary_expand_op_61(st, icc_emlrtRSI, updatedViewDirection,
                            viewToPointDistances, meanDirectionVector);
      }
      meanDirectionVectorNorm = b_norm(meanDirectionVector);
      if (meanDirectionVectorNorm == 0.0F) {
        meanDirectionVectorNorm = 1.0F;
      }
      k = ViewingDirection.size(0);
      if (b_pointIndices > k) {
        emlrtDynamicBoundsCheckR2012b(b_pointIndices, 1, k, &veb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      obj[0] = 1;
      b_iv[0] = 1;
      obj[1] = 3;
      b_iv[1] = 3;
      emlrtSubAssignSizeCheckR2012b(&obj[0], 2, &b_iv[0], 2, &ue_emlrtECI,
                                    (emlrtCTX)&sp);
      ViewingDirection[b_pointIndices - 1] =
          meanDirectionVector[0] / meanDirectionVectorNorm;
      ViewingDirection[(b_pointIndices + ViewingDirection.size(0)) - 1] =
          meanDirectionVector[1] / meanDirectionVectorNorm;
      ViewingDirection[(b_pointIndices + ViewingDirection.size(0) * 2) - 1] =
          meanDirectionVector[2] / meanDirectionVectorNorm;
      k = DistanceLimits.size(0);
      if (b_pointIndices > k) {
        emlrtDynamicBoundsCheckR2012b(b_pointIndices, 1, k, &web_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      obj[0] = 1;
      b_iv[0] = 1;
      obj[1] = 2;
      b_iv[1] = 2;
      emlrtSubAssignSizeCheckR2012b(&obj[0], 2, &b_iv[0], 2, &ve_emlrtECI,
                                    (emlrtCTX)&sp);
      st.site = &hcc_emlrtRSI;
      b_st.site = &vv_emlrtRSI;
      c_st.site = &wv_emlrtRSI;
      d_st.site = &xv_emlrtRSI;
      if (viewToPointDistances.size(0) < 1) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &m_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }
      e_st.site = &yv_emlrtRSI;
      f_st.site = &aw_emlrtRSI;
      obj_tmp = viewToPointDistances.size(0);
      if (viewToPointDistances.size(0) <= 2) {
        if (viewToPointDistances.size(0) == 1) {
          meanDirectionVectorNorm = viewToPointDistances[0];
        } else if ((viewToPointDistances[0] > viewToPointDistances[1]) ||
                   (muSingleScalarIsNaN(viewToPointDistances[0]) &&
                    (!muSingleScalarIsNaN(viewToPointDistances[1])))) {
          meanDirectionVectorNorm = viewToPointDistances[1];
        } else {
          meanDirectionVectorNorm = viewToPointDistances[0];
        }
      } else {
        g_st.site = &if_emlrtRSI;
        if (!muSingleScalarIsNaN(viewToPointDistances[0])) {
          idx = 1;
        } else {
          idx = 0;
          h_st.site = &jf_emlrtRSI;
          if (viewToPointDistances.size(0) > 2147483646) {
            i_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(i_st);
          }
          k = 2;
          exitg1 = false;
          while ((!exitg1) && (k <= obj_tmp)) {
            if (!muSingleScalarIsNaN(viewToPointDistances[k - 1])) {
              idx = k;
              exitg1 = true;
            } else {
              k++;
            }
          }
        }
        if (idx == 0) {
          meanDirectionVectorNorm = viewToPointDistances[0];
        } else {
          g_st.site = &hf_emlrtRSI;
          meanDirectionVectorNorm = viewToPointDistances[idx - 1];
          loop_ub = idx + 1;
          h_st.site = &kf_emlrtRSI;
          if ((idx + 1 <= viewToPointDistances.size(0)) &&
              (viewToPointDistances.size(0) > 2147483646)) {
            i_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(i_st);
          }
          for (k = loop_ub; k <= obj_tmp; k++) {
            f = viewToPointDistances[k - 1];
            if (meanDirectionVectorNorm > f) {
              meanDirectionVectorNorm = f;
            }
          }
        }
      }
      st.site = &hcc_emlrtRSI;
      b_st.site = &mbb_emlrtRSI;
      c_st.site = &nbb_emlrtRSI;
      d_st.site = &obb_emlrtRSI;
      e_st.site = &pbb_emlrtRSI;
      f_st.site = &qbb_emlrtRSI;
      if (viewToPointDistances.size(0) <= 2) {
        if (viewToPointDistances.size(0) == 1) {
          ex = viewToPointDistances[0];
        } else if ((viewToPointDistances[0] < viewToPointDistances[1]) ||
                   (muSingleScalarIsNaN(viewToPointDistances[0]) &&
                    (!muSingleScalarIsNaN(viewToPointDistances[1])))) {
          ex = viewToPointDistances[1];
        } else {
          ex = viewToPointDistances[0];
        }
      } else {
        g_st.site = &if_emlrtRSI;
        if (!muSingleScalarIsNaN(viewToPointDistances[0])) {
          idx = 1;
        } else {
          idx = 0;
          h_st.site = &jf_emlrtRSI;
          if (viewToPointDistances.size(0) > 2147483646) {
            i_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(i_st);
          }
          k = 2;
          exitg1 = false;
          while ((!exitg1) && (k <= obj_tmp)) {
            if (!muSingleScalarIsNaN(viewToPointDistances[k - 1])) {
              idx = k;
              exitg1 = true;
            } else {
              k++;
            }
          }
        }
        if (idx == 0) {
          ex = viewToPointDistances[0];
        } else {
          g_st.site = &hf_emlrtRSI;
          ex = viewToPointDistances[idx - 1];
          loop_ub = idx + 1;
          h_st.site = &kf_emlrtRSI;
          if ((idx + 1 <= viewToPointDistances.size(0)) &&
              (viewToPointDistances.size(0) > 2147483646)) {
            i_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(i_st);
          }
          for (k = loop_ub; k <= obj_tmp; k++) {
            f = viewToPointDistances[k - 1];
            if (ex < f) {
              ex = f;
            }
          }
        }
      }
      DistanceLimits[b_pointIndices - 1] = meanDirectionVectorNorm;
      DistanceLimits[(b_pointIndices + DistanceLimits.size(0)) - 1] = ex;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::b_updateRepresentativeView(
    const emlrtStack &sp, const array<real_T, 1U> &pointIds,
    const array<uint32_T, 1U> &viewTable_ViewId,
    const array<cell_wrap_8, 2U> &viewTable_Features)
{
  array<cell_wrap_133, 1U> viewIdsToUpdate;
  array<cell_wrap_25, 1U> featureIndices;
  array<real_T, 2U> pointIndices;
  array<real_T, 1U> b_pointIndices;
  array<real_T, 1U> c_updatedRepresentativeFeatureI;
  array<real_T, 1U> updatedRepresentativeViewId;
  array<int32_T, 1U> ia;
  array<int32_T, 1U> ib;
  array<real32_T, 2U> allFeaturesOfSinglePoint;
  array<uint32_T, 1U> c;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  real_T d;
  real_T viewRepresentativeSize;
  int32_T b_iv[2];
  int32_T obj[2];
  int32_T i;
  int32_T k;
  int32_T loop_ub;
  int32_T obj_tmp;
  int32_T pointIndices_tmp;
  boolean_T p[2];
  boolean_T b;
  boolean_T exitg1;
  boolean_T y;
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
  st.site = &oec_emlrtRSI;
  worldpointset::pointIdOrPointIndex(st, pointIds, pointIndices);
  st.site = &nec_emlrtRSI;
  checkPointIndices(st, pointIndices);
  st.site = &mec_emlrtRSI;
  b_st.site = &adc_emlrtRSI;
  b_st.site = &bdc_emlrtRSI;
  worldpointset::checkViewIds(b_st, viewTable_ViewId);
  b_st.site = &cdc_emlrtRSI;
  c_st.site = &gdc_emlrtRSI;
  i = viewTable_Features.size(0);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    if (b_i > viewTable_Features.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, viewTable_Features.size(0) - 1,
                                    &gy_emlrtBCI, &b_st);
    }
  }
  if ((RepresentativeViewId.size(0) == 0) ||
      (RepresentativeViewId.size(1) == 0)) {
    obj_tmp = WorldPoints.size(0);
    RepresentativeViewId.set_size(&rxb_emlrtRTEI, &sp, obj_tmp, 1);
    for (i = 0; i < obj_tmp; i++) {
      RepresentativeViewId[i] = rtNaN;
    }
    RepresentativeFeatureIndex.set_size(&sxb_emlrtRTEI, &sp, obj_tmp, 1);
    for (i = 0; i < obj_tmp; i++) {
      RepresentativeFeatureIndex[i] = rtNaN;
    }
  }
  st.site = &lec_emlrtRSI;
  findViewsOfWorldPoint(st, pointIds, viewIdsToUpdate, featureIndices);
  b = (pointIndices.size(1) == 1);
  st.site = &kec_emlrtRSI;
  worldpointset::checkMissingViewInViewTable(st, viewIdsToUpdate,
                                             viewTable_ViewId);
  st.site = &jec_emlrtRSI;
  st.site = &iec_emlrtRSI;
  b_st.site = &mbb_emlrtRSI;
  c_st.site = &nbb_emlrtRSI;
  d_st.site = &obb_emlrtRSI;
  e_st.site = &aec_emlrtRSI;
  f_st.site = &dcb_emlrtRSI;
  pointIndices_tmp = pointIndices.size(1);
  obj_tmp = pointIndices.size(1);
  b_pointIndices = pointIndices.reshape(obj_tmp);
  g_st.site = &ecb_emlrtRSI;
  viewRepresentativeSize =
      internal::unaryMinOrMax_anonFcn1(g_st, b_pointIndices);
  p[0] = (RepresentativeViewId.size(0) < viewRepresentativeSize);
  p[1] = (RepresentativeViewId.size(1) < viewRepresentativeSize);
  y = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!p[k]) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (!(viewRepresentativeSize >= 0.0)) {
      emlrtNonNegativeCheckR2012b(viewRepresentativeSize, &ad_emlrtDCI,
                                  (emlrtConstCTX)&sp);
    }
    d = static_cast<int32_T>(muDoubleScalarFloor(viewRepresentativeSize));
    if (viewRepresentativeSize != d) {
      emlrtIntegerCheckR2012b(viewRepresentativeSize, &yc_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    updatedRepresentativeViewId.set_size(
        &txb_emlrtRTEI, &sp, static_cast<int32_T>(viewRepresentativeSize));
    if (viewRepresentativeSize != d) {
      emlrtIntegerCheckR2012b(viewRepresentativeSize, &be_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    c_updatedRepresentativeFeatureI.set_size(
        &gec_emlrtRTEI, &sp, static_cast<int32_T>(viewRepresentativeSize));
    obj_tmp = RepresentativeViewId.size(0);
    st.site = &hec_emlrtRSI;
    if (RepresentativeViewId.size(0) > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    if (obj_tmp - 1 >= 0) {
      b_iv[0] = 1;
      b_iv[1] = RepresentativeViewId.size(1);
    }
    for (int32_T b_i{0}; b_i < obj_tmp; b_i++) {
      if (b_i + 1 > updatedRepresentativeViewId.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                                      updatedRepresentativeViewId.size(0),
                                      &ffb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if (b_i + 1 > obj_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, obj_tmp, &hfb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      obj[0] = 1;
      obj[1] = 1;
      emlrtSubAssignSizeCheckR2012b(&obj[0], 2, &b_iv[0], 2, &xe_emlrtECI,
                                    (emlrtCTX)&sp);
      i = RepresentativeViewId.size(1);
      if (i < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i, &wkb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      updatedRepresentativeViewId[b_i] = RepresentativeViewId[b_i];
    }
    obj_tmp = RepresentativeFeatureIndex.size(0);
    st.site = &gec_emlrtRSI;
    if (RepresentativeFeatureIndex.size(0) > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    if (obj_tmp - 1 >= 0) {
      b_iv[0] = 1;
      b_iv[1] = RepresentativeFeatureIndex.size(1);
    }
    for (int32_T b_i{0}; b_i < obj_tmp; b_i++) {
      if (b_i + 1 > c_updatedRepresentativeFeatureI.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                                      c_updatedRepresentativeFeatureI.size(0),
                                      &efb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if (b_i + 1 > obj_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, obj_tmp, &gfb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      obj[0] = 1;
      obj[1] = 1;
      emlrtSubAssignSizeCheckR2012b(&obj[0], 2, &b_iv[0], 2, &we_emlrtECI,
                                    (emlrtCTX)&sp);
      i = RepresentativeFeatureIndex.size(1);
      if (i < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i, &xkb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      c_updatedRepresentativeFeatureI[b_i] = RepresentativeFeatureIndex[b_i];
    }
    loop_ub = updatedRepresentativeViewId.size(0);
    RepresentativeViewId.set_size(&uxb_emlrtRTEI, &sp,
                                  updatedRepresentativeViewId.size(0), 1);
    for (i = 0; i < loop_ub; i++) {
      RepresentativeViewId[i] = updatedRepresentativeViewId[i];
    }
    loop_ub = c_updatedRepresentativeFeatureI.size(0);
    RepresentativeFeatureIndex.set_size(
        &vxb_emlrtRTEI, &sp, c_updatedRepresentativeFeatureI.size(0), 1);
    for (i = 0; i < loop_ub; i++) {
      RepresentativeFeatureIndex[i] = c_updatedRepresentativeFeatureI[i];
    }
  }
  st.site = &fec_emlrtRSI;
  if (pointIndices.size(1) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T b_i{0}; b_i < pointIndices_tmp; b_i++) {
    if (b) {
      st.site = &eec_emlrtRSI;
    }
    if (b_i > viewIdsToUpdate.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, viewIdsToUpdate.size(0) - 1,
                                    &bfb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (b_i > featureIndices.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, featureIndices.size(0) - 1,
                                    &afb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (b_i + 1 > pointIndices_tmp) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, pointIndices_tmp, &dfb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i = viewIdsToUpdate[b_i].f1.size(0);
    if (i < 3) {
      int32_T i1;
      int32_T i2;
      if (i < 1) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i, &ifb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i1 = RepresentativeViewId.size(0) * RepresentativeViewId.size(1);
      if (pointIndices[b_i] !=
          static_cast<int32_T>(muDoubleScalarFloor(pointIndices[b_i]))) {
        emlrtIntegerCheckR2012b(pointIndices[b_i], &bd_emlrtDCI,
                                (emlrtConstCTX)&sp);
      }
      i2 = static_cast<int32_T>(pointIndices[b_i]);
      if ((i2 < 1) || (i2 > i1)) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &jfb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      RepresentativeViewId[i2 - 1] = viewIdsToUpdate[b_i].f1[i - 1];
      i1 = featureIndices[b_i].f1.size(0);
      if (i > i1) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i1, &kfb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i1 = RepresentativeFeatureIndex.size(0) *
           RepresentativeFeatureIndex.size(1);
      if (i2 > i1) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &lfb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      RepresentativeFeatureIndex[i2 - 1] = featureIndices[b_i].f1[i - 1];
    } else {
      int32_T i1;
      int32_T loop_ub_tmp;
      st.site = &dec_emlrtRSI;
      b_st.site = &dfb_emlrtRSI;
      c_st.site = &efb_emlrtRSI;
      do_vectors(c_st, viewTable_ViewId, viewIdsToUpdate[b_i].f1, c, ia, ib);
      loop_ub_tmp = ia.size(0);
      updatedRepresentativeViewId.set_size(&kkb_emlrtRTEI, &st, ia.size(0));
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        updatedRepresentativeViewId[i1] = ia[i1];
      }
      loop_ub = viewTable_Features[0].f1.size(1);
      allFeaturesOfSinglePoint.set_size(&wxb_emlrtRTEI, &sp,
                                        viewTable_Features[0].f1.size(1), i);
      obj_tmp = i * viewTable_Features[0].f1.size(1);
      for (i1 = 0; i1 < obj_tmp; i1++) {
        allFeaturesOfSinglePoint[i1] = 0.0F;
      }
      for (k = 0; k < i; k++) {
        int32_T viewTable_Features_tmp;
        if (k + 1 > loop_ub_tmp) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, loop_ub_tmp, &mfb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        i1 = static_cast<int32_T>(updatedRepresentativeViewId[k]) - 1;
        if ((i1 < 0) || (i1 > viewTable_Features.size(0) - 1)) {
          emlrtDynamicBoundsCheckR2012b(i1, 0, viewTable_Features.size(0) - 1,
                                        &yeb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        obj_tmp = static_cast<int32_T>(updatedRepresentativeViewId[k]) - 1;
        viewTable_Features_tmp =
            viewTable_Features
                [static_cast<int32_T>(updatedRepresentativeViewId[k]) - 1]
                    .f1.size(0) *
            viewTable_Features
                [static_cast<int32_T>(updatedRepresentativeViewId[k]) - 1]
                    .f1.size(1);
        if (k + 1 > i) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, i, &cfb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        for (i1 = 0; i1 < loop_ub; i1++) {
          int32_T i2;
          i2 = featureIndices[b_i].f1.size(0);
          if (k + 1 > i2) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, i2, &pfb_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          d = featureIndices[b_i].f1[k];
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &dd_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > viewTable_Features_tmp)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          viewTable_Features_tmp, &pfb_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          allFeaturesOfSinglePoint[i1 + allFeaturesOfSinglePoint.size(0) * k] =
              viewTable_Features[obj_tmp].f1[static_cast<int32_T>(d) - 1];
        }
      }
      st.site = &cec_emlrtRSI;
      viewRepresentativeSize = worldpointset::findMedoidFeature(
          st, allFeaturesOfSinglePoint, static_cast<real_T>(i));
      if ((static_cast<int32_T>(viewRepresentativeSize) < 1) ||
          (static_cast<int32_T>(viewRepresentativeSize) > i)) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(viewRepresentativeSize), 1, i, &nfb_emlrtBCI,
            (emlrtConstCTX)&sp);
      }
      i = RepresentativeViewId.size(0) * RepresentativeViewId.size(1);
      if (pointIndices[b_i] !=
          static_cast<int32_T>(muDoubleScalarFloor(pointIndices[b_i]))) {
        emlrtIntegerCheckR2012b(pointIndices[b_i], &cd_emlrtDCI,
                                (emlrtConstCTX)&sp);
      }
      i1 = static_cast<int32_T>(pointIndices[b_i]);
      if ((i1 < 1) || (i1 > i)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i, &ofb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      RepresentativeViewId[i1 - 1] =
          viewIdsToUpdate[b_i]
              .f1[static_cast<int32_T>(viewRepresentativeSize) - 1];
      i = featureIndices[b_i].f1.size(0);
      if ((static_cast<int32_T>(viewRepresentativeSize) < 1) ||
          (static_cast<int32_T>(viewRepresentativeSize) > i)) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(viewRepresentativeSize), 1, i, &qfb_emlrtBCI,
            (emlrtConstCTX)&sp);
      }
      i = RepresentativeFeatureIndex.size(0) *
          RepresentativeFeatureIndex.size(1);
      if (i1 > i) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i, &rfb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      RepresentativeFeatureIndex[i1 - 1] =
          featureIndices[b_i]
              .f1[static_cast<int32_T>(viewRepresentativeSize) - 1];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::checkIfViewIsMissing(
    const emlrtStack &sp, const array<uint32_T, 1U> &viewId) const
{
  array<int32_T, 1U> b_r;
  array<boolean_T, 1U> missingViewIdx;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T loop_ub_tmp;
  int32_T trueCount;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &vfc_emlrtRSI;
  b_st.site = &xyb_emlrtRSI;
  c_st.site = &adb_emlrtRSI;
  d_st.site = &bdb_emlrtRSI;
  c_isMember(d_st, viewId, ViewIds, missingViewIdx);
  loop_ub_tmp = missingViewIdx.size(0);
  for (trueCount = 0; trueCount < loop_ub_tmp; trueCount++) {
    missingViewIdx[trueCount] = !missingViewIdx[trueCount];
  }
  b_st.site = &ydc_emlrtRSI;
  if (any(b_st, missingViewIdx)) {
    trueCount = 0;
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      if (missingViewIdx[i]) {
        trueCount++;
      }
    }
    b_r.set_size(&tkb_emlrtRTEI, &st, trueCount);
    trueCount = 0;
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      if (missingViewIdx[i]) {
        b_r[trueCount] = i;
        trueCount++;
      }
    }
    loop_ub_tmp = b_r.size(0);
    for (trueCount = 0; trueCount < loop_ub_tmp; trueCount++) {
      if (b_r[trueCount] > viewId.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_r[trueCount], 0, viewId.size(0) - 1,
                                      &hn_emlrtBCI, &st);
      }
    }
    if (b_r.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, b_r.size(0), &wm_emlrtBCI, &st);
    }
    emlrtErrorWithMessageIdR2018a(
        &st, &yd_emlrtRTEI, "vision:viewSet:missingViewId",
        "vision:viewSet:missingViewId", 2, 13, viewId[b_r[0]]);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::checkPointIndices(
    const emlrtStack &sp, const array<real_T, 2U> &pointIndices) const
{
  static const int32_T b_iv[2]{1, 7};
  static const char_T rfmt[7]{'%', '2', '3', '.', '1', '5', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &djb_emlrtRSI;
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
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= pointIndices.size(1) - 1)) {
    if (!(pointIndices[k] <= 0.0)) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:worldpointset:expectedPositive", 3, 4, 12, "pointIndices");
  }
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= pointIndices.size(1) - 1)) {
    if ((!muDoubleScalarIsInf(pointIndices[k])) &&
        (!muDoubleScalarIsNaN(pointIndices[k])) &&
        (muDoubleScalarFloor(pointIndices[k]) == pointIndices[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &qc_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedInteger",
        "MATLAB:worldpointset:expectedInteger", 3, 4, 12, "pointIndices");
  }
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= pointIndices.size(1) - 1)) {
    if (pointIndices[k] <= WorldPoints.size(0)) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    char_T numstr[23];
    c_st.site = &ejb_emlrtRSI;
    d_st.site = &fjb_emlrtRSI;
    e_st.site = &gjb_emlrtRSI;
    y = nullptr;
    m = emlrtCreateCharArray(2, &b_iv[0]);
    emlrtInitCharArrayR2013a(&e_st, 7, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_y = nullptr;
    m = emlrtCreateDoubleScalar(static_cast<real_T>(WorldPoints.size(0)));
    emlrtAssign(&b_y, m);
    f_st.site = &hid_emlrtRSI;
    b_emlrt_marshallIn(f_st, b_sprintf(f_st, y, b_y, e_emlrtMCI),
                       "<output of sprintf>", numstr);
    emlrtErrorWithMessageIdR2018a(
        &b_st, &rc_emlrtRTEI, "MATLAB:validateattributes:expectedArray",
        "MATLAB:worldpointset:notLessEqual", 9, 4, 12, "pointIndices", 4, 2,
        "<=", 4, 23, &numstr[0]);
  }
}

void worldpointset::checkViewIds(const emlrtStack &sp,
                                 const array<uint32_T, 1U> &viewIds)
{
  array<uint32_T, 1U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &ddc_emlrtRSI;
  b_st.site = &edc_emlrtRSI;
  c_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= viewIds.size(0) - 1)) {
    if (viewIds[k] > 0U) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:worldpointset:expectedPositive", 3, 4, 7, "viewIds");
  }
  b_st.site = &fdc_emlrtRSI;
  c_st.site = &tqb_emlrtRSI;
  unique_vector(c_st, viewIds, b_r);
  if (b_r.size(0) != viewIds.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &ch_emlrtRTEI,
                                  "vision:viewSet:duplicateViewIds",
                                  "vision:viewSet:duplicateViewIds", 0);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::findViewsOfWorldPoint(
    const emlrtStack &sp, const array<real_T, 1U> &pointIds,
    array<cell_wrap_133, 1U> &viewIds) const
{
  array<cell_wrap_133, 1U> vIds;
  array<cell_wrap_25, 1U> featureIndices;
  array<real_T, 2U> pointIndices;
  cell_wrap_133 b_vIds;
  cell_wrap_25 fIndices;
  emlrtStack st;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &hdc_emlrtRSI;
  worldpointset::pointIdOrPointIndex(st, pointIds, pointIndices);
  st.site = &idc_emlrtRSI;
  checkPointIndices(st, pointIndices);
  i = pointIndices.size(1);
  viewIds.set_size(&neb_emlrtRTEI, &sp, pointIndices.size(1));
  if (pointIndices.size(1) == 1) {
    int32_T loop_ub_tmp;
    st.site = &jdc_emlrtRSI;
    findViewsOfSingleWorldPoint(st, pointIndices, vIds, featureIndices);
    st.site = &kdc_emlrtRSI;
    if (vIds.size(0) == 0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &de_emlrtRTEI,
          "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces",
          "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces", 0);
    }
    loop_ub_tmp = vIds[0].f1.size(0);
    viewIds[0].f1.set_size(&peb_emlrtRTEI, &sp, vIds[0].f1.size(0));
    for (i = 0; i < loop_ub_tmp; i++) {
      viewIds[0].f1[i] = vIds[0].f1[i];
    }
    st.site = &ldc_emlrtRSI;
    if (featureIndices.size(0) == 0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &de_emlrtRTEI,
          "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces",
          "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces", 0);
    }
  } else {
    for (int32_T b_i{0}; b_i < i; b_i++) {
      int32_T i1;
      int32_T loop_ub_tmp;
      if (b_i + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &xm_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      st.site = &mdc_emlrtRSI;
      findViewsOfSingleWorldPoint(st, pointIndices[b_i], b_vIds, fIndices);
      loop_ub_tmp = b_vIds.f1.size(0);
      i1 = viewIds.size(0) - 1;
      if (b_i > viewIds.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, viewIds.size(0) - 1, &ym_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      viewIds[b_i].f1.set_size(&oeb_emlrtRTEI, &sp, b_vIds.f1.size(0));
      for (int32_T i2{0}; i2 < loop_ub_tmp; i2++) {
        if (b_i > i1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &ym_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        viewIds[b_i].f1[i2] = b_vIds.f1[i2];
      }
      loop_ub_tmp = fIndices.f1.size(0);
      if (b_i > viewIds.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, viewIds.size(0) - 1, &an_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      for (int32_T i2{0}; i2 < loop_ub_tmp; i2++) {
        if (b_i > i1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &an_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::findVisibilityOfView(
    const emlrtStack &sp, const array<uint32_T, 1U> &viewId,
    array<cell_wrap_25, 1U> &pointIndices,
    array<cell_wrap_25, 1U> &featureIndices, array<real_T, 1U> &varargout_1,
    sparse &varargout_2) const
{
  d_sparse s;
  e_sparse b_s;
  array<real_T, 1U> b_varargout_1;
  array<real_T, 1U> viewIndex;
  array<int32_T, 1U> ia;
  array<int32_T, 1U> ib;
  array<uint32_T, 1U> c;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T b_loop_ub;
  int32_T cend;
  int32_T i;
  int32_T loop_ub;
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
  st.site = &pfc_emlrtRSI;
  worldpointset::checkViewIds(st, viewId);
  st.site = &qfc_emlrtRSI;
  checkIfViewIsMissing(st, viewId);
  st.site = &rfc_emlrtRSI;
  if (WorldPoints.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(&st, &pe_emlrtRTEI,
                                  "vision:worldpointset:noWorldPoints",
                                  "vision:worldpointset:noWorldPoints", 0);
  }
  st.site = &sfc_emlrtRSI;
  b_st.site = &ijb_emlrtRSI;
  c_st.site = &bjb_emlrtRSI;
  d_st.site = &efb_emlrtRSI;
  do_vectors(d_st, viewId, ViewIds, c, ia, ib);
  cend = ib.size(0);
  viewIndex.set_size(&ugb_emlrtRTEI, &b_st, ib.size(0));
  for (i = 0; i < cend; i++) {
    viewIndex[i] = ib[i];
  }
  st.site = &tfc_emlrtRSI;
  pointIndices.set_size(&vgb_emlrtRTEI, &sp, ib.size(0));
  featureIndices.set_size(&wgb_emlrtRTEI, &sp, ib.size(0));
  if (viewId.size(0) == 1) {
    st.site = &ufc_emlrtRSI;
    findWorldPointsInSingleView(st, viewIndex, pointIndices[0].f1,
                                featureIndices[0].f1);
    if (viewIndex.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, viewIndex.size(0) - 1, &ho_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  } else {
    for (int32_T b_i{0}; b_i < cend; b_i++) {
      if (b_i > featureIndices.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, featureIndices.size(0) - 1,
                                      &mq_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if (b_i + 1 > cend) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, cend, &kq_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      st.site = &lnc_emlrtRSI;
      findWorldPointsInSingleView(st, viewIndex[b_i], pointIndices[b_i].f1,
                                  featureIndices[b_i].f1);
    }
  }
  st.site = &mtc_emlrtRSI;
  varargout_1.set_size(&bnb_emlrtRTEI, &sp, 0);
  if (viewId.size(0) == 1) {
    st.site = &ntc_emlrtRSI;
    if (pointIndices.size(0) == 0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &de_emlrtRTEI,
          "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces",
          "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces", 0);
    }
    cend = pointIndices[0].f1.size(0);
    varargout_1.set_size(&dnb_emlrtRTEI, &sp, pointIndices[0].f1.size(0));
    for (i = 0; i < cend; i++) {
      varargout_1[i] = pointIndices[0].f1[i];
    }
  } else {
    for (int32_T b_i{0}; b_i < cend; b_i++) {
      st.site = &otc_emlrtRSI;
      if (b_i > pointIndices.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, pointIndices.size(0) - 1,
                                      &ju_emlrtBCI, &st);
      }
      loop_ub = varargout_1.size(0);
      b_loop_ub = pointIndices[b_i].f1.size(0);
      b_varargout_1.set_size(&cnb_emlrtRTEI, &st,
                             varargout_1.size(0) + b_loop_ub);
      for (i = 0; i < loop_ub; i++) {
        b_varargout_1[i] = varargout_1[i];
      }
      for (i = 0; i < b_loop_ub; i++) {
        b_varargout_1[i + varargout_1.size(0)] = pointIndices[b_i].f1[i];
      }
      b_st.site = &tqb_emlrtRSI;
      unique_vector(b_st, b_varargout_1, varargout_1);
    }
  }
  st.site = &ptc_emlrtRSI;
  CorrespondencesInternal.parenReference(st, varargout_1, viewIndex,
                                         varargout_2);
  st.site = &qtc_emlrtRSI;
  st.site = &rtc_emlrtRSI;
  internal::bigProduct(varargout_2.m, varargout_2.n, loop_ub);
  if (loop_ub != 0) {
    emlrtErrorWithMessageIdR2018a(&st, &af_emlrtRTEI,
                                  "Coder:toolbox:SparseNumelTooBig",
                                  "Coder:toolbox:SparseNumelTooBig", 0);
  }
  i = varargout_2.m * varargout_2.n;
  for (int32_T b_i{0}; b_i < i; b_i++) {
    real_T b_varargout_2[2];
    real_T workspace_sa;
    st.site = &stc_emlrtRSI;
    b_st.site = &utc_emlrtRSI;
    c_st.site = &vtc_emlrtRSI;
    internal::bigProduct(varargout_2.m, varargout_2.n, loop_ub);
    if (loop_ub == 0) {
      d_st.site = &wtc_emlrtRSI;
      cend = varargout_2.m * varargout_2.n;
      if (!(static_cast<real_T>(static_cast<uint32_T>(b_i) + 1U) <= cend)) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &vc_emlrtRTEI, "Coder:builtins:IndexOutOfBounds",
            "Coder:builtins:IndexOutOfBounds", 6, 6,
            static_cast<real_T>(static_cast<uint32_T>(b_i) + 1U), 12, 1, 12,
            cend);
      }
    } else {
      d_st.site = &xtc_emlrtRSI;
    }
    d_st.site = &ytc_emlrtRSI;
    s.colidx.set_size(&enb_emlrtRTEI, &c_st, 2);
    s.colidx[1] = 1;
    d_st.site = &auc_emlrtRSI;
    b_varargout_2[0] = varargout_2.m;
    b_varargout_2[1] = varargout_2.n;
    e_st.site = &vbc_emlrtRSI;
    cend = internal::ind2sub(e_st, b_varargout_2, b_i + 1, loop_ub);
    b_loop_ub = b_sparse_locBsearch(
        varargout_2.rowidx, static_cast<real_T>(cend),
        varargout_2.colidx[loop_ub - 1], varargout_2.colidx[loop_ub], found);
    if (found) {
      s.d.set_size(&enb_emlrtRTEI, &c_st, 1);
      s.d[0] = varargout_2.d[b_loop_ub - 1];
      s.colidx[1] = 2;
    } else {
      s.d.set_size(&enb_emlrtRTEI, &c_st, 1);
      s.d[0] = 0.0;
    }
    st.site = &stc_emlrtRSI;
    b_st.site = &buc_emlrtRSI;
    if (s.colidx[1] - 1 > 0) {
      workspace_sa = s.d[0];
    } else {
      workspace_sa = 0.0;
    }
    c_st.site = &cuc_emlrtRSI;
    i_sparse(c_st, workspace_sa != 0.0, b_s);
    st.site = &stc_emlrtRSI;
    found = false;
    cend = b_s.colidx[1];
    loop_ub = b_s.colidx[0];
    b_st.site = &tnb_emlrtRSI;
    if ((b_s.colidx[0] <= b_s.colidx[1] - 1) &&
        (b_s.colidx[1] - 1 > 2147483646)) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (b_loop_ub = loop_ub; b_loop_ub < cend; b_loop_ub++) {
      found = b_s.d[0];
    }
    if (found) {
      st.site = &ttc_emlrtRSI;
      varargout_2.parenAssign(st, static_cast<real_T>(b_i) + 1.0);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::findWorldPointsInSingleView(
    const emlrtStack &sp, real_T viewIndex, array<real_T, 1U> &pointIndices,
    array<real_T, 1U> &featureIndices) const
{
  b_sparse x;
  array<int32_T, 1U> i_tmp;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T nx;
  int32_T nx_tmp;
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
  st.site = &xfc_emlrtRSI;
  b_st.site = &wfc_emlrtRSI;
  CorrespondencesInternal.parenReference(b_st, viewIndex, x);
  b_st.site = &udc_emlrtRSI;
  nx_tmp = x.colidx[x.colidx.size(0) - 1];
  nx = nx_tmp - 2;
  if (nx_tmp - 1 == 0) {
    i_tmp.set_size(&deb_emlrtRTEI, &b_st, 0);
    featureIndices.set_size(&ahb_emlrtRTEI, &b_st, 0);
  } else {
    int32_T idx;
    c_st.site = &wwb_emlrtRSI;
    if (nx_tmp - 1 < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(nx_tmp - 1), &gb_emlrtDCI,
                                  &c_st);
    }
    i_tmp.set_size(&wdb_emlrtRTEI, &c_st, nx_tmp - 1);
    featureIndices.set_size(&xgb_emlrtRTEI, &c_st, nx_tmp - 1);
    d_st.site = &xwb_emlrtRSI;
    if (nx_tmp - 1 > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (idx = 0; idx <= nx; idx++) {
      i_tmp[idx] = x.rowidx[idx];
    }
    d_st.site = &ywb_emlrtRSI;
    if (nx_tmp - 1 > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (idx = 0; idx <= nx; idx++) {
      featureIndices[idx] = x.d[idx];
    }
    idx = 0;
    nx = 1;
    while (idx < nx_tmp - 1) {
      if (idx == x.colidx[nx] - 1) {
        nx++;
      } else {
        idx++;
      }
    }
    if (idx > nx_tmp - 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &ud_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nx_tmp - 1 == 1) {
      if (idx == 0) {
        i_tmp.set_size(&beb_emlrtRTEI, &c_st, 0);
        featureIndices.set_size(&ygb_emlrtRTEI, &c_st, 0);
      }
    } else {
      int32_T b_iv[2];
      b_iv[0] = 1;
      b_iv[1] = idx;
      d_st.site = &axb_emlrtRSI;
      internal::indexShapeCheck(d_st, i_tmp.size(0), b_iv);
      i_tmp.set_size(&ydb_emlrtRTEI, &c_st, idx);
      b_iv[0] = 1;
      b_iv[1] = idx;
      d_st.site = &bxb_emlrtRSI;
      internal::indexShapeCheck(d_st, nx_tmp - 1, b_iv);
      b_iv[0] = 1;
      b_iv[1] = idx;
      d_st.site = &cxb_emlrtRSI;
      internal::indexShapeCheck(d_st, featureIndices.size(0), b_iv);
      featureIndices.set_size(&yeb_emlrtRTEI, &c_st, idx);
    }
  }
  nx = i_tmp.size(0);
  pointIndices.set_size(&bhb_emlrtRTEI, &st, i_tmp.size(0));
  for (nx_tmp = 0; nx_tmp < nx; nx_tmp++) {
    pointIndices[nx_tmp] = i_tmp[nx_tmp];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::findWorldPointsInSingleView(
    const emlrtStack &sp, const array<real_T, 1U> &viewIndex,
    array<real_T, 1U> &pointIndices, array<real_T, 1U> &featureIndices) const
{
  sparse x;
  array<int32_T, 1U> i_tmp;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T nx;
  int32_T nx_tmp;
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
  st.site = &xfc_emlrtRSI;
  b_st.site = &wfc_emlrtRSI;
  CorrespondencesInternal.parenReference(b_st, viewIndex, x);
  b_st.site = &udc_emlrtRSI;
  nx_tmp = x.colidx[x.colidx.size(0) - 1];
  nx = nx_tmp - 2;
  if (nx_tmp - 1 == 0) {
    i_tmp.set_size(&deb_emlrtRTEI, &b_st, 0);
    featureIndices.set_size(&ahb_emlrtRTEI, &b_st, 0);
  } else {
    int32_T idx;
    c_st.site = &wwb_emlrtRSI;
    if (nx_tmp - 1 < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(nx_tmp - 1), &gb_emlrtDCI,
                                  &c_st);
    }
    i_tmp.set_size(&wdb_emlrtRTEI, &c_st, nx_tmp - 1);
    featureIndices.set_size(&xgb_emlrtRTEI, &c_st, nx_tmp - 1);
    d_st.site = &xwb_emlrtRSI;
    if (nx_tmp - 1 > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (idx = 0; idx <= nx; idx++) {
      i_tmp[idx] = x.rowidx[idx];
    }
    d_st.site = &ywb_emlrtRSI;
    if (nx_tmp - 1 > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (idx = 0; idx <= nx; idx++) {
      featureIndices[idx] = x.d[idx];
    }
    idx = 0;
    nx = 1;
    while (idx < nx_tmp - 1) {
      if (idx == x.colidx[nx] - 1) {
        nx++;
      } else {
        idx++;
      }
    }
    if (idx > nx_tmp - 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &ud_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nx_tmp - 1 == 1) {
      if (idx == 0) {
        i_tmp.set_size(&beb_emlrtRTEI, &c_st, 0);
        featureIndices.set_size(&ygb_emlrtRTEI, &c_st, 0);
      }
    } else {
      int32_T b_iv[2];
      b_iv[0] = 1;
      b_iv[1] = idx;
      d_st.site = &axb_emlrtRSI;
      internal::indexShapeCheck(d_st, i_tmp.size(0), b_iv);
      i_tmp.set_size(&ydb_emlrtRTEI, &c_st, idx);
      b_iv[0] = 1;
      b_iv[1] = idx;
      d_st.site = &bxb_emlrtRSI;
      internal::indexShapeCheck(d_st, nx_tmp - 1, b_iv);
      b_iv[0] = 1;
      b_iv[1] = idx;
      d_st.site = &cxb_emlrtRSI;
      internal::indexShapeCheck(d_st, featureIndices.size(0), b_iv);
      featureIndices.set_size(&yeb_emlrtRTEI, &c_st, idx);
    }
  }
  if ((x.m == 1) && (i_tmp.size(0) != 1) && (x.n >= 2)) {
    c_st.site = &bq_emlrtRSI;
    internal::d_warning(c_st);
  }
  nx = i_tmp.size(0);
  pointIndices.set_size(&bhb_emlrtRTEI, &st, i_tmp.size(0));
  for (nx_tmp = 0; nx_tmp < nx; nx_tmp++) {
    pointIndices[nx_tmp] = i_tmp[nx_tmp];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

int32_T worldpointset::findWorldPointsInView(const emlrtStack &sp,
                                             uint32_T viewId,
                                             cell_wrap_25 pointRef_data[],
                                             cell_wrap_25 featureIndices_data[],
                                             int32_T &featureIndices_size) const
{
  array<real_T, 1U> b_viewIndex_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T viewIndex_data;
  int32_T c_size[2];
  int32_T ia_data;
  int32_T ib_data;
  int32_T pointRef_size;
  uint32_T c_data;
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
  st.site = &ofc_emlrtRSI;
  b_st.site = &pfc_emlrtRSI;
  c_st.site = &ddc_emlrtRSI;
  d_st.site = &edc_emlrtRSI;
  e_st.site = &be_emlrtRSI;
  if (viewId <= 0U) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:worldpointset:expectedPositive", 3, 4, 7, "viewIds");
  }
  b_st.site = &qfc_emlrtRSI;
  checkIfViewIsMissing(b_st, viewId);
  b_st.site = &rfc_emlrtRSI;
  if (WorldPoints.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &pe_emlrtRTEI,
                                  "vision:worldpointset:noWorldPoints",
                                  "vision:worldpointset:noWorldPoints", 0);
  }
  b_st.site = &sfc_emlrtRSI;
  c_st.site = &ijb_emlrtRSI;
  d_st.site = &bjb_emlrtRSI;
  e_st.site = &efb_emlrtRSI;
  do_vectors(e_st, viewId, ViewIds, (uint32_T *)&c_data, c_size,
             (int32_T *)&ia_data, (int32_T *)&ib_data, pointRef_size);
  for (ia_data = 0; ia_data < pointRef_size; ia_data++) {
    viewIndex_data = ib_data;
  }
  b_st.site = &tfc_emlrtRSI;
  featureIndices_size = pointRef_size;
  b_viewIndex_data.set(&viewIndex_data, pointRef_size);
  b_st.site = &ufc_emlrtRSI;
  findWorldPointsInSingleView(b_st, b_viewIndex_data, pointRef_data[0].f1,
                              featureIndices_data[0].f1);
  if (pointRef_size - 1 < 0) {
    emlrtDynamicBoundsCheckR2012b(0, 0, pointRef_size - 1, &ho_emlrtBCI, &st);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return pointRef_size;
}

int32_T worldpointset::findWorldPointsInView(const emlrtStack &sp,
                                             real_T viewId,
                                             cell_wrap_25 pointRef_data[],
                                             cell_wrap_25 featureIndices_data[],
                                             int32_T &featureIndices_size) const
{
  array<real_T, 1U> b_viewIndex_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T viewIndex_data;
  int32_T c_size[2];
  int32_T ia_data;
  int32_T ib_data;
  int32_T pointRef_size;
  uint32_T c_data;
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
  st.site = &ofc_emlrtRSI;
  b_st.site = &pfc_emlrtRSI;
  c_st.site = &ddc_emlrtRSI;
  d_st.site = &edc_emlrtRSI;
  e_st.site = &be_emlrtRSI;
  if (muDoubleScalarIsInf(viewId) || muDoubleScalarIsNaN(viewId) ||
      (!(muDoubleScalarFloor(viewId) == viewId))) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &qc_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedInteger",
        "MATLAB:worldpointset:expectedInteger", 3, 4, 7, "viewIds");
  }
  e_st.site = &be_emlrtRSI;
  if (viewId <= 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:worldpointset:expectedPositive", 3, 4, 7, "viewIds");
  }
  if (viewId < 4.294967296E+9) {
    c_data = static_cast<uint32_T>(viewId);
  } else {
    c_data = MAX_uint32_T;
  }
  b_st.site = &qfc_emlrtRSI;
  checkIfViewIsMissing(b_st, c_data);
  b_st.site = &rfc_emlrtRSI;
  if (WorldPoints.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &pe_emlrtRTEI,
                                  "vision:worldpointset:noWorldPoints",
                                  "vision:worldpointset:noWorldPoints", 0);
  }
  b_st.site = &sfc_emlrtRSI;
  c_st.site = &ijb_emlrtRSI;
  d_st.site = &bjb_emlrtRSI;
  e_st.site = &efb_emlrtRSI;
  do_vectors(e_st, c_data, ViewIds, (uint32_T *)&c_data, c_size,
             (int32_T *)&ia_data, (int32_T *)&ib_data, pointRef_size);
  for (ia_data = 0; ia_data < pointRef_size; ia_data++) {
    viewIndex_data = ib_data;
  }
  b_st.site = &tfc_emlrtRSI;
  featureIndices_size = pointRef_size;
  b_viewIndex_data.set(&viewIndex_data, pointRef_size);
  b_st.site = &ufc_emlrtRSI;
  findWorldPointsInSingleView(b_st, b_viewIndex_data, pointRef_data[0].f1,
                              featureIndices_data[0].f1);
  if (pointRef_size - 1 < 0) {
    emlrtDynamicBoundsCheckR2012b(0, 0, pointRef_size - 1, &ho_emlrtBCI, &st);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return pointRef_size;
}

void worldpointset::init(const emlrtStack &sp)
{
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  WorldPoints.set_size(&mu_emlrtRTEI, &sp, 0, 3);
  ViewIds.set_size(&nu_emlrtRTEI, &sp, 1, 0);
  PointIds.size[0] = 1;
  PointIds.size[1] = 0;
  st.site = &pcb_emlrtRSI;
  h_sparse(st, CorrespondencesInternal);
  DistanceLimits.set_size(&ou_emlrtRTEI, &sp, 0, 2);
  ViewingDirection.set_size(&pu_emlrtRTEI, &sp, 0, 3);
  RepresentativeViewId.set_size(&qu_emlrtRTEI, &sp, 0, 1);
  RepresentativeFeatureIndex.set_size(&ru_emlrtRTEI, &sp, 0, 1);
}

void worldpointset::pointIdOrPointIndex(const emlrtStack &sp,
                                        const array<real_T, 1U> &pointIds,
                                        array<real_T, 2U> &pointIndices)
{
  array<real_T, 1U> b;
  array<real_T, 1U> ycol;
  array<int32_T, 1U> idx;
  array<int32_T, 1U> iwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  int32_T k;
  int32_T n;
  int32_T nb;
  int32_T nx_tmp;
  int32_T qEnd;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &pib_emlrtRSI;
  b_st.site = &sib_emlrtRSI;
  c_st.site = &tib_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= pointIds.size(0) - 1)) {
    if (!(pointIds[k] <= 0.0)) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:worldpointset:expectedPositive", 3, 4, 8, "pointIds");
  }
  d_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= pointIds.size(0) - 1)) {
    if ((!muDoubleScalarIsInf(pointIds[k])) &&
        (!muDoubleScalarIsNaN(pointIds[k])) &&
        (muDoubleScalarFloor(pointIds[k]) == pointIds[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &qc_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedInteger",
        "MATLAB:worldpointset:expectedInteger", 3, 4, 8, "pointIds");
  }
  b_st.site = &rib_emlrtRSI;
  nx_tmp = pointIds.size(0);
  c_st.site = &uib_emlrtRSI;
  n = pointIds.size(0);
  if (pointIds.size(0) < 1) {
    n = 1;
  }
  if (pointIds.size(0) > muIntScalarMax_sint32(nx_tmp, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &oc_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  pointIndices.set_size(&bw_emlrtRTEI, &st, 1, pointIds.size(0));
  for (nb = 0; nb < nx_tmp; nb++) {
    pointIndices[nb] = pointIds[nb];
  }
  b_st.site = &qib_emlrtRSI;
  b.set_size(&cw_emlrtRTEI, &b_st, pointIds.size(0));
  for (nb = 0; nb < nx_tmp; nb++) {
    b[nb] = pointIds[nb];
  }
  c_st.site = &vib_emlrtRSI;
  if (b.size(0) != 0) {
    real_T d;
    int32_T i;
    int32_T k0;
    d_st.site = &wib_emlrtRSI;
    e_st.site = &hcb_emlrtRSI;
    n = b.size(0) + 1;
    idx.set_size(&jv_emlrtRTEI, &e_st, pointIds.size(0));
    for (nb = 0; nb < nx_tmp; nb++) {
      idx[nb] = 0;
    }
    f_st.site = &kcb_emlrtRSI;
    iwork.set_size(&cv_emlrtRTEI, &f_st, pointIds.size(0));
    nb = b.size(0) - 1;
    g_st.site = &lcb_emlrtRSI;
    if (b.size(0) - 1 > 2147483645) {
      h_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(h_st);
    }
    for (k = 1; k <= nb; k += 2) {
      d = b[k - 1];
      if ((d == b[k]) ||
          (muDoubleScalarIsNaN(d) && muDoubleScalarIsNaN(b[k])) ||
          (d <= b[k]) || muDoubleScalarIsNaN(b[k])) {
        idx[k - 1] = k;
        idx[k] = k + 1;
      } else {
        idx[k - 1] = k + 1;
        idx[k] = k;
      }
    }
    if ((static_cast<uint32_T>(b.size(0)) & 1U) != 0U) {
      idx[b.size(0) - 1] = pointIds.size(0);
    }
    i = 2;
    while (i < n - 1) {
      nb = i << 1;
      k0 = 1;
      for (int32_T pEnd{i + 1}; pEnd < n; pEnd = qEnd + i) {
        int32_T b_p;
        int32_T kEnd;
        int32_T q;
        b_p = k0 - 1;
        q = pEnd - 1;
        qEnd = k0 + nb;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        kEnd = qEnd - k0;
        while (k + 1 <= kEnd) {
          real_T d1;
          d = b[idx[b_p] - 1];
          d1 = b[idx[q] - 1];
          if ((d == d1) ||
              (muDoubleScalarIsNaN(d) && muDoubleScalarIsNaN(d1)) ||
              (d <= d1) || muDoubleScalarIsNaN(d1)) {
            iwork[k] = idx[b_p];
            b_p++;
            if (b_p + 1 == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                iwork[k] = idx[q];
                q++;
              }
            }
          } else {
            iwork[k] = idx[q];
            q++;
            if (q + 1 == qEnd) {
              while (b_p + 1 < pEnd) {
                k++;
                iwork[k] = idx[b_p];
                b_p++;
              }
            }
          }
          k++;
        }
        g_st.site = &mcb_emlrtRSI;
        for (k = 0; k < kEnd; k++) {
          idx[(k0 + k) - 1] = iwork[k];
        }
        k0 = qEnd;
      }
      i = nb;
    }
    e_st.site = &icb_emlrtRSI;
    ycol.set_size(&kv_emlrtRTEI, &e_st, pointIds.size(0));
    f_st.site = &ncb_emlrtRSI;
    if (b.size(0) > 2147483646) {
      g_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(g_st);
    }
    for (i = 0; i < nx_tmp; i++) {
      ycol[i] = b[idx[i] - 1];
    }
    f_st.site = &ocb_emlrtRSI;
    for (i = 0; i < nx_tmp; i++) {
      b[i] = ycol[i];
    }
    nb = 0;
    k = 0;
    while (k + 1 <= nx_tmp) {
      k0 = k;
      do {
        k++;
      } while (!((k + 1 > nx_tmp) || (b[k0] != b[k])));
      nb++;
      b[nb - 1] = b[k0];
      d_st.site = &xib_emlrtRSI;
    }
    if (nb > b.size(0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &pc_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nb < 1) {
      nb = 0;
    }
    b.set_size(&dw_emlrtRTEI, &c_st, nb);
    d_st.site = &yib_emlrtRSI;
  }
  if (b.size(0) != pointIds.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &nc_emlrtRTEI,
                                  "vision:worldpointset:duplicateIds",
                                  "vision:worldpointset:duplicateIds", 0);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::updateLimitsAndDirection(
    const emlrtStack &sp, const array<real_T, 1U> &pointIds,
    const array<uint32_T, 1U> &viewTable_ViewId,
    const b_rigidtform3d &viewTable_AbsolutePose,
    const array<cell_wrap_8, 2U> &viewTable_Features)
{
  b_rigidtform3d b_r;
  array<cell_wrap_133, 1U> viewIdsToUpdate;
  array<real_T, 2U> allViewLocations;
  array<real_T, 2U> pointIndices;
  array<real_T, 1U> c_pointIndices;
  array<int32_T, 1U> ia;
  array<int32_T, 1U> ib;
  array<real32_T, 2U> b_directionVectors_data;
  array<real32_T, 2U> updatedDistanceLimits;
  array<real32_T, 2U> updatedViewDirection;
  array<real32_T, 1U> r1;
  array<uint32_T, 1U> b_allViewIds_data;
  array<uint32_T, 1U> c;
  array<uint32_T, 1U> c_allViewIds_data;
  array<boolean_T, 1U> b_tmp_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  real_T viewDirectionSize;
  int32_T b_iv[2];
  int32_T directionVectors_size[2];
  int32_T allViewIds_size;
  int32_T b_pointIndices;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T obj_tmp;
  int32_T pointIndices_tmp;
  real32_T directionVectors_data[6];
  uint32_T allViewIds_data[2];
  boolean_T tmp_data[2];
  boolean_T b;
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
  st.site = &ycc_emlrtRSI;
  worldpointset::pointIdOrPointIndex(st, pointIds, pointIndices);
  st.site = &xcc_emlrtRSI;
  checkPointIndices(st, pointIndices);
  st.site = &wcc_emlrtRSI;
  b_st.site = &adc_emlrtRSI;
  loop_ub = viewTable_ViewId.size(0);
  c.set_size(&hxb_emlrtRTEI, &st, viewTable_ViewId.size(0));
  for (i = 0; i < loop_ub; i++) {
    c[i] = viewTable_ViewId[i];
  }
  b_st.site = &bdc_emlrtRSI;
  worldpointset::checkViewIds(b_st, c);
  allViewIds_size = viewTable_ViewId.size(0);
  for (i = 0; i < loop_ub; i++) {
    allViewIds_data[i] = c[i];
  }
  b_st.site = &cdc_emlrtRSI;
  c_st.site = &gdc_emlrtRSI;
  i = viewTable_Features.size(0);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    if (b_i > viewTable_Features.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, viewTable_Features.size(0) - 1,
                                    &gy_emlrtBCI, &b_st);
    }
  }
  obj_tmp = WorldPoints.size(0);
  ViewingDirection.set_size(&ixb_emlrtRTEI, &sp, obj_tmp, 3);
  loop_ub = obj_tmp * 3;
  for (i = 0; i < loop_ub; i++) {
    ViewingDirection[i] = rtNaNF;
  }
  directionVectors_size[0] = obj_tmp;
  directionVectors_size[1] = 2;
  DistanceLimits.set_size(&jxb_emlrtRTEI, &sp, obj_tmp, 2);
  loop_ub_tmp = obj_tmp << 1;
  for (i = 0; i < loop_ub_tmp; i++) {
    DistanceLimits[i] = rtNaNF;
  }
  st.site = &vcc_emlrtRSI;
  i = viewTable_AbsolutePose.Data.size(1);
  allViewLocations.set_size(&kxb_emlrtRTEI, &sp,
                            viewTable_AbsolutePose.Data.size(1), 3);
  loop_ub_tmp = viewTable_AbsolutePose.Data.size(1) * 3;
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    allViewLocations[i1] = 0.0;
  }
  for (int32_T b_i{0}; b_i < i; b_i++) {
    st.site = &ucc_emlrtRSI;
    viewTable_AbsolutePose.parenReference(st, static_cast<real_T>(b_i) + 1.0,
                                          &b_r);
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &ueb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    allViewLocations[b_i] = b_r.Translation[0];
    allViewLocations[b_i + allViewLocations.size(0)] = b_r.Translation[1];
    allViewLocations[b_i + allViewLocations.size(0) * 2] = b_r.Translation[2];
  }
  st.site = &tcc_emlrtRSI;
  findViewsOfWorldPoint(st, pointIds, viewIdsToUpdate);
  b = (pointIndices.size(1) == 1);
  b_allViewIds_data.set(&allViewIds_data[0], allViewIds_size);
  st.site = &scc_emlrtRSI;
  worldpointset::checkMissingViewInViewTable(st, viewIdsToUpdate,
                                             b_allViewIds_data);
  st.site = &rcc_emlrtRSI;
  st.site = &qcc_emlrtRSI;
  b_st.site = &mbb_emlrtRSI;
  c_st.site = &nbb_emlrtRSI;
  d_st.site = &obb_emlrtRSI;
  e_st.site = &aec_emlrtRSI;
  f_st.site = &dcb_emlrtRSI;
  pointIndices_tmp = pointIndices.size(1);
  b_pointIndices = pointIndices.size(1);
  c_pointIndices = pointIndices.reshape(b_pointIndices);
  g_st.site = &ecb_emlrtRSI;
  viewDirectionSize = internal::unaryMinOrMax_anonFcn1(g_st, c_pointIndices);
  if (viewDirectionSize > WorldPoints.size(0)) {
    updatedViewDirection.set_size(&lxb_emlrtRTEI, &sp,
                                  static_cast<int32_T>(viewDirectionSize), 3);
    updatedDistanceLimits.set_size(&mxb_emlrtRTEI, &sp,
                                   static_cast<int32_T>(viewDirectionSize), 2);
    st.site = &pcc_emlrtRSI;
    if (ViewingDirection.size(0) > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    if (obj_tmp - 1 >= 0) {
      directionVectors_size[0] = 1;
      b_iv[0] = 1;
      directionVectors_size[1] = 3;
      b_iv[1] = 3;
    }
    for (int32_T b_i{0}; b_i < obj_tmp; b_i++) {
      if (b_i + 1 > updatedViewDirection.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, updatedViewDirection.size(0),
                                      &qeb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if (b_i + 1 > obj_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, obj_tmp, &oeb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      emlrtSubAssignSizeCheckR2012b(&directionVectors_size[0], 2, &b_iv[0], 2,
                                    &se_emlrtECI, (emlrtCTX)&sp);
      updatedViewDirection[b_i] = ViewingDirection[b_i];
      updatedViewDirection[b_i + updatedViewDirection.size(0)] =
          ViewingDirection[b_i + ViewingDirection.size(0)];
      updatedViewDirection[b_i + updatedViewDirection.size(0) * 2] =
          ViewingDirection[b_i + ViewingDirection.size(0) * 2];
    }
    st.site = &occ_emlrtRSI;
    if (DistanceLimits.size(0) > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    if (obj_tmp - 1 >= 0) {
      directionVectors_size[0] = 1;
      b_iv[0] = 1;
      directionVectors_size[1] = 2;
      b_iv[1] = 2;
    }
    for (int32_T b_i{0}; b_i < obj_tmp; b_i++) {
      if (b_i + 1 > updatedDistanceLimits.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, updatedDistanceLimits.size(0),
                                      &reb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if (b_i + 1 > obj_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, obj_tmp, &peb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      emlrtSubAssignSizeCheckR2012b(&directionVectors_size[0], 2, &b_iv[0], 2,
                                    &te_emlrtECI, (emlrtCTX)&sp);
      updatedDistanceLimits[b_i] = DistanceLimits[b_i];
      updatedDistanceLimits[b_i + updatedDistanceLimits.size(0)] =
          DistanceLimits[b_i + DistanceLimits.size(0)];
    }
    ViewingDirection.set_size(&nxb_emlrtRTEI, &sp, updatedViewDirection.size(0),
                              3);
    loop_ub_tmp = updatedViewDirection.size(0) * 3;
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      ViewingDirection[i1] = updatedViewDirection[i1];
    }
    DistanceLimits.set_size(&oxb_emlrtRTEI, &sp, updatedDistanceLimits.size(0),
                            2);
    loop_ub_tmp = updatedDistanceLimits.size(0) << 1;
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      DistanceLimits[i1] = updatedDistanceLimits[i1];
    }
  }
  st.site = &ncc_emlrtRSI;
  if (pointIndices.size(1) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T b_i{0}; b_i < pointIndices_tmp; b_i++) {
    if (b) {
      st.site = &mcc_emlrtRSI;
    }
    if (b_i > viewIdsToUpdate.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, viewIdsToUpdate.size(0) - 1,
                                    &xeb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (viewIdsToUpdate[b_i].f1.size(0) != 0) {
      real32_T accumulatedData[3];
      real32_T absxk;
      real32_T meanDirectionVectorNorm;
      real32_T scale;
      real32_T t;
      st.site = &lcc_emlrtRSI;
      b_st.site = &dfb_emlrtRSI;
      c_allViewIds_data.set(&allViewIds_data[0], allViewIds_size);
      c_st.site = &efb_emlrtRSI;
      do_vectors(c_st, c_allViewIds_data, viewIdsToUpdate[b_i].f1, c, ia, ib);
      if (b_i + 1 > pointIndices_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, pointIndices_tmp,
                                      &seb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if (pointIndices[b_i] !=
          static_cast<int32_T>(muDoubleScalarFloor(pointIndices[b_i]))) {
        emlrtIntegerCheckR2012b(pointIndices[b_i], &xc_emlrtDCI,
                                (emlrtConstCTX)&sp);
      }
      b_pointIndices = static_cast<int32_T>(pointIndices[b_i]);
      if ((b_pointIndices < 1) || (b_pointIndices > obj_tmp)) {
        emlrtDynamicBoundsCheckR2012b(b_pointIndices, 1, obj_tmp, &teb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      loop_ub_tmp = ia.size(0);
      directionVectors_size[0] = ia.size(0);
      directionVectors_size[1] = 3;
      for (i1 = 0; i1 < 3; i1++) {
        for (int32_T i2{0}; i2 < loop_ub_tmp; i2++) {
          if ((ia[i2] < 1) || (ia[i2] > i)) {
            emlrtDynamicBoundsCheckR2012b(ia[i2], 1, i, &neb_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          directionVectors_data[i2 + directionVectors_size[0] * i1] =
              WorldPoints[(b_pointIndices + WorldPoints.size(0) * i1) - 1] -
              static_cast<real32_T>(
                  allViewLocations[(ia[i2] + allViewLocations.size(0) * i1) -
                                   1]);
        }
      }
      b_directionVectors_data.set(&directionVectors_data[0],
                                  directionVectors_size[0], 3);
      st.site = &kcc_emlrtRSI;
      vecnorm(st, b_directionVectors_data, r1);
      loop_ub = r1.size(0);
      loop_ub_tmp = r1.size(0);
      for (i1 = 0; i1 < loop_ub; i1++) {
        tmp_data[i1] = (r1[i1] < 1.1920929E-6F);
      }
      b_tmp_data.set(&tmp_data[0], loop_ub_tmp);
      st.site = &jcc_emlrtRSI;
      if (any(st, b_tmp_data)) {
        emlrtErrorWithMessageIdR2018a(
            &sp, &bh_emlrtRTEI, "vision:worldpointset:invalidViewLocation",
            "vision:worldpointset:invalidViewLocation", 2, 6,
            pointIndices[b_i]);
      }
      st.site = &icc_emlrtRSI;
      b_st.site = &lf_emlrtRSI;
      c_st.site = &mf_emlrtRSI;
      loop_ub = directionVectors_size[0];
      if ((directionVectors_size[0] != 1) && (r1.size(0) != 1) &&
          (directionVectors_size[0] != r1.size(0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
                                      "MATLAB:sizeDimensionsMustMatch",
                                      "MATLAB:sizeDimensionsMustMatch", 0);
      }
      st.site = &icc_emlrtRSI;
      if (directionVectors_size[0] == r1.size(0)) {
        updatedViewDirection.set_size(&ni_emlrtRTEI, &st,
                                      directionVectors_size[0], 3);
        for (i1 = 0; i1 < 3; i1++) {
          for (int32_T i2{0}; i2 < loop_ub; i2++) {
            updatedViewDirection[i2 + updatedViewDirection.size(0) * i1] =
                directionVectors_data[i2 + directionVectors_size[0] * i1] /
                r1[i2];
          }
        }
      } else {
        b_st.site = &uid_emlrtRSI;
        binary_expand_op_56(b_st, updatedViewDirection, directionVectors_data,
                            directionVectors_size, r1);
      }
      b_st.site = &mo_emlrtRSI;
      b_combineVectorElements(b_st, updatedViewDirection, accumulatedData);
      accumulatedData[0] /= static_cast<real32_T>(updatedViewDirection.size(0));
      accumulatedData[1] /= static_cast<real32_T>(updatedViewDirection.size(0));
      accumulatedData[2] /= static_cast<real32_T>(updatedViewDirection.size(0));
      scale = 1.29246971E-26F;
      absxk = muSingleScalarAbs(accumulatedData[0]);
      if (absxk > 1.29246971E-26F) {
        meanDirectionVectorNorm = 1.0F;
        scale = absxk;
      } else {
        t = absxk / 1.29246971E-26F;
        meanDirectionVectorNorm = t * t;
      }
      absxk = muSingleScalarAbs(accumulatedData[1]);
      if (absxk > scale) {
        t = scale / absxk;
        meanDirectionVectorNorm = meanDirectionVectorNorm * t * t + 1.0F;
        scale = absxk;
      } else {
        t = absxk / scale;
        meanDirectionVectorNorm += t * t;
      }
      absxk = muSingleScalarAbs(accumulatedData[2]);
      if (absxk > scale) {
        t = scale / absxk;
        meanDirectionVectorNorm = meanDirectionVectorNorm * t * t + 1.0F;
        scale = absxk;
      } else {
        t = absxk / scale;
        meanDirectionVectorNorm += t * t;
      }
      meanDirectionVectorNorm =
          scale * muSingleScalarSqrt(meanDirectionVectorNorm);
      if (meanDirectionVectorNorm == 0.0F) {
        meanDirectionVectorNorm = 1.0F;
      }
      i1 = ViewingDirection.size(0);
      if (b_pointIndices > i1) {
        emlrtDynamicBoundsCheckR2012b(b_pointIndices, 1, i1, &veb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      directionVectors_size[0] = 1;
      b_iv[0] = 1;
      directionVectors_size[1] = 3;
      b_iv[1] = 3;
      emlrtSubAssignSizeCheckR2012b(&directionVectors_size[0], 2, &b_iv[0], 2,
                                    &ue_emlrtECI, (emlrtCTX)&sp);
      ViewingDirection[b_pointIndices - 1] =
          accumulatedData[0] / meanDirectionVectorNorm;
      ViewingDirection[(b_pointIndices + ViewingDirection.size(0)) - 1] =
          accumulatedData[1] / meanDirectionVectorNorm;
      ViewingDirection[(b_pointIndices + ViewingDirection.size(0) * 2) - 1] =
          accumulatedData[2] / meanDirectionVectorNorm;
      i1 = DistanceLimits.size(0);
      if (b_pointIndices > i1) {
        emlrtDynamicBoundsCheckR2012b(b_pointIndices, 1, i1, &web_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      directionVectors_size[0] = 1;
      b_iv[0] = 1;
      directionVectors_size[1] = 2;
      b_iv[1] = 2;
      emlrtSubAssignSizeCheckR2012b(&directionVectors_size[0], 2, &b_iv[0], 2,
                                    &ve_emlrtECI, (emlrtCTX)&sp);
      st.site = &hcc_emlrtRSI;
      b_st.site = &vv_emlrtRSI;
      c_st.site = &wv_emlrtRSI;
      d_st.site = &xv_emlrtRSI;
      if (r1.size(0) < 1) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &m_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }
      e_st.site = &yv_emlrtRSI;
      f_st.site = &aw_emlrtRSI;
      if (r1.size(0) == 1) {
        scale = r1[0];
      } else {
        scale = r1[r1.size(0) - 1];
        if ((!(r1[0] > scale)) &&
            ((!muSingleScalarIsNaN(r1[0])) || muSingleScalarIsNaN(scale))) {
          scale = r1[0];
        }
      }
      st.site = &hcc_emlrtRSI;
      b_st.site = &mbb_emlrtRSI;
      c_st.site = &nbb_emlrtRSI;
      d_st.site = &obb_emlrtRSI;
      e_st.site = &pbb_emlrtRSI;
      f_st.site = &qbb_emlrtRSI;
      if (r1.size(0) == 1) {
        absxk = r1[0];
      } else {
        absxk = r1[r1.size(0) - 1];
        if ((!(r1[0] < absxk)) &&
            ((!muSingleScalarIsNaN(r1[0])) || muSingleScalarIsNaN(absxk))) {
          absxk = r1[0];
        }
      }
      DistanceLimits[b_pointIndices - 1] = scale;
      DistanceLimits[(b_pointIndices + DistanceLimits.size(0)) - 1] = absxk;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::updateRepresentativeView(
    const emlrtStack &sp, const array<real_T, 1U> &pointIds,
    const array<uint32_T, 1U> &viewTable_ViewId,
    const array<cell_wrap_8, 2U> &viewTable_Features)
{
  array<cell_wrap_133, 1U> viewIdsToUpdate;
  array<cell_wrap_25, 1U> featureIndices;
  array<real_T, 2U> pointIndices;
  array<real_T, 1U> c_pointIndices;
  array<real_T, 1U> updatedRepresentativeViewId;
  array<int32_T, 1U> ia;
  array<int32_T, 1U> ib;
  array<real32_T, 2U> allFeaturesOfSinglePoint;
  array<uint32_T, 1U> b_allViewIds_data;
  array<uint32_T, 1U> c;
  array<uint32_T, 1U> c_allViewIds_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  real_T viewRepresentativeSize;
  int32_T b_iv[2];
  int32_T obj[2];
  int32_T allViewIds_size;
  int32_T b_pointIndices;
  int32_T i;
  int32_T k;
  int32_T loop_ub;
  int32_T obj_tmp;
  int32_T pointIndices_tmp;
  uint32_T allViewIds_data[2];
  boolean_T p[2];
  boolean_T b;
  boolean_T exitg1;
  boolean_T y;
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
  st.site = &oec_emlrtRSI;
  worldpointset::pointIdOrPointIndex(st, pointIds, pointIndices);
  st.site = &nec_emlrtRSI;
  checkPointIndices(st, pointIndices);
  st.site = &mec_emlrtRSI;
  b_st.site = &adc_emlrtRSI;
  loop_ub = viewTable_ViewId.size(0);
  c.set_size(&hxb_emlrtRTEI, &st, viewTable_ViewId.size(0));
  for (i = 0; i < loop_ub; i++) {
    c[i] = viewTable_ViewId[i];
  }
  b_st.site = &bdc_emlrtRSI;
  worldpointset::checkViewIds(b_st, c);
  allViewIds_size = viewTable_ViewId.size(0);
  for (i = 0; i < loop_ub; i++) {
    allViewIds_data[i] = c[i];
  }
  b_st.site = &cdc_emlrtRSI;
  c_st.site = &gdc_emlrtRSI;
  i = viewTable_Features.size(0);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    if (b_i > viewTable_Features.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, viewTable_Features.size(0) - 1,
                                    &gy_emlrtBCI, &b_st);
    }
  }
  obj_tmp = WorldPoints.size(0);
  RepresentativeViewId.set_size(&rxb_emlrtRTEI, &sp, obj_tmp, 1);
  for (i = 0; i < obj_tmp; i++) {
    RepresentativeViewId[i] = rtNaN;
  }
  RepresentativeFeatureIndex.set_size(&sxb_emlrtRTEI, &sp, obj_tmp, 1);
  for (i = 0; i < obj_tmp; i++) {
    RepresentativeFeatureIndex[i] = rtNaN;
  }
  st.site = &lec_emlrtRSI;
  findViewsOfWorldPoint(st, pointIds, viewIdsToUpdate, featureIndices);
  b = (pointIndices.size(1) == 1);
  b_allViewIds_data.set(&allViewIds_data[0], allViewIds_size);
  st.site = &kec_emlrtRSI;
  worldpointset::checkMissingViewInViewTable(st, viewIdsToUpdate,
                                             b_allViewIds_data);
  st.site = &jec_emlrtRSI;
  st.site = &iec_emlrtRSI;
  b_st.site = &mbb_emlrtRSI;
  c_st.site = &nbb_emlrtRSI;
  d_st.site = &obb_emlrtRSI;
  e_st.site = &aec_emlrtRSI;
  f_st.site = &dcb_emlrtRSI;
  pointIndices_tmp = pointIndices.size(1);
  b_pointIndices = pointIndices.size(1);
  c_pointIndices = pointIndices.reshape(b_pointIndices);
  g_st.site = &ecb_emlrtRSI;
  viewRepresentativeSize =
      internal::unaryMinOrMax_anonFcn1(g_st, c_pointIndices);
  p[0] = (RepresentativeViewId.size(0) < viewRepresentativeSize);
  p[1] = (RepresentativeViewId.size(1) < viewRepresentativeSize);
  y = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!p[k]) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (!(viewRepresentativeSize >= 0.0)) {
      emlrtNonNegativeCheckR2012b(viewRepresentativeSize, &ad_emlrtDCI,
                                  (emlrtConstCTX)&sp);
    }
    if (viewRepresentativeSize !=
        static_cast<int32_T>(muDoubleScalarFloor(viewRepresentativeSize))) {
      emlrtIntegerCheckR2012b(viewRepresentativeSize, &yc_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    updatedRepresentativeViewId.set_size(
        &txb_emlrtRTEI, &sp, static_cast<int32_T>(viewRepresentativeSize));
    loop_ub = static_cast<int32_T>(viewRepresentativeSize);
    st.site = &hec_emlrtRSI;
    if (RepresentativeViewId.size(0) > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    if (obj_tmp - 1 >= 0) {
      b_iv[0] = 1;
      b_iv[1] = 1;
    }
    for (int32_T b_i{0}; b_i < obj_tmp; b_i++) {
      if (b_i + 1 > updatedRepresentativeViewId.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                                      updatedRepresentativeViewId.size(0),
                                      &ffb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if (b_i + 1 > obj_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, obj_tmp, &hfb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      obj[0] = 1;
      obj[1] = 1;
      emlrtSubAssignSizeCheckR2012b(&obj[0], 2, &b_iv[0], 2, &xe_emlrtECI,
                                    (emlrtCTX)&sp);
      updatedRepresentativeViewId[b_i] = rtNaN;
    }
    st.site = &gec_emlrtRSI;
    if (RepresentativeFeatureIndex.size(0) > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    if (obj_tmp - 1 >= 0) {
      b_iv[0] = 1;
      b_iv[1] = 1;
    }
    for (int32_T b_i{0}; b_i < obj_tmp; b_i++) {
      if (b_i + 1 > static_cast<int32_T>(viewRepresentativeSize)) {
        emlrtDynamicBoundsCheckR2012b(
            b_i + 1, 1, static_cast<int32_T>(viewRepresentativeSize),
            &efb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if (b_i + 1 > obj_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, obj_tmp, &gfb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      obj[0] = 1;
      obj[1] = 1;
      emlrtSubAssignSizeCheckR2012b(&obj[0], 2, &b_iv[0], 2, &we_emlrtECI,
                                    (emlrtCTX)&sp);
    }
    b_pointIndices = updatedRepresentativeViewId.size(0);
    RepresentativeViewId.set_size(&uxb_emlrtRTEI, &sp,
                                  updatedRepresentativeViewId.size(0), 1);
    for (i = 0; i < b_pointIndices; i++) {
      RepresentativeViewId[i] = rtNaN;
    }
    RepresentativeFeatureIndex.set_size(
        &vxb_emlrtRTEI, &sp, static_cast<int32_T>(viewRepresentativeSize), 1);
    for (i = 0; i < loop_ub; i++) {
      RepresentativeFeatureIndex[i] = rtNaN;
    }
  }
  st.site = &fec_emlrtRSI;
  if (pointIndices.size(1) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T b_i{0}; b_i < pointIndices_tmp; b_i++) {
    if (b) {
      st.site = &eec_emlrtRSI;
    }
    if (b_i > viewIdsToUpdate.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, viewIdsToUpdate.size(0) - 1,
                                    &bfb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (b_i > featureIndices.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, featureIndices.size(0) - 1,
                                    &afb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (b_i + 1 > pointIndices_tmp) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, pointIndices_tmp, &dfb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i = viewIdsToUpdate[b_i].f1.size(0);
    if (i < 3) {
      int32_T i1;
      if (i < 1) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i, &ifb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i1 = RepresentativeViewId.size(0);
      if (pointIndices[b_i] !=
          static_cast<int32_T>(muDoubleScalarFloor(pointIndices[b_i]))) {
        emlrtIntegerCheckR2012b(pointIndices[b_i], &bd_emlrtDCI,
                                (emlrtConstCTX)&sp);
      }
      obj_tmp = static_cast<int32_T>(pointIndices[b_i]);
      if ((obj_tmp < 1) || (obj_tmp > i1)) {
        emlrtDynamicBoundsCheckR2012b(obj_tmp, 1, i1, &jfb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      RepresentativeViewId[obj_tmp - 1] = viewIdsToUpdate[b_i].f1[i - 1];
      i1 = featureIndices[b_i].f1.size(0);
      if (i > i1) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i1, &kfb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i1 = RepresentativeFeatureIndex.size(0);
      if (obj_tmp > i1) {
        emlrtDynamicBoundsCheckR2012b(obj_tmp, 1, i1, &lfb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      RepresentativeFeatureIndex[obj_tmp - 1] = featureIndices[b_i].f1[i - 1];
    } else {
      int32_T i1;
      int32_T loop_ub_tmp;
      st.site = &dec_emlrtRSI;
      b_st.site = &dfb_emlrtRSI;
      c_allViewIds_data.set(&allViewIds_data[0], allViewIds_size);
      c_st.site = &efb_emlrtRSI;
      do_vectors(c_st, c_allViewIds_data, viewIdsToUpdate[b_i].f1, c, ia, ib);
      loop_ub_tmp = ia.size(0);
      updatedRepresentativeViewId.set_size(&kkb_emlrtRTEI, &st, ia.size(0));
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        updatedRepresentativeViewId[i1] = ia[i1];
      }
      loop_ub = viewTable_Features[0].f1.size(1);
      allFeaturesOfSinglePoint.set_size(&wxb_emlrtRTEI, &sp,
                                        viewTable_Features[0].f1.size(1), i);
      b_pointIndices = i * viewTable_Features[0].f1.size(1);
      for (i1 = 0; i1 < b_pointIndices; i1++) {
        allFeaturesOfSinglePoint[i1] = 0.0F;
      }
      for (k = 0; k < i; k++) {
        if (k + 1 > loop_ub_tmp) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, loop_ub_tmp, &mfb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        i1 = static_cast<int32_T>(updatedRepresentativeViewId[k]) - 1;
        if ((i1 < 0) || (i1 > 1)) {
          emlrtDynamicBoundsCheckR2012b(i1, 0, 1, &yeb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_pointIndices = viewTable_Features[ia[k] - 1].f1.size(0) *
                         viewTable_Features[ia[k] - 1].f1.size(1);
        if (k + 1 > i) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, i, &cfb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        for (i1 = 0; i1 < loop_ub; i1++) {
          obj_tmp = featureIndices[b_i].f1.size(0);
          if (k + 1 > obj_tmp) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, obj_tmp, &pfb_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          viewRepresentativeSize = featureIndices[b_i].f1[k];
          if (viewRepresentativeSize !=
              static_cast<int32_T>(
                  muDoubleScalarFloor(viewRepresentativeSize))) {
            emlrtIntegerCheckR2012b(viewRepresentativeSize, &dd_emlrtDCI,
                                    (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(viewRepresentativeSize) < 1) ||
              (static_cast<int32_T>(viewRepresentativeSize) > b_pointIndices)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(viewRepresentativeSize), 1, b_pointIndices,
                &pfb_emlrtBCI, (emlrtConstCTX)&sp);
          }
          allFeaturesOfSinglePoint[i1 + allFeaturesOfSinglePoint.size(0) * k] =
              viewTable_Features[ia[k] - 1]
                  .f1[static_cast<int32_T>(viewRepresentativeSize) - 1];
        }
      }
      st.site = &cec_emlrtRSI;
      viewRepresentativeSize = worldpointset::findMedoidFeature(
          st, allFeaturesOfSinglePoint, static_cast<real_T>(i));
      if ((static_cast<int32_T>(viewRepresentativeSize) < 1) ||
          (static_cast<int32_T>(viewRepresentativeSize) > i)) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(viewRepresentativeSize), 1, i, &nfb_emlrtBCI,
            (emlrtConstCTX)&sp);
      }
      i = RepresentativeViewId.size(0);
      if (pointIndices[b_i] !=
          static_cast<int32_T>(muDoubleScalarFloor(pointIndices[b_i]))) {
        emlrtIntegerCheckR2012b(pointIndices[b_i], &cd_emlrtDCI,
                                (emlrtConstCTX)&sp);
      }
      i1 = static_cast<int32_T>(pointIndices[b_i]);
      if ((i1 < 1) || (i1 > i)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i, &ofb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      RepresentativeViewId[i1 - 1] =
          viewIdsToUpdate[b_i]
              .f1[static_cast<int32_T>(viewRepresentativeSize) - 1];
      i = featureIndices[b_i].f1.size(0);
      if ((static_cast<int32_T>(viewRepresentativeSize) < 1) ||
          (static_cast<int32_T>(viewRepresentativeSize) > i)) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(viewRepresentativeSize), 1, i, &qfb_emlrtBCI,
            (emlrtConstCTX)&sp);
      }
      i = RepresentativeFeatureIndex.size(0);
      if (i1 > i) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i, &rfb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      RepresentativeFeatureIndex[i1 - 1] =
          featureIndices[b_i]
              .f1[static_cast<int32_T>(viewRepresentativeSize) - 1];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::updateWorldPoints(const emlrtStack &sp,
                                      const array<real_T, 1U> &pointIds,
                                      const array<real_T, 2U> &worldPoints)
{
  array<real_T, 2U> pointIndices;
  array<int32_T, 1U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b_iv[2];
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T loop_ub;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &dcc_emlrtRSI;
  worldpointset::pointIdOrPointIndex(st, pointIds, pointIndices);
  st.site = &ecc_emlrtRSI;
  checkPointIndices(st, pointIndices);
  st.site = &fcc_emlrtRSI;
  b_st.site = &lhb_emlrtRSI;
  b_st.site = &gcc_emlrtRSI;
  c_st.site = &be_emlrtRSI;
  p = true;
  i = worldPoints.size(0) * 3;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i - 1)) {
    if ((!muDoubleScalarIsInf(worldPoints[k])) &&
        (!muDoubleScalarIsNaN(worldPoints[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:worldpointset:expectedFinite", 3, 4, 11, "worldPoints");
  }
  c_st.site = &be_emlrtRSI;
  if (worldPoints.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &kc_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedNonempty",
        "MATLAB:worldpointset:expectedNonempty", 3, 4, 11, "worldPoints");
  }
  c_st.site = &be_emlrtRSI;
  if (worldPoints.size(0) != pointIndices.size(1)) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &ce_emlrtRTEI,
        "Coder:toolbox:ValidateattributesincorrectNumrows",
        "MATLAB:worldpointset:incorrectNumrows", 5, 4, 11, "worldPoints", 6,
        static_cast<real_T>(pointIndices.size(1)));
  }
  k = WorldPoints.size(0);
  loop_ub = pointIndices.size(1);
  b_r.set_size(&gxb_emlrtRTEI, &sp, pointIndices.size(1));
  for (i = 0; i < loop_ub; i++) {
    if (pointIndices[i] !=
        static_cast<int32_T>(muDoubleScalarFloor(pointIndices[i]))) {
      emlrtIntegerCheckR2012b(pointIndices[i], &wc_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    i1 = static_cast<int32_T>(pointIndices[i]);
    if ((i1 < 1) || (i1 > k)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, k, &meb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    b_r[i] = i1 - 1;
  }
  loop_ub = b_r.size(0);
  b_iv[0] = b_r.size(0);
  b_iv[1] = 3;
  emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2,
                                ((array<real_T, 2U> *)&worldPoints)->size(), 2,
                                &re_emlrtECI, (emlrtCTX)&sp);
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      WorldPoints[b_r[i1] + WorldPoints.size(0) * i] =
          static_cast<real32_T>(worldPoints[i1 + worldPoints.size(0) * i]);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void worldpointset::updateWorldPoints(const emlrtStack &sp,
                                      const array<real_T, 1U> &pointIds,
                                      const array<real32_T, 2U> &worldPoints)
{
  array<real_T, 2U> pointIndices;
  array<int32_T, 1U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b_iv[2];
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T loop_ub;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &dcc_emlrtRSI;
  worldpointset::pointIdOrPointIndex(st, pointIds, pointIndices);
  st.site = &ecc_emlrtRSI;
  checkPointIndices(st, pointIndices);
  st.site = &fcc_emlrtRSI;
  b_st.site = &lhb_emlrtRSI;
  b_st.site = &gcc_emlrtRSI;
  c_st.site = &be_emlrtRSI;
  p = true;
  i = worldPoints.size(0) * 3;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i - 1)) {
    if ((!muSingleScalarIsInf(worldPoints[k])) &&
        (!muSingleScalarIsNaN(worldPoints[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:worldpointset:expectedFinite", 3, 4, 11, "worldPoints");
  }
  c_st.site = &be_emlrtRSI;
  if (worldPoints.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &kc_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedNonempty",
        "MATLAB:worldpointset:expectedNonempty", 3, 4, 11, "worldPoints");
  }
  c_st.site = &be_emlrtRSI;
  internal::valattr::validatenrows(c_st, worldPoints,
                                   static_cast<real_T>(pointIndices.size(1)));
  k = WorldPoints.size(0);
  loop_ub = pointIndices.size(1);
  b_r.set_size(&gxb_emlrtRTEI, &sp, pointIndices.size(1));
  for (i = 0; i < loop_ub; i++) {
    if (pointIndices[i] !=
        static_cast<int32_T>(muDoubleScalarFloor(pointIndices[i]))) {
      emlrtIntegerCheckR2012b(pointIndices[i], &wc_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    i1 = static_cast<int32_T>(pointIndices[i]);
    if ((i1 < 1) || (i1 > k)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, k, &meb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    b_r[i] = i1 - 1;
  }
  loop_ub = b_r.size(0);
  b_iv[0] = b_r.size(0);
  b_iv[1] = 3;
  emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2,
                                ((array<real32_T, 2U> *)&worldPoints)->size(),
                                2, &re_emlrtECI, (emlrtCTX)&sp);
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      WorldPoints[b_r[i1] + WorldPoints.size(0) * i] =
          worldPoints[i1 + worldPoints.size(0) * i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (worldpointset.cpp)
