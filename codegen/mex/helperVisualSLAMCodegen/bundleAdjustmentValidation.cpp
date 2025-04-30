//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// bundleAdjustmentValidation.cpp
//
// Code generation for function 'bundleAdjustmentValidation'
//

// Include files
#include "bundleAdjustmentValidation.h"
#include "ORBPoints.h"
#include "any1.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "imageviewset.h"
#include "ismember.h"
#include "rigidtform3d.h"
#include "rt_nonfinite.h"
#include "unique.h"
#include "worldpointset.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo jtc_emlrtRSI{
    22,                                           // lineNo
    "bundleAdjustmentValidation/validateViewIds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\bundleAdjustmentValidation.m" // pathName
};

static emlrtRSInfo ktc_emlrtRSI{
    27,                                                 // lineNo
    "bundleAdjustmentValidation/checkIfViewIdsMissing", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\bundleAdjustmentValidation.m" // pathName
};

static emlrtRSInfo ltc_emlrtRSI{
    28,                                                 // lineNo
    "bundleAdjustmentValidation/checkIfViewIdsMissing", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\bundleAdjustmentValidation.m" // pathName
};

static emlrtRTEInfo anb_emlrtRTEI{
    26,                           // lineNo
    18,                           // colNo
    "bundleAdjustmentValidation", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bundleAdjust\\bundleAdjustmentValidation.m" // pName
};

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace bundleAdjust {
void bundleAdjustmentValidation::checkIfViewIdsMissing(
    const emlrtStack &sp, const array<uint32_T, 1U> &viewIds,
    const worldpointset &wpSet, const imageviewset &vSet)
{
  b_rigidtform3d unusedExpr;
  array<b_ORBPoints, 1U> b_expl_temp;
  array<cell_wrap_8, 2U> expl_temp;
  array<int32_T, 1U> b_r;
  array<int32_T, 1U> r1;
  array<uint32_T, 1U> t38_ViewId;
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
  st.site = &ktc_emlrtRSI;
  b_st.site = &xyb_emlrtRSI;
  c_st.site = &adb_emlrtRSI;
  d_st.site = &bdb_emlrtRSI;
  c_isMember(d_st, viewIds, wpSet.ViewIds, missingViewIdx);
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
    b_r.set_size(&anb_emlrtRTEI, &st, trueCount);
    trueCount = 0;
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      if (missingViewIdx[i]) {
        b_r[trueCount] = i;
        trueCount++;
      }
    }
    loop_ub_tmp = b_r.size(0);
    for (trueCount = 0; trueCount < loop_ub_tmp; trueCount++) {
      if (b_r[trueCount] > viewIds.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_r[trueCount], 0, viewIds.size(0) - 1,
                                      &hn_emlrtBCI, &st);
      }
    }
    if (b_r.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, b_r.size(0), &wm_emlrtBCI, &st);
    }
    emlrtErrorWithMessageIdR2018a(
        &st, &yd_emlrtRTEI, "vision:viewSet:missingViewId",
        "vision:viewSet:missingViewId", 2, 13, viewIds[b_r[0]]);
  }
  st.site = &ltc_emlrtRSI;
  b_st.site = &ltc_emlrtRSI;
  vSet.imageviewsetBase_get_Views(b_st, t38_ViewId, expl_temp, b_expl_temp,
                                  unusedExpr);
  b_st.site = &xyb_emlrtRSI;
  c_st.site = &adb_emlrtRSI;
  d_st.site = &bdb_emlrtRSI;
  b_isMember(d_st, viewIds, t38_ViewId, missingViewIdx);
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
    r1.set_size(&anb_emlrtRTEI, &st, trueCount);
    trueCount = 0;
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      if (missingViewIdx[i]) {
        r1[trueCount] = i;
        trueCount++;
      }
    }
    loop_ub_tmp = r1.size(0);
    for (trueCount = 0; trueCount < loop_ub_tmp; trueCount++) {
      if (r1[trueCount] > viewIds.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r1[trueCount], 0, viewIds.size(0) - 1,
                                      &hn_emlrtBCI, &st);
      }
    }
    if (r1.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, r1.size(0), &wm_emlrtBCI, &st);
    }
    emlrtErrorWithMessageIdR2018a(
        &st, &yd_emlrtRTEI, "vision:viewSet:missingViewId",
        "vision:viewSet:missingViewId", 2, 13, viewIds[r1[0]]);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void bundleAdjustmentValidation::validateViewIds(
    const emlrtStack &sp, const array<uint32_T, 1U> &viewIds)
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
  st.site = &jtc_emlrtRSI;
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
        "MATLAB:bundleAdjustment:expectedPositive", 3, 4, 7, "viewIds");
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

} // namespace bundleAdjust
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (bundleAdjustmentValidation.cpp)
