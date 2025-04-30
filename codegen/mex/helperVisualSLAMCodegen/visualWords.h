//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// visualWords.h
//
// Code generation for function 'visualWords'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "visualWordsImpl.h"
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
class visualWords {
public:
  void vertcat(const emlrtStack &sp);
  array<uint32_T, 1U> WordIndex;
  array<real32_T, 2U> Location;
  real_T VocabularySize;
  array<visualWordsImpl, 2U> Data;
};

} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (visualWords.h)
