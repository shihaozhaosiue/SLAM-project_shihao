//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// xrot.h
//
// Code generation for function 'xrot'
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
void b_xrot(real_T x[25], int32_T ix0, int32_T iy0, real_T c, real_T s);

void c_xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s);

void xrot(real_T x[81], int32_T ix0, int32_T iy0, real_T c, real_T s);

void xrot(real32_T x[9], int32_T ix0, int32_T iy0, real32_T c, real32_T s);

} // namespace blas
} // namespace internal
} // namespace coder

// End of code generation (xrot.h)
