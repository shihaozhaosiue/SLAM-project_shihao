//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// strcmp.h
//
// Code generation for function 'strcmp'
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

// Type Declarations
namespace coder {
class rtString;

}
struct cell_wrap_188;

// Function Declarations
namespace coder {
namespace internal {
boolean_T b_strcmp(const emlrtStack &sp, const rtString &a);

void c_strcmp(const cell_wrap_188 b_data[], boolean_T bool_data[],
              int32_T bool_size[2]);

void d_strcmp(const cell_wrap_188 b_data[], boolean_T bool_data[],
              int32_T bool_size[2]);

void e_strcmp(const cell_wrap_188 b_data[], boolean_T bool_data[],
              int32_T bool_size[2]);

} // namespace internal
} // namespace coder

// End of code generation (strcmp.h)
