//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// nchoosek.h
//
// Code generation for function 'nchoosek'
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
void nchoosek(const emlrtStack &sp, const uint32_T x_data[],
              const int32_T x_size[2], array<uint32_T, 2U> &y);

}

// End of code generation (nchoosek.h)
