//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// evaluateImageRetrieval.cpp
//
// Code generation for function 'evaluateImageRetrieval'
//

// Include files
#include "evaluateImageRetrieval.h"
#include "averagePrecision.h"
#include "bagOfFeatures.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_types.h"
#include "indexShapeCheck.h"
#include "invertedImageIndex.h"
#include "ismember.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sparse1.h"
#include "sum.h"
#include "useConstantDim.h"
#include "visualWords.h"
#include "warning.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <algorithm>

// Variable Definitions
static emlrtRSInfo
    lbd_emlrtRSI{
        11,                       // lineNo
        "evaluateImageRetrieval", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\evaluateImageRetrieval"
        ".m" // pathName
    };

static emlrtRSInfo
    mbd_emlrtRSI{
        16,                       // lineNo
        "evaluateImageRetrieval", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\evaluateImageRetrieval"
        ".m" // pathName
    };

static emlrtRSInfo
    nbd_emlrtRSI{
        21,                       // lineNo
        "evaluateImageRetrieval", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\evaluateImageRetrieval"
        ".m" // pathName
    };

static emlrtRSInfo
    obd_emlrtRSI{
        37,            // lineNo
        "parseInputs", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\evaluateImageRetrieval"
        ".m" // pathName
    };

static emlrtRSInfo pbd_emlrtRSI{
    24,                 // lineNo
    "averagePrecision", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\averagePrecision.m" // pathName
};

static emlrtRSInfo qbd_emlrtRSI{
    29,                 // lineNo
    "averagePrecision", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\averagePrecision.m" // pathName
};

static emlrtRSInfo rbd_emlrtRSI{
    32,                 // lineNo
    "averagePrecision", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\averagePrecision.m" // pathName
};

static emlrtRSInfo sbd_emlrtRSI{
    34,                 // lineNo
    "averagePrecision", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\averagePrecision.m" // pathName
};

static emlrtRSInfo tbd_emlrtRSI{
    12,       // lineNo
    "cumsum", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m" // pathName
};

static emlrtECInfo ud_emlrtECI{
    1,                  // nDims
    32,                 // lineNo
    13,                 // colNo
    "averagePrecision", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\averagePrecision.m" // pName
};

static emlrtRTEInfo uob_emlrtRTEI{
    16,      // lineNo
    5,       // colNo
    "cumop", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop."
    "m" // pName
};

