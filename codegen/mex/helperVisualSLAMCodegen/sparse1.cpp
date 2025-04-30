//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sparse1.cpp
//
// Code generation for function 'sparse1'
//

// Include files
#include "sparse1.h"
#include "anonymous_function.h"
#include "bigProduct.h"
#include "catCheck.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "ind2sub.h"
#include "indexShapeCheck.h"
#include "introsort.h"
#include "issorted.h"
#include "locBsearch.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "validateNumericIndex.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstddef>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo jjb_emlrtRSI{
    264,                  // lineNo
    "sparse/parenAssign", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo kjb_emlrtRSI{
    72,                     // lineNo
    "sparse/parenAssign2D", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo ljb_emlrtRSI{
    84,                     // lineNo
    "parenAssign2DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo mjb_emlrtRSI{
    85,                     // lineNo
    "parenAssign2DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo njb_emlrtRSI{
    88,                     // lineNo
    "parenAssign2DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo ojb_emlrtRSI{
    98,                         // lineNo
    "parenAssign2DNumericImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo pjb_emlrtRSI{
    100,                        // lineNo
    "parenAssign2DNumericImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo qjb_emlrtRSI{
    106,                        // lineNo
    "parenAssign2DNumericImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo rjb_emlrtRSI{
    137,                        // lineNo
    "parenAssign2DNumericImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo sjb_emlrtRSI{
    152,                        // lineNo
    "parenAssign2DNumericImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo tjb_emlrtRSI{
    154,                        // lineNo
    "parenAssign2DNumericImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo ujb_emlrtRSI{
    161,                        // lineNo
    "parenAssign2DNumericImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo vjb_emlrtRSI{
    163,                        // lineNo
    "parenAssign2DNumericImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo wjb_emlrtRSI{
    191,                        // lineNo
    "parenAssign2DNumericImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo xjb_emlrtRSI{
    193,                        // lineNo
    "parenAssign2DNumericImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo yjb_emlrtRSI{
    198,                        // lineNo
    "parenAssign2DNumericImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo akb_emlrtRSI{
    30,                            // lineNo
    "sortSparseParenAssignInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortSparseParenAssignInputs.m" // pathName
};

static emlrtRSInfo bkb_emlrtRSI{
    29,                            // lineNo
    "sortSparseParenAssignInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortSparseParenAssignInputs.m" // pathName
};

static emlrtRSInfo ckb_emlrtRSI{
    25,                            // lineNo
    "sortSparseParenAssignInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortSparseParenAssignInputs.m" // pathName
};

static emlrtRSInfo dkb_emlrtRSI{
    410,       // lineNo
    "realloc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo ekb_emlrtRSI{
    418,       // lineNo
    "realloc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo fkb_emlrtRSI{
    423,       // lineNo
    "realloc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo gkb_emlrtRSI{
    326,                  // lineNo
    "shiftRowidxAndData", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo hkb_emlrtRSI{
    327,                  // lineNo
    "shiftRowidxAndData", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo ikb_emlrtRSI{
    345,          // lineNo
    "incrColIdx", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo jkb_emlrtRSI{
    352,          // lineNo
    "decrColIdx", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pathName
};

static emlrtRSInfo kkb_emlrtRSI{
    12,               // lineNo
    "sparse/horzcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\horzcat.m" // pathName
};

static emlrtRSInfo lkb_emlrtRSI{
    13,               // lineNo
    "sparse/horzcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\horzcat.m" // pathName
};

static emlrtRSInfo mkb_emlrtRSI{
    20,             // lineNo
    "sparse/spcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\spcat.m" // pathName
};

static emlrtRSInfo nkb_emlrtRSI{
    27,          // lineNo
    "dohorzcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\spcat.m" // pathName
};

static emlrtRSInfo okb_emlrtRSI{
    39,          // lineNo
    "dohorzcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\spcat.m" // pathName
};

static emlrtRSInfo pkb_emlrtRSI{
    44,          // lineNo
    "dohorzcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\spcat.m" // pathName
};

static emlrtRSInfo wnb_emlrtRSI{
    292,           // lineNo
    "sparse/plus", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo xnb_emlrtRSI{
    125,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo ynb_emlrtRSI{
    130,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo aob_emlrtRSI{
    133,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo bob_emlrtRSI{
    139,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo cob_emlrtRSI{
    142,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo dob_emlrtRSI{
    146,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo eob_emlrtRSI{
    149,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo fob_emlrtRSI{
    521,                // lineNo
    "allocEqsizeBinop", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo gob_emlrtRSI{
    241,                         // lineNo
    "sparseSparseEqHeightBinOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo hob_emlrtRSI{
    298,                          // lineNo
    "sparseSparseRowExpandBinOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo iob_emlrtRSI{
    326,                          // lineNo
    "sparseSparseRowExpandBinOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo job_emlrtRSI{
    331,                          // lineNo
    "sparseSparseRowExpandBinOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo kob_emlrtRSI{
    341,                          // lineNo
    "sparseSparseRowExpandBinOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo erb_emlrtRSI{
    25,                        // lineNo
    "sparse/parenReference2D", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pathName
};

static emlrtRSInfo frb_emlrtRSI{
    32,                        // lineNo
    "parenReference2DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pathName
};

static emlrtRSInfo grb_emlrtRSI{
    33,                        // lineNo
    "parenReference2DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pathName
};

static emlrtRSInfo hrb_emlrtRSI{
    36,                        // lineNo
    "parenReference2DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pathName
};

static emlrtRSInfo irb_emlrtRSI{
    51,                            // lineNo
    "parenReference2DNumericImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pathName
};

static emlrtRSInfo jrb_emlrtRSI{
    53,                            // lineNo
    "parenReference2DNumericImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pathName
};

static emlrtRSInfo obc_emlrtRSI{
    262,                  // lineNo
    "sparse/parenAssign", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo pbc_emlrtRSI{
    29,                     // lineNo
    "sparse/parenAssign1D", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign1D.m" // pathName
};

static emlrtRSInfo qbc_emlrtRSI{
    45,                     // lineNo
    "parenAssign1DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign1D.m" // pathName
};

static emlrtRSInfo rbc_emlrtRSI{
    47,                     // lineNo
    "parenAssign1DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign1D.m" // pathName
};

static emlrtRSInfo sbc_emlrtRSI{
    51,                     // lineNo
    "parenAssign1DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign1D.m" // pathName
};

static emlrtRSInfo tbc_emlrtRSI{
    60,                     // lineNo
    "parenAssign1DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign1D.m" // pathName
};

static emlrtRSInfo ubc_emlrtRSI{
    82,                     // lineNo
    "parenAssign1DNumeric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign1D.m" // pathName
};

static emlrtRSInfo rdc_emlrtRSI{
    23,                        // lineNo
    "sparse/parenReference2D", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pathName
};

static emlrtRSInfo sdc_emlrtRSI{
    117,                    // lineNo
    "parenReference2DRows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pathName
};

static emlrtRSInfo tdc_emlrtRSI{
    120,                    // lineNo
    "parenReference2DRows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pathName
};

static emlrtRSInfo yfc_emlrtRSI{
    88,                        // lineNo
    "parenReference2DColumns", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pathName
};

static emlrtRSInfo agc_emlrtRSI{
    99,                        // lineNo
    "parenReference2DColumns", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pathName
};

static emlrtRSInfo twc_emlrtRSI{
    356,          // lineNo
    "sparse/and", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo uwc_emlrtRSI{
    135,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo axc_emlrtRSI{
    29,                    // lineNo
    "sparse/locTranspose", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\locTranspose.m" // pathName
};

static emlrtRSInfo bxc_emlrtRSI{
    250,                         // lineNo
    "sparseSparseEqHeightBinOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo cxc_emlrtRSI{
    264,                         // lineNo
    "sparseSparseEqHeightBinOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo dxc_emlrtRSI{
    133,               // lineNo
    "@(x,y)(op(y,x))", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo exc_emlrtRSI{
    334,                          // lineNo
    "sparseSparseRowExpandBinOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo fxc_emlrtRSI{
    308,                          // lineNo
    "sparseSparseRowExpandBinOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo gxc_emlrtRSI{
    283,                          // lineNo
    "sparseSparseRowExpandBinOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo uyc_emlrtRSI{
    1650,                  // lineNo
    "assertValidIndexArg", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo yyc_emlrtRSI{
    1677,            // lineNo
    "permuteVector", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo nad_emlrtRSI{
    302,            // lineNo
    "sparse/times", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo xad_emlrtRSI{
    518,                // lineNo
    "sparse/zerosLike", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo yad_emlrtRSI{
    12,                   // lineNo
    "sparse/genericLike", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\genericLike.m" // pathName
};

static emlrtDCInfo v_emlrtDCI{
    386,             // lineNo
    13,              // colNo
    "sparse/spones", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m", // pName
    4                   // checkKind
};

static emlrtRTEInfo gd_emlrtRTEI{
    59,             // lineNo
    27,             // colNo
    "sparse/binOp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pName
};

static emlrtRTEInfo hd_emlrtRTEI{
    505,                // lineNo
    9,                  // colNo
    "allocEqsizeBinop", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pName
};

static emlrtRTEInfo md_emlrtRTEI{
    44,                            // lineNo
    1,                             // colNo
    "parenReference2DNumericImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenReference2D.m" // pName
};

static emlrtDCInfo eb_emlrtDCI{
    250,                     // lineNo
    17,                      // colNo
    "sparse/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m", // pName
    4                   // checkKind
};

static emlrtRTEInfo df_emlrtRTEI{
    13,               // lineNo
    13,               // colNo
    "toLogicalCheck", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\toLogicalCheck.m" // pName
};

static emlrtDCInfo gc_emlrtDCI{
    211,            // lineNo
    9,              // colNo
    "sparse/binOp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m", // pName
    4                  // checkKind
};

static emlrtRTEInfo lf_emlrtRTEI{
    1656,                  // lineNo
    31,                    // colNo
    "assertValidIndexArg", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo mf_emlrtRTEI{
    1654,                  // lineNo
    31,                    // colNo
    "assertValidIndexArg", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo lg_emlrtRTEI{
    42,                     // lineNo
    23,                     // colNo
    "sparse/parenAssign2D", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pName
};

static emlrtRTEInfo wg_emlrtRTEI{
    57,                     // lineNo
    9,                      // colNo
    "parenAssign1DNumeric", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign1D.m" // pName
};

static emlrtRTEInfo aw_emlrtRTEI{
    1476,     // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo lx_emlrtRTEI{
    383,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo mx_emlrtRTEI{
    384,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo nx_emlrtRTEI{
    385,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo ox_emlrtRTEI{
    386,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo ny_emlrtRTEI{
    250,      // lineNo
    17,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo oy_emlrtRTEI{
    240,      // lineNo
    22,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo feb_emlrtRTEI{
    191,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo geb_emlrtRTEI{
    193,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo heb_emlrtRTEI{
    195,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo qnb_emlrtRTEI{
    395,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo rnb_emlrtRTEI{
    32,             // lineNo
    1,              // colNo
    "locTranspose", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\locTranspose.m" // pName
};

static emlrtRTEInfo hob_emlrtRTEI{
    1647,     // lineNo
    27,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo iob_emlrtRTEI{
    51,       // lineNo
    1,        // colNo
    "mtimes", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pName
};

static emlrtRTEInfo job_emlrtRTEI{
    276,      // lineNo
    1,        // colNo
    "mtimes", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pName
};

static emlrtRTEInfo kob_emlrtRTEI{
    57,       // lineNo
    25,       // colNo
    "mtimes", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pName
};

static emlrtRTEInfo lob_emlrtRTEI{
    59,       // lineNo
    1,        // colNo
    "mtimes", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\mtimes.m" // pName
};

static emlrtRTEInfo rob_emlrtRTEI{
    302,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo tob_emlrtRTEI{
    518,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo tvb_emlrtRTEI{
    1,                             // lineNo
    62,                            // colNo
    "sortSparseParenAssignInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortSparseParenAssignInputs.m" // pName
};

static emlrtRTEInfo uvb_emlrtRTEI{
    1,                             // lineNo
    60,                            // colNo
    "sortSparseParenAssignInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortSparseParenAssignInputs.m" // pName
};

static emlrtRTEInfo vvb_emlrtRTEI{
    21,                            // lineNo
    1,                             // colNo
    "sortSparseParenAssignInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\sortSparseParenAssignInputs.m" // pName
};

static emlrtRTEInfo wvb_emlrtRTEI{
    406,             // lineNo
    1,               // colNo
    "parenAssign2D", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pName
};

static emlrtRTEInfo xvb_emlrtRTEI{
    407,             // lineNo
    1,               // colNo
    "parenAssign2D", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pName
};

static emlrtRTEInfo yvb_emlrtRTEI{
    414,             // lineNo
    1,               // colNo
    "parenAssign2D", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pName
};

static emlrtRTEInfo awb_emlrtRTEI{
    415,             // lineNo
    1,               // colNo
    "parenAssign2D", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign2D.m" // pName
};

static emlrtRTEInfo exb_emlrtRTEI{
    55,              // lineNo
    1,               // colNo
    "parenAssign1D", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\parenAssign1D.m" // pName
};

static emlrtRTEInfo ndc_emlrtRTEI{
    1676,     // lineNo
    5,        // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

// Function Definitions
namespace coder {
void sparse::allocEqsizeBinop(const emlrtStack &sp, const sparse *a,
                              const c_sparse &b, int32_T sn, int32_T sm,
                              sparse &s)
{
  emlrtStack st;
  int32_T highOrderA;
  int32_T highOrderB;
  int32_T lowOrderB;
  int32_T nza;
  int32_T nzb;
  int32_T overflow;
  int32_T partialResults_idx_0_tmp;
  int32_T partialResults_idx_1;
  int32_T tmp;
  boolean_T addInRange;
  boolean_T mulInRange;
  st.prev = &sp;
  st.tls = sp.tls;
  nza = a->colidx[a->colidx.size(0) - 1] - 1;
  nzb = b.colidx[b.colidx.size(0) - 1] - 1;
  if ((a->m != 1) || (a->n != b.n)) {
    if (a->n == 1) {
      nza *= b.n;
    }
    if (b.n == 1) {
      nzb *= a->n;
    }
  }
  addInRange = (nza <= MAX_int32_T - nzb);
  highOrderA = sn >> 16;
  partialResults_idx_1 =
      static_cast<int32_T>(static_cast<uint32_T>(sn) & 65535U);
  highOrderB = sm >> 16;
  lowOrderB = static_cast<int32_T>(static_cast<uint32_T>(sm) & 65535U);
  partialResults_idx_0_tmp = partialResults_idx_1 * lowOrderB;
  tmp = partialResults_idx_1 * highOrderB;
  partialResults_idx_1 = tmp << 16;
  overflow = tmp >> 16;
  if (overflow <= 0) {
    tmp = highOrderA * lowOrderB;
    overflow = tmp >> 16;
    if (overflow <= 0) {
      overflow = highOrderA * highOrderB;
      if (overflow <= 0) {
        if (partialResults_idx_0_tmp > MAX_int32_T - partialResults_idx_1) {
          partialResults_idx_1 =
              (partialResults_idx_0_tmp + partialResults_idx_1) - MAX_int32_T;
          overflow = 1;
        } else {
          partialResults_idx_1 += partialResults_idx_0_tmp;
        }
        if (partialResults_idx_1 > MAX_int32_T - (tmp << 16)) {
          overflow++;
        }
      }
    }
  }
  mulInRange = (overflow == 0);
  if ((!addInRange) && (!mulInRange)) {
    emlrtErrorWithMessageIdR2018a(&sp, &hd_emlrtRTEI,
                                  "Coder:toolbox:SparseFuncAlmostFull",
                                  "Coder:toolbox:SparseFuncAlmostFull", 0);
  }
  if (addInRange) {
    partialResults_idx_1 = nza + nzb;
  } else {
    partialResults_idx_1 = MAX_int32_T;
  }
  if (mulInRange) {
    highOrderA = sn * sm;
  } else {
    highOrderA = MAX_int32_T;
  }
  partialResults_idx_1 =
      muIntScalarMin_sint32(partialResults_idx_1, highOrderA);
  if (partialResults_idx_1 < 1) {
    partialResults_idx_1 = 1;
  }
  st.site = &fob_emlrtRSI;
  s.m = sm;
  s.n = sn;
  s.maxnz = partialResults_idx_1;
  s.d.set_size(&px_emlrtRTEI, &st, partialResults_idx_1);
  s.rowidx.set_size(&qx_emlrtRTEI, &st, partialResults_idx_1);
  if (sn + 1 < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(sn + 1), &w_emlrtDCI, &st);
  }
  s.colidx.set_size(&rx_emlrtRTEI, &st, sn + 1);
}

void sparse::b_realloc(const emlrtStack &sp, b_sparse *b_this,
                       int32_T numAllocRequested, int32_T ub1, int32_T lb2,
                       int32_T ub2, int32_T offs)
{
  array<real_T, 1U> dt;
  array<int32_T, 1U> rowidxt;
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  int32_T numAlloc;
  int32_T overflow;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  numAlloc = b_this->rowidx.size(0);
  rowidxt.set_size(&wvb_emlrtRTEI, &sp, numAlloc);
  for (i = 0; i < numAlloc; i++) {
    rowidxt[i] = b_this->rowidx[i];
  }
  numAlloc = b_this->d.size(0);
  dt.set_size(&xvb_emlrtRTEI, &sp, numAlloc);
  for (i = 0; i < numAlloc; i++) {
    dt[i] = b_this->d[i];
  }
  st.site = &dkb_emlrtRSI;
  numAlloc = b_this->m >> 16;
  overflow = numAlloc >> 16;
  if (static_cast<int32_T>(static_cast<uint32_T>(b_this->m) & 65535U) >
      MAX_int32_T - (numAlloc << 16)) {
    overflow++;
  }
  if (overflow != 0) {
    emlrtErrorWithMessageIdR2018a(&st, &af_emlrtRTEI,
                                  "Coder:toolbox:SparseNumelTooBig",
                                  "Coder:toolbox:SparseNumelTooBig", 0);
  }
  numAlloc = muIntScalarMin_sint32(numAllocRequested, b_this->m);
  if (numAlloc <= 1) {
    numAlloc = 1;
  }
  b_this->rowidx.set_size(&yvb_emlrtRTEI, &sp, numAlloc);
  b_this->d.set_size(&awb_emlrtRTEI, &sp, numAlloc);
  for (i = 0; i < numAlloc; i++) {
    b_this->rowidx[i] = 0;
    b_this->d[i] = 0.0;
  }
  b_this->maxnz = numAlloc;
  st.site = &ekb_emlrtRSI;
  if (ub1 > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (overflow = 0; overflow < ub1; overflow++) {
    b_this->rowidx[overflow] = rowidxt[overflow];
    b_this->d[overflow] = dt[overflow];
  }
  st.site = &fkb_emlrtRSI;
  if ((lb2 <= ub2) && (ub2 > 2147483646)) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (overflow = lb2; overflow <= ub2; overflow++) {
    i = (overflow + offs) - 1;
    b_this->rowidx[i] = rowidxt[overflow - 1];
    b_this->d[i] = dt[overflow - 1];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sparse::b_realloc(const emlrtStack &sp, sparse *b_this,
                       int32_T numAllocRequested, int32_T ub1, int32_T lb2,
                       int32_T ub2, int32_T offs)
{
  array<real_T, 1U> dt;
  array<int32_T, 1U> rowidxt;
  emlrtStack b_st;
  emlrtStack st;
  int32_T numAlloc;
  int32_T overflow;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  numAlloc = b_this->rowidx.size(0);
  rowidxt.set_size(&wvb_emlrtRTEI, &sp, numAlloc);
  for (overflow = 0; overflow < numAlloc; overflow++) {
    rowidxt[overflow] = b_this->rowidx[overflow];
  }
  numAlloc = b_this->d.size(0);
  dt.set_size(&xvb_emlrtRTEI, &sp, numAlloc);
  for (overflow = 0; overflow < numAlloc; overflow++) {
    dt[overflow] = b_this->d[overflow];
  }
  internal::bigProduct(b_this->m, b_this->n, overflow);
  if (overflow == 0) {
    st.site = &dkb_emlrtRSI;
    internal::bigProduct(b_this->m, b_this->n, overflow);
    if (overflow != 0) {
      emlrtErrorWithMessageIdR2018a(&st, &af_emlrtRTEI,
                                    "Coder:toolbox:SparseNumelTooBig",
                                    "Coder:toolbox:SparseNumelTooBig", 0);
    }
    numAlloc = b_this->m * b_this->n;
    numAlloc = muIntScalarMin_sint32(numAllocRequested, numAlloc);
    if (numAlloc <= 1) {
      numAlloc = 1;
    }
  } else if (numAllocRequested <= 1) {
    numAlloc = 1;
  } else {
    numAlloc = numAllocRequested;
  }
  b_this->rowidx.set_size(&yvb_emlrtRTEI, &sp, numAlloc);
  b_this->d.set_size(&awb_emlrtRTEI, &sp, numAlloc);
  for (overflow = 0; overflow < numAlloc; overflow++) {
    b_this->rowidx[overflow] = 0;
    b_this->d[overflow] = 0.0;
  }
  b_this->maxnz = numAlloc;
  st.site = &ekb_emlrtRSI;
  if (ub1 > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (numAlloc = 0; numAlloc < ub1; numAlloc++) {
    b_this->rowidx[numAlloc] = rowidxt[numAlloc];
    b_this->d[numAlloc] = dt[numAlloc];
  }
  st.site = &fkb_emlrtRSI;
  if ((lb2 <= ub2) && (ub2 > 2147483646)) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (numAlloc = lb2; numAlloc <= ub2; numAlloc++) {
    overflow = (numAlloc + offs) - 1;
    b_this->rowidx[overflow] = rowidxt[numAlloc - 1];
    b_this->d[overflow] = dt[numAlloc - 1];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sparse::b_sparseSparseEqHeightBinOp(const emlrtStack &sp,
                                         const f_sparse *a, const f_sparse &b,
                                         f_sparse &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_n;
  int32_T didx;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  didx = 1;
  s.colidx[0] = 1;
  b_n = s.n;
  st.site = &gob_emlrtRSI;
  if (s.n > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T c{0}; c < b_n; c++) {
    int32_T aidx;
    int32_T bidx;
    int32_T bidx_tmp;
    boolean_T moreAToDo;
    boolean_T moreBToDo;
    aidx = a->colidx[0];
    bidx_tmp = b.colidx[c];
    bidx = bidx_tmp - 1;
    moreAToDo = (a->colidx[0] < a->colidx[1]);
    moreBToDo = (bidx_tmp < b.colidx[c + 1]);
    while (moreAToDo || moreBToDo) {
      while ((aidx < a->colidx[1]) &&
             ((!moreBToDo) || (a->rowidx[aidx - 1] < b.rowidx[bidx]))) {
        aidx++;
      }
      moreAToDo = (aidx < a->colidx[1]);
      while ((bidx + 1 < b.colidx[c + 1]) &&
             ((!moreAToDo) || (b.rowidx[bidx] < a->rowidx[aidx - 1]))) {
        bidx++;
      }
      while ((aidx < a->colidx[1]) && (bidx + 1 < b.colidx[c + 1]) &&
             (a->rowidx[aidx - 1] == b.rowidx[bidx])) {
        if (a->d[aidx - 1] && b.d[bidx]) {
          s.d[didx - 1] = true;
          s.rowidx[didx - 1] = b.rowidx[bidx];
          didx++;
        }
        bidx++;
        aidx++;
      }
      moreAToDo = (aidx < a->colidx[1]);
      moreBToDo = (bidx + 1 < b.colidx[c + 1]);
    }
    s.colidx[c + 1] = didx;
  }
}

void sparse::b_sparseSparseRowExpandBinOp(const emlrtStack &sp,
                                          const sparse *rowA, const c_sparse &b,
                                          sparse &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_n;
  int32_T bc;
  int32_T didx;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  didx = 1;
  s.colidx[0] = 1;
  b_n = s.n;
  bc = 0;
  st.site = &hob_emlrtRSI;
  if (s.n > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T c{0}; c < b_n; c++) {
    real_T av;
    if (rowA->colidx[c] == rowA->colidx[c + 1]) {
      av = 0.0;
    } else {
      av = rowA->d[rowA->colidx[c] - 1];
    }
    if (b.colidx[bc] == b.colidx[bc + 1]) {
      if (av != 0.0) {
        int32_T b_b;
        b_b = s.m;
        for (int32_T b_r{0}; b_r < b_b; b_r++) {
          if (av != 0.0) {
            s.d[didx - 1] = av;
            s.rowidx[didx - 1] = b_r + 1;
            didx++;
          }
        }
      }
      s.colidx[c + 1] = didx;
      bc++;
    } else {
      real_T val;
      if (av != 0.0) {
        st.site = &iob_emlrtRSI;
      }
      st.site = &job_emlrtRSI;
      val = av + b.d[b.colidx[bc] + -1];
      if (val != 0.0) {
        s.d[didx - 1] = val;
        s.rowidx[didx - 1] = 1;
        didx++;
      }
      if (av != 0.0) {
        int32_T b_b;
        b_b = s.m;
        st.site = &kob_emlrtRSI;
        if (s.m > 2147483646) {
          b_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(b_st);
        }
        for (int32_T b_r{2}; b_r <= b_b; b_r++) {
          if (av != 0.0) {
            s.d[didx - 1] = av;
            s.rowidx[didx - 1] = b_r;
            didx++;
          }
        }
      }
      s.colidx[c + 1] = didx;
      bc++;
    }
  }
}

void sparse::b_sparseSparseRowExpandBinOp(const emlrtStack &sp,
                                          const c_sparse &rowA, const sparse *b,
                                          sparse &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_n;
  int32_T bc;
  int32_T didx;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  didx = 1;
  s.colidx[0] = 1;
  b_n = s.n;
  bc = 0;
  st.site = &hob_emlrtRSI;
  if (s.n > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T c{0}; c < b_n; c++) {
    real_T av;
    int32_T a_tmp;
    if (rowA.colidx[c] == rowA.colidx[c + 1]) {
      av = 0.0;
    } else {
      av = rowA.d[rowA.colidx[c] - 1];
    }
    a_tmp = b->colidx[bc + 1];
    if (b->colidx[bc] == a_tmp) {
      if (av != 0.0) {
        a_tmp = s.m;
        for (int32_T b_r{0}; b_r < a_tmp; b_r++) {
          if (av != 0.0) {
            s.d[didx - 1] = av;
            s.rowidx[didx - 1] = b_r + 1;
            didx++;
          }
        }
      }
      s.colidx[c + 1] = didx;
      bc++;
    } else {
      int32_T firstNonZeroRow_tmp;
      int32_T lastNonZeroRow_tmp;
      int32_T offset;
      firstNonZeroRow_tmp = b->rowidx[b->colidx[bc] - 1];
      lastNonZeroRow_tmp = b->rowidx[a_tmp - 2];
      if (av != 0.0) {
        st.site = &iob_emlrtRSI;
        if (firstNonZeroRow_tmp - 1 > 2147483646) {
          b_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(b_st);
        }
        for (int32_T b_r{0}; b_r <= firstNonZeroRow_tmp - 2; b_r++) {
          if (av != 0.0) {
            s.d[didx - 1] = av;
            s.rowidx[didx - 1] = b_r + 1;
            didx++;
          }
        }
      }
      offset = -1;
      st.site = &job_emlrtRSI;
      if ((firstNonZeroRow_tmp <= lastNonZeroRow_tmp) &&
          (lastNonZeroRow_tmp > 2147483646)) {
        b_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(b_st);
      }
      for (int32_T b_r{firstNonZeroRow_tmp}; b_r <= lastNonZeroRow_tmp; b_r++) {
        a_tmp = b->colidx[bc] + offset;
        if (b->rowidx[a_tmp] == b_r) {
          real_T val;
          val = b->d[a_tmp] + av;
          if (val != 0.0) {
            s.d[didx - 1] = val;
            s.rowidx[didx - 1] = b_r;
            didx++;
          }
          offset++;
        } else if (av != 0.0) {
          s.d[didx - 1] = av;
          s.rowidx[didx - 1] = b_r;
          didx++;
        }
      }
      if (av != 0.0) {
        a_tmp = lastNonZeroRow_tmp + 1;
        firstNonZeroRow_tmp = s.m;
        st.site = &kob_emlrtRSI;
        if ((lastNonZeroRow_tmp + 1 <= s.m) && (s.m > 2147483646)) {
          b_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(b_st);
        }
        for (int32_T b_r{a_tmp}; b_r <= firstNonZeroRow_tmp; b_r++) {
          if (av != 0.0) {
            s.d[didx - 1] = av;
            s.rowidx[didx - 1] = b_r;
            didx++;
          }
        }
      }
      s.colidx[c + 1] = didx;
      bc++;
    }
  }
}

void sparse::decrColIdx(const emlrtStack &sp, sparse *b_this, int32_T col,
                        int32_T offs)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T a;
  int32_T b_tmp;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  a = col + 1;
  b_tmp = b_this->n + 1;
  st.site = &jkb_emlrtRSI;
  if ((col + 1 <= b_tmp) && (b_tmp > 2147483646)) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  scalarLB = ((((b_tmp - col) / 4) << 2) + col) + 1;
  vectorUB = scalarLB - 4;
  for (int32_T k{a}; k <= vectorUB; k += 4) {
    __m128i b_r;
    b_r = _mm_loadu_si128((const __m128i *)&b_this->colidx[k - 1]);
    _mm_storeu_si128((__m128i *)&b_this->colidx[k - 1],
                     _mm_sub_epi32(b_r, _mm_set1_epi32(offs)));
  }
  for (int32_T k{scalarLB}; k <= b_tmp; k++) {
    b_this->colidx[k - 1] = b_this->colidx[k - 1] - offs;
  }
}

void f_sparse::fillIn()
{
  int32_T i;
  int32_T idx;
  idx = 1;
  i = colidx.size(0);
  for (int32_T c{0}; c <= i - 2; c++) {
    int32_T ridx;
    ridx = colidx[c];
    colidx[c] = idx;
    while (ridx < colidx[c + 1]) {
      boolean_T val;
      val = false;
      while (ridx < colidx[c + 1]) {
        if (val || d[ridx - 1]) {
          val = true;
        }
        ridx++;
      }
      if (val) {
        d[idx - 1] = true;
        rowidx[idx - 1] = 0;
        idx++;
      }
    }
  }
  colidx[colidx.size(0) - 1] = idx;
}

void sparse::incrColIdx(const emlrtStack &sp, sparse *b_this, int32_T col,
                        int32_T offs)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T a;
  int32_T b_tmp;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  a = col + 1;
  b_tmp = b_this->n + 1;
  st.site = &ikb_emlrtRSI;
  if ((col + 1 <= b_tmp) && (b_tmp > 2147483646)) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  scalarLB = ((((b_tmp - col) / 4) << 2) + col) + 1;
  vectorUB = scalarLB - 4;
  for (int32_T k{a}; k <= vectorUB; k += 4) {
    __m128i b_r;
    b_r = _mm_loadu_si128((const __m128i *)&b_this->colidx[k - 1]);
    _mm_storeu_si128((__m128i *)&b_this->colidx[k - 1],
                     _mm_add_epi32(b_r, _mm_set1_epi32(offs)));
  }
  for (int32_T k{scalarLB}; k <= b_tmp; k++) {
    b_this->colidx[k - 1] = b_this->colidx[k - 1] + offs;
  }
}

void sparse::sparseSparseEqHeightBinOp(const emlrtStack &sp, const f_sparse *a,
                                       const f_sparse &b, f_sparse &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_n;
  int32_T didx;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  didx = 1;
  s.colidx[0] = 1;
  b_n = s.n;
  st.site = &gob_emlrtRSI;
  if (s.n > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T c{0}; c < b_n; c++) {
    int32_T aidx;
    int32_T bidx;
    int32_T bidx_tmp;
    int32_T moreAToDo_tmp;
    boolean_T moreAToDo;
    boolean_T moreBToDo;
    aidx = a->colidx[c];
    bidx_tmp = b.colidx[c];
    bidx = bidx_tmp - 1;
    moreAToDo_tmp = a->colidx[c + 1];
    moreAToDo = (a->colidx[c] < moreAToDo_tmp);
    moreBToDo = (bidx_tmp < b.colidx[c + 1]);
    while (moreAToDo || moreBToDo) {
      while ((aidx < moreAToDo_tmp) &&
             ((!moreBToDo) || (a->rowidx[aidx - 1] < b.rowidx[bidx]))) {
        aidx++;
      }
      moreAToDo = (aidx < moreAToDo_tmp);
      while ((bidx + 1 < b.colidx[c + 1]) &&
             ((!moreAToDo) || (b.rowidx[bidx] < a->rowidx[aidx - 1]))) {
        bidx++;
      }
      while ((aidx < moreAToDo_tmp) && (bidx + 1 < b.colidx[c + 1]) &&
             (a->rowidx[aidx - 1] == b.rowidx[bidx])) {
        if (a->d[aidx - 1] && b.d[bidx]) {
          s.d[didx - 1] = true;
          s.rowidx[didx - 1] = b.rowidx[bidx];
          didx++;
        }
        bidx++;
        aidx++;
      }
      moreAToDo = (aidx < moreAToDo_tmp);
      moreBToDo = (bidx + 1 < b.colidx[c + 1]);
    }
    s.colidx[c + 1] = didx;
  }
}

void sparse::sparseSparseEqHeightBinOp(const emlrtStack &sp, const f_sparse &a,
                                       const f_sparse *b, f_sparse &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_n;
  int32_T didx;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  didx = 1;
  s.colidx[0] = 1;
  b_n = s.n;
  st.site = &gob_emlrtRSI;
  if (s.n > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T c{0}; c < b_n; c++) {
    int32_T aidx;
    int32_T bidx;
    int32_T bidx_tmp;
    boolean_T moreAToDo;
    boolean_T moreBToDo;
    aidx = a.colidx[0];
    bidx_tmp = b->colidx[c];
    bidx = bidx_tmp - 1;
    moreAToDo = (a.colidx[0] < a.colidx[1]);
    moreBToDo = (bidx_tmp < b->colidx[c + 1]);
    while (moreAToDo || moreBToDo) {
      while ((aidx < a.colidx[1]) &&
             ((!moreBToDo) || (a.rowidx[aidx - 1] < b->rowidx[bidx]))) {
        aidx++;
      }
      moreAToDo = (aidx < a.colidx[1]);
      while ((bidx + 1 < b->colidx[c + 1]) &&
             ((!moreAToDo) || (b->rowidx[bidx] < a.rowidx[aidx - 1]))) {
        bidx++;
      }
      while ((aidx < a.colidx[1]) && (bidx + 1 < b->colidx[c + 1]) &&
             (a.rowidx[aidx - 1] == b->rowidx[bidx])) {
        if (b->d[bidx] && a.d[aidx - 1]) {
          s.d[didx - 1] = true;
          s.rowidx[didx - 1] = b->rowidx[bidx];
          didx++;
        }
        bidx++;
        aidx++;
      }
      moreAToDo = (aidx < a.colidx[1]);
      moreBToDo = (bidx + 1 < b->colidx[c + 1]);
    }
    s.colidx[c + 1] = didx;
  }
}

void sparse::sparseSparseEqHeightBinOp(const emlrtStack &sp, const b_sparse *a,
                                       const f_sparse &b, f_sparse &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_n;
  int32_T didx;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  didx = 1;
  s.colidx[0] = 1;
  b_n = s.n;
  st.site = &gob_emlrtRSI;
  if (s.n > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T c{0}; c < b_n; c++) {
    int32_T aidx;
    int32_T bidx;
    int32_T bidx_tmp;
    int32_T moreAToDo_tmp;
    boolean_T moreAToDo;
    boolean_T moreBToDo;
    aidx = a->colidx[c] - 1;
    bidx_tmp = b.colidx[c];
    bidx = bidx_tmp - 1;
    moreAToDo_tmp = a->colidx[c + 1];
    moreAToDo = (a->colidx[c] < moreAToDo_tmp);
    moreBToDo = (bidx_tmp < b.colidx[c + 1]);
    while (moreAToDo || moreBToDo) {
      while ((aidx + 1 < moreAToDo_tmp) &&
             ((!moreBToDo) || (a->rowidx[aidx] < b.rowidx[bidx]))) {
        st.site = &bxc_emlrtRSI;
        if (muDoubleScalarIsNaN(a->d[aidx])) {
          emlrtErrorWithMessageIdR2018a(&st, &df_emlrtRTEI,
                                        "MATLAB:nologicalnan",
                                        "MATLAB:nologicalnan", 0);
        }
        aidx++;
      }
      moreAToDo = (aidx + 1 < moreAToDo_tmp);
      while ((bidx + 1 < b.colidx[c + 1]) &&
             ((!moreAToDo) || (b.rowidx[bidx] < a->rowidx[aidx]))) {
        bidx++;
      }
      while ((aidx + 1 < moreAToDo_tmp) && (bidx + 1 < b.colidx[c + 1]) &&
             (a->rowidx[aidx] == b.rowidx[bidx])) {
        st.site = &cxc_emlrtRSI;
        if (muDoubleScalarIsNaN(a->d[aidx])) {
          emlrtErrorWithMessageIdR2018a(&st, &df_emlrtRTEI,
                                        "MATLAB:nologicalnan",
                                        "MATLAB:nologicalnan", 0);
        }
        if ((a->d[aidx] != 0.0) && b.d[bidx]) {
          s.d[didx - 1] = true;
          s.rowidx[didx - 1] = b.rowidx[bidx];
          didx++;
        }
        bidx++;
        aidx++;
      }
      moreAToDo = (aidx + 1 < moreAToDo_tmp);
      moreBToDo = (bidx + 1 < b.colidx[c + 1]);
    }
    s.colidx[c + 1] = didx;
  }
}

void sparse::sparseSparseRowExpandBinOp(const emlrtStack &sp,
                                        const f_sparse *rowA, const f_sparse &b,
                                        f_sparse &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_n;
  int32_T bc;
  int32_T didx;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  didx = 1;
  s.colidx[0] = 1;
  b_n = s.n;
  bc = 0;
  st.site = &hob_emlrtRSI;
  if (s.n > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T c{0}; c < b_n; c++) {
    int32_T i;
    boolean_T av;
    if (rowA->colidx[c] == rowA->colidx[c + 1]) {
      av = false;
    } else {
      av = rowA->d[rowA->colidx[c] - 1];
    }
    i = b.colidx[bc + 1];
    if (b.colidx[bc] == i) {
      s.colidx[c + 1] = didx;
      bc++;
    } else {
      int32_T firstNonZeroRow_tmp;
      int32_T lastNonZeroRow_tmp;
      int32_T offset;
      firstNonZeroRow_tmp = b.rowidx[b.colidx[bc] - 1];
      lastNonZeroRow_tmp = b.rowidx[i - 2];
      offset = -1;
      st.site = &job_emlrtRSI;
      if ((firstNonZeroRow_tmp <= lastNonZeroRow_tmp) &&
          (lastNonZeroRow_tmp > 2147483646)) {
        b_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(b_st);
      }
      for (int32_T b_r{firstNonZeroRow_tmp}; b_r <= lastNonZeroRow_tmp; b_r++) {
        i = b.colidx[bc] + offset;
        if (b.rowidx[i] == b_r) {
          if (av && b.d[i]) {
            s.d[didx - 1] = true;
            s.rowidx[didx - 1] = b_r;
            didx++;
          }
          offset++;
        }
      }
      s.colidx[c + 1] = didx;
      bc++;
    }
  }
}

void sparse::sparseSparseRowExpandBinOp(const emlrtStack &sp,
                                        const f_sparse &rowA, const f_sparse *b,
                                        f_sparse &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_n;
  int32_T bc;
  int32_T didx;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  didx = 1;
  s.colidx[0] = 1;
  b_n = s.n;
  bc = 0;
  st.site = &hob_emlrtRSI;
  if (s.n > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T c{0}; c < b_n; c++) {
    int32_T i;
    boolean_T av;
    if (rowA.colidx[c] == rowA.colidx[c + 1]) {
      av = false;
    } else {
      av = rowA.d[rowA.colidx[c] - 1];
    }
    i = b->colidx[bc + 1];
    if (b->colidx[bc] == i) {
      s.colidx[c + 1] = didx;
      bc++;
    } else {
      int32_T firstNonZeroRow_tmp;
      int32_T lastNonZeroRow_tmp;
      int32_T offset;
      firstNonZeroRow_tmp = b->rowidx[b->colidx[bc] - 1];
      lastNonZeroRow_tmp = b->rowidx[i - 2];
      offset = -1;
      st.site = &job_emlrtRSI;
      if ((firstNonZeroRow_tmp <= lastNonZeroRow_tmp) &&
          (lastNonZeroRow_tmp > 2147483646)) {
        b_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(b_st);
      }
      for (int32_T b_r{firstNonZeroRow_tmp}; b_r <= lastNonZeroRow_tmp; b_r++) {
        i = b->colidx[bc] + offset;
        if (b->rowidx[i] == b_r) {
          if (b->d[i] && av) {
            s.d[didx - 1] = true;
            s.rowidx[didx - 1] = b_r;
            didx++;
          }
          offset++;
        }
      }
      s.colidx[c + 1] = didx;
      bc++;
    }
  }
}

void sparse::sparseSparseRowExpandBinOp(const emlrtStack &sp,
                                        const sparse *rowA, const c_sparse &b,
                                        sparse &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_n;
  int32_T didx;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  didx = 1;
  s.colidx[0] = 1;
  b_n = s.n;
  st.site = &hob_emlrtRSI;
  if (s.n > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T c{0}; c < b_n; c++) {
    real_T av;
    if (rowA->colidx[c] == rowA->colidx[c + 1]) {
      av = 0.0;
    } else {
      av = rowA->d[rowA->colidx[c] - 1];
    }
    if (b.colidx[0] == b.colidx[1]) {
      if (av != 0.0) {
        int32_T b_b;
        b_b = s.m;
        for (int32_T b_r{0}; b_r < b_b; b_r++) {
          if (av != 0.0) {
            s.d[didx - 1] = av;
            s.rowidx[didx - 1] = b_r + 1;
            didx++;
          }
        }
      }
      s.colidx[c + 1] = didx;
    } else {
      real_T val;
      if (av != 0.0) {
        st.site = &iob_emlrtRSI;
      }
      st.site = &job_emlrtRSI;
      val = av + b.d[b.colidx[0] + -1];
      if (val != 0.0) {
        s.d[didx - 1] = val;
        s.rowidx[didx - 1] = 1;
        didx++;
      }
      if (av != 0.0) {
        int32_T b_b;
        b_b = s.m;
        st.site = &kob_emlrtRSI;
        if (s.m > 2147483646) {
          b_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(b_st);
        }
        for (int32_T b_r{2}; b_r <= b_b; b_r++) {
          if (av != 0.0) {
            s.d[didx - 1] = av;
            s.rowidx[didx - 1] = b_r;
            didx++;
          }
        }
      }
      s.colidx[c + 1] = didx;
    }
  }
}

void sparse::sparseSparseRowExpandBinOp(const emlrtStack &sp,
                                        const c_sparse &rowA, const sparse *b,
                                        sparse &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_n;
  int32_T didx;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  didx = 1;
  s.colidx[0] = 1;
  b_n = s.n;
  st.site = &hob_emlrtRSI;
  if (s.n > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T c{0}; c < b_n; c++) {
    real_T av;
    if (rowA.colidx[c] == rowA.colidx[c + 1]) {
      av = 0.0;
    } else {
      av = rowA.d[rowA.colidx[c] - 1];
    }
    if (b->colidx[0] == b->colidx[1]) {
      if (av != 0.0) {
        int32_T i;
        i = s.m;
        for (int32_T b_r{0}; b_r < i; b_r++) {
          if (av != 0.0) {
            s.d[didx - 1] = av;
            s.rowidx[didx - 1] = b_r + 1;
            didx++;
          }
        }
      }
      s.colidx[c + 1] = didx;
    } else {
      int32_T firstNonZeroRow_tmp;
      int32_T lastNonZeroRow_tmp;
      int32_T offset;
      firstNonZeroRow_tmp = b->rowidx[b->colidx[0] - 1];
      lastNonZeroRow_tmp = b->rowidx[b->colidx[1] - 2];
      if (av != 0.0) {
        st.site = &iob_emlrtRSI;
        if (firstNonZeroRow_tmp - 1 > 2147483646) {
          b_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(b_st);
        }
        for (int32_T b_r{0}; b_r <= firstNonZeroRow_tmp - 2; b_r++) {
          if (av != 0.0) {
            s.d[didx - 1] = av;
            s.rowidx[didx - 1] = b_r + 1;
            didx++;
          }
        }
      }
      offset = -1;
      st.site = &job_emlrtRSI;
      if ((firstNonZeroRow_tmp <= lastNonZeroRow_tmp) &&
          (lastNonZeroRow_tmp > 2147483646)) {
        b_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(b_st);
      }
      for (int32_T b_r{firstNonZeroRow_tmp}; b_r <= lastNonZeroRow_tmp; b_r++) {
        int32_T i;
        i = b->colidx[0] + offset;
        if (b->rowidx[i] == b_r) {
          real_T val;
          val = b->d[i] + av;
          if (val != 0.0) {
            s.d[didx - 1] = val;
            s.rowidx[didx - 1] = b_r;
            didx++;
          }
          offset++;
        } else if (av != 0.0) {
          s.d[didx - 1] = av;
          s.rowidx[didx - 1] = b_r;
          didx++;
        }
      }
      if (av != 0.0) {
        firstNonZeroRow_tmp = lastNonZeroRow_tmp + 1;
        offset = s.m;
        st.site = &kob_emlrtRSI;
        if ((lastNonZeroRow_tmp + 1 <= s.m) && (s.m > 2147483646)) {
          b_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(b_st);
        }
        for (int32_T b_r{firstNonZeroRow_tmp}; b_r <= offset; b_r++) {
          if (av != 0.0) {
            s.d[didx - 1] = av;
            s.rowidx[didx - 1] = b_r;
            didx++;
          }
        }
      }
      s.colidx[c + 1] = didx;
    }
  }
}

void sparse::assertValidIndexArg(const emlrtStack &sp,
                                 const array<int32_T, 1U> &s,
                                 array<int32_T, 1U> &sint)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T ns_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  ns_tmp = s.size(0);
  sint.set_size(&hob_emlrtRTEI, &sp, s.size(0));
  st.site = &uyc_emlrtRSI;
  if (s.size(0) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T k{0}; k < ns_tmp; k++) {
    if (s[k] >= MAX_int32_T) {
      emlrtErrorWithMessageIdR2018a(&sp, &mf_emlrtRTEI,
                                    "MATLAB:sparsfcn:largeIndex",
                                    "MATLAB:sparsfcn:largeIndex", 0);
    }
    if (s[k] <= 0) {
      emlrtErrorWithMessageIdR2018a(&sp, &lf_emlrtRTEI,
                                    "MATLAB:sparsfcn:nonPosIndex",
                                    "MATLAB:sparsfcn:nonPosIndex", 0);
    }
    sint[k] = s[k];
  }
}

void sparse::assertValidSize(const emlrtStack &sp, int32_T s)
{
  if (s < 0) {
    emlrtErrorWithMessageIdR2018a(&sp, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (s >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
}

void sparse::b_fillIn()
{
  int32_T i;
  int32_T idx;
  idx = 1;
  i = colidx.size(0);
  for (int32_T c{0}; c <= i - 2; c++) {
    int32_T ridx;
    ridx = colidx[c];
    colidx[c] = idx;
    while (ridx < colidx[c + 1]) {
      real_T val;
      int32_T currRowIdx;
      currRowIdx = rowidx[ridx - 1];
      val = d[ridx - 1];
      ridx++;
      if (val != 0.0) {
        d[idx - 1] = val;
        rowidx[idx - 1] = currRowIdx;
        idx++;
      }
    }
  }
  colidx[colidx.size(0) - 1] = idx;
}

void f_sparse::b_fillIn()
{
  int32_T i;
  int32_T idx;
  idx = 1;
  i = colidx.size(0);
  for (int32_T c{0}; c <= i - 2; c++) {
    int32_T ridx;
    ridx = colidx[c];
    colidx[c] = idx;
    while (ridx < colidx[c + 1]) {
      int32_T currRowIdx;
      boolean_T val;
      currRowIdx = rowidx[ridx - 1];
      val = d[ridx - 1];
      ridx++;
      if (val) {
        d[idx - 1] = true;
        rowidx[idx - 1] = currRowIdx;
        idx++;
      }
    }
  }
  colidx[colidx.size(0) - 1] = idx;
}

void sparse::b_parenReference(const emlrtStack &sp,
                              const array<real_T, 1U> &varargin_1,
                              sparse &s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T colNnz;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T sn;
  boolean_T found;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &drb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &rdc_emlrtRSI;
  c_st.site = &sdc_emlrtRSI;
  sparse_validateNumericIndex(c_st, m, varargin_1);
  i = varargin_1.size(0);
  sn = n;
  c_st.site = &tdc_emlrtRSI;
  if (varargin_1.size(0) * n < 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &md_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  s.d.set_size(&ny_emlrtRTEI, &c_st, 0);
  s.rowidx.set_size(&ny_emlrtRTEI, &c_st, 0);
  if (n + 1 < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(n + 1), &eb_emlrtDCI,
                                &c_st);
  }
  colNnz = n + 1;
  s.colidx.set_size(&ny_emlrtRTEI, &c_st, n + 1);
  for (i1 = 0; i1 < colNnz; i1++) {
    s.colidx[i1] = 0;
  }
  s.colidx[0] = 1;
  colNnz = 1;
  k = 0;
  d_st.site = &irb_emlrtRSI;
  if (n > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  for (int32_T cidx{0}; cidx < sn; cidx++) {
    d_st.site = &jrb_emlrtRSI;
    if (i > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (int32_T ridx{0}; ridx < i; ridx++) {
      int32_T idx;
      idx = sparse_locBsearch(rowidx, static_cast<int32_T>(varargin_1[ridx]),
                              colidx[cidx], colidx[cidx + 1], found);
      if (found) {
        real_T b_d;
        i1 = s.d.size(0);
        s.d.set_size(&oy_emlrtRTEI, &c_st, s.d.size(0) + 1);
        b_d = d[idx - 1];
        s.d[i1] = b_d;
        i1 = s.rowidx.size(0);
        s.rowidx.set_size(&oy_emlrtRTEI, &c_st, s.rowidx.size(0) + 1);
        s.rowidx[i1] = ridx + 1;
        s.d[k] = b_d;
        s.rowidx[k] = ridx + 1;
        k++;
        colNnz++;
      }
    }
    s.colidx[cidx + 1] = colNnz;
  }
  if (s.colidx[s.colidx.size(0) - 1] - 1 == 0) {
    s.rowidx.set_size(&ny_emlrtRTEI, &c_st, 1);
    s.rowidx[0] = 1;
    s.d.set_size(&ny_emlrtRTEI, &c_st, 1);
    s.d[0] = 0.0;
  }
  s.m = varargin_1.size(0);
  s.n = n;
  i = s.colidx[s.colidx.size(0) - 1] - 1;
  s.maxnz = muIntScalarMax_sint32(i, 1);
}

void b_sparse::b_rdivide(const emlrtStack &sp, real_T b, b_sparse &s) const
{
  array<real_T, 2U> S;
  array<real_T, 1U> tmpd;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
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
  st.site = &sob_emlrtRSI;
  if (0.0 / b == 0.0) {
    int32_T b_s;
    int32_T ctr;
    int32_T idx;
    int32_T numalloc;
    int32_T nzs_tmp_tmp;
    b_st.site = &tob_emlrtRSI;
    c_st.site = &wob_emlrtRSI;
    nzs_tmp_tmp = colidx[colidx.size(0) - 1];
    numalloc = nzs_tmp_tmp - 1;
    if (nzs_tmp_tmp - 1 < 1) {
      ctr = 0;
    } else {
      ctr = nzs_tmp_tmp - 1;
    }
    tmpd.set_size(&ay_emlrtRTEI, &c_st, ctr);
    b_s = (ctr / 2) << 1;
    idx = b_s - 2;
    for (int32_T i{0}; i <= idx; i += 2) {
      _mm_storeu_pd(&tmpd[i], _mm_div_pd(_mm_loadu_pd(&d[i]), _mm_set1_pd(b)));
    }
    for (int32_T i{b_s}; i < ctr; i++) {
      tmpd[i] = d[i] / b;
    }
    if (tmpd.size(0) != nzs_tmp_tmp - 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &jd_emlrtRTEI, "MATLAB:samelen",
                                    "MATLAB:samelen", 0);
    }
    d_st.site = &xob_emlrtRSI;
    e_st.site = &yhb_emlrtRSI;
    f_st.site = &eib_emlrtRSI;
    if (m < 0) {
      emlrtErrorWithMessageIdR2018a(&f_st, &mc_emlrtRTEI,
                                    "Coder:toolbox:SparseNegativeSize",
                                    "Coder:toolbox:SparseNegativeSize", 0);
    }
    if (m >= MAX_int32_T) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
          "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
    }
    s.m = m;
    f_st.site = &cib_emlrtRSI;
    if (nzs_tmp_tmp - 1 < 0) {
      emlrtErrorWithMessageIdR2018a(&f_st, &mc_emlrtRTEI,
                                    "Coder:toolbox:SparseNegativeSize",
                                    "Coder:toolbox:SparseNegativeSize", 0);
    }
    if (nzs_tmp_tmp - 1 >= MAX_int32_T) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
          "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
    }
    if (nzs_tmp_tmp - 1 < 0) {
      emlrtErrorWithMessageIdR2018a(&e_st, &kd_emlrtRTEI,
                                    "Coder:toolbox:SparseNzmaxTooSmall",
                                    "Coder:toolbox:SparseNzmaxTooSmall", 0);
    }
    numalloc = muIntScalarMax_sint32(numalloc, 1);
    s.d.set_size(&yx_emlrtRTEI, &e_st, numalloc);
    s.maxnz = numalloc;
    s.rowidx.set_size(&yx_emlrtRTEI, &e_st, numalloc);
    for (int32_T i{0}; i < numalloc; i++) {
      s.d[i] = 0.0;
      s.rowidx[i] = 0;
    }
    if (nzs_tmp_tmp - 1 < 1) {
      ctr = 1;
    } else {
      ctr = nzs_tmp_tmp;
    }
    for (int32_T i{0}; i <= ctr - 2; i++) {
      s.rowidx[i] = rowidx[i];
    }
    ctr = colidx.size(0);
    s.colidx.set_size(&yx_emlrtRTEI, &c_st, colidx.size(0));
    for (int32_T i{0}; i < ctr; i++) {
      s.colidx[i] = colidx[i];
    }
    d_st.site = &yob_emlrtRSI;
    if (nzs_tmp_tmp - 1 > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (numalloc = 0; numalloc <= nzs_tmp_tmp - 2; numalloc++) {
      s.d[numalloc] = tmpd[numalloc];
    }
    d_st.site = &apb_emlrtRSI;
    s.fillIn();
  } else {
    int32_T b_s;
    int32_T ctr;
    int32_T numalloc;
    if (m < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(m), &x_emlrtDCI, &st);
    }
    ctr = m;
    S.set_size(&xx_emlrtRTEI, &st, m, 1);
    for (int32_T i{0}; i < ctr; i++) {
      S[i] = rtNaN;
    }
    b_st.site = &uob_emlrtRSI;
    c_st.site = &bpb_emlrtRSI;
    ctr = colidx[0];
    numalloc = colidx[1];
    for (int32_T idx{ctr}; idx < numalloc; idx++) {
      S[rowidx[idx - 1] - 1] = d[idx - 1] / b;
    }
    c_st.site = &cpb_emlrtRSI;
    if ((colidx[0] <= colidx[1] - 1) && (colidx[1] - 1 > 2147483646)) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    if (m < 1) {
      b_s = 0;
    } else {
      b_s = m;
    }
    b_st.site = &vob_emlrtRSI;
    c_st.site = &qcb_emlrtRSI;
    d_st.site = &nhb_emlrtRSI;
    e_st.site = &rcb_emlrtRSI;
    if (b_s >= MAX_int32_T) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
          "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
    }
    ctr = 0;
    for (numalloc = 0; numalloc < b_s; numalloc++) {
      if (S[numalloc] != 0.0) {
        ctr++;
      }
    }
    s.m = b_s;
    numalloc = muIntScalarMax_sint32(ctr, 1);
    s.maxnz = numalloc;
    s.d.set_size(&yx_emlrtRTEI, &c_st, numalloc);
    for (int32_T i{0}; i < numalloc; i++) {
      s.d[i] = 0.0;
    }
    s.colidx.set_size(&yx_emlrtRTEI, &c_st, 2);
    s.colidx[0] = 1;
    s.rowidx.set_size(&yx_emlrtRTEI, &c_st, numalloc);
    for (int32_T i{0}; i < numalloc; i++) {
      s.rowidx[i] = 0;
    }
    s.rowidx[0] = 1;
    ctr = 0;
    d_st.site = &qhb_emlrtRSI;
    for (numalloc = 0; numalloc < b_s; numalloc++) {
      real_T b_d;
      b_d = S[numalloc];
      if (b_d != 0.0) {
        s.rowidx[ctr] = numalloc + 1;
        s.d[ctr] = b_d;
        ctr++;
      }
    }
    s.colidx[1] = ctr + 1;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void d_sparse::b_times(const emlrtStack &sp, const c_sparse &b,
                       c_sparse &s) const
{
  d_anonymous_function uniOp;
  array<real_T, 2U> S;
  array<real_T, 1U> tmpd;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
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
  st.site = &nad_emlrtRSI;
  if (colidx[colidx.size(0) - 1] - 1 > 0) {
    uniOp.workspace.sa = d[0];
  } else {
    uniOp.workspace.sa = 0.0;
  }
  if (uniOp.workspace.sa * 0.0 == 0.0) {
    int32_T b_tmp;
    int32_T col;
    int32_T loop_ub;
    int32_T n;
    int32_T numalloc;
    b_st.site = &tob_emlrtRSI;
    c_st.site = &wob_emlrtRSI;
    col = b.colidx[b.colidx.size(0) - 1];
    b_tmp = col - 1;
    if (col - 1 < 1) {
      loop_ub = 0;
    } else {
      loop_ub = col - 1;
    }
    tmpd.set_size(&ay_emlrtRTEI, &c_st, loop_ub);
    numalloc = (loop_ub / 2) << 1;
    n = numalloc - 2;
    for (int32_T i{0}; i <= n; i += 2) {
      _mm_storeu_pd(&tmpd[i], _mm_mul_pd(_mm_set1_pd(uniOp.workspace.sa),
                                         _mm_loadu_pd(&b.d[i])));
    }
    for (int32_T i{numalloc}; i < loop_ub; i++) {
      tmpd[i] = uniOp.workspace.sa * b.d[i];
    }
    if (tmpd.size(0) != col - 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &jd_emlrtRTEI, "MATLAB:samelen",
                                    "MATLAB:samelen", 0);
    }
    d_st.site = &xob_emlrtRSI;
    e_st.site = &yhb_emlrtRSI;
    f_st.site = &dib_emlrtRSI;
    if (b.n < 0) {
      emlrtErrorWithMessageIdR2018a(&f_st, &mc_emlrtRTEI,
                                    "Coder:toolbox:SparseNegativeSize",
                                    "Coder:toolbox:SparseNegativeSize", 0);
    }
    if (b.n >= MAX_int32_T) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
          "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
    }
    s.n = b.n;
    f_st.site = &cib_emlrtRSI;
    if (col - 1 < 0) {
      emlrtErrorWithMessageIdR2018a(&f_st, &mc_emlrtRTEI,
                                    "Coder:toolbox:SparseNegativeSize",
                                    "Coder:toolbox:SparseNegativeSize", 0);
    }
    if (col - 1 >= MAX_int32_T) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
          "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
    }
    if (col - 1 < 0) {
      emlrtErrorWithMessageIdR2018a(&e_st, &kd_emlrtRTEI,
                                    "Coder:toolbox:SparseNzmaxTooSmall",
                                    "Coder:toolbox:SparseNzmaxTooSmall", 0);
    }
    numalloc = muIntScalarMax_sint32(b_tmp, 1);
    s.d.set_size(&rob_emlrtRTEI, &e_st, numalloc);
    for (int32_T i{0}; i < numalloc; i++) {
      s.d[i] = 0.0;
    }
    s.maxnz = numalloc;
    s.colidx.set_size(&rob_emlrtRTEI, &e_st, b.n + 1);
    loop_ub = b.n;
    for (int32_T i{0}; i <= loop_ub; i++) {
      s.colidx[i] = 0;
    }
    s.rowidx.set_size(&rob_emlrtRTEI, &e_st, numalloc);
    for (int32_T i{0}; i < numalloc; i++) {
      s.rowidx[i] = 0;
    }
    if (col - 1 < 1) {
      loop_ub = 1;
    } else {
      loop_ub = col;
    }
    for (int32_T i{0}; i <= loop_ub - 2; i++) {
      s.rowidx[i] = b.rowidx[i];
    }
    loop_ub = b.colidx.size(0);
    s.colidx.set_size(&rob_emlrtRTEI, &c_st, b.colidx.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      s.colidx[i] = b.colidx[i];
    }
    d_st.site = &yob_emlrtRSI;
    if (col - 1 > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (numalloc = 0; numalloc <= col - 2; numalloc++) {
      s.d[numalloc] = tmpd[numalloc];
    }
    d_st.site = &apb_emlrtRSI;
    s.fillIn();
  } else {
    int32_T b_tmp;
    int32_T loop_ub;
    int32_T n;
    int32_T numalloc;
    if (b.n < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(b.n), &y_emlrtDCI, &st);
    }
    loop_ub = b.n;
    S.set_size(&xx_emlrtRTEI, &st, 1, b.n);
    for (int32_T i{0}; i < loop_ub; i++) {
      S[i] = rtNaN;
    }
    b_st.site = &uob_emlrtRSI;
    n = b.n;
    c_st.site = &bpb_emlrtRSI;
    if (b.n > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T col{0}; col < n; col++) {
      numalloc = b.colidx[col];
      b_tmp = b.colidx[col + 1];
      c_st.site = &cpb_emlrtRSI;
      if ((b.colidx[col] <= b_tmp - 1) && (b_tmp - 1 > 2147483646)) {
        d_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (loop_ub = numalloc; loop_ub < b_tmp; loop_ub++) {
        S[(b.rowidx[loop_ub - 1] + S.size(0) * col) - 1] =
            uniOp.workspace.sa * b.d[loop_ub - 1];
      }
    }
    if (b.n < 1) {
      b_tmp = 0;
    } else {
      b_tmp = b.n;
    }
    b_st.site = &vob_emlrtRSI;
    c_st.site = &qcb_emlrtRSI;
    d_st.site = &ohb_emlrtRSI;
    e_st.site = &rcb_emlrtRSI;
    n = 0;
    for (numalloc = 0; numalloc < b_tmp; numalloc++) {
      if (S[S.size(0) * numalloc] != 0.0) {
        n++;
      }
    }
    s.n = b_tmp;
    numalloc = muIntScalarMax_sint32(n, 1);
    s.maxnz = numalloc;
    s.d.set_size(&rob_emlrtRTEI, &c_st, numalloc);
    for (int32_T i{0}; i < numalloc; i++) {
      s.d[i] = 0.0;
    }
    s.colidx.set_size(&rob_emlrtRTEI, &c_st, b_tmp + 1);
    for (int32_T i{0}; i <= b_tmp; i++) {
      s.colidx[i] = 0;
    }
    s.colidx[0] = 1;
    s.rowidx.set_size(&rob_emlrtRTEI, &c_st, numalloc);
    for (int32_T i{0}; i < numalloc; i++) {
      s.rowidx[i] = 0;
    }
    s.rowidx[0] = 1;
    numalloc = 0;
    d_st.site = &phb_emlrtRSI;
    for (int32_T col{0}; col < b_tmp; col++) {
      real_T xrc;
      xrc = S[S.size(0) * col];
      if (xrc != 0.0) {
        s.rowidx[numalloc] = 1;
        s.d[numalloc] = xrc;
        numalloc++;
      }
      s.colidx[col + 1] = numalloc + 1;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sparse::b_vertcat(const emlrtStack &sp, const c_sparse &varargin_2,
                       sparse &c) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T cncols;
  int32_T cnrows;
  int32_T nzCount;
  boolean_T emptyflag_idx_0;
  boolean_T emptyflag_idx_1;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &rhb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  nzCount = sparse_catCheck(st, this, varargin_2, cnrows, cncols);
  st.site = &shb_emlrtRSI;
  b_st.site = &vhb_emlrtRSI;
  c_st.site = &whb_emlrtRSI;
  sparse::spallocLike(c_st, cnrows, cncols, nzCount, c);
  nzCount = -1;
  if ((m == 0) || (n == 0)) {
    emptyflag_idx_0 = true;
  } else {
    emptyflag_idx_0 = false;
  }
  emptyflag_idx_1 = (varargin_2.n == 0);
  cnrows = c.n;
  c_st.site = &xhb_emlrtRSI;
  if (c.n > 2147483646) {
    d_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (int32_T ccol{0}; ccol < cnrows; ccol++) {
    if (!emptyflag_idx_0) {
      c_st.site = &unb_emlrtRSI;
    }
    if (!emptyflag_idx_1) {
      int32_T kpend;
      cncols = varargin_2.colidx[ccol];
      kpend = varargin_2.colidx[ccol + 1];
      c_st.site = &unb_emlrtRSI;
      if ((cncols <= varargin_2.colidx[ccol + 1] - 1) &&
          (varargin_2.colidx[ccol + 1] - 1 > 2147483646)) {
        d_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (int32_T kp{cncols}; kp < kpend; kp++) {
        int32_T i;
        i = ((nzCount + kp) - cncols) + 1;
        c.rowidx[i] = 1;
        c.d[i] = varargin_2.d[kp - 1];
      }
      nzCount = (nzCount + varargin_2.colidx[ccol + 1]) - cncols;
    }
    c.colidx[ccol + 1] = nzCount + 2;
  }
}

void sparse::c_plus(const emlrtStack &sp, const c_sparse &b, sparse &s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T k;
  boolean_T x[2];
  boolean_T exitg1;
  boolean_T moreAToDo;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &wnb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if ((n != 1) && (b.n != 1) && (n != b.n)) {
    emlrtErrorWithMessageIdR2018a(&st, &gd_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  b_st.site = &xnb_emlrtRSI;
  sparse::allocEqsizeBinop(b_st, this, b, muIntScalarMax_sint32(n, b.n),
                           muIntScalarMax_sint32(m, 1), s);
  x[0] = (m == 1);
  x[1] = (n == b.n);
  moreAToDo = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!x[k]) {
      moreAToDo = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (moreAToDo) {
    int32_T b_n;
    int32_T didx;
    b_st.site = &ynb_emlrtRSI;
    didx = 1;
    s.colidx[0] = 1;
    b_n = s.n;
    c_st.site = &gob_emlrtRSI;
    if (s.n > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T c{0}; c < b_n; c++) {
      int32_T aidx;
      int32_T bidx;
      boolean_T moreBToDo;
      aidx = colidx[c] - 1;
      bidx = b.colidx[c];
      k = colidx[c + 1];
      moreAToDo = (colidx[c] < k);
      moreBToDo = (bidx < b.colidx[c + 1]);
      while (moreAToDo || moreBToDo) {
        real_T val;
        while ((aidx + 1 < k) && ((!moreBToDo) || (rowidx[aidx] < 1))) {
          if (d[aidx] != 0.0) {
            s.d[didx - 1] = d[aidx];
            s.rowidx[didx - 1] = rowidx[aidx];
            didx++;
          }
          aidx++;
        }
        moreAToDo = (aidx + 1 < k);
        while ((bidx < b.colidx[c + 1]) &&
               ((!moreAToDo) || (rowidx[aidx] > 1))) {
          val = b.d[bidx - 1];
          if (val != 0.0) {
            s.d[didx - 1] = val;
            s.rowidx[didx - 1] = 1;
            didx++;
          }
          bidx++;
        }
        while ((aidx + 1 < k) && (bidx < b.colidx[c + 1]) &&
               (rowidx[aidx] == 1)) {
          val = d[aidx] + b.d[bidx - 1];
          if (val != 0.0) {
            s.d[didx - 1] = val;
            s.rowidx[didx - 1] = 1;
            didx++;
          }
          bidx++;
          aidx++;
        }
        moreAToDo = (aidx + 1 < k);
        moreBToDo = (bidx < b.colidx[c + 1]);
      }
      s.colidx[c + 1] = didx;
    }
  } else if (n == 1) {
    b_st.site = &aob_emlrtRSI;
    sparse::sparseSparseRowExpandBinOp(b_st, b, this, s);
  } else if (b.n == 1) {
    if (m == 1) {
      b_st.site = &bob_emlrtRSI;
      sparse::sparseSparseRowExpandBinOp(b_st, this, b, s);
    } else {
      int32_T b_n;
      int32_T didx;
      b_st.site = &cob_emlrtRSI;
      didx = 1;
      s.colidx[0] = 1;
      b_n = s.n;
      c_st.site = &gob_emlrtRSI;
      if (s.n > 2147483646) {
        d_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (int32_T c{0}; c < b_n; c++) {
        int32_T aidx;
        int32_T bidx;
        boolean_T moreBToDo;
        aidx = b.colidx[0];
        k = colidx[c];
        bidx = k - 1;
        moreAToDo = (b.colidx[0] < b.colidx[1]);
        moreBToDo = (k < colidx[c + 1]);
        while (moreAToDo || moreBToDo) {
          real_T val;
          while ((aidx < b.colidx[1]) && ((!moreBToDo) || (rowidx[bidx] > 1))) {
            val = b.d[aidx - 1];
            if (val != 0.0) {
              s.d[didx - 1] = val;
              s.rowidx[didx - 1] = 1;
              didx++;
            }
            aidx++;
          }
          moreAToDo = (aidx < b.colidx[1]);
          while ((bidx + 1 < colidx[c + 1]) &&
                 ((!moreAToDo) || (rowidx[bidx] < 1))) {
            if (d[bidx] != 0.0) {
              s.d[didx - 1] = d[bidx];
              s.rowidx[didx - 1] = rowidx[bidx];
              didx++;
            }
            bidx++;
          }
          while ((aidx < b.colidx[1]) && (bidx + 1 < colidx[c + 1]) &&
                 (rowidx[bidx] == 1)) {
            val = d[bidx] + b.d[aidx - 1];
            if (val != 0.0) {
              s.d[didx - 1] = val;
              s.rowidx[didx - 1] = rowidx[bidx];
              didx++;
            }
            bidx++;
            aidx++;
          }
          moreAToDo = (aidx < b.colidx[1]);
          moreBToDo = (bidx + 1 < colidx[c + 1]);
        }
        s.colidx[c + 1] = didx;
      }
    }
  } else if (m == 1) {
    b_st.site = &dob_emlrtRSI;
    sparse::b_sparseSparseRowExpandBinOp(b_st, this, b, s);
  } else {
    b_st.site = &eob_emlrtRSI;
    sparse::b_sparseSparseRowExpandBinOp(b_st, b, this, s);
  }
}

void b_sparse::c_plus(const emlrtStack &sp, array<real_T, 1U> &s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T b;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &wnb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  s.set_size(&unb_emlrtRTEI, &st, m);
  loop_ub = m;
  for (b = 0; b < loop_ub; b++) {
    s[b] = 2.2204460492503131E-16;
  }
  b_st.site = &qwc_emlrtRSI;
  loop_ub = colidx[0];
  b = colidx[1];
  c_st.site = &cpb_emlrtRSI;
  if ((colidx[0] <= colidx[1] - 1) && (colidx[1] - 1 > 2147483646)) {
    d_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (int32_T idx{loop_ub}; idx < b; idx++) {
    s[rowidx[idx - 1] - 1] = d[idx - 1] + 2.2204460492503131E-16;
  }
}

void sparse::c_vertcat(const emlrtStack &sp, const c_sparse &varargin_2,
                       sparse &c) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T cnfixeddim;
  int32_T cnnz;
  int32_T cnvardim;
  int32_T i;
  boolean_T allEmpty;
  boolean_T foundSize_tmp;
  boolean_T isAcceptableEmpty_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &rhb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  cnfixeddim = n;
  if ((m == 0) || (n == 0)) {
    allEmpty = true;
  } else {
    allEmpty = false;
  }
  foundSize_tmp = !allEmpty;
  isAcceptableEmpty_tmp = (varargin_2.n == 0);
  allEmpty = (allEmpty && isAcceptableEmpty_tmp);
  if ((!isAcceptableEmpty_tmp) && foundSize_tmp && (varargin_2.n != n)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &wc_emlrtRTEI, "Coder:toolbox:ConcatenationDimensionMismatch",
        "Coder:toolbox:ConcatenationDimensionMismatch", 6, 12, 2, 12, 2, 12, n);
  }
  isAcceptableEmpty_tmp = !isAcceptableEmpty_tmp;
  if (isAcceptableEmpty_tmp && (!foundSize_tmp)) {
    cnfixeddim = varargin_2.n;
  }
  cnnz = 0;
  cnvardim = 0;
  if (allEmpty || foundSize_tmp) {
    cnnz = colidx[colidx.size(0) - 1] - 1;
    cnvardim = m;
  }
  if (allEmpty || isAcceptableEmpty_tmp) {
    b_st.site = &thb_emlrtRSI;
    i = varargin_2.colidx[varargin_2.colidx.size(0) - 1];
    if (cnnz > MIN_int32_T - i) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &xc_emlrtRTEI, "Coder:toolbox:SparseCatTooBig",
          "Coder:toolbox:SparseCatTooBig", 3, 4, 8, "nonzeros");
    }
    cnnz = (cnnz + i) - 1;
    b_st.site = &uhb_emlrtRSI;
    if (cnvardim > 2147483646) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &xc_emlrtRTEI, "Coder:toolbox:SparseCatTooBig",
          "Coder:toolbox:SparseCatTooBig", 3, 4, 4, "rows");
    }
    cnvardim++;
  }
  st.site = &shb_emlrtRSI;
  b_st.site = &vhb_emlrtRSI;
  c_st.site = &whb_emlrtRSI;
  sparse::spallocLike(c_st, cnvardim, cnfixeddim, cnnz, c);
  cnfixeddim = -1;
  if ((m == 0) || (n == 0)) {
    allEmpty = true;
  } else {
    allEmpty = false;
  }
  cnnz = c.n;
  c_st.site = &xhb_emlrtRSI;
  if (c.n > 2147483646) {
    d_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (int32_T ccol{0}; ccol < cnnz; ccol++) {
    int32_T kpend;
    int32_T kpstart_tmp;
    cnvardim = 0;
    if (!allEmpty) {
      kpstart_tmp = colidx[ccol];
      kpend = colidx[ccol + 1];
      c_st.site = &unb_emlrtRSI;
      if ((kpstart_tmp <= colidx[ccol + 1] - 1) &&
          (colidx[ccol + 1] - 1 > 2147483646)) {
        d_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (int32_T kp{kpstart_tmp}; kp < kpend; kp++) {
        i = ((cnfixeddim + kp) - kpstart_tmp) + 1;
        c.rowidx[i] = rowidx[kp - 1];
        c.d[i] = d[kp - 1];
      }
      cnfixeddim = (cnfixeddim + colidx[ccol + 1]) - kpstart_tmp;
      cnvardim = m;
    }
    if (isAcceptableEmpty_tmp) {
      kpstart_tmp = varargin_2.colidx[ccol];
      kpend = varargin_2.colidx[ccol + 1];
      c_st.site = &unb_emlrtRSI;
      if ((kpstart_tmp <= varargin_2.colidx[ccol + 1] - 1) &&
          (varargin_2.colidx[ccol + 1] - 1 > 2147483646)) {
        d_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (int32_T kp{kpstart_tmp}; kp < kpend; kp++) {
        i = ((cnfixeddim + kp) - kpstart_tmp) + 1;
        c.rowidx[i] = varargin_2.rowidx[kp - 1] + cnvardim;
        c.d[i] = varargin_2.d[kp - 1];
      }
      cnfixeddim = (cnfixeddim + varargin_2.colidx[ccol + 1]) - kpstart_tmp;
    }
    c.colidx[ccol + 1] = cnfixeddim + 2;
  }
}

void f_sparse::ctranspose(const emlrtStack &sp, f_sparse &y) const
{
  array<int32_T, 1U> counts;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b_tmp;
  int32_T loop_ub_tmp;
  int32_T nl;
  int32_T numalloc;
  int32_T outridx;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &vwc_emlrtRSI;
  nl = n;
  outridx = colidx[colidx.size(0) - 1];
  b_st.site = &wwc_emlrtRSI;
  c_st.site = &eib_emlrtRSI;
  if (n < 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (n >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  c_st.site = &dib_emlrtRSI;
  if (m < 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (m >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  y.m = n;
  y.n = m;
  c_st.site = &cib_emlrtRSI;
  if (outridx - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (outridx - 1 >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  if (outridx - 1 < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &kd_emlrtRTEI,
                                  "Coder:toolbox:SparseNzmaxTooSmall",
                                  "Coder:toolbox:SparseNzmaxTooSmall", 0);
  }
  if (outridx - 1 >= 1) {
    numalloc = outridx - 2;
  } else {
    numalloc = 0;
  }
  y.d.set_size(&qnb_emlrtRTEI, &b_st, numalloc + 1);
  for (int32_T c{0}; c <= numalloc; c++) {
    y.d[c] = false;
  }
  b_tmp = m + 1;
  y.colidx.set_size(&qnb_emlrtRTEI, &b_st, b_tmp);
  loop_ub_tmp = m;
  for (int32_T c{0}; c <= loop_ub_tmp; c++) {
    y.colidx[c] = 0;
  }
  y.colidx[0] = 1;
  y.rowidx.set_size(&qnb_emlrtRTEI, &b_st, numalloc + 1);
  for (int32_T c{0}; c <= numalloc; c++) {
    y.rowidx[c] = 0;
  }
  for (int32_T c{0}; c < loop_ub_tmp; c++) {
    y.colidx[c + 1] = 1;
  }
  y.fillIn();
  if ((m != 0) && (n != 0)) {
    int32_T y_idx_0;
    y_idx_0 = y.colidx.size(0);
    for (int32_T c{0}; c < y_idx_0; c++) {
      y.colidx[c] = 0;
    }
    b_st.site = &ywc_emlrtRSI;
    if (outridx - 1 > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (numalloc = 0; numalloc <= outridx - 2; numalloc++) {
      y.colidx[rowidx[numalloc]] = y.colidx[rowidx[numalloc]] + 1;
    }
    y.colidx[0] = 1;
    b_st.site = &axc_emlrtRSI;
    if (b_tmp > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (numalloc = 2; numalloc <= b_tmp; numalloc++) {
      y.colidx[numalloc - 1] = y.colidx[numalloc - 1] + y.colidx[numalloc - 2];
    }
    counts.set_size(&rnb_emlrtRTEI, &st, m);
    for (int32_T c{0}; c < loop_ub_tmp; c++) {
      counts[c] = 0;
    }
    b_st.site = &xwc_emlrtRSI;
    for (int32_T c{0}; c < nl; c++) {
      for (numalloc = colidx[c] - 1; numalloc + 1 < colidx[c + 1]; numalloc++) {
        y_idx_0 = counts[rowidx[numalloc] - 1];
        outridx = (y_idx_0 + y.colidx[rowidx[numalloc] - 1]) - 1;
        y.d[outridx] = d[numalloc];
        y.rowidx[outridx] = c + 1;
        counts[rowidx[numalloc] - 1] = y_idx_0 + 1;
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void b_sparse::fillIn()
{
  int32_T i;
  int32_T idx;
  idx = 1;
  i = colidx.size(0);
  for (int32_T c{0}; c <= i - 2; c++) {
    int32_T ridx;
    ridx = colidx[c];
    colidx[c] = idx;
    while (ridx < colidx[c + 1]) {
      real_T val;
      int32_T currRowIdx;
      currRowIdx = rowidx[ridx - 1];
      val = d[ridx - 1];
      ridx++;
      if (val != 0.0) {
        d[idx - 1] = val;
        rowidx[idx - 1] = currRowIdx;
        idx++;
      }
    }
  }
  colidx[colidx.size(0) - 1] = idx;
}

void c_sparse::fillIn()
{
  int32_T i;
  int32_T idx;
  idx = 1;
  i = colidx.size(0);
  for (int32_T c{0}; c <= i - 2; c++) {
    int32_T ridx;
    ridx = colidx[c];
    colidx[c] = idx;
    while (ridx < colidx[c + 1]) {
      real_T val;
      int32_T currRowIdx;
      currRowIdx = rowidx[ridx - 1];
      val = d[ridx - 1];
      ridx++;
      if (val != 0.0) {
        d[idx - 1] = val;
        rowidx[idx - 1] = currRowIdx;
        idx++;
      }
    }
  }
  colidx[colidx.size(0) - 1] = idx;
}

void d_sparse::fillIn()
{
  int32_T i;
  int32_T idx;
  idx = 1;
  i = colidx.size(0);
  for (int32_T c{0}; c <= i - 2; c++) {
    int32_T ridx;
    ridx = colidx[c];
    colidx[c] = idx;
    while (ridx < colidx[c + 1]) {
      real_T val;
      int32_T currRowIdx;
      val = 0.0;
      currRowIdx = rowidx[ridx - 1];
      while ((ridx < colidx[c + 1]) && (rowidx[ridx - 1] == currRowIdx)) {
        val += d[ridx - 1];
        ridx++;
      }
      if (val != 0.0) {
        d[idx - 1] = val;
        rowidx[idx - 1] = currRowIdx;
        idx++;
      }
    }
  }
  colidx[colidx.size(0) - 1] = idx;
}

void sparse::fillIn()
{
  int32_T i;
  int32_T idx;
  idx = 1;
  i = colidx.size(0);
  for (int32_T c{0}; c <= i - 2; c++) {
    int32_T ridx;
    ridx = colidx[c];
    colidx[c] = idx;
    while (ridx < colidx[c + 1]) {
      real_T val;
      int32_T currRowIdx;
      val = 0.0;
      currRowIdx = rowidx[ridx - 1];
      while ((ridx < colidx[c + 1]) && (rowidx[ridx - 1] == currRowIdx)) {
        val += d[ridx - 1];
        ridx++;
      }
      if (val != 0.0) {
        d[idx - 1] = val;
        rowidx[idx - 1] = currRowIdx;
        idx++;
      }
    }
  }
  colidx[colidx.size(0) - 1] = idx;
}

void b_sparse::full(const emlrtStack &sp, array<real_T, 1U> &y) const
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T a;
  int32_T cend;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  y.set_size(&by_emlrtRTEI, &sp, m);
  cend = m;
  for (a = 0; a < cend; a++) {
    y[a] = 0.0;
  }
  cend = colidx[1];
  a = colidx[0];
  st.site = &tnb_emlrtRSI;
  if ((colidx[0] <= colidx[1] - 1) && (colidx[1] - 1 > 2147483646)) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T idx{a}; idx < cend; idx++) {
    y[rowidx[idx - 1] - 1] = d[idx - 1];
  }
}

void b_sparse::ge(const emlrtStack &sp, real_T b, g_sparse &s) const
{
  array<boolean_T, 1U> S;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
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
  st.site = &pwc_emlrtRSI;
  if (!(b <= 0.0)) {
    int32_T ctr;
    int32_T idx;
    int32_T loop_ub;
    int32_T numalloc;
    b_st.site = &tob_emlrtRSI;
    c_st.site = &wob_emlrtRSI;
    ctr = colidx[colidx.size(0) - 1];
    if (ctr - 1 < 1) {
      loop_ub = 0;
    } else {
      loop_ub = ctr - 1;
    }
    S.set_size(&ay_emlrtRTEI, &c_st, loop_ub);
    for (int32_T c{0}; c < loop_ub; c++) {
      S[c] = (d[c] >= b);
    }
    if (S.size(0) != ctr - 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &jd_emlrtRTEI, "MATLAB:samelen",
                                    "MATLAB:samelen", 0);
    }
    d_st.site = &xob_emlrtRSI;
    e_st.site = &yhb_emlrtRSI;
    f_st.site = &eib_emlrtRSI;
    if (m < 0) {
      emlrtErrorWithMessageIdR2018a(&f_st, &mc_emlrtRTEI,
                                    "Coder:toolbox:SparseNegativeSize",
                                    "Coder:toolbox:SparseNegativeSize", 0);
    }
    if (m >= MAX_int32_T) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
          "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
    }
    s.m = m;
    f_st.site = &cib_emlrtRSI;
    if (ctr - 1 < 0) {
      emlrtErrorWithMessageIdR2018a(&f_st, &mc_emlrtRTEI,
                                    "Coder:toolbox:SparseNegativeSize",
                                    "Coder:toolbox:SparseNegativeSize", 0);
    }
    if (ctr - 1 >= MAX_int32_T) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
          "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
    }
    if (ctr - 1 < 0) {
      emlrtErrorWithMessageIdR2018a(&e_st, &kd_emlrtRTEI,
                                    "Coder:toolbox:SparseNzmaxTooSmall",
                                    "Coder:toolbox:SparseNzmaxTooSmall", 0);
    }
    if (ctr - 1 >= 1) {
      numalloc = ctr - 2;
    } else {
      numalloc = 0;
    }
    s.d.set_size(&vnb_emlrtRTEI, &e_st, numalloc + 1);
    for (int32_T c{0}; c <= numalloc; c++) {
      s.d[c] = false;
    }
    s.colidx.set_size(&vnb_emlrtRTEI, &e_st, 2);
    s.rowidx.set_size(&vnb_emlrtRTEI, &e_st, numalloc + 1);
    for (int32_T c{0}; c <= numalloc; c++) {
      s.rowidx[c] = 0;
    }
    s.colidx[1] = 1;
    s.colidx[0] = 1;
    if (ctr - 1 < 1) {
      loop_ub = 1;
    } else {
      loop_ub = ctr;
    }
    for (int32_T c{0}; c <= loop_ub - 2; c++) {
      s.rowidx[c] = rowidx[c];
    }
    loop_ub = colidx.size(0);
    s.colidx.set_size(&vnb_emlrtRTEI, &c_st, colidx.size(0));
    for (int32_T c{0}; c < loop_ub; c++) {
      s.colidx[c] = colidx[c];
    }
    d_st.site = &yob_emlrtRSI;
    if (ctr - 1 > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (numalloc = 0; numalloc <= ctr - 2; numalloc++) {
      s.d[numalloc] = S[numalloc];
    }
    d_st.site = &apb_emlrtRSI;
    idx = 1;
    e_st.site = &fib_emlrtRSI;
    for (int32_T c{0}; c <= loop_ub - 2; c++) {
      ctr = s.colidx[c];
      s.colidx[c] = idx;
      while (ctr < s.colidx[c + 1]) {
        boolean_T val;
        numalloc = s.rowidx[ctr - 1];
        val = s.d[ctr - 1];
        ctr++;
        if (val) {
          s.d[idx - 1] = true;
          s.rowidx[idx - 1] = numalloc;
          idx++;
        }
      }
    }
    s.colidx[colidx.size(0) - 1] = idx;
  } else {
    int32_T ctr;
    int32_T loop_ub;
    int32_T numalloc;
    if (m < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(m), &gc_emlrtDCI, &st);
    }
    loop_ub = m;
    S.set_size(&unb_emlrtRTEI, &st, m);
    for (int32_T c{0}; c < loop_ub; c++) {
      S[c] = true;
    }
    b_st.site = &qwc_emlrtRSI;
    ctr = colidx[0];
    numalloc = colidx[1];
    c_st.site = &cpb_emlrtRSI;
    if ((colidx[0] <= colidx[1] - 1) && (colidx[1] - 1 > 2147483646)) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T idx{ctr}; idx < numalloc; idx++) {
      S[rowidx[idx - 1] - 1] = (d[idx - 1] >= b);
    }
    b_st.site = &rwc_emlrtRSI;
    c_st.site = &qcb_emlrtRSI;
    loop_ub = S.size(0);
    d_st.site = &nhb_emlrtRSI;
    e_st.site = &rcb_emlrtRSI;
    if (S.size(0) >= MAX_int32_T) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
          "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
    }
    ctr = 0;
    for (numalloc = 0; numalloc < loop_ub; numalloc++) {
      if (S[numalloc]) {
        ctr++;
      }
    }
    s.m = S.size(0);
    numalloc = muIntScalarMax_sint32(ctr, 1);
    s.d.set_size(&vnb_emlrtRTEI, &c_st, numalloc);
    for (int32_T c{0}; c < numalloc; c++) {
      s.d[c] = false;
    }
    s.colidx.set_size(&vnb_emlrtRTEI, &c_st, 2);
    s.colidx[0] = 1;
    s.rowidx.set_size(&vnb_emlrtRTEI, &c_st, numalloc);
    for (int32_T c{0}; c < numalloc; c++) {
      s.rowidx[c] = 0;
    }
    s.rowidx[0] = 1;
    ctr = 0;
    d_st.site = &qhb_emlrtRSI;
    for (numalloc = 0; numalloc < loop_ub; numalloc++) {
      if (S[numalloc]) {
        s.rowidx[ctr] = numalloc + 1;
        s.d[ctr] = true;
        ctr++;
      }
    }
    s.colidx[1] = ctr + 1;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void f_sparse::h_and(const emlrtStack &sp, const f_sparse &b, f_sparse &s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T nza;
  int32_T nzb;
  int32_T y;
  boolean_T x[2];
  boolean_T av;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &twc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (((m != 1) && (b.m != 1) && (m != b.m)) ||
      ((n != 1) && (b.n != 1) && (n != b.n))) {
    emlrtErrorWithMessageIdR2018a(&st, &gd_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  y = muIntScalarMax_sint32(n, b.n);
  b_st.site = &xnb_emlrtRSI;
  nza = colidx[colidx.size(0) - 1] - 1;
  nzb = b.colidx[b.colidx.size(0) - 1] - 1;
  if ((m != b.m) || (n != b.n)) {
    if (n == 1) {
      nza *= b.n;
    } else if (m == 1) {
      nza *= b.m;
    }
    if (b.n == 1) {
      nzb *= n;
    }
  }
  nza = muIntScalarMin_sint32(nza, nzb);
  if (nza < 1) {
    nza = 1;
  }
  c_st.site = &fob_emlrtRSI;
  s.m = muIntScalarMax_sint32(m, b.m);
  s.n = y;
  s.d.set_size(&px_emlrtRTEI, &c_st, nza);
  s.rowidx.set_size(&qx_emlrtRTEI, &c_st, nza);
  if (y + 1 < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(y + 1), &w_emlrtDCI, &c_st);
  }
  s.colidx.set_size(&rx_emlrtRTEI, &c_st, y + 1);
  x[0] = (m == b.m);
  x[1] = (n == b.n);
  av = true;
  nza = 0;
  exitg1 = false;
  while ((!exitg1) && (nza < 2)) {
    if (!x[nza]) {
      av = false;
      exitg1 = true;
    } else {
      nza++;
    }
  }
  if (av) {
    b_st.site = &ynb_emlrtRSI;
    sparse::sparseSparseEqHeightBinOp(b_st, this, b, s);
  } else if (n == 1) {
    if (b.m == 1) {
      b_st.site = &aob_emlrtRSI;
      nza = 1;
      s.colidx[0] = 1;
      c_st.site = &hob_emlrtRSI;
      if (y > 2147483646) {
        d_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (int32_T c{0}; c < y; c++) {
        if (b.colidx[c] == b.colidx[c + 1]) {
          av = false;
        } else {
          av = b.d[b.colidx[c] - 1];
        }
        if (colidx[0] == colidx[1]) {
          s.colidx[c + 1] = nza;
        } else {
          int32_T lastNonZeroRow_tmp;
          int32_T offset;
          nzb = rowidx[colidx[0] - 1];
          lastNonZeroRow_tmp = rowidx[colidx[1] - 2];
          offset = -1;
          c_st.site = &job_emlrtRSI;
          if ((nzb <= lastNonZeroRow_tmp) &&
              (lastNonZeroRow_tmp > 2147483646)) {
            d_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(d_st);
          }
          for (int32_T b_r{nzb}; b_r <= lastNonZeroRow_tmp; b_r++) {
            int32_T i;
            i = colidx[0] + offset;
            if (rowidx[i] == b_r) {
              if (d[i] && av) {
                s.d[nza - 1] = true;
                s.rowidx[nza - 1] = b_r;
                nza++;
              }
              offset++;
            }
          }
          s.colidx[c + 1] = nza;
        }
      }
    } else {
      b_st.site = &uwc_emlrtRSI;
      sparse::b_sparseSparseEqHeightBinOp(b_st, this, b, s);
    }
  } else if (b.n == 1) {
    if (m == 1) {
      b_st.site = &bob_emlrtRSI;
      nza = 1;
      s.colidx[0] = 1;
      c_st.site = &hob_emlrtRSI;
      if (y > 2147483646) {
        d_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (int32_T c{0}; c < y; c++) {
        if (colidx[c] == colidx[c + 1]) {
          av = false;
        } else {
          av = d[colidx[c] - 1];
        }
        if (b.colidx[0] == b.colidx[1]) {
          s.colidx[c + 1] = nza;
        } else {
          int32_T lastNonZeroRow_tmp;
          int32_T offset;
          nzb = b.rowidx[b.colidx[0] - 1];
          lastNonZeroRow_tmp = b.rowidx[b.colidx[1] - 2];
          offset = -1;
          c_st.site = &job_emlrtRSI;
          if ((nzb <= lastNonZeroRow_tmp) &&
              (lastNonZeroRow_tmp > 2147483646)) {
            d_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(d_st);
          }
          for (int32_T b_r{nzb}; b_r <= lastNonZeroRow_tmp; b_r++) {
            int32_T i;
            i = b.colidx[0] + offset;
            if (b.rowidx[i] == b_r) {
              if (av && b.d[i]) {
                s.d[nza - 1] = true;
                s.rowidx[nza - 1] = b_r;
                nza++;
              }
              offset++;
            }
          }
          s.colidx[c + 1] = nza;
        }
      }
    } else {
      b_st.site = &cob_emlrtRSI;
      sparse::sparseSparseEqHeightBinOp(b_st, b, this, s);
    }
  } else if (m == 1) {
    b_st.site = &dob_emlrtRSI;
    sparse::sparseSparseRowExpandBinOp(b_st, this, b, s);
  } else if (b.m == 1) {
    b_st.site = &eob_emlrtRSI;
    sparse::sparseSparseRowExpandBinOp(b_st, b, this, s);
  }
}

void b_sparse::h_and(const emlrtStack &sp, const f_sparse &b, f_sparse &s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T bidx;
  int32_T nza;
  int32_T y;
  boolean_T x[2];
  boolean_T exitg1;
  boolean_T moreAToDo;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &twc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if ((m != 1) && (b.m != 1) && (m != b.m)) {
    emlrtErrorWithMessageIdR2018a(&st, &gd_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (b.n <= 1) {
    y = 1;
  } else {
    y = b.n;
  }
  b_st.site = &xnb_emlrtRSI;
  nza = colidx[colidx.size(0) - 1] - 1;
  bidx = b.colidx[b.colidx.size(0) - 1] - 1;
  if ((m != b.m) || (b.n != 1)) {
    nza *= b.n;
  }
  nza = muIntScalarMin_sint32(nza, bidx);
  if (nza < 1) {
    nza = 1;
  }
  c_st.site = &fob_emlrtRSI;
  s.m = muIntScalarMax_sint32(m, b.m);
  s.n = y;
  s.d.set_size(&px_emlrtRTEI, &c_st, nza);
  s.rowidx.set_size(&qx_emlrtRTEI, &c_st, nza);
  if (y + 1 < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(y + 1), &w_emlrtDCI, &c_st);
  }
  s.colidx.set_size(&rx_emlrtRTEI, &c_st, y + 1);
  x[0] = (m == b.m);
  x[1] = (b.n == 1);
  moreAToDo = true;
  nza = 0;
  exitg1 = false;
  while ((!exitg1) && (nza < 2)) {
    if (!x[nza]) {
      moreAToDo = false;
      exitg1 = true;
    } else {
      nza++;
    }
  }
  if (moreAToDo) {
    b_st.site = &ynb_emlrtRSI;
    sparse::sparseSparseEqHeightBinOp(b_st, this, b, s);
  } else if (b.m == 1) {
    int32_T didx;
    b_st.site = &aob_emlrtRSI;
    c_st.site = &gxc_emlrtRSI;
    d_st.site = &ecb_emlrtRSI;
    didx = 1;
    s.colidx[0] = 1;
    c_st.site = &hob_emlrtRSI;
    if (y > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T c{0}; c < y; c++) {
      if (b.colidx[c] == b.colidx[c + 1]) {
        moreAToDo = false;
      } else {
        moreAToDo = b.d[b.colidx[c] - 1];
      }
      c_st.site = &fxc_emlrtRSI;
      d_st.site = &ecb_emlrtRSI;
      if (colidx[0] == colidx[1]) {
        s.colidx[c + 1] = didx;
      } else {
        int32_T offset;
        nza = rowidx[colidx[0] - 1];
        bidx = rowidx[colidx[1] - 2];
        offset = -1;
        c_st.site = &job_emlrtRSI;
        if ((nza <= bidx) && (bidx > 2147483646)) {
          d_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(d_st);
        }
        for (int32_T b_r{nza}; b_r <= bidx; b_r++) {
          int32_T i;
          i = colidx[0] + offset;
          if (rowidx[i] == b_r) {
            real_T b_y;
            b_y = d[i];
            c_st.site = &exc_emlrtRSI;
            d_st.site = &ecb_emlrtRSI;
            e_st.site = &dxc_emlrtRSI;
            if (muDoubleScalarIsNaN(b_y)) {
              emlrtErrorWithMessageIdR2018a(&e_st, &df_emlrtRTEI,
                                            "MATLAB:nologicalnan",
                                            "MATLAB:nologicalnan", 0);
            }
            if ((b_y != 0.0) && moreAToDo) {
              s.d[didx - 1] = true;
              s.rowidx[didx - 1] = b_r;
              didx++;
            }
            offset++;
          }
        }
        s.colidx[c + 1] = didx;
      }
    }
  } else {
    int32_T didx;
    b_st.site = &uwc_emlrtRSI;
    didx = 1;
    s.colidx[0] = 1;
    c_st.site = &gob_emlrtRSI;
    if (y > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T c{0}; c < y; c++) {
      int32_T offset;
      boolean_T moreBToDo;
      nza = colidx[0] - 1;
      bidx = b.colidx[c] - 1;
      moreAToDo = (colidx[0] < colidx[1]);
      offset = b.colidx[c + 1];
      moreBToDo = (b.colidx[c] < offset);
      while (moreAToDo || moreBToDo) {
        while ((nza + 1 < colidx[1]) &&
               ((!moreBToDo) || (rowidx[nza] < b.rowidx[bidx]))) {
          c_st.site = &bxc_emlrtRSI;
          if (muDoubleScalarIsNaN(d[nza])) {
            emlrtErrorWithMessageIdR2018a(&c_st, &df_emlrtRTEI,
                                          "MATLAB:nologicalnan",
                                          "MATLAB:nologicalnan", 0);
          }
          nza++;
        }
        moreAToDo = (nza + 1 < colidx[1]);
        while ((bidx + 1 < offset) &&
               ((!moreAToDo) || (b.rowidx[bidx] < rowidx[nza]))) {
          bidx++;
        }
        while ((nza + 1 < colidx[1]) && (bidx + 1 < offset) &&
               (rowidx[nza] == b.rowidx[bidx])) {
          c_st.site = &cxc_emlrtRSI;
          if (muDoubleScalarIsNaN(d[nza])) {
            emlrtErrorWithMessageIdR2018a(&c_st, &df_emlrtRTEI,
                                          "MATLAB:nologicalnan",
                                          "MATLAB:nologicalnan", 0);
          }
          if ((d[nza] != 0.0) && b.d[bidx]) {
            s.d[didx - 1] = true;
            s.rowidx[didx - 1] = b.rowidx[bidx];
            didx++;
          }
          bidx++;
          nza++;
        }
        moreAToDo = (nza + 1 < colidx[1]);
        moreBToDo = (bidx + 1 < offset);
      }
      s.colidx[c + 1] = didx;
    }
  }
}

void sparse::horzcat(const emlrtStack &sp, const b_sparse &varargin_2,
                     sparse &c) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T ccolidx;
  int32_T cnfixeddim;
  int32_T cnvardim;
  int32_T i;
  boolean_T allEmpty;
  boolean_T b_isAcceptableEmpty_tmp;
  boolean_T foundSize_tmp;
  boolean_T isAcceptableEmpty_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kkb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  cnfixeddim = m;
  if ((m == 0) || (n == 0)) {
    isAcceptableEmpty_tmp = true;
  } else {
    isAcceptableEmpty_tmp = false;
  }
  foundSize_tmp = !isAcceptableEmpty_tmp;
  b_isAcceptableEmpty_tmp = (varargin_2.m == 0);
  allEmpty = (isAcceptableEmpty_tmp && b_isAcceptableEmpty_tmp);
  if ((!b_isAcceptableEmpty_tmp) && foundSize_tmp && (varargin_2.m != m)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &wc_emlrtRTEI, "Coder:toolbox:ConcatenationDimensionMismatch",
        "Coder:toolbox:ConcatenationDimensionMismatch", 6, 12, 1, 12, 2, 12, m);
  }
  isAcceptableEmpty_tmp = !b_isAcceptableEmpty_tmp;
  if (isAcceptableEmpty_tmp && (!foundSize_tmp)) {
    cnfixeddim = varargin_2.m;
  }
  ccolidx = 0;
  cnvardim = 0;
  if (allEmpty || foundSize_tmp) {
    ccolidx = colidx[colidx.size(0) - 1] - 1;
    cnvardim = n;
  }
  if (allEmpty || isAcceptableEmpty_tmp) {
    b_st.site = &thb_emlrtRSI;
    i = varargin_2.colidx[varargin_2.colidx.size(0) - 1];
    if (ccolidx > MIN_int32_T - i) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &xc_emlrtRTEI, "Coder:toolbox:SparseCatTooBig",
          "Coder:toolbox:SparseCatTooBig", 3, 4, 8, "nonzeros");
    }
    ccolidx = (ccolidx + i) - 1;
    b_st.site = &uhb_emlrtRSI;
    if (cnvardim > 2147483646) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &xc_emlrtRTEI, "Coder:toolbox:SparseCatTooBig",
          "Coder:toolbox:SparseCatTooBig", 3, 4, 7, "columns");
    }
    cnvardim++;
  }
  st.site = &lkb_emlrtRSI;
  b_st.site = &mkb_emlrtRSI;
  c_st.site = &nkb_emlrtRSI;
  sparse::spallocLike(c_st, cnfixeddim, cnvardim, ccolidx, c);
  cnfixeddim = -1;
  ccolidx = 1;
  if ((m != 0) && (n != 0)) {
    cnvardim = colidx[colidx.size(0) - 1];
    c_st.site = &okb_emlrtRSI;
    if (cnvardim - 1 > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T idx{0}; idx <= cnvardim - 2; idx++) {
      c.rowidx[idx] = rowidx[idx];
      c.d[idx] = d[idx];
    }
    cnfixeddim = n;
    c_st.site = &pkb_emlrtRSI;
    if (n > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (ccolidx = 0; ccolidx < cnfixeddim; ccolidx++) {
      c.colidx[ccolidx + 1] = colidx[ccolidx + 1];
    }
    if (n - 1 < 0) {
      ccolidx = 1;
    } else {
      ccolidx = n + 1;
    }
    cnfixeddim = cnvardim - 2;
  }
  if (varargin_2.m != 0) {
    cnvardim = varargin_2.colidx[varargin_2.colidx.size(0) - 1];
    c_st.site = &okb_emlrtRSI;
    if (cnvardim - 1 > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T idx{0}; idx <= cnvardim - 2; idx++) {
      i = (cnfixeddim + idx) + 1;
      c.rowidx[i] = varargin_2.rowidx[idx];
      c.d[i] = varargin_2.d[idx];
    }
    c.colidx[ccolidx] = (varargin_2.colidx[1] + cnfixeddim) + 1;
  }
}

void b_sparse::init(const emlrtStack &sp, int32_T b_m, int32_T nzmaxval)
{
  emlrtStack st;
  int32_T numalloc;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &eib_emlrtRSI;
  if (b_m < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (b_m >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  m = b_m;
  st.site = &cib_emlrtRSI;
  if (nzmaxval < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (nzmaxval >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  numalloc = muIntScalarMax_sint32(nzmaxval, 1);
  d.set_size(&feb_emlrtRTEI, &sp, numalloc);
  for (int32_T i{0}; i < numalloc; i++) {
    d[i] = 0.0;
  }
  maxnz = numalloc;
  colidx.set_size(&geb_emlrtRTEI, &sp, 2);
  rowidx.set_size(&heb_emlrtRTEI, &sp, numalloc);
  for (int32_T i{0}; i < numalloc; i++) {
    rowidx[i] = 0;
  }
  colidx[0] = 1;
  colidx[1] = 1;
}

void sparse::mtimes(const emlrtStack &sp, const b_sparse &b, b_sparse &c) const
{
  array<real_T, 1U> wd;
  array<int32_T, 1U> flag;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T a_tmp;
  int32_T bcidx;
  int32_T cnnz;
  int32_T i;
  int32_T paend_tmp;
  int32_T pcstart;
  boolean_T needSort;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (n != b.m) {
    emlrtErrorWithMessageIdR2018a(&sp, &nf_emlrtRTEI, "MATLAB:innerdim",
                                  "MATLAB:innerdim", 0);
  }
  st.site = &aad_emlrtRSI;
  b_st.site = &bad_emlrtRSI;
  bcidx = b.colidx.size(0);
  c.colidx.set_size(&mob_emlrtRTEI, &b_st, b.colidx.size(0));
  for (i = 0; i < bcidx; i++) {
    c.colidx[i] = 0;
  }
  flag.set_size(&job_emlrtRTEI, &b_st, m);
  pcstart = m;
  for (i = 0; i < pcstart; i++) {
    flag[i] = 0;
  }
  cnnz = 0;
  bcidx = b.colidx[0] - 1;
  c.colidx[0] = 1;
  while ((bcidx + 1 < b.colidx[1]) && (cnnz <= m)) {
    paend_tmp = colidx[b.rowidx[bcidx]];
    a_tmp = colidx[b.rowidx[bcidx] - 1];
    c_st.site = &lad_emlrtRSI;
    if ((a_tmp <= paend_tmp - 1) && (paend_tmp - 1 > 2147483646)) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T pa{a_tmp}; pa < paend_tmp; pa++) {
      i = rowidx[pa - 1] - 1;
      if (flag[i] != 1) {
        flag[i] = 1;
        cnnz++;
      }
    }
    bcidx++;
  }
  c.colidx[1] = cnnz + 1;
  b_st.site = &cad_emlrtRSI;
  c.m = m;
  if (cnnz < 1) {
    cnnz = 1;
  }
  c.maxnz = cnnz;
  c.d.set_size(&px_emlrtRTEI, &b_st, cnnz);
  c.rowidx.set_size(&qx_emlrtRTEI, &b_st, cnnz);
  wd.set_size(&kob_emlrtRTEI, &st, m);
  flag.set_size(&lob_emlrtRTEI, &st, m);
  for (i = 0; i < pcstart; i++) {
    flag[i] = 0;
  }
  needSort = false;
  if (b.colidx[1] - 1 != 0) {
    if (b.colidx[1] - 1 == 1) {
      paend_tmp = colidx[b.rowidx[0]];
      a_tmp = colidx[b.rowidx[0] - 1];
      b_st.site = &ead_emlrtRSI;
      if ((a_tmp <= paend_tmp - 1) && (paend_tmp - 1 > 2147483646)) {
        c_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(c_st);
      }
      for (int32_T pa{a_tmp}; pa < paend_tmp; pa++) {
        i = rowidx[pa - 1];
        c.rowidx[pa - a_tmp] = i;
        wd[i - 1] = d[pa - 1] * b.d[0];
      }
    } else {
      paend_tmp = colidx[b.rowidx[0]];
      a_tmp = colidx[b.rowidx[0] - 1];
      b_st.site = &fad_emlrtRSI;
      if ((a_tmp <= paend_tmp - 1) && (paend_tmp - 1 > 2147483646)) {
        c_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(c_st);
      }
      for (int32_T pa{a_tmp}; pa < paend_tmp; pa++) {
        bcidx = rowidx[pa - 1];
        pcstart = pa - a_tmp;
        flag[bcidx - 1] = pcstart + 1;
        c.rowidx[pcstart] = bcidx;
        wd[bcidx - 1] = d[pa - 1] * b.d[0];
      }
      if (paend_tmp - 1 < a_tmp) {
        cnnz = -1;
      } else {
        cnnz = (paend_tmp - a_tmp) - 1;
      }
      for (bcidx = 1; bcidx + 1 < b.colidx[1]; bcidx++) {
        real_T bd;
        bd = b.d[bcidx];
        paend_tmp = colidx[b.rowidx[bcidx]];
        a_tmp = colidx[b.rowidx[bcidx] - 1];
        b_st.site = &gad_emlrtRSI;
        if ((a_tmp <= paend_tmp - 1) && (paend_tmp - 1 > 2147483646)) {
          c_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(c_st);
        }
        for (int32_T pa{a_tmp}; pa < paend_tmp; pa++) {
          i = rowidx[pa - 1];
          if (flag[i - 1] < 1) {
            cnnz++;
            flag[i - 1] = cnnz + 1;
            c.rowidx[cnnz] = i;
            wd[i - 1] = d[pa - 1] * bd;
            needSort = true;
          } else {
            wd[i - 1] = wd[i - 1] + d[pa - 1] * bd;
          }
        }
      }
    }
  }
  bcidx = c.colidx[1];
  pcstart = c.colidx[0];
  if (needSort) {
    b_st.site = &had_emlrtRSI;
    internal::introsort(b_st, c.rowidx, c.colidx[0], c.colidx[1] - 1);
  }
  b_st.site = &iad_emlrtRSI;
  if ((c.colidx[0] <= c.colidx[1] - 1) && (c.colidx[1] - 1 > 2147483646)) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (paend_tmp = pcstart; paend_tmp < bcidx; paend_tmp++) {
    c.d[paend_tmp - 1] = wd[c.rowidx[paend_tmp - 1] - 1];
  }
  b_st.site = &jad_emlrtRSI;
  c.fillIn();
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sparse::mtimes(const emlrtStack &sp, const sparse &b, sparse &c) const
{
  array<real_T, 1U> wd;
  array<int32_T, 1U> flag;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T a_tmp;
  int32_T b_b;
  int32_T bcidx;
  int32_T blen;
  int32_T cmax;
  int32_T cnnz;
  int32_T cstart;
  int32_T i;
  int32_T j;
  int32_T pb;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (n != b.m) {
    emlrtErrorWithMessageIdR2018a(&sp, &nf_emlrtRTEI, "MATLAB:innerdim",
                                  "MATLAB:innerdim", 0);
  }
  st.site = &aad_emlrtRSI;
  b_st.site = &bad_emlrtRSI;
  blen = b.colidx.size(0);
  c.colidx.set_size(&iob_emlrtRTEI, &b_st, b.colidx.size(0));
  for (i = 0; i < blen; i++) {
    c.colidx[i] = 0;
  }
  flag.set_size(&job_emlrtRTEI, &b_st, m);
  blen = m;
  for (i = 0; i < blen; i++) {
    flag[i] = 0;
  }
  cnnz = 0;
  c_st.site = &kad_emlrtRSI;
  if (b.n > 2147483646) {
    d_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  j = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if (j <= b.n - 1) {
      bcidx = b.colidx[j] - 1;
      cstart = cnnz;
      cmax = cnnz + m;
      c.colidx[j] = cnnz + 1;
      while ((bcidx + 1 < b.colidx[j + 1]) && (cnnz <= cmax)) {
        pb = colidx[b.rowidx[bcidx]];
        a_tmp = colidx[b.rowidx[bcidx] - 1];
        c_st.site = &lad_emlrtRSI;
        if ((a_tmp <= pb - 1) && (pb - 1 > 2147483646)) {
          d_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(d_st);
        }
        for (b_b = a_tmp; b_b < pb; b_b++) {
          i = rowidx[b_b - 1] - 1;
          if (flag[i] != j + 1) {
            flag[i] = j + 1;
            cnnz++;
          }
        }
        bcidx++;
      }
      if (cnnz < cstart) {
        emlrtErrorWithMessageIdR2018a(&b_st, &of_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        j++;
      }
    } else {
      c.colidx[b.n] = cnnz + 1;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  b_st.site = &cad_emlrtRSI;
  c.m = m;
  c.n = b.n;
  if (cnnz < 1) {
    cnnz = 1;
  }
  c.maxnz = cnnz;
  c.d.set_size(&px_emlrtRTEI, &b_st, cnnz);
  c.rowidx.set_size(&qx_emlrtRTEI, &b_st, cnnz);
  if (b.n + 1 < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(b.n + 1), &w_emlrtDCI,
                                &b_st);
  }
  wd.set_size(&kob_emlrtRTEI, &st, m);
  flag.set_size(&lob_emlrtRTEI, &st, m);
  for (i = 0; i < blen; i++) {
    flag[i] = 0;
  }
  pb = 0;
  cnnz = -1;
  b_b = b.n;
  b_st.site = &dad_emlrtRSI;
  for (j = 0; j < b_b; j++) {
    boolean_T needSort;
    needSort = false;
    cmax = cnnz + 2;
    blen = (b.colidx[j + 1] - pb) - 1;
    if (blen != 0) {
      if (blen == 1) {
        cstart = colidx[b.rowidx[pb]];
        a_tmp = colidx[b.rowidx[pb] - 1];
        b_st.site = &ead_emlrtRSI;
        if ((a_tmp <= cstart - 1) && (cstart - 1 > 2147483646)) {
          c_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(c_st);
        }
        for (int32_T pa{a_tmp}; pa < cstart; pa++) {
          i = rowidx[pa - 1];
          c.rowidx[((cnnz + pa) - a_tmp) + 1] = i;
          wd[i - 1] = d[pa - 1] * b.d[pb];
        }
        if (cstart - 1 >= a_tmp) {
          cnnz = (cnnz + cstart) - a_tmp;
        }
        pb++;
      } else {
        cstart = colidx[b.rowidx[pb]];
        a_tmp = colidx[b.rowidx[pb] - 1];
        b_st.site = &fad_emlrtRSI;
        if ((a_tmp <= cstart - 1) && (cstart - 1 > 2147483646)) {
          c_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(c_st);
        }
        for (int32_T pa{a_tmp}; pa < cstart; pa++) {
          blen = rowidx[pa - 1];
          bcidx = (cnnz + pa) - a_tmp;
          flag[blen - 1] = bcidx + 2;
          c.rowidx[bcidx + 1] = blen;
          wd[blen - 1] = d[pa - 1] * b.d[pb];
        }
        if (cstart - 1 >= a_tmp) {
          cnnz = (cnnz + cstart) - a_tmp;
        }
        for (pb++; pb + 1 < b.colidx[j + 1]; pb++) {
          real_T bd;
          bd = b.d[pb];
          cstart = colidx[b.rowidx[pb]];
          a_tmp = colidx[b.rowidx[pb] - 1];
          b_st.site = &gad_emlrtRSI;
          if ((a_tmp <= cstart - 1) && (cstart - 1 > 2147483646)) {
            c_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(c_st);
          }
          for (int32_T pa{a_tmp}; pa < cstart; pa++) {
            i = rowidx[pa - 1];
            if (flag[i - 1] < cmax) {
              cnnz++;
              flag[i - 1] = cnnz + 1;
              c.rowidx[cnnz] = i;
              wd[i - 1] = d[pa - 1] * bd;
              needSort = true;
            } else {
              wd[i - 1] = wd[i - 1] + d[pa - 1] * bd;
            }
          }
        }
      }
    }
    blen = c.colidx[j + 1];
    bcidx = c.colidx[j];
    if (needSort) {
      b_st.site = &had_emlrtRSI;
      internal::introsort(b_st, c.rowidx, bcidx, c.colidx[j + 1] - 1);
    }
    b_st.site = &iad_emlrtRSI;
    if ((c.colidx[j] <= c.colidx[j + 1] - 1) &&
        (c.colidx[j + 1] - 1 > 2147483646)) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (cstart = bcidx; cstart < blen; cstart++) {
      c.d[cstart - 1] = wd[c.rowidx[cstart - 1] - 1];
    }
  }
  b_st.site = &jad_emlrtRSI;
  c.b_fillIn();
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sparse::parenAssign(const emlrtStack &sp, const array<uint32_T, 1U> &rhs,
                         const array<real_T, 1U> &varargin_1,
                         const real_T varargin_2_data[],
                         int32_T varargin_2_size)
{
  array<real_T, 1U> b_varargin_2_data;
  array<real_T, 1U> b_y;
  array<real_T, 1U> c_varargin_2_data;
  array<real_T, 1U> y;
  array<int32_T, 1U> iidx;
  array<int32_T, 1U> seqr;
  array<uint32_T, 1U> b_rhs;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T nt;
  int32_T i;
  int32_T k;
  int32_T nrow;
  int32_T rhsIter_idx;
  int32_T sm_tmp;
  boolean_T found;
  boolean_T overflow;
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
  st.site = &jjb_emlrtRSI;
  if (varargin_1.size(0) != rhs.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &lg_emlrtRTEI,
                                  "MATLAB:subsassigndimmismatch",
                                  "MATLAB:subsassigndimmismatch", 0);
  }
  b_st.site = &kjb_emlrtRSI;
  c_st.site = &ljb_emlrtRSI;
  sparse_validateNumericIndex(c_st, m, varargin_1);
  b_varargin_2_data.set((real_T *)&varargin_2_data[0], varargin_2_size);
  c_st.site = &mjb_emlrtRSI;
  nrow = n;
  i = b_varargin_2_data.size(0);
  for (k = 0; k < i; k++) {
    if ((!(muDoubleScalarFloor(b_varargin_2_data[k]) ==
           b_varargin_2_data[k])) ||
        muDoubleScalarIsInf(b_varargin_2_data[k]) ||
        (!(b_varargin_2_data[k] > 0.0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &uc_emlrtRTEI,
                                    "Coder:MATLAB:badsubscript",
                                    "Coder:MATLAB:badsubscript", 0);
    }
    if (!(b_varargin_2_data[k] <= nrow)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &vc_emlrtRTEI,
                                    "Coder:builtins:IndexOutOfBounds",
                                    "Coder:builtins:IndexOutOfBounds", 6, 6,
                                    b_varargin_2_data[k], 12, 1, 12, nrow);
    }
  }
  sm_tmp = varargin_1.size(0);
  c_st.site = &njb_emlrtRSI;
  d_st.site = &ojb_emlrtRSI;
  y.set_size(&tvb_emlrtRTEI, &d_st, 1);
  y[0] = varargin_2_data[0];
  b_y.set_size(&uvb_emlrtRTEI, &d_st, varargin_1.size(0));
  for (i = 0; i < sm_tmp; i++) {
    b_y[i] = varargin_1[i];
  }
  nrow = rhs.size(0);
  b_rhs.set_size(&vvb_emlrtRTEI, &d_st, rhs.size(0));
  for (i = 0; i < nrow; i++) {
    b_rhs[i] = rhs[i];
  }
  e_st.site = &ckb_emlrtRSI;
  if (issorted(e_st, varargin_1)) {
    c_varargin_2_data.set((real_T *)&varargin_2_data[0], varargin_2_size);
    e_st.site = &ckb_emlrtRSI;
    issorted(e_st, c_varargin_2_data);
  } else {
    e_st.site = &bkb_emlrtRSI;
    f_st.site = &li_emlrtRSI;
    internal::sort(f_st, b_y, iidx);
    nrow = iidx.size(0);
    seqr.set_size(&jnb_emlrtRTEI, &e_st, iidx.size(0));
    for (i = 0; i < nrow; i++) {
      seqr[i] = iidx[i];
    }
    e_st.site = &akb_emlrtRSI;
    f_st.site = &li_emlrtRSI;
    internal::sort(f_st, y, iidx);
    if (b_y.size(0) == 1) {
      b_rhs[0] = rhs[iidx[0] - 1];
    } else {
      i = b_y.size(0);
      for (nrow = 0; nrow < i; nrow++) {
        b_rhs[nrow] = rhs[seqr[nrow] - 1];
      }
    }
  }
  rhsIter_idx = 0;
  d_st.site = &pjb_emlrtRSI;
  nt = y[0];
  overflow = (varargin_1.size(0) > 2147483646);
  for (int32_T cidx{0}; cidx < 1; cidx++) {
    int32_T extraAlloc;
    int32_T pass;
    int32_T shiftleft;
    int32_T vidx;
    pass = 0;
    shiftleft = 0;
    extraAlloc = 0;
    vidx = 0;
    d_st.site = &qjb_emlrtRSI;
    if (overflow) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (int32_T ridx{0}; ridx < sm_tmp; ridx++) {
      uint32_T rhsv;
      rhsv = b_rhs[rhsIter_idx + ridx];
      if (ridx + 1 != sm_tmp) {
        nrow = static_cast<int32_T>(b_y[ridx + 1]);
      } else {
        nrow = 0;
      }
      i = static_cast<int32_T>(b_y[ridx]);
      if (i == nrow) {
        if (pass != 0) {
          shiftleft++;
          pass--;
        }
      } else {
        real_T thisv;
        if (pass == 0) {
          int32_T b_vidx;
          b_vidx =
              sparse_locBsearch(rowidx, i, colidx[static_cast<int32_T>(nt) - 1],
                                colidx[static_cast<int32_T>(nt)], found);
          vidx = b_vidx - 1;
          if (found) {
            thisv = d[b_vidx - 1];
          } else {
            thisv = 0.0;
          }
          if ((colidx[static_cast<int32_T>(nt)] - b_vidx > 1) ||
              ((colidx[static_cast<int32_T>(nt)] - b_vidx == 1) &&
               (b_y[ridx] != m))) {
            if (colidx[static_cast<int32_T>(nt)] - b_vidx > 1) {
              nrow = rowidx[b_vidx];
            } else {
              nrow = m + 1;
            }
            d_st.site = &rjb_emlrtRSI;
            if ((ridx + 2 <= sm_tmp) && (sm_tmp > 2147483646)) {
              e_st.site = &qe_emlrtRSI;
              check_forloop_overflow_error(e_st);
            }
            k = ridx + 1;
            while ((k + 1 <= sm_tmp) && (b_y[k] < nrow)) {
              pass++;
              k++;
            }
          }
          extraAlloc = pass;
          shiftleft = 0;
          if (thisv == 0.0) {
            if (colidx[colidx.size(0) - 1] + pass > maxnz) {
              if (pass + 1 < 10) {
                nrow = 9;
              } else {
                nrow = pass;
              }
              d_st.site = &sjb_emlrtRSI;
              sparse::b_realloc(d_st, this, colidx[colidx.size(0) - 1] + nrow,
                                b_vidx, b_vidx + 1,
                                colidx[colidx.size(0) - 1] - 1, pass + 1);
            } else {
              d_st.site = &tjb_emlrtRSI;
              nrow = (b_vidx + pass) + 1;
              k = (colidx[colidx.size(0) - 1] - b_vidx) - 1;
              if (k > 0) {
                e_st.site = &gkb_emlrtRSI;
                std::memmove((void *)&rowidx[nrow], (void *)&rowidx[b_vidx],
                             (uint32_T)((size_t)k * sizeof(int32_T)));
                e_st.site = &hkb_emlrtRSI;
                std::memmove((void *)&d[nrow], (void *)&d[b_vidx],
                             (uint32_T)((size_t)k * sizeof(real_T)));
              }
            }
            extraAlloc = pass + 1;
            vidx = b_vidx;
          } else if ((colidx[colidx.size(0) - 1] + pass) - 1 > maxnz) {
            if (pass < 10) {
              nrow = 10;
            } else {
              nrow = pass;
            }
            d_st.site = &ujb_emlrtRSI;
            sparse::b_realloc(d_st, this,
                              (colidx[colidx.size(0) - 1] + nrow) - 1, b_vidx,
                              b_vidx + 1, colidx[colidx.size(0) - 1] - 1, pass);
          } else {
            d_st.site = &vjb_emlrtRSI;
            nrow = b_vidx + pass;
            k = (colidx[colidx.size(0) - 1] - b_vidx) - 1;
            if (k > 0) {
              e_st.site = &gkb_emlrtRSI;
              std::memmove((void *)&rowidx[nrow], (void *)&rowidx[b_vidx],
                           (uint32_T)((size_t)k * sizeof(int32_T)));
              e_st.site = &hkb_emlrtRSI;
              std::memmove((void *)&d[nrow], (void *)&d[b_vidx],
                           (uint32_T)((size_t)k * sizeof(real_T)));
            }
          }
        } else {
          thisv = 0.0;
          pass--;
        }
        if ((thisv == 0.0) && (rhsv == 0U)) {
          shiftleft++;
        } else if ((thisv != 0.0) && (rhsv != 0U)) {
          d[vidx] = rhsv;
          vidx++;
        } else if (thisv == 0.0) {
          d[vidx] = rhsv;
          rowidx[vidx] = i;
          vidx++;
        } else {
          shiftleft++;
        }
        if (pass == 0) {
          i = extraAlloc - shiftleft;
          if (i > 0) {
            d_st.site = &wjb_emlrtRSI;
            sparse::incrColIdx(d_st, this, static_cast<int32_T>(nt), i);
          } else if (i < 0) {
            d_st.site = &xjb_emlrtRSI;
            sparse::decrColIdx(d_st, this, static_cast<int32_T>(nt),
                               shiftleft - extraAlloc);
          }
          if (shiftleft != 0) {
            d_st.site = &yjb_emlrtRSI;
            nrow = vidx + shiftleft;
            k = (colidx[colidx.size(0) - 1] - vidx) - 1;
            if (k > 0) {
              e_st.site = &gkb_emlrtRSI;
              std::memmove((void *)&rowidx[vidx], (void *)&rowidx[nrow],
                           (uint32_T)((size_t)k * sizeof(int32_T)));
              e_st.site = &hkb_emlrtRSI;
              std::memmove((void *)&d[vidx], (void *)&d[nrow],
                           (uint32_T)((size_t)k * sizeof(real_T)));
            }
          }
        }
      }
    }
    if (sm_tmp - 1 >= 0) {
      rhsIter_idx += sm_tmp;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void b_sparse::parenAssign(const emlrtStack &sp, const array<uint32_T, 1U> &rhs,
                           const array<real_T, 1U> &varargin_1)
{
  array<real_T, 1U> y;
  array<int32_T, 1U> iidx;
  array<uint32_T, 1U> b_rhs;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T extraAlloc;
  int32_T i;
  int32_T pass;
  int32_T sa_idx_0;
  int32_T shiftleft;
  int32_T sm_tmp;
  int32_T vidx;
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
  st.site = &jjb_emlrtRSI;
  if ((static_cast<int32_T>(static_cast<uint32_T>(rhs.size(0)) & 65535U) +
           ((rhs.size(0) >> 16) << 16) !=
       varargin_1.size(0)) &&
      (varargin_1.size(0) != rhs.size(0))) {
    sa_idx_0 = m;
    if (static_cast<int32_T>(static_cast<uint32_T>(sa_idx_0) & 65535U) +
            ((sa_idx_0 >> 16) << 16) !=
        varargin_1.size(0)) {
      emlrtErrorWithMessageIdR2018a(&st, &lg_emlrtRTEI,
                                    "MATLAB:subsassigndimmismatch",
                                    "MATLAB:subsassigndimmismatch", 0);
    }
  }
  b_st.site = &kjb_emlrtRSI;
  c_st.site = &ljb_emlrtRSI;
  sparse_validateNumericIndex(c_st, m, varargin_1);
  sm_tmp = varargin_1.size(0);
  c_st.site = &njb_emlrtRSI;
  d_st.site = &ojb_emlrtRSI;
  y.set_size(&uvb_emlrtRTEI, &d_st, varargin_1.size(0));
  for (i = 0; i < sm_tmp; i++) {
    y[i] = varargin_1[i];
  }
  sa_idx_0 = rhs.size(0);
  b_rhs.set_size(&vvb_emlrtRTEI, &d_st, rhs.size(0));
  for (i = 0; i < sa_idx_0; i++) {
    b_rhs[i] = rhs[i];
  }
  e_st.site = &ckb_emlrtRSI;
  if (!issorted(e_st, varargin_1)) {
    e_st.site = &bkb_emlrtRSI;
    f_st.site = &li_emlrtRSI;
    internal::sort(f_st, y, iidx);
    if (y.size(0) != 1) {
      i = y.size(0);
      for (sa_idx_0 = 0; sa_idx_0 < i; sa_idx_0++) {
        b_rhs[sa_idx_0] = rhs[iidx[sa_idx_0] - 1];
      }
    }
  }
  pass = 0;
  shiftleft = 0;
  extraAlloc = 0;
  vidx = 0;
  d_st.site = &qjb_emlrtRSI;
  if (varargin_1.size(0) > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  for (int32_T ridx{0}; ridx < sm_tmp; ridx++) {
    if (ridx + 1 != sm_tmp) {
      sa_idx_0 = static_cast<int32_T>(y[ridx + 1]);
    } else {
      sa_idx_0 = 0;
    }
    i = static_cast<int32_T>(y[ridx]);
    if (i == sa_idx_0) {
      if (pass != 0) {
        shiftleft++;
        pass--;
      }
    } else {
      real_T thisv;
      int32_T nelem;
      if (pass == 0) {
        int32_T b_vidx;
        int32_T i1;
        b_vidx = sparse_locBsearch(rowidx, i, colidx[0], colidx[1], found);
        vidx = b_vidx - 1;
        if (found) {
          thisv = d[b_vidx - 1];
        } else {
          thisv = 0.0;
        }
        sa_idx_0 = colidx[1] - b_vidx;
        if ((sa_idx_0 > 1) || ((sa_idx_0 == 1) && (y[ridx] != m))) {
          if (sa_idx_0 > 1) {
            sa_idx_0 = rowidx[b_vidx];
          } else {
            sa_idx_0 = m + 1;
          }
          d_st.site = &rjb_emlrtRSI;
          if ((ridx + 2 <= sm_tmp) && (sm_tmp > 2147483646)) {
            e_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(e_st);
          }
          i1 = ridx + 1;
          while ((i1 + 1 <= sm_tmp) && (y[i1] < sa_idx_0)) {
            pass++;
            i1++;
          }
        }
        extraAlloc = pass;
        shiftleft = 0;
        if (thisv == 0.0) {
          sa_idx_0 = colidx[colidx.size(0) - 1];
          if (sa_idx_0 + pass > maxnz) {
            if (pass + 1 < 10) {
              i1 = 9;
            } else {
              i1 = pass;
            }
            d_st.site = &sjb_emlrtRSI;
            sparse::b_realloc(d_st, this, sa_idx_0 + i1, b_vidx, b_vidx + 1,
                              sa_idx_0 - 1, pass + 1);
          } else {
            d_st.site = &tjb_emlrtRSI;
            i1 = (b_vidx + pass) + 1;
            nelem = (sa_idx_0 - b_vidx) - 1;
            if (nelem > 0) {
              e_st.site = &gkb_emlrtRSI;
              std::memmove((void *)&rowidx[i1], (void *)&rowidx[b_vidx],
                           (uint32_T)((size_t)nelem * sizeof(int32_T)));
              e_st.site = &hkb_emlrtRSI;
              std::memmove((void *)&d[i1], (void *)&d[b_vidx],
                           (uint32_T)((size_t)nelem * sizeof(real_T)));
            }
          }
          extraAlloc = pass + 1;
          vidx = b_vidx;
        } else {
          sa_idx_0 = colidx[colidx.size(0) - 1];
          if ((sa_idx_0 + pass) - 1 > maxnz) {
            if (pass < 10) {
              i1 = 10;
            } else {
              i1 = pass;
            }
            d_st.site = &ujb_emlrtRSI;
            sparse::b_realloc(d_st, this, (sa_idx_0 + i1) - 1, b_vidx,
                              b_vidx + 1, sa_idx_0 - 1, pass);
          } else {
            d_st.site = &vjb_emlrtRSI;
            i1 = b_vidx + pass;
            nelem = (sa_idx_0 - b_vidx) - 1;
            if (nelem > 0) {
              e_st.site = &gkb_emlrtRSI;
              std::memmove((void *)&rowidx[i1], (void *)&rowidx[b_vidx],
                           (uint32_T)((size_t)nelem * sizeof(int32_T)));
              e_st.site = &hkb_emlrtRSI;
              std::memmove((void *)&d[i1], (void *)&d[b_vidx],
                           (uint32_T)((size_t)nelem * sizeof(real_T)));
            }
          }
        }
      } else {
        thisv = 0.0;
        pass--;
      }
      if ((thisv == 0.0) && (b_rhs[ridx] == 0U)) {
        shiftleft++;
      } else if ((thisv != 0.0) && (b_rhs[ridx] != 0U)) {
        d[vidx] = b_rhs[ridx];
        vidx++;
      } else if (thisv == 0.0) {
        d[vidx] = b_rhs[ridx];
        rowidx[vidx] = i;
        vidx++;
      } else {
        shiftleft++;
      }
      if (pass == 0) {
        i = extraAlloc - shiftleft;
        if (i > 0) {
          colidx[1] = (colidx[1] + extraAlloc) - shiftleft;
        } else if (i < 0) {
          colidx[1] = (colidx[1] - shiftleft) + extraAlloc;
        }
        if (shiftleft != 0) {
          d_st.site = &yjb_emlrtRSI;
          sa_idx_0 = vidx + shiftleft;
          nelem = (colidx[colidx.size(0) - 1] - vidx) - 1;
          if (nelem > 0) {
            e_st.site = &gkb_emlrtRSI;
            std::memmove((void *)&rowidx[vidx], (void *)&rowidx[sa_idx_0],
                         (uint32_T)((size_t)nelem * sizeof(int32_T)));
            e_st.site = &hkb_emlrtRSI;
            std::memmove((void *)&d[vidx], (void *)&d[sa_idx_0],
                         (uint32_T)((size_t)nelem * sizeof(real_T)));
          }
        }
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sparse::parenAssign(const emlrtStack &sp,
                         const array<real_T, 1U> &varargin_1)
{
  array<real_T, 1U> linidx;
  array<int32_T, 1U> mjd_emlrtRSI;
  array<int32_T, 1U> rowsToAssign;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T cnt;
  int32_T col;
  int32_T i;
  int32_T lb;
  int32_T loop_ub;
  int32_T nrow;
  int32_T prevcol;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &obc_emlrtRSI;
  internal::b_bigProduct(m, n, nrow);
  b_st.site = &pbc_emlrtRSI;
  if (nrow == 0) {
    c_st.site = &qbc_emlrtRSI;
    sparse_validateNumericIndex(c_st, m * n, varargin_1);
  } else {
    c_st.site = &rbc_emlrtRSI;
    i = varargin_1.size(0);
    for (int32_T k{0}; k < i; k++) {
      if ((!(muDoubleScalarFloor(varargin_1[k]) == varargin_1[k])) ||
          muDoubleScalarIsInf(varargin_1[k]) || (!(varargin_1[k] > 0.0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &uc_emlrtRTEI,
                                      "Coder:MATLAB:badsubscript",
                                      "Coder:MATLAB:badsubscript", 0);
      }
    }
  }
  c_st.site = &sbc_emlrtRSI;
  loop_ub = varargin_1.size(0);
  linidx.set_size(&uvb_emlrtRTEI, &c_st, varargin_1.size(0));
  for (i = 0; i < loop_ub; i++) {
    linidx[i] = varargin_1[i];
  }
  d_st.site = &ckb_emlrtRSI;
  if (!issorted(d_st, varargin_1)) {
    d_st.site = &bkb_emlrtRSI;
    e_st.site = &li_emlrtRSI;
    internal::sort(e_st, linidx, mjd_emlrtRSI);
  }
  lb = -1;
  cnt = 0;
  loop_ub = linidx.size(0);
  rowsToAssign.set_size(&exb_emlrtRTEI, &b_st, linidx.size(0));
  for (i = 0; i < loop_ub; i++) {
    rowsToAssign[i] = 0;
  }
  prevcol = 0;
  emlrtForLoopVectorCheckR2021a(
      1.0, 1.0, static_cast<real_T>(linidx.size(0)) + 1.0, mxDOUBLE_CLASS,
      linidx.size(0) + 1, &wg_emlrtRTEI, &b_st);
  for (int32_T k{0}; k <= loop_ub; k++) {
    if (static_cast<uint32_T>(k) + 1U <=
        static_cast<uint32_T>(linidx.size(0))) {
      real_T b_this[2];
      c_st.site = &tbc_emlrtRSI;
      b_this[0] = m;
      b_this[1] = n;
      d_st.site = &vbc_emlrtRSI;
      nrow = internal::ind2sub(d_st, b_this, linidx[k], col);
      rowsToAssign[k] = nrow;
    } else {
      col = -1;
    }
    if (col == prevcol) {
      cnt++;
    } else {
      if (cnt > 0) {
        int32_T b_iv[2];
        int32_T extraAlloc;
        int32_T pass;
        int32_T shiftleft;
        int32_T sm;
        int32_T vidx;
        i = lb + cnt;
        if (lb + 1 > i) {
          lb = 0;
          i = 0;
        }
        b_iv[0] = 1;
        sm = i - lb;
        b_iv[1] = sm;
        c_st.site = &ubc_emlrtRSI;
        internal::indexShapeCheck(c_st, rowsToAssign.size(0), b_iv);
        c_st.site = &ubc_emlrtRSI;
        d_st.site = &kjb_emlrtRSI;
        e_st.site = &ljb_emlrtRSI;
        cnt = m;
        for (nrow = 0; nrow < sm; nrow++) {
          i = rowsToAssign[lb + nrow];
          if (i <= 0) {
            emlrtErrorWithMessageIdR2018a(&e_st, &uc_emlrtRTEI,
                                          "Coder:MATLAB:badsubscript",
                                          "Coder:MATLAB:badsubscript", 0);
          }
          if (i > cnt) {
            emlrtErrorWithMessageIdR2018a(
                &e_st, &vc_emlrtRTEI, "Coder:builtins:IndexOutOfBounds",
                "Coder:builtins:IndexOutOfBounds", 6, 12, i, 12, 1, 12, cnt);
          }
        }
        e_st.site = &mjb_emlrtRSI;
        if (prevcol <= 0) {
          emlrtErrorWithMessageIdR2018a(&e_st, &uc_emlrtRTEI,
                                        "Coder:MATLAB:badsubscript",
                                        "Coder:MATLAB:badsubscript", 0);
        }
        if (prevcol > n) {
          emlrtErrorWithMessageIdR2018a(
              &e_st, &vc_emlrtRTEI, "Coder:builtins:IndexOutOfBounds",
              "Coder:builtins:IndexOutOfBounds", 6, 12, prevcol, 12, 1, 12, n);
        }
        e_st.site = &njb_emlrtRSI;
        pass = 0;
        shiftleft = 0;
        extraAlloc = 0;
        vidx = 0;
        f_st.site = &qjb_emlrtRSI;
        if (sm > 2147483646) {
          g_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(g_st);
        }
        for (int32_T ridx{0}; ridx < sm; ridx++) {
          if (ridx + 1 != sm) {
            nrow = rowsToAssign[(lb + ridx) + 1];
          } else {
            nrow = 0;
          }
          i = rowsToAssign[lb + ridx];
          if (i == nrow) {
            if (pass != 0) {
              shiftleft++;
              pass--;
            }
          } else {
            real_T thisv;
            if (pass == 0) {
              int32_T b_vidx;
              b_vidx = sparse_locBsearch(rowidx, i, colidx[prevcol - 1],
                                         colidx[prevcol], found);
              vidx = b_vidx - 1;
              if (found) {
                thisv = d[b_vidx - 1];
              } else {
                thisv = 0.0;
              }
              if ((colidx[prevcol] - b_vidx > 1) ||
                  ((colidx[prevcol] - b_vidx == 1) && (i != m))) {
                if (colidx[prevcol] - b_vidx > 1) {
                  nrow = rowidx[b_vidx];
                } else {
                  nrow = m + 1;
                }
                f_st.site = &rjb_emlrtRSI;
                cnt = ridx + 1;
                while ((cnt + 1 <= sm) && (rowsToAssign[lb + cnt] < nrow)) {
                  pass++;
                  cnt++;
                }
              }
              extraAlloc = pass;
              shiftleft = 0;
              if (thisv == 0.0) {
                if (colidx[colidx.size(0) - 1] + pass > maxnz) {
                  if (pass + 1 < 10) {
                    nrow = 9;
                  } else {
                    nrow = pass;
                  }
                  f_st.site = &sjb_emlrtRSI;
                  sparse::b_realloc(
                      f_st, this, colidx[colidx.size(0) - 1] + nrow, b_vidx,
                      b_vidx + 1, colidx[colidx.size(0) - 1] - 1, pass + 1);
                } else {
                  f_st.site = &tjb_emlrtRSI;
                  cnt = (b_vidx + pass) + 1;
                  nrow = (colidx[colidx.size(0) - 1] - b_vidx) - 1;
                  if (nrow > 0) {
                    std::memmove((void *)&rowidx[cnt], (void *)&rowidx[b_vidx],
                                 (uint32_T)((size_t)nrow * sizeof(int32_T)));
                    std::memmove((void *)&d[cnt], (void *)&d[b_vidx],
                                 (uint32_T)((size_t)nrow * sizeof(real_T)));
                  }
                }
                extraAlloc = pass + 1;
                vidx = b_vidx;
              } else if ((colidx[colidx.size(0) - 1] + pass) - 1 > maxnz) {
                if (pass < 10) {
                  nrow = 10;
                } else {
                  nrow = pass;
                }
                f_st.site = &ujb_emlrtRSI;
                sparse::b_realloc(
                    f_st, this, (colidx[colidx.size(0) - 1] + nrow) - 1, b_vidx,
                    b_vidx + 1, colidx[colidx.size(0) - 1] - 1, pass);
              } else {
                f_st.site = &vjb_emlrtRSI;
                cnt = b_vidx + pass;
                nrow = (colidx[colidx.size(0) - 1] - b_vidx) - 1;
                if (nrow > 0) {
                  std::memmove((void *)&rowidx[cnt], (void *)&rowidx[b_vidx],
                               (uint32_T)((size_t)nrow * sizeof(int32_T)));
                  std::memmove((void *)&d[cnt], (void *)&d[b_vidx],
                               (uint32_T)((size_t)nrow * sizeof(real_T)));
                }
              }
            } else {
              thisv = 0.0;
              pass--;
            }
            if (thisv == 0.0) {
              shiftleft++;
            } else if (thisv == 0.0) {
              d[vidx] = 0.0;
              rowidx[vidx] = i;
              vidx++;
            } else {
              shiftleft++;
            }
            if (pass == 0) {
              i = extraAlloc - shiftleft;
              if (i > 0) {
                f_st.site = &wjb_emlrtRSI;
                sparse::incrColIdx(f_st, this, prevcol, i);
              } else if (i < 0) {
                f_st.site = &xjb_emlrtRSI;
                sparse::decrColIdx(f_st, this, prevcol, shiftleft - extraAlloc);
              }
              if (shiftleft != 0) {
                f_st.site = &yjb_emlrtRSI;
                cnt = vidx + shiftleft;
                nrow = (colidx[colidx.size(0) - 1] - vidx) - 1;
                if (nrow > 0) {
                  std::memmove((void *)&rowidx[vidx], (void *)&rowidx[cnt],
                               (uint32_T)((size_t)nrow * sizeof(int32_T)));
                  std::memmove((void *)&d[vidx], (void *)&d[cnt],
                               (uint32_T)((size_t)nrow * sizeof(real_T)));
                }
              }
            }
          }
        }
      }
      lb = k;
      cnt = 1;
      prevcol = col;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sparse::parenAssign(const emlrtStack &sp, real_T varargin_1)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T cnt;
  int32_T col;
  int32_T lb;
  int32_T prevcol;
  int32_T rowsToAssign;
  boolean_T found;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &obc_emlrtRSI;
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
  internal::b_bigProduct(m, n, cnt);
  b_st.site = &pbc_emlrtRSI;
  if (cnt == 0) {
    c_st.site = &qbc_emlrtRSI;
    lb = m * n;
    if ((!(muDoubleScalarFloor(varargin_1) == varargin_1)) ||
        muDoubleScalarIsInf(varargin_1) || (!(varargin_1 > 0.0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &uc_emlrtRTEI,
                                    "Coder:MATLAB:badsubscript",
                                    "Coder:MATLAB:badsubscript", 0);
    }
    if (!(varargin_1 <= lb)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &vc_emlrtRTEI, "Coder:builtins:IndexOutOfBounds",
          "Coder:builtins:IndexOutOfBounds", 6, 6, varargin_1, 12, 1, 12, lb);
    }
  } else {
    c_st.site = &rbc_emlrtRSI;
    if ((!(muDoubleScalarFloor(varargin_1) == varargin_1)) ||
        muDoubleScalarIsInf(varargin_1)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &uc_emlrtRTEI,
                                    "Coder:MATLAB:badsubscript",
                                    "Coder:MATLAB:badsubscript", 0);
    }
  }
  lb = -1;
  cnt = 0;
  rowsToAssign = 0;
  prevcol = 0;
  for (int32_T k{0}; k < 2; k++) {
    if (k + 1 <= 1) {
      real_T b_this[2];
      c_st.site = &tbc_emlrtRSI;
      b_this[0] = m;
      b_this[1] = n;
      d_st.site = &vbc_emlrtRSI;
      rowsToAssign = internal::ind2sub(d_st, b_this, varargin_1, col);
    } else {
      col = -1;
    }
    if (col == prevcol) {
      cnt++;
    } else {
      if (cnt > 0) {
        int32_T sm;
        sm = (lb + 1 <= lb + cnt);
        c_st.site = &ubc_emlrtRSI;
        d_st.site = &kjb_emlrtRSI;
        e_st.site = &ljb_emlrtRSI;
        lb = m;
        for (cnt = 0; cnt < sm; cnt++) {
          if (rowsToAssign <= 0) {
            emlrtErrorWithMessageIdR2018a(&e_st, &uc_emlrtRTEI,
                                          "Coder:MATLAB:badsubscript",
                                          "Coder:MATLAB:badsubscript", 0);
          }
          if (rowsToAssign > lb) {
            emlrtErrorWithMessageIdR2018a(&e_st, &vc_emlrtRTEI,
                                          "Coder:builtins:IndexOutOfBounds",
                                          "Coder:builtins:IndexOutOfBounds", 6,
                                          12, rowsToAssign, 12, 1, 12, lb);
          }
        }
        e_st.site = &mjb_emlrtRSI;
        if (prevcol <= 0) {
          emlrtErrorWithMessageIdR2018a(&e_st, &uc_emlrtRTEI,
                                        "Coder:MATLAB:badsubscript",
                                        "Coder:MATLAB:badsubscript", 0);
        }
        if (prevcol > n) {
          emlrtErrorWithMessageIdR2018a(
              &e_st, &vc_emlrtRTEI, "Coder:builtins:IndexOutOfBounds",
              "Coder:builtins:IndexOutOfBounds", 6, 12, prevcol, 12, 1, 12, n);
        }
        e_st.site = &njb_emlrtRSI;
        for (int32_T ridx{0}; ridx < sm; ridx++) {
          if (sm != 1) {
            cnt = rowsToAssign;
          } else {
            cnt = 0;
          }
          if (rowsToAssign != cnt) {
            real_T thisv;
            int32_T vidx;
            vidx = sparse_locBsearch(rowidx, rowsToAssign, colidx[prevcol - 1],
                                     colidx[prevcol], found);
            lb = vidx - 1;
            if (found) {
              thisv = d[vidx - 1];
            } else {
              thisv = 0.0;
            }
            cnt = 0;
            if (thisv == 0.0) {
              if (colidx[colidx.size(0) - 1] > maxnz) {
                f_st.site = &sjb_emlrtRSI;
                sparse::b_realloc(f_st, this, colidx[colidx.size(0) - 1] + 9,
                                  vidx, vidx + 1,
                                  colidx[colidx.size(0) - 1] - 1, 1);
              } else {
                int32_T nelem;
                lb = vidx + 1;
                nelem = (colidx[colidx.size(0) - 1] - vidx) - 1;
                if (nelem > 0) {
                  std::memmove((void *)&rowidx[lb], (void *)&rowidx[vidx],
                               (uint32_T)((size_t)nelem * sizeof(int32_T)));
                  std::memmove((void *)&d[lb], (void *)&d[vidx],
                               (uint32_T)((size_t)nelem * sizeof(real_T)));
                }
              }
              cnt = 1;
              lb = vidx;
            } else if (colidx[colidx.size(0) - 1] - 1 > maxnz) {
              f_st.site = &ujb_emlrtRSI;
              sparse::b_realloc(f_st, this, colidx[colidx.size(0) - 1] + 9,
                                vidx, vidx + 1, colidx[colidx.size(0) - 1] - 1,
                                0);
            } else {
              int32_T nelem;
              nelem = (colidx[colidx.size(0) - 1] - vidx) - 1;
              if (nelem > 0) {
                std::memmove((void *)&rowidx[vidx], (void *)&rowidx[vidx],
                             (uint32_T)((size_t)nelem * sizeof(int32_T)));
                std::memmove((void *)&d[vidx], (void *)&d[vidx],
                             (uint32_T)((size_t)nelem * sizeof(real_T)));
              }
            }
            if (thisv != 0.0) {
              d[lb] = 1.0;
            } else {
              d[lb] = 1.0;
              rowidx[lb] = rowsToAssign;
            }
            if (cnt > 0) {
              f_st.site = &wjb_emlrtRSI;
              sparse::incrColIdx(f_st, this, prevcol, 1);
            }
          }
        }
      }
      lb = k;
      cnt = 1;
      prevcol = col;
    }
  }
}

void sparse::parenReference(const emlrtStack &sp, real_T varargin_2,
                            b_sparse &s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T nd_tmp;
  int32_T upperBound;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &drb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &dxb_emlrtRSI;
  c_st.site = &exb_emlrtRSI;
  upperBound = n;
  if ((!(muDoubleScalarFloor(varargin_2) == varargin_2)) ||
      muDoubleScalarIsInf(varargin_2) || (!(varargin_2 > 0.0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &uc_emlrtRTEI,
                                  "Coder:MATLAB:badsubscript",
                                  "Coder:MATLAB:badsubscript", 0);
  }
  if (!(varargin_2 <= upperBound)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &vc_emlrtRTEI,
                                  "Coder:builtins:IndexOutOfBounds",
                                  "Coder:builtins:IndexOutOfBounds", 6, 6,
                                  varargin_2, 12, 1, 12, upperBound);
  }
  upperBound = colidx[static_cast<int32_T>(varargin_2) - 1];
  nd_tmp = colidx[static_cast<int32_T>(varargin_2)] - upperBound;
  if ((nd_tmp > m) && (m != 0)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &nd_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  c_st.site = &fxb_emlrtRSI;
  d_st.site = &yhb_emlrtRSI;
  s.init(d_st, m, nd_tmp);
  if (nd_tmp != 0) {
    c_st.site = &gxb_emlrtRSI;
    if (nd_tmp > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T k{0}; k < nd_tmp; k++) {
      int32_T i;
      i = (upperBound + k) - 1;
      s.d[k] = d[i];
      s.rowidx[k] = rowidx[i];
    }
    s.colidx[1] = s.colidx[0] + nd_tmp;
  }
}

void b_sparse::parenReference(const emlrtStack &sp, b_sparse &s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T nd_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &drb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &dxb_emlrtRSI;
  nd_tmp = colidx[1] - colidx[0];
  if ((nd_tmp > m) && (m != 0)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &nd_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  c_st.site = &fxb_emlrtRSI;
  d_st.site = &yhb_emlrtRSI;
  s.init(d_st, m, nd_tmp);
  if (nd_tmp != 0) {
    int32_T colstart;
    colstart = colidx[0] - 2;
    c_st.site = &gxb_emlrtRSI;
    if (nd_tmp > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T k{0}; k < nd_tmp; k++) {
      int32_T i;
      i = (colstart + k) + 1;
      s.d[k] = d[i];
      s.rowidx[k] = rowidx[i];
    }
    s.colidx[1] = s.colidx[0] + nd_tmp;
  }
}

void sparse::parenReference(const emlrtStack &sp, real_T varargin_1,
                            c_sparse &s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T colNnz;
  int32_T i;
  int32_T k;
  int32_T sn;
  boolean_T found;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &drb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &rdc_emlrtRSI;
  c_st.site = &sdc_emlrtRSI;
  colNnz = m;
  if ((!(muDoubleScalarFloor(varargin_1) == varargin_1)) ||
      muDoubleScalarIsInf(varargin_1) || (!(varargin_1 > 0.0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &uc_emlrtRTEI,
                                  "Coder:MATLAB:badsubscript",
                                  "Coder:MATLAB:badsubscript", 0);
  }
  if (!(varargin_1 <= colNnz)) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &vc_emlrtRTEI, "Coder:builtins:IndexOutOfBounds",
        "Coder:builtins:IndexOutOfBounds", 6, 6, varargin_1, 12, 1, 12, colNnz);
  }
  sn = n;
  c_st.site = &tdc_emlrtRSI;
  if (n < 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &md_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  s.d.set_size(&ny_emlrtRTEI, &c_st, 0);
  s.rowidx.set_size(&ny_emlrtRTEI, &c_st, 0);
  if (n + 1 < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(n + 1), &eb_emlrtDCI,
                                &c_st);
  }
  colNnz = n + 1;
  s.colidx.set_size(&ny_emlrtRTEI, &c_st, n + 1);
  for (i = 0; i < colNnz; i++) {
    s.colidx[i] = 0;
  }
  s.colidx[0] = 1;
  colNnz = 1;
  k = 0;
  d_st.site = &irb_emlrtRSI;
  if (n > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  for (int32_T cidx{0}; cidx < sn; cidx++) {
    int32_T idx;
    idx = sparse_locBsearch(rowidx, static_cast<int32_T>(varargin_1),
                            colidx[cidx], colidx[cidx + 1], found);
    if (found) {
      real_T b_d;
      int32_T i1;
      i = s.d.size(0);
      i1 = s.d.size(0) + 1;
      s.d.set_size(&oy_emlrtRTEI, &c_st, s.d.size(0) + 1);
      b_d = d[idx - 1];
      s.d[i] = b_d;
      s.rowidx.set_size(&oy_emlrtRTEI, &c_st, i1);
      s.rowidx[i] = 1;
      s.d[k] = b_d;
      s.rowidx[k] = 1;
      k = i1;
      colNnz++;
    }
    s.colidx[cidx + 1] = colNnz;
  }
  i = s.colidx[s.colidx.size(0) - 1] - 1;
  if (i == 0) {
    s.rowidx.set_size(&ny_emlrtRTEI, &c_st, 1);
    s.rowidx[0] = 1;
    s.d.set_size(&ny_emlrtRTEI, &c_st, 1);
    s.d[0] = 0.0;
  }
  s.n = n;
  s.maxnz = muIntScalarMax_sint32(i, 1);
}

void sparse::parenReference(const emlrtStack &sp,
                            const array<real_T, 1U> &varargin_2,
                            sparse &s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T nd;
  int32_T nd_tmp;
  int32_T sn;
  int32_T ub;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &drb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &dxb_emlrtRSI;
  c_st.site = &exb_emlrtRSI;
  sparse_validateNumericIndex(c_st, n, varargin_2);
  sn = varargin_2.size(0);
  ub = m * varargin_2.size(0);
  nd = 0;
  c_st.site = &yfc_emlrtRSI;
  if (varargin_2.size(0) > 2147483646) {
    d_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (int32_T cidx{0}; cidx < sn; cidx++) {
    nd_tmp = static_cast<int32_T>(varargin_2[cidx]);
    nd = (nd + colidx[nd_tmp]) - colidx[nd_tmp - 1];
  }
  if ((nd > ub) && (ub != 0)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &nd_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  c_st.site = &fxb_emlrtRSI;
  sparse::spallocLike(c_st, m, varargin_2.size(0), nd, s);
  if (nd != 0) {
    int32_T outIdx;
    outIdx = 0;
    c_st.site = &agc_emlrtRSI;
    for (int32_T cidx{0}; cidx < sn; cidx++) {
      int32_T colstart_tmp;
      ub = static_cast<int32_T>(varargin_2[cidx]);
      colstart_tmp = colidx[ub - 1];
      ub = colidx[ub] - colstart_tmp;
      c_st.site = &gxb_emlrtRSI;
      if (ub > 2147483646) {
        d_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (int32_T k{0}; k < ub; k++) {
        nd = (colstart_tmp + k) - 1;
        nd_tmp = outIdx + k;
        s.d[nd_tmp] = d[nd];
        s.rowidx[nd_tmp] = rowidx[nd];
      }
      if (ub - 1 >= 0) {
        outIdx += ub;
      }
      s.colidx[cidx + 1] = s.colidx[cidx] + ub;
    }
  }
}

void sparse::parenReference(const emlrtStack &sp,
                            const array<real_T, 1U> &varargin_1,
                            const array<real_T, 1U> &varargin_2,
                            sparse &s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T colNnz;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T sn_tmp;
  boolean_T found;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &drb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &erb_emlrtRSI;
  c_st.site = &frb_emlrtRSI;
  sparse_validateNumericIndex(c_st, m, varargin_1);
  c_st.site = &grb_emlrtRSI;
  sparse_validateNumericIndex(c_st, n, varargin_2);
  i = varargin_1.size(0);
  sn_tmp = varargin_2.size(0);
  c_st.site = &hrb_emlrtRSI;
  if (varargin_1.size(0) * varargin_2.size(0) < 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &md_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  s.d.set_size(&ny_emlrtRTEI, &c_st, 0);
  s.rowidx.set_size(&ny_emlrtRTEI, &c_st, 0);
  found = (varargin_2.size(0) + 1 < 0);
  if (found) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(varargin_2.size(0) + 1),
                                &eb_emlrtDCI, &c_st);
  }
  colNnz = varargin_2.size(0) + 1;
  s.colidx.set_size(&ny_emlrtRTEI, &c_st, varargin_2.size(0) + 1);
  for (i1 = 0; i1 < colNnz; i1++) {
    s.colidx[i1] = 0;
  }
  s.colidx[0] = 1;
  colNnz = 1;
  k = 0;
  d_st.site = &irb_emlrtRSI;
  if (varargin_2.size(0) > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  for (int32_T cidx{0}; cidx < sn_tmp; cidx++) {
    real_T nt;
    nt = varargin_2[cidx];
    d_st.site = &jrb_emlrtRSI;
    if (i > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (int32_T ridx{0}; ridx < i; ridx++) {
      int32_T idx;
      idx = sparse_locBsearch(rowidx, static_cast<int32_T>(varargin_1[ridx]),
                              colidx[static_cast<int32_T>(nt) - 1],
                              colidx[static_cast<int32_T>(nt)], found);
      if (found) {
        real_T b_d;
        i1 = s.d.size(0);
        s.d.set_size(&oy_emlrtRTEI, &c_st, s.d.size(0) + 1);
        b_d = d[idx - 1];
        s.d[i1] = b_d;
        i1 = s.rowidx.size(0);
        s.rowidx.set_size(&oy_emlrtRTEI, &c_st, s.rowidx.size(0) + 1);
        s.rowidx[i1] = ridx + 1;
        s.d[k] = b_d;
        s.rowidx[k] = ridx + 1;
        k++;
        colNnz++;
      }
    }
    s.colidx[cidx + 1] = colNnz;
  }
  if (s.colidx[s.colidx.size(0) - 1] - 1 == 0) {
    s.rowidx.set_size(&ny_emlrtRTEI, &c_st, 1);
    s.rowidx[0] = 1;
    s.d.set_size(&ny_emlrtRTEI, &c_st, 1);
    s.d[0] = 0.0;
  }
  s.m = varargin_1.size(0);
  s.n = varargin_2.size(0);
  i = s.colidx[s.colidx.size(0) - 1] - 1;
  s.maxnz = muIntScalarMax_sint32(i, 1);
}

void sparse::permuteVector(const emlrtStack &sp, const array<int32_T, 1U> &idx,
                           array<int32_T, 1U> &y)
{
  array<int32_T, 1U> t;
  emlrtStack b_st;
  emlrtStack st;
  int32_T ny_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  ny_tmp = y.size(0);
  t.set_size(&ndc_emlrtRTEI, &sp, ny_tmp);
  for (int32_T k{0}; k < ny_tmp; k++) {
    t[k] = y[k];
  }
  st.site = &yyc_emlrtRSI;
  if (y.size(0) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T k{0}; k < ny_tmp; k++) {
    y[k] = t[idx[k] - 1];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sparse::spallocLike(const emlrtStack &sp, int32_T b_m, int32_T b_n,
                         int32_T nzmax, f_sparse &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T numalloc;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &yhb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &eib_emlrtRSI;
  if (b_m < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (b_m >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  b_st.site = &dib_emlrtRSI;
  if (b_n < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (b_n >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  s.m = b_m;
  s.n = b_n;
  b_st.site = &cib_emlrtRSI;
  if (nzmax < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (nzmax >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  numalloc = muIntScalarMax_sint32(nzmax, 1);
  s.d.set_size(&aw_emlrtRTEI, &st, numalloc);
  for (int32_T i{0}; i < numalloc; i++) {
    s.d[i] = false;
  }
  s.colidx.set_size(&aw_emlrtRTEI, &st, b_n + 1);
  for (int32_T i{0}; i <= b_n; i++) {
    s.colidx[i] = 0;
  }
  s.colidx[0] = 1;
  s.rowidx.set_size(&aw_emlrtRTEI, &st, numalloc);
  for (int32_T i{0}; i < numalloc; i++) {
    s.rowidx[i] = 0;
  }
  for (numalloc = 0; numalloc < b_n; numalloc++) {
    s.colidx[numalloc + 1] = 1;
  }
  s.fillIn();
}

void sparse::spallocLike(const emlrtStack &sp, int32_T b_m, int32_T b_n,
                         int32_T nzmax, sparse &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T numalloc;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &yhb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &eib_emlrtRSI;
  if (b_m < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (b_m >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  b_st.site = &dib_emlrtRSI;
  if (b_n < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (b_n >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  s.m = b_m;
  s.n = b_n;
  b_st.site = &cib_emlrtRSI;
  if (nzmax < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (nzmax >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  numalloc = muIntScalarMax_sint32(nzmax, 1);
  s.d.set_size(&aw_emlrtRTEI, &st, numalloc);
  for (int32_T i{0}; i < numalloc; i++) {
    s.d[i] = 0.0;
  }
  s.maxnz = numalloc;
  s.colidx.set_size(&aw_emlrtRTEI, &st, b_n + 1);
  for (int32_T i{0}; i <= b_n; i++) {
    s.colidx[i] = 0;
  }
  s.colidx[0] = 1;
  s.rowidx.set_size(&aw_emlrtRTEI, &st, numalloc);
  for (int32_T i{0}; i < numalloc; i++) {
    s.rowidx[i] = 0;
  }
  for (numalloc = 0; numalloc < b_n; numalloc++) {
    s.colidx[numalloc + 1] = 1;
  }
  s.fillIn();
}

void c_sparse::spones(const emlrtStack &sp, c_sparse &y) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &pmb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &yhb_emlrtRSI;
  c_st.site = &dib_emlrtRSI;
  if (n < 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (n >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  y.n = n;
  c_st.site = &cib_emlrtRSI;
  if (maxnz < 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (maxnz >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  y.maxnz = muIntScalarMax_sint32(maxnz, 1);
  y.colidx.set_size(&lx_emlrtRTEI, &b_st, n + 1);
  loop_ub = n;
  for (int32_T i{0}; i <= loop_ub; i++) {
    y.colidx[i] = 0;
  }
  loop_ub = rowidx.size(0);
  y.rowidx.set_size(&mx_emlrtRTEI, &sp, rowidx.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    y.rowidx[i] = rowidx[i];
  }
  loop_ub = colidx.size(0);
  y.colidx.set_size(&nx_emlrtRTEI, &sp, colidx.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    y.colidx[i] = colidx[i];
  }
  loop_ub = colidx[colidx.size(0) - 1] - 1;
  if (loop_ub < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(loop_ub), &v_emlrtDCI,
                                (emlrtConstCTX)&sp);
  }
  y.d.set_size(&ox_emlrtRTEI, &sp, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    y.d[i] = 1.0;
  }
}

void sparse::vertcat(const emlrtStack &sp, const c_sparse &varargin_2,
                     sparse &c) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T cncols;
  int32_T cnrows;
  int32_T nzCount;
  boolean_T emptyflag_idx_0;
  boolean_T emptyflag_idx_1;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &rhb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  nzCount = sparse_catCheck(st, this, varargin_2, cnrows, cncols);
  st.site = &shb_emlrtRSI;
  b_st.site = &vhb_emlrtRSI;
  c_st.site = &whb_emlrtRSI;
  sparse::spallocLike(c_st, cnrows, cncols, nzCount, c);
  nzCount = -1;
  if ((m == 0) || (n == 0)) {
    emptyflag_idx_0 = true;
  } else {
    emptyflag_idx_0 = false;
  }
  emptyflag_idx_1 = (varargin_2.n == 0);
  cnrows = c.n;
  c_st.site = &xhb_emlrtRSI;
  if (c.n > 2147483646) {
    d_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (int32_T ccol{0}; ccol < cnrows; ccol++) {
    if (!emptyflag_idx_0) {
      c_st.site = &unb_emlrtRSI;
    }
    if (!emptyflag_idx_1) {
      int32_T kpend;
      cncols = varargin_2.colidx[ccol];
      kpend = varargin_2.colidx[ccol + 1];
      c_st.site = &unb_emlrtRSI;
      if ((cncols <= varargin_2.colidx[ccol + 1] - 1) &&
          (varargin_2.colidx[ccol + 1] - 1 > 2147483646)) {
        d_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (int32_T kp{cncols}; kp < kpend; kp++) {
        int32_T i;
        i = ((nzCount + kp) - cncols) + 1;
        c.rowidx[i] = varargin_2.rowidx[kp - 1];
        c.d[i] = varargin_2.d[kp - 1];
      }
      nzCount = (nzCount + varargin_2.colidx[ccol + 1]) - cncols;
    }
    c.colidx[ccol + 1] = nzCount + 2;
  }
}

void sparse::zerosLike(const emlrtStack &sp, d_sparse &y)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &xad_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &yad_emlrtRSI;
  y.d.set_size(&tob_emlrtRTEI, &b_st, 1);
  y.colidx.set_size(&tob_emlrtRTEI, &b_st, 2);
  y.colidx[0] = 1;
  y.rowidx.set_size(&tob_emlrtRTEI, &b_st, 1);
  y.rowidx[0] = 1;
  y.colidx[1] = 2;
  y.d[0] = 0.0;
  y.fillIn();
}

} // namespace coder

// End of code generation (sparse1.cpp)
