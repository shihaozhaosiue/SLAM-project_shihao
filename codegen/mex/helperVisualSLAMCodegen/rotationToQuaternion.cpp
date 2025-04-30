//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rotationToQuaternion.cpp
//
// Code generation for function 'rotationToQuaternion'
//

// Include files
#include "rotationToQuaternion.h"
#include "helperVisualSLAMCodegen_data.h"
#include "indexShapeCheck.h"
#include "ixfun.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "squeeze.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo jvb_emlrtRSI{
    19,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

static emlrtRSInfo kvb_emlrtRSI{
    20,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

static emlrtRSInfo lvb_emlrtRSI{
    21,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

static emlrtRSInfo mvb_emlrtRSI{
    22,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

static emlrtRSInfo nvb_emlrtRSI{
    23,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

static emlrtRSInfo ovb_emlrtRSI{
    24,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

static emlrtRSInfo pvb_emlrtRSI{
    25,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

static emlrtRSInfo qvb_emlrtRSI{
    26,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

static emlrtRSInfo rvb_emlrtRSI{
    27,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

static emlrtRSInfo svb_emlrtRSI{
    39,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

static emlrtRSInfo kwb_emlrtRSI{
    79,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

static emlrtRSInfo
    lwb_emlrtRSI{
        49,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo
    mwb_emlrtRSI{
        78,         // lineNo
        "maximum2", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtECInfo xb_emlrtECI{
    1,                      // nDims
    29,                     // lineNo
    5,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo yb_emlrtECI{
    1,                      // nDims
    42,                     // lineNo
    26,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo ac_emlrtECI{
    1,                      // nDims
    42,                     // lineNo
    13,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo bc_emlrtECI{
    1,                      // nDims
    43,                     // lineNo
    26,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo cc_emlrtECI{
    1,                      // nDims
    43,                     // lineNo
    13,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo dc_emlrtECI{
    1,                      // nDims
    44,                     // lineNo
    26,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtECInfo ec_emlrtECI{
    1,                      // nDims
    44,                     // lineNo
    13,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtBCInfo ck_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    47,                     // lineNo
    27,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo dk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    47,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo ek_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    48,                     // lineNo
    29,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo fk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    48,                     // lineNo
    45,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo gk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    48,                     // lineNo
    61,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo hk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    48,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo ik_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    49,                     // lineNo
    29,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo jk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    49,                     // lineNo
    45,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo kk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    49,                     // lineNo
    61,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo lk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    49,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo mk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    50,                     // lineNo
    29,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo nk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    50,                     // lineNo
    45,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo ok_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    50,                     // lineNo
    61,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo pk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    50,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo qk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    56,                     // lineNo
    24,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo rk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    56,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo sk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    57,                     // lineNo
    20,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo tk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    57,                     // lineNo
    36,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo uk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    57,                     // lineNo
    52,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo vk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    57,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo wk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    58,                     // lineNo
    20,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo xk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    58,                     // lineNo
    36,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo yk_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    58,                     // lineNo
    52,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo al_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    58,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo bl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    59,                     // lineNo
    20,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo cl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    59,                     // lineNo
    36,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo dl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    59,                     // lineNo
    52,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo el_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    59,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo fl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    62,                     // lineNo
    21,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo gl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    62,                     // lineNo
    38,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo hl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    62,                     // lineNo
    55,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo il_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    62,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo jl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    63,                     // lineNo
    24,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo kl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    63,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo ll_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    64,                     // lineNo
    21,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo ml_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    64,                     // lineNo
    37,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo nl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    64,                     // lineNo
    53,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo ol_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    64,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo pl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    65,                     // lineNo
    21,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo ql_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    65,                     // lineNo
    37,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo rl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    65,                     // lineNo
    53,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo sl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    65,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo tl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    68,                     // lineNo
    21,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo ul_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    68,                     // lineNo
    38,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo vl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    68,                     // lineNo
    55,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo wl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    68,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo xl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    69,                     // lineNo
    21,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo yl_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    69,                     // lineNo
    37,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo am_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    69,                     // lineNo
    53,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo bm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    69,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo cm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    70,                     // lineNo
    24,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo dm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    70,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo em_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    71,                     // lineNo
    21,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo fm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    71,                     // lineNo
    37,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo gm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    71,                     // lineNo
    53,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo hm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    71,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo im_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    74,                     // lineNo
    21,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo jm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    74,                     // lineNo
    38,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo km_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    74,                     // lineNo
    55,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo lm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    74,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo mm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    75,                     // lineNo
    21,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo nm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    75,                     // lineNo
    37,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo om_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    75,                     // lineNo
    53,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo pm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    75,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo qm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    76,                     // lineNo
    21,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo rm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    76,                     // lineNo
    37,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo sm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    76,                     // lineNo
    53,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo tm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    76,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo um_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    77,                     // lineNo
    24,                     // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo vm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    77,                     // lineNo
    1,                      // colNo
    "",                     // aName
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m", // pName
    0                                     // checkKind
};

static emlrtRTEInfo ybb_emlrtRTEI{
    19,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo acb_emlrtRTEI{
    20,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo bcb_emlrtRTEI{
    21,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo ccb_emlrtRTEI{
    22,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo dcb_emlrtRTEI{
    23,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo ecb_emlrtRTEI{
    24,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo fcb_emlrtRTEI{
    25,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo gcb_emlrtRTEI{
    26,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo hcb_emlrtRTEI{
    27,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo icb_emlrtRTEI{
    29,                     // lineNo
    5,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo jcb_emlrtRTEI{
    29,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo kcb_emlrtRTEI{
    33,                     // lineNo
    5,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo lcb_emlrtRTEI{
    34,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo mcb_emlrtRTEI{
    35,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo ncb_emlrtRTEI{
    36,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo ocb_emlrtRTEI{
    37,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo pcb_emlrtRTEI{
    15,    // lineNo
    5,     // colNo
    "max", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" // pName
};

static emlrtRTEInfo qcb_emlrtRTEI{
    39,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo rcb_emlrtRTEI{
    42,                     // lineNo
    13,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo scb_emlrtRTEI{
    42,                     // lineNo
    26,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo tcb_emlrtRTEI{
    42,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo ucb_emlrtRTEI{
    43,                     // lineNo
    26,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo vcb_emlrtRTEI{
    43,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo wcb_emlrtRTEI{
    44,                     // lineNo
    26,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo xcb_emlrtRTEI{
    44,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo ycb_emlrtRTEI{
    1,                      // lineNo
    23,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo edb_emlrtRTEI{
    53,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo fdb_emlrtRTEI{
    56,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo kdb_emlrtRTEI{
    63,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo pdb_emlrtRTEI{
    70,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo udb_emlrtRTEI{
    77,                     // lineNo
    16,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo vdb_emlrtRTEI{
    79,                     // lineNo
    1,                      // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo bfc_emlrtRTEI{
    44,                     // lineNo
    13,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRTEInfo cfc_emlrtRTEI{
    43,                     // lineNo
    13,                     // colNo
    "rotationToQuaternion", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pName
};

static emlrtRSInfo ejd_emlrtRSI{
    44,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

static emlrtRSInfo fjd_emlrtRSI{
    43,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

static emlrtRSInfo gjd_emlrtRSI{
    42,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

static emlrtRSInfo hjd_emlrtRSI{
    29,                     // lineNo
    "rotationToQuaternion", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "quaternion\\rotationToQuaternion.m" // pathName
};

// Function Declarations
static void b_plus(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                   const coder::array<real_T, 2U> &in2);

static void d_and(const emlrtStack &sp, coder::array<boolean_T, 2U> &in1,
                  const coder::array<boolean_T, 2U> &in2);

static void e_and(const emlrtStack &sp, coder::array<boolean_T, 2U> &in1,
                  const coder::array<boolean_T, 2U> &in2);

static void eq(const emlrtStack &sp, coder::array<boolean_T, 2U> &in1,
               const coder::array<real_T, 2U> &in2,
               const coder::array<real_T, 2U> &in3);

static void plus(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                 const coder::array<real_T, 2U> &in2,
                 const coder::array<real_T, 2U> &in3);

// Function Definitions
static void b_plus(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                   const coder::array<real_T, 2U> &in2)
{
  coder::array<real_T, 2U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  b_in1.set_size(&icb_emlrtRTEI, &sp, loop_ub, 1);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_0] + in2[i * stride_1_0];
  }
  in1.set_size(&icb_emlrtRTEI, &sp, loop_ub, 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void d_and(const emlrtStack &sp, coder::array<boolean_T, 2U> &in1,
                  const coder::array<boolean_T, 2U> &in2)
{
  coder::array<boolean_T, 2U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  b_in1.set_size(&bfc_emlrtRTEI, &sp, loop_ub, 1);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = (in1[i * stride_0_0] && in2[i * stride_1_0]);
  }
  in1.set_size(&bfc_emlrtRTEI, &sp, loop_ub, 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void e_and(const emlrtStack &sp, coder::array<boolean_T, 2U> &in1,
                  const coder::array<boolean_T, 2U> &in2)
{
  coder::array<boolean_T, 2U> b_in2;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in1.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in1.size(0);
  }
  b_in2.set_size(&cfc_emlrtRTEI, &sp, loop_ub, 1);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in1.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in2[i] = (in2[i * stride_0_0] && in1[i * stride_1_0]);
  }
  in1.set_size(&cfc_emlrtRTEI, &sp, loop_ub, 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void eq(const emlrtStack &sp, coder::array<boolean_T, 2U> &in1,
               const coder::array<real_T, 2U> &in2,
               const coder::array<real_T, 2U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&wcb_emlrtRTEI, &sp, loop_ub, 1);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] == in3[i * stride_1_0]);
  }
}

static void plus(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                 const coder::array<real_T, 2U> &in2,
                 const coder::array<real_T, 2U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&icb_emlrtRTEI, &sp, loop_ub, 1);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = in2[i * stride_0_0] + in3[i * stride_1_0];
  }
}

void binary_expand_op_23(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                         real_T in2, const int32_T in3_size[2])
{
  real_T in1_data;
  int32_T loop_ub;
  int32_T stride_0_1;
  if (in3_size[1] == 1) {
    loop_ub = in1.size(1);
  } else {
    loop_ub = in3_size[1];
  }
  stride_0_1 = (in1.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1_data = in1[i * stride_0_1] * in2;
  }
  in1.set_size(&tdb_emlrtRTEI, &sp, 1, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[0] = in1_data;
  }
}

namespace coder {
namespace vision {
namespace internal {
namespace quaternion {
void rotationToQuaternion(const emlrtStack &sp, const array<real_T, 3U> &R,
                          array<real_T, 2U> &b_quaternion)
{
  __m128d b_r;
  __m128d r1;
  array<real_T, 3U> b_R;
  array<real_T, 2U> Qxx;
  array<real_T, 2U> Qxy;
  array<real_T, 2U> Qxz;
  array<real_T, 2U> Qyx;
  array<real_T, 2U> Qyy;
  array<real_T, 2U> Qyz;
  array<real_T, 2U> Qzx;
  array<real_T, 2U> Qzy;
  array<real_T, 2U> Qzz;
  array<real_T, 2U> maxv;
  array<real_T, 2U> maxval;
  array<real_T, 2U> t;
  array<real_T, 1U> c_r;
  array<real_T, 1U> r4;
  array<real_T, 1U> s;
  array<real_T, 1U> w;
  array<real_T, 1U> x;
  array<real_T, 1U> y;
  array<real_T, 1U> z;
  array<int32_T, 1U> r3;
  array<int32_T, 1U> r5;
  array<int32_T, 1U> r6;
  array<int32_T, 1U> r7;
  array<boolean_T, 2U> qxxismax;
  array<boolean_T, 2U> qyyismax;
  array<boolean_T, 2U> qzzismax;
  array<boolean_T, 2U> r2;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  real_T varargin_1;
  real_T varargin_2;
  int32_T b_iv[2];
  int32_T b_iv1[2];
  int32_T b_t[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T b_loop_ub_tmp;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
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
  loop_ub = R.size(2);
  b_R.set_size(&ybb_emlrtRTEI, &sp, 1, 1, R.size(2));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_R[i] = R[9 * i];
  }
  st.site = &jvb_emlrtRSI;
  squeeze(st, b_R, Qxx);
  b_R.set_size(&acb_emlrtRTEI, &sp, 1, 1, R.size(2));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_R[i] = R[9 * i + 3];
  }
  st.site = &kvb_emlrtRSI;
  squeeze(st, b_R, Qxy);
  b_R.set_size(&bcb_emlrtRTEI, &sp, 1, 1, R.size(2));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_R[i] = R[9 * i + 6];
  }
  st.site = &lvb_emlrtRSI;
  squeeze(st, b_R, Qxz);
  b_R.set_size(&ccb_emlrtRTEI, &sp, 1, 1, R.size(2));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_R[i] = R[9 * i + 1];
  }
  st.site = &mvb_emlrtRSI;
  squeeze(st, b_R, Qyx);
  b_R.set_size(&dcb_emlrtRTEI, &sp, 1, 1, R.size(2));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_R[i] = R[9 * i + 4];
  }
  st.site = &nvb_emlrtRSI;
  squeeze(st, b_R, Qyy);
  b_R.set_size(&ecb_emlrtRTEI, &sp, 1, 1, R.size(2));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_R[i] = R[9 * i + 7];
  }
  st.site = &ovb_emlrtRSI;
  squeeze(st, b_R, Qyz);
  b_R.set_size(&fcb_emlrtRTEI, &sp, 1, 1, R.size(2));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_R[i] = R[9 * i + 2];
  }
  st.site = &pvb_emlrtRSI;
  squeeze(st, b_R, Qzx);
  b_R.set_size(&gcb_emlrtRTEI, &sp, 1, 1, R.size(2));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_R[i] = R[9 * i + 5];
  }
  st.site = &qvb_emlrtRSI;
  squeeze(st, b_R, Qzy);
  b_R.set_size(&hcb_emlrtRTEI, &sp, 1, 1, R.size(2));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_R[i] = R[9 * i + 8];
  }
  st.site = &rvb_emlrtRSI;
  squeeze(st, b_R, Qzz);
  b_loop_ub = Qxx.size(0);
  if ((Qxx.size(0) != Qyy.size(0)) &&
      ((Qxx.size(0) != 1) && (Qyy.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(Qxx.size(0), Qyy.size(0), &xb_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (Qxx.size(0) == Qyy.size(0)) {
    t.set_size(&icb_emlrtRTEI, &sp, Qxx.size(0), 1);
    scalarLB = (Qxx.size(0) / 2) << 1;
    vectorUB = scalarLB - 2;
    for (int32_T i{0}; i <= vectorUB; i += 2) {
      b_r = _mm_loadu_pd(&Qxx[i]);
      r1 = _mm_loadu_pd(&Qyy[i]);
      _mm_storeu_pd(&t[i], _mm_add_pd(b_r, r1));
    }
    for (int32_T i{scalarLB}; i < b_loop_ub; i++) {
      t[i] = Qxx[i] + Qyy[i];
    }
  } else {
    st.site = &hjd_emlrtRSI;
    plus(st, t, Qxx, Qyy);
  }
  if ((t.size(0) != Qzz.size(0)) && ((t.size(0) != 1) && (Qzz.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(t.size(0), Qzz.size(0), &xb_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (t.size(0) == Qzz.size(0)) {
    b_loop_ub = t.size(0) - 1;
    t.set_size(&jcb_emlrtRTEI, &sp, t.size(0), 1);
    scalarLB = (t.size(0) / 2) << 1;
    vectorUB = scalarLB - 2;
    for (int32_T i{0}; i <= vectorUB; i += 2) {
      b_r = _mm_loadu_pd(&t[i]);
      r1 = _mm_loadu_pd(&Qzz[i]);
      _mm_storeu_pd(&t[i], _mm_add_pd(b_r, r1));
    }
    for (int32_T i{scalarLB}; i <= b_loop_ub; i++) {
      t[i] = t[i] + Qzz[i];
    }
  } else {
    st.site = &hjd_emlrtRSI;
    b_plus(st, t, Qzz);
  }
  c_r.set_size(&kcb_emlrtRTEI, &sp, R.size(2));
  w.set_size(&lcb_emlrtRTEI, &sp, R.size(2));
  x.set_size(&mcb_emlrtRTEI, &sp, R.size(2));
  y.set_size(&ncb_emlrtRTEI, &sp, R.size(2));
  z.set_size(&ocb_emlrtRTEI, &sp, R.size(2));
  for (int32_T i{0}; i < loop_ub; i++) {
    c_r[i] = 0.0;
    w[i] = 0.0;
    x[i] = 0.0;
    y[i] = 0.0;
    z[i] = 0.0;
  }
  st.site = &svb_emlrtRSI;
  b_st.site = &mbb_emlrtRSI;
  c_st.site = &lwb_emlrtRSI;
  d_st.site = &mwb_emlrtRSI;
  e_st.site = &nwb_emlrtRSI;
  f_st.site = &wy_emlrtRSI;
  if (Qyy.size(0) == Qzz.size(0)) {
    loop_ub = Qyy.size(0);
    maxval.set_size(&pcb_emlrtRTEI, &f_st, Qyy.size(0), 1);
    for (int32_T i{0}; i < loop_ub; i++) {
      varargin_1 = Qyy[i];
      varargin_2 = Qzz[i];
      maxval[i] = muDoubleScalarMax(varargin_1, varargin_2);
    }
  } else {
    g_st.site = &xy_emlrtRSI;
    ::coder::internal::expand_max(g_st, Qyy, Qzz, maxval);
  }
  st.site = &svb_emlrtRSI;
  b_st.site = &mbb_emlrtRSI;
  c_st.site = &lwb_emlrtRSI;
  d_st.site = &mwb_emlrtRSI;
  e_st.site = &nwb_emlrtRSI;
  f_st.site = &wy_emlrtRSI;
  if (Qxx.size(0) == maxval.size(0)) {
    loop_ub = Qxx.size(0);
    maxv.set_size(&qcb_emlrtRTEI, &f_st, Qxx.size(0), 1);
    for (int32_T i{0}; i < loop_ub; i++) {
      varargin_1 = Qxx[i];
      varargin_2 = maxval[i];
      maxv[i] = muDoubleScalarMax(varargin_1, varargin_2);
    }
  } else {
    g_st.site = &xy_emlrtRSI;
    ::coder::internal::expand_max(g_st, Qxx, maxval, maxv);
  }
  loop_ub = maxv.size(0);
  if ((maxv.size(0) != Qxx.size(0)) &&
      ((maxv.size(0) != 1) && (Qxx.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(maxv.size(0), Qxx.size(0), &yb_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  b_loop_ub = t.size(0);
  qzzismax.set_size(&rcb_emlrtRTEI, &sp, t.size(0), 1);
  for (int32_T i{0}; i < b_loop_ub; i++) {
    qzzismax[i] = !(t[i] >= 0.0);
  }
  if (maxv.size(0) == Qxx.size(0)) {
    qxxismax.set_size(&scb_emlrtRTEI, &sp, maxv.size(0), 1);
    for (int32_T i{0}; i < loop_ub; i++) {
      qxxismax[i] = (maxv[i] == Qxx[i]);
    }
  } else {
    st.site = &gjd_emlrtRSI;
    eq(st, qxxismax, maxv, Qxx);
  }
  if ((t.size(0) != qxxismax.size(0)) &&
      ((t.size(0) != 1) && (qxxismax.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(t.size(0), qxxismax.size(0), &ac_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (qzzismax.size(0) == qxxismax.size(0)) {
    loop_ub = qzzismax.size(0) - 1;
    qxxismax.set_size(&tcb_emlrtRTEI, &sp, t.size(0), 1);
    for (int32_T i{0}; i <= loop_ub; i++) {
      qxxismax[i] = (qzzismax[i] && qxxismax[i]);
    }
  } else {
    st.site = &gjd_emlrtRSI;
    e_and(st, qxxismax, qzzismax);
  }
  loop_ub = maxv.size(0);
  if ((maxv.size(0) != Qyy.size(0)) &&
      ((maxv.size(0) != 1) && (Qyy.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(maxv.size(0), Qyy.size(0), &bc_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (maxv.size(0) == Qyy.size(0)) {
    qyyismax.set_size(&ucb_emlrtRTEI, &sp, maxv.size(0), 1);
    for (int32_T i{0}; i < loop_ub; i++) {
      qyyismax[i] = (maxv[i] == Qyy[i]);
    }
  } else {
    st.site = &fjd_emlrtRSI;
    eq(st, qyyismax, maxv, Qyy);
  }
  if ((qzzismax.size(0) != qyyismax.size(0)) &&
      ((qzzismax.size(0) != 1) && (qyyismax.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(qzzismax.size(0), qyyismax.size(0),
                                &cc_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (qzzismax.size(0) == qyyismax.size(0)) {
    loop_ub = qzzismax.size(0) - 1;
    qyyismax.set_size(&vcb_emlrtRTEI, &sp, qzzismax.size(0), 1);
    for (int32_T i{0}; i <= loop_ub; i++) {
      qyyismax[i] = (qzzismax[i] && qyyismax[i]);
    }
  } else {
    st.site = &fjd_emlrtRSI;
    e_and(st, qyyismax, qzzismax);
  }
  loop_ub = maxv.size(0);
  if ((maxv.size(0) != Qzz.size(0)) &&
      ((maxv.size(0) != 1) && (Qzz.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(maxv.size(0), Qzz.size(0), &dc_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (maxv.size(0) == Qzz.size(0)) {
    r2.set_size(&wcb_emlrtRTEI, &sp, maxv.size(0), 1);
    for (int32_T i{0}; i < loop_ub; i++) {
      r2[i] = (maxv[i] == Qzz[i]);
    }
  } else {
    st.site = &ejd_emlrtRSI;
    eq(st, r2, maxv, Qzz);
  }
  if ((qzzismax.size(0) != r2.size(0)) &&
      ((qzzismax.size(0) != 1) && (r2.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(qzzismax.size(0), r2.size(0), &ec_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (qzzismax.size(0) == r2.size(0)) {
    loop_ub = qzzismax.size(0) - 1;
    qzzismax.set_size(&xcb_emlrtRTEI, &sp, qzzismax.size(0), 1);
    for (int32_T i{0}; i <= loop_ub; i++) {
      qzzismax[i] = (qzzismax[i] && r2[i]);
    }
  } else {
    st.site = &ejd_emlrtRSI;
    d_and(st, qzzismax, r2);
  }
  b_t[0] = t.size(0);
  b_t[1] = 1;
  b_iv[0] = (*(int32_T(*)[2])t.size())[0];
  b_iv[1] = (*(int32_T(*)[2])t.size())[1];
  st.site = &tvb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_t);
  scalarLB = 0;
  for (b_i = 0; b_i < b_loop_ub; b_i++) {
    if (t[b_i] >= 0.0) {
      scalarLB++;
    }
  }
  r3.set_size(&ycb_emlrtRTEI, &sp, scalarLB);
  scalarLB = 0;
  for (b_i = 0; b_i < b_loop_ub; b_i++) {
    if (t[b_i] >= 0.0) {
      r3[scalarLB] = b_i;
      scalarLB++;
    }
  }
  loop_ub = r3.size(0);
  r4.set_size(&adb_emlrtRTEI, &sp, r3.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > t.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, t.size(0) - 1, &ck_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    r4[i] = t[r3[i]] + 1.0;
  }
  st.site = &tvb_emlrtRSI;
  b_sqrt(st, r4);
  b_loop_ub = r4.size(0);
  if (r3.size(0) != r4.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(r3.size(0), r4.size(0), &fc_emlrtECI,
                                    (emlrtConstCTX)&sp);
  }
  for (int32_T i{0}; i < b_loop_ub; i++) {
    if (r3[i] > R.size(2) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, R.size(2) - 1, &dk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    c_r[r3[i]] = r4[i];
  }
  b_iv[0] = (*(int32_T(*)[2])Qxx.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qxx.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qxxismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qxxismax.size())[1];
  st.site = &uvb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  b_iv[0] = (*(int32_T(*)[2])Qyy.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qyy.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qxxismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qxxismax.size())[1];
  st.site = &uvb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  vectorUB = qxxismax.size(0);
  scalarLB = 0;
  for (b_i = 0; b_i < vectorUB; b_i++) {
    if (qxxismax[b_i]) {
      scalarLB++;
    }
  }
  r5.set_size(&ycb_emlrtRTEI, &sp, scalarLB);
  scalarLB = 0;
  for (b_i = 0; b_i < vectorUB; b_i++) {
    if (qxxismax[b_i]) {
      r5[scalarLB] = b_i;
      scalarLB++;
    }
  }
  loop_ub_tmp = r5.size(0);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > Qxx.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, Qxx.size(0) - 1, &ek_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > Qyy.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, Qyy.size(0) - 1, &fk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  b_iv[0] = (*(int32_T(*)[2])Qzz.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qzz.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qxxismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qxxismax.size())[1];
  st.site = &uvb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > Qzz.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, Qzz.size(0) - 1, &gk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&bdb_emlrtRTEI, &sp, r5.size(0));
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    r4[i] = ((Qxx[r5[i]] + 1.0) - Qyy[r5[i]]) - Qzz[r5[i]];
  }
  st.site = &uvb_emlrtRSI;
  b_sqrt(st, r4);
  b_loop_ub = r4.size(0);
  if (r5.size(0) != r4.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(r5.size(0), r4.size(0), &gc_emlrtECI,
                                    (emlrtConstCTX)&sp);
  }
  for (int32_T i{0}; i < b_loop_ub; i++) {
    if (r5[i] > c_r.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, c_r.size(0) - 1, &hk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    c_r[r5[i]] = r4[i];
  }
  b_iv[0] = (*(int32_T(*)[2])Qyy.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qyy.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qyyismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qyyismax.size())[1];
  st.site = &vvb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  b_iv[0] = (*(int32_T(*)[2])Qxx.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qxx.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qyyismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qyyismax.size())[1];
  st.site = &vvb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  vectorUB = qyyismax.size(0);
  scalarLB = 0;
  for (b_i = 0; b_i < vectorUB; b_i++) {
    if (qyyismax[b_i]) {
      scalarLB++;
    }
  }
  r6.set_size(&ycb_emlrtRTEI, &sp, scalarLB);
  scalarLB = 0;
  for (b_i = 0; b_i < vectorUB; b_i++) {
    if (qyyismax[b_i]) {
      r6[scalarLB] = b_i;
      scalarLB++;
    }
  }
  b_loop_ub_tmp = r6.size(0);
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > Qyy.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, Qyy.size(0) - 1, &ik_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > Qxx.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, Qxx.size(0) - 1, &jk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  b_iv[0] = (*(int32_T(*)[2])Qzz.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qzz.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qyyismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qyyismax.size())[1];
  st.site = &vvb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > Qzz.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, Qzz.size(0) - 1, &kk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&cdb_emlrtRTEI, &sp, r6.size(0));
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    r4[i] = ((Qyy[r6[i]] + 1.0) - Qxx[r6[i]]) - Qzz[r6[i]];
  }
  st.site = &vvb_emlrtRSI;
  b_sqrt(st, r4);
  b_loop_ub = r4.size(0);
  if (r6.size(0) != r4.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(r6.size(0), r4.size(0), &hc_emlrtECI,
                                    (emlrtConstCTX)&sp);
  }
  for (int32_T i{0}; i < b_loop_ub; i++) {
    if (r6[i] > c_r.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, c_r.size(0) - 1, &lk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    c_r[r6[i]] = r4[i];
  }
  b_iv[0] = (*(int32_T(*)[2])Qzz.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qzz.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qzzismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qzzismax.size())[1];
  st.site = &wvb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  b_iv[0] = (*(int32_T(*)[2])Qxx.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qxx.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qzzismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qzzismax.size())[1];
  st.site = &wvb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  vectorUB = qzzismax.size(0);
  scalarLB = 0;
  for (b_i = 0; b_i < vectorUB; b_i++) {
    if (qzzismax[b_i]) {
      scalarLB++;
    }
  }
  r7.set_size(&ycb_emlrtRTEI, &sp, scalarLB);
  scalarLB = 0;
  for (b_i = 0; b_i < vectorUB; b_i++) {
    if (qzzismax[b_i]) {
      r7[scalarLB] = b_i;
      scalarLB++;
    }
  }
  b_i = r7.size(0);
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > Qzz.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, Qzz.size(0) - 1, &mk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > Qxx.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, Qxx.size(0) - 1, &nk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  b_iv[0] = (*(int32_T(*)[2])Qyy.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qyy.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qzzismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qzzismax.size())[1];
  st.site = &wvb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > Qyy.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, Qyy.size(0) - 1, &ok_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&ddb_emlrtRTEI, &sp, r7.size(0));
  for (int32_T i{0}; i < b_i; i++) {
    r4[i] = ((Qzz[r7[i]] + 1.0) - Qxx[r7[i]]) - Qyy[r7[i]];
  }
  st.site = &wvb_emlrtRSI;
  b_sqrt(st, r4);
  b_loop_ub = r4.size(0);
  if (r7.size(0) != r4.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(r7.size(0), r4.size(0), &ic_emlrtECI,
                                    (emlrtConstCTX)&sp);
  }
  for (int32_T i{0}; i < b_loop_ub; i++) {
    if (r7[i] > c_r.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, c_r.size(0) - 1, &pk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    c_r[r7[i]] = r4[i];
  }
  b_loop_ub = c_r.size(0);
  s.set_size(&edb_emlrtRTEI, &sp, c_r.size(0));
  scalarLB = (c_r.size(0) / 2) << 1;
  vectorUB = scalarLB - 2;
  for (int32_T i{0}; i <= vectorUB; i += 2) {
    b_r = _mm_loadu_pd(&c_r[i]);
    _mm_storeu_pd(&s[i], _mm_div_pd(_mm_set1_pd(0.5), b_r));
  }
  for (int32_T i{scalarLB}; i < b_loop_ub; i++) {
    s[i] = 0.5 / c_r[i];
  }
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > c_r.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, c_r.size(0) - 1, &qk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&fdb_emlrtRTEI, &sp, r3.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    r4[i] = 0.5 * c_r[r3[i]];
  }
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > R.size(2) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, R.size(2) - 1, &rk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    w[r3[i]] = r4[i];
  }
  b_iv[0] = (*(int32_T(*)[2])Qzy.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qzy.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qxxismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qxxismax.size())[1];
  st.site = &xvb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  b_iv[0] = (*(int32_T(*)[2])Qyz.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qyz.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qxxismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qxxismax.size())[1];
  st.site = &xvb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > Qzy.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, Qzy.size(0) - 1, &sk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > Qyz.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, Qyz.size(0) - 1, &tk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > s.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, s.size(0) - 1, &uk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&gdb_emlrtRTEI, &sp, r5.size(0));
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    r4[i] = (Qzy[r5[i]] - Qyz[r5[i]]) * s[r5[i]];
  }
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > w.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, w.size(0) - 1, &vk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    w[r5[i]] = r4[i];
  }
  b_iv[0] = (*(int32_T(*)[2])Qxz.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qxz.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qyyismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qyyismax.size())[1];
  st.site = &yvb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  b_iv[0] = (*(int32_T(*)[2])Qzx.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qzx.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qyyismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qyyismax.size())[1];
  st.site = &yvb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > Qxz.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, Qxz.size(0) - 1, &wk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > Qzx.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, Qzx.size(0) - 1, &xk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > s.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, s.size(0) - 1, &yk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&hdb_emlrtRTEI, &sp, r6.size(0));
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    r4[i] = (Qxz[r6[i]] - Qzx[r6[i]]) * s[r6[i]];
  }
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > w.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, w.size(0) - 1, &al_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    w[r6[i]] = r4[i];
  }
  b_iv[0] = (*(int32_T(*)[2])Qyx.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qyx.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qzzismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qzzismax.size())[1];
  st.site = &awb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  b_iv[0] = (*(int32_T(*)[2])Qxy.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qxy.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qzzismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qzzismax.size())[1];
  st.site = &awb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > Qyx.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, Qyx.size(0) - 1, &bl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > Qxy.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, Qxy.size(0) - 1, &cl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > s.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, s.size(0) - 1, &dl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&idb_emlrtRTEI, &sp, r7.size(0));
  for (int32_T i{0}; i < b_i; i++) {
    r4[i] = (Qyx[r7[i]] - Qxy[r7[i]]) * s[r7[i]];
  }
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > w.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, w.size(0) - 1, &el_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    w[r7[i]] = r4[i];
  }
  b_t[0] = t.size(0);
  b_t[1] = 1;
  b_iv[0] = (*(int32_T(*)[2])Qzy.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qzy.size())[1];
  st.site = &bwb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_t);
  b_t[0] = t.size(0);
  b_t[1] = 1;
  b_iv1[0] = (*(int32_T(*)[2])Qyz.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])Qyz.size())[1];
  st.site = &bwb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv1, b_t);
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > Qzy.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, Qzy.size(0) - 1, &fl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > Qyz.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, Qyz.size(0) - 1, &gl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > s.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, s.size(0) - 1, &hl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&jdb_emlrtRTEI, &sp, r3.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    r4[i] = (Qzy[r3[i]] - Qyz[r3[i]]) * s[r3[i]];
  }
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > R.size(2) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, R.size(2) - 1, &il_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    x[r3[i]] = r4[i];
  }
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > c_r.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, c_r.size(0) - 1, &jl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&kdb_emlrtRTEI, &sp, r5.size(0));
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    r4[i] = 0.5 * c_r[r5[i]];
  }
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > x.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, x.size(0) - 1, &kl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    x[r5[i]] = r4[i];
  }
  b_iv[0] = (*(int32_T(*)[2])Qyx.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qyx.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qyyismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qyyismax.size())[1];
  st.site = &cwb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  b_iv[0] = (*(int32_T(*)[2])Qxy.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qxy.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qyyismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qyyismax.size())[1];
  st.site = &cwb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > Qyx.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, Qyx.size(0) - 1, &ll_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > Qxy.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, Qxy.size(0) - 1, &ml_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > s.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, s.size(0) - 1, &nl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&ldb_emlrtRTEI, &sp, r6.size(0));
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    r4[i] = (Qyx[r6[i]] + Qxy[r6[i]]) * s[r6[i]];
  }
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > x.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, x.size(0) - 1, &ol_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    x[r6[i]] = r4[i];
  }
  b_iv[0] = (*(int32_T(*)[2])Qxz.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qxz.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qzzismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qzzismax.size())[1];
  st.site = &dwb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  b_iv[0] = (*(int32_T(*)[2])Qzx.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qzx.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qzzismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qzzismax.size())[1];
  st.site = &dwb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > Qxz.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, Qxz.size(0) - 1, &pl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > Qzx.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, Qzx.size(0) - 1, &ql_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > s.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, s.size(0) - 1, &rl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&mdb_emlrtRTEI, &sp, r7.size(0));
  for (int32_T i{0}; i < b_i; i++) {
    r4[i] = (Qxz[r7[i]] + Qzx[r7[i]]) * s[r7[i]];
  }
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > x.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, x.size(0) - 1, &sl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    x[r7[i]] = r4[i];
  }
  b_t[0] = t.size(0);
  b_t[1] = 1;
  b_iv[0] = (*(int32_T(*)[2])Qxz.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qxz.size())[1];
  st.site = &ewb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_t);
  b_t[0] = t.size(0);
  b_t[1] = 1;
  b_iv1[0] = (*(int32_T(*)[2])Qzx.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])Qzx.size())[1];
  st.site = &ewb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv1, b_t);
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > Qxz.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, Qxz.size(0) - 1, &tl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > Qzx.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, Qzx.size(0) - 1, &ul_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > s.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, s.size(0) - 1, &vl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&ndb_emlrtRTEI, &sp, r3.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    r4[i] = (Qxz[r3[i]] - Qzx[r3[i]]) * s[r3[i]];
  }
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > R.size(2) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, R.size(2) - 1, &wl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    y[r3[i]] = r4[i];
  }
  b_iv[0] = (*(int32_T(*)[2])Qyx.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qyx.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qxxismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qxxismax.size())[1];
  st.site = &fwb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  b_iv[0] = (*(int32_T(*)[2])Qxy.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qxy.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qxxismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qxxismax.size())[1];
  st.site = &fwb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > Qyx.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, Qyx.size(0) - 1, &xl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > Qxy.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, Qxy.size(0) - 1, &yl_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > s.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, s.size(0) - 1, &am_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&odb_emlrtRTEI, &sp, r5.size(0));
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    r4[i] = (Qyx[r5[i]] + Qxy[r5[i]]) * s[r5[i]];
  }
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > y.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, y.size(0) - 1, &bm_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    y[r5[i]] = r4[i];
  }
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > c_r.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, c_r.size(0) - 1, &cm_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&pdb_emlrtRTEI, &sp, r6.size(0));
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    r4[i] = 0.5 * c_r[r6[i]];
  }
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > y.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, y.size(0) - 1, &dm_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    y[r6[i]] = r4[i];
  }
  b_iv[0] = (*(int32_T(*)[2])Qzy.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qzy.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qzzismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qzzismax.size())[1];
  st.site = &gwb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  b_iv[0] = (*(int32_T(*)[2])Qyz.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qyz.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qzzismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qzzismax.size())[1];
  st.site = &gwb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > Qzy.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, Qzy.size(0) - 1, &em_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > Qyz.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, Qyz.size(0) - 1, &fm_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > s.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, s.size(0) - 1, &gm_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&qdb_emlrtRTEI, &sp, r7.size(0));
  for (int32_T i{0}; i < b_i; i++) {
    r4[i] = (Qzy[r7[i]] + Qyz[r7[i]]) * s[r7[i]];
  }
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > y.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, y.size(0) - 1, &hm_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    y[r7[i]] = r4[i];
  }
  b_t[0] = t.size(0);
  b_t[1] = 1;
  b_iv[0] = (*(int32_T(*)[2])Qyx.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qyx.size())[1];
  st.site = &hwb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_t);
  b_t[0] = t.size(0);
  b_t[1] = 1;
  b_iv1[0] = (*(int32_T(*)[2])Qxy.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])Qxy.size())[1];
  st.site = &hwb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv1, b_t);
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > Qyx.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, Qyx.size(0) - 1, &im_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > Qxy.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, Qxy.size(0) - 1, &jm_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > s.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, s.size(0) - 1, &km_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&rdb_emlrtRTEI, &sp, r3.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    r4[i] = (Qyx[r3[i]] - Qxy[r3[i]]) * s[r3[i]];
  }
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > R.size(2) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, R.size(2) - 1, &lm_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    z[r3[i]] = r4[i];
  }
  b_iv[0] = (*(int32_T(*)[2])Qxz.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qxz.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qxxismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qxxismax.size())[1];
  st.site = &iwb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  b_iv[0] = (*(int32_T(*)[2])Qzx.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qzx.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qxxismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qxxismax.size())[1];
  st.site = &iwb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > Qxz.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, Qxz.size(0) - 1, &mm_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > Qzx.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, Qzx.size(0) - 1, &nm_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > s.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, s.size(0) - 1, &om_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&sdb_emlrtRTEI, &sp, r5.size(0));
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    r4[i] = (Qxz[r5[i]] + Qzx[r5[i]]) * s[r5[i]];
  }
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    if (r5[i] > z.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r5[i], 0, z.size(0) - 1, &pm_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    z[r5[i]] = r4[i];
  }
  b_iv[0] = (*(int32_T(*)[2])Qzy.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qzy.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qyyismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qyyismax.size())[1];
  st.site = &jwb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  b_iv[0] = (*(int32_T(*)[2])Qyz.size())[0];
  b_iv[1] = (*(int32_T(*)[2])Qyz.size())[1];
  b_iv1[0] = (*(int32_T(*)[2])qyyismax.size())[0];
  b_iv1[1] = (*(int32_T(*)[2])qyyismax.size())[1];
  st.site = &jwb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, b_iv1);
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > Qzy.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, Qzy.size(0) - 1, &qm_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > Qyz.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, Qyz.size(0) - 1, &rm_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > s.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, s.size(0) - 1, &sm_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&tdb_emlrtRTEI, &sp, r6.size(0));
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    r4[i] = (Qzy[r6[i]] + Qyz[r6[i]]) * s[r6[i]];
  }
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    if (r6[i] > z.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r6[i], 0, z.size(0) - 1, &tm_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    z[r6[i]] = r4[i];
  }
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > c_r.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, c_r.size(0) - 1, &um_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  r4.set_size(&udb_emlrtRTEI, &sp, r7.size(0));
  for (int32_T i{0}; i < b_i; i++) {
    r4[i] = 0.5 * c_r[r7[i]];
  }
  for (int32_T i{0}; i < b_i; i++) {
    if (r7[i] > z.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r7[i], 0, z.size(0) - 1, &vm_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    z[r7[i]] = r4[i];
  }
  st.site = &kwb_emlrtRSI;
  b_st.site = &ij_emlrtRSI;
  c_st.site = &jj_emlrtRSI;
  if (x.size(0) != w.size(0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (y.size(0) != w.size(0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (z.size(0) != w.size(0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  loop_ub = w.size(0);
  b_quaternion.set_size(&vdb_emlrtRTEI, &b_st, 4, w.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_quaternion[4 * i] = w[i];
    b_quaternion[4 * i + 1] = x[i];
    b_quaternion[4 * i + 2] = y[i];
    b_quaternion[4 * i + 3] = z[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace quaternion
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (rotationToQuaternion.cpp)
