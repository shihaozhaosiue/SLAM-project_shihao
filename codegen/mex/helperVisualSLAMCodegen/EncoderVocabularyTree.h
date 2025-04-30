//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// EncoderVocabularyTree.h
//
// Code generation for function 'EncoderVocabularyTree'
//

#pragma once

// Include files
#include "helperVisualSLAMCodegen_internal_types.h"
#include "rtwtypes.h"
#include "string1.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
namespace coder {
namespace vision {
namespace internal {
namespace bof {
class EncoderBinaryFeatures;

}
} // namespace internal
} // namespace vision
} // namespace coder

// Type Definitions
namespace coder {
namespace vision {
namespace internal {
namespace bof {
class EncoderVocabularyTree {
public:
  void encode(const emlrtStack &sp, const array<uint8_T, 2U> &features,
              array<real32_T, 2U> &featureVector) const;
  static void b_iAssignRecursively(
      const emlrtStack *sp, const array<cell_wrap_16, 1U> &vocabulary,
      const real_T vocabSizes[111], array<real_T, 1U> &assignments,
      const array<uint8_T, 2U> &features,
      const array<boolean_T, 1U> &whichFeatures, real_T *offset,
      real_T curNodeIdx, real_T curLevel, real_T numLevels, real_T bFactor,
      const array<real_T, 1U> &leafNodes);

private:
  static void iAssignRecursively(
      const emlrtStack *sp, const array<cell_wrap_16, 1U> &vocabulary,
      const real_T vocabSizes[111], array<real_T, 1U> &assignments,
      const array<uint8_T, 2U> &features,
      const array<boolean_T, 1U> &whichFeatures, real_T *offset,
      real_T curNodeIdx, real_T curLevel, real_T numLevels, real_T bFactor,
      const array<real_T, 1U> &leafNodes);

public:
  real_T VocabularySize;
  rtString Normalization;
  EncoderBinaryFeatures *Encoder;
  real_T NumLevels;
  real_T BranchingFactor;
  real_T VocabularySizes[111];
  array<cell_wrap_16, 1U> Vocabulary;
};

} // namespace bof
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (EncoderVocabularyTree.h)
