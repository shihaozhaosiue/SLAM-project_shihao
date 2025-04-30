//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// bagOfFeatures.cpp
//
// Code generation for function 'bagOfFeatures'
//

// Include files
#include "bagOfFeatures.h"
#include "EncoderBinaryFeatures.h"
#include "EncoderVocabularyTree.h"
#include "ORBPoints.h"
#include "binaryFeatures.h"
#include "detectORBFeatures.h"
#include "eml_int_forloop_overflow_check.h"
#include "extractFeatures.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "helperVisualSLAMCodegen_types.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "sparse1.h"
#include "string1.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo rkb_emlrtRSI{
    245,                     // lineNo
    "bagOfFeatures/loadobj", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pathName
};

static emlrtRSInfo xuc_emlrtRSI{
    984,                              // lineNo
    "bagOfFeatures/getExtractorFunc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pathName
};

static emlrtRSInfo yuc_emlrtRSI{
    16,                                      // lineNo
    "anonymous_function/anonymous_function", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\anonymous_"
    "function.m" // pathName
};

static emlrtRSInfo avc_emlrtRSI{
    11,                                // lineNo
    "function_handle/function_handle", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\function_"
    "handle.m" // pathName
};

static emlrtRSInfo tvc_emlrtRSI{
    132,                    // lineNo
    "bagOfFeatures/encode", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pathName
};

static emlrtRSInfo uvc_emlrtRSI{
    140,                    // lineNo
    "bagOfFeatures/encode", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pathName
};

static emlrtRSInfo vvc_emlrtRSI{
    966,                               // lineNo
    "bagOfFeatures/encodeSingleImage", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pathName
};

static emlrtRSInfo wvc_emlrtRSI{
    971,                               // lineNo
    "bagOfFeatures/encodeSingleImage", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pathName
};

static emlrtRSInfo xvc_emlrtRSI{
    972,                               // lineNo
    "bagOfFeatures/encodeSingleImage", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pathName
};

static emlrtRSInfo yvc_emlrtRSI{
    975,                               // lineNo
    "bagOfFeatures/encodeSingleImage", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pathName
};

static emlrtRSInfo awc_emlrtRSI{
    984, // lineNo
    "@(img)this.invokeAndExtractUnderlyingBinaryFeatures(img,this."
    "CustomExtractor)", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pathName
};

static emlrtRSInfo bwc_emlrtRSI{
    656,                                                      // lineNo
    "bagOfFeatures/invokeAndExtractUnderlyingBinaryFeatures", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pathName
};

static emlrtRSInfo cwc_emlrtRSI{
    624,                                   // lineNo
    "bagOfFeatures/invokeCustomExtractor", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pathName
};

static emlrtRSInfo dwc_emlrtRSI{
    626,                                   // lineNo
    "bagOfFeatures/invokeCustomExtractor", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pathName
};

static emlrtRSInfo ewc_emlrtRSI{
    15,                                  // lineNo
    "helperORBFeatureExtractorFunction", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperORBFeatureExtractorFunction.m" // pathName
};

static emlrtRSInfo fwc_emlrtRSI{
    18,                                  // lineNo
    "helperORBFeatureExtractorFunction", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperORBFeatureExtractorFunction.m" // pathName
};

static emlrtRSInfo gwc_emlrtRSI{
    21,                                  // lineNo
    "helperORBFeatureExtractorFunction", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperORBFeatureExtractorFunction.m" // pathName
};

static emlrtRSInfo hwc_emlrtRSI{
    24,                                  // lineNo
    "helperORBFeatureExtractorFunction", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperORBFeatureExtractorFunction.m" // pathName
};

static emlrtRSInfo iwc_emlrtRSI{
    9,     // lineNo
    "var", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\var.m" // pathName
};

static emlrtRSInfo jwc_emlrtRSI{
    116,      // lineNo
    "varstd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\varstd"
    ".m" // pathName
};

static emlrtRSInfo kwc_emlrtRSI{
    119, // lineNo
    "@(x,y,varargin)vision.internal.bof.bagOfFeaturesValidation."
    "checkCustomExtractorOutput(fcn,x,y,varargin{:})", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bof\\bagOfFeaturesValidation.m" // pathName
};

static emlrtRSInfo lwc_emlrtRSI{
    154,                                                  // lineNo
    "bagOfFeaturesValidation/checkCustomExtractorOutput", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bof\\bagOfFeaturesValidation.m" // pathName
};

static emlrtRTEInfo bf_emlrtRTEI{
    630,                                   // lineNo
    13,                                    // colNo
    "bagOfFeatures/invokeCustomExtractor", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pName
};

static emlrtRTEInfo cf_emlrtRTEI{
    173,                                                   // lineNo
    13,                                                    // colNo
    "bagOfFeaturesValidation/checkCustomExtractorMetrics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bof\\bagOfFeaturesValidation.m" // pName
};

