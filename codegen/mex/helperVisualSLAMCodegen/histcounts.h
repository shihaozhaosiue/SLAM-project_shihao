//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// histcounts.h
//
// Code generation for function 'histcounts'
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
void histcounts(const emlrtStack &sp, const array<real_T, 1U> &x,
                const array<real_T, 2U> &varargin_1, array<real_T, 2U> &n);

}

// End of code generation (histcounts.h)
