//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ismember.h
//
// Code generation for function 'ismember'
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
void b_isMember(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                const array<uint32_T, 1U> &s, array<boolean_T, 1U> &tf);

void c_isMember(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                const array<uint32_T, 2U> &s, array<boolean_T, 1U> &tf);

void d_isMember(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                const array<uint32_T, 1U> &s, array<boolean_T, 1U> &tf,
                array<int32_T, 1U> &loc);

boolean_T isMember(const emlrtStack &sp, int32_T a, const array<real_T, 2U> &s);

boolean_T isMember(const uint32_T s_data[]);

boolean_T isMember(const emlrtStack &sp, uint32_T a,
                   const array<uint32_T, 1U> &s);

void isMemberRows(const emlrtStack &sp, const array<uint32_T, 2U> &A,
                  const array<uint32_T, 2U> &S, array<boolean_T, 1U> &tf,
                  array<int32_T, 1U> &loc);

} // namespace coder

// End of code generation (ismember.h)
