//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// algEstimateGeometricTransform.h
//
// Code generation for function 'algEstimateGeometricTransform'
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
namespace geotrans {
void computeProjective2d(const emlrtStack &sp, const real32_T points[16],
                         real32_T T[9]);

void computeProjective2d(const emlrtStack &sp,
                         const array<real32_T, 3U> &points, real32_T T[9]);

void evaluateTform2d(const emlrtStack &sp, const real32_T tform[9],
                     const array<real32_T, 3U> &points,
                     array<real32_T, 1U> &dis);

void evaluateTform3d(const emlrtStack &sp, const real32_T tform[16],
                     const array<real32_T, 3U> &points,
                     array<real32_T, 1U> &dis);

} // namespace geotrans
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (algEstimateGeometricTransform.h)