// Function Definitions
namespace coder {
real_T evaluateImageRetrieval(
    c_helperVisualSLAMCodegenStackD *SD, const emlrtStack &sp,
    const uint8_T queryImage[307200], invertedImageIndex &imageIndex,
    const array<uint32_T, 1U> &expectedIDs, uint32_T actualIDs_data[],
    int32_T &actualIDs_size, real_T scores_data[], int32_T &scores_size)
{
  c_sparse queryHist;
  vision::internal::visualWords mjd_emlrtRSI;
  array<real_T, 1U> b_precision_data;
  array<real_T, 1U> imageIdx;
  array<real_T, 1U> scores;
  array<real_T, 1U> words;
  array<int32_T, 1U> iidx;
  array<uint32_T, 2U> y;
  array<uint32_T, 1U> b_imageIDs_data;
  array<boolean_T, 1U> tf;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T precision_data[10];
  real_T avgPrecision;
  int32_T b_iv[2];
  int32_T i;
  int32_T k;
  int32_T loop_ub;
  int32_T precision_size;
  uint32_T imageIDs_data[10];
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &lbd_emlrtRSI;
  b_st.site = &obd_emlrtRSI;
  c_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= expectedIDs.size(0) - 1)) {
    if (expectedIDs[k] > 0U) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:evaluateImageRetrieval:expectedPositive", 3, 4, 11,
        "expectedIDs");
  }
  st.site = &mbd_emlrtRSI;
  b_st.site = &jvc_emlrtRSI;
  c_st.site = &kvc_emlrtRSI;
  imageIndex.BagOfFeatures->encode(SD, c_st, queryImage, queryHist);
  c_st.site = &lvc_emlrtRSI;
  invertedImageIndex::makeEmptyVisualWords(c_st, mjd_emlrtRSI);
  c_st.site = &mvc_emlrtRSI;
  k = imageIndex.ImageID.size(0) * imageIndex.ImageID.size(1);
  if (k == 0) {
    c_st.site = &nvc_emlrtRSI;
    internal::f_warning(c_st);
    actualIDs_size = 0;
    scores.set_size(&lnb_emlrtRTEI, &b_st, 0);
  } else {
    c_st.site = &ovc_emlrtRSI;
    imageIndex.removeStopWords(c_st, queryHist, imageIndex.WordFrequencyRange,
                               words);
    c_st.site = &pvc_emlrtRSI;
    imageIndex.findImagesContainingWords(c_st, words, imageIdx);
    c_st.site = &qvc_emlrtRSI;
    imageIndex.removeImagesWithLowWordMatches(c_st, imageIdx, words,
                                              imageIndex.MatchThreshold);
    c_st.site = &rvc_emlrtRSI;
    imageIndex.computeMatchMetric(c_st, imageIdx, words, queryHist, scores);
    c_st.site = &svc_emlrtRSI;
    actualIDs_size = static_cast<int32_T>(
        muDoubleScalarMin(static_cast<real_T>(imageIdx.size(0)), 10.0));
    d_st.site = &gbd_emlrtRSI;
    e_st.site = &li_emlrtRSI;
    internal::b_sort(e_st, scores, iidx);
    loop_ub = iidx.size(0);
    words.set_size(&jnb_emlrtRTEI, &d_st, iidx.size(0));
    for (i = 0; i < loop_ub; i++) {
      words[i] = iidx[i];
    }
    d_st.site = &hbd_emlrtRSI;
    for (k = 0; k < actualIDs_size; k++) {
      if (k + 1 > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, loop_ub, &nu_emlrtBCI, &c_st);
      }
      i = static_cast<int32_T>(words[k]);
      if ((i < 1) || (i > imageIdx.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, imageIdx.size(0), &mu_emlrtBCI,
                                      &c_st);
      }
      if (k + 1 > actualIDs_size) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, actualIDs_size, &ou_emlrtBCI,
                                      &c_st);
      }
      precision_data[k] = imageIdx[i - 1];
      if (k + 1 > scores.size(0)) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, scores.size(0), &pu_emlrtBCI,
                                      &c_st);
      }
      if (k + 1 > actualIDs_size) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, actualIDs_size, &qu_emlrtBCI,
                                      &c_st);
      }
      scores_data[k] = scores[k];
    }
    scores.set_size(&knb_emlrtRTEI, &b_st, actualIDs_size);
    for (i = 0; i < actualIDs_size; i++) {
      scores[i] = scores_data[i];
    }
    i = imageIndex.ImageID.size(0);
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &ku_emlrtBCI, &b_st);
    }
    k = imageIndex.ImageID.size(1);
    for (i = 0; i < actualIDs_size; i++) {
      precision_size = static_cast<int32_T>(precision_data[i]);
      if ((precision_size < 1) || (precision_size > k)) {
        emlrtDynamicBoundsCheckR2012b(precision_size, 1, k, &ru_emlrtBCI,
                                      &b_st);
      }
      imageIDs_data[i] =
          imageIndex.ImageID[imageIndex.ImageID.size(0) * (precision_size - 1)];
    }
  }
  loop_ub = scores.size(0);
  scores_size = scores.size(0);
  for (i = 0; i < loop_ub; i++) {
    scores_data[i] = scores[i];
  }
  if (actualIDs_size - 1 >= 0) {
    std::copy(&imageIDs_data[0], &imageIDs_data[actualIDs_size],
              &actualIDs_data[0]);
  }
  st.site = &nbd_emlrtRSI;
  if (actualIDs_size < 1) {
    k = 0;
  } else {
    k = actualIDs_size;
  }
  b_iv[0] = 1;
  b_iv[1] = k;
  b_st.site = &pbd_emlrtRSI;
  internal::indexShapeCheck(b_st, actualIDs_size, b_iv);
  b_st.site = &qbd_emlrtRSI;
  b_imageIDs_data.set(&imageIDs_data[0], k);
  c_st.site = &bdb_emlrtRSI;
  b_isMember(c_st, b_imageIDs_data, expectedIDs, tf);
  b_st.site = &rbd_emlrtRSI;
  loop_ub = tf.size(0);
  precision_size = tf.size(0);
  for (i = 0; i < loop_ub; i++) {
    precision_data[i] = tf[i];
  }
  c_st.site = &tbd_emlrtRSI;
  k = 2;
  if (precision_size != 1) {
    k = 1;
  }
  words.set_size(&uob_emlrtRTEI, &c_st, tf.size(0));
  for (i = 0; i < loop_ub; i++) {
    words[i] = precision_data[i];
  }
  d_st.site = &wkc_emlrtRSI;
  internal::useConstantDim(words, k);
  loop_ub = words.size(0);
  if ((words.size(0) != tf.size(0)) &&
      ((words.size(0) != 1) && (tf.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(words.size(0), tf.size(0), &ud_emlrtECI, &st);
  }
  if (words.size(0) == tf.size(0)) {
    precision_size = words.size(0);
    for (i = 0; i < loop_ub; i++) {
      precision_data[i] = words[i] * static_cast<real_T>(tf[i]);
    }
  } else {
    precision_size = binary_expand_op_46(precision_data, words, tf);
  }
  if (tf.size(0) < 1) {
    k = 0;
    y.set_size(&wm_emlrtRTEI, &st, 1, 0);
  } else {
    k = tf.size(0);
    y.set_size(&wm_emlrtRTEI, &st, 1, tf.size(0));
    loop_ub = tf.size(0) - 1;
    for (i = 0; i <= loop_ub; i++) {
      y[i] = static_cast<uint32_T>(i) + 1U;
    }
  }
  b_st.site = &sbd_emlrtRSI;
  for (i = 0; i < k; i++) {
    imageIDs_data[i] = y[i];
  }
  c_st.site = &lf_emlrtRSI;
  d_st.site = &mf_emlrtRSI;
  if ((precision_size != 1) && (k != 1) && (precision_size != k)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &hb_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  if (precision_size == k) {
    for (i = 0; i < precision_size; i++) {
      precision_data[i] /= static_cast<real_T>(imageIDs_data[i]);
    }
    b_precision_data.set(&precision_data[0], precision_size);
    b_st.site = &sbd_emlrtRSI;
    avgPrecision =
        sum(b_st, b_precision_data) /
        muDoubleScalarMin(10.0, static_cast<real_T>(expectedIDs.size(0)));
  } else {
    b_st.site = &sbd_emlrtRSI;
    avgPrecision =
        binary_expand_op_45(b_st, sbd_emlrtRSI, precision_data, precision_size,
                            imageIDs_data, k, expectedIDs);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return avgPrecision;
}

} // namespace coder

// End of code generation (evaluateImageRetrieval.cpp)
