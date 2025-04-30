//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// binaryFeatures.h
//
// Code generation for function 'binaryFeatures'
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

// Type Definitions
namespace coder {
class binaryFeatures {
public:
  array<uint8_T, 2U> Features;
  real_T NumBits;
  real_T NumFeatures;
};

class b_binaryFeatures {
public:
  array<uint8_T, 2U> Features;
  real_T NumBits;
};

} // namespace coder

// End of code generation (binaryFeatures.h)
