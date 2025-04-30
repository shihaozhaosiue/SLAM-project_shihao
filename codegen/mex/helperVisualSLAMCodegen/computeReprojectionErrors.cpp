//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// computeReprojectionErrors.cpp
//
// Code generation for function 'computeReprojectionErrors'
//

// Include files
#include "computeReprojectionErrors.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "sparse1.h"
#include "sqrt.h"
#include "sum.h"
#include "useConstantDim.h"
#include "coder_array.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo qkc_emlrtRSI{
    6,                           // lineNo
    "computeReprojectionErrors", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m" // pathName
};

static emlrtRSInfo rkc_emlrtRSI{
    7,                           // lineNo
    "computeReprojectionErrors", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m" // pathName
};

static emlrtRSInfo skc_emlrtRSI{
    8,                           // lineNo
    "computeReprojectionErrors", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m" // pathName
};

static emlrtRSInfo tkc_emlrtRSI{
    9,                           // lineNo
    "computeReprojectionErrors", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m" // pathName
};

static emlrtRSInfo ukc_emlrtRSI{
    11,                          // lineNo
    "computeReprojectionErrors", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m" // pathName
};

static emlrtRSInfo vkc_emlrtRSI{
    14,       // lineNo
    "cumsum", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m" // pathName
};

static emlrtBCInfo jp_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    11,                          // lineNo
    63,                          // colNo
    "",                          // aName
    "computeReprojectionErrors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m", // pName
    0                                            // checkKind
};

static emlrtBCInfo kp_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    11,                          // lineNo
    48,                          // colNo
    "",                          // aName
    "computeReprojectionErrors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m", // pName
    0                                            // checkKind
};

static emlrtBCInfo lp_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    11,                          // lineNo
    72,                          // colNo
    "",                          // aName
    "computeReprojectionErrors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m", // pName
    0                                            // checkKind
};

static emlrtBCInfo mp_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    11,                          // lineNo
    59,                          // colNo
    "",                          // aName
    "computeReprojectionErrors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m", // pName
    0                                            // checkKind
};

static emlrtBCInfo np_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    8,                           // lineNo
    29,                          // colNo
    "",                          // aName
    "computeReprojectionErrors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m", // pName
    0                                            // checkKind
};

static emlrtBCInfo op_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    8,                           // lineNo
    27,                          // colNo
    "",                          // aName
    "computeReprojectionErrors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m", // pName
    0                                            // checkKind
};

static emlrtBCInfo pp_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    11,                          // lineNo
    84,                          // colNo
    "",                          // aName
    "computeReprojectionErrors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m", // pName
    0                                            // checkKind
};

static emlrtBCInfo qp_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    11,                          // lineNo
    24,                          // colNo
    "",                          // aName
    "computeReprojectionErrors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m", // pName
    0                                            // checkKind
};

static emlrtRTEInfo gjb_emlrtRTEI{
    5,                           // lineNo
    1,                           // colNo
    "computeReprojectionErrors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m" // pName
};

static emlrtRTEInfo hjb_emlrtRTEI{
    6,                           // lineNo
    1,                           // colNo
    "computeReprojectionErrors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m" // pName
};

static emlrtRTEInfo ijb_emlrtRTEI{
    14,       // lineNo
    5,        // colNo
    "cumsum", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m" // pName
};

static emlrtRTEInfo jjb_emlrtRTEI{
    8,                           // lineNo
    1,                           // colNo
    "computeReprojectionErrors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m" // pName
};

static emlrtRTEInfo kjb_emlrtRTEI{
    9,                           // lineNo
    1,                           // colNo
    "computeReprojectionErrors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m" // pName
};

