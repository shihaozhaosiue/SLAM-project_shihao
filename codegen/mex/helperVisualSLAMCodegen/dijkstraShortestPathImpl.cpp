//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dijkstraShortestPathImpl.cpp
//
// Code generation for function 'dijkstraShortestPathImpl'
//

// Include files
#include "dijkstraShortestPathImpl.h"
#include "MLGraph.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "indexShapeCheck.h"
#include "minPriorityQueue.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo vkb_emlrtRSI{
    28,     // lineNo
    "char", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\strfun\\char.m" // pathName
};

static emlrtRSInfo wkb_emlrtRSI{
    38,              // lineNo
    "charCastCheck", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\charCastCheck.m" // pathName
};

static emlrtRSInfo dmc_emlrtRSI{
    39,                         // lineNo
    "dijkstraShortestPathImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m" // pathName
};

static emlrtRSInfo emc_emlrtRSI{
    42,                         // lineNo
    "dijkstraShortestPathImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m" // pathName
};

static emlrtRSInfo fmc_emlrtRSI{
    45,                         // lineNo
    "dijkstraShortestPathImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m" // pathName
};

static emlrtRSInfo gmc_emlrtRSI{
    54,                         // lineNo
    "dijkstraShortestPathImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m" // pathName
};

static emlrtRSInfo hmc_emlrtRSI{
    55,                         // lineNo
    "dijkstraShortestPathImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m" // pathName
};

static emlrtRSInfo imc_emlrtRSI{
    74,                         // lineNo
    "dijkstraShortestPathImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m" // pathName
};

static emlrtRSInfo jmc_emlrtRSI{
    76,                         // lineNo
    "dijkstraShortestPathImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m" // pathName
};

static emlrtRSInfo kmc_emlrtRSI{
    88,                         // lineNo
    "dijkstraShortestPathImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m" // pathName
};

static emlrtRSInfo lmc_emlrtRSI{
    99,                         // lineNo
    "dijkstraShortestPathImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m" // pathName
};

static emlrtRSInfo mmc_emlrtRSI{
    56,                     // lineNo
    "minPriorityQueue/pop", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m" // pathName
};

static emlrtRSInfo nmc_emlrtRSI{
    99,                          // lineNo
    "minPriorityQueue/percDown", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m" // pathName
};

static emlrtRSInfo omc_emlrtRSI{
    105,                         // lineNo
    "minPriorityQueue/percDown", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m" // pathName
};

static emlrtRSInfo pmc_emlrtRSI{
    107,                         // lineNo
    "minPriorityQueue/percDown", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m" // pathName
};

