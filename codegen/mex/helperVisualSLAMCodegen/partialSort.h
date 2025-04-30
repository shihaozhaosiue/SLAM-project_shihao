//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// partialSort.h
//
// Code generation for function 'partialSort'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
namespace vision {
namespace internal {
int32_T partialSort(const emlrtStack &sp, array<real32_T, 2U> &x,
                    real32_T values_data[], uint32_T indices_data[],
                    int32_T &indices_size);

}
} // namespace vision
} // namespace coder

// End of code generation (partialSort.h)
