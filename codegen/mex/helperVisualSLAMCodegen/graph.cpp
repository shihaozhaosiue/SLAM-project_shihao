//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// graph.cpp
//
// Code generation for function 'graph'
//

// Include files
#include "graph.h"
#include "MLGraph.h"
#include "addedge.h"
#include "dijkstraShortestPathImpl.h"
#include "eml_int_forloop_overflow_check.h"
#include "find.h"
#include "graphPropertyContainer.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_types.h"
#include "list1.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "unaryMinOrMax.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo wgb_emlrtRSI{
    55,                  // lineNo
    "graphBase/addedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\addedge.m" // pathName
};

static emlrtRSInfo xgb_emlrtRSI{
    56,                  // lineNo
    "graphBase/addedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\addedge.m" // pathName
};

static emlrtRSInfo ygb_emlrtRSI{
    59,                  // lineNo
    "graphBase/addedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\addedge.m" // pathName
};

static emlrtRSInfo ahb_emlrtRSI{
    69,                  // lineNo
    "graphBase/addedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\addedge.m" // pathName
};

static emlrtRSInfo dhb_emlrtRSI{
    14,                              // lineNo
    "graphBase/addToNodeProperties", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\addToNodeProperti"
    "es.m" // pathName
};

static emlrtRSInfo ehb_emlrtRSI{
    239,               // lineNo
    "MLGraph/addedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo fhb_emlrtRSI{
    241,               // lineNo
    "MLGraph/addedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo ghb_emlrtRSI{
    310,               // lineNo
    "MLGraph/addedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo prb_emlrtRSI{
    12,               // lineNo
    "graph/conncomp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graph\\conncomp.m" // pathName
};

