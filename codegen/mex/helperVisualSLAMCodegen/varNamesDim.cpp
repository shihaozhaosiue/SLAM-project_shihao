//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// varNamesDim.cpp
//
// Code generation for function 'varNamesDim'
//

// Include files
#include "varNamesDim.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
namespace b_private {
void c_varNamesDim::selectFrom(const emlrtStack &sp, d_varNamesDim &newObj)
{
  newObj.hasUnits = false;
  newObj.units[0].f1.set_size(&ev_emlrtRTEI, &sp, 1, 0);
  newObj.units[1].f1.set_size(&ev_emlrtRTEI, &sp, 1, 0);
  newObj.units[2].f1.set_size(&ev_emlrtRTEI, &sp, 1, 0);
  newObj.hasDescrs = false;
  newObj.descrs[0].f1.set_size(&fv_emlrtRTEI, &sp, 1, 0);
  newObj.descrs[1].f1.set_size(&fv_emlrtRTEI, &sp, 1, 0);
  newObj.descrs[2].f1.set_size(&fv_emlrtRTEI, &sp, 1, 0);
  newObj.hasContinuity = false;
  newObj.continuity[0] = Continuity::unset;
  newObj.continuity[1] = Continuity::unset;
  newObj.continuity[2] = Continuity::unset;
}

void c_varNamesDim::subs2inds(const emlrtStack &sp, varNamesDim &updatedObj)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &ktb_emlrtRSI;
  b_st.site = &ltb_emlrtRSI;
  c_st.site = &jtb_emlrtRSI;
  updatedObj.hasUnits = false;
  updatedObj.units[0].f1.set_size(&ev_emlrtRTEI, &c_st, 1, 0);
  updatedObj.units[1].f1.set_size(&ev_emlrtRTEI, &c_st, 1, 0);
  updatedObj.hasDescrs = false;
  updatedObj.descrs[0].f1.set_size(&fv_emlrtRTEI, &c_st, 1, 0);
  updatedObj.descrs[1].f1.set_size(&fv_emlrtRTEI, &c_st, 1, 0);
  updatedObj.hasContinuity = false;
  updatedObj.continuity[0] = Continuity::unset;
  updatedObj.continuity[1] = Continuity::unset;
  b_st.site = &hgb_emlrtRSI;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace b_private
} // namespace tabular
} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (varNamesDim.cpp)
