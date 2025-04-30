//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// bagOfFeatures.h
//
// Code generation for function 'bagOfFeatures'
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
namespace vision {
namespace internal {
namespace bof {
class EncoderVocabularyTree;

}
} // namespace internal
} // namespace vision
} // namespace coder
struct c_helperVisualSLAMCodegenStackD;

namespace coder {
class c_sparse;

class rtString;

} // namespace coder
struct cell_wrap_16;

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
class bagOfFeatures {
public:
  void encode(c_helperVisualSLAMCodegenStackD *SD, const emlrtStack &sp,
              const uint8_T in[307200], c_sparse &featureVector);
  static bagOfFeatures *
  loadobj(const emlrtStack &sp, const rtString &structBag_Encoder_Normalization,
          const real_T c_structBag_Encoder_VocabularyS[111],
          const cell_wrap_16 c_structBag_Encoder_Vocabulary_[],
          vision::internal::bof::EncoderBinaryFeatures &iobj_0,
          vision::internal::bof::EncoderVocabularyTree &iobj_1,
          bagOfFeatures &iobj_2);
  real_T NumVisualWords;
  real_T CustomFeatureLength;
  vision::internal::bof::EncoderVocabularyTree *Encoder;
};

} // namespace coder

// End of code generation (bagOfFeatures.h)
