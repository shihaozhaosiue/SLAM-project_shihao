//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// error.cpp
//
// Code generation for function 'error'
//

// Include files
#include "error.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_mexutil.h"
#include "rt_nonfinite.h"

// Function Definitions
namespace coder {
void c_error(const emlrtStack &sp)
{
  static const int32_T b_iv[2]{1, 29};
  static const char_T varargin_1[29]{
      'U', 'n', 'a', 'b', 'l', 'e', ' ', 't', 'o', ' ', 'i', 'n', 'i', 't', 'i',
      'a', 'l', 'i', 'z', 'e', ' ', 't', 'h', 'e', ' ', 'm', 'a', 'p', '.'};
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 29, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  st.site = &fid_emlrtRSI;
  b_error(st, y, f_emlrtMCI);
}

} // namespace coder

// End of code generation (error.cpp)
