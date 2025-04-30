//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// MLGraph.cpp
//
// Code generation for function 'MLGraph'
//

// Include files
#include "MLGraph.h"
#include "all.h"
#include "eml_int_forloop_overflow_check.h"
#include "graph.h"
#include "helperVisualSLAMCodegen_data.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sortrows.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo rbb_emlrtRSI{
    453,                            // lineNo
    "MLGraph/edgesConstrWithIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo sbb_emlrtRSI{
    454,                            // lineNo
    "MLGraph/edgesConstrWithIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo tbb_emlrtRSI{
    458,                            // lineNo
    "MLGraph/edgesConstrWithIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo ubb_emlrtRSI{
    462,                            // lineNo
    "MLGraph/edgesConstrWithIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo vbb_emlrtRSI{
    467,                            // lineNo
    "MLGraph/edgesConstrWithIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo wbb_emlrtRSI{
    468,                            // lineNo
    "MLGraph/edgesConstrWithIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo xbb_emlrtRSI{
    469,                            // lineNo
    "MLGraph/edgesConstrWithIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo ybb_emlrtRSI{
    521,                            // lineNo
    "MLGraph/edgesConstrWithIndex", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo eeb_emlrtRSI{
    64,                // lineNo
    "MLGraph/MLGraph", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRTEInfo yb_emlrtRTEI{
    453,                            // lineNo
    36,                             // colNo
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo ac_emlrtRTEI{
    487,                            // lineNo
    19,                             // colNo
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtDCInfo m_emlrtDCI{
    478,                            // lineNo
    13,                             // colNo
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    1                              // checkKind
};

static emlrtDCInfo n_emlrtDCI{
    479,                            // lineNo
    13,                             // colNo
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    1                              // checkKind
};

static emlrtDCInfo o_emlrtDCI{
    479,                            // lineNo
    13,                             // colNo
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    4                              // checkKind
};

static emlrtBCInfo ff_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    482,                            // lineNo
    38,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo gf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    482,                            // lineNo
    41,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo hf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    482,                            // lineNo
    20,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo if_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    482,                            // lineNo
    23,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo jf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    483,                            // lineNo
    38,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo kf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    483,                            // lineNo
    41,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo lf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    483,                            // lineNo
    20,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo mf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    483,                            // lineNo
    23,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo nf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    488,                            // lineNo
    35,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo of_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    495,                            // lineNo
    24,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo pf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    495,                            // lineNo
    27,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo qf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    496,                            // lineNo
    30,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo rf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    496,                            // lineNo
    20,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo sf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    497,                            // lineNo
    38,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo tf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    497,                            // lineNo
    41,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo uf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    497,                            // lineNo
    20,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo vf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    497,                            // lineNo
    23,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo wf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    502,                            // lineNo
    24,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo xf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    502,                            // lineNo
    27,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo yf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    503,                            // lineNo
    30,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo ag_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    503,                            // lineNo
    20,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo bg_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    504,                            // lineNo
    38,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo cg_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    504,                            // lineNo
    41,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo dg_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    504,                            // lineNo
    20,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo eg_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    504,                            // lineNo
    23,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo fg_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    510,                            // lineNo
    27,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo gg_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    510,                            // lineNo
    40,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo hg_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    510,                            // lineNo
    68,                             // colNo
    "",                             // aName
    "MLGraph/edgesConstrWithIndex", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtRTEInfo bc_emlrtRTEI{
    606,                   // lineNo
    7,                     // colNo
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo cc_emlrtRTEI{
    608,                   // lineNo
    27,                    // colNo
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtBCInfo ig_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    620,                   // lineNo
    16,                    // colNo
    "",                    // aName
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtRTEInfo dc_emlrtRTEI{
    621,                   // lineNo
    31,                    // colNo
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtBCInfo jg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    607,                   // lineNo
    14,                    // colNo
    "",                    // aName
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo kg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    608,                   // lineNo
    37,                    // colNo
    "",                    // aName
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo lg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    608,                   // lineNo
    48,                    // colNo
    "",                    // aName
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo mg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    611,                   // lineNo
    30,                    // colNo
    "",                    // aName
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo ng_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    613,                   // lineNo
    16,                    // colNo
    "",                    // aName
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo og_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    614,                   // lineNo
    16,                    // colNo
    "",                    // aName
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo pg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    621,                   // lineNo
    38,                    // colNo
    "",                    // aName
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo qg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    621,                   // lineNo
    47,                    // colNo
    "",                    // aName
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo rg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    621,                   // lineNo
    58,                    // colNo
    "",                    // aName
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo sg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    621,                   // lineNo
    63,                    // colNo
    "",                    // aName
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo tg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    623,                   // lineNo
    16,                    // colNo
    "",                    // aName
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo ug_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    624,                   // lineNo
    16,                    // colNo
    "",                    // aName
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo vg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    624,                   // lineNo
    21,                    // colNo
    "",                    // aName
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo wg_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    625,                   // lineNo
    14,                    // colNo
    "",                    // aName
    "definePosMapAndDiag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtDCInfo p_emlrtDCI{
    96,                  // lineNo
    24,                  // colNo
    "MLGraph/get.Edges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    1                              // checkKind
};

static emlrtBCInfo xg_emlrtBCI{
    -1,                  // iFirst
    -1,                  // iLast
    101,                 // lineNo
    28,                  // colNo
    "",                  // aName
    "MLGraph/get.Edges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo yg_emlrtBCI{
    -1,                  // iFirst
    -1,                  // iLast
    99,                  // lineNo
    28,                  // colNo
    "",                  // aName
    "MLGraph/get.Edges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo ah_emlrtBCI{
    -1,                  // iFirst
    -1,                  // iLast
    100,                 // lineNo
    32,                  // colNo
    "",                  // aName
    "MLGraph/get.Edges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo bh_emlrtBCI{
    -1,                  // iFirst
    -1,                  // iLast
    102,                 // lineNo
    24,                  // colNo
    "",                  // aName
    "MLGraph/get.Edges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo ch_emlrtBCI{
    -1,                  // iFirst
    -1,                  // iLast
    103,                 // lineNo
    24,                  // colNo
    "",                  // aName
    "MLGraph/get.Edges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtRTEInfo ut_emlrtRTEI{
    453,       // lineNo
    45,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo vt_emlrtRTEI{
    453,       // lineNo
    40,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo wt_emlrtRTEI{
    453,       // lineNo
    71,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo xt_emlrtRTEI{
    453,       // lineNo
    66,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo yt_emlrtRTEI{
    454,       // lineNo
    22,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo au_emlrtRTEI{
    454,       // lineNo
    40,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo bu_emlrtRTEI{
    464,       // lineNo
    17,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo cu_emlrtRTEI{
    465,       // lineNo
    17,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo du_emlrtRTEI{
    461,       // lineNo
    17,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo eu_emlrtRTEI{
    459,       // lineNo
    17,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo fu_emlrtRTEI{
    468,       // lineNo
    13,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo gu_emlrtRTEI{
    478,       // lineNo
    13,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo hu_emlrtRTEI{
    479,       // lineNo
    13,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo iu_emlrtRTEI{
    600,       // lineNo
    1,         // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo ju_emlrtRTEI{
    601,       // lineNo
    1,         // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo ku_emlrtRTEI{
    96,        // lineNo
    13,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo lu_emlrtRTEI{
    88,        // lineNo
    17,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

// Function Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
void MLGraph::definePosMapAndDiag(const emlrtStack &sp,
                                  const array<int32_T, 1U> &ir,
                                  const array<int32_T, 1U> &jc, real_T n,
                                  array<int32_T, 2U> &posMap,
                                  array<int32_T, 1U> &b_Diag)
{
  int32_T b_loop_ub;
  int32_T i;
  int32_T loop_ub;
  int32_T ne;
  loop_ub = jc.size(0);
  b_Diag.set_size(&iu_emlrtRTEI, &sp, jc.size(0));
  for (i = 0; i < loop_ub; i++) {
    b_Diag[i] = jc[i];
  }
  b_loop_ub = ir.size(0);
  posMap.set_size(&ju_emlrtRTEI, &sp, 1, ir.size(0));
  for (i = 0; i < b_loop_ub; i++) {
    posMap[i] = 0;
  }
  ne = 1;
  i = static_cast<int32_T>(n);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, n, mxDOUBLE_CLASS,
                                static_cast<int32_T>(n), &bc_emlrtRTEI,
                                (emlrtConstCTX)&sp);
  for (int32_T j{0}; j < i; j++) {
    int32_T i1;
    int32_T i2;
    int32_T l;
    boolean_T exitg1;
    if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
         b_Diag.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1,
          b_Diag.size(0), &jg_emlrtBCI, (emlrtConstCTX)&sp);
    }
    l = b_Diag[j];
    if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 2U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(j) + 2U) > loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(j) + 2U), 1, loop_ub,
          &kg_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i1 = jc[j + 1];
    if (b_Diag[j] + 1 <= i1) {
      i2 = b_Diag[j] + 1;
      if ((i2 < 1) || (i2 > b_loop_ub)) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, b_loop_ub, &lg_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (ir[i2 - 1] < static_cast<real_T>(j) + 1.0) {
        emlrtErrorWithMessageIdR2018a(
            &sp, &cc_emlrtRTEI,
            "MATLAB:graphfun:graphbuiltin:SymmetricAdjacency",
            "MATLAB:graphfun:graphbuiltin:SymmetricAdjacency", 0);
      }
    }
    exitg1 = false;
    while ((!exitg1) && (l + 1 <= i1)) {
      if ((l + 1 < 1) || (l + 1 > b_loop_ub)) {
        emlrtDynamicBoundsCheckR2012b(l + 1, 1, b_loop_ub, &mg_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (ir[l] == static_cast<real_T>(j) + 1.0) {
        if ((l + 1 < 1) || (l + 1 > posMap.size(1))) {
          emlrtDynamicBoundsCheckR2012b(l + 1, 1, posMap.size(1), &ng_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        posMap[l] = ne;
        if ((l + 2 < 1) || (l + 2 > posMap.size(1))) {
          emlrtDynamicBoundsCheckR2012b(l + 2, 1, posMap.size(1), &og_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        posMap[l + 1] = ne;
        l += 2;
        ne++;
      } else {
        exitg1 = true;
      }
    }
    while (l + 1 <= i1) {
      int32_T i3;
      boolean_T b;
      boolean_T guard1;
      if ((l + 1 < 1) || (l + 1 > b_loop_ub)) {
        emlrtDynamicBoundsCheckR2012b(l + 1, 1, b_loop_ub, &ig_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((ir[l] < 1) || (ir[l] > b_Diag.size(0))) {
        emlrtDynamicBoundsCheckR2012b(ir[l], 1, b_Diag.size(0), &pg_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i2 = ir[l] + 1;
      if ((i2 < 1) || (i2 > loop_ub)) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, loop_ub, &qg_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i3 = b_Diag[ir[l] - 1];
      guard1 = false;
      if (i3 >= jc[i2 - 1]) {
        guard1 = true;
      } else {
        if ((ir[l] < 1) || (ir[l] > b_Diag.size(0))) {
          emlrtDynamicBoundsCheckR2012b(ir[l], 1, b_Diag.size(0), &sg_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if ((i3 + 1 < 1) || (i3 + 1 > b_loop_ub)) {
          emlrtDynamicBoundsCheckR2012b(i3 + 1, 1, b_loop_ub, &rg_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (ir[i3] != static_cast<real_T>(j) + 1.0) {
          guard1 = true;
        }
      }
      if (guard1) {
        emlrtErrorWithMessageIdR2018a(
            &sp, &dc_emlrtRTEI,
            "MATLAB:graphfun:graphbuiltin:SymmetricAdjacency",
            "MATLAB:graphfun:graphbuiltin:SymmetricAdjacency", 0);
      }
      if ((l + 1 < 1) || (l + 1 > posMap.size(1))) {
        emlrtDynamicBoundsCheckR2012b(l + 1, 1, posMap.size(1), &tg_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      posMap[l] = ne;
      b = ((ir[l] < 1) || (ir[l] > b_Diag.size(0)));
      if (b) {
        emlrtDynamicBoundsCheckR2012b(ir[l], 1, b_Diag.size(0), &vg_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((i3 + 1 < 1) || (i3 + 1 > posMap.size(1))) {
        emlrtDynamicBoundsCheckR2012b(i3 + 1, 1, posMap.size(1), &ug_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      posMap[i3] = ne;
      if ((ir[l] < 1) || (ir[l] > b_Diag.size(0))) {
        emlrtDynamicBoundsCheckR2012b(ir[l], 1, b_Diag.size(0), &wg_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      b_Diag[ir[l] - 1] = i3 + 1;
      l++;
      ne++;
    }
  }
}

void MLGraph::edgesConstrWithIndex(const emlrtStack &sp,
                                   const array<real_T, 1U> &s,
                                   const array<real_T, 1U> &t, real_T numNodes,
                                   MLGraph &mlg, array<real_T, 1U> &ind)
{
  array<real_T, 1U> sExpanded;
  array<real_T, 1U> tExpanded;
  array<int32_T, 2U> st;
  array<boolean_T, 1U> b_s;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  real_T d;
  int32_T i;
  int32_T i1;
  int32_T nzBoth;
  int32_T thisRowCount;
  boolean_T b;
  boolean_T guard1;
  b_st.prev = &sp;
  b_st.tls = sp.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  thisRowCount = s.size(0);
  sExpanded.set_size(&ut_emlrtRTEI, &sp, s.size(0));
  for (i = 0; i < thisRowCount; i++) {
    sExpanded[i] = s[i];
  }
  b_st.site = &rbb_emlrtRSI;
  c_st.site = &acb_emlrtRSI;
  d_st.site = &qo_emlrtRSI;
  if (sExpanded.size(0) > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  b_s.set_size(&vt_emlrtRTEI, &sp, s.size(0));
  for (i = 0; i < thisRowCount; i++) {
    b_s[i] = (s[i] == sExpanded[i]);
  }
  guard1 = false;
  b_st.site = &rbb_emlrtRSI;
  if (b_all(b_st, b_s)) {
    nzBoth = t.size(0);
    sExpanded.set_size(&wt_emlrtRTEI, &sp, t.size(0));
    for (i = 0; i < nzBoth; i++) {
      sExpanded[i] = t[i];
    }
    b_st.site = &rbb_emlrtRSI;
    c_st.site = &acb_emlrtRSI;
    d_st.site = &qo_emlrtRSI;
    if (sExpanded.size(0) > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    b_s.set_size(&xt_emlrtRTEI, &sp, t.size(0));
    for (i = 0; i < nzBoth; i++) {
      b_s[i] = (t[i] == sExpanded[i]);
    }
    b_st.site = &rbb_emlrtRSI;
    if (b_all(b_st, b_s)) {
      b_s.set_size(&yt_emlrtRTEI, &sp, s.size(0));
      for (i = 0; i < thisRowCount; i++) {
        b_s[i] = (s[i] > 0.0);
      }
      b_st.site = &sbb_emlrtRSI;
      if (b_all(b_st, b_s)) {
        b_s.set_size(&au_emlrtRTEI, &sp, t.size(0));
        for (i = 0; i < nzBoth; i++) {
          b_s[i] = (t[i] > 0.0);
        }
        b_st.site = &sbb_emlrtRSI;
        if (!b_all(b_st, b_s)) {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }
  if (guard1) {
    emlrtErrorWithMessageIdR2018a(&sp, &yb_emlrtRTEI,
                                  "MATLAB:graphfun:graphbuiltin:InvalidSRC",
                                  "MATLAB:graphfun:graphbuiltin:InvalidSRC", 0);
  }
  if (s.size(0) == 1) {
    real_T c_s[2];
    c_s[0] = t.size(0);
    c_s[1] = 1.0;
    b_st.site = &tbb_emlrtRSI;
    repmat(b_st, (const real_T *)s.data(), c_s, sExpanded);
    thisRowCount = t.size(0);
    tExpanded.set_size(&eu_emlrtRTEI, &sp, t.size(0));
    for (i = 0; i < thisRowCount; i++) {
      tExpanded[i] = t[i];
    }
  } else if (t.size(0) == 1) {
    sExpanded.set_size(&du_emlrtRTEI, &sp, s.size(0));
    for (i = 0; i < thisRowCount; i++) {
      sExpanded[i] = s[i];
    }
    real_T c_s[2];
    c_s[0] = s.size(0);
    c_s[1] = 1.0;
    b_st.site = &ubb_emlrtRSI;
    repmat(b_st, (const real_T *)t.data(), c_s, tExpanded);
  } else {
    sExpanded.set_size(&bu_emlrtRTEI, &sp, s.size(0));
    for (i = 0; i < thisRowCount; i++) {
      sExpanded[i] = s[i];
    }
    thisRowCount = t.size(0);
    tExpanded.set_size(&cu_emlrtRTEI, &sp, t.size(0));
    for (i = 0; i < thisRowCount; i++) {
      tExpanded[i] = t[i];
    }
  }
  b_st.site = &vbb_emlrtRSI;
  c_st.site = &ij_emlrtRSI;
  d_st.site = &jj_emlrtRSI;
  if (tExpanded.size(0) != sExpanded.size(0)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  b_st.site = &wbb_emlrtRSI;
  thisRowCount = sExpanded.size(0);
  st.set_size(&fu_emlrtRTEI, &b_st, sExpanded.size(0), 2);
  for (i = 0; i < thisRowCount; i++) {
    st[i] = static_cast<int32_T>(sExpanded[i]);
  }
  thisRowCount = tExpanded.size(0);
  for (i = 0; i < thisRowCount; i++) {
    st[i + st.size(0)] = static_cast<int32_T>(tExpanded[i]);
  }
  c_st.site = &gcb_emlrtRSI;
  ::coder::internal::sort(c_st, st);
  b_st.site = &xbb_emlrtRSI;
  sortrows(b_st, st, ind);
  d = 2.0 * static_cast<real_T>(ind.size(0));
  if (d != static_cast<int32_T>(d)) {
    emlrtIntegerCheckR2012b(d, &m_emlrtDCI, (emlrtConstCTX)&sp);
  }
  thisRowCount = static_cast<int32_T>(d);
  mlg.Ir.set_size(&gu_emlrtRTEI, &sp, static_cast<int32_T>(d));
  if (d != static_cast<int32_T>(d)) {
    emlrtIntegerCheckR2012b(d, &m_emlrtDCI, (emlrtConstCTX)&sp);
  }
  for (i = 0; i < thisRowCount; i++) {
    mlg.Ir[i] = 0;
  }
  if (!(numNodes + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(numNodes + 1.0, &o_emlrtDCI,
                                (emlrtConstCTX)&sp);
  }
  d = static_cast<int32_T>(muDoubleScalarFloor(numNodes + 1.0));
  if (numNodes + 1.0 != d) {
    emlrtIntegerCheckR2012b(numNodes + 1.0, &n_emlrtDCI, (emlrtConstCTX)&sp);
  }
  mlg.Jc.set_size(&hu_emlrtRTEI, &sp, static_cast<int32_T>(numNodes + 1.0));
  if (numNodes + 1.0 != d) {
    emlrtIntegerCheckR2012b(numNodes + 1.0, &n_emlrtDCI, (emlrtConstCTX)&sp);
  }
  thisRowCount = static_cast<int32_T>(numNodes + 1.0);
  for (i = 0; i < thisRowCount; i++) {
    mlg.Jc[i] = 0;
  }
  i = ind.size(0);
  for (nzBoth = 0; nzBoth < i; nzBoth++) {
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &gf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i1 = st[nzBoth] + 1;
    if ((i1 < 1) || (i1 > mlg.Jc.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, mlg.Jc.size(0), &ff_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &if_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (i1 > mlg.Jc.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, mlg.Jc.size(0), &hf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    mlg.Jc[i1 - 1] = mlg.Jc[i1 - 1] + 1;
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &kf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i1 = st[nzBoth + st.size(0)] + 1;
    if ((i1 < 1) || (i1 > mlg.Jc.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, mlg.Jc.size(0), &jf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &mf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (i1 > mlg.Jc.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, mlg.Jc.size(0), &lf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    mlg.Jc[i1 - 1] = mlg.Jc[i1 - 1] + 1;
  }
  nzBoth = 0;
  i1 = static_cast<int32_T>(numNodes);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, numNodes, mxDOUBLE_CLASS,
                                static_cast<int32_T>(numNodes), &ac_emlrtRTEI,
                                (emlrtConstCTX)&sp);
  for (int32_T b_i{0}; b_i < i1; b_i++) {
    b = ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 2U) < 1) ||
         (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 2U) >
          mlg.Jc.size(0)));
    if (b) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 2U), 1,
          mlg.Jc.size(0), &nf_emlrtBCI, (emlrtConstCTX)&sp);
    }
    thisRowCount = mlg.Jc[b_i + 1];
    mlg.Jc[b_i + 1] = nzBoth;
    nzBoth += thisRowCount;
  }
  for (nzBoth = 0; nzBoth < i; nzBoth++) {
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &pf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i1 = st[nzBoth + st.size(0)] + 1;
    if ((i1 < 1) || (i1 > mlg.Jc.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, mlg.Jc.size(0), &of_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    thisRowCount = mlg.Jc[i1 - 1];
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &qf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if ((thisRowCount + 1 < 1) || (thisRowCount + 1 > mlg.Ir.size(0))) {
      emlrtDynamicBoundsCheckR2012b(thisRowCount + 1, 1, mlg.Ir.size(0),
                                    &rf_emlrtBCI, (emlrtConstCTX)&sp);
    }
    mlg.Ir[thisRowCount] = st[nzBoth];
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &tf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (i1 > mlg.Jc.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, mlg.Jc.size(0), &sf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &vf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (i1 > mlg.Jc.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, mlg.Jc.size(0), &uf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    mlg.Jc[i1 - 1] = mlg.Jc[i1 - 1] + 1;
  }
  for (nzBoth = 0; nzBoth < i; nzBoth++) {
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &xf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i1 = st[nzBoth] + 1;
    if ((i1 < 1) || (i1 > mlg.Jc.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, mlg.Jc.size(0), &wf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    thisRowCount = mlg.Jc[i1 - 1];
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &yf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if ((thisRowCount + 1 < 1) || (thisRowCount + 1 > mlg.Ir.size(0))) {
      emlrtDynamicBoundsCheckR2012b(thisRowCount + 1, 1, mlg.Ir.size(0),
                                    &ag_emlrtBCI, (emlrtConstCTX)&sp);
    }
    mlg.Ir[thisRowCount] = st[nzBoth + st.size(0)];
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &cg_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (i1 > mlg.Jc.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, mlg.Jc.size(0), &bg_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &eg_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (i1 > mlg.Jc.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, mlg.Jc.size(0), &dg_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    mlg.Jc[i1 - 1] = mlg.Jc[i1 - 1] + 1;
  }
  mlg.isMultigraph = false;
  if (ind.size(0) > 1) {
    boolean_T exitg1;
    nzBoth = 2;
    exitg1 = false;
    while ((!exitg1) && (nzBoth - 2 <= ind.size(0) - 2)) {
      b = ((nzBoth - 1 < 1) || (nzBoth - 1 > st.size(0)));
      if (b) {
        emlrtDynamicBoundsCheckR2012b(nzBoth - 1, 1, st.size(0), &fg_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((nzBoth < 1) || (nzBoth > st.size(0))) {
        emlrtDynamicBoundsCheckR2012b(nzBoth, 1, st.size(0), &gg_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (st[nzBoth - 2] == st[nzBoth - 1]) {
        if (nzBoth > st.size(0)) {
          emlrtDynamicBoundsCheckR2012b(nzBoth, 1, st.size(0), &hg_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (st[(nzBoth + st.size(0)) - 2] == st[(nzBoth + st.size(0)) - 1]) {
          mlg.isMultigraph = true;
          exitg1 = true;
        } else {
          nzBoth++;
        }
      } else {
        nzBoth++;
      }
    }
  }
  b_st.site = &ybb_emlrtRSI;
  MLGraph::definePosMapAndDiag(b_st, mlg.Ir, mlg.Jc, numNodes, mlg.PosMap,
                               mlg.Diag);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void MLGraph::get_Edges(const emlrtStack &sp, array<real_T, 2U> &ed) const
{
  int32_T n;
  if (Jc.size(0) == 0) {
    n = 0;
  } else {
    n = Jc.size(0) - 1;
  }
  if (n == 0) {
    ed.set_size(&lu_emlrtRTEI, &sp, 0, 2);
  } else {
    real_T e_tmp;
    int32_T ll;
    int32_T pp;
    e_tmp = static_cast<real_T>(Ir.size(0)) / 2.0;
    if (e_tmp != muDoubleScalarFloor(e_tmp)) {
      emlrtIntegerCheckR2012b(e_tmp, &p_emlrtDCI, (emlrtConstCTX)&sp);
    }
    ed.set_size(&ku_emlrtRTEI, &sp, static_cast<int32_T>(e_tmp), 2);
    pp = static_cast<int32_T>(e_tmp) << 1;
    for (ll = 0; ll < pp; ll++) {
      ed[ll] = 0.0;
    }
    pp = 1;
    for (int32_T s{0}; s < n; s++) {
      if (s + 1 > Diag.size(0)) {
        emlrtDynamicBoundsCheckR2012b(s + 1, 1, Diag.size(0), &yg_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      ll = Diag[s];
      int32_T exitg1;
      do {
        exitg1 = 0;
        if (s + 2 > Jc.size(0)) {
          emlrtDynamicBoundsCheckR2012b(s + 2, 1, Jc.size(0), &ah_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (ll + 1 <= Jc[s + 1]) {
          if ((ll + 1 < 1) || (ll + 1 > Ir.size(0))) {
            emlrtDynamicBoundsCheckR2012b(ll + 1, 1, Ir.size(0), &xg_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          if (pp > ed.size(0)) {
            emlrtDynamicBoundsCheckR2012b(pp, 1, ed.size(0), &bh_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          ed[pp - 1] = static_cast<real_T>(s) + 1.0;
          if (pp > ed.size(0)) {
            emlrtDynamicBoundsCheckR2012b(pp, 1, ed.size(0), &ch_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          ed[(pp + ed.size(0)) - 1] = Ir[ll];
          pp++;
          if (s + 1 == Ir[ll]) {
            ll += 2;
          } else {
            ll++;
          }
        } else {
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
  }
}

void MLGraph::init(const emlrtStack &sp, const array<real_T, 1U> &s,
                   const array<real_T, 1U> &t, real_T numNodes)
{
  array<real_T, 1U> sExpanded;
  array<real_T, 1U> tExpanded;
  array<int32_T, 2U> st;
  array<boolean_T, 1U> b_s;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  real_T d;
  int32_T i;
  int32_T i1;
  int32_T nzBoth;
  int32_T thisRowCount;
  boolean_T b;
  boolean_T guard1;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_st.site = &eeb_emlrtRSI;
  thisRowCount = s.size(0);
  sExpanded.set_size(&ut_emlrtRTEI, &b_st, s.size(0));
  for (i = 0; i < thisRowCount; i++) {
    sExpanded[i] = s[i];
  }
  c_st.site = &rbb_emlrtRSI;
  d_st.site = &acb_emlrtRSI;
  e_st.site = &qo_emlrtRSI;
  if (sExpanded.size(0) > 2147483646) {
    f_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(f_st);
  }
  b_s.set_size(&vt_emlrtRTEI, &b_st, s.size(0));
  for (i = 0; i < thisRowCount; i++) {
    b_s[i] = (s[i] == sExpanded[i]);
  }
  guard1 = false;
  c_st.site = &rbb_emlrtRSI;
  if (b_all(c_st, b_s)) {
    nzBoth = t.size(0);
    sExpanded.set_size(&wt_emlrtRTEI, &b_st, t.size(0));
    for (i = 0; i < nzBoth; i++) {
      sExpanded[i] = t[i];
    }
    c_st.site = &rbb_emlrtRSI;
    d_st.site = &acb_emlrtRSI;
    e_st.site = &qo_emlrtRSI;
    if (sExpanded.size(0) > 2147483646) {
      f_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }
    b_s.set_size(&xt_emlrtRTEI, &b_st, t.size(0));
    for (i = 0; i < nzBoth; i++) {
      b_s[i] = (t[i] == sExpanded[i]);
    }
    c_st.site = &rbb_emlrtRSI;
    if (b_all(c_st, b_s)) {
      b_s.set_size(&yt_emlrtRTEI, &b_st, s.size(0));
      for (i = 0; i < thisRowCount; i++) {
        b_s[i] = (s[i] > 0.0);
      }
      c_st.site = &sbb_emlrtRSI;
      if (b_all(c_st, b_s)) {
        b_s.set_size(&au_emlrtRTEI, &b_st, t.size(0));
        for (i = 0; i < nzBoth; i++) {
          b_s[i] = (t[i] > 0.0);
        }
        c_st.site = &sbb_emlrtRSI;
        if (!b_all(c_st, b_s)) {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }
  if (guard1) {
    emlrtErrorWithMessageIdR2018a(&b_st, &yb_emlrtRTEI,
                                  "MATLAB:graphfun:graphbuiltin:InvalidSRC",
                                  "MATLAB:graphfun:graphbuiltin:InvalidSRC", 0);
  }
  if (s.size(0) == 1) {
    real_T c_s[2];
    c_s[0] = t.size(0);
    c_s[1] = 1.0;
    c_st.site = &tbb_emlrtRSI;
    repmat(c_st, (const real_T *)s.data(), c_s, sExpanded);
    thisRowCount = t.size(0);
    tExpanded.set_size(&eu_emlrtRTEI, &b_st, t.size(0));
    for (i = 0; i < thisRowCount; i++) {
      tExpanded[i] = t[i];
    }
  } else if (t.size(0) == 1) {
    sExpanded.set_size(&du_emlrtRTEI, &b_st, s.size(0));
    for (i = 0; i < thisRowCount; i++) {
      sExpanded[i] = s[i];
    }
    real_T c_s[2];
    c_s[0] = s.size(0);
    c_s[1] = 1.0;
    c_st.site = &ubb_emlrtRSI;
    repmat(c_st, (const real_T *)t.data(), c_s, tExpanded);
  } else {
    sExpanded.set_size(&bu_emlrtRTEI, &b_st, s.size(0));
    for (i = 0; i < thisRowCount; i++) {
      sExpanded[i] = s[i];
    }
    thisRowCount = t.size(0);
    tExpanded.set_size(&cu_emlrtRTEI, &b_st, t.size(0));
    for (i = 0; i < thisRowCount; i++) {
      tExpanded[i] = t[i];
    }
  }
  c_st.site = &vbb_emlrtRSI;
  d_st.site = &ij_emlrtRSI;
  e_st.site = &jj_emlrtRSI;
  if (tExpanded.size(0) != sExpanded.size(0)) {
    emlrtErrorWithMessageIdR2018a(&e_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  c_st.site = &wbb_emlrtRSI;
  thisRowCount = sExpanded.size(0);
  st.set_size(&fu_emlrtRTEI, &c_st, sExpanded.size(0), 2);
  for (i = 0; i < thisRowCount; i++) {
    st[i] = static_cast<int32_T>(sExpanded[i]);
  }
  thisRowCount = tExpanded.size(0);
  for (i = 0; i < thisRowCount; i++) {
    st[i + st.size(0)] = static_cast<int32_T>(tExpanded[i]);
  }
  d_st.site = &gcb_emlrtRSI;
  ::coder::internal::sort(d_st, st);
  c_st.site = &xbb_emlrtRSI;
  sortrows(c_st, st, sExpanded);
  d = 2.0 * static_cast<real_T>(sExpanded.size(0));
  if (d != static_cast<int32_T>(d)) {
    emlrtIntegerCheckR2012b(d, &m_emlrtDCI, &b_st);
  }
  thisRowCount = static_cast<int32_T>(d);
  Ir.set_size(&gu_emlrtRTEI, &b_st, static_cast<int32_T>(d));
  if (d != static_cast<int32_T>(d)) {
    emlrtIntegerCheckR2012b(d, &m_emlrtDCI, &b_st);
  }
  for (i = 0; i < thisRowCount; i++) {
    Ir[i] = 0;
  }
  if (!(numNodes + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(numNodes + 1.0, &o_emlrtDCI, &b_st);
  }
  d = static_cast<int32_T>(muDoubleScalarFloor(numNodes + 1.0));
  if (numNodes + 1.0 != d) {
    emlrtIntegerCheckR2012b(numNodes + 1.0, &n_emlrtDCI, &b_st);
  }
  Jc.set_size(&hu_emlrtRTEI, &b_st, static_cast<int32_T>(numNodes + 1.0));
  if (numNodes + 1.0 != d) {
    emlrtIntegerCheckR2012b(numNodes + 1.0, &n_emlrtDCI, &b_st);
  }
  thisRowCount = static_cast<int32_T>(numNodes + 1.0);
  for (i = 0; i < thisRowCount; i++) {
    Jc[i] = 0;
  }
  i = sExpanded.size(0);
  for (nzBoth = 0; nzBoth < i; nzBoth++) {
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &gf_emlrtBCI,
                                    &b_st);
    }
    i1 = st[nzBoth] + 1;
    if ((i1 < 1) || (i1 > Jc.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Jc.size(0), &ff_emlrtBCI, &b_st);
    }
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &if_emlrtBCI,
                                    &b_st);
    }
    if (i1 > Jc.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Jc.size(0), &hf_emlrtBCI, &b_st);
    }
    Jc[i1 - 1] = Jc[i1 - 1] + 1;
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &kf_emlrtBCI,
                                    &b_st);
    }
    i1 = st[nzBoth + st.size(0)] + 1;
    if ((i1 < 1) || (i1 > Jc.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Jc.size(0), &jf_emlrtBCI, &b_st);
    }
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &mf_emlrtBCI,
                                    &b_st);
    }
    if (i1 > Jc.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Jc.size(0), &lf_emlrtBCI, &b_st);
    }
    Jc[i1 - 1] = Jc[i1 - 1] + 1;
  }
  nzBoth = 0;
  i1 = static_cast<int32_T>(numNodes);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, numNodes, mxDOUBLE_CLASS,
                                static_cast<int32_T>(numNodes), &ac_emlrtRTEI,
                                &b_st);
  for (int32_T b_i{0}; b_i < i1; b_i++) {
    b = ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 2U) < 1) ||
         (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 2U) > Jc.size(0)));
    if (b) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 2U), 1, Jc.size(0),
          &nf_emlrtBCI, &b_st);
    }
    thisRowCount = Jc[b_i + 1];
    Jc[b_i + 1] = nzBoth;
    nzBoth += thisRowCount;
  }
  for (nzBoth = 0; nzBoth < i; nzBoth++) {
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &pf_emlrtBCI,
                                    &b_st);
    }
    i1 = st[nzBoth + st.size(0)] + 1;
    if ((i1 < 1) || (i1 > Jc.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Jc.size(0), &of_emlrtBCI, &b_st);
    }
    thisRowCount = Jc[i1 - 1];
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &qf_emlrtBCI,
                                    &b_st);
    }
    if ((thisRowCount + 1 < 1) || (thisRowCount + 1 > Ir.size(0))) {
      emlrtDynamicBoundsCheckR2012b(thisRowCount + 1, 1, Ir.size(0),
                                    &rf_emlrtBCI, &b_st);
    }
    Ir[thisRowCount] = st[nzBoth];
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &tf_emlrtBCI,
                                    &b_st);
    }
    if (i1 > Jc.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Jc.size(0), &sf_emlrtBCI, &b_st);
    }
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &vf_emlrtBCI,
                                    &b_st);
    }
    if (i1 > Jc.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Jc.size(0), &uf_emlrtBCI, &b_st);
    }
    Jc[i1 - 1] = Jc[i1 - 1] + 1;
  }
  for (nzBoth = 0; nzBoth < i; nzBoth++) {
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &xf_emlrtBCI,
                                    &b_st);
    }
    i1 = st[nzBoth] + 1;
    if ((i1 < 1) || (i1 > Jc.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Jc.size(0), &wf_emlrtBCI, &b_st);
    }
    thisRowCount = Jc[i1 - 1];
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &yf_emlrtBCI,
                                    &b_st);
    }
    if ((thisRowCount + 1 < 1) || (thisRowCount + 1 > Ir.size(0))) {
      emlrtDynamicBoundsCheckR2012b(thisRowCount + 1, 1, Ir.size(0),
                                    &ag_emlrtBCI, &b_st);
    }
    Ir[thisRowCount] = st[nzBoth + st.size(0)];
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &cg_emlrtBCI,
                                    &b_st);
    }
    if (i1 > Jc.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Jc.size(0), &bg_emlrtBCI, &b_st);
    }
    if (nzBoth + 1 > st.size(0)) {
      emlrtDynamicBoundsCheckR2012b(nzBoth + 1, 1, st.size(0), &eg_emlrtBCI,
                                    &b_st);
    }
    if (i1 > Jc.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Jc.size(0), &dg_emlrtBCI, &b_st);
    }
    Jc[i1 - 1] = Jc[i1 - 1] + 1;
  }
  isMultigraph = false;
  if (sExpanded.size(0) > 1) {
    boolean_T exitg1;
    nzBoth = 2;
    exitg1 = false;
    while ((!exitg1) && (nzBoth - 2 <= sExpanded.size(0) - 2)) {
      b = ((nzBoth - 1 < 1) || (nzBoth - 1 > st.size(0)));
      if (b) {
        emlrtDynamicBoundsCheckR2012b(nzBoth - 1, 1, st.size(0), &fg_emlrtBCI,
                                      &b_st);
      }
      if ((nzBoth < 1) || (nzBoth > st.size(0))) {
        emlrtDynamicBoundsCheckR2012b(nzBoth, 1, st.size(0), &gg_emlrtBCI,
                                      &b_st);
      }
      if (st[nzBoth - 2] == st[nzBoth - 1]) {
        if (nzBoth > st.size(0)) {
          emlrtDynamicBoundsCheckR2012b(nzBoth, 1, st.size(0), &hg_emlrtBCI,
                                        &b_st);
        }
        if (st[(nzBoth + st.size(0)) - 2] == st[(nzBoth + st.size(0)) - 1]) {
          isMultigraph = true;
          exitg1 = true;
        } else {
          nzBoth++;
        }
      } else {
        nzBoth++;
      }
    }
  }
  c_st.site = &ybb_emlrtRSI;
  MLGraph::definePosMapAndDiag(c_st, Ir, Jc, numNodes, PosMap, Diag);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder
void binary_expand_op_20(const emlrtStack &sp, coder::graph &in1,
                         const coder::array<int32_T, 1U> &in2,
                         const coder::matlab::internal::coder::MLGraph &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.Jc.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.Jc.size(0);
  }
  in1.Underlying.Jc.set_size(&sv_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.Jc.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1.Underlying.Jc[i] = in2[i * stride_0_0] + in3.Jc[i * stride_1_0];
  }
}

// End of code generation (MLGraph.cpp)