static emlrtRSInfo qmc_emlrtRSI{
    376,                // lineNo
    "MLGraph/outedges", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo rmc_emlrtRSI{
    383,                // lineNo
    "MLGraph/outedges", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pathName
};

static emlrtRSInfo umc_emlrtRSI{
    46,                      // lineNo
    "minPriorityQueue/push", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m" // pathName
};

static emlrtRSInfo xmc_emlrtRSI{
    69,                        // lineNo
    "minPriorityQueue/update", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m" // pathName
};

static emlrtBCInfo vab_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    68,                        // lineNo
    35,                        // colNo
    "",                        // aName
    "minPriorityQueue/update", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo wab_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    78,                          // lineNo
    26,                          // colNo
    "",                          // aName
    "minPriorityQueue/getValue", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo xab_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    377,                // lineNo
    43,                 // colNo
    "",                 // aName
    "MLGraph/outedges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo yab_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    377,                // lineNo
    35,                 // colNo
    "",                 // aName
    "MLGraph/outedges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo abb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    377,                // lineNo
    46,                 // colNo
    "",                 // aName
    "MLGraph/outedges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo bbb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    377,                // lineNo
    38,                 // colNo
    "",                 // aName
    "MLGraph/outedges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo cbb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    376,                // lineNo
    35,                 // colNo
    "",                 // aName
    "MLGraph/outedges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo dbb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    376,                // lineNo
    27,                 // colNo
    "",                 // aName
    "MLGraph/outedges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo ebb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    376,                // lineNo
    38,                 // colNo
    "",                 // aName
    "MLGraph/outedges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo fbb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    376,                // lineNo
    30,                 // colNo
    "",                 // aName
    "MLGraph/outedges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo gbb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    54,                     // lineNo
    38,                     // colNo
    "",                     // aName
    "minPriorityQueue/pop", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo hbb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    53,                     // lineNo
    22,                     // colNo
    "",                     // aName
    "minPriorityQueue/pop", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo ibb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    52,                     // lineNo
    30,                     // colNo
    "",                     // aName
    "minPriorityQueue/pop", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo jbb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    45,                      // lineNo
    29,                      // colNo
    "",                      // aName
    "minPriorityQueue/push", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo kbb_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    44,                      // lineNo
    22,                      // colNo
    "",                      // aName
    "minPriorityQueue/push", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo lbb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    22,                         // lineNo
    10,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo mbb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    90,                         // lineNo
    40,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo nbb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    90,                         // lineNo
    28,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo obb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    81,                         // lineNo
    40,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo pbb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    78,                         // lineNo
    25,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo qbb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    77,                         // lineNo
    22,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo nc_emlrtDCI{
    13,                         // lineNo
    5,                          // colNo
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    4                                               // checkKind
};

static emlrtBCInfo rbb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    53,                     // lineNo
    38,                     // colNo
    "",                     // aName
    "minPriorityQueue/pop", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo sbb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    54,                     // lineNo
    29,                     // colNo
    "",                     // aName
    "minPriorityQueue/pop", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo tbb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    46,                         // lineNo
    12,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ybb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    49,                         // lineNo
    38,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo acb_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    106,                         // lineNo
    53,                          // colNo
    "",                          // aName
    "minPriorityQueue/percDown", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo bcb_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    106,                         // lineNo
    30,                          // colNo
    "",                          // aName
    "minPriorityQueue/percDown", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo ccb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    64,                         // lineNo
    23,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo dcb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    67,                         // lineNo
    22,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ecb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    68,                         // lineNo
    22,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo fcb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    57,                         // lineNo
    26,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo gcb_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    107,                         // lineNo
    86,                          // colNo
    "",                          // aName
    "minPriorityQueue/percDown", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo hcb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    62,                         // lineNo
    22,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo icb_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    107,                         // lineNo
    46,                          // colNo
    "",                          // aName
    "minPriorityQueue/percDown", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo jcb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    79,                         // lineNo
    19,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo kcb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    89,                         // lineNo
    23,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo lcb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    80,                         // lineNo
    20,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo mcb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    81,                         // lineNo
    28,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ncb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    81,                         // lineNo
    18,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ocb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    92,                         // lineNo
    35,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo pcb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    83,                         // lineNo
    22,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo qcb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    384,                // lineNo
    34,                 // colNo
    "",                 // aName
    "MLGraph/outedges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo rcb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    92,                         // lineNo
    58,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo scb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    93,                         // lineNo
    41,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo tcb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    94,                         // lineNo
    26,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ucb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    95,                         // lineNo
    26,                         // colNo
    "",                         // aName
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo vcb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    385,                // lineNo
    34,                 // colNo
    "",                 // aName
    "MLGraph/outedges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m", // pName
    0                              // checkKind
};

static emlrtBCInfo wcb_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    107,                         // lineNo
    21,                          // colNo
    "",                          // aName
    "minPriorityQueue/percDown", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo xcb_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    107,                         // lineNo
    77,                          // colNo
    "",                          // aName
    "minPriorityQueue/percDown", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtRTEInfo ctb_emlrtRTEI{
    13,                         // lineNo
    5,                          // colNo
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m" // pName
};

static emlrtRTEInfo dtb_emlrtRTEI{
    19,                         // lineNo
    1,                          // colNo
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m" // pName
};

static emlrtRTEInfo etb_emlrtRTEI{
    26,                 // lineNo
    39,                 // colNo
    "minPriorityQueue", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m" // pName
};

static emlrtRTEInfo ftb_emlrtRTEI{
    27,                 // lineNo
    46,                 // colNo
    "minPriorityQueue", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m" // pName
};

static emlrtRTEInfo gtb_emlrtRTEI{
    28,     // lineNo
    9,      // colNo
    "char", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\strfun\\char.m" // pName
};

