//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// find.h
//
// Code generation for function 'find'
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

class c_sparse;

class b_sparse;

} // namespace coder

// Function Declarations
void binary_expand_op_38(const emlrtStack &sp, coder::array<int32_T, 1U> &in1,
                         const emlrtRSInfo in2,
                         const coder::array<boolean_T, 1U> &in3,
                         const coder::array<boolean_T, 1U> &in4);

namespace coder {
void b_eml_find(const emlrtStack &sp, const array<boolean_T, 1U> &x,
                array<int32_T, 1U> &i);

void c_eml_find(const emlrtStack &sp, const array<boolean_T, 2U> &x,
                array<int32_T, 2U> &i);

void d_eml_find(const emlrtStack &sp, const sparse &x, array<int32_T, 1U> &i,
                array<int32_T, 1U> &j);

void d_eml_find(const emlrtStack &sp, const b_sparse &x, array<int32_T, 1U> &i,
                array<int32_T, 1U> &j);

void d_eml_find(const emlrtStack &sp, const array<real_T, 1U> &x,
                array<int32_T, 1U> &i);

void d_eml_find(const emlrtStack &sp, const c_sparse &x, array<int32_T, 2U> &i,
                array<int32_T, 2U> &j, array<real_T, 2U> &v);

void d_eml_find(const emlrtStack &sp, const array<real_T, 2U> &x,
                array<int32_T, 2U> &i);

void e_eml_find(const emlrtStack &sp, const sparse &x, array<int32_T, 1U> &i,
                array<int32_T, 1U> &j);

void eml_find(const emlrtStack &sp, const array<boolean_T, 2U> &x,
              array<int32_T, 1U> &i);

} // namespace coder

// End of code generation (find.h)
