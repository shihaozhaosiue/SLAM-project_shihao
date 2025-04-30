//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// xdotc.h
//
// Code generation for function 'xdotc'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
namespace internal {
namespace blas {
real_T b_xdotc(const emlrtStack &sp, int32_T n, const real_T x[25], int32_T ix0,
               const real_T y[25], int32_T iy0);

real32_T b_xdotc(const emlrtStack &sp, int32_T n, const real32_T x[16],
                 int32_T ix0, const real32_T y[16], int32_T iy0);

real_T c_xdotc(const emlrtStack &sp, int32_T n, const real_T x[81], int32_T ix0,
               const real_T y[81], int32_T iy0);

real_T d_xdotc(const emlrtStack &sp, int32_T n, const real_T x[9], int32_T ix0,
               const real_T y[9], int32_T iy0);

real_T e_xdotc(const emlrtStack &sp, int32_T n, const real_T x[16], int32_T ix0,
               const real_T y[16], int32_T iy0);

real_T xdotc(const emlrtStack &sp, int32_T n, const real_T x[45], int32_T ix0,
             const real_T y[45], int32_T iy0);

real32_T xdotc(const emlrtStack &sp, int32_T n, const real32_T x[9],
               int32_T ix0, const real32_T y[9], int32_T iy0);

} // namespace blas
} // namespace internal
} // namespace coder

// End of code generation (xdotc.h)
