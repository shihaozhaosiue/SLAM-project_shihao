//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// EncoderBinaryFeatures.h
//
// Code generation for function 'EncoderBinaryFeatures'
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
namespace vision {
namespace internal {
namespace bof {
class EncoderBinaryFeatures {
public:
  static void assignVisualWords(const emlrtStack &sp,
                                const uint8_T vocabularyFeatures[320],
                                const array<uint8_T, 2U> &features,
                                array<uint32_T, 1U> &assignments);
  static void b_assignVisualWords(const emlrtStack &sp,
                                  const uint8_T vocabularyFeatures[320],
                                  const array<uint8_T, 2U> &features,
                                  array<uint32_T, 1U> &assignments);
};

} // namespace bof
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (EncoderBinaryFeatures.h)
