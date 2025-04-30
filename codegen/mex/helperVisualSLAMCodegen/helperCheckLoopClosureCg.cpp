//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperCheckLoopClosureCg.cpp
//
// Code generation for function 'helperCheckLoopClosureCg'
//

// Include files
#include "helperCheckLoopClosureCg.h"
#include "ORBPoints.h"
#include "bagOfFeatures.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_setop.h"
#include "evaluateImageRetrieval.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "helperVisualSLAMCodegen_types.h"
#include "imageviewset.h"
#include "invertedImageIndex.h"
#include "nchoosek.h"
#include "rigidtform3d.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sparse1.h"
#include "visualWords.h"
#include "warning.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo bvc_emlrtRSI{
    13,                         // lineNo
    "helperCheckLoopClosureCg", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCheckLoopClosureCg.m" // pathName
};

static emlrtRSInfo cvc_emlrtRSI{
    19,                         // lineNo
    "helperCheckLoopClosureCg", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCheckLoopClosureCg.m" // pathName
};

static emlrtRSInfo dvc_emlrtRSI{
    21,                         // lineNo
    "helperCheckLoopClosureCg", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCheckLoopClosureCg.m" // pathName
};

static emlrtRSInfo evc_emlrtRSI{
    25,                         // lineNo
    "helperCheckLoopClosureCg", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCheckLoopClosureCg.m" // pathName
};

static emlrtRSInfo fvc_emlrtRSI{
    26,                         // lineNo
    "helperCheckLoopClosureCg", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCheckLoopClosureCg.m" // pathName
};

static emlrtRSInfo gvc_emlrtRSI{
    28,                         // lineNo
    "helperCheckLoopClosureCg", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCheckLoopClosureCg.m" // pathName
};

static emlrtRSInfo hvc_emlrtRSI{
    47,                         // lineNo
    "helperCheckLoopClosureCg", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCheckLoopClosureCg.m" // pathName
};

static emlrtRSInfo ivc_emlrtRSI{
    48,                         // lineNo
    "helperCheckLoopClosureCg", // fcnName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCheckLoopClosureCg.m" // pathName
};

static emlrtRSInfo ubd_emlrtRSI{
    16,        // lineNo
    "setdiff", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\setdiff.m" // pathName
};

static emlrtRSInfo dcd_emlrtRSI{
    383,                     // lineNo
    "unaryMinOrMaxDispatch", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRSInfo ecd_emlrtRSI{
    457,          // lineNo
    "minOrMax2D", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtBCInfo lu_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    39,                         // lineNo
    39,                         // colNo
    "loopKeyFrameIds",          // aName
    "helperCheckLoopClosureCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCheckLoopClosureCg.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo su_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    31,                         // lineNo
    37,                         // colNo
    "similarityscores",         // aName
    "helperCheckLoopClosureCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCheckLoopClosureCg.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo tu_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    48,                         // lineNo
    32,                         // colNo
    "groups",                   // aName
    "helperCheckLoopClosureCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCheckLoopClosureCg.m", // pName
    0                                             // checkKind
};

static emlrtRTEInfo mnb_emlrtRTEI{
    48,                         // lineNo
    32,                         // colNo
    "helperCheckLoopClosureCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCheckLoopClosureCg.m" // pName
};

static emlrtRTEInfo nnb_emlrtRTEI{
    1,                          // lineNo
    42,                         // colNo
    "helperCheckLoopClosureCg", // fName
    "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM "
    "project_shihao\\helperCheckLoopClosureCg.m" // pName
};

// Function Declarations
static void binary_expand_op_44(const emlrtStack &sp,
                                coder::array<boolean_T, 1U> &in1,
                                const coder::array<uint32_T, 1U> &in2,
                                const coder::array<uint32_T, 1U> &in3);

// Function Definitions
static void binary_expand_op_44(const emlrtStack &sp,
                                coder::array<boolean_T, 1U> &in1,
                                const coder::array<uint32_T, 1U> &in2,
                                const coder::array<uint32_T, 1U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&mnb_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    uint32_T q0;
    uint32_T qY;
    q0 = in2[i * stride_0_0];
    qY = q0 - in3[i * stride_1_0];
    if (qY > q0) {
      qY = 0U;
    }
    in1[i] = (qY < 4U);
  }
}

