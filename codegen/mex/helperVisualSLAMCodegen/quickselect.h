//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// quickselect.h
//
// Code generation for function 'quickselect'
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
namespace internal {
real32_T quickselect(array<real32_T, 2U> &v, int32_T n, int32_T vlen,
                     int32_T &nfirst, int32_T &nlast);

real32_T quickselect(array<real32_T, 1U> &v, int32_T n, int32_T vlen,
                     int32_T &nfirst, int32_T &nlast);

} // namespace internal
} // namespace coder

// End of code generation (quickselect.h)
