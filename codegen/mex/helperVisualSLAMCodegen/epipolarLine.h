//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// epipolarLine.h
//
// Code generation for function 'epipolarLine'
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
void epipolarLine(const emlrtStack &sp, const real_T f[9],
                  const array<real32_T, 2U> &points, array<real_T, 2U> &lines);

void epipolarLine(const emlrtStack &sp, const real32_T f[9],
                  const array<real32_T, 2U> &points,
                  array<real32_T, 2U> &lines);

} // namespace coder

// End of code generation (epipolarLine.h)
