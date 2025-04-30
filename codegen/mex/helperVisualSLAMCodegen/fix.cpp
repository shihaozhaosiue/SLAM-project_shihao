//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// fix.cpp
//
// Code generation for function 'fix'
//

// Include files
#include "fix.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
void b_fix(const emlrtStack &sp, const array<real_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &acb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &qo_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
}

} // namespace coder

// End of code generation (fix.cpp)
