//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// locBsearch.h
//
// Code generation for function 'locBsearch'
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
int32_T b_sparse_locBsearch(const array<int32_T, 1U> &x, real_T xi,
                            int32_T xstart, int32_T xend, boolean_T &found);

int32_T sparse_locBsearch(const array<int32_T, 1U> &x, int32_T xi,
                          int32_T xstart, int32_T xend, boolean_T &found);

} // namespace coder

// End of code generation (locBsearch.h)
