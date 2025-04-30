//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// algEstimateGeometricTransform.cpp
//
// Code generation for function 'algEstimateGeometricTransform'
//

// Include files
#include "algEstimateGeometricTransform.h"
#include "abs.h"
#include "div.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_mexutil.h"
#include "normalizePoints.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "svd.h"
#include "unsafeSxfun.h"
#include "warning.h"
#include "xgesvd.h"
#include "blas.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>
#include <cstring>
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo tl_emlrtRSI{
    245,                   // lineNo
    "computeProjective2d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo ul_emlrtRSI{
    259,                   // lineNo
    "computeProjective2d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo vl_emlrtRSI{
    263,                   // lineNo
    "computeProjective2d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo wl_emlrtRSI{
    324,               // lineNo
    "normalizePoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo xl_emlrtRSI{
    326,               // lineNo
    "normalizePoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo wm_emlrtRSI{
    341,                // lineNo
    "denormalizeTform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo fn_emlrtRSI{
    351,               // lineNo
    "evaluateTform2d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo gn_emlrtRSI{
    352,               // lineNo
    "evaluateTform2d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo hn_emlrtRSI{
    354,               // lineNo
    "evaluateTform2d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo in_emlrtRSI{
    356,               // lineNo
    "evaluateTform2d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo jn_emlrtRSI{
    357,               // lineNo
    "evaluateTform2d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo qn_emlrtRSI{
    66,      // lineNo
    "ixfun", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pathName
};

static emlrtRSInfo rn_emlrtRSI{
    45,                          // lineNo
    "applyBinaryScalarFunction", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" // pathName
};

static emlrtRSInfo sn_emlrtRSI{
    66,                          // lineNo
    "applyBinaryScalarFunction", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" // pathName
};

static emlrtRSInfo tn_emlrtRSI{
    19,             // lineNo
    "scalexpAlloc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc."
    "m" // pathName
};

static emlrtRSInfo un_emlrtRSI{
    221,        // lineNo
    "flatIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" // pathName
};

static emlrtRSInfo jo_emlrtRSI{
    254,                   // lineNo
    "computeProjective2d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo ko_emlrtRSI{
    256,                   // lineNo
    "computeProjective2d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo bdd_emlrtRSI{
    378,               // lineNo
    "evaluateTform3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo cdd_emlrtRSI{
    379,               // lineNo
    "evaluateTform3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo ddd_emlrtRSI{
    381,               // lineNo
    "evaluateTform3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo edd_emlrtRSI{
    382,               // lineNo
    "evaluateTform3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo fdd_emlrtRSI{
    383,               // lineNo
    "evaluateTform3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtECInfo p_emlrtECI{
    1,                 // nDims
    355,               // lineNo
    9,                 // colNo
    "evaluateTform2d", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtBCInfo md_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    357,               // lineNo
    5,                 // colNo
    "",                // aName
    "evaluateTform2d", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m", // pName
    0                                            // checkKind
};

static emlrtECInfo q_emlrtECI{
    -1,                    // nDims
    256,                   // lineNo
    1,                     // colNo
    "computeProjective2d", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtBCInfo nd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    256,                   // lineNo
    17,                    // colNo
    "",                    // aName
    "computeProjective2d", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m", // pName
    0                                            // checkKind
};

static emlrtBCInfo od_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    256,                   // lineNo
    13,                    // colNo
    "",                    // aName
    "computeProjective2d", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m", // pName
    0                                            // checkKind
};

static emlrtECInfo r_emlrtECI{
    -1,                    // nDims
    254,                   // lineNo
    1,                     // colNo
    "computeProjective2d", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtBCInfo pd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    254,                   // lineNo
    17,                    // colNo
    "",                    // aName
    "computeProjective2d", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m", // pName
    0                                            // checkKind
};

static emlrtBCInfo qd_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    254,                   // lineNo
    13,                    // colNo
    "",                    // aName
    "computeProjective2d", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m", // pName
    0                                            // checkKind
};

