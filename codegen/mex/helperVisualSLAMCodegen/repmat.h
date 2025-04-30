//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// repmat.h
//
// Code generation for function 'repmat'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
void b_repmat(const emlrtStack &sp, const real32_T a[16], real_T varargin_1,
              array<real32_T, 2U> &b);

int32_T repmat(ptrdiff_t a, ptrdiff_t b_data[]);

void repmat(const emlrtStack &sp, const real32_T a_data[], real_T varargin_1,
            array<real32_T, 2U> &b);

void repmat(const emlrtStack &sp, const array<real32_T, 1U> &a,
            array<real32_T, 2U> &b);

void repmat(const emlrtStack &sp, const array<real_T, 2U> &a, real_T varargin_1,
            array<real_T, 2U> &b);

void repmat(const emlrtStack &sp, const real_T a_data[],
            const real_T varargin_1[2], array<real_T, 1U> &b);

void repmat(const emlrtStack &sp, const real32_T a_data[], real_T varargin_1,
            array<real32_T, 1U> &b);

} // namespace coder

// End of code generation (repmat.h)