static emlrtRSInfo qrb_emlrtRSI{
    341,                           // lineNo
    "MLGraph/connectedComponents", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo rrb_emlrtRSI{
    354,                           // lineNo
    "MLGraph/connectedComponents", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo srb_emlrtRSI{
    357,                           // lineNo
    "MLGraph/connectedComponents", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo trb_emlrtRSI{
    361,                           // lineNo
    "MLGraph/connectedComponents", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo urb_emlrtRSI{
    352,                           // lineNo
    "MLGraph/connectedComponents", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo vlc_emlrtRSI{
    112,           // lineNo
    "graph/graph", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graph\\graph.m" // pathName
};

static emlrtRSInfo wlc_emlrtRSI{
    164,                     // lineNo
    "constructFromEdgeList", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\constructFromEdgeList.m" // pathName
};

static emlrtRSInfo xlc_emlrtRSI{
    16,                  // lineNo
    "graphBase/nearest", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\nearest.m" // pathName
};

static emlrtRSInfo ylc_emlrtRSI{
    79,                  // lineNo
    "graphBase/nearest", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\nearest.m" // pathName
};

static emlrtRSInfo amc_emlrtRSI{
    92,              // lineNo
    "applyOneToAll", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\nearest.m" // pathName
};

static emlrtRSInfo bmc_emlrtRSI{
    93,              // lineNo
    "applyOneToAll", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\nearest.m" // pathName
};

static emlrtRSInfo cmc_emlrtRSI{
    94,              // lineNo
    "applyOneToAll", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\nearest.m" // pathName
};

static emlrtRTEInfo fc_emlrtRTEI{
    220,                             // lineNo
    39,                              // colNo
    "graphPropertyContainer/append", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m" // pName
};

static emlrtRTEInfo gc_emlrtRTEI{
    255,               // lineNo
    19,                // colNo
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtECInfo ob_emlrtECI{
    1,                 // nDims
    247,               // lineNo
    18,                // colNo
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtBCInfo eh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    245,               // lineNo
    21,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo fh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    245,               // lineNo
    17,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtECInfo pb_emlrtECI{
    -1,                // nDims
    244,               // lineNo
    13,                // colNo
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtBCInfo gh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    244,               // lineNo
    19,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo hh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    244,               // lineNo
    17,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtRTEInfo hc_emlrtRTEI{
    12,                              // lineNo
    27,                              // colNo
    "graphBase/addToNodeProperties", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\addToNodeProperti"
    "es.m" // pName
};

static emlrtRTEInfo ic_emlrtRTEI{
    45,                  // lineNo
    23,                  // colNo
    "graphBase/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\addedge.m" // pName
};

static emlrtDCInfo q_emlrtDCI{
    243,               // lineNo
    13,                // colNo
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    1                              // checkKind
};

static emlrtDCInfo r_emlrtDCI{
    243,               // lineNo
    13,                // colNo
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    4                              // checkKind
};

static emlrtBCInfo ih_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    245,               // lineNo
    13,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtDCInfo s_emlrtDCI{
    248,               // lineNo
    13,                // colNo
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    1                              // checkKind
};

static emlrtBCInfo jh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    256,               // lineNo
    24,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo kh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    257,               // lineNo
    28,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo lh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    258,               // lineNo
    32,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo mh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    261,               // lineNo
    35,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo nh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    315,               // lineNo
    28,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo oh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    263,               // lineNo
    32,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo ph_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    318,               // lineNo
    41,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo qh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    318,               // lineNo
    49,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo rh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    318,               // lineNo
    23,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo sh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    318,               // lineNo
    27,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo th_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    316,               // lineNo
    23,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo uh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    316,               // lineNo
    27,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo vh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    264,               // lineNo
    36,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo wh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    267,               // lineNo
    36,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo xh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    273,               // lineNo
    28,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo yh_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    287,               // lineNo
    28,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo ai_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    274,               // lineNo
    33,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo bi_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    274,               // lineNo
    45,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo ci_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    291,               // lineNo
    32,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo di_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    278,               // lineNo
    32,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo ei_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    297,               // lineNo
    43,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo fi_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    284,               // lineNo
    44,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo gi_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    302,               // lineNo
    27,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo hi_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    305,               // lineNo
    34,                // colNo
    "",                // aName
    "MLGraph/addedge", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo si_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    358,                           // lineNo
    36,                            // colNo
    "",                            // aName
    "MLGraph/connectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtDCInfo fb_emlrtDCI{
    338,                           // lineNo
    29,                            // colNo
    "MLGraph/connectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    4                              // checkKind
};

static emlrtBCInfo ti_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    346,                           // lineNo
    25,                            // colNo
    "",                            // aName
    "MLGraph/connectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo ui_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    357,                           // lineNo
    34,                            // colNo
    "",                            // aName
    "MLGraph/connectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo vi_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    357,                           // lineNo
    42,                            // colNo
    "",                            // aName
    "MLGraph/connectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo wi_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    364,                           // lineNo
    30,                            // colNo
    "",                            // aName
    "MLGraph/connectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo xi_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    359,                           // lineNo
    37,                            // colNo
    "",                            // aName
    "MLGraph/connectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo yi_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    360,                           // lineNo
    38,                            // colNo
    "",                            // aName
    "MLGraph/connectedComponents", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtDCInfo pb_emlrtDCI{
    66,                  // lineNo
    20,                  // colNo
    "graphBase/nearest", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\nearest.m", // pName
    1                                          // checkKind
};

static emlrtRTEInfo ue_emlrtRTEI{
    28,                         // lineNo
    36,                         // colNo
    "graphBase/validateNodeID", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\validateNodeID.m" // pName
};

static emlrtECInfo ld_emlrtECI{
    1,               // nDims
    93,              // lineNo
    47,              // colNo
    "applyOneToAll", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\nearest.m" // pName
};

static emlrtBCInfo rq_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    94,              // lineNo
    20,              // colNo
    "",              // aName
    "applyOneToAll", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\nearest.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo sq_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    95,              // lineNo
    33,              // colNo
    "",              // aName
    "applyOneToAll", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\nearest.m", // pName
    0                                          // checkKind
};

static emlrtRTEInfo qv_emlrtRTEI{
    239,       // lineNo
    31,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo rv_emlrtRTEI{
    243,       // lineNo
    13,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo tv_emlrtRTEI{
    248,       // lineNo
    13,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo uv_emlrtRTEI{
    250,       // lineNo
    13,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo vv_emlrtRTEI{
    313,       // lineNo
    13,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo vy_emlrtRTEI{
    12,         // lineNo
    1,          // colNo
    "conncomp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graph\\conncomp.m" // pName
};

static emlrtRTEInfo wy_emlrtRTEI{
    172,    // lineNo
    17,     // colNo
    "list", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\list.m" // pName
};

static emlrtRTEInfo xy_emlrtRTEI{
    173,    // lineNo
    17,     // colNo
    "list", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\list.m" // pName
};

static emlrtRTEInfo ekb_emlrtRTEI{
    66,        // lineNo
    15,        // colNo
    "nearest", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\nearest.m" // pName
};

static emlrtRTEInfo gkb_emlrtRTEI{
    93,        // lineNo
    58,        // colNo
    "nearest", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\nearest.m" // pName
};

static emlrtRTEInfo hkb_emlrtRTEI{
    95,        // lineNo
    1,         // colNo
    "nearest", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\@graphBase\\nearest.m" // pName
};

static emlrtRSInfo djd_emlrtRSI{
    247,               // lineNo
    "MLGraph/addedge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

// Function Definitions
namespace coder {
void graph::addedge(const emlrtStack &sp, const array<real_T, 1U> &sIn,
                    const array<real_T, 1U> &tIn, graph &H) const
{
  matlab::internal::coder::MLGraph addG;
  array<real_T, 1U> p;
  array<real_T, 1U> varargin_1;
  array<int32_T, 1U> Gjc;
  array<uint32_T, 1U> edgeind;
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
  real_T N;
  real_T numNodesNew;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if ((sIn.size(0) != tIn.size(0)) && (sIn.size(0) != 1) &&
      (tIn.size(0) != 1)) {
    emlrtErrorWithMessageIdR2018a(&sp, &ic_emlrtRTEI,
                                  "MATLAB:graphfun:graphbuiltin:EqualNumel",
                                  "MATLAB:graphfun:graphbuiltin:EqualNumel", 0);
  }
  H = *this;
  st.site = &wgb_emlrtRSI;
  N = matlab::internal::coder::graphBase::validateNodeIDs(st, sIn);
  st.site = &xgb_emlrtRSI;
  numNodesNew = matlab::internal::coder::graphBase::validateNodeIDs(st, tIn);
  N = muDoubleScalarMax(N, numNodesNew);
  if (Underlying.Jc.size(0) == 0) {
    i = 0;
  } else {
    i = Underlying.Jc.size(0) - 1;
  }
  if (N > i) {
    st.site = &ygb_emlrtRSI;
    N -= static_cast<real_T>(i);
    if ((!(N >= 0.0)) || muDoubleScalarIsInf(N)) {
      emlrtErrorWithMessageIdR2018a(
          &st, &hc_emlrtRTEI, "MATLAB:graphfun:addnode:InvalidNrNodes",
          "MATLAB:graphfun:addnode:InvalidNrNodes", 0);
    }
    b_st.site = &dhb_emlrtRSI;
    if (!(N == 0.0)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &fc_emlrtRTEI,
          "MATLAB:graphfun:codegen:PropertiesCannotBeAdded",
          "MATLAB:graphfun:codegen:PropertiesCannotBeAdded", 0);
    }
  }
  st.site = &ahb_emlrtRSI;
  if ((sIn.size(0) != 0) && (tIn.size(0) != 0)) {
    int32_T i1;
    int32_T idx;
    int32_T last;
    int32_T lnew;
    int32_T lold;
    int32_T loop_ub;
    int32_T n;
    uint32_T u;
    boolean_T ismulti;
    if (Underlying.Jc.size(0) == 0) {
      n = 1;
    } else {
      n = Underlying.Jc.size(0);
    }
    b_st.site = &ehb_emlrtRSI;
    last = (sIn.size(0) + tIn.size(0)) + 1;
    varargin_1.set_size(&qv_emlrtRTEI, &b_st, last);
    varargin_1[0] = n - 1;
    loop_ub = sIn.size(0);
    for (i = 0; i < loop_ub; i++) {
      varargin_1[i + 1] = sIn[i];
    }
    loop_ub = tIn.size(0);
    for (i = 0; i < loop_ub; i++) {
      varargin_1[(i + sIn.size(0)) + 1] = tIn[i];
    }
    c_st.site = &mbb_emlrtRSI;
    d_st.site = &nbb_emlrtRSI;
    e_st.site = &obb_emlrtRSI;
    f_st.site = &pbb_emlrtRSI;
    g_st.site = &qbb_emlrtRSI;
    h_st.site = &if_emlrtRSI;
    if (!muDoubleScalarIsNaN(varargin_1[0])) {
      idx = 1;
    } else {
      boolean_T exitg1;
      idx = 0;
      i_st.site = &jf_emlrtRSI;
      if (varargin_1.size(0) > 2147483646) {
        j_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(j_st);
      }
      lnew = 2;
      exitg1 = false;
      while ((!exitg1) && (lnew <= last)) {
        if (!muDoubleScalarIsNaN(varargin_1[lnew - 1])) {
          idx = lnew;
          exitg1 = true;
        } else {
          lnew++;
        }
      }
    }
    if (idx == 0) {
      numNodesNew = varargin_1[0];
    } else {
      h_st.site = &hf_emlrtRSI;
      numNodesNew = varargin_1[idx - 1];
      lold = idx + 1;
      i_st.site = &kf_emlrtRSI;
      if ((idx + 1 <= varargin_1.size(0)) &&
          (varargin_1.size(0) > 2147483646)) {
        j_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(j_st);
      }
      for (lnew = lold; lnew <= last; lnew++) {
        N = varargin_1[lnew - 1];
        if (numNodesNew < N) {
          numNodesNew = N;
        }
      }
    }
    b_st.site = &fhb_emlrtRSI;
    matlab::internal::coder::MLGraph::edgesConstrWithIndex(
        b_st, sIn, tIn, numNodesNew, addG, varargin_1);
    if (!(numNodesNew + 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(numNodesNew + 1.0, &r_emlrtDCI, &st);
    }
    N = static_cast<int32_T>(muDoubleScalarFloor(numNodesNew + 1.0));
    if (numNodesNew + 1.0 != N) {
      emlrtIntegerCheckR2012b(numNodesNew + 1.0, &q_emlrtDCI, &st);
    }
    Gjc.set_size(&rv_emlrtRTEI, &st, static_cast<int32_T>(numNodesNew + 1.0));
    if (numNodesNew + 1.0 != N) {
      emlrtIntegerCheckR2012b(numNodesNew + 1.0, &q_emlrtDCI, &st);
    }
    loop_ub = static_cast<int32_T>(numNodesNew + 1.0);
    for (i = 0; i < loop_ub; i++) {
      Gjc[i] = 0;
    }
    if (n < 1) {
      loop_ub = 0;
    } else {
      if (static_cast<int32_T>(numNodesNew + 1.0) < 1) {
        emlrtDynamicBoundsCheckR2012b(
            1, 1, static_cast<int32_T>(numNodesNew + 1.0), &hh_emlrtBCI, &st);
      }
      if (n > static_cast<int32_T>(numNodesNew + 1.0)) {
        emlrtDynamicBoundsCheckR2012b(
            n, 1, static_cast<int32_T>(numNodesNew + 1.0), &gh_emlrtBCI, &st);
      }
      loop_ub = n;
    }
    i = Underlying.Jc.size(0);
    if (loop_ub != Underlying.Jc.size(0)) {
      emlrtSubAssignSizeCheck1dR2017a(loop_ub, Underlying.Jc.size(0),
                                      &pb_emlrtECI, &st);
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      Gjc[i1] = Underlying.Jc[i1];
    }
    if (static_cast<uint32_T>(n) + 1U > static_cast<uint32_T>(Gjc.size(0))) {
      n = 0;
      i1 = 0;
    } else {
      if ((n + 1 < 1) || (n + 1 > Gjc.size(0))) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, Gjc.size(0), &fh_emlrtBCI, &st);
      }
      if (Gjc.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(Gjc.size(0), 1, Gjc.size(0), &eh_emlrtBCI,
                                      &st);
      }
      i1 = Gjc.size(0);
    }
    loop_ub = i1 - n;
    for (i1 = 0; i1 < loop_ub; i1++) {
      if (i < 1) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i, &ih_emlrtBCI, &st);
      }
      Gjc[n + i1] = Underlying.Jc[i - 1];
    }
    loop_ub = Gjc.size(0);
    if ((Gjc.size(0) != addG.Jc.size(0)) &&
        ((Gjc.size(0) != 1) && (addG.Jc.size(0) != 1))) {
      emlrtDimSizeImpxCheckR2021b(Gjc.size(0), addG.Jc.size(0), &ob_emlrtECI,
                                  &st);
    }
    if (Gjc.size(0) == addG.Jc.size(0)) {
      H.Underlying.Jc.set_size(&sv_emlrtRTEI, &st, Gjc.size(0));
      idx = (Gjc.size(0) / 4) << 2;
      lold = idx - 4;
      for (i = 0; i <= lold; i += 4) {
        __m128i b_r;
        __m128i r1;
        b_r = _mm_loadu_si128((const __m128i *)&Gjc[i]);
        r1 = _mm_loadu_si128((const __m128i *)&addG.Jc[i]);
        _mm_storeu_si128((__m128i *)&H.Underlying.Jc[i],
                         _mm_add_epi32(b_r, r1));
      }
      for (i = idx; i < loop_ub; i++) {
        H.Underlying.Jc[i] = Gjc[i] + addG.Jc[i];
      }
    } else {
      b_st.site = &djd_emlrtRSI;
      binary_expand_op_20(b_st, H, Gjc, addG);
    }
    u = static_cast<uint32_T>(Underlying.Ir.size(0)) +
        static_cast<uint32_T>(addG.Ir.size(0));
    if (static_cast<real_T>(u) != static_cast<int32_T>(u)) {
      emlrtIntegerCheckR2012b(static_cast<real_T>(u), &s_emlrtDCI, &st);
    }
    loop_ub = static_cast<int32_T>(u);
    H.Underlying.Ir.set_size(&tv_emlrtRTEI, &st, static_cast<int32_T>(u));
    if (static_cast<real_T>(u) != static_cast<int32_T>(u)) {
      emlrtIntegerCheckR2012b(static_cast<real_T>(u), &s_emlrtDCI, &st);
    }
    for (i = 0; i < loop_ub; i++) {
      H.Underlying.Ir[i] = 0;
    }
    loop_ub = varargin_1.size(0);
    edgeind.set_size(&uv_emlrtRTEI, &st, varargin_1.size(0));
    for (i = 0; i < loop_ub; i++) {
      edgeind[i] = 0U;
    }
    ismulti = false;
    i = static_cast<int32_T>(numNodesNew);
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, numNodesNew, mxDOUBLE_CLASS,
                                  static_cast<int32_T>(numNodesNew),
                                  &gc_emlrtRTEI, &st);
    for (int32_T j{0}; j < i; j++) {
      int32_T i2;
      int32_T prevTgt;
      int32_T tNew;
      boolean_T b;
      if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
           H.Underlying.Jc.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1,
            H.Underlying.Jc.size(0), &jh_emlrtBCI, &st);
      }
      idx = H.Underlying.Jc[j] + 1;
      if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > Gjc.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, Gjc.size(0),
            &kh_emlrtBCI, &st);
      }
      lold = Gjc[j] + 1;
      b = ((static_cast<int32_T>(static_cast<uint32_T>(j) + 2U) < 1) ||
           (static_cast<int32_T>(static_cast<uint32_T>(j) + 2U) > Gjc.size(0)));
      if (b) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(j) + 2U), 1, Gjc.size(0),
            &lh_emlrtBCI, &st);
      }
      i1 = Gjc[j + 1] + 1;
      if (Gjc[j] + 1 == i1) {
        n = MAX_int32_T;
      } else {
        last = Gjc[j] + 1;
        if ((last < 1) || (last > Underlying.Ir.size(0))) {
          emlrtDynamicBoundsCheckR2012b(last, 1, Underlying.Ir.size(0),
                                        &mh_emlrtBCI, &st);
        }
        n = Underlying.Ir[last - 1];
      }
      if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
           addG.Jc.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1,
            addG.Jc.size(0), &oh_emlrtBCI, &st);
      }
      lnew = addG.Jc[j] + 1;
      b = ((static_cast<int32_T>(static_cast<uint32_T>(j) + 2U) < 1) ||
           (static_cast<int32_T>(static_cast<uint32_T>(j) + 2U) >
            addG.Jc.size(0)));
      if (b) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(j) + 2U), 1,
            addG.Jc.size(0), &vh_emlrtBCI, &st);
      }
      last = addG.Jc[j + 1] + 1;
      if (addG.Jc[j] + 1 == last) {
        tNew = MAX_int32_T;
      } else {
        i2 = addG.Jc[j] + 1;
        if ((i2 < 1) || (i2 > addG.Ir.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, addG.Ir.size(0), &wh_emlrtBCI,
                                        &st);
        }
        tNew = addG.Ir[i2 - 1];
      }
      prevTgt = MAX_int32_T;
      int32_T exitg2;
      boolean_T guard1;
      do {
        exitg2 = 0;
        guard1 = false;
        if (tNew < n) {
          if ((idx < 1) || (idx > H.Underlying.Ir.size(0))) {
            emlrtDynamicBoundsCheckR2012b(idx, 1, H.Underlying.Ir.size(0),
                                          &xh_emlrtBCI, &st);
          }
          H.Underlying.Ir[idx - 1] = tNew;
          if ((lnew < 1) || (lnew > addG.PosMap.size(1))) {
            emlrtDynamicBoundsCheckR2012b(lnew, 1, addG.PosMap.size(1),
                                          &bi_emlrtBCI, &st);
          }
          i2 = addG.PosMap[lnew - 1];
          if ((i2 < 1) || (i2 > edgeind.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, edgeind.size(0), &ai_emlrtBCI,
                                          &st);
          }
          edgeind[i2 - 1] = static_cast<uint32_T>(idx);
          lnew++;
          if (tNew == static_cast<real_T>(j) + 1.0) {
            idx++;
            if ((idx < 1) || (idx > H.Underlying.Ir.size(0))) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, H.Underlying.Ir.size(0),
                                            &di_emlrtBCI, &st);
            }
            H.Underlying.Ir[idx - 1] = tNew;
            lnew++;
          }
          if (lnew == last) {
            tNew = MAX_int32_T;
          } else {
            if ((lnew < 1) || (lnew > addG.Ir.size(0))) {
              emlrtDynamicBoundsCheckR2012b(lnew, 1, addG.Ir.size(0),
                                            &fi_emlrtBCI, &st);
            }
            tNew = addG.Ir[lnew - 1];
          }
          guard1 = true;
        } else if (n != MAX_int32_T) {
          if ((idx < 1) || (idx > H.Underlying.Ir.size(0))) {
            emlrtDynamicBoundsCheckR2012b(idx, 1, H.Underlying.Ir.size(0),
                                          &yh_emlrtBCI, &st);
          }
          H.Underlying.Ir[idx - 1] = n;
          lold++;
          if (n == static_cast<real_T>(j) + 1.0) {
            idx++;
            if ((idx < 1) || (idx > H.Underlying.Ir.size(0))) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, H.Underlying.Ir.size(0),
                                            &ci_emlrtBCI, &st);
            }
            H.Underlying.Ir[idx - 1] = n;
            lold++;
          }
          if (lold == i1) {
            n = MAX_int32_T;
          } else {
            if ((lold < 1) || (lold > Underlying.Ir.size(0))) {
              emlrtDynamicBoundsCheckR2012b(lold, 1, Underlying.Ir.size(0),
                                            &ei_emlrtBCI, &st);
            }
            n = Underlying.Ir[lold - 1];
          }
          guard1 = true;
        } else {
          exitg2 = 1;
        }
        if (guard1) {
          if (idx > H.Underlying.Ir.size(0)) {
            emlrtDynamicBoundsCheckR2012b(idx, 1, H.Underlying.Ir.size(0),
                                          &gi_emlrtBCI, &st);
          }
          i2 = H.Underlying.Ir[idx - 1];
          ismulti = ((i2 == prevTgt) || ismulti);
          if (idx > H.Underlying.Ir.size(0)) {
            emlrtDynamicBoundsCheckR2012b(idx, 1, H.Underlying.Ir.size(0),
                                          &hi_emlrtBCI, &st);
          }
          prevTgt = i2;
          idx++;
        }
      } while (exitg2 == 0);
    }
    b_st.site = &ghb_emlrtRSI;
    matlab::internal::coder::MLGraph::definePosMapAndDiag(
        b_st, H.Underlying.Ir, H.Underlying.Jc, numNodesNew,
        H.Underlying.PosMap, H.Underlying.Diag);
    p.set_size(&vv_emlrtRTEI, &st, varargin_1.size(0));
    for (i = 0; i < loop_ub; i++) {
      p[i] = 0.0;
    }
    for (idx = 0; idx < loop_ub; idx++) {
      if (idx + 1 > edgeind.size(0)) {
        emlrtDynamicBoundsCheckR2012b(idx + 1, 1, edgeind.size(0), &nh_emlrtBCI,
                                      &st);
      }
      i = static_cast<int32_T>(edgeind[idx]);
      if (i == 0) {
        if (idx + 1 > loop_ub) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, loop_ub, &uh_emlrtBCI, &st);
        }
        i = static_cast<int32_T>(varargin_1[idx]);
        if ((i < 1) || (i > p.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, p.size(0), &th_emlrtBCI, &st);
        }
        p[i - 1] = 0.0;
      } else {
        if (idx + 1 > edgeind.size(0)) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, edgeind.size(0),
                                        &qh_emlrtBCI, &st);
        }
        if ((i < 1) || (i > H.Underlying.PosMap.size(1))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, H.Underlying.PosMap.size(1),
                                        &ph_emlrtBCI, &st);
        }
        if (idx + 1 > loop_ub) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, loop_ub, &sh_emlrtBCI, &st);
        }
        i1 = static_cast<int32_T>(varargin_1[idx]);
        if ((i1 < 1) || (i1 > p.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, p.size(0), &rh_emlrtBCI, &st);
        }
        p[i1 - 1] = H.Underlying.PosMap[i - 1];
      }
    }
    H.Underlying.isMultigraph = ismulti;
  }
  H.EdgeProperties.nrows = EdgeProperties.nrows + sIn.size(0);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void c_graph::b_nearest(const emlrtStack &sp, real_T s,
                        array<real_T, 1U> &nodeids,
                        array<real_T, 1U> &dOut) const
{
  array<real_T, 1U> b_r;
  array<real_T, 1U> d_;
  array<real_T, 1U> pred;
  array<int32_T, 1U> ii;
  array<int32_T, 1U> iidx;
  array<boolean_T, 1U> r1;
  array<boolean_T, 1U> r2;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T ne;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T numNodes_tmp_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &xlc_emlrtRSI;
  if (Underlying.Jc.size(0) == 0) {
    numNodes_tmp_tmp = 0;
  } else {
    numNodes_tmp_tmp = Underlying.Jc.size(0) - 1;
  }
  if ((!(s == s)) || (!(s >= 1.0)) || (!(s <= numNodes_tmp_tmp))) {
    emlrtErrorWithMessageIdR2018a(&st, &ue_emlrtRTEI,
                                  "MATLAB:graphfun:graph:InvalidNodeID",
                                  "MATLAB:graphfun:graph:InvalidNodeID", 2, 6,
                                  static_cast<real_T>(numNodes_tmp_tmp));
  }
  ne = static_cast<real_T>(Underlying.Ir.size(0)) / 2.0;
  if (ne != muDoubleScalarFloor(ne)) {
    emlrtIntegerCheckR2012b(ne, &pb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  st.site = &ylc_emlrtRSI;
  loop_ub_tmp = static_cast<int32_T>(ne);
  b_r.set_size(&ekb_emlrtRTEI, &st, loop_ub_tmp);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    b_r[i] = 1.0;
  }
  b_st.site = &amc_emlrtRSI;
  matlab::internal::coder::dijkstraShortestPathImpl(b_st, Underlying, b_r, s,
                                                    numNodes_tmp_tmp, d_, pred);
  numNodes_tmp_tmp = pred.size(0);
  r1.set_size(&fkb_emlrtRTEI, &st, pred.size(0));
  for (int32_T i{0}; i < numNodes_tmp_tmp; i++) {
    r1[i] = (pred[i] > 0.0);
  }
  loop_ub = d_.size(0);
  r2.set_size(&gkb_emlrtRTEI, &st, d_.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    r2[i] = (d_[i] <= 2.0);
  }
  if ((pred.size(0) != d_.size(0)) &&
      ((pred.size(0) != 1) && (d_.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(pred.size(0), d_.size(0), &ld_emlrtECI, &st);
  }
  b_st.site = &bmc_emlrtRSI;
  if (r1.size(0) == r2.size(0)) {
    for (int32_T i{0}; i < numNodes_tmp_tmp; i++) {
      r1[i] = (r1[i] && r2[i]);
    }
    c_st.site = &aq_emlrtRSI;
    b_eml_find(c_st, r1, ii);
  } else {
    c_st.site = &aq_emlrtRSI;
    binary_expand_op_38(c_st, ii, aq_emlrtRSI, r1, r2);
  }
  b_st.site = &cmc_emlrtRSI;
  loop_ub_tmp = ii.size(0);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if ((ii[i] < 1) || (ii[i] > loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(ii[i], 1, loop_ub, &rq_emlrtBCI, &b_st);
    }
  }
  dOut.set_size(&tr_emlrtRTEI, &b_st, ii.size(0));
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    dOut[i] = d_[ii[i] - 1];
  }
  c_st.site = &li_emlrtRSI;
  internal::sort(c_st, dOut, iidx);
  numNodes_tmp_tmp = iidx.size(0);
  nodeids.set_size(&hkb_emlrtRTEI, &st, iidx.size(0));
  for (int32_T i{0}; i < numNodes_tmp_tmp; i++) {
    if ((iidx[i] < 1) || (iidx[i] > loop_ub_tmp)) {
      emlrtDynamicBoundsCheckR2012b(iidx[i], 1, loop_ub_tmp, &sq_emlrtBCI, &st);
    }
    nodeids[i] = ii[iidx[i] - 1];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void graph::conncomp(const emlrtStack &sp, array<real_T, 2U> &bins) const
{
  internal::list nodeList;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T nextbin;
  int32_T i;
  int32_T n;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &prb_emlrtRSI;
  if (Underlying.Jc.size(0) == 0) {
    n = 0;
  } else {
    n = Underlying.Jc.size(0) - 1;
  }
  if (n < 0) {
    emlrtNonNegativeCheckR2012b(-1.0, &fb_emlrtDCI, &st);
  }
  bins.set_size(&vy_emlrtRTEI, &st, 1, n);
  for (i = 0; i < n; i++) {
    bins[i] = 0.0;
  }
  nextbin = 0.0;
  b_st.site = &qrb_emlrtRSI;
  for (int32_T start{0}; start < n; start++) {
    if (start + 1 > bins.size(1)) {
      emlrtDynamicBoundsCheckR2012b(start + 1, 1, bins.size(1), &ti_emlrtBCI,
                                    &st);
    }
    if (bins[start] == 0.0) {
      nextbin++;
      b_st.site = &urb_emlrtRSI;
      nodeList.valuePool.set_size(&wy_emlrtRTEI, &b_st, 1, 1);
      nodeList.valuePool[0] = start + 1;
      nodeList.nodePool.set_size(&xy_emlrtRTEI, &b_st, 1, 1);
      nodeList.nodePool[0] = r;
      nodeList.len = 0;
      nodeList.frontAddr = 0;
      nodeList.backAddr = 0;
      nodeList.nodePool[0].addr = 1;
      nodeList.nodePool[0].prev = 0;
      nodeList.nodePool[0].next = 0;
      nodeList.unusedAddr = 1;
      b_st.site = &rrb_emlrtRSI;
      nodeList.pushBack(b_st, start + 1);
      while (nodeList.len > 0) {
        int32_T b;
        int32_T k;
        int32_T s;
        if (nodeList.frontAddr == 0) {
          s = 0;
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
        if ((s < 1) || (s > Underlying.Jc.size(0))) {
          emlrtDynamicBoundsCheckR2012b(s, 1, Underlying.Jc.size(0),
                                        &ui_emlrtBCI, &st);
        }
        k = Underlying.Jc[s - 1] + 1;
        if ((s + 1 < 1) || (s + 1 > Underlying.Jc.size(0))) {
          emlrtDynamicBoundsCheckR2012b(s + 1, 1, Underlying.Jc.size(0),
                                        &vi_emlrtBCI, &st);
        }
        b = Underlying.Jc[s];
        b_st.site = &srb_emlrtRSI;
        if ((k <= Underlying.Jc[s]) && (Underlying.Jc[s] > 2147483646)) {
          c_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(c_st);
        }
        for (int32_T l{k}; l <= b; l++) {
          if ((l < 1) || (l > Underlying.Ir.size(0))) {
            emlrtDynamicBoundsCheckR2012b(l, 1, Underlying.Ir.size(0),
                                          &si_emlrtBCI, &st);
          }
          i = Underlying.Ir[l - 1];
          if ((i < 1) || (i > bins.size(1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, bins.size(1), &xi_emlrtBCI,
                                          &st);
          }
          if (bins[i - 1] == 0.0) {
            if (i > bins.size(1)) {
              emlrtDynamicBoundsCheckR2012b(i, 1, bins.size(1), &yi_emlrtBCI,
                                            &st);
            }
            bins[i - 1] = -1.0;
            b_st.site = &trb_emlrtRSI;
            nodeList.pushBack(b_st, i);
          }
        }
        if (s > bins.size(1)) {
          emlrtDynamicBoundsCheckR2012b(s, 1, bins.size(1), &wi_emlrtBCI, &st);
        }
        bins[s - 1] = nextbin;
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void c_graph::init(const emlrtStack &sp, const array<uint32_T, 1U> &varargin_1,
                   const array<uint32_T, 1U> &varargin_2)
{
  array<real_T, 2U> EndNodes;
  array<real_T, 1U> b_EndNodes;
  array<real_T, 1U> s;
  array<real_T, 1U> t;
  array<uint32_T, 1U> b_varargin_1;
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
  int32_T b_loop_ub;
  int32_T last;
  int32_T loop_ub;
  uint32_T implicitTotal;
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
  st.site = &gbb_emlrtRSI;
  loop_ub = varargin_1.size(0);
  s.set_size(&bkb_emlrtRTEI, &st, varargin_1.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    s[i] = varargin_1[i];
  }
  b_loop_ub = varargin_2.size(0);
  t.set_size(&ckb_emlrtRTEI, &st, varargin_2.size(0));
  for (int32_T i{0}; i < b_loop_ub; i++) {
    t[i] = varargin_2[i];
  }
  b_st.site = &jbb_emlrtRSI;
  last = s.size(0) + t.size(0);
  b_varargin_1.set_size(&dkb_emlrtRTEI, &b_st, last);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_varargin_1[i] = static_cast<uint32_T>(s[i]);
  }
  for (int32_T i{0}; i < b_loop_ub; i++) {
    b_varargin_1[i + s.size(0)] = static_cast<uint32_T>(t[i]);
  }
  c_st.site = &mbb_emlrtRSI;
  d_st.site = &nbb_emlrtRSI;
  e_st.site = &obb_emlrtRSI;
  if (b_varargin_1.size(0) < 1) {
    emlrtErrorWithMessageIdR2018a(&e_st, &m_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  f_st.site = &pbb_emlrtRSI;
  g_st.site = &qbb_emlrtRSI;
  if (b_varargin_1.size(0) <= 2) {
    if (b_varargin_1.size(0) == 1) {
      implicitTotal = b_varargin_1[0];
    } else if (b_varargin_1[0] < b_varargin_1[1]) {
      implicitTotal = b_varargin_1[1];
    } else {
      implicitTotal = b_varargin_1[0];
    }
  } else {
    h_st.site = &if_emlrtRSI;
    h_st.site = &hf_emlrtRSI;
    implicitTotal = b_varargin_1[0];
    i_st.site = &kf_emlrtRSI;
    if (b_varargin_1.size(0) > 2147483646) {
      j_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(j_st);
    }
    for (loop_ub = 2; loop_ub <= last; loop_ub++) {
      uint32_T u;
      u = b_varargin_1[loop_ub - 1];
      if (implicitTotal < u) {
        implicitTotal = u;
      }
    }
  }
  b_st.site = &wlc_emlrtRSI;
  Underlying.init(b_st, s, t, static_cast<real_T>(implicitTotal));
  EdgeProperties.nrows =
      static_cast<int32_T>(static_cast<real_T>(Underlying.Ir.size(0)) / 2.0);
  if (Underlying.Jc.size(0) == 0) {
    loop_ub = 0;
  } else {
    loop_ub = Underlying.Jc.size(0) - 1;
  }
  NodeProperties.nrows = loop_ub;
  st.site = &fbb_emlrtRSI;
  Underlying.get_Edges(st, EndNodes);
  if (EdgeProperties.nrows == 0) {
    EdgeProperties.nrows = EndNodes.size(0);
  }
  if (loop_ub == 0) {
    real_T numToAdd;
    if (EndNodes.size(0) == 0) {
      numToAdd = 0.0;
    } else {
      st.site = &vlc_emlrtRSI;
      b_st.site = &mbb_emlrtRSI;
      c_st.site = &nbb_emlrtRSI;
      d_st.site = &obb_emlrtRSI;
      e_st.site = &aec_emlrtRSI;
      f_st.site = &dcb_emlrtRSI;
      loop_ub = EndNodes.size(0) << 1;
      b_EndNodes = EndNodes.reshape(loop_ub);
      g_st.site = &ecb_emlrtRSI;
      numToAdd = internal::unaryMinOrMax_anonFcn1(g_st, b_EndNodes);
    }
    NodeProperties.nrows = static_cast<int32_T>(numToAdd);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (graph.cpp)