boolean_T helperCheckLoopClosureCg(
    c_helperVisualSLAMCodegenStackD *SD, const emlrtStack &sp,
    const coder::imageviewset &vSetKeyFrames, real_T currKeyframeId,
    coder::invertedImageIndex &imageDatabase, const uint8_T currImg[307200],
    uint32_T loopKeyFrameIds_data[], int32_T loopKeyFrameIds_size[2])
{
  coder::b_rigidtform3d expl_temp;
  coder::c_sparse queryHist;
  coder::vision::internal::visualWords mjd_emlrtRSI;
  coder::array<coder::b_ORBPoints, 2U> c_expl_temp;
  coder::array<cell_wrap_8, 2U> b_expl_temp;
  coder::array<real_T, 1U> imageIdx;
  coder::array<real_T, 1U> scores;
  coder::array<real_T, 1U> words;
  coder::array<int32_T, 1U> iidx;
  coder::array<int32_T, 1U> r1;
  coder::array<uint32_T, 2U> groups;
  coder::array<uint32_T, 1U> b_candidateViewIds_data;
  coder::array<uint32_T, 1U> c;
  coder::array<uint32_T, 1U> covisViews_ViewId;
  coder::array<uint32_T, 1U> strongCovisViews_ViewId;
  coder::array<boolean_T, 1U> b_r;
  coder::array<boolean_T, 1U> connIdx;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  real_T imageIdx_data[20];
  real_T b_scores_data[10];
  real_T a__1;
  real_T minScore;
  int32_T K;
  int32_T i;
  int32_T idx;
  int32_T loop_ub;
  int32_T scores_size;
  uint32_T candidateViewIds_data[20];
  uint32_T a__2_data[10];
  boolean_T isDetected;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  // helperCheckLoopClosure detect loop candidates key frames by retrieving
  //    visually similar images from the feature database.
  //
  //    This is an example helper function that is subject to change or removal
  //    in future releases.
  //    Copyright 2019-2023 The MathWorks, Inc.
  //  Retrieve all the visually similar key frames
  st.site = &bvc_emlrtRSI;
  b_st.site = &jvc_emlrtRSI;
  c_st.site = &kvc_emlrtRSI;
  imageDatabase.BagOfFeatures->encode(SD, c_st, currImg, queryHist);
  c_st.site = &lvc_emlrtRSI;
  coder::invertedImageIndex::makeEmptyVisualWords(c_st, mjd_emlrtRSI);
  c_st.site = &mvc_emlrtRSI;
  idx = imageDatabase.ImageID.size(0) * imageDatabase.ImageID.size(1);
  if (idx == 0) {
    c_st.site = &nvc_emlrtRSI;
    coder::internal::f_warning(c_st);
    K = 0;
    scores.set_size(&lnb_emlrtRTEI, &b_st, 0);
  } else {
    real_T scores_data[20];
    c_st.site = &ovc_emlrtRSI;
    imageDatabase.removeStopWords(c_st, queryHist,
                                  imageDatabase.WordFrequencyRange, words);
    c_st.site = &pvc_emlrtRSI;
    imageDatabase.findImagesContainingWords(c_st, words, imageIdx);
    c_st.site = &qvc_emlrtRSI;
    imageDatabase.removeImagesWithLowWordMatches(c_st, imageIdx, words,
                                                 imageDatabase.MatchThreshold);
    c_st.site = &rvc_emlrtRSI;
    imageDatabase.computeMatchMetric(c_st, imageIdx, words, queryHist, scores);
    c_st.site = &svc_emlrtRSI;
    K = static_cast<int32_T>(
        muDoubleScalarMin(static_cast<real_T>(imageIdx.size(0)), 20.0));
    d_st.site = &gbd_emlrtRSI;
    e_st.site = &li_emlrtRSI;
    coder::internal::b_sort(e_st, scores, iidx);
    loop_ub = iidx.size(0);
    words.set_size(&jnb_emlrtRTEI, &d_st, iidx.size(0));
    for (i = 0; i < loop_ub; i++) {
      words[i] = iidx[i];
    }
    d_st.site = &hbd_emlrtRSI;
    for (int32_T b_i{0}; b_i < K; b_i++) {
      if (b_i + 1 > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub, &nu_emlrtBCI, &c_st);
      }
      i = static_cast<int32_T>(words[b_i]);
      if ((i < 1) || (i > imageIdx.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, imageIdx.size(0), &mu_emlrtBCI,
                                      &c_st);
      }
      if (b_i + 1 > K) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, K, &ou_emlrtBCI, &c_st);
      }
      imageIdx_data[b_i] = imageIdx[i - 1];
      if (b_i + 1 > scores.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, scores.size(0), &pu_emlrtBCI,
                                      &c_st);
      }
      if (b_i + 1 > K) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, K, &qu_emlrtBCI, &c_st);
      }
      scores_data[b_i] = scores[b_i];
    }
    scores.set_size(&knb_emlrtRTEI, &b_st, K);
    for (i = 0; i < K; i++) {
      scores[i] = scores_data[i];
    }
    i = imageDatabase.ImageID.size(0);
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &ku_emlrtBCI, &b_st);
    }
    idx = imageDatabase.ImageID.size(1);
    for (i = 0; i < K; i++) {
      scores_size = static_cast<int32_T>(imageIdx_data[i]);
      if ((scores_size < 1) || (scores_size > idx)) {
        emlrtDynamicBoundsCheckR2012b(scores_size, 1, idx, &ru_emlrtBCI, &b_st);
      }
      candidateViewIds_data[i] =
          imageDatabase
              .ImageID[imageDatabase.ImageID.size(0) * (scores_size - 1)];
    }
  }
  //  Compute similarity between the current key frame and its
  //  strongly-connected key frames. The minimum similarity score is used as a
  //  baseline to find loop candidate key frames, which are visually similar to
  //  but not connected to the current key frame
  st.site = &cvc_emlrtRSI;
  b_st.site = &nrc_emlrtRSI;
  vSetKeyFrames.b_connectedViews(b_st, currKeyframeId, covisViews_ViewId,
                                 expl_temp, b_expl_temp, c_expl_temp, connIdx);
  st.site = &dvc_emlrtRSI;
  vSetKeyFrames.c_connectedViews(st, currKeyframeId, strongCovisViews_ViewId,
                                 expl_temp, b_expl_temp, c_expl_temp);
  //  Retrieve the top 10 similar connected key frames
  st.site = &evc_emlrtRSI;
  coder::evaluateImageRetrieval(SD, st, currImg, imageDatabase,
                                strongCovisViews_ViewId, a__2_data, idx,
                                b_scores_data, scores_size);
  st.site = &fvc_emlrtRSI;
  b_st.site = &vv_emlrtRSI;
  c_st.site = &wv_emlrtRSI;
  d_st.site = &xv_emlrtRSI;
  if (scores_size < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &yv_emlrtRSI;
  f_st.site = &aw_emlrtRSI;
  if (scores_size <= 2) {
    if (scores_size == 1) {
      minScore = b_scores_data[0];
    } else if ((b_scores_data[0] > b_scores_data[1]) ||
               (muDoubleScalarIsNaN(b_scores_data[0]) &&
                (!muDoubleScalarIsNaN(b_scores_data[1])))) {
      minScore = b_scores_data[1];
    } else {
      minScore = b_scores_data[0];
    }
  } else {
    g_st.site = &if_emlrtRSI;
    if (!muDoubleScalarIsNaN(b_scores_data[0])) {
      idx = 1;
    } else {
      boolean_T exitg1;
      idx = 0;
      h_st.site = &jf_emlrtRSI;
      loop_ub = 2;
      exitg1 = false;
      while ((!exitg1) && (loop_ub <= scores_size)) {
        if (!muDoubleScalarIsNaN(b_scores_data[loop_ub - 1])) {
          idx = loop_ub;
          exitg1 = true;
        } else {
          loop_ub++;
        }
      }
    }
    if (idx == 0) {
      minScore = b_scores_data[0];
    } else {
      g_st.site = &hf_emlrtRSI;
      minScore = b_scores_data[idx - 1];
      i = idx + 1;
      h_st.site = &kf_emlrtRSI;
      for (loop_ub = i; loop_ub <= scores_size; loop_ub++) {
        a__1 = b_scores_data[loop_ub - 1];
        if (minScore > a__1) {
          minScore = a__1;
        }
      }
    }
  }
  st.site = &gvc_emlrtRSI;
  b_st.site = &ubd_emlrtRSI;
  b_candidateViewIds_data.set(&candidateViewIds_data[0], K);
  c_st.site = &efb_emlrtRSI;
  coder::do_vectors(c_st, b_candidateViewIds_data, covisViews_ViewId, c, iidx);
  loop_ub = iidx.size(0);
  idx = iidx.size(0);
  for (i = 0; i < loop_ub; i++) {
    imageIdx_data[i] = iidx[i];
  }
  //  Scores of non-connected key frames
  for (i = 0; i < loop_ub; i++) {
    scores_size = static_cast<int32_T>(imageIdx_data[i]);
    if ((scores_size < 1) || (scores_size > scores.size(0))) {
      emlrtDynamicBoundsCheckR2012b(scores_size, 1, scores.size(0),
                                    &su_emlrtBCI, (emlrtConstCTX)&sp);
    }
  }
  //  Descending
  if (idx != 0) {
    //  Score must be higher than the 75% of the best score
    a__1 = muDoubleScalarMax(
        scores[static_cast<int32_T>(imageIdx_data[0]) - 1] * 0.75, minScore);
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if ((scores[static_cast<int32_T>(imageIdx_data[b_i]) - 1] > a__1) &&
          (b_i > c.size(0) - 1)) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, c.size(0) - 1, &lu_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
    }
    idx = 0;
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (scores[static_cast<int32_T>(imageIdx_data[b_i]) - 1] > a__1) {
        idx++;
      }
    }
    loopKeyFrameIds_size[0] = idx;
    loopKeyFrameIds_size[1] = 1;
    idx = 0;
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (scores[static_cast<int32_T>(imageIdx_data[b_i]) - 1] > a__1) {
        loopKeyFrameIds_data[idx] = c[b_i];
        idx++;
      }
    }
  } else {
    loopKeyFrameIds_size[0] = 0;
    loopKeyFrameIds_size[1] = 0;
  }
  //  Loop candidates need to be consecutively detected
  //  At least 3 candidates are found
  if (loopKeyFrameIds_size[0] >= 3) {
    uint32_T q0;
    st.site = &hvc_emlrtRSI;
    coder::nchoosek(st, loopKeyFrameIds_data, loopKeyFrameIds_size, groups);
    st.site = &ivc_emlrtRSI;
    b_st.site = &mbb_emlrtRSI;
    c_st.site = &nbb_emlrtRSI;
    d_st.site = &obb_emlrtRSI;
    e_st.site = &jfb_emlrtRSI;
    f_st.site = &dcd_emlrtRSI;
    g_st.site = &ecd_emlrtRSI;
    idx = groups.size(0);
    c.set_size(&tm_emlrtRTEI, &g_st, groups.size(0));
    if (groups.size(0) >= 1) {
      h_st.site = &ji_emlrtRSI;
      if (groups.size(0) > 2147483646) {
        i_st.site = &qe_emlrtRSI;
        coder::check_forloop_overflow_error(i_st);
      }
      for (int32_T b_i{0}; b_i < idx; b_i++) {
        c[b_i] = groups[b_i];
      }
      h_st.site = &ii_emlrtRSI;
      for (scores_size = 0; scores_size < 2; scores_size++) {
        h_st.site = &hi_emlrtRSI;
        if (idx > 2147483646) {
          i_st.site = &qe_emlrtRSI;
          coder::check_forloop_overflow_error(i_st);
        }
        for (int32_T b_i{0}; b_i < idx; b_i++) {
          q0 = groups[b_i + groups.size(0) * (scores_size + 1)];
          if (c[b_i] < q0) {
            c[b_i] = q0;
          }
        }
      }
    }
    st.site = &ivc_emlrtRSI;
    b_st.site = &vv_emlrtRSI;
    c_st.site = &wv_emlrtRSI;
    d_st.site = &xv_emlrtRSI;
    e_st.site = &jfb_emlrtRSI;
    f_st.site = &dcd_emlrtRSI;
    g_st.site = &ecd_emlrtRSI;
    strongCovisViews_ViewId.set_size(&tm_emlrtRTEI, &g_st, groups.size(0));
    if (groups.size(0) >= 1) {
      h_st.site = &ji_emlrtRSI;
      for (int32_T b_i{0}; b_i < idx; b_i++) {
        strongCovisViews_ViewId[b_i] = groups[b_i];
      }
      h_st.site = &ii_emlrtRSI;
      for (scores_size = 0; scores_size < 2; scores_size++) {
        h_st.site = &hi_emlrtRSI;
        for (int32_T b_i{0}; b_i < idx; b_i++) {
          q0 = groups[b_i + groups.size(0) * (scores_size + 1)];
          if (strongCovisViews_ViewId[b_i] > q0) {
            strongCovisViews_ViewId[b_i] = q0;
          }
        }
      }
    }
    if (c.size(0) == strongCovisViews_ViewId.size(0)) {
      b_r.set_size(&mnb_emlrtRTEI, &sp, groups.size(0));
      for (i = 0; i < idx; i++) {
        uint32_T qY;
        q0 = c[i];
        qY = q0 - strongCovisViews_ViewId[i];
        if (qY > q0) {
          qY = 0U;
        }
        b_r[i] = (qY < 4U);
      }
    } else {
      st.site = &ivc_emlrtRSI;
      binary_expand_op_44(st, b_r, c, strongCovisViews_ViewId);
    }
    scores_size = b_r.size(0);
    idx = 0;
    for (int32_T b_i{0}; b_i < scores_size; b_i++) {
      if (b_r[b_i]) {
        idx++;
      }
    }
    r1.set_size(&nnb_emlrtRTEI, &sp, idx);
    idx = 0;
    for (int32_T b_i{0}; b_i < scores_size; b_i++) {
      if (b_r[b_i]) {
        r1[idx] = b_i;
        idx++;
      }
    }
    loop_ub = r1.size(0);
    for (i = 0; i < loop_ub; i++) {
      if (r1[i] > groups.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r1[i], 0, groups.size(0) - 1,
                                      &tu_emlrtBCI, (emlrtConstCTX)&sp);
      }
    }
    if (r1.size(0) != 0) {
      //  Consecutive candidates are found
      loopKeyFrameIds_size[0] = 1;
      loopKeyFrameIds_size[1] = 3;
      loopKeyFrameIds_data[0] = groups[r1[0]];
      loopKeyFrameIds_data[1] = groups[r1[0] + groups.size(0)];
      loopKeyFrameIds_data[2] = groups[r1[0] + groups.size(0) * 2];
      isDetected = true;
    } else {
      isDetected = false;
    }
  } else {
    isDetected = false;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return isDetected;
}

// End of code generation (helperCheckLoopClosureCg.cpp)
