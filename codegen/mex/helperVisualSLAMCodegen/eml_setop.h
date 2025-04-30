//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// eml_setop.h
//
// Code generation for function 'eml_setop'
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
void b_do_vectors(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                  const array<uint32_T, 1U> &b, array<uint32_T, 1U> &c,
                  array<int32_T, 1U> &ia, array<int32_T, 1U> &ib);

int32_T b_do_vectors(const emlrtStack &sp, const uint32_T a_data[],
                     int32_T a_size, uint32_T c_data[], int32_T ia_data[],
                     int32_T &ia_size, int32_T ib_data[], int32_T &ib_size);

int32_T do_rows(const emlrtStack &sp, const array<uint32_T, 2U> &a,
                const uint32_T b[2], uint32_T c_data[], int32_T c_size[2],
                int32_T ia_data[], int32_T ib_data[], int32_T &ib_size);

void do_vectors(const emlrtStack &sp, const array<real_T, 1U> &a,
                const array<real_T, 1U> &b, array<real_T, 1U> &c,
                array<int32_T, 1U> &ia, array<int32_T, 1U> &ib);

int32_T do_vectors(const emlrtStack &sp, const array<real_T, 1U> &a,
                   const array<real_T, 1U> &b, array<real_T, 1U> &c,
                   array<int32_T, 1U> &ia);

int32_T do_vectors(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                   const array<real_T, 1U> &b, array<uint32_T, 1U> &c,
                   array<int32_T, 1U> &ia);

void do_vectors(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                const array<uint32_T, 2U> &b, array<uint32_T, 1U> &c,
                array<int32_T, 1U> &ia, array<int32_T, 1U> &ib);

int32_T do_vectors(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                   const array<uint32_T, 1U> &b, array<uint32_T, 1U> &c,
                   array<int32_T, 1U> &ia);

int32_T do_vectors(const emlrtStack &sp, const uint32_T a_data[],
                   int32_T a_size, uint32_T c_data[], int32_T ia_data[],
                   int32_T &ia_size, int32_T ib_data[], int32_T &ib_size);

int32_T do_vectors(const emlrtStack &sp, const int32_T b_size[2],
                   int32_T c_size[2], int32_T &ib_size);

int32_T do_vectors(const emlrtStack &sp, const uint32_T b_data[],
                   const int32_T b_size[2], int32_T c_size[2],
                   int32_T ia_data[], int32_T ib_data[], int32_T &ib_size);

void do_vectors(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                const array<uint32_T, 1U> &b, array<uint32_T, 1U> &c,
                array<int32_T, 1U> &ia, array<int32_T, 1U> &ib);

int32_T do_vectors(const emlrtStack &sp, uint32_T a,
                   const array<uint32_T, 2U> &b, uint32_T c_data[],
                   int32_T c_size[2], int32_T ia_data[], int32_T ib_data[],
                   int32_T &ib_size);

int32_T do_vectors(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                   uint32_T b, uint32_T c_data[], int32_T ia_data[],
                   int32_T &ia_size, int32_T ib_data[], int32_T &ib_size);

} // namespace coder

// End of code generation (eml_setop.h)
