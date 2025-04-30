//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ViewSetBaseImpl.cpp
//
// Code generation for function 'ViewSetBaseImpl'
//

// Include files
#include "ViewSetBaseImpl.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "unique.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Function Definitions
namespace coder {
uint32_T ViewSetBaseImpl::checkViewId(const emlrtStack &sp, real_T viewId)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  uint32_T b_viewId;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &tyb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &uyb_emlrtRSI;
  c_st.site = &be_emlrtRSI;
  if (muDoubleScalarIsInf(viewId) || muDoubleScalarIsNaN(viewId) ||
      (!(muDoubleScalarFloor(viewId) == viewId))) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &qc_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedInteger",
        "MATLAB:imageviewset:expectedInteger", 3, 4, 6, "viewId");
  }
  c_st.site = &be_emlrtRSI;
  if (viewId <= 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:imageviewset:expectedPositive", 3, 4, 6, "viewId");
  }
  if (viewId < 4.294967296E+9) {
    b_viewId = static_cast<uint32_T>(viewId);
  } else {
    b_viewId = MAX_uint32_T;
  }
  return b_viewId;
}

void ViewSetBaseImpl::checkViewId(const emlrtStack &sp, const uint32_T *viewId)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &tyb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &uyb_emlrtRSI;
  c_st.site = &be_emlrtRSI;
  if (*viewId <= 0U) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:imageviewset:expectedPositive", 3, 4, 6, "viewId");
  }
}

void ViewSetBaseImpl::checkViewIds(const emlrtStack &sp,
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
  st.site = &epc_emlrtRSI;
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
        "MATLAB:imageviewset:expectedPositive", 3, 4, 7, "viewIds");
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

} // namespace coder

// End of code generation (ViewSetBaseImpl.cpp)
