//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// invertedImageIndex.h
//
// Code generation for function 'invertedImageIndex'
//

#pragma once

// Include files
#include "helperVisualSLAMCodegen_internal_types.h"
#include "rtwtypes.h"
#include "sparse1.h"
#include "visualWords.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
namespace coder {
class bagOfFeatures;

class binaryFeatures;

class b_binaryFeatures;

} // namespace coder

// Type Definitions
namespace coder {
class invertedImageIndex {
public:
  invertedImageIndex *init(const emlrtStack &sp, bagOfFeatures &bag);
  static void makeEmptyVisualWords(const emlrtStack &sp,
                                   vision::internal::visualWords &emptyWords);
  void addImageFeatures(const emlrtStack &sp, const binaryFeatures &features);
  void addImageFeatures(const emlrtStack &sp, const b_binaryFeatures &features);
  void findImagesContainingWords(const emlrtStack &sp,
                                 const array<real_T, 1U> &words,
                                 array<real_T, 1U> &imageIDs) const;
  void computeMatchMetric(const emlrtStack &sp,
                          const array<real_T, 1U> &imageIDs,
                          const array<real_T, 1U> &words,
                          const c_sparse &queryFeatures,
                          array<real_T, 1U> &scores) const;
  void addImageFeatures(const emlrtStack &sp, const binaryFeatures &features,
                        real_T imageId);
  void removeStopWords(const emlrtStack &sp, const c_sparse &queryHist,
                       const real_T freqRange[2],
                       array<real_T, 1U> &words) const;
  void removeImagesWithLowWordMatches(const emlrtStack &sp,
                                      array<real_T, 1U> &imageIDs,
                                      const array<real_T, 1U> &words,
                                      real_T threshold) const;

protected:
  void updateIndexStatistics(const emlrtStack &sp);
  void applyWeighting(const emlrtStack &sp, const c_sparse &h,
                      c_sparse &tfidf) const;

private:
  static void updateImageLocation(const emlrtStack &sp,
                                  const invertedImageIndex *b_this,
                                  array<cell_wrap_17, 1U> &updatedLocation);
  static void l2NormalizeFeatures(const emlrtStack &sp, const sparse &features,
                                  sparse &normalizedFeatures);
  static void l2NormalizeFeatures(const emlrtStack &sp,
                                  const c_sparse &features,
                                  c_sparse &normalizedFeatures);

public:
  array<cell_wrap_17, 1U> ImageLocation;
  vision::internal::visualWords ImageWords;
  sparse WordFrequency;
  bagOfFeatures *BagOfFeatures;
  array<uint32_T, 2U> ImageID;
  real_T MatchThreshold;
  real_T WordFrequencyRange[2];

protected:
  sparse WordHistograms;
  array<real_T, 2U> InverseDocumentFrequency;
  sparse NumImagesPerWord;
  array<real_T, 1U> WordsPerImage;
};

} // namespace coder

// End of code generation (invertedImageIndex.h)
