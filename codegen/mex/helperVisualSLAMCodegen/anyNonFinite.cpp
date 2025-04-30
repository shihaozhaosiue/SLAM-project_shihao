//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// anyNonFinite.cpp
//
// Code generation for function 'anyNonFinite'
//

// Include files
#include "anyNonFinite.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

// Function Definitions
namespace coder {
namespace internal {
boolean_T anyNonFinite(const real32_T x[9])
{
  boolean_T p;
  p = true;
  for (int32_T k{0}; k < 9; k++) {
    if (p) {
      real32_T f;
      f = x[k];
      if (muSingleScalarIsInf(f) || muSingleScalarIsNaN(f)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  return !p;
}

} // namespace internal
} // namespace coder

// End of code generation (anyNonFinite.cpp)
