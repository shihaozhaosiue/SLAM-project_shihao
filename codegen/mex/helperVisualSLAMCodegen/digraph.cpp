//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// digraph.cpp
//
// Code generation for function 'digraph'
//

// Include files
#include "digraph.h"
#include "MLDigraph.h"
#include "all.h"
#include "eml_int_forloop_overflow_check.h"
#include "graphPropertyContainer.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "helperVisualSLAMCodegen_types.h"
#include "indexShapeCheck.h"
#include "list1.h"
#include "nullAssignment.h"
#include "repmat.h"
#include "rigidtform3d.h"
#include "rowNamesDim.h"
#include "rt_nonfinite.h"
#include "sortrows.h"
#include "sparse1.h"
#include "table.h"
#include "varNamesDim.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo vrb_emlrtRSI{
    178,         // lineNo
    "list/list", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\list.m" // pathName
};

static emlrtRSInfo ebc_emlrtRSI{
    33,                 // lineNo
    "graphBase/rmedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pathName
};

static emlrtRSInfo fbc_emlrtRSI{
    34,                 // lineNo
    "graphBase/rmedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pathName
};

static emlrtRSInfo gbc_emlrtRSI{
    41,                 // lineNo
    "graphBase/rmedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pathName
};

static emlrtRSInfo hbc_emlrtRSI{
    43,                 // lineNo
    "graphBase/rmedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pathName
};

static emlrtRSInfo ibc_emlrtRSI{
    44,                 // lineNo
    "graphBase/rmedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pathName
};

static emlrtRSInfo jbc_emlrtRSI{
    45,                 // lineNo
    "graphBase/rmedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pathName
};

static emlrtRSInfo kbc_emlrtRSI{
    48,                 // lineNo
    "graphBase/rmedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pathName
};

static emlrtRSInfo lbc_emlrtRSI{
    16,                   // lineNo
    "graphBase/findedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\findedge.m" // pathName
};

static emlrtRSInfo mbc_emlrtRSI{
    19,                   // lineNo
    "graphBase/findedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\findedge.m" // pathName
};

static emlrtRSInfo nbc_emlrtRSI{
    25,                   // lineNo
    "graphBase/findedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\findedge.m" // pathName
};

static emlrtRSInfo ued_emlrtRSI{
    37,                 // lineNo
    "graphBase/rmedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pathName
};

static emlrtRSInfo ved_emlrtRSI{
    19,                 // lineNo
    "graphBase/rmedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pathName
};

static emlrtRSInfo wed_emlrtRSI{
    16,                 // lineNo
    "graphBase/rmedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pathName
};

static emlrtRSInfo xed_emlrtRSI{
    162,                       // lineNo
    "digraph/adjacencyTransp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@digraph\\digraph.m" // pathName
};

