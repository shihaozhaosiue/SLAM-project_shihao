//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// bsxfun.cpp
//
// Code generation for function 'bsxfun'
//

// Include files
#include "bsxfun.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
void bsxfun(const emlrtStack &sp, const array<real32_T, 2U> &a,
            const array<real32_T, 2U> &b, array<real32_T, 2U> &c)
{
  int32_T csz_idx_1;
  if (b.size(1) == 1) {
    csz_idx_1 = a.size(1);
  } else if (a.size(1) == 1) {
    csz_idx_1 = b.size(1);
  } else if (a.size(1) == b.size(1)) {
    csz_idx_1 = a.size(1);
  } else {
    emlrtErrorWithMessageIdR2018a(&sp, &wb_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  c.set_size(&jp_emlrtRTEI, &sp, 2, csz_idx_1);
  if (csz_idx_1 != 0) {
    int32_T acoef;
    int32_T bcoef;
    acoef = (a.size(1) != 1);
    bcoef = (b.size(1) != 1);
    for (int32_T k{0}; k < csz_idx_1; k++) {
      int32_T varargin_2;
      int32_T varargin_3;
      varargin_2 = acoef * k;
      varargin_3 = bcoef * k;
      c[2 * k] = a[2 * varargin_2] / b[varargin_3];
      c[2 * k + 1] = a[2 * varargin_2 + 1] / b[varargin_3];
    }
  }
}

void bsxfun(const emlrtStack &sp, const array<real_T, 2U> &a,
            const array<real_T, 1U> &b, array<real_T, 2U> &c)
{
  int32_T csz_idx_0;
  if (b.size(0) == 1) {
    csz_idx_0 = a.size(0);
  } else if (a.size(0) == 1) {
    csz_idx_0 = b.size(0);
  } else if (a.size(0) == b.size(0)) {
    csz_idx_0 = a.size(0);
  } else {
    emlrtErrorWithMessageIdR2018a(&sp, &wb_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  c.set_size(&jp_emlrtRTEI, &sp, csz_idx_0, 2);
  if (csz_idx_0 != 0) {
    int32_T bcoef;
    csz_idx_0 = (a.size(0) != 1);
    bcoef = (b.size(0) != 1);
    for (int32_T k{0}; k < 2; k++) {
      int32_T i;
      i = c.size(0);
      for (int32_T b_k{0}; b_k < i; b_k++) {
        c[b_k + c.size(0) * k] =
            a[csz_idx_0 * b_k + a.size(0) * k] / b[bcoef * b_k];
      }
    }
  }
}

} // namespace coder

// End of code generation (bsxfun.cpp)
