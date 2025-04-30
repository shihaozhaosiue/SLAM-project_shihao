//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// matchFeatures.h
//
// Code generation for function 'matchFeatures'
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
class binaryFeatures;

class b_binaryFeatures;

} // namespace coder

// Function Declarations
namespace coder {
void matchFeatures(const emlrtStack &sp, const binaryFeatures &varargin_1,
                   const b_binaryFeatures &varargin_2,
                   array<uint32_T, 2U> &indexPairs);

void matchFeatures(const emlrtStack &sp, const b_binaryFeatures &varargin_1,
                   const b_binaryFeatures &varargin_2,
                   array<uint32_T, 2U> &indexPairs);

} // namespace coder

// End of code generation (matchFeatures.h)