static emlrtRSInfo yed_emlrtRSI{
    133,                   // lineNo
    "MLDigraph/adjacency", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo afd_emlrtRSI{
    132,                   // lineNo
    "MLDigraph/adjacency", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo bfd_emlrtRSI{
    126,                   // lineNo
    "MLDigraph/adjacency", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo cfd_emlrtRSI{
    158,                                   // lineNo
    "digraph/underlyingConstructorTransp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@digraph\\digraph.m" // pathName
};

static emlrtRSInfo dfd_emlrtRSI{
    49,                    // lineNo
    "MLDigraph/MLDigraph", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo efd_emlrtRSI{
    57,                    // lineNo
    "MLDigraph/MLDigraph", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo ffd_emlrtRSI{
    59,                    // lineNo
    "MLDigraph/MLDigraph", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo gfd_emlrtRSI{
    154,                             // lineNo
    "digraph/underlyingConstructor", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@digraph\\digraph.m" // pathName
};

static emlrtRSInfo hfd_emlrtRSI{
    65,                    // lineNo
    "MLDigraph/MLDigraph", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo qfd_emlrtRSI{
    17,                 // lineNo
    "digraph/conncomp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@digraph\\conncomp.m" // pathName
};

static emlrtRSInfo rfd_emlrtRSI{
    354,                                 // lineNo
    "MLDigraph/weakConnectedComponents", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo sfd_emlrtRSI{
    371,                                 // lineNo
    "MLDigraph/weakConnectedComponents", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo tfd_emlrtRSI{
    375,                                 // lineNo
    "MLDigraph/weakConnectedComponents", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo ufd_emlrtRSI{
    379,                                 // lineNo
    "MLDigraph/weakConnectedComponents", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo vfd_emlrtRSI{
    382,                                 // lineNo
    "MLDigraph/weakConnectedComponents", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo wfd_emlrtRSI{
    386,                                 // lineNo
    "MLDigraph/weakConnectedComponents", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo xfd_emlrtRSI{
    370,                                 // lineNo
    "MLDigraph/weakConnectedComponents", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo yfd_emlrtRSI{
    678,           // lineNo
    "flipDigraph", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo agd_emlrtRSI{
    683,           // lineNo
    "flipDigraph", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo bgd_emlrtRSI{
    690,           // lineNo
    "flipDigraph", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo cgd_emlrtRSI{
    691,           // lineNo
    "flipDigraph", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo dgd_emlrtRSI{
    164,         // lineNo
    "list/list", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\list.m" // pathName
};

static emlrtRSInfo egd_emlrtRSI{
    165,         // lineNo
    "list/list", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\list.m" // pathName
};

static emlrtRTEInfo ag_emlrtRTEI{
    13,               // lineNo
    37,               // colNo
    "validatesquare", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatesquare.m" // pName
};

static emlrtBCInfo pv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    59,                    // lineNo
    69,                    // colNo
    "",                    // aName
    "MLDigraph/MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo qv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    59,                    // lineNo
    67,                    // colNo
    "",                    // aName
    "MLDigraph/MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo rv_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    20,                   // lineNo
    22,                   // colNo
    "",                   // aName
    "graphBase/findedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\findedge.m", // pName
    0                                           // checkKind
};

static emlrtRTEInfo bg_emlrtRTEI{
    23,                   // lineNo
    13,                   // colNo
    "graphBase/findedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\findedge.m" // pName
};

static emlrtBCInfo sv_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    20,                 // lineNo
    26,                 // colNo
    "",                 // aName
    "graphBase/rmedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m", // pName
    0                                         // checkKind
};

static emlrtRTEInfo cg_emlrtRTEI{
    23,                 // lineNo
    13,                 // colNo
    "graphBase/rmedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pName
};

static emlrtBCInfo tv_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    25,                   // lineNo
    28,                   // colNo
    "",                   // aName
    "graphBase/findedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\findedge.m", // pName
    0                                           // checkKind
};

static emlrtDCInfo lc_emlrtDCI{
    652,            // lineNo
    1,              // colNo
    "rowColtoIrJc", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    4                                // checkKind
};

static emlrtBCInfo uv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    134,                   // lineNo
    39,                    // colNo
    "",                    // aName
    "MLDigraph/adjacency", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo vv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    128,                   // lineNo
    22,                    // colNo
    "",                    // aName
    "MLDigraph/adjacency", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo wv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    133,                   // lineNo
    28,                    // colNo
    "",                    // aName
    "MLDigraph/adjacency", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo xv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    133,                   // lineNo
    43,                    // colNo
    "",                    // aName
    "MLDigraph/adjacency", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo yv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    141,                   // lineNo
    26,                    // colNo
    "",                    // aName
    "MLDigraph/adjacency", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo aw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    137,                   // lineNo
    68,                    // colNo
    "",                    // aName
    "MLDigraph/adjacency", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo bw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    137,                   // lineNo
    34,                    // colNo
    "",                    // aName
    "MLDigraph/adjacency", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo cw_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    138,                   // lineNo
    29,                    // colNo
    "",                    // aName
    "MLDigraph/adjacency", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtDCInfo mc_emlrtDCI{
    356,                                 // lineNo
    29,                                  // colNo
    "MLDigraph/weakConnectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    4                                // checkKind
};

static emlrtBCInfo dw_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    376,                                 // lineNo
    36,                                  // colNo
    "",                                  // aName
    "MLDigraph/weakConnectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ew_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    383,                                 // lineNo
    37,                                  // colNo
    "",                                  // aName
    "MLDigraph/weakConnectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo fw_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    692,           // lineNo
    21,            // colNo
    "",            // aName
    "flipDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo gw_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    679,           // lineNo
    28,            // colNo
    "",            // aName
    "flipDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo hw_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    679,           // lineNo
    31,            // colNo
    "",            // aName
    "flipDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo iw_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    679,           // lineNo
    9,             // colNo
    "",            // aName
    "flipDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo jw_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    679,           // lineNo
    12,            // colNo
    "",            // aName
    "flipDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo kw_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    684,           // lineNo
    24,            // colNo
    "",            // aName
    "flipDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo lw_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    685,           // lineNo
    9,             // colNo
    "",            // aName
    "flipDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo mw_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    691,           // lineNo
    14,            // colNo
    "",            // aName
    "flipDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo nw_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    691,           // lineNo
    26,            // colNo
    "",            // aName
    "flipDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ow_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    364,                                 // lineNo
    25,                                  // colNo
    "",                                  // aName
    "MLDigraph/weakConnectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo pw_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    692,           // lineNo
    24,            // colNo
    "",            // aName
    "flipDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo qw_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    693,           // lineNo
    13,            // colNo
    "",            // aName
    "flipDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo rw_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    694,           // lineNo
    13,            // colNo
    "",            // aName
    "flipDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo sw_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    694,           // lineNo
    16,            // colNo
    "",            // aName
    "flipDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo tw_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    375,                                 // lineNo
    34,                                  // colNo
    "",                                  // aName
    "MLDigraph/weakConnectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo uw_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    375,                                 // lineNo
    42,                                  // colNo
    "",                                  // aName
    "MLDigraph/weakConnectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo vw_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    382,                                 // lineNo
    35,                                  // colNo
    "",                                  // aName
    "MLDigraph/weakConnectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ww_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    382,                                 // lineNo
    44,                                  // colNo
    "",                                  // aName
    "MLDigraph/weakConnectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo xw_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    377,                                 // lineNo
    37,                                  // colNo
    "",                                  // aName
    "MLDigraph/weakConnectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo yw_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    378,                                 // lineNo
    38,                                  // colNo
    "",                                  // aName
    "MLDigraph/weakConnectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ax_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    389,                                 // lineNo
    30,                                  // colNo
    "",                                  // aName
    "MLDigraph/weakConnectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo bx_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    384,                                 // lineNo
    37,                                  // colNo
    "",                                  // aName
    "MLDigraph/weakConnectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo cx_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    385,                                 // lineNo
    38,                                  // colNo
    "",                                  // aName
    "MLDigraph/weakConnectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtRTEInfo kqb_emlrtRTEI{
    25,          // lineNo
    13,          // colNo
    "graphBase", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\graphBase.m" // pName
};

static emlrtRTEInfo pqb_emlrtRTEI{
    16,       // lineNo
    9,        // colNo
    "rmedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pName
};

static emlrtRTEInfo qqb_emlrtRTEI{
    14,       // lineNo
    9,        // colNo
    "rmedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pName
};

static emlrtRTEInfo rqb_emlrtRTEI{
    44,       // lineNo
    8,        // colNo
    "rmedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pName
};

static emlrtRTEInfo sqb_emlrtRTEI{
    45,       // lineNo
    44,       // colNo
    "rmedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pName
};

static emlrtRTEInfo tqb_emlrtRTEI{
    45,       // lineNo
    54,       // colNo
    "rmedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pName
};

static emlrtRTEInfo uqb_emlrtRTEI{
    25,         // lineNo
    5,          // colNo
    "findedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\findedge.m" // pName
};

static emlrtRTEInfo vqb_emlrtRTEI{
    16,        // lineNo
    7,         // colNo
    "sub2ind", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m" // pName
};

static emlrtRTEInfo wqb_emlrtRTEI{
    41,       // lineNo
    5,        // colNo
    "rmedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\rmedge.m" // pName
};

static emlrtRTEInfo xqb_emlrtRTEI{
    162,       // lineNo
    13,        // colNo
    "digraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@digraph\\digraph.m" // pName
};

static emlrtRTEInfo yqb_emlrtRTEI{
    674,         // lineNo
    1,           // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

static emlrtRTEInfo arb_emlrtRTEI{
    675,         // lineNo
    1,           // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

static emlrtRTEInfo brb_emlrtRTEI{
    17,         // lineNo
    5,          // colNo
    "conncomp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@digraph\\conncomp.m" // pName
};

static emlrtRTEInfo crb_emlrtRTEI{
    370,         // lineNo
    21,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

// Function Definitions
namespace coder {
void digraph::adjacencyTransp(const emlrtStack &sp, sparse &out) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  int32_T numalloc;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &xed_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &bfd_emlrtRSI;
  c_st.site = &yhb_emlrtRSI;
  d_st.site = &eib_emlrtRSI;
  if (Underlying.Jc.size(0) - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&d_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  d_st.site = &dib_emlrtRSI;
  if (Underlying.Jc.size(0) - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&d_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  out.m = Underlying.Jc.size(0) - 1;
  out.n = Underlying.Jc.size(0) - 1;
  d_st.site = &cib_emlrtRSI;
  if (Underlying.Ir.size(0) >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  numalloc = Underlying.Ir.size(0);
  numalloc = muIntScalarMax_sint32(numalloc, 1);
  out.d.set_size(&xqb_emlrtRTEI, &c_st, numalloc);
  for (i = 0; i < numalloc; i++) {
    out.d[i] = 0.0;
  }
  out.maxnz = numalloc;
  loop_ub = Underlying.Jc.size(0);
  out.colidx.set_size(&xqb_emlrtRTEI, &c_st, Underlying.Jc.size(0));
  for (i = 0; i < loop_ub; i++) {
    out.colidx[i] = 0;
  }
  out.colidx[0] = 1;
  out.rowidx.set_size(&xqb_emlrtRTEI, &c_st, numalloc);
  for (i = 0; i < numalloc; i++) {
    out.rowidx[i] = 0;
  }
  for (numalloc = 0; numalloc <= loop_ub - 2; numalloc++) {
    out.colidx[numalloc + 1] = 1;
  }
  out.fillIn();
  if (out.colidx.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, out.colidx.size(0), &vv_emlrtBCI, &st);
  }
  out.colidx[0] = 1;
  numalloc = 0;
  b_st.site = &afd_emlrtRSI;
  for (int32_T ii{0}; ii <= loop_ub - 2; ii++) {
    int32_T a;
    int32_T b;
    if (ii + 1 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(ii + 1, 1, loop_ub, &wv_emlrtBCI, &st);
    }
    a = Underlying.Jc[ii] + 1;
    if (ii + 2 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(ii + 2, 1, loop_ub, &xv_emlrtBCI, &st);
    }
    b = Underlying.Jc[ii + 1];
    b_st.site = &yed_emlrtRSI;
    i = Underlying.Jc[ii + 1];
    if ((Underlying.Jc[ii] + 1 <= i) && (i > 2147483646)) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (int32_T l{a}; l <= b; l++) {
      int32_T i1;
      if ((l < 1) || (l > Underlying.Ir.size(0))) {
        emlrtDynamicBoundsCheckR2012b(l, 1, Underlying.Ir.size(0), &uv_emlrtBCI,
                                      &st);
      }
      if (l > Underlying.Ir.size(0)) {
        emlrtDynamicBoundsCheckR2012b(l, 1, Underlying.Ir.size(0), &aw_emlrtBCI,
                                      &st);
      }
      i1 = ((numalloc + l) - a) + 1;
      if ((i1 < 1) || (i1 > out.rowidx.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, out.rowidx.size(0), &bw_emlrtBCI,
                                      &st);
      }
      out.rowidx[i1 - 1] = Underlying.Ir[l - 1];
      if (i1 > out.d.size(0)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, out.d.size(0), &cw_emlrtBCI, &st);
      }
      out.d[i1 - 1] = 1.0;
    }
    if (i >= Underlying.Jc[ii] + 1) {
      numalloc = (numalloc + i) - Underlying.Jc[ii];
    }
    if (ii + 2 > out.colidx.size(0)) {
      emlrtDynamicBoundsCheckR2012b(ii + 2, 1, out.colidx.size(0), &yv_emlrtBCI,
                                    &st);
    }
    out.colidx[ii + 1] = numalloc + 1;
  }
}

void digraph::underlyingConstructor(const emlrtStack &sp,
                                    const array<real_T, 1U> &varargin_1,
                                    const array<real_T, 1U> &varargin_2,
                                    real_T varargin_3,
                                    matlab::internal::coder::MLDigraph &out)
{
  array<real_T, 2U> st;
  array<real_T, 1U> mjd_emlrtRSI;
  array<real_T, 1U> s1;
  array<real_T, 1U> t1;
  array<boolean_T, 1U> b_varargin_1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  int32_T loop_ub;
  boolean_T exitg1;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_st.site = &gfd_emlrtRSI;
  c_st.site = &hfd_emlrtRSI;
  loop_ub = varargin_1.size(0);
  s1.set_size(&spb_emlrtRTEI, &c_st, varargin_1.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    s1[i] = varargin_1[i];
  }
  d_st.site = &jed_emlrtRSI;
  e_st.site = &acb_emlrtRSI;
  f_st.site = &qo_emlrtRSI;
  if (s1.size(0) > 2147483646) {
    g_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(g_st);
  }
  b_varargin_1.set_size(&tpb_emlrtRTEI, &c_st, varargin_1.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_varargin_1[i] = (varargin_1[i] == s1[i]);
  }
  guard1 = false;
  d_st.site = &jed_emlrtRSI;
  if (b_all(d_st, b_varargin_1)) {
    int32_T b_loop_ub;
    b_loop_ub = varargin_2.size(0);
    s1.set_size(&upb_emlrtRTEI, &c_st, varargin_2.size(0));
    for (int32_T i{0}; i < b_loop_ub; i++) {
      s1[i] = varargin_2[i];
    }
    d_st.site = &jed_emlrtRSI;
    e_st.site = &acb_emlrtRSI;
    f_st.site = &qo_emlrtRSI;
    if (s1.size(0) > 2147483646) {
      g_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(g_st);
    }
    b_varargin_1.set_size(&vpb_emlrtRTEI, &c_st, varargin_2.size(0));
    for (int32_T i{0}; i < b_loop_ub; i++) {
      b_varargin_1[i] = (varargin_2[i] == s1[i]);
    }
    d_st.site = &jed_emlrtRSI;
    if (b_all(d_st, b_varargin_1)) {
      b_varargin_1.set_size(&wpb_emlrtRTEI, &c_st, varargin_1.size(0));
      for (int32_T i{0}; i < loop_ub; i++) {
        b_varargin_1[i] = (varargin_1[i] > 0.0);
      }
      d_st.site = &ked_emlrtRSI;
      if (b_all(d_st, b_varargin_1)) {
        b_varargin_1.set_size(&xpb_emlrtRTEI, &c_st, varargin_2.size(0));
        for (int32_T i{0}; i < b_loop_ub; i++) {
          b_varargin_1[i] = (varargin_2[i] > 0.0);
        }
        d_st.site = &ked_emlrtRSI;
        if (!b_all(d_st, b_varargin_1)) {
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
    emlrtErrorWithMessageIdR2018a(&c_st, &tf_emlrtRTEI,
                                  "MATLAB:graphfun:graphbuiltin:InvalidSRC",
                                  "MATLAB:graphfun:graphbuiltin:InvalidSRC", 0);
  }
  if (varargin_1.size(0) == 1) {
    real_T c_varargin_1[2];
    c_varargin_1[0] = varargin_2.size(0);
    c_varargin_1[1] = 1.0;
    d_st.site = &led_emlrtRSI;
    repmat(d_st, (const real_T *)varargin_1.data(), c_varargin_1, s1);
    loop_ub = varargin_2.size(0);
    t1.set_size(&cqb_emlrtRTEI, &c_st, varargin_2.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      t1[i] = varargin_2[i];
    }
  } else if (varargin_2.size(0) == 1) {
    real_T c_varargin_1[2];
    c_varargin_1[0] = varargin_1.size(0);
    c_varargin_1[1] = 1.0;
    d_st.site = &med_emlrtRSI;
    repmat(d_st, (const real_T *)varargin_2.data(), c_varargin_1, t1);
    s1.set_size(&bqb_emlrtRTEI, &c_st, varargin_1.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      s1[i] = varargin_1[i];
    }
  } else {
    s1.set_size(&ypb_emlrtRTEI, &c_st, varargin_1.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      s1[i] = varargin_1[i];
    }
    loop_ub = varargin_2.size(0);
    t1.set_size(&aqb_emlrtRTEI, &c_st, varargin_2.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      t1[i] = varargin_2[i];
    }
  }
  d_st.site = &ned_emlrtRSI;
  e_st.site = &ij_emlrtRSI;
  f_st.site = &jj_emlrtRSI;
  if (t1.size(0) != s1.size(0)) {
    emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  loop_ub = s1.size(0);
  st.set_size(&dqb_emlrtRTEI, &c_st, s1.size(0), 2);
  for (int32_T i{0}; i < loop_ub; i++) {
    st[i] = s1[i];
  }
  loop_ub = t1.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    st[i + st.size(0)] = t1[i];
  }
  d_st.site = &ned_emlrtRSI;
  sortrows(d_st, st, mjd_emlrtRSI);
  out.isMultigraph = false;
  loop_ub = 2;
  exitg1 = false;
  while ((!exitg1) && (loop_ub - 2 <= st.size(0) - 2)) {
    boolean_T b;
    b = ((loop_ub - 1 < 1) || (loop_ub - 1 > st.size(0)));
    if (b) {
      emlrtDynamicBoundsCheckR2012b(loop_ub - 1, 1, st.size(0), &fv_emlrtBCI,
                                    &c_st);
    }
    if ((loop_ub < 1) || (loop_ub > st.size(0))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, st.size(0), &gv_emlrtBCI,
                                    &c_st);
    }
    if (st[loop_ub - 2] == st[loop_ub - 1]) {
      if (loop_ub > st.size(0)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, st.size(0), &hv_emlrtBCI,
                                      &c_st);
      }
      if (st[(loop_ub + st.size(0)) - 2] == st[(loop_ub + st.size(0)) - 1]) {
        out.isMultigraph = true;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    } else {
      loop_ub++;
    }
  }
  loop_ub = st.size(0);
  s1.set_size(&eqb_emlrtRTEI, &c_st, st.size(0));
  t1.set_size(&fqb_emlrtRTEI, &c_st, st.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    s1[i] = st[i + st.size(0)];
    t1[i] = st[i];
  }
  d_st.site = &oed_emlrtRSI;
  matlab::internal::coder::MLDigraph::rowColtoIrJc(d_st, s1, t1, varargin_3,
                                                   out.Ir, out.Jc);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void digraph::conncomp(const emlrtStack &sp, array<real_T, 2U> &bins) const
{
  internal::b_list nodeList;
  array<int32_T, 1U> irF;
  array<int32_T, 1U> jcF;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T nextbin;
  int32_T b_i;
  int32_T e_tmp;
  int32_T i;
  int32_T k;
  int32_T loop_ub;
  int32_T n_tmp;
  int32_T nz;
  int32_T thisRowCount;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &qfd_emlrtRSI;
  n_tmp = Underlying.Jc.size(0) - 1;
  b_st.site = &rfd_emlrtRSI;
  e_tmp = Underlying.Ir.size(0);
  irF.set_size(&yqb_emlrtRTEI, &b_st, Underlying.Ir.size(0));
  for (i = 0; i < e_tmp; i++) {
    irF[i] = 0;
  }
  loop_ub = Underlying.Jc.size(0);
  jcF.set_size(&arb_emlrtRTEI, &b_st, Underlying.Jc.size(0));
  for (i = 0; i < loop_ub; i++) {
    jcF[i] = 0;
  }
  c_st.site = &yfd_emlrtRSI;
  if (Underlying.Ir.size(0) > 2147483646) {
    d_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (k = 0; k < e_tmp; k++) {
    if (k + 1 > e_tmp) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, e_tmp, &hw_emlrtBCI, &b_st);
    }
    i = Underlying.Ir[k] + 1;
    if ((i < 1) || (i > jcF.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, jcF.size(0), &gw_emlrtBCI, &b_st);
    }
    if (k + 1 > e_tmp) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, e_tmp, &jw_emlrtBCI, &b_st);
    }
    if (i > jcF.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, jcF.size(0), &iw_emlrtBCI, &b_st);
    }
    jcF[i - 1] = jcF[i - 1] + 1;
  }
  nz = 0;
  c_st.site = &agd_emlrtRSI;
  for (b_i = 0; b_i <= loop_ub - 2; b_i++) {
    if (b_i + 2 > jcF.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, jcF.size(0), &kw_emlrtBCI,
                                    &b_st);
    }
    thisRowCount = jcF[b_i + 1];
    if (b_i + 2 > jcF.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, jcF.size(0), &lw_emlrtBCI,
                                    &b_st);
    }
    jcF[b_i + 1] = nz;
    nz += thisRowCount;
  }
  c_st.site = &bgd_emlrtRSI;
  for (int32_T j{0}; j <= loop_ub - 2; j++) {
    if (j + 1 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, loop_ub, &mw_emlrtBCI, &b_st);
    }
    nz = Underlying.Jc[j] + 1;
    if (j + 2 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(j + 2, 1, loop_ub, &nw_emlrtBCI, &b_st);
    }
    thisRowCount = Underlying.Jc[j + 1];
    c_st.site = &cgd_emlrtRSI;
    i = Underlying.Jc[j + 1];
    if ((Underlying.Jc[j] + 1 <= i) && (i > 2147483646)) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (k = nz; k <= thisRowCount; k++) {
      if ((k < 1) || (k > e_tmp)) {
        emlrtDynamicBoundsCheckR2012b(k, 1, e_tmp, &pw_emlrtBCI, &b_st);
      }
      i = Underlying.Ir[k - 1];
      if ((i + 1 < 1) || (i + 1 > jcF.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, jcF.size(0), &fw_emlrtBCI,
                                      &b_st);
      }
      b_i = jcF[i] + 1;
      if ((b_i < 1) || (b_i > irF.size(0))) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, irF.size(0), &qw_emlrtBCI, &b_st);
      }
      irF[b_i - 1] = j + 1;
      if (k > e_tmp) {
        emlrtDynamicBoundsCheckR2012b(k, 1, e_tmp, &sw_emlrtBCI, &b_st);
      }
      if ((i + 1 < 1) || (i + 1 > jcF.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, jcF.size(0), &rw_emlrtBCI,
                                      &b_st);
      }
      jcF[i] = b_i;
    }
  }
  if (Underlying.Jc.size(0) - 1 < 0) {
    emlrtNonNegativeCheckR2012b(-1.0, &mc_emlrtDCI, &st);
  }
  nz = Underlying.Jc.size(0) - 1;
  bins.set_size(&brb_emlrtRTEI, &st, 1, Underlying.Jc.size(0) - 1);
  for (i = 0; i < nz; i++) {
    bins[i] = 0.0;
  }
  nextbin = 0.0;
  for (b_i = 0; b_i <= loop_ub - 2; b_i++) {
    if (b_i + 1 > bins.size(1)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, bins.size(1), &ow_emlrtBCI,
                                    &st);
    }
    if (bins[b_i] == 0.0) {
      nextbin++;
      b_st.site = &xfd_emlrtRSI;
      c_st.site = &dgd_emlrtRSI;
      nodeList.valuePool.set_size(&crb_emlrtRTEI, &c_st, n_tmp);
      for (i = 0; i < n_tmp; i++) {
        nodeList.valuePool[i] = b_i + 1;
      }
      c_st.site = &egd_emlrtRSI;
      nodeList.nodePool.set_size(&crb_emlrtRTEI, &c_st, n_tmp);
      for (i = 0; i < n_tmp; i++) {
        nodeList.nodePool[i] = r;
      }
      c_st.site = &vrb_emlrtRSI;
      nodeList.len = 0;
      for (k = 0; k < n_tmp; k++) {
        nodeList.nodePool[k].addr = k + 1;
        nodeList.nodePool[k].next = k + 2;
        nodeList.nodePool[k].prev = k;
      }
      nodeList.nodePool[nodeList.nodePool.size(0) - 1].next = 0;
      nodeList.unusedAddr = 1;
      b_st.site = &sfd_emlrtRSI;
      c_st.site = &wrb_emlrtRSI;
      nodeList.newNodeAddr(c_st);
      nodeList.frontAddr = 1;
      nodeList.backAddr = 1;
      nodeList.nodePool[0].next = 0;
      nodeList.valuePool[0] = static_cast<real_T>(b_i) + 1.0;
      while (nodeList.len > 0) {
        real_T s;
        if (nodeList.frontAddr == 0) {
          s = 0.0;
        } else {
          k = nodeList.frontAddr;
          s = nodeList.valuePool[nodeList.frontAddr - 1];
          nodeList.frontAddr = nodeList.nodePool[nodeList.frontAddr - 1].next;
          if (nodeList.frontAddr != 0) {
            nodeList.nodePool[nodeList.frontAddr - 1].prev = 0;
          } else {
            nodeList.backAddr = 0;
          }
          nodeList.len--;
          if (nodeList.unusedAddr != 0) {
            nodeList.nodePool[nodeList.unusedAddr - 1].prev = k;
          }
          nodeList.nodePool[k - 1].next = nodeList.unusedAddr;
          nodeList.nodePool[k - 1].prev = 0;
          nodeList.unusedAddr = k;
        }
        if ((static_cast<int32_T>(s) < 1) ||
            (static_cast<int32_T>(s) > loop_ub)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(s), 1, loop_ub,
                                        &tw_emlrtBCI, &st);
        }
        nz = Underlying.Jc[static_cast<int32_T>(s) - 1] + 1;
        if ((static_cast<int32_T>(s + 1.0) < 1) ||
            (static_cast<int32_T>(s + 1.0) > loop_ub)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(s + 1.0), 1,
                                        loop_ub, &uw_emlrtBCI, &st);
        }
        thisRowCount = Underlying.Jc[static_cast<int32_T>(s + 1.0) - 1];
        b_st.site = &tfd_emlrtRSI;
        if ((nz <= thisRowCount) && (thisRowCount > 2147483646)) {
          c_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(c_st);
        }
        for (int32_T j{nz}; j <= thisRowCount; j++) {
          if ((j < 1) || (j > e_tmp)) {
            emlrtDynamicBoundsCheckR2012b(j, 1, e_tmp, &dw_emlrtBCI, &st);
          }
          i = Underlying.Ir[j - 1];
          if ((i < 1) || (i > bins.size(1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, bins.size(1), &xw_emlrtBCI,
                                          &st);
          }
          if (bins[i - 1] == 0.0) {
            if (i > bins.size(1)) {
              emlrtDynamicBoundsCheckR2012b(i, 1, bins.size(1), &yw_emlrtBCI,
                                            &st);
            }
            bins[i - 1] = -1.0;
            b_st.site = &ufd_emlrtRSI;
            c_st.site = &wrb_emlrtRSI;
            k = nodeList.newNodeAddr(c_st);
            if (k != 0) {
              if (nodeList.frontAddr == 0) {
                nodeList.frontAddr = k;
                nodeList.backAddr = k;
                nodeList.nodePool[k - 1].next = 0;
              } else {
                nodeList.nodePool[k - 1].prev = nodeList.backAddr;
                nodeList.nodePool[nodeList.backAddr - 1].next = k;
                nodeList.backAddr = k;
              }
              nodeList.valuePool[k - 1] = i;
            }
          }
        }
        if ((static_cast<int32_T>(s) < 1) ||
            (static_cast<int32_T>(s) > jcF.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(s), 1, jcF.size(0),
                                        &vw_emlrtBCI, &st);
        }
        nz = jcF[static_cast<int32_T>(s) - 1] + 1;
        if ((static_cast<int32_T>(s + 1.0) < 1) ||
            (static_cast<int32_T>(s + 1.0) > jcF.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(s + 1.0), 1,
                                        jcF.size(0), &ww_emlrtBCI, &st);
        }
        thisRowCount = jcF[static_cast<int32_T>(s + 1.0) - 1];
        b_st.site = &vfd_emlrtRSI;
        if ((nz <= thisRowCount) && (thisRowCount > 2147483646)) {
          c_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(c_st);
        }
        for (int32_T j{nz}; j <= thisRowCount; j++) {
          if ((j < 1) || (j > irF.size(0))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, irF.size(0), &ew_emlrtBCI, &st);
          }
          i = irF[j - 1];
          if ((i < 1) || (i > bins.size(1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, bins.size(1), &bx_emlrtBCI,
                                          &st);
          }
          if (bins[i - 1] == 0.0) {
            if (i > bins.size(1)) {
              emlrtDynamicBoundsCheckR2012b(i, 1, bins.size(1), &cx_emlrtBCI,
                                            &st);
            }
            bins[i - 1] = -1.0;
            b_st.site = &wfd_emlrtRSI;
            c_st.site = &wrb_emlrtRSI;
            k = nodeList.newNodeAddr(c_st);
            if (k != 0) {
              if (nodeList.frontAddr == 0) {
                nodeList.frontAddr = k;
                nodeList.backAddr = k;
                nodeList.nodePool[k - 1].next = 0;
              } else {
                nodeList.nodePool[k - 1].prev = nodeList.backAddr;
                nodeList.nodePool[nodeList.backAddr - 1].next = k;
                nodeList.backAddr = k;
              }
              nodeList.valuePool[k - 1] = i;
            }
          }
        }
        if ((static_cast<int32_T>(s) < 1) ||
            (static_cast<int32_T>(s) > bins.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(s), 1,
                                        bins.size(1), &ax_emlrtBCI, &st);
        }
        bins[static_cast<int32_T>(s) - 1] = nextbin;
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void digraph::get_Edges(const emlrtStack &sp, e_table &E) const
{
  array<uint32_T, 2U> indices;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T b_i;
  int32_T i;
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
  st.site = &krb_emlrtRSI;
  Underlying.get_Edges(st, E.data.f1);
  st.site = &lrb_emlrtRSI;
  b_st.site = &mrb_emlrtRSI;
  E.arrayProps.Description.size[0] = 1;
  E.arrayProps.Description.size[1] = 0;
  c_st.site = &pab_emlrtRSI;
  if (EdgeProperties.data.f1.size(0) != E.data.f1.size(0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ec_emlrtRTEI,
                                  "MATLAB:table:UnequalVarLengths",
                                  "MATLAB:table:UnequalVarLengths", 0);
  }
  if (EdgeProperties.data.f2.size(0) != E.data.f1.size(0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ec_emlrtRTEI,
                                  "MATLAB:table:UnequalVarLengths",
                                  "MATLAB:table:UnequalVarLengths", 0);
  }
  if (EdgeProperties.data.f3.size(0) != E.data.f1.size(0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ec_emlrtRTEI,
                                  "MATLAB:table:UnequalVarLengths",
                                  "MATLAB:table:UnequalVarLengths", 0);
  }
  c_st.site = &qab_emlrtRSI;
  d_st.site = &rab_emlrtRSI;
  e_st.site = &tab_emlrtRSI;
  E.rowDim.length = E.data.f1.size(0);
  f_st.site = &uab_emlrtRSI;
  i = E.data.f1.size(0);
  indices.set_size(&dv_emlrtRTEI, &f_st, 1, E.data.f1.size(0));
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1 > indices.size(1)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, indices.size(1), &dh_emlrtBCI,
                                    &f_st);
    }
    indices[b_i] = static_cast<uint32_T>(b_i + 1);
  }
  E.varDim.hasUnits = false;
  E.varDim.units[0].f1.set_size(&ev_emlrtRTEI, &c_st, 1, 0);
  E.varDim.units[1].f1.set_size(&ev_emlrtRTEI, &c_st, 1, 0);
  E.varDim.units[2].f1.set_size(&ev_emlrtRTEI, &c_st, 1, 0);
  E.varDim.units[3].f1.set_size(&ev_emlrtRTEI, &c_st, 1, 0);
  E.varDim.hasDescrs = false;
  E.varDim.descrs[0].f1.set_size(&fv_emlrtRTEI, &c_st, 1, 0);
  E.varDim.descrs[1].f1.set_size(&fv_emlrtRTEI, &c_st, 1, 0);
  E.varDim.descrs[2].f1.set_size(&fv_emlrtRTEI, &c_st, 1, 0);
  E.varDim.descrs[3].f1.set_size(&fv_emlrtRTEI, &c_st, 1, 0);
  E.varDim.hasContinuity = false;
  E.varDim.continuity[0] = matlab::internal::coder::tabular::Continuity::unset;
  E.varDim.continuity[1] = matlab::internal::coder::tabular::Continuity::unset;
  E.varDim.continuity[2] = matlab::internal::coder::tabular::Continuity::unset;
  E.varDim.continuity[3] = matlab::internal::coder::tabular::Continuity::unset;
  d_st.site = &sab_emlrtRSI;
  e_st.site = &vab_emlrtRSI;
  b_i = EdgeProperties.data.f1.size(0);
  E.data.f2.set_size(&kqb_emlrtRTEI, &c_st, EdgeProperties.data.f1.size(0));
  for (i = 0; i < b_i; i++) {
    E.data.f2[i] = EdgeProperties.data.f1[i];
  }
  E.data.f3.set_size(&hv_emlrtRTEI, &c_st, EdgeProperties.data.f2.size(0),
                     EdgeProperties.data.f2.size(1));
  b_i = EdgeProperties.data.f2.size(0) * EdgeProperties.data.f2.size(1);
  for (i = 0; i < b_i; i++) {
    E.data.f3[i] = EdgeProperties.data.f2[i];
  }
  b_i = EdgeProperties.data.f3.size(0);
  E.data.f4.set_size(&kqb_emlrtRTEI, &c_st, EdgeProperties.data.f3.size(0));
  for (i = 0; i < b_i; i++) {
    E.data.f4[i] = EdgeProperties.data.f3[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void digraph::rmedge(const emlrtStack &sp, const array<real_T, 1U> &s,
                     digraph &H) const
{
  sparse A;
  array<real_T, 2U> e;
  array<real_T, 2U> ed;
  array<real_T, 1U> b_ed;
  array<real_T, 1U> c_ed;
  array<real_T, 1U> ind;
  array<int32_T, 1U> b_ind;
  array<int8_T, 1U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T b_tmp;
  int32_T currentNumEdges_tmp_tmp;
  int32_T i;
  int32_T n;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  H = *this;
  if (s.size(0) == 0) {
    ind.set_size(&qqb_emlrtRTEI, &sp, 0);
  } else {
    st.site = &wed_emlrtRSI;
    n = s.size(0);
    b_st.site = &uib_emlrtRSI;
    if (s.size(0) > muIntScalarMax_sint32(n, n)) {
      emlrtErrorWithMessageIdR2018a(
          &st, &oc_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
          "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }
    ind.set_size(&pqb_emlrtRTEI, &sp, s.size(0));
    for (i = 0; i < n; i++) {
      ind[i] = s[i];
    }
  }
  currentNumEdges_tmp_tmp = Underlying.Ir.size(0);
  b_tmp = ind.size(0);
  st.site = &ved_emlrtRSI;
  if (ind.size(0) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (n = 0; n < b_tmp; n++) {
    if (n + 1 > b_tmp) {
      emlrtDynamicBoundsCheckR2012b(n + 1, 1, b_tmp, &sv_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if ((!(ind[n] == ind[n])) || (!(ind[n] <= currentNumEdges_tmp_tmp))) {
      emlrtErrorWithMessageIdR2018a(
          &sp, &cg_emlrtRTEI, "MATLAB:graphfun:findedge:EdgeBounds",
          "MATLAB:graphfun:findedge:EdgeBounds", 2, 6,
          static_cast<real_T>(currentNumEdges_tmp_tmp));
    }
  }
  if (!Underlying.isMultigraph) {
    uint32_T varargin_1[2];
    uint32_T varargin_2[2];
    boolean_T exitg1;
    boolean_T p;
    st.site = &ebc_emlrtRSI;
    b_st.site = &lbc_emlrtRSI;
    c_st.site = &uib_emlrtRSI;
    n = ind.size(0);
    if (ind.size(0) < 1) {
      n = 1;
    }
    if (ind.size(0) > muIntScalarMax_sint32(b_tmp, n)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &oc_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
          "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }
    b_st.site = &mbc_emlrtRSI;
    for (n = 0; n < b_tmp; n++) {
      if (n + 1 > b_tmp) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, b_tmp, &rv_emlrtBCI, &st);
      }
      if ((!(ind[n] == ind[n])) || (!(ind[n] <= currentNumEdges_tmp_tmp))) {
        emlrtErrorWithMessageIdR2018a(
            &st, &bg_emlrtRTEI, "MATLAB:graphfun:findedge:EdgeBounds",
            "MATLAB:graphfun:findedge:EdgeBounds", 2, 6,
            static_cast<real_T>(currentNumEdges_tmp_tmp));
      }
    }
    b_st.site = &nbc_emlrtRSI;
    Underlying.get_Edges(b_st, ed);
    e.set_size(&uqb_emlrtRTEI, &st, ind.size(0), 2);
    for (i = 0; i < 2; i++) {
      for (currentNumEdges_tmp_tmp = 0; currentNumEdges_tmp_tmp < b_tmp;
           currentNumEdges_tmp_tmp++) {
        n = static_cast<int32_T>(ind[currentNumEdges_tmp_tmp]);
        if ((n < 1) || (n > ed.size(0))) {
          emlrtDynamicBoundsCheckR2012b(n, 1, ed.size(0), &tv_emlrtBCI, &st);
        }
        e[currentNumEdges_tmp_tmp + e.size(0) * i] =
            ed[(n + ed.size(0) * i) - 1];
      }
    }
    st.site = &fbc_emlrtRSI;
    adjacencyTransp(st, A);
    st.site = &ued_emlrtRSI;
    b_st.site = &ki_emlrtRSI;
    currentNumEdges_tmp_tmp = Underlying.Jc.size(0) - 1;
    n = 0;
    exitg1 = false;
    while ((!exitg1) && (n <= ind.size(0) - 1)) {
      if ((e[n + e.size(0)] >= 1.0) &&
          (e[n + e.size(0)] <= currentNumEdges_tmp_tmp)) {
        n++;
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &p_emlrtRTEI,
                                      "MATLAB:sub2ind:IndexOutOfRange",
                                      "MATLAB:sub2ind:IndexOutOfRange", 0);
      }
    }
    varargin_1[0] = static_cast<uint32_T>(ind.size(0));
    varargin_1[1] = 1U;
    varargin_2[0] = static_cast<uint32_T>(ind.size(0));
    varargin_2[1] = 1U;
    p = true;
    n = 0;
    exitg1 = false;
    while ((!exitg1) && (n < 2)) {
      if (varargin_1[n] != varargin_2[n]) {
        p = false;
        exitg1 = true;
      } else {
        n++;
      }
    }
    if (!p) {
      emlrtErrorWithMessageIdR2018a(&b_st, &q_emlrtRTEI,
                                    "MATLAB:sub2ind:SubscriptVectorSize",
                                    "MATLAB:sub2ind:SubscriptVectorSize", 0);
    }
    n = 0;
    exitg1 = false;
    while ((!exitg1) && (n <= ind.size(0) - 1)) {
      if ((e[n] >= 1.0) && (e[n] <= Underlying.Jc.size(0) - 1)) {
        n++;
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &p_emlrtRTEI,
                                      "MATLAB:sub2ind:IndexOutOfRange",
                                      "MATLAB:sub2ind:IndexOutOfRange", 0);
      }
    }
    b_ed.set_size(&vqb_emlrtRTEI, &sp, ind.size(0));
    for (i = 0; i < b_tmp; i++) {
      b_ed[i] = static_cast<int32_T>(e[i + e.size(0)]) +
                currentNumEdges_tmp_tmp * (static_cast<int32_T>(e[i]) - 1);
    }
    st.site = &ued_emlrtRSI;
    A.parenAssign(st, b_ed);
    st.site = &gbc_emlrtRSI;
    b_st.site = &cfd_emlrtRSI;
    c_st.site = &dfd_emlrtRSI;
    d_st.site = &be_emlrtRSI;
    if (A.m != A.n) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &ag_emlrtRTEI,
          "Coder:toolbox:ValidateattributesexpectedSquare",
          "MATLAB:expectedSquare", 3, 4, 5, "input");
    }
    if ((A.m == 0) || (A.n == 0)) {
      H.Underlying.Ir.set_size(&wqb_emlrtRTEI, &b_st, 0);
      H.Underlying.Jc.set_size(&wqb_emlrtRTEI, &b_st, 1);
      H.Underlying.Jc[0] = 0;
    } else {
      n = A.colidx[A.colidx.size(0) - 1] - 1;
      if (n == 0) {
        c_st.site = &efd_emlrtRSI;
        d_st.site = &oed_emlrtRSI;
        p = !(static_cast<real_T>(A.m) + 1.0 >= 0.0);
        if (p) {
          emlrtNonNegativeCheckR2012b(static_cast<real_T>(A.m) + 1.0,
                                      &lc_emlrtDCI, &d_st);
        }
        if (static_cast<real_T>(A.m) + 1.0 != A.m + 1) {
          emlrtIntegerCheckR2012b(static_cast<real_T>(A.m) + 1.0, &jc_emlrtDCI,
                                  &d_st);
        }
        b_r.set_size(&gqb_emlrtRTEI, &d_st, A.m + 1);
        if (static_cast<real_T>(A.m) + 1.0 != A.m + 1) {
          emlrtIntegerCheckR2012b(static_cast<real_T>(A.m) + 1.0, &jc_emlrtDCI,
                                  &d_st);
        }
        n = A.m + 1;
        for (i = 0; i < n; i++) {
          b_r[i] = 0;
        }
        i = A.m;
        emlrtForLoopVectorCheckR2021a(2.0, 1.0, static_cast<real_T>(A.m) + 1.0,
                                      mxDOUBLE_CLASS, A.m, &xf_emlrtRTEI,
                                      &d_st);
        for (n = 0; n < i; n++) {
          if ((static_cast<int32_T>(static_cast<uint32_T>(n) + 2U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(n) + 2U) >
               b_r.size(0))) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(n) + 2U), 1,
                b_r.size(0), &jv_emlrtBCI, &d_st);
          }
          b_r[n + 1] = 0;
        }
        H.Underlying.Ir.set_size(&wqb_emlrtRTEI, &c_st, 0);
        n = b_r.size(0);
        H.Underlying.Jc.set_size(&wqb_emlrtRTEI, &c_st, b_r.size(0));
        for (i = 0; i < n; i++) {
          H.Underlying.Jc[i] = 0;
        }
      } else {
        int32_T b_iv[2];
        if (n < 1) {
          n = 0;
        } else {
          if (A.rowidx.size(0) < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, A.rowidx.size(0), &qv_emlrtBCI,
                                          &b_st);
          }
          if (n > A.rowidx.size(0)) {
            emlrtDynamicBoundsCheckR2012b(n, 1, A.rowidx.size(0), &pv_emlrtBCI,
                                          &b_st);
          }
        }
        b_iv[0] = 1;
        b_iv[1] = n;
        c_st.site = &ffd_emlrtRSI;
        internal::indexShapeCheck(c_st, A.rowidx.size(0), b_iv);
        H.Underlying.Ir.set_size(&wqb_emlrtRTEI, &b_st, n);
        for (i = 0; i < n; i++) {
          H.Underlying.Ir[i] = A.rowidx[i];
        }
        n = A.colidx.size(0);
        H.Underlying.Jc.set_size(&wqb_emlrtRTEI, &b_st, A.colidx.size(0));
        currentNumEdges_tmp_tmp = (A.colidx.size(0) / 4) << 2;
        b_tmp = currentNumEdges_tmp_tmp - 4;
        for (i = 0; i <= b_tmp; i += 4) {
          __m128i r1;
          r1 = _mm_loadu_si128((const __m128i *)&A.colidx[i]);
          _mm_storeu_si128((__m128i *)&H.Underlying.Jc[i],
                           _mm_sub_epi32(r1, _mm_set1_epi32(1)));
        }
        for (i = currentNumEdges_tmp_tmp; i < n; i++) {
          H.Underlying.Jc[i] = A.colidx[i] - 1;
        }
      }
    }
    H.Underlying.isMultigraph = false;
  } else {
    st.site = &hbc_emlrtRSI;
    Underlying.get_Edges(st, ed);
    b_ind.set_size(&rqb_emlrtRTEI, &sp, ind.size(0));
    for (i = 0; i < b_tmp; i++) {
      b_ind[i] = static_cast<int32_T>(ind[i]);
    }
    st.site = &ibc_emlrtRSI;
    internal::nullAssignment(st, ed, b_ind);
    n = ed.size(0);
    b_ed.set_size(&sqb_emlrtRTEI, &sp, ed.size(0));
    c_ed.set_size(&tqb_emlrtRTEI, &sp, ed.size(0));
    for (i = 0; i < n; i++) {
      b_ed[i] = ed[i];
      c_ed[i] = ed[i + ed.size(0)];
    }
    st.site = &jbc_emlrtRSI;
    digraph::underlyingConstructor(
        st, b_ed, c_ed, static_cast<real_T>(Underlying.Jc.size(0)) - 1.0,
        H.Underlying);
  }
  st.site = &kbc_emlrtRSI;
  H.EdgeProperties.b_remove(st, ind);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (digraph.cpp)