static emlrtRTEInfo ljb_emlrtRTEI{
    11,                          // lineNo
    33,                          // colNo
    "computeReprojectionErrors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\computeReprojectionErrors.m" // pName
};

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace bundleAdjust {
void computeReprojectionErrors(const emlrtStack &sp, const b_sparse &visibility,
                               const array<real_T, 2U> &curMeanErr,
                               array<real32_T, 1U> &reprojectionErrors)
{
  array<real_T, 2U> b_curMeanErrSqrt;
  array<real_T, 2U> curMeanErrSqrt;
  array<real_T, 1U> endIndex;
  array<real_T, 1U> nViews;
  array<real_T, 1U> startIndex;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T b_iv[2];
  int32_T b_loop_ub;
  int32_T i;
  int32_T loop_ub;
  int32_T vstride_tmp;
  int32_T xj;
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
  reprojectionErrors.set_size(&gjb_emlrtRTEI, &sp, visibility.m);
  loop_ub = visibility.m;
  for (i = 0; i < loop_ub; i++) {
    reprojectionErrors[i] = 0.0F;
  }
  st.site = &qkc_emlrtRSI;
  b_st.site = &qkc_emlrtRSI;
  visibility.full(b_st, endIndex);
  b_st.site = &sj_emlrtRSI;
  c_st.site = &tj_emlrtRSI;
  d_st.site = &uj_emlrtRSI;
  if (endIndex.size(0) == 0) {
    nViews.set_size(&hjb_emlrtRTEI, &d_st, 0);
  } else {
    e_st.site = &no_emlrtRSI;
    vstride_tmp = endIndex.size(0);
    nViews.set_size(&dq_emlrtRTEI, &e_st, endIndex.size(0));
    f_st.site = &uq_emlrtRSI;
    if (endIndex.size(0) > 2147483646) {
      g_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(g_st);
    }
    for (xj = 0; xj < vstride_tmp; xj++) {
      nViews[xj] = endIndex[xj];
    }
  }
  st.site = &rkc_emlrtRSI;
  b_st.site = &vkc_emlrtRSI;
  vstride_tmp = 2;
  if (nViews.size(0) != 1) {
    vstride_tmp = 1;
  }
  loop_ub = nViews.size(0);
  endIndex.set_size(&ijb_emlrtRTEI, &b_st, nViews.size(0));
  for (i = 0; i < loop_ub; i++) {
    endIndex[i] = nViews[i];
  }
  c_st.site = &wkc_emlrtRSI;
  ::coder::internal::useConstantDim(endIndex, vstride_tmp);
  if (endIndex.size(0) - 1 < 1) {
    b_loop_ub = 0;
  } else {
    if (endIndex.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, endIndex.size(0), &op_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if ((endIndex.size(0) - 1 < 1) ||
        (endIndex.size(0) - 1 > endIndex.size(0))) {
      emlrtDynamicBoundsCheckR2012b(endIndex.size(0) - 1, 1, endIndex.size(0),
                                    &np_emlrtBCI, (emlrtConstCTX)&sp);
    }
    b_loop_ub = endIndex.size(0) - 1;
  }
  b_iv[0] = 1;
  b_iv[1] = b_loop_ub;
  st.site = &skc_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, endIndex.size(0), b_iv);
  startIndex.set_size(&jjb_emlrtRTEI, &sp, b_loop_ub + 1);
  startIndex[0] = 1.0;
  vstride_tmp = (b_loop_ub / 2) << 1;
  xj = vstride_tmp - 2;
  for (i = 0; i <= xj; i += 2) {
    __m128d b_r;
    b_r = _mm_loadu_pd(&endIndex[i]);
    _mm_storeu_pd(&startIndex[i + 1], _mm_add_pd(b_r, _mm_set1_pd(1.0)));
  }
  for (i = vstride_tmp; i < b_loop_ub; i++) {
    startIndex[i + 1] = endIndex[i] + 1.0;
  }
  b_loop_ub = curMeanErr.size(1);
  curMeanErrSqrt.set_size(&kjb_emlrtRTEI, &sp, 1, curMeanErr.size(1));
  for (i = 0; i < b_loop_ub; i++) {
    curMeanErrSqrt[i] = curMeanErr[i];
  }
  st.site = &tkc_emlrtRSI;
  b_sqrt(st, curMeanErrSqrt);
  for (vstride_tmp = 0; vstride_tmp < loop_ub; vstride_tmp++) {
    if (vstride_tmp + 1 > startIndex.size(0)) {
      emlrtDynamicBoundsCheckR2012b(vstride_tmp + 1, 1, startIndex.size(0),
                                    &mp_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (vstride_tmp + 1 > endIndex.size(0)) {
      emlrtDynamicBoundsCheckR2012b(vstride_tmp + 1, 1, endIndex.size(0),
                                    &lp_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (startIndex[vstride_tmp] > endIndex[vstride_tmp]) {
      i = 0;
      xj = 0;
    } else {
      i = static_cast<int32_T>(startIndex[vstride_tmp]);
      if ((i < 1) || (i > curMeanErrSqrt.size(1))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, curMeanErrSqrt.size(1),
                                      &kp_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i--;
      xj = static_cast<int32_T>(endIndex[vstride_tmp]);
      if ((xj < 1) || (xj > curMeanErrSqrt.size(1))) {
        emlrtDynamicBoundsCheckR2012b(xj, 1, curMeanErrSqrt.size(1),
                                      &jp_emlrtBCI, (emlrtConstCTX)&sp);
      }
    }
    b_loop_ub = xj - i;
    b_curMeanErrSqrt.set_size(&ljb_emlrtRTEI, &sp, 1, b_loop_ub);
    for (xj = 0; xj < b_loop_ub; xj++) {
      b_curMeanErrSqrt[xj] = curMeanErrSqrt[i + xj];
    }
    if (vstride_tmp + 1 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(vstride_tmp + 1, 1, loop_ub, &pp_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (vstride_tmp + 1 > reprojectionErrors.size(0)) {
      emlrtDynamicBoundsCheckR2012b(vstride_tmp + 1, 1,
                                    reprojectionErrors.size(0), &qp_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    st.site = &ukc_emlrtRSI;
    reprojectionErrors[vstride_tmp] =
        static_cast<real32_T>(sum(st, b_curMeanErrSqrt) / nViews[vstride_tmp]);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace bundleAdjust
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (computeReprojectionErrors.cpp)
