//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// useConstantDim.cpp
//
// Code generation for function 'useConstantDim'
//

// Include files
#include "useConstantDim.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
namespace internal {
void useConstantDim(array<real_T, 1U> &varargin_2, int32_T varargin_3)
{
  if ((varargin_3 == 1) && (varargin_2.size(0) != 0) &&
      (varargin_2.size(0) != 1)) {
    int32_T i;
    i = varargin_2.size(0);
    for (int32_T k{0}; k <= i - 2; k++) {
      varargin_2[k + 1] = varargin_2[k] + varargin_2[k + 1];
    }
  }
}

} // namespace internal
} // namespace coder

// End of code generation (useConstantDim.cpp)
