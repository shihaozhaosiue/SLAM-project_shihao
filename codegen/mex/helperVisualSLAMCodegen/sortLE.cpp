//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sortLE.cpp
//
// Code generation for function 'sortLE'
//

// Include files
#include "sortLE.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Function Definitions
namespace coder {
namespace internal {
boolean_T sortLE(const array<real_T, 2U> &v, int32_T idx1, int32_T idx2)
{
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    real_T v1;
    real_T v2;
    v1 = v[(idx1 + v.size(0) * k) - 1];
    v2 = v[(idx2 + v.size(0) * k) - 1];
    if ((v1 == v2) || (muDoubleScalarIsNaN(v1) && muDoubleScalarIsNaN(v2))) {
      k++;
    } else {
      if ((!(v1 <= v2)) && (!muDoubleScalarIsNaN(v2))) {
        p = false;
      }
      exitg1 = true;
    }
  }
  return p;
}

} // namespace internal
} // namespace coder

// End of code generation (sortLE.cpp)
