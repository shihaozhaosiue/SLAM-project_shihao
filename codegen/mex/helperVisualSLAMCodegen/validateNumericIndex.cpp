//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// validateNumericIndex.cpp
//
// Code generation for function 'validateNumericIndex'
//

// Include files
#include "validateNumericIndex.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Function Definitions
namespace coder {
void sparse_validateNumericIndex(const emlrtStack &sp, real_T idx)
{
  if ((!(muDoubleScalarFloor(idx) == idx)) || muDoubleScalarIsInf(idx) ||
      (!(idx > 0.0))) {
    emlrtErrorWithMessageIdR2018a(&sp, &uc_emlrtRTEI,
                                  "Coder:MATLAB:badsubscript",
                                  "Coder:MATLAB:badsubscript", 0);
  }
  if (!(idx <= 2.0)) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &vc_emlrtRTEI, "Coder:builtins:IndexOutOfBounds",
        "Coder:builtins:IndexOutOfBounds", 6, 6, idx, 12, 1, 12, 2);
  }
}

void sparse_validateNumericIndex(const emlrtStack &sp, int32_T upperBound,
                                 const array<real_T, 1U> &idx)
{
  int32_T i;
  i = idx.size(0);
  for (int32_T k{0}; k < i; k++) {
    if ((!(muDoubleScalarFloor(idx[k]) == idx[k])) ||
        muDoubleScalarIsInf(idx[k]) || (!(idx[k] > 0.0))) {
      emlrtErrorWithMessageIdR2018a(&sp, &uc_emlrtRTEI,
                                    "Coder:MATLAB:badsubscript",
                                    "Coder:MATLAB:badsubscript", 0);
    }
    if (!(idx[k] <= upperBound)) {
      emlrtErrorWithMessageIdR2018a(&sp, &vc_emlrtRTEI,
                                    "Coder:builtins:IndexOutOfBounds",
                                    "Coder:builtins:IndexOutOfBounds", 6, 6,
                                    idx[k], 12, 1, 12, upperBound);
    }
  }
}

} // namespace coder

// End of code generation (validateNumericIndex.cpp)
