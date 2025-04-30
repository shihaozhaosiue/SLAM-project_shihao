//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// validatenrows.cpp
//
// Code generation for function 'validatenrows'
//

// Include files
#include "validatenrows.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRTEInfo be_emlrtRTEI{
    10,              // lineNo
    23,              // colNo
    "validatenrows", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatenrows.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
namespace valattr {
void validatenrows(const emlrtStack &sp, const array<real32_T, 2U> &a, real_T v)
{
  if ((!(muDoubleScalarFloor(v) == v)) || muDoubleScalarIsInf(v)) {
    emlrtErrorWithMessageIdR2018a(&sp, &be_emlrtRTEI,
                                  "Coder:toolbox:ValidateattributesBadNrows",
                                  "MATLAB:validateattributes:badnrows", 0);
  }
  if (!(a.size(0) == v)) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &ce_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectNumrows",
        "MATLAB:worldpointset:incorrectNumrows", 5, 4, 11, "worldPoints", 6, v);
  }
}

} // namespace valattr
} // namespace internal
} // namespace coder

// End of code generation (validatenrows.cpp)