static emlrtECInfo s_emlrtECI{
    1,                     // nDims
    257,                   // lineNo
    33,                    // colNo
    "computeProjective2d", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtECInfo t_emlrtECI{
    1,                     // nDims
    257,                   // lineNo
    22,                    // colNo
    "computeProjective2d", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtECInfo u_emlrtECI{
    1,                     // nDims
    255,                   // lineNo
    22,                    // colNo
    "computeProjective2d", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtDCInfo l_emlrtDCI{
    253,                   // lineNo
    21,                    // colNo
    "computeProjective2d", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m", // pName
    1                                            // checkKind
};

static emlrtECInfo vd_emlrtECI{
    1,                 // nDims
    381,               // lineNo
    12,                // colNo
    "evaluateTform3d", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtECInfo wd_emlrtECI{
    1,                 // nDims
    383,               // lineNo
    13,                // colNo
    "evaluateTform3d", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtECInfo xd_emlrtECI{
    1,                 // nDims
    381,               // lineNo
    13,                // colNo
    "evaluateTform3d", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo lo_emlrtRTEI{
    348,                             // lineNo
    11,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo mo_emlrtRTEI{
    352,                             // lineNo
    1,                               // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo no_emlrtRTEI{
    39,    // lineNo
    5,     // colNo
    "cat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pName
};

static emlrtRTEInfo oo_emlrtRTEI{
    354,                             // lineNo
    1,                               // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo po_emlrtRTEI{
    355,                             // lineNo
    1,                               // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo qo_emlrtRTEI{
    129,                         // lineNo
    6,                           // colNo
    "applyBinaryScalarFunction", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" // pName
};

static emlrtRTEInfo ro_emlrtRTEI{
    357,                             // lineNo
    9,                               // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo to_emlrtRTEI{
    253,                             // lineNo
    1,                               // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo uo_emlrtRTEI{
    254,                             // lineNo
    50,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo vo_emlrtRTEI{
    255,                             // lineNo
    5,                               // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo wo_emlrtRTEI{
    255,                             // lineNo
    22,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo xo_emlrtRTEI{
    255,                             // lineNo
    32,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo yo_emlrtRTEI{
    252,                             // lineNo
    7,                               // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo ap_emlrtRTEI{
    254,                             // lineNo
    32,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo bp_emlrtRTEI{
    257,                             // lineNo
    22,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo cp_emlrtRTEI{
    257,                             // lineNo
    33,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo dp_emlrtRTEI{
    257,                             // lineNo
    44,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo ep_emlrtRTEI{
    256,                             // lineNo
    32,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo fp_emlrtRTEI{
    325,                             // lineNo
    41,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo gp_emlrtRTEI{
    327,                             // lineNo
    41,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo hp_emlrtRTEI{
    335,                             // lineNo
    1,                               // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo ip_emlrtRTEI{
    336,                             // lineNo
    1,                               // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo apb_emlrtRTEI{
    375,                             // lineNo
    11,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo bpb_emlrtRTEI{
    378,                             // lineNo
    1,                               // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo cpb_emlrtRTEI{
    379,                             // lineNo
    1,                               // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo uec_emlrtRTEI{
    355,                             // lineNo
    9,                               // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRSInfo tid_emlrtRSI{
    355,               // lineNo
    "evaluateTform2d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo vid_emlrtRSI{
    257,                   // lineNo
    "computeProjective2d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo wid_emlrtRSI{
    255,                   // lineNo
    "computeProjective2d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo
    jjd_emlrtRSI{
        31,            // lineNo
        "unsafeSxfun", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\unsafeSxfun.m" // pathName
    };

// Function Declarations
static void binary_expand_op_10(const emlrtStack &sp,
                                coder::array<real32_T, 1U> &in1,
                                const coder::array<real32_T, 2U> &in2,
                                const coder::array<real32_T, 2U> &in3);

static void binary_expand_op_5(const emlrtStack &sp,
                               coder::array<real32_T, 2U> &in1,
                               const coder::array<real32_T, 3U> &in2);

static void binary_expand_op_7(const emlrtStack &sp,
                               coder::array<real32_T, 1U> &in1,
                               const coder::array<real32_T, 2U> &in2);

static void binary_expand_op_9(const emlrtStack &sp,
                               coder::array<real32_T, 1U> &in1,
                               const coder::array<real32_T, 2U> &in2,
                               const coder::array<real32_T, 2U> &in3);

namespace coder {
namespace vision {
namespace internal {
namespace geotrans {
static void b_normalizePoints(const emlrtStack &sp,
                              const array<real32_T, 3U> &points,
                              array<real32_T, 2U> &samples1,
                              array<real32_T, 2U> &samples2,
                              real32_T normMatrix1[9], real32_T normMatrix2[9]);

static void denormalizeTform(const emlrtStack &sp, real32_T tform[9],
                             const real32_T normMatrix1[9],
                             const real32_T normMatrix2[9]);

} // namespace geotrans
} // namespace internal
} // namespace vision
} // namespace coder
static void plus(const emlrtStack &sp, coder::array<real32_T, 1U> &in1,
                 const coder::array<real32_T, 1U> &in2);

// Function Definitions
static void binary_expand_op_10(const emlrtStack &sp,
                                coder::array<real32_T, 1U> &in1,
                                const coder::array<real32_T, 2U> &in2,
                                const coder::array<real32_T, 2U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&wo_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = in2[i * stride_0_0] * in3[i * stride_1_0 + in3.size(0)];
  }
}

static void binary_expand_op_5(const emlrtStack &sp,
                               coder::array<real32_T, 2U> &in1,
                               const coder::array<real32_T, 3U> &in2)
{
  coder::array<real32_T, 2U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  b_in1.set_size(&uec_emlrtRTEI, &sp, loop_ub, 2);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  for (int32_T i{0}; i < 2; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in1[i1 + b_in1.size(0) * i] =
          in1[i1 * stride_0_0 + in1.size(0) * i] -
          in2[(i1 * stride_1_0 + in2.size(0) * i) + in2.size(0) * 2];
    }
  }
  in1.set_size(&uec_emlrtRTEI, &sp, loop_ub, 2);
  for (int32_T i{0}; i < 2; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in1[i1 + b_in1.size(0) * i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_7(const emlrtStack &sp,
                               coder::array<real32_T, 1U> &in1,
                               const coder::array<real32_T, 2U> &in2)
{
  coder::array<real32_T, 1U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  b_in1.set_size(&cp_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_0] * in2[i * stride_1_0];
  }
  in1.set_size(&cp_emlrtRTEI, &sp, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_9(const emlrtStack &sp,
                               coder::array<real32_T, 1U> &in1,
                               const coder::array<real32_T, 2U> &in2,
                               const coder::array<real32_T, 2U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&xo_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] =
        in2[i * stride_0_0 + in2.size(0)] * in3[i * stride_1_0 + in3.size(0)];
  }
}

namespace coder {
namespace vision {
namespace internal {
namespace geotrans {
static void b_normalizePoints(const emlrtStack &sp,
                              const array<real32_T, 3U> &points,
                              array<real32_T, 2U> &samples1,
                              array<real32_T, 2U> &samples2,
                              real32_T normMatrix1[9], real32_T normMatrix2[9])
{
  array<real32_T, 2U> b_points;
  array<real32_T, 2U> b_samples1;
  array<real32_T, 2U> b_samples2;
  emlrtStack st;
  int32_T b_loop_ub;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  loop_ub = points.size(0);
  b_points.set_size(&fp_emlrtRTEI, &sp, 2, points.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_points[2 * i] = points[i];
    b_points[2 * i + 1] = points[i + points.size(0)];
  }
  st.site = &wl_emlrtRSI;
  normalizePoints(st, b_points, b_samples1, normMatrix1);
  b_points.set_size(&gp_emlrtRTEI, &sp, 2, points.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_points[2 * i] = points[i + points.size(0) * 2];
    b_points[2 * i + 1] = points[(i + points.size(0)) + points.size(0) * 2];
  }
  st.site = &xl_emlrtRSI;
  normalizePoints(st, b_points, b_samples2, normMatrix2);
  loop_ub = b_samples1.size(1);
  samples1.set_size(&hp_emlrtRTEI, &sp, b_samples1.size(1), 2);
  b_loop_ub = b_samples2.size(1);
  samples2.set_size(&ip_emlrtRTEI, &sp, b_samples2.size(1), 2);
  for (int32_T i{0}; i < 2; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      samples1[i1 + samples1.size(0) * i] = b_samples1[i + 2 * i1];
    }
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      samples2[i1 + samples2.size(0) * i] = b_samples2[i + 2 * i1];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void denormalizeTform(const emlrtStack &sp, real32_T tform[9],
                             const real32_T normMatrix1[9],
                             const real32_T normMatrix2[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T r1;
  int32_T r2;
  int32_T r3;
  real32_T A[9];
  real32_T a[9];
  real32_T a21;
  real32_T f;
  real32_T f1;
  real32_T f2;
  real32_T f3;
  real32_T f4;
  real32_T f5;
  real32_T f6;
  real32_T maxval;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &wm_emlrtRSI;
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
  b_st.site = &xm_emlrtRSI;
  c_st.site = &ym_emlrtRSI;
  d_st.site = &an_emlrtRSI;
  for (r1 = 0; r1 < 9; r1++) {
    A[r1] = normMatrix2[r1];
  }
  r1 = 0;
  r2 = 1;
  r3 = 2;
  maxval = muSingleScalarAbs(normMatrix2[0]);
  a21 = muSingleScalarAbs(normMatrix2[1]);
  if (a21 > maxval) {
    maxval = a21;
    r1 = 1;
    r2 = 0;
  }
  if (muSingleScalarAbs(normMatrix2[2]) > maxval) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }
  A[r2] = normMatrix2[r2] / normMatrix2[r1];
  A[r3] /= A[r1];
  A[r2 + 3] -= A[r2] * A[r1 + 3];
  A[r3 + 3] -= A[r3] * A[r1 + 3];
  A[r2 + 6] -= A[r2] * A[r1 + 6];
  A[r3 + 6] -= A[r3] * A[r1 + 6];
  if (muSingleScalarAbs(A[r3 + 3]) > muSingleScalarAbs(A[r2 + 3])) {
    int32_T rtemp;
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }
  A[r3 + 3] /= A[r2 + 3];
  A[r3 + 6] -= A[r3 + 3] * A[r2 + 6];
  if ((A[r1] == 0.0F) || (A[r2 + 3] == 0.0F) || (A[r3 + 6] == 0.0F)) {
    e_st.site = &bn_emlrtRSI;
    if (!emlrtSetWarningFlag(&e_st)) {
      f_st.site = &cn_emlrtRSI;
      ::coder::internal::b_warning(f_st);
    }
  }
  maxval = tform[r1];
  a21 = tform[r2] - maxval * A[r2];
  f = A[r3 + 3];
  f1 = A[r3 + 6];
  f2 = ((tform[r3] - maxval * A[r3]) - a21 * f) / f1;
  a[2] = f2;
  f3 = A[r1 + 6];
  maxval -= f2 * f3;
  f4 = A[r2 + 6];
  a21 -= f2 * f4;
  f5 = A[r2 + 3];
  a21 /= f5;
  a[1] = a21;
  f6 = A[r1 + 3];
  maxval -= a21 * f6;
  maxval /= A[r1];
  a[0] = maxval;
  maxval = tform[r1 + 3];
  a21 = tform[r2 + 3] - maxval * A[r2];
  f2 = ((tform[r3 + 3] - maxval * A[r3]) - a21 * f) / f1;
  a[5] = f2;
  maxval -= f2 * f3;
  a21 -= f2 * f4;
  a21 /= f5;
  a[4] = a21;
  maxval -= a21 * f6;
  maxval /= A[r1];
  a[3] = maxval;
  maxval = tform[r1 + 6];
  a21 = tform[r2 + 6] - maxval * A[r2];
  f2 = ((tform[r3 + 6] - maxval * A[r3]) - a21 * f) / f1;
  a[8] = f2;
  maxval -= f2 * f3;
  a21 -= f2 * f4;
  a21 /= f5;
  a[7] = a21;
  maxval -= a21 * f6;
  maxval /= A[r1];
  a[6] = maxval;
  for (r1 = 0; r1 < 3; r1++) {
    maxval = a[r1];
    a21 = a[r1 + 3];
    f = a[r1 + 6];
    for (r2 = 0; r2 < 3; r2++) {
      tform[r1 + 3 * r2] =
          (maxval * normMatrix1[3 * r2] + a21 * normMatrix1[3 * r2 + 1]) +
          f * normMatrix1[3 * r2 + 2];
    }
  }
  maxval = tform[8];
  for (r1 = 0; r1 <= 4; r1 += 4) {
    __m128 b_r;
    b_r = _mm_loadu_ps(&tform[r1]);
    b_r = _mm_div_ps(b_r, _mm_set1_ps(maxval));
    _mm_storeu_ps(&tform[r1], b_r);
  }
  tform[8] /= maxval;
}

} // namespace geotrans
} // namespace internal
} // namespace vision
} // namespace coder
static void plus(const emlrtStack &sp, coder::array<real32_T, 1U> &in1,
                 const coder::array<real32_T, 1U> &in2)
{
  coder::array<real32_T, 1U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  b_in1.set_size(&dpb_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_0] + in2[i * stride_1_0];
  }
  in1.set_size(&dpb_emlrtRTEI, &sp, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

namespace coder {
namespace vision {
namespace internal {
namespace geotrans {
void computeProjective2d(const emlrtStack &sp, const real32_T points[16],
                         real32_T T[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T constraints_tmp;
  int32_T info;
  real32_T V[81];
  real32_T Vt[81];
  real32_T A[72];
  real32_T constraints[72];
  real32_T Utmp[64];
  real32_T b_V[9];
  real32_T normMatrix1[9];
  real32_T normMatrix2[9];
  real32_T b_points[8];
  real32_T b_samples2[8];
  real32_T samples1[8];
  real32_T samples2[8];
  real32_T f;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &tl_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  for (int32_T i{0}; i < 4; i++) {
    info = i << 1;
    b_points[info] = points[i];
    b_points[info + 1] = points[i + 4];
  }
  b_st.site = &wl_emlrtRSI;
  normalizePoints(b_st, b_points, samples1, normMatrix1);
  for (int32_T i{0}; i < 4; i++) {
    info = i << 1;
    b_points[info] = points[i + 8];
    b_points[info + 1] = points[i + 12];
  }
  b_st.site = &xl_emlrtRSI;
  normalizePoints(b_st, b_points, samples2, normMatrix2);
  for (int32_T i{0}; i < 2; i++) {
    info = i << 2;
    b_points[info] = samples1[i];
    b_samples2[info] = samples2[i];
    b_points[info + 1] = samples1[i + 2];
    b_samples2[info + 1] = samples2[i + 2];
    b_points[info + 2] = samples1[i + 4];
    b_samples2[info + 2] = samples2[i + 4];
    b_points[info + 3] = samples1[i + 6];
    b_samples2[info + 3] = samples2[i + 6];
  }
  for (int32_T i{0}; i < 8; i++) {
    samples1[i] = b_samples2[i];
  }
  std::memset(&constraints[0], 0, 72U * sizeof(real32_T));
  for (int32_T i{0}; i < 3; i++) {
    info = i << 3;
    constraints[info] = 0.0F;
    constraints[info + 2] = 0.0F;
    constraints[info + 4] = 0.0F;
    constraints[info + 6] = 0.0F;
  }
  for (int32_T i{0}; i < 2; i++) {
    info = i << 2;
    constraints_tmp = (i + 3) << 3;
    constraints[constraints_tmp] = -b_points[info];
    constraints[constraints_tmp + 2] = -b_points[info + 1];
    constraints[constraints_tmp + 4] = -b_points[info + 2];
    constraints[constraints_tmp + 6] = -b_points[info + 3];
  }
  constraints[40] = -1.0F;
  constraints[48] = b_points[0] * samples1[4];
  constraints[56] = b_points[4] * samples1[4];
  constraints[64] = samples1[4];
  constraints[42] = -1.0F;
  constraints[50] = b_points[1] * samples1[5];
  constraints[58] = b_points[5] * samples1[5];
  constraints[66] = samples1[5];
  constraints[44] = -1.0F;
  constraints[52] = b_points[2] * samples1[6];
  constraints[60] = b_points[6] * samples1[6];
  constraints[68] = samples1[6];
  constraints[46] = -1.0F;
  constraints[54] = b_points[3] * samples1[7];
  constraints[62] = b_points[7] * samples1[7];
  constraints[70] = samples1[7];
  for (int32_T i{0}; i < 2; i++) {
    info = i << 2;
    constraints_tmp = i << 3;
    constraints[constraints_tmp + 1] = b_points[info];
    constraints[constraints_tmp + 3] = b_points[info + 1];
    constraints[constraints_tmp + 5] = b_points[info + 2];
    constraints[constraints_tmp + 7] = b_points[info + 3];
  }
  constraints[17] = 1.0F;
  constraints[19] = 1.0F;
  constraints[21] = 1.0F;
  constraints[23] = 1.0F;
  for (int32_T i{0}; i < 3; i++) {
    info = (i + 3) << 3;
    constraints[info + 1] = 0.0F;
    constraints[info + 3] = 0.0F;
    constraints[info + 5] = 0.0F;
    constraints[info + 7] = 0.0F;
  }
  constraints[49] = -b_points[0] * samples1[0];
  constraints[57] = -b_points[4] * samples1[0];
  constraints[65] = -samples1[0];
  constraints[51] = -b_points[1] * samples1[1];
  constraints[59] = -b_points[5] * samples1[1];
  constraints[67] = -samples1[1];
  constraints[53] = -b_points[2] * samples1[2];
  constraints[61] = -b_points[6] * samples1[2];
  constraints[69] = -samples1[2];
  constraints[55] = -b_points[3] * samples1[3];
  constraints[63] = -b_points[7] * samples1[3];
  constraints[71] = -samples1[3];
  st.site = &ul_emlrtRSI;
  b_st.site = &am_emlrtRSI;
  c_st.site = &dm_emlrtRSI;
  d_st.site = &em_emlrtRSI;
  p = true;
  for (constraints_tmp = 0; constraints_tmp < 72; constraints_tmp++) {
    if (p) {
      f = constraints[constraints_tmp];
      if (muSingleScalarIsInf(f) || muSingleScalarIsNaN(f)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (p) {
    ptrdiff_t info_t;
    b_st.site = &bm_emlrtRSI;
    c_st.site = &gm_emlrtRSI;
    d_st.site = &im_emlrtRSI;
    std::copy(&constraints[0], &constraints[72], &A[0]);
    info_t = LAPACKE_sgesdd(102, 'A', (ptrdiff_t)8, (ptrdiff_t)9, &A[0],
                            (ptrdiff_t)8, &samples1[0], &Utmp[0], (ptrdiff_t)8,
                            &Vt[0], (ptrdiff_t)9);
    e_st.site = &jm_emlrtRSI;
    if ((int32_T)info_t < 0) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&e_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&e_st, &gb_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      14, &cv[0], 12, (int32_T)info_t);
      }
    }
    info = (int32_T)info_t;
    if ((int32_T)info_t > 0) {
      d_st.site = &hm_emlrtRSI;
      e_st.site = &km_emlrtRSI;
      info = ::coder::internal::lapack::ceval_xgesvd(e_st, constraints, Utmp,
                                                     samples1, V);
    } else {
      for (int32_T i{0}; i < 9; i++) {
        for (constraints_tmp = 0; constraints_tmp < 9; constraints_tmp++) {
          V[constraints_tmp + 9 * i] = Vt[i + 9 * constraints_tmp];
        }
      }
    }
    if (info > 0) {
      emlrtErrorWithMessageIdR2018a(&c_st, &eb_emlrtRTEI,
                                    "Coder:MATLAB:svd_NoConvergence",
                                    "Coder:MATLAB:svd_NoConvergence", 0);
    }
  } else {
    ptrdiff_t info_t;
    b_st.site = &cm_emlrtRSI;
    c_st.site = &gm_emlrtRSI;
    d_st.site = &im_emlrtRSI;
    std::memset(&A[0], 0, 72U * sizeof(real32_T));
    info_t = LAPACKE_sgesdd(102, 'A', (ptrdiff_t)8, (ptrdiff_t)9, &A[0],
                            (ptrdiff_t)8, &samples1[0], &Utmp[0], (ptrdiff_t)8,
                            &Vt[0], (ptrdiff_t)9);
    e_st.site = &jm_emlrtRSI;
    if ((int32_T)info_t < 0) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&e_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&e_st, &gb_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      14, &cv[0], 12, (int32_T)info_t);
      }
    }
    info = (int32_T)info_t;
    if ((int32_T)info_t > 0) {
      d_st.site = &hm_emlrtRSI;
      std::memset(&constraints[0], 0, 72U * sizeof(real32_T));
      e_st.site = &km_emlrtRSI;
      info = ::coder::internal::lapack::ceval_xgesvd(e_st, constraints, Utmp,
                                                     samples1, V);
    }
    if (info > 0) {
      emlrtErrorWithMessageIdR2018a(&c_st, &eb_emlrtRTEI,
                                    "Coder:MATLAB:svd_NoConvergence",
                                    "Coder:MATLAB:svd_NoConvergence", 0);
    }
    for (int32_T i{0}; i < 81; i++) {
      V[i] = rtNaNF;
    }
  }
  for (int32_T i{0}; i < 9; i++) {
    b_V[i] = V[i + 72];
  }
  f = V[80];
  for (int32_T i{0}; i < 3; i++) {
    T[3 * i] = b_V[i] / f;
    T[3 * i + 1] = b_V[i + 3] / f;
    T[3 * i + 2] = b_V[i + 6] / f;
  }
  st.site = &vl_emlrtRSI;
  denormalizeTform(st, T, normMatrix1, normMatrix2);
}

void computeProjective2d(const emlrtStack &sp,
                         const array<real32_T, 3U> &points, real32_T T[9])
{
  __m128 b_r;
  __m128 r1;
  array<real32_T, 2U> a__5;
  array<real32_T, 2U> constraints;
  array<real32_T, 2U> points1;
  array<real32_T, 2U> points2;
  array<real32_T, 2U> varargin_2;
  array<real32_T, 1U> b_points2;
  array<real32_T, 1U> varargin_4;
  array<real32_T, 1U> varargin_5;
  array<int8_T, 1U> varargin_3;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T d;
  int32_T a__6_size[2];
  int32_T result[2];
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T scalarLB;
  int32_T vectorUB;
  real32_T V[81];
  real32_T a__6_data[81];
  real32_T b_V[9];
  real32_T normMatrix1[9];
  real32_T normMatrix2[9];
  real32_T f;
  uint32_T u;
  int8_T b_input_sizes_idx_1;
  int8_T c_input_sizes_idx_1;
  int8_T d_input_sizes_idx_1;
  int8_T e_input_sizes_idx_1;
  int8_T input_sizes_idx_1;
  int8_T sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &tl_emlrtRSI;
  b_normalizePoints(st, points, points1, points2, normMatrix1, normMatrix2);
  d = 2.0 * static_cast<real_T>(points1.size(0));
  if (d != static_cast<int32_T>(d)) {
    emlrtIntegerCheckR2012b(d, &l_emlrtDCI, (emlrtConstCTX)&sp);
  }
  constraints.set_size(&to_emlrtRTEI, &sp, static_cast<int32_T>(d), 9);
  loop_ub_tmp = static_cast<int32_T>(d) * 9;
  for (i = 0; i < loop_ub_tmp; i++) {
    constraints[i] = 0.0F;
  }
  loop_ub = points1.size(0);
  if ((points1.size(0) != points2.size(0)) &&
      ((points1.size(0) != 1) && (points2.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(points1.size(0), points2.size(0), &u_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  u = static_cast<uint32_T>(points1.size(0)) << 1;
  if (u < 1U) {
    i1 = 1;
    i = -1;
  } else {
    i = points1.size(0) << 1;
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &qd_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i1 = 2;
    if ((static_cast<int32_T>(u) < 1) || (static_cast<int32_T>(u) > i)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1, i, &pd_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i = static_cast<int32_T>(u) - 1;
  }
  st.site = &jo_emlrtRSI;
  varargin_2.set_size(&uo_emlrtRTEI, &st, points1.size(0), 2);
  loop_ub_tmp = points1.size(0) << 1;
  scalarLB = (loop_ub_tmp / 4) << 2;
  vectorUB = scalarLB - 4;
  for (i2 = 0; i2 <= vectorUB; i2 += 4) {
    b_r = _mm_loadu_ps(&points1[i2]);
    _mm_storeu_ps(&varargin_2[i2], _mm_mul_ps(b_r, _mm_set1_ps(-1.0F)));
  }
  for (i2 = scalarLB; i2 < loop_ub_tmp; i2++) {
    varargin_2[i2] = -points1[i2];
  }
  varargin_3.set_size(&vo_emlrtRTEI, &st, points1.size(0));
  for (i2 = 0; i2 < loop_ub; i2++) {
    varargin_3[i2] = -1;
  }
  if (points1.size(0) == points2.size(0)) {
    varargin_4.set_size(&wo_emlrtRTEI, &st, points1.size(0));
    scalarLB = (points1.size(0) / 4) << 2;
    vectorUB = scalarLB - 4;
    for (i2 = 0; i2 <= vectorUB; i2 += 4) {
      b_r = _mm_loadu_ps(&points1[i2]);
      r1 = _mm_loadu_ps(&points2[i2 + points2.size(0)]);
      _mm_storeu_ps(&varargin_4[i2], _mm_mul_ps(b_r, r1));
    }
    for (i2 = scalarLB; i2 < loop_ub; i2++) {
      varargin_4[i2] = points1[i2] * points2[i2 + points2.size(0)];
    }
  } else {
    b_st.site = &wid_emlrtRSI;
    binary_expand_op_10(b_st, varargin_4, points1, points2);
  }
  if (points1.size(0) == points2.size(0)) {
    loop_ub = points1.size(0);
    varargin_5.set_size(&xo_emlrtRTEI, &st, points1.size(0));
    scalarLB = (points1.size(0) / 4) << 2;
    vectorUB = scalarLB - 4;
    for (i2 = 0; i2 <= vectorUB; i2 += 4) {
      b_r = _mm_loadu_ps(&points1[i2 + points1.size(0)]);
      r1 = _mm_loadu_ps(&points2[i2 + points2.size(0)]);
      _mm_storeu_ps(&varargin_5[i2], _mm_mul_ps(b_r, r1));
    }
    for (i2 = scalarLB; i2 < loop_ub; i2++) {
      varargin_5[i2] =
          points1[i2 + points1.size(0)] * points2[i2 + points2.size(0)];
    }
  } else {
    b_st.site = &wid_emlrtRSI;
    binary_expand_op_9(b_st, varargin_5, points1, points2);
  }
  b_st.site = &kn_emlrtRSI;
  if (points1.size(0) != 0) {
    loop_ub_tmp = points1.size(0);
  } else if (varargin_2.size(0) != 0) {
    loop_ub_tmp = varargin_2.size(0);
  } else if (varargin_3.size(0) != 0) {
    loop_ub_tmp = points1.size(0);
  } else if (varargin_4.size(0) != 0) {
    loop_ub_tmp = varargin_4.size(0);
  } else if (varargin_5.size(0) != 0) {
    loop_ub_tmp = varargin_5.size(0);
  } else if (points2.size(0) != 0) {
    loop_ub_tmp = points2.size(0);
  } else {
    loop_ub_tmp = 0;
  }
  c_st.site = &jj_emlrtRSI;
  if ((points1.size(0) != loop_ub_tmp) && (points1.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((varargin_2.size(0) != loop_ub_tmp) && (varargin_2.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((varargin_3.size(0) != loop_ub_tmp) && (varargin_3.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((varargin_4.size(0) != loop_ub_tmp) && (varargin_4.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((varargin_5.size(0) != loop_ub_tmp) && (varargin_5.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((points2.size(0) != loop_ub_tmp) && (points2.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (loop_ub_tmp == 0);
  if (empty_non_axis_sizes || (points1.size(0) != 0)) {
    input_sizes_idx_1 = 3;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (varargin_2.size(0) != 0)) {
    b_input_sizes_idx_1 = 2;
  } else {
    b_input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (varargin_3.size(0) != 0)) {
    c_input_sizes_idx_1 = 1;
  } else {
    c_input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (varargin_4.size(0) != 0)) {
    d_input_sizes_idx_1 = 1;
  } else {
    d_input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (varargin_5.size(0) != 0)) {
    e_input_sizes_idx_1 = 1;
  } else {
    e_input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (points2.size(0) != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  loop_ub = points2.size(0);
  b_points2.set_size(&yo_emlrtRTEI, &b_st, points2.size(0));
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_points2[i2] = points2[i2 + points2.size(0)];
  }
  i2 = input_sizes_idx_1 + b_input_sizes_idx_1;
  i3 = i2 + c_input_sizes_idx_1;
  vectorUB = i3 + d_input_sizes_idx_1;
  scalarLB = vectorUB + e_input_sizes_idx_1;
  a__5.set_size(&ap_emlrtRTEI, &b_st, loop_ub_tmp, scalarLB + sizes_idx_1);
  loop_ub = input_sizes_idx_1;
  for (b_loop_ub = 0; b_loop_ub < loop_ub; b_loop_ub++) {
    for (int32_T i4{0}; i4 < loop_ub_tmp; i4++) {
      a__5[i4 + a__5.size(0) * b_loop_ub] = 0.0F;
    }
  }
  loop_ub = b_input_sizes_idx_1;
  for (b_loop_ub = 0; b_loop_ub < loop_ub; b_loop_ub++) {
    for (int32_T i4{0}; i4 < loop_ub_tmp; i4++) {
      a__5[i4 + a__5.size(0) * (b_loop_ub + input_sizes_idx_1)] =
          varargin_2[i4 + loop_ub_tmp * b_loop_ub];
    }
  }
  loop_ub = c_input_sizes_idx_1;
  for (b_loop_ub = 0; b_loop_ub < loop_ub; b_loop_ub++) {
    for (int32_T i4{0}; i4 < loop_ub_tmp; i4++) {
      a__5[i4 + a__5.size(0) * i2] = -1.0F;
    }
  }
  loop_ub = d_input_sizes_idx_1;
  for (i2 = 0; i2 < loop_ub; i2++) {
    for (b_loop_ub = 0; b_loop_ub < loop_ub_tmp; b_loop_ub++) {
      a__5[b_loop_ub + a__5.size(0) * i3] = varargin_4[b_loop_ub];
    }
  }
  loop_ub = e_input_sizes_idx_1;
  for (i2 = 0; i2 < loop_ub; i2++) {
    for (i3 = 0; i3 < loop_ub_tmp; i3++) {
      a__5[i3 + a__5.size(0) * vectorUB] = varargin_5[i3];
    }
  }
  loop_ub = sizes_idx_1;
  for (i2 = 0; i2 < loop_ub; i2++) {
    for (i3 = 0; i3 < loop_ub_tmp; i3++) {
      a__5[i3 + a__5.size(0) * scalarLB] = b_points2[i3];
    }
  }
  st.site = &jo_emlrtRSI;
  loop_ub_tmp = div_s32(st, i, i1) + 1;
  result[0] = loop_ub_tmp;
  result[1] = 9;
  emlrtSubAssignSizeCheckR2012b(&result[0], 2, a__5.size(), 2, &r_emlrtECI,
                                (emlrtCTX)&sp);
  for (i = 0; i < 9; i++) {
    for (i2 = 0; i2 < loop_ub_tmp; i2++) {
      constraints[i1 * i2 + constraints.size(0) * i] =
          a__5[i2 + loop_ub_tmp * i];
    }
  }
  loop_ub = points1.size(0);
  varargin_4.set_size(&bp_emlrtRTEI, &sp, points1.size(0));
  loop_ub_tmp = (points1.size(0) / 4) << 2;
  scalarLB = loop_ub_tmp - 4;
  for (i = 0; i <= scalarLB; i += 4) {
    b_r = _mm_loadu_ps(&points1[i]);
    _mm_storeu_ps(&varargin_4[i], _mm_mul_ps(b_r, _mm_set1_ps(-1.0F)));
  }
  for (i = loop_ub_tmp; i < loop_ub; i++) {
    varargin_4[i] = -points1[i];
  }
  b_loop_ub = varargin_4.size(0);
  if ((varargin_4.size(0) != points2.size(0)) &&
      ((varargin_4.size(0) != 1) && (points2.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(varargin_4.size(0), points2.size(0),
                                &t_emlrtECI, (emlrtConstCTX)&sp);
  }
  varargin_5.set_size(&cp_emlrtRTEI, &sp, points1.size(0));
  for (i = 0; i <= scalarLB; i += 4) {
    b_r = _mm_loadu_ps(&points1[i + points1.size(0)]);
    _mm_storeu_ps(&varargin_5[i], _mm_mul_ps(b_r, _mm_set1_ps(-1.0F)));
  }
  for (i = loop_ub_tmp; i < loop_ub; i++) {
    varargin_5[i] = -points1[i + points1.size(0)];
  }
  loop_ub = varargin_5.size(0);
  if ((varargin_5.size(0) != points2.size(0)) &&
      ((varargin_5.size(0) != 1) && (points2.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(varargin_5.size(0), points2.size(0),
                                &s_emlrtECI, (emlrtConstCTX)&sp);
  }
  u = static_cast<uint32_T>(points1.size(0)) << 1;
  if (u < 2U) {
    i = 1;
    i1 = 1;
    i2 = 0;
  } else {
    if (static_cast<int32_T>(d) < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, static_cast<int32_T>(d), &od_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i = 2;
    i1 = 2;
    if ((static_cast<int32_T>(u) < 1) ||
        (static_cast<int32_T>(u) > static_cast<int32_T>(d))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1,
                                    static_cast<int32_T>(d), &nd_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i2 = static_cast<int32_T>(u);
  }
  st.site = &ko_emlrtRSI;
  if (varargin_4.size(0) == points2.size(0)) {
    scalarLB = (varargin_4.size(0) / 4) << 2;
    vectorUB = scalarLB - 4;
    for (i3 = 0; i3 <= vectorUB; i3 += 4) {
      b_r = _mm_loadu_ps(&varargin_4[i3]);
      r1 = _mm_loadu_ps(&points2[i3]);
      _mm_storeu_ps(&varargin_4[i3], _mm_mul_ps(b_r, r1));
    }
    for (i3 = scalarLB; i3 < b_loop_ub; i3++) {
      varargin_4[i3] = varargin_4[i3] * points2[i3];
    }
  } else {
    b_st.site = &vid_emlrtRSI;
    binary_expand_op_7(b_st, varargin_4, points2);
  }
  if (varargin_5.size(0) == points2.size(0)) {
    scalarLB = (varargin_5.size(0) / 4) << 2;
    vectorUB = scalarLB - 4;
    for (i3 = 0; i3 <= vectorUB; i3 += 4) {
      b_r = _mm_loadu_ps(&varargin_5[i3]);
      r1 = _mm_loadu_ps(&points2[i3]);
      _mm_storeu_ps(&varargin_5[i3], _mm_mul_ps(b_r, r1));
    }
    for (i3 = scalarLB; i3 < loop_ub; i3++) {
      varargin_5[i3] = varargin_5[i3] * points2[i3];
    }
  } else {
    b_st.site = &vid_emlrtRSI;
    binary_expand_op_7(b_st, varargin_5, points2);
  }
  loop_ub = points2.size(0);
  b_points2.set_size(&dp_emlrtRTEI, &st, points2.size(0));
  scalarLB = (points2.size(0) / 4) << 2;
  vectorUB = scalarLB - 4;
  for (i3 = 0; i3 <= vectorUB; i3 += 4) {
    b_r = _mm_loadu_ps(&points2[i3]);
    _mm_storeu_ps(&b_points2[i3], _mm_mul_ps(b_r, _mm_set1_ps(-1.0F)));
  }
  for (i3 = scalarLB; i3 < loop_ub; i3++) {
    b_points2[i3] = -points2[i3];
  }
  b_st.site = &kn_emlrtRSI;
  if (points1.size(0) != 0) {
    loop_ub_tmp = points1.size(0);
  } else if (varargin_4.size(0) != 0) {
    loop_ub_tmp = varargin_4.size(0);
  } else if (varargin_5.size(0) != 0) {
    loop_ub_tmp = varargin_5.size(0);
  } else if (b_points2.size(0) != 0) {
    loop_ub_tmp = b_points2.size(0);
  } else {
    loop_ub_tmp = 0;
  }
  c_st.site = &jj_emlrtRSI;
  if ((points1.size(0) != loop_ub_tmp) && (points1.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((points1.size(0) != loop_ub_tmp) && (points1.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((points1.size(0) != loop_ub_tmp) && (points1.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((varargin_4.size(0) != loop_ub_tmp) && (varargin_4.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((varargin_5.size(0) != loop_ub_tmp) && (varargin_5.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((b_points2.size(0) != loop_ub_tmp) && (b_points2.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (loop_ub_tmp == 0);
  if (empty_non_axis_sizes || (points1.size(0) != 0)) {
    input_sizes_idx_1 = 2;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (points1.size(0) != 0)) {
    b_input_sizes_idx_1 = 1;
  } else {
    b_input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (points1.size(0) != 0)) {
    c_input_sizes_idx_1 = 3;
  } else {
    c_input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (varargin_4.size(0) != 0)) {
    d_input_sizes_idx_1 = 1;
  } else {
    d_input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (varargin_5.size(0) != 0)) {
    e_input_sizes_idx_1 = 1;
  } else {
    e_input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (b_points2.size(0) != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  i3 = (input_sizes_idx_1 + b_input_sizes_idx_1) + c_input_sizes_idx_1;
  vectorUB = i3 + d_input_sizes_idx_1;
  scalarLB = vectorUB + e_input_sizes_idx_1;
  a__5.set_size(&ep_emlrtRTEI, &b_st, loop_ub_tmp, scalarLB + sizes_idx_1);
  loop_ub = input_sizes_idx_1;
  for (b_loop_ub = 0; b_loop_ub < loop_ub; b_loop_ub++) {
    for (int32_T i4{0}; i4 < loop_ub_tmp; i4++) {
      a__5[i4 + a__5.size(0) * b_loop_ub] =
          points1[i4 + loop_ub_tmp * b_loop_ub];
    }
  }
  loop_ub = b_input_sizes_idx_1;
  for (b_loop_ub = 0; b_loop_ub < loop_ub; b_loop_ub++) {
    for (int32_T i4{0}; i4 < loop_ub_tmp; i4++) {
      a__5[i4 + a__5.size(0) * input_sizes_idx_1] = 1.0F;
    }
  }
  loop_ub = c_input_sizes_idx_1;
  for (b_loop_ub = 0; b_loop_ub < loop_ub; b_loop_ub++) {
    for (int32_T i4{0}; i4 < loop_ub_tmp; i4++) {
      a__5[i4 + a__5.size(0) * ((b_loop_ub + input_sizes_idx_1) +
                                b_input_sizes_idx_1)] = 0.0F;
    }
  }
  loop_ub = d_input_sizes_idx_1;
  for (b_loop_ub = 0; b_loop_ub < loop_ub; b_loop_ub++) {
    for (int32_T i4{0}; i4 < loop_ub_tmp; i4++) {
      a__5[i4 + a__5.size(0) * i3] = varargin_4[i4];
    }
  }
  loop_ub = e_input_sizes_idx_1;
  for (i3 = 0; i3 < loop_ub; i3++) {
    for (b_loop_ub = 0; b_loop_ub < loop_ub_tmp; b_loop_ub++) {
      a__5[b_loop_ub + a__5.size(0) * vectorUB] = varargin_5[b_loop_ub];
    }
  }
  loop_ub = sizes_idx_1;
  for (i3 = 0; i3 < loop_ub; i3++) {
    for (vectorUB = 0; vectorUB < loop_ub_tmp; vectorUB++) {
      a__5[vectorUB + a__5.size(0) * scalarLB] = b_points2[vectorUB];
    }
  }
  st.site = &ko_emlrtRSI;
  loop_ub_tmp = div_s32(st, i2 - i, i1) + 1;
  result[0] = loop_ub_tmp;
  result[1] = 9;
  emlrtSubAssignSizeCheckR2012b(&result[0], 2, a__5.size(), 2, &q_emlrtECI,
                                (emlrtCTX)&sp);
  for (i2 = 0; i2 < 9; i2++) {
    for (i3 = 0; i3 < loop_ub_tmp; i3++) {
      constraints[((i + i1 * i3) + constraints.size(0) * i2) - 1] =
          a__5[i3 + loop_ub_tmp * i2];
    }
  }
  st.site = &ul_emlrtRSI;
  svd(st, constraints, a__5, a__6_data, a__6_size, V);
  for (i = 0; i < 9; i++) {
    b_V[i] = V[i + 72];
  }
  f = V[80];
  for (i = 0; i < 3; i++) {
    T[3 * i] = b_V[i] / f;
    T[3 * i + 1] = b_V[i + 3] / f;
    T[3 * i + 2] = b_V[i + 6] / f;
  }
  st.site = &vl_emlrtRSI;
  denormalizeTform(st, T, normMatrix1, normMatrix2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void evaluateTform2d(const emlrtStack &sp, const real32_T tform[9],
                     const array<real32_T, 3U> &points,
                     array<real32_T, 1U> &dis)
{
  __m128 b_r;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  array<real32_T, 2U> b_result;
  array<real32_T, 2U> pt;
  array<real32_T, 2U> pt1h;
  array<real32_T, 2U> y;
  array<real32_T, 1U> b_pt1h;
  array<real32_T, 1U> r2;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  int32_T result;
  int32_T sizes_idx_1;
  real32_T alpha1;
  real32_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  int8_T input_sizes_idx_1;
  boolean_T empty_non_axis_sizes;
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
  st.site = &fn_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  if (points.size(0) != 0) {
    result = points.size(0);
  } else {
    result = 0;
  }
  c_st.site = &jj_emlrtRSI;
  if ((points.size(0) != result) && (points.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((points.size(0) != result) && (points.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || (points.size(0) != 0)) {
    input_sizes_idx_1 = 2;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (points.size(0) != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  loop_ub = points.size(0);
  pt.set_size(&lo_emlrtRTEI, &b_st, points.size(0), 2);
  for (i = 0; i < 2; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      pt[i1 + pt.size(0) * i] = points[i1 + points.size(0) * i];
    }
  }
  i = input_sizes_idx_1 + sizes_idx_1;
  b_result.set_size(&pn_emlrtRTEI, &b_st, result, i);
  loop_ub = input_sizes_idx_1;
  for (int32_T i1{0}; i1 < loop_ub; i1++) {
    for (int32_T i2{0}; i2 < result; i2++) {
      b_result[i2 + b_result.size(0) * i1] = pt[i2 + result * i1];
    }
  }
  for (int32_T i1{0}; i1 < sizes_idx_1; i1++) {
    for (int32_T i2{0}; i2 < result; i2++) {
      b_result[i2 + b_result.size(0) * input_sizes_idx_1] = 1.0F;
    }
  }
  st.site = &gn_emlrtRSI;
  b_st.site = &mn_emlrtRSI;
  if (b_result.size(1) != 3) {
    if ((result == 1) && (i == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &u_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &v_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &ln_emlrtRSI;
  if ((result == 0) || (i == 0)) {
    y.set_size(&un_emlrtRTEI, &b_st, 3, result);
    result *= 3;
    for (i = 0; i < result; i++) {
      y[i] = 0.0F;
    }
  } else {
    c_st.site = &nn_emlrtRSI;
    d_st.site = &on_emlrtRSI;
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0F;
    beta1 = 0.0F;
    m_t = (ptrdiff_t)3;
    n_t = (ptrdiff_t)result;
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)3;
    ldb_t = (ptrdiff_t)result;
    ldc_t = (ptrdiff_t)3;
    y.set_size(&tn_emlrtRTEI, &d_st, 3, result);
    sgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real32_T *)&tform[0],
          &lda_t, &(b_result.data())[0], &ldb_t, &beta1, &(y.data())[0],
          &ldc_t);
  }
  loop_ub = y.size(1);
  pt1h.set_size(&mo_emlrtRTEI, &sp, y.size(1), 3);
  for (i = 0; i < 3; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      pt1h[i1 + pt1h.size(0) * i] = y[i + 3 * i1];
    }
  }
  st.site = &hn_emlrtRSI;
  b_st.site = &ij_emlrtRSI;
  c_st.site = &jj_emlrtRSI;
  pt.set_size(&no_emlrtRTEI, &b_st, y.size(1), 2);
  for (i = 0; i < loop_ub; i++) {
    pt[i] = pt1h[i + pt1h.size(0) * 2];
    pt[i + pt.size(0)] = pt1h[i + pt1h.size(0) * 2];
  }
  st.site = &hn_emlrtRSI;
  b_st.site = &lf_emlrtRSI;
  c_st.site = &mf_emlrtRSI;
  if ((pt1h.size(0) != 1) && (pt.size(0) != 1) &&
      (pt1h.size(0) != pt.size(0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  if (pt1h.size(0) == pt.size(0)) {
    pt.set_size(&oo_emlrtRTEI, &b_st, y.size(1), 2);
    result = (loop_ub / 4) << 2;
    sizes_idx_1 = result - 4;
    for (i = 0; i < 2; i++) {
      for (int32_T i1{0}; i1 <= sizes_idx_1; i1 += 4) {
        __m128 r1;
        b_r = _mm_loadu_ps(&pt1h[i1 + pt1h.size(0) * i]);
        r1 = _mm_loadu_ps(&pt[i1 + pt.size(0) * i]);
        _mm_storeu_ps(&pt[i1 + pt.size(0) * i], _mm_div_ps(b_r, r1));
      }
      for (int32_T i1{result}; i1 < loop_ub; i1++) {
        pt[i1 + pt.size(0) * i] =
            pt1h[i1 + pt1h.size(0) * i] / pt[i1 + pt.size(0) * i];
      }
    }
  } else {
    c_st.site = &uid_emlrtRSI;
    binary_expand_op_6(c_st, pt, pt1h);
  }
  if ((pt.size(0) != points.size(0)) &&
      ((pt.size(0) != 1) && (points.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(pt.size(0), points.size(0), &p_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (pt.size(0) == points.size(0)) {
    pt.set_size(&po_emlrtRTEI, &sp, pt.size(0), 2);
    for (i = 0; i < 2; i++) {
      loop_ub = pt.size(0);
      result = (pt.size(0) / 4) << 2;
      sizes_idx_1 = result - 4;
      for (int32_T i1{0}; i1 <= sizes_idx_1; i1 += 4) {
        b_r = _mm_loadu_ps(&pt[i1 + pt.size(0) * i]);
        _mm_storeu_ps(
            &pt[i1 + pt.size(0) * i],
            _mm_sub_ps(
                b_r,
                _mm_loadu_ps(
                    &points[(i1 + points.size(0) * i) + points.size(0) * 2])));
      }
      for (int32_T i1{result}; i1 < loop_ub; i1++) {
        pt[i1 + pt.size(0) * i] =
            pt[i1 + pt.size(0) * i] -
            points[(i1 + points.size(0) * i) + points.size(0) * 2];
      }
    }
  } else {
    st.site = &tid_emlrtRSI;
    binary_expand_op_5(st, pt, points);
  }
  st.site = &in_emlrtRSI;
  b_st.site = &pn_emlrtRSI;
  c_st.site = &qn_emlrtRSI;
  d_st.site = &rn_emlrtRSI;
  e_st.site = &tn_emlrtRSI;
  d_st.site = &sn_emlrtRSI;
  i = pt.size(0);
  dis.set_size(&qo_emlrtRTEI, &d_st, pt.size(0));
  e_st.site = &un_emlrtRSI;
  if (pt.size(0) > 2147483646) {
    f_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(f_st);
  }
  for (result = 0; result < i; result++) {
    dis[result] = muSingleScalarHypot(pt[result], pt[result + pt.size(0)]);
  }
  loop_ub = pt1h.size(0);
  b_pt1h.set_size(&ro_emlrtRTEI, &sp, pt1h.size(0));
  for (i = 0; i < loop_ub; i++) {
    b_pt1h[i] = pt1h[i + pt1h.size(0) * 2];
  }
  st.site = &jn_emlrtRSI;
  b_abs(st, b_pt1h, r2);
  result = r2.size(0);
  for (sizes_idx_1 = 0; sizes_idx_1 < result; sizes_idx_1++) {
    if (r2[sizes_idx_1] < 1.1920929E-7F) {
      if (sizes_idx_1 > dis.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(sizes_idx_1, 0, dis.size(0) - 1,
                                      &md_emlrtBCI, (emlrtConstCTX)&sp);
      }
      dis[sizes_idx_1] = rtInfF;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void evaluateTform3d(const emlrtStack &sp, const real32_T tform[16],
                     const array<real32_T, 3U> &points,
                     array<real32_T, 1U> &dis)
{
  __m128 r1;
  __m128 r2;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  array<real32_T, 2U> b_points;
  array<real32_T, 2U> pt1h;
  array<real32_T, 2U> tpoints1;
  array<real32_T, 2U> y;
  array<real32_T, 1U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T loop_ub;
  int32_T result_tmp;
  int32_T scalarLB;
  int32_T vectorUB;
  real32_T alpha1;
  real32_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  int8_T input_sizes_idx_1;
  int8_T sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &bdd_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  if (points.size(0) != 0) {
    result_tmp = points.size(0);
  } else {
    result_tmp = 0;
  }
  c_st.site = &jj_emlrtRSI;
  if ((points.size(0) != result_tmp) && (points.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((points.size(0) != result_tmp) && (points.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (result_tmp == 0);
  if (empty_non_axis_sizes || (points.size(0) != 0)) {
    input_sizes_idx_1 = 3;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (points.size(0) != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  loop_ub = points.size(0);
  b_points.set_size(&apb_emlrtRTEI, &b_st, points.size(0), 3);
  for (int32_T i{0}; i < 3; i++) {
    for (scalarLB = 0; scalarLB < loop_ub; scalarLB++) {
      b_points[scalarLB + b_points.size(0) * i] =
          points[scalarLB + points.size(0) * i];
    }
  }
  pt1h.set_size(&bpb_emlrtRTEI, &b_st, result_tmp,
                input_sizes_idx_1 + sizes_idx_1);
  loop_ub = input_sizes_idx_1;
  for (int32_T i{0}; i < loop_ub; i++) {
    for (scalarLB = 0; scalarLB < result_tmp; scalarLB++) {
      pt1h[scalarLB + pt1h.size(0) * i] = b_points[scalarLB + result_tmp * i];
    }
  }
  loop_ub = sizes_idx_1;
  for (int32_T i{0}; i < loop_ub; i++) {
    for (scalarLB = 0; scalarLB < result_tmp; scalarLB++) {
      pt1h[scalarLB + pt1h.size(0) * input_sizes_idx_1] = 1.0F;
    }
  }
  st.site = &cdd_emlrtRSI;
  b_st.site = &mn_emlrtRSI;
  if (pt1h.size(1) != 4) {
    if ((pt1h.size(0) == 1) && (pt1h.size(1) == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &u_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &v_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &ln_emlrtRSI;
  if (pt1h.size(0) == 0) {
    y.set_size(&un_emlrtRTEI, &b_st, 4, 0);
  } else {
    c_st.site = &nn_emlrtRSI;
    d_st.site = &on_emlrtRSI;
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0F;
    beta1 = 0.0F;
    m_t = (ptrdiff_t)4;
    n_t = (ptrdiff_t)pt1h.size(0);
    k_t = (ptrdiff_t)4;
    lda_t = (ptrdiff_t)4;
    ldb_t = (ptrdiff_t)pt1h.size(0);
    ldc_t = (ptrdiff_t)4;
    y.set_size(&tn_emlrtRTEI, &d_st, 4, result_tmp);
    sgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real32_T *)&tform[0],
          &lda_t, &(pt1h.data())[0], &ldb_t, &beta1, &(y.data())[0], &ldc_t);
  }
  loop_ub = y.size(1);
  tpoints1.set_size(&cpb_emlrtRTEI, &sp, y.size(1), 4);
  for (int32_T i{0}; i < 4; i++) {
    for (scalarLB = 0; scalarLB < loop_ub; scalarLB++) {
      tpoints1[scalarLB + tpoints1.size(0) * i] = y[i + 4 * scalarLB];
    }
  }
  if ((points.size(0) != y.size(1)) &&
      ((y.size(1) != 1) && (points.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(y.size(1), points.size(0), &xd_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  st.site = &ddd_emlrtRSI;
  b_st.site = &fo_emlrtRSI;
  if (tpoints1.size(0) == points.size(0)) {
    dis.set_size(&dpb_emlrtRTEI, &b_st, y.size(1));
    for (int32_T i{0}; i < loop_ub; i++) {
      alpha1 = tpoints1[i] - points[i + points.size(0) * 3];
      dis[i] = alpha1 * alpha1;
    }
  } else {
    c_st.site = &jjd_emlrtRSI;
    binary_expand_op_49(c_st, dis, tpoints1, points);
  }
  st.site = &edd_emlrtRSI;
  b_st.site = &fo_emlrtRSI;
  if (tpoints1.size(0) == points.size(0)) {
    loop_ub = tpoints1.size(0);
    b_r.set_size(&epb_emlrtRTEI, &b_st, tpoints1.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      alpha1 = tpoints1[i + tpoints1.size(0)] -
               points[(i + points.size(0)) + points.size(0) * 3];
      b_r[i] = alpha1 * alpha1;
    }
  } else {
    c_st.site = &jjd_emlrtRSI;
    binary_expand_op_48(c_st, b_r, tpoints1, points);
  }
  loop_ub = dis.size(0);
  if ((dis.size(0) != b_r.size(0)) &&
      ((dis.size(0) != 1) && (b_r.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(dis.size(0), b_r.size(0), &vd_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  result_tmp = tpoints1.size(0);
  if ((tpoints1.size(0) != points.size(0)) &&
      ((tpoints1.size(0) != 1) && (points.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(tpoints1.size(0), points.size(0), &wd_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (dis.size(0) == b_r.size(0)) {
    scalarLB = (dis.size(0) / 4) << 2;
    vectorUB = scalarLB - 4;
    for (int32_T i{0}; i <= vectorUB; i += 4) {
      r1 = _mm_loadu_ps(&dis[i]);
      r2 = _mm_loadu_ps(&b_r[i]);
      _mm_storeu_ps(&dis[i], _mm_add_ps(r1, r2));
    }
    for (int32_T i{scalarLB}; i < loop_ub; i++) {
      dis[i] = dis[i] + b_r[i];
    }
  } else {
    st.site = &ddd_emlrtRSI;
    plus(st, dis, b_r);
  }
  st.site = &fdd_emlrtRSI;
  b_st.site = &fo_emlrtRSI;
  if (tpoints1.size(0) == points.size(0)) {
    b_r.set_size(&fpb_emlrtRTEI, &b_st, tpoints1.size(0));
    for (int32_T i{0}; i < result_tmp; i++) {
      alpha1 = tpoints1[i + tpoints1.size(0) * 2] -
               points[(i + points.size(0) * 2) + points.size(0) * 3];
      b_r[i] = alpha1 * alpha1;
    }
  } else {
    c_st.site = &jjd_emlrtRSI;
    binary_expand_op_47(c_st, b_r, tpoints1, points);
  }
  loop_ub = dis.size(0);
  if ((dis.size(0) != b_r.size(0)) &&
      ((dis.size(0) != 1) && (b_r.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(dis.size(0), b_r.size(0), &vd_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (dis.size(0) == b_r.size(0)) {
    scalarLB = (dis.size(0) / 4) << 2;
    vectorUB = scalarLB - 4;
    for (int32_T i{0}; i <= vectorUB; i += 4) {
      r1 = _mm_loadu_ps(&dis[i]);
      r2 = _mm_loadu_ps(&b_r[i]);
      _mm_storeu_ps(&dis[i], _mm_add_ps(r1, r2));
    }
    for (int32_T i{scalarLB}; i < loop_ub; i++) {
      dis[i] = dis[i] + b_r[i];
    }
  } else {
    plus(sp, dis, b_r);
  }
  st.site = &ddd_emlrtRSI;
  b_sqrt(st, dis);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace geotrans
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (algEstimateGeometricTransform.cpp)
