//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// checkIfViewIsMissing.cpp
//
// Code generation for function 'checkIfViewIsMissing'
//

// Include files
#include "checkIfViewIsMissing.h"
#include "helperVisualSLAMCodegen_data.h"
#include "ismember.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace inputValidation {
void checkIfViewIsMissing(const emlrtStack &sp,
                          const array<uint32_T, 1U> &viewsOrViewIds,
                          uint32_T viewId)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  boolean_T tf;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &xyb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &adb_emlrtRSI;
  c_st.site = &bdb_emlrtRSI;
  tf = isMember(c_st, viewId, viewsOrViewIds);
  if (!tf) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &yd_emlrtRTEI, "vision:viewSet:missingViewId",
        "vision:viewSet:missingViewId", 2, 13, viewId);
  }
}

} // namespace inputValidation
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (checkIfViewIsMissing.cpp)
