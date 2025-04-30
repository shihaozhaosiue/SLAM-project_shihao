//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sub2ind.cpp
//
// Code generation for function 'sub2ind'
//

// Include files
#include "sub2ind.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
namespace internal {
boolean_T allinrange(const array<real_T, 2U> &x, int32_T hi)
{
  int32_T k;
  boolean_T p;
  k = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if (k <= x.size(1) - 1) {
      if ((x[k] >= 1.0) && (x[k] <= hi)) {
        k++;
      } else {
        p = false;
        exitg1 = 1;
      }
    } else {
      p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  return p;
}

} // namespace internal
} // namespace coder

// End of code generation (sub2ind.cpp)
