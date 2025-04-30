//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// log2.cpp
//
// Code generation for function 'log2'
//

// Include files
#include "log2.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <cmath>

// Variable Definitions
static emlrtRTEInfo r_emlrtRTEI{
    25,     // lineNo
    13,     // colNo
    "log2", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\log2.m" // pName
};

// Function Definitions
namespace coder {
real_T b_log2(const emlrtStack &sp, real_T x)
{
  real_T f;
  int32_T eint;
  if (x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &r_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "log2");
  }
  if (x == 0.0) {
    f = rtMinusInf;
  } else if ((!muDoubleScalarIsInf(x)) && (!muDoubleScalarIsNaN(x))) {
    f = std::frexp(x, &eint);
    if (f == 0.5) {
      f = static_cast<real_T>(eint) - 1.0;
    } else if ((eint == 1) && (f < 0.75)) {
      f = muDoubleScalarLog(2.0 * f) / 0.69314718055994529;
    } else {
      f = muDoubleScalarLog(f) / 0.69314718055994529 +
          static_cast<real_T>(eint);
    }
  } else {
    f = x;
  }
  return f;
}

} // namespace coder

// End of code generation (log2.cpp)