static emlrtRTEInfo gw_emlrtRTEI{
    200,                     // lineNo
    13,                      // colNo
    "EncoderVocabularyTree", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

static emlrtRTEInfo onb_emlrtRTEI{
    24,                                  // lineNo
    1,                                   // colNo
    "helperORBFeatureExtractorFunction", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperORBFeatureExtractorFunction.m" // pName
};

static emlrtRTEInfo pnb_emlrtRTEI{
    975,             // lineNo
    40,              // colNo
    "bagOfFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\bagOfFeatures.m" // pName
};

// Function Definitions
namespace coder {
void bagOfFeatures::encode(c_helperVisualSLAMCodegenStackD *SD,
                           const emlrtStack &sp, const uint8_T in[307200],
                           c_sparse &featureVector)
{
  static const char_T t41_Value[4]{'n', 'o', 'n', 'e'};
  ORBPoints valid_points;
  b_ORBPoints b_points;
  b_ORBPoints points;
  binaryFeatures features;
  vision::internal::bof::EncoderVocabularyTree *obj;
  array<real_T, 2U> b_fVector;
  array<real32_T, 2U> fVector;
  array<real32_T, 1U> initialFeatureMetrics;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack k_st;
  emlrtStack l_st;
  emlrtStack st;
  int32_T loop_ub;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  k_st.prev = &j_st;
  k_st.tls = j_st.tls;
  l_st.prev = &k_st;
  l_st.tls = k_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &tvc_emlrtRSI;
  obj = Encoder;
  b_st.site = &tvc_emlrtRSI;
  obj->Normalization.init(b_st, t41_Value);
  st.site = &uvc_emlrtRSI;
  b_st.site = &vvc_emlrtRSI;
  c_st.site = &xuc_emlrtRSI;
  d_st.site = &yuc_emlrtRSI;
  e_st.site = &avc_emlrtRSI;
  e_st.site = &avc_emlrtRSI;
  b_st.site = &wvc_emlrtRSI;
  c_st.site = &ecb_emlrtRSI;
  d_st.site = &awc_emlrtRSI;
  e_st.site = &bwc_emlrtRSI;
  f_st.site = &cwc_emlrtRSI;
  //  helperORBFeatureExtractorFunction Implements the ORB feature extraction
  //  used in bagOfFeatures.
  //
  //    This is an example helper function that is subject to change or removal
  //    in future releases.
  //    Copyright 2021 The MathWorks, Inc.
  //  Detect ORB features
  g_st.site = &ewc_emlrtRSI;
  b_detectORBFeatures(SD, g_st, in, points);
  //  Select a subset of features, uniformly distributed throughout the image
  g_st.site = &fwc_emlrtRSI;
  points.selectUniform(g_st, b_points);
  //  Extract features
  g_st.site = &gwc_emlrtRSI;
  h_st.site = &sf_emlrtRSI;
  parseInputs(h_st, b_points);
  h_st.site = &tf_emlrtRSI;
  b_extractORBFeatures(SD, h_st, in, b_points, features, valid_points);
  //  Compute the Feature Metric. Use the variance of features as the metric
  g_st.site = &hwc_emlrtRSI;
  h_st.site = &iwc_emlrtRSI;
  i_st.site = &jwc_emlrtRSI;
  loop_ub = features.Features.size(0);
  initialFeatureMetrics.set_size(&onb_emlrtRTEI, &i_st,
                                 features.Features.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    initialFeatureMetrics[i] = 0.0F;
  }
  j_st.site = &aab_emlrtRSI;
  k_st.site = &bab_emlrtRSI;
  if (features.Features.size(0) > 2147483646) {
    l_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(l_st);
  }
  f_st.site = &dwc_emlrtRSI;
  g_st.site = &ecb_emlrtRSI;
  h_st.site = &kwc_emlrtRSI;
  i_st.site = &lwc_emlrtRSI;
  if (features.NumFeatures != initialFeatureMetrics.size(0)) {
    emlrtErrorWithMessageIdR2018a(
        &i_st, &cf_emlrtRTEI,
        "vision:bagOfFeatures:customNumFeaturesNotEqNumMetrics",
        "vision:bagOfFeatures:customNumFeaturesNotEqNumMetrics", 0);
  }
  if (CustomFeatureLength != 256.0) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &bf_emlrtRTEI, "vision:bagOfFeatures:customInvalidFeatureLength",
        "vision:bagOfFeatures:customInvalidFeatureLength", 4, 6,
        CustomFeatureLength, 6, 256.0);
  }
  b_st.site = &xvc_emlrtRSI;
  Encoder->encode(b_st, features.Features, fVector);
  loop_ub = fVector.size(1);
  b_fVector.set_size(&pnb_emlrtRTEI, &st, 1, fVector.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_fVector[i] = fVector[i];
  }
  b_st.site = &yvc_emlrtRSI;
  h_sparse(b_st, b_fVector, featureVector);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

bagOfFeatures *bagOfFeatures::loadobj(
    const emlrtStack &sp, const rtString &structBag_Encoder_Normalization,
    const real_T c_structBag_Encoder_VocabularyS[111],
    const cell_wrap_16 c_structBag_Encoder_Vocabulary_[],
    vision::internal::bof::EncoderBinaryFeatures &iobj_0,
    vision::internal::bof::EncoderVocabularyTree &iobj_1, bagOfFeatures &iobj_2)
{
  bagOfFeatures *this_;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  this_ = &iobj_2;
  st.site = &rkb_emlrtRSI;
  iobj_1.Normalization = structBag_Encoder_Normalization;
  iobj_1.VocabularySize = 1000.0;
  iobj_1.BranchingFactor = 10.0;
  iobj_1.NumLevels = 3.0;
  for (int32_T i{0}; i < 111; i++) {
    iobj_1.VocabularySizes[i] = c_structBag_Encoder_VocabularyS[i];
  }
  iobj_1.Vocabulary.set_size(&gw_emlrtRTEI, &st, 111);
  for (int32_T i{0}; i < 111; i++) {
    iobj_1.Vocabulary[i] = c_structBag_Encoder_Vocabulary_[i];
  }
  iobj_1.Encoder = &iobj_0;
  iobj_2.Encoder = &iobj_1;
  iobj_2.NumVisualWords = 1000.0;
  iobj_2.CustomFeatureLength = 256.0;
  return this_;
}

} // namespace coder

// End of code generation (bagOfFeatures.cpp)
