//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// mod.cpp
//
// Code generation for function 'mod'
//

// Include files
#include "mod.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

// Function Definitions
namespace coder {
real_T b_mod(real_T x)
{
  real_T b_r;
  if (muDoubleScalarIsNaN(x) || muDoubleScalarIsInf(x)) {
    b_r = rtNaN;
  } else if (x == 0.0) {
    b_r = 0.0;
  } else {
    b_r = muDoubleScalarRem(x, 4.0);
    if (b_r == 0.0) {
      b_r = 0.0;
    } else if (b_r < 0.0) {
      b_r += 4.0;
    }
  }
  return b_r;
}

} // namespace coder

// End of code generation (mod.cpp)