static emlrtRTEInfo htb_emlrtRTEI{
    47,     // lineNo
    13,     // colNo
    "diff", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m" // pName
};

static emlrtRTEInfo itb_emlrtRTEI{
    37,     // lineNo
    9,      // colNo
    "diff", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m" // pName
};

static emlrtRTEInfo jtb_emlrtRTEI{
    383,       // lineNo
    35,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo ktb_emlrtRTEI{
    1,                          // lineNo
    35,                         // colNo
    "dijkstraShortestPathImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\dijkstraShortestPathImpl.m" // pName
};

static emlrtRTEInfo ltb_emlrtRTEI{
    384,       // lineNo
    17,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo mtb_emlrtRTEI{
    385,       // lineNo
    17,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo ntb_emlrtRTEI{
    380,       // lineNo
    17,        // colNo
    "MLGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLGraph.m" // pName
};

static emlrtRTEInfo otb_emlrtRTEI{
    381,       // lineNo
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
void dijkstraShortestPathImpl(const emlrtStack &sp, const MLGraph &G,
                              const array<real_T, 1U> &weight, real_T start,
                              int32_T maxNrNodes, array<real_T, 1U> &dist,
                              array<real_T, 1U> &pred)
{
  minPriorityQueue queue;
  array<int32_T, 2U> b_y1;
  array<int32_T, 2U> r1;
  array<int32_T, 1U> outNodes;
  array<char_T, 1U> colors;
  array<boolean_T, 2U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T b;
  int32_T i;
  int32_T n;
  int32_T u;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (G.Jc.size(0) == 0) {
    n = 0;
  } else {
    n = G.Jc.size(0) - 1;
  }
  if (n < 0) {
    emlrtNonNegativeCheckR2012b(-1.0, &nc_emlrtDCI, (emlrtConstCTX)&sp);
  }
  pred.set_size(&ctb_emlrtRTEI, &sp, n);
  for (i = 0; i < n; i++) {
    pred[i] = rtNaN;
  }
  dist.set_size(&dtb_emlrtRTEI, &sp, n);
  for (i = 0; i < n; i++) {
    dist[i] = rtInf;
  }
  if ((static_cast<int32_T>(start) < 1) || (static_cast<int32_T>(start) > n)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(start), 1, n,
                                  &lbb_emlrtBCI, (emlrtConstCTX)&sp);
  }
  pred[static_cast<int32_T>(start) - 1] = 0.0;
  dist[static_cast<int32_T>(start) - 1] = 0.0;
  if (maxNrNodes != 0) {
    int32_T ichild;
    boolean_T exitg1;
    boolean_T guard1;
    queue.heap.set_size(&etb_emlrtRTEI, &sp, n);
    queue.indexToHeap.set_size(&ftb_emlrtRTEI, &sp, n);
    st.site = &dmc_emlrtRSI;
    b_st.site = &vkb_emlrtRSI;
    c_st.site = &wkb_emlrtRSI;
    colors.set_size(&gtb_emlrtRTEI, &st, n);
    for (i = 0; i < n; i++) {
      colors[i] = '\x00';
    }
    colors[static_cast<int32_T>(start) - 1] = '\x01';
    st.site = &emc_emlrtRSI;
    queue.len = 1;
    if (n < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, n, &kbb_emlrtBCI, &st);
    }
    queue.heap[0] = static_cast<int32_T>(start);
    queue.indexToHeap[static_cast<int32_T>(start) - 1] = 1;
    guard1 = false;
    exitg1 = false;
    while ((!exitg1) && (queue.len != 0)) {
      real_T d;
      real_T d1;
      int32_T b_i;
      int32_T i1;
      int32_T i2;
      st.site = &fmc_emlrtRSI;
      if (queue.heap.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, queue.heap.size(0), &ibb_emlrtBCI,
                                      &st);
      }
      u = queue.heap[0];
      if (queue.heap.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, queue.heap.size(0), &hbb_emlrtBCI,
                                      &st);
      }
      if ((queue.len < 1) || (queue.len > queue.heap.size(0))) {
        emlrtDynamicBoundsCheckR2012b(queue.len, 1, queue.heap.size(0),
                                      &rbb_emlrtBCI, &st);
      }
      b = queue.len - 1;
      queue.heap[0] = queue.heap[queue.len - 1];
      i = queue.heap.size(0);
      if (queue.heap.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, queue.heap.size(0), &gbb_emlrtBCI,
                                      &st);
      }
      if ((queue.heap[0] < 1) || (queue.heap[0] > queue.indexToHeap.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            queue.heap[0], 1, queue.indexToHeap.size(0), &sbb_emlrtBCI, &st);
      }
      queue.indexToHeap[queue.heap[0] - 1] = 1;
      queue.len--;
      b_st.site = &mmc_emlrtRSI;
      b_i = 1;
      int32_T exitg2;
      do {
        exitg2 = 0;
        ichild = b_i << 1;
        if (ichild <= b) {
          boolean_T tf;
          if (ichild + 1 <= b) {
            c_st.site = &nmc_emlrtRSI;
            if ((ichild < 1) || (ichild > i)) {
              emlrtDynamicBoundsCheckR2012b(ichild, 1, i, &uab_emlrtBCI, &c_st);
            }
            if (ichild + 1 > i) {
              emlrtDynamicBoundsCheckR2012b(ichild + 1, 1, i, &tab_emlrtBCI,
                                            &c_st);
            }
            i1 = queue.heap[ichild - 1];
            if ((i1 < 1) || (i1 > dist.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, dist.size(0), &ubb_emlrtBCI,
                                            &c_st);
            }
            if ((queue.heap[ichild] < 1) ||
                (queue.heap[ichild] > dist.size(0))) {
              emlrtDynamicBoundsCheckR2012b(queue.heap[ichild], 1, dist.size(0),
                                            &vbb_emlrtBCI, &c_st);
            }
            d = dist[i1 - 1];
            d1 = dist[queue.heap[ichild] - 1];
            if (d < d1) {
              tf = true;
            } else {
              if (i1 > dist.size(0)) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, dist.size(0),
                                              &wbb_emlrtBCI, &c_st);
              }
              if ((queue.heap[ichild] < 1) ||
                  (queue.heap[ichild] > dist.size(0))) {
                emlrtDynamicBoundsCheckR2012b(
                    queue.heap[ichild], 1, dist.size(0), &xbb_emlrtBCI, &c_st);
              }
              if ((d == d1) && (i1 <= queue.heap[ichild])) {
                tf = true;
              } else {
                tf = false;
              }
            }
            if (!tf) {
              ichild++;
            }
          }
          c_st.site = &omc_emlrtRSI;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 1, i, &uab_emlrtBCI, &c_st);
          }
          if ((ichild < 1) || (ichild > i)) {
            emlrtDynamicBoundsCheckR2012b(ichild, 1, i, &tab_emlrtBCI, &c_st);
          }
          i1 = queue.heap[b_i - 1];
          if ((i1 < 1) || (i1 > dist.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, dist.size(0), &ubb_emlrtBCI,
                                          &c_st);
          }
          i2 = queue.heap[ichild - 1];
          if ((i2 < 1) || (i2 > dist.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, dist.size(0), &vbb_emlrtBCI,
                                          &c_st);
          }
          d = dist[i1 - 1];
          d1 = dist[i2 - 1];
          if (d < d1) {
            tf = true;
          } else {
            if (i1 > dist.size(0)) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, dist.size(0), &wbb_emlrtBCI,
                                            &c_st);
            }
            if (i2 > dist.size(0)) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, dist.size(0), &xbb_emlrtBCI,
                                            &c_st);
            }
            if ((d == d1) && (i1 <= i2)) {
              tf = true;
            } else {
              tf = false;
            }
          }
          if (!tf) {
            if (ichild > i) {
              emlrtDynamicBoundsCheckR2012b(ichild, 1, i, &acb_emlrtBCI, &b_st);
            }
            if (b_i > i) {
              emlrtDynamicBoundsCheckR2012b(b_i, 1, i, &acb_emlrtBCI, &b_st);
            }
            if (ichild > i) {
              emlrtDynamicBoundsCheckR2012b(ichild, 1, i, &bcb_emlrtBCI, &b_st);
            }
            n = queue.heap[b_i - 1];
            queue.heap[b_i - 1] = queue.heap[ichild - 1];
            queue.heap[ichild - 1] = n;
            c_st.site = &pmc_emlrtRSI;
            ::coder::internal::indexShapeCheck(c_st, queue.heap.size(0));
            if (ichild > i) {
              emlrtDynamicBoundsCheckR2012b(ichild, 1, i, &gcb_emlrtBCI, &b_st);
            }
            if (b_i > i) {
              emlrtDynamicBoundsCheckR2012b(b_i, 1, i, &gcb_emlrtBCI, &b_st);
            }
            if (ichild > i) {
              emlrtDynamicBoundsCheckR2012b(ichild, 1, i, &icb_emlrtBCI, &b_st);
            }
            i1 = queue.heap[ichild - 1];
            if ((i1 < 1) || (i1 > queue.indexToHeap.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, queue.indexToHeap.size(0),
                                            &xcb_emlrtBCI, &b_st);
            }
            i2 = queue.heap[b_i - 1];
            if ((i2 < 1) || (i2 > queue.indexToHeap.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, queue.indexToHeap.size(0),
                                            &xcb_emlrtBCI, &b_st);
            }
            n = queue.indexToHeap[i2 - 1];
            if ((queue.heap[b_i - 1] < 1) ||
                (queue.heap[b_i - 1] > queue.indexToHeap.size(0))) {
              emlrtDynamicBoundsCheckR2012b(queue.heap[b_i - 1], 1,
                                            queue.indexToHeap.size(0),
                                            &wcb_emlrtBCI, &b_st);
            }
            queue.indexToHeap[queue.heap[b_i - 1] - 1] =
                queue.indexToHeap[i1 - 1];
            if ((queue.heap[ichild - 1] < 1) ||
                (queue.heap[ichild - 1] > queue.indexToHeap.size(0))) {
              emlrtDynamicBoundsCheckR2012b(queue.heap[ichild - 1], 1,
                                            queue.indexToHeap.size(0),
                                            &wcb_emlrtBCI, &b_st);
            }
            queue.indexToHeap[queue.heap[ichild - 1] - 1] = n;
            b_i = ichild;
          } else {
            exitg2 = 1;
          }
        } else {
          exitg2 = 1;
        }
      } while (exitg2 == 0);
      if ((u < 1) || (u > colors.size(0))) {
        emlrtDynamicBoundsCheckR2012b(u, 1, colors.size(0), &tbb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      colors[u - 1] = '\x02';
      maxNrNodes--;
      if (maxNrNodes == 0) {
        guard1 = true;
        exitg1 = true;
      } else {
        if (u > dist.size(0)) {
          emlrtDynamicBoundsCheckR2012b(u, 1, dist.size(0), &ybb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (!(dist[u - 1] <= 2.0)) {
          guard1 = true;
          exitg1 = true;
        } else {
          int32_T b_ichild[2];
          st.site = &imc_emlrtRSI;
          if (u > G.Jc.size(0)) {
            emlrtDynamicBoundsCheckR2012b(u, 1, G.Jc.size(0), &fbb_emlrtBCI,
                                          &st);
          }
          if (u + 1 > G.Jc.size(0)) {
            emlrtDynamicBoundsCheckR2012b(u + 1, 1, G.Jc.size(0), &ebb_emlrtBCI,
                                          &st);
          }
          i = G.Jc[u - 1] + 1;
          if (i > G.Jc[u]) {
            i1 = 0;
            i2 = 0;
          } else {
            if ((i < 1) || (i > G.Ir.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, G.Ir.size(0), &dbb_emlrtBCI,
                                            &st);
            }
            i1 = i - 1;
            if ((G.Jc[u] < 1) || (G.Jc[u] > G.Ir.size(0))) {
              emlrtDynamicBoundsCheckR2012b(G.Jc[u], 1, G.Ir.size(0),
                                            &cbb_emlrtBCI, &st);
            }
            i2 = G.Jc[u];
          }
          b_ichild[0] = 1;
          b = i2 - i1;
          b_ichild[1] = b;
          b_st.site = &qmc_emlrtRSI;
          ::coder::internal::indexShapeCheck(b_st, G.Ir.size(0), b_ichild);
          if (u > G.Jc.size(0)) {
            emlrtDynamicBoundsCheckR2012b(u, 1, G.Jc.size(0), &bbb_emlrtBCI,
                                          &st);
          }
          if (u + 1 > G.Jc.size(0)) {
            emlrtDynamicBoundsCheckR2012b(u + 1, 1, G.Jc.size(0), &abb_emlrtBCI,
                                          &st);
          }
          if (i > G.Jc[u]) {
            i = 0;
            i2 = 0;
          } else {
            if ((i < 1) || (i > G.PosMap.size(1))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, G.PosMap.size(1),
                                            &yab_emlrtBCI, &st);
            }
            i--;
            if ((G.Jc[u] < 1) || (G.Jc[u] > G.PosMap.size(1))) {
              emlrtDynamicBoundsCheckR2012b(G.Jc[u], 1, G.PosMap.size(1),
                                            &xab_emlrtBCI, &st);
            }
            i2 = G.Jc[u];
          }
          if (b == 0) {
            outNodes.set_size(&ntb_emlrtRTEI, &st, 0);
            n = i2 - i;
            b_y1.set_size(&otb_emlrtRTEI, &st, 1, n);
            for (i1 = 0; i1 < n; i1++) {
              b_y1[i1] = G.PosMap[i + i1];
            }
          } else {
            int32_T dimSize_tmp;
            b_st.site = &rmc_emlrtRSI;
            dimSize_tmp = i2 - i;
            if (dimSize_tmp == 0) {
              b_y1.set_size(&itb_emlrtRTEI, &b_st, 1, 0);
            } else {
              i2 = dimSize_tmp - 1;
              if (muIntScalarMin_sint32(i2, 1) < 1) {
                b_y1.set_size(&htb_emlrtRTEI, &b_st, 1, 0);
              } else {
                if (dimSize_tmp == 1) {
                  emlrtErrorWithMessageIdR2018a(
                      &b_st, &yf_emlrtRTEI,
                      "Coder:toolbox:autoDimIncompatibility",
                      "Coder:toolbox:autoDimIncompatibility", 0);
                }
                b_y1.set_size(&lqb_emlrtRTEI, &b_st, 1, dimSize_tmp - 1);
                if (dimSize_tmp - 1 != 0) {
                  n = G.PosMap[i];
                  c_st.site = &tmc_emlrtRSI;
                  if (dimSize_tmp > 2147483646) {
                    d_st.site = &qe_emlrtRSI;
                    check_forloop_overflow_error(d_st);
                  }
                  for (b_i = 2; b_i <= dimSize_tmp; b_i++) {
                    ichild = G.PosMap[(i + b_i) - 1];
                    c_st.site = &smc_emlrtRSI;
                    i2 = ichild;
                    ichild -= n;
                    n = i2;
                    b_y1[b_i - 2] = ichild;
                  }
                }
              }
            }
            ichild = b_y1.size(1) + 1;
            b_r.set_size(&jtb_emlrtRTEI, &st, 1, b_y1.size(1) + 1);
            b_r[0] = true;
            n = b_y1.size(1);
            for (i2 = 0; i2 < n; i2++) {
              b_r[i2 + 1] = (b_y1[i2] != 0);
            }
            n = 0;
            for (b_i = 0; b_i < ichild; b_i++) {
              if (b_r[b_i]) {
                n++;
              }
            }
            r1.set_size(&ktb_emlrtRTEI, &st, 1, n);
            n = 0;
            for (b_i = 0; b_i < ichild; b_i++) {
              if (b_r[b_i]) {
                r1[n] = b_i;
                n++;
              }
            }
            n = r1.size(1);
            outNodes.set_size(&ltb_emlrtRTEI, &st, r1.size(1));
            for (i2 = 0; i2 < n; i2++) {
              if ((r1[i2] < 0) || (r1[i2] > b - 1)) {
                emlrtDynamicBoundsCheckR2012b(r1[i2], 0, b - 1, &qcb_emlrtBCI,
                                              &st);
              }
              outNodes[i2] = G.Ir[i1 + r1[i2]];
            }
            b_y1.set_size(&mtb_emlrtRTEI, &st, 1, r1.size(1));
            for (i1 = 0; i1 < n; i1++) {
              if ((r1[i1] < 0) || (r1[i1] > dimSize_tmp - 1)) {
                emlrtDynamicBoundsCheckR2012b(r1[i1], 0, dimSize_tmp - 1,
                                              &vcb_emlrtBCI, &st);
              }
              b_y1[i1] = G.PosMap[i + r1[i1]];
            }
          }
          n = outNodes.size(0);
          st.site = &jmc_emlrtRSI;
          if (outNodes.size(0) > 2147483646) {
            b_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(b_st);
          }
          for (ichild = 0; ichild < n; ichild++) {
            char_T c;
            if (ichild + 1 > n) {
              emlrtDynamicBoundsCheckR2012b(ichild + 1, 1, n, &qbb_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            if (ichild + 1 > b_y1.size(1)) {
              emlrtDynamicBoundsCheckR2012b(ichild + 1, 1, b_y1.size(1),
                                            &pbb_emlrtBCI, (emlrtConstCTX)&sp);
            }
            if ((outNodes[ichild] < 1) || (outNodes[ichild] > colors.size(0))) {
              emlrtDynamicBoundsCheckR2012b(outNodes[ichild], 1, colors.size(0),
                                            &jcb_emlrtBCI, (emlrtConstCTX)&sp);
            }
            c = colors[outNodes[ichild] - 1];
            if (c == '\x00') {
              if ((outNodes[ichild] < 1) ||
                  (outNodes[ichild] > colors.size(0))) {
                emlrtDynamicBoundsCheckR2012b(outNodes[ichild], 1,
                                              colors.size(0), &lcb_emlrtBCI,
                                              (emlrtConstCTX)&sp);
              }
              colors[outNodes[ichild] - 1] = '\x01';
              if ((b_y1[ichild] < 1) || (b_y1[ichild] > weight.size(0))) {
                emlrtDynamicBoundsCheckR2012b(b_y1[ichild], 1, weight.size(0),
                                              &obb_emlrtBCI,
                                              (emlrtConstCTX)&sp);
              }
              if (u > dist.size(0)) {
                emlrtDynamicBoundsCheckR2012b(u, 1, dist.size(0), &mcb_emlrtBCI,
                                              (emlrtConstCTX)&sp);
              }
              if ((outNodes[ichild] < 1) || (outNodes[ichild] > dist.size(0))) {
                emlrtDynamicBoundsCheckR2012b(outNodes[ichild], 1, dist.size(0),
                                              &ncb_emlrtBCI,
                                              (emlrtConstCTX)&sp);
              }
              dist[outNodes[ichild] - 1] = dist[u - 1] + 1.0;
              if ((outNodes[ichild] < 1) || (outNodes[ichild] > pred.size(0))) {
                emlrtDynamicBoundsCheckR2012b(outNodes[ichild], 1, pred.size(0),
                                              &pcb_emlrtBCI,
                                              (emlrtConstCTX)&sp);
              }
              pred[outNodes[ichild] - 1] = u;
              st.site = &kmc_emlrtRSI;
              queue.len++;
              if ((queue.len < 1) || (queue.len > queue.heap.size(0))) {
                emlrtDynamicBoundsCheckR2012b(queue.len, 1, queue.heap.size(0),
                                              &kbb_emlrtBCI, &st);
              }
              queue.heap[queue.len - 1] = outNodes[ichild];
              if ((outNodes[ichild] < 1) ||
                  (outNodes[ichild] > queue.indexToHeap.size(0))) {
                emlrtDynamicBoundsCheckR2012b(outNodes[ichild], 1,
                                              queue.indexToHeap.size(0),
                                              &jbb_emlrtBCI, &st);
              }
              queue.indexToHeap[outNodes[ichild] - 1] = queue.len;
              b_st.site = &umc_emlrtRSI;
              queue.percUp(b_st, queue.len, dist);
            } else {
              if ((outNodes[ichild] < 1) ||
                  (outNodes[ichild] > colors.size(0))) {
                emlrtDynamicBoundsCheckR2012b(outNodes[ichild], 1,
                                              colors.size(0), &kcb_emlrtBCI,
                                              (emlrtConstCTX)&sp);
              }
              if (c == '\x01') {
                boolean_T guard2;
                if ((b_y1[ichild] < 1) || (b_y1[ichild] > weight.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(b_y1[ichild], 1, weight.size(0),
                                                &mbb_emlrtBCI,
                                                (emlrtConstCTX)&sp);
                }
                if (u > dist.size(0)) {
                  emlrtDynamicBoundsCheckR2012b(
                      u, 1, dist.size(0), &nbb_emlrtBCI, (emlrtConstCTX)&sp);
                }
                if ((outNodes[ichild] < 1) ||
                    (outNodes[ichild] > dist.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(outNodes[ichild], 1,
                                                dist.size(0), &ocb_emlrtBCI,
                                                (emlrtConstCTX)&sp);
                }
                d = dist[u - 1] + 1.0;
                d1 = dist[outNodes[ichild] - 1];
                guard2 = false;
                if (d < d1) {
                  guard2 = true;
                } else {
                  if ((outNodes[ichild] < 1) ||
                      (outNodes[ichild] > dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(outNodes[ichild], 1,
                                                  dist.size(0), &rcb_emlrtBCI,
                                                  (emlrtConstCTX)&sp);
                  }
                  if (d == d1) {
                    if ((outNodes[ichild] < 1) ||
                        (outNodes[ichild] > pred.size(0))) {
                      emlrtDynamicBoundsCheckR2012b(outNodes[ichild], 1,
                                                    pred.size(0), &scb_emlrtBCI,
                                                    (emlrtConstCTX)&sp);
                    }
                    if (static_cast<real_T>(u) + 1.0 <
                        pred[outNodes[ichild] - 1]) {
                      guard2 = true;
                    }
                  }
                }
                if (guard2) {
                  if ((outNodes[ichild] < 1) ||
                      (outNodes[ichild] > dist.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(outNodes[ichild], 1,
                                                  dist.size(0), &tcb_emlrtBCI,
                                                  (emlrtConstCTX)&sp);
                  }
                  dist[outNodes[ichild] - 1] = d;
                  if ((outNodes[ichild] < 1) ||
                      (outNodes[ichild] > pred.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(outNodes[ichild], 1,
                                                  pred.size(0), &ucb_emlrtBCI,
                                                  (emlrtConstCTX)&sp);
                  }
                  pred[outNodes[ichild] - 1] = u;
                  st.site = &lmc_emlrtRSI;
                  if ((outNodes[ichild] < 1) ||
                      (outNodes[ichild] > queue.indexToHeap.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(outNodes[ichild], 1,
                                                  queue.indexToHeap.size(0),
                                                  &vab_emlrtBCI, &st);
                  }
                  b_st.site = &xmc_emlrtRSI;
                  queue.percUp(b_st, queue.indexToHeap[outNodes[ichild] - 1],
                               dist);
                }
              }
            }
          }
          guard1 = false;
        }
      }
    }
    if (guard1) {
      st.site = &gmc_emlrtRSI;
      for (ichild = 0; ichild < b; ichild++) {
        st.site = &hmc_emlrtRSI;
        if (ichild + 1 > i) {
          emlrtDynamicBoundsCheckR2012b(ichild + 1, 1, i, &wab_emlrtBCI, &st);
        }
        if ((queue.heap[ichild] < 1) || (queue.heap[ichild] > pred.size(0))) {
          emlrtDynamicBoundsCheckR2012b(queue.heap[ichild], 1, pred.size(0),
                                        &fcb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        pred[queue.heap[ichild] - 1] = rtNaN;
        if ((queue.heap[ichild] < 1) || (queue.heap[ichild] > dist.size(0))) {
          emlrtDynamicBoundsCheckR2012b(queue.heap[ichild], 1, dist.size(0),
                                        &hcb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        dist[queue.heap[ichild] - 1] = rtInf;
      }
      if (u > dist.size(0)) {
        emlrtDynamicBoundsCheckR2012b(u, 1, dist.size(0), &ccb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (!(dist[u - 1] <= 2.0)) {
        if (u > pred.size(0)) {
          emlrtDynamicBoundsCheckR2012b(u, 1, pred.size(0), &dcb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        pred[u - 1] = rtNaN;
        if (u > dist.size(0)) {
          emlrtDynamicBoundsCheckR2012b(u, 1, dist.size(0), &ecb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        dist[u - 1] = rtInf;
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (dijkstraShortestPathImpl.cpp)
