//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sparse.h
//
// Code generation for function 'sparse'
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

// Type Declarations
namespace coder {
class sparse;

class b_sparse;

class c_sparse;

class e_sparse;

class f_sparse;

} // namespace coder

// Function Declarations
namespace coder {
void h_sparse(const emlrtStack &sp, const array<int32_T, 1U> &varargin_1,
              const array<int32_T, 1U> &varargin_2,
              const array<real_T, 1U> &varargin_3, real_T varargin_4,
              real_T varargin_5, sparse &y);

void h_sparse(const emlrtStack &sp, const array<real_T, 1U> &varargin_1,
              b_sparse &y);

void h_sparse(const emlrtStack &sp, const array<real_T, 2U> &varargin_1,
              sparse &y);

void h_sparse(const emlrtStack &sp, const array<real_T, 2U> &varargin_1,
              c_sparse &y);

void h_sparse(const emlrtStack &sp, sparse &y);

void i_sparse(const emlrtStack &sp, boolean_T varargin_1, e_sparse &y);

void j_sparse(const emlrtStack &sp, const array<boolean_T, 2U> &varargin_1,
              f_sparse &y);

} // namespace coder

// End of code generation (sparse.h)
