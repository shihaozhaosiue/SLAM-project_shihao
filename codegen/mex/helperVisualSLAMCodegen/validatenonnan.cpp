//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// validatenonnan.cpp
//
// Code generation for function 'validatenonnan'
//

// Include files
#include "validatenonnan.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Function Definitions
namespace coder {
namespace internal {
namespace valattr {
void validatenonnan(const emlrtStack &sp, const array<real32_T, 1U> &a)
{
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= a.size(0) - 1)) {
    if (!muSingleScalarIsNaN(a[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &f_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonNaN",
        "MATLAB:matchFeaturesInRadius:expectedNonNaN", 3, 4, 6, "radius");
  }
}

} // namespace valattr
} // namespace internal
} // namespace coder

// End of code generation (validatenonnan.cpp)
