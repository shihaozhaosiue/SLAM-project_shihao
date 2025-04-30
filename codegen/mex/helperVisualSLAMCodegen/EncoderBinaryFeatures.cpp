//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// EncoderBinaryFeatures.cpp
//
// Code generation for function 'EncoderBinaryFeatures'
//

// Include files
#include "EncoderBinaryFeatures.h"
#include "colon.h"
#include "cvalgMatchFeatures.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "cvstCG_ComputeMetric.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo cmb_emlrtRSI{
    46,                                        // lineNo
    "EncoderBinaryFeatures/assignVisualWords", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderBinaryFeatures.m" // pathName
};

static emlrtBCInfo mi_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    239,                // lineNo
    31,                 // colNo
    "",                 // aName
    "exhaustiveSearch", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ni_emlrtBCI{
    1,                       // iFirst
    10,                      // iLast
    184,                     // lineNo
    26,                      // colNo
    "",                      // aName
    "findMatchesExhaustive", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

static emlrtRTEInfo gx_emlrtRTEI{
    30,                      // lineNo
    32,                      // colNo
    "EncoderBinaryFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderBinaryFeatures.m" // pName
};

static emlrtRTEInfo hx_emlrtRTEI{
    46,                      // lineNo
    13,                      // colNo
    "EncoderBinaryFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderBinaryFeatures.m" // pName
};

static emlrtRTEInfo ix_emlrtRTEI{
    51,                      // lineNo
    13,                      // colNo
    "EncoderBinaryFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderBinaryFeatures.m" // pName
};

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace bof {
void EncoderBinaryFeatures::assignVisualWords(
    const emlrtStack &sp, const uint8_T vocabularyFeatures[320],
    const array<uint8_T, 2U> &features, array<uint32_T, 1U> &assignments)
{
  array<real_T, 2U> b_numMatches_data;
  array<real_T, 2U> idxFeatures2;
  array<int32_T, 2U> r1;
  array<int32_T, 2U> r2;
  array<real32_T, 2U> b_matchMetric;
  array<real32_T, 2U> b_scores;
  array<real32_T, 2U> matchMetric;
  array<real32_T, 2U> pairMetric;
  array<real32_T, 2U> scores;
  array<uint32_T, 2U> b_assignments;
  array<uint32_T, 2U> b_indexPairs;
  array<uint32_T, 2U> indexPairs;
  array<uint32_T, 2U> relativeIndexPairs;
  array<uint32_T, 2U> varargin_2;
  array<uint8_T, 2U> b_features2;
  array<uint8_T, 2U> features1;
  array<uint8_T, 2U> features1in;
  array<uint8_T, 2U> features2;
  array<uint8_T, 2U> r3;
  array<boolean_T, 2U> b_r;
  bounded_array<cell_wrap_75, 5U, 2U> indexPairsCell;
  bounded_array<cell_wrap_76, 5U, 2U> matchMetricCell;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T numMatches_data[5];
  int32_T b_iv[2];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  uint8_T features2in[320];
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &cmb_emlrtRSI;
  loop_ub = features.size(0);
  features1in.set_size(&bl_emlrtRTEI, &st, 32, features.size(0));
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < 32; i1++) {
      features1in[i1 + 32 * i] = features[i + features.size(0) * i1];
    }
  }
  for (i = 0; i < 10; i++) {
    for (i1 = 0; i1 < 32; i1++) {
      features2in[i1 + (i << 5)] = vocabularyFeatures[i + 10 * i1];
    }
  }
  if (features1in.size(1) == 0) {
    b_assignments.set_size(&hx_emlrtRTEI, &st, 0, 2);
  } else {
    uint64_T u;
    uint32_T N1;
    b_st.site = &fh_emlrtRSI;
    N1 = static_cast<uint32_T>(features1in.size(1));
    u = static_cast<uint64_T>(features1in.size(1)) * 10ULL;
    if (u > 4294967295ULL) {
      u = 4294967295ULL;
    }
    if (static_cast<uint32_T>(u) < 1000000000U) {
      int32_T a;
      int32_T currentIdx;
      int32_T loop_ub_tmp;
      c_st.site = &gh_emlrtRSI;
      d_st.site = &mh_emlrtRSI;
      e_st.site = &rh_emlrtRSI;
      features1.set_size(&sl_emlrtRTEI, &e_st, features.size(0), 32);
      for (i = 0; i < 32; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          features1[i1 + features1.size(0) * i] = features1in[i + 32 * i1];
        }
      }
      f_st.site = &sh_emlrtRSI;
      scores.set_size(&vl_emlrtRTEI, &f_st, features.size(0), 10);
      loop_ub_tmp = features1in.size(1) * 10;
      for (i = 0; i < loop_ub_tmp; i++) {
        scores[i] = 0.0F;
      }
      features2.set_size(&wl_emlrtRTEI, &f_st, 32, features.size(0));
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < 32; i1++) {
          features2[i1 + 32 * i] = features1[i + features1.size(0) * i1];
        }
      }
      ComputeMetric_hamming_single(&features2[0], &features2in[0], &scores[0],
                                   static_cast<uint32_T>(features1.size(0)),
                                   10U, 32U);
      d_st.site = &nh_emlrtRSI;
      matchFeatures::b_findNearestNeighbors(d_st, scores, relativeIndexPairs,
                                            pairMetric);
      d_st.site = &oh_emlrtRSI;
      loop_ub = pairMetric.size(1);
      b_r.set_size(&yl_emlrtRTEI, &d_st, 1, pairMetric.size(1));
      for (i = 0; i < loop_ub; i++) {
        b_r[i] = (pairMetric[i] <= 256.0F);
      }
      a = 0;
      for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
        if (b_r[b_i]) {
          a++;
        }
      }
      r1.set_size(&gx_emlrtRTEI, &d_st, 1, a);
      currentIdx = 0;
      for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
        if (b_r[b_i]) {
          r1[currentIdx] = b_i;
          currentIdx++;
        }
      }
      loop_ub = r1.size(1);
      b_indexPairs.set_size(&bm_emlrtRTEI, &d_st, 2, r1.size(1));
      for (i = 0; i < loop_ub; i++) {
        if (r1[i] > relativeIndexPairs.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(
              r1[i], 0, relativeIndexPairs.size(1) - 1, &pc_emlrtBCI, &d_st);
        }
        b_indexPairs[2 * i] = relativeIndexPairs[2 * r1[i]];
        if (r1[i] > relativeIndexPairs.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(
              r1[i], 0, relativeIndexPairs.size(1) - 1, &pc_emlrtBCI, &d_st);
        }
        b_indexPairs[2 * i + 1] = relativeIndexPairs[2 * r1[i] + 1];
      }
      currentIdx = b_indexPairs.size(1);
      relativeIndexPairs.set_size(&cm_emlrtRTEI, &d_st, 2,
                                  b_indexPairs.size(1));
      loop_ub_tmp = b_indexPairs.size(1) << 1;
      for (i = 0; i < loop_ub_tmp; i++) {
        relativeIndexPairs[i] = b_indexPairs[i];
      }
      for (i = 0; i < loop_ub; i++) {
        if (r1[i] > pairMetric.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(r1[i], 0, pairMetric.size(1) - 1,
                                        &kc_emlrtBCI, &d_st);
        }
      }
      if (relativeIndexPairs.size(1) == 0) {
        indexPairs.set_size(&mm_emlrtRTEI, &c_st, 2, 0);
      } else {
        a = 0;
        for (int32_T b_i{0}; b_i < currentIdx; b_i++) {
          a++;
        }
        r2.set_size(&gx_emlrtRTEI, &c_st, 1, a);
        for (int32_T b_i{0}; b_i < currentIdx; b_i++) {
          r2[b_i] = b_i;
        }
        loop_ub = r2.size(1);
        indexPairs.set_size(&km_emlrtRTEI, &c_st, 2, r2.size(1));
        for (i = 0; i < loop_ub; i++) {
          if (r2[i] > relativeIndexPairs.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(
                r2[i], 0, relativeIndexPairs.size(1) - 1, &nc_emlrtBCI, &c_st);
          }
          indexPairs[2 * i] = relativeIndexPairs[2 * r2[i]];
          if (r2[i] > relativeIndexPairs.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(
                r2[i], 0, relativeIndexPairs.size(1) - 1, &nc_emlrtBCI, &c_st);
          }
          indexPairs[2 * i + 1] = relativeIndexPairs[2 * r2[i] + 1];
        }
        for (i = 0; i < loop_ub; i++) {
          if (r2[i] > r1.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(r2[i], 0, r1.size(1) - 1,
                                          &mc_emlrtBCI, &c_st);
          }
        }
      }
    } else {
      real_T totalMatches;
      int32_T a;
      int32_T c_i;
      int32_T currentIdx;
      int32_T loop_ub_tmp;
      int32_T numFeatures2;
      int32_T numIterations;
      int8_T unnamed_idx_1;
      numIterations = static_cast<int32_T>(
          muDoubleScalarCeil(static_cast<real_T>(u) / 1.0E+9));
      numFeatures2 = static_cast<int32_T>(
          muDoubleScalarFloor(10.0 / static_cast<real_T>(numIterations)));
      unnamed_idx_1 = static_cast<int8_T>(numIterations);
      indexPairsCell.size[0] = 1;
      indexPairsCell.size[1] = numIterations;
      for (i = 0; i < unnamed_idx_1; i++) {
        if (i > indexPairsCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, indexPairsCell.size[1] - 1,
                                        &dc_emlrtBCI, &b_st);
        }
        indexPairsCell.data[indexPairsCell.size[0] * i].f1.set_size(
            &el_emlrtRTEI, &b_st, 2,
            indexPairsCell.data[indexPairsCell.size[0] * i].f1.size(1));
        if (i > indexPairsCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, indexPairsCell.size[1] - 1,
                                        &dc_emlrtBCI, &b_st);
        }
        indexPairsCell.data[indexPairsCell.size[0] * i].f1.set_size(
            &el_emlrtRTEI, &b_st,
            indexPairsCell.data[indexPairsCell.size[0] * i].f1.size(0), 0);
      }
      matchMetricCell.size[0] = 1;
      matchMetricCell.size[1] = numIterations;
      for (i = 0; i < unnamed_idx_1; i++) {
        if (i > matchMetricCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, matchMetricCell.size[1] - 1,
                                        &dc_emlrtBCI, &b_st);
        }
        matchMetricCell.data[matchMetricCell.size[0] * i].f1.set_size(
            &el_emlrtRTEI, &b_st, 1,
            matchMetricCell.data[matchMetricCell.size[0] * i].f1.size(1));
        if (i > matchMetricCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, matchMetricCell.size[1] - 1,
                                        &dc_emlrtBCI, &b_st);
        }
        matchMetricCell.data[matchMetricCell.size[0] * i].f1.set_size(
            &el_emlrtRTEI, &b_st,
            matchMetricCell.data[matchMetricCell.size[0] * i].f1.size(0), 0);
      }
      idxFeatures2.set_size(&fl_emlrtRTEI, &b_st, 1, 1);
      idxFeatures2[0] = 0.0;
      matchMetricCell.size[0] = 1;
      matchMetricCell.size[1] = numIterations;
      indexPairsCell.size[0] = 1;
      indexPairsCell.size[1] = numIterations;
      for (int32_T b_i{0}; b_i < numIterations; b_i++) {
        int32_T b_loop_ub;
        boolean_T b;
        if (b_i + 1 < numIterations) {
          c_st.site = &hh_emlrtRSI;
          a = b_i * numFeatures2 + 1;
          currentIdx = (b_i + 1) * numFeatures2;
          d_st.site = &pj_emlrtRSI;
          if (currentIdx < a) {
            idxFeatures2.set_size(&hl_emlrtRTEI, &d_st, 1, 0);
          } else {
            b_loop_ub =
                static_cast<int8_T>(currentIdx) - static_cast<int8_T>(a);
            idxFeatures2.set_size(&hl_emlrtRTEI, &d_st, 1, b_loop_ub + 1);
            for (i = 0; i <= b_loop_ub; i++) {
              idxFeatures2[i] = static_cast<int8_T>(static_cast<int8_T>(a) +
                                                    static_cast<int8_T>(i));
            }
          }
        } else {
          c_st.site = &ih_emlrtRSI;
          if (idxFeatures2.size(1) < 1) {
            emlrtDynamicBoundsCheckR2012b(idxFeatures2.size(1), 1,
                                          idxFeatures2.size(1), &cc_emlrtBCI,
                                          &c_st);
          }
          d_st.site = &pj_emlrtRSI;
          totalMatches = idxFeatures2[idxFeatures2.size(1) - 1];
          if (totalMatches + 1.0 > 10.0) {
            idxFeatures2.set_size(&wm_emlrtRTEI, &d_st, 1, 0);
          } else if (totalMatches + 1.0 == totalMatches + 1.0) {
            idxFeatures2.set_size(
                &wm_emlrtRTEI, &d_st, 1,
                static_cast<int32_T>(10.0 - (totalMatches + 1.0)) + 1);
            b_loop_ub = static_cast<int32_T>(10.0 - (totalMatches + 1.0));
            for (i = 0; i <= b_loop_ub; i++) {
              idxFeatures2[i] = (totalMatches + 1.0) + static_cast<real_T>(i);
            }
          } else {
            idxFeatures2.reserve(&wm_emlrtRTEI, &d_st, 10);
            e_st.site = &qj_emlrtRSI;
            eml_float_colon(totalMatches + 1.0, (real_T *)idxFeatures2.data(),
                            b_iv);
            (*(int32_T(*)[2])idxFeatures2.size())[0] = b_iv[0];
            (*(int32_T(*)[2])idxFeatures2.size())[1] = b_iv[1];
            idxFeatures2.set_size(&wm_emlrtRTEI, &d_st, idxFeatures2.size(0),
                                  idxFeatures2.size(1));
          }
          numFeatures2 = idxFeatures2.size(1);
        }
        c_st.site = &jh_emlrtRSI;
        b_loop_ub = idxFeatures2.size(1);
        features2.set_size(&il_emlrtRTEI, &c_st, 32, idxFeatures2.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          for (i1 = 0; i1 < 32; i1++) {
            if (idxFeatures2[i] !=
                static_cast<int32_T>(muDoubleScalarFloor(idxFeatures2[i]))) {
              emlrtIntegerCheckR2012b(idxFeatures2[i], &j_emlrtDCI, &c_st);
            }
            c_i = static_cast<int32_T>(idxFeatures2[i]);
            if ((c_i < 1) || (c_i > 10)) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, 10, &ni_emlrtBCI, &c_st);
            }
            features2[i1 + 32 * i] = features2in[i1 + ((c_i - 1) << 5)];
          }
        }
        d_st.site = &mh_emlrtRSI;
        e_st.site = &rh_emlrtRSI;
        features1.set_size(&sl_emlrtRTEI, &e_st, loop_ub, 32);
        b_loop_ub = features2.size(1);
        b_features2.set_size(&ul_emlrtRTEI, &e_st, features2.size(1), 32);
        for (i = 0; i < 32; i++) {
          for (i1 = 0; i1 < loop_ub; i1++) {
            features1[i1 + features1.size(0) * i] = features1in[i + 32 * i1];
          }
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            b_features2[i1 + b_features2.size(0) * i] = features2[i + 32 * i1];
          }
        }
        f_st.site = &sh_emlrtRSI;
        b_scores.set_size(&vl_emlrtRTEI, &f_st, static_cast<int32_T>(N1),
                          numFeatures2);
        loop_ub_tmp = static_cast<int32_T>(N1) * numFeatures2;
        for (i = 0; i < loop_ub_tmp; i++) {
          b_scores[i] = 0.0F;
        }
        features2.set_size(&wl_emlrtRTEI, &f_st, 32, loop_ub);
        for (i = 0; i < loop_ub; i++) {
          for (i1 = 0; i1 < 32; i1++) {
            features2[i1 + 32 * i] = features1[i + features1.size(0) * i1];
          }
        }
        r3.set_size(&xl_emlrtRTEI, &f_st, 32, b_loop_ub);
        for (i = 0; i < b_loop_ub; i++) {
          for (i1 = 0; i1 < 32; i1++) {
            r3[i1 + 32 * i] = b_features2[i + b_features2.size(0) * i1];
          }
        }
        ComputeMetric_hamming_single(&features2[0], &r3[0], &b_scores[0],
                                     static_cast<uint32_T>(features1.size(0)),
                                     static_cast<uint32_T>(b_features2.size(0)),
                                     32U);
        d_st.site = &nh_emlrtRSI;
        matchFeatures::c_findNearestNeighbors(d_st, b_scores, indexPairs,
                                              matchMetric);
        d_st.site = &oh_emlrtRSI;
        b_loop_ub = matchMetric.size(0);
        if (matchMetric.size(0) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, matchMetric.size(0), &ic_emlrtBCI,
                                        &d_st);
        }
        loop_ub_tmp = matchMetric.size(1);
        b_r.set_size(&yl_emlrtRTEI, &d_st, 1, matchMetric.size(1));
        for (i = 0; i < loop_ub_tmp; i++) {
          b_r[i] = (matchMetric[matchMetric.size(0) * i] <= 256.0F);
        }
        a = 0;
        for (c_i = 0; c_i < loop_ub_tmp; c_i++) {
          if (b_r[c_i]) {
            a++;
          }
        }
        r1.set_size(&gx_emlrtRTEI, &d_st, 1, a);
        currentIdx = 0;
        for (c_i = 0; c_i < loop_ub_tmp; c_i++) {
          if (b_r[c_i]) {
            r1[currentIdx] = c_i;
            currentIdx++;
          }
        }
        loop_ub_tmp = r1.size(1);
        b_indexPairs.set_size(&bm_emlrtRTEI, &d_st, 2, r1.size(1));
        for (i = 0; i < loop_ub_tmp; i++) {
          b = ((r1[i] < 0) || (r1[i] > indexPairs.size(1) - 1));
          if (b) {
            emlrtDynamicBoundsCheckR2012b(r1[i], 0, indexPairs.size(1) - 1,
                                          &pc_emlrtBCI, &d_st);
          }
          b_indexPairs[2 * i] = indexPairs[2 * r1[i]];
          b_indexPairs[2 * i + 1] = indexPairs[2 * r1[i] + 1];
        }
        currentIdx = b_indexPairs.size(1);
        indexPairs.set_size(&cm_emlrtRTEI, &d_st, 2, b_indexPairs.size(1));
        a = b_indexPairs.size(1) << 1;
        for (i = 0; i < a; i++) {
          indexPairs[i] = b_indexPairs[i];
        }
        b_matchMetric.set_size(&em_emlrtRTEI, &d_st, matchMetric.size(0),
                               r1.size(1));
        for (i = 0; i < loop_ub_tmp; i++) {
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            if ((r1[i] < 0) || (r1[i] > matchMetric.size(1) - 1)) {
              emlrtDynamicBoundsCheckR2012b(r1[i], 0, matchMetric.size(1) - 1,
                                            &kc_emlrtBCI, &d_st);
            }
            b_matchMetric[b_matchMetric.size(0) * i] =
                matchMetric[matchMetric.size(0) * r1[i]];
          }
        }
        if (matchMetric.size(0) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, matchMetric.size(0), &mi_emlrtBCI,
                                        &c_st);
        }
        if (indexPairs.size(1) == 0) {
          relativeIndexPairs.set_size(&mm_emlrtRTEI, &c_st, 2, 0);
          pairMetric.set_size(&nm_emlrtRTEI, &c_st, 1, 0);
        } else {
          a = 0;
          for (c_i = 0; c_i < currentIdx; c_i++) {
            a++;
          }
          r2.set_size(&gx_emlrtRTEI, &c_st, 1, a);
          for (c_i = 0; c_i < currentIdx; c_i++) {
            r2[c_i] = c_i;
          }
          loop_ub_tmp = r2.size(1);
          relativeIndexPairs.set_size(&km_emlrtRTEI, &c_st, 2, r2.size(1));
          for (i = 0; i < loop_ub_tmp; i++) {
            b = ((r2[i] < 0) || (r2[i] > indexPairs.size(1) - 1));
            if (b) {
              emlrtDynamicBoundsCheckR2012b(r2[i], 0, indexPairs.size(1) - 1,
                                            &nc_emlrtBCI, &c_st);
            }
            relativeIndexPairs[2 * i] = indexPairs[2 * r2[i]];
            relativeIndexPairs[2 * i + 1] = indexPairs[2 * r2[i] + 1];
          }
          pairMetric.set_size(&lm_emlrtRTEI, &c_st, 1, r2.size(1));
          for (i = 0; i < loop_ub_tmp; i++) {
            if ((r2[i] < 0) || (r2[i] > r1.size(1) - 1)) {
              emlrtDynamicBoundsCheckR2012b(r2[i], 0, r1.size(1) - 1,
                                            &mc_emlrtBCI, &c_st);
            }
            pairMetric[i] = b_matchMetric[b_matchMetric.size(0) * r2[i]];
          }
        }
        if (b_i + 1 > numIterations) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, numIterations, &fc_emlrtBCI,
                                        &b_st);
        }
        numMatches_data[b_i] = pairMetric.size(1);
        i = matchMetricCell.size[1] - 1;
        if (b_i > matchMetricCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, matchMetricCell.size[1] - 1,
                                        &vb_emlrtBCI, &b_st);
        }
        b_loop_ub = pairMetric.size(1);
        matchMetricCell.data[matchMetricCell.size[0] * b_i].f1.set_size(
            &jl_emlrtRTEI, &b_st, 1, pairMetric.size(1));
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          matchMetricCell.data[b_i].f1[i1] = pairMetric[i1];
        }
        if (idxFeatures2.size(1) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, idxFeatures2.size(1),
                                        &bc_emlrtBCI, &b_st);
        }
        c_st.site = &kh_emlrtRSI;
        totalMatches = idxFeatures2[0];
        b_loop_ub = relativeIndexPairs.size(1);
        varargin_2.set_size(&kl_emlrtRTEI, &c_st, 1,
                            relativeIndexPairs.size(1));
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          real_T d;
          uint32_T q0;
          uint32_T qY;
          d = muDoubleScalarRound(
              static_cast<real_T>(relativeIndexPairs[2 * i1 + 1]) +
              totalMatches);
          if (d < 4.294967296E+9) {
            if (d >= 0.0) {
              q0 = static_cast<uint32_T>(d);
            } else {
              q0 = 0U;
            }
          } else if (d >= 4.294967296E+9) {
            q0 = MAX_uint32_T;
          } else {
            q0 = 0U;
          }
          qY = q0 - 1U;
          if (q0 - 1U > q0) {
            qY = 0U;
          }
          varargin_2[i1] = qY;
        }
        d_st.site = &ij_emlrtRSI;
        e_st.site = &jj_emlrtRSI;
        if (varargin_2.size(1) != relativeIndexPairs.size(1)) {
          emlrtErrorWithMessageIdR2018a(
              &e_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
        }
        if (b_i > matchMetricCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, matchMetricCell.size[1] - 1,
                                        &hc_emlrtBCI, &d_st);
        }
        indexPairsCell.data[indexPairsCell.size[0] * b_i].f1.set_size(
            &ll_emlrtRTEI, &d_st, 2,
            indexPairsCell.data[indexPairsCell.size[0] * b_i].f1.size(1));
        if (b_i > matchMetricCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, matchMetricCell.size[1] - 1,
                                        &hc_emlrtBCI, &d_st);
        }
        indexPairsCell.data[indexPairsCell.size[0] * b_i].f1.set_size(
            &ll_emlrtRTEI, &d_st,
            indexPairsCell.data[indexPairsCell.size[0] * b_i].f1.size(0),
            relativeIndexPairs.size(1));
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &hc_emlrtBCI, &d_st);
          }
          indexPairsCell.data[b_i].f1[2 * i1] = relativeIndexPairs[2 * i1];
        }
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &hc_emlrtBCI, &d_st);
          }
          indexPairsCell.data[b_i].f1[2 * i1 + 1] = varargin_2[i1];
        }
      }
      b_numMatches_data.set(&numMatches_data[0], 1, numIterations);
      c_st.site = &lh_emlrtRSI;
      totalMatches = sum(c_st, b_numMatches_data);
      i = static_cast<int32_T>(muDoubleScalarFloor(totalMatches));
      if (totalMatches != i) {
        emlrtIntegerCheckR2012b(totalMatches, &i_emlrtDCI, &b_st);
      }
      i1 = static_cast<int32_T>(totalMatches);
      indexPairs.set_size(&ml_emlrtRTEI, &b_st, 2, i1);
      loop_ub_tmp = i1 << 1;
      for (c_i = 0; c_i < loop_ub_tmp; c_i++) {
        indexPairs[c_i] = 0U;
      }
      if (i1 != i) {
        emlrtIntegerCheckR2012b(totalMatches, &h_emlrtDCI, &b_st);
      }
      currentIdx = 0;
      for (loop_ub_tmp = 0; loop_ub_tmp < numIterations; loop_ub_tmp++) {
        if (loop_ub_tmp + 1 > numIterations) {
          emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, numIterations,
                                        &gc_emlrtBCI, &b_st);
        }
        N1 = static_cast<uint32_T>(currentIdx) +
             static_cast<uint32_T>(numMatches_data[loop_ub_tmp]);
        if (static_cast<uint32_T>(currentIdx) + 1U > N1) {
          i = 0;
          c_i = 0;
        } else {
          if ((static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U) <
               1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U) >
               i1)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U), 1,
                static_cast<int32_T>(totalMatches), &ac_emlrtBCI, &b_st);
          }
          i = currentIdx;
          if ((static_cast<int32_T>(N1) < 1) ||
              (static_cast<int32_T>(N1) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(N1), 1,
                                          static_cast<int32_T>(totalMatches),
                                          &yb_emlrtBCI, &b_st);
          }
          c_i = static_cast<int32_T>(N1);
        }
        if (loop_ub_tmp > indexPairsCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(
              loop_ub_tmp, 0, indexPairsCell.size[1] - 1, &ub_emlrtBCI, &b_st);
        }
        b_iv[0] = 2;
        loop_ub = c_i - i;
        b_iv[1] = loop_ub;
        emlrtSubAssignSizeCheckR2012b(
            &b_iv[0], 2, indexPairsCell.data[loop_ub_tmp].f1.size(), 2,
            &h_emlrtECI, &b_st);
        for (c_i = 0; c_i < loop_ub; c_i++) {
          a = i + c_i;
          indexPairs[2 * a] = indexPairsCell.data[loop_ub_tmp].f1[2 * c_i];
          indexPairs[2 * a + 1] =
              indexPairsCell.data[loop_ub_tmp].f1[2 * c_i + 1];
        }
        if (static_cast<uint32_T>(currentIdx) + 1U > N1) {
          i = 1;
          c_i = 0;
        } else {
          if ((static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U) <
               1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U) >
               i1)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U), 1,
                static_cast<int32_T>(totalMatches), &xb_emlrtBCI, &b_st);
          }
          i = static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U);
          if ((static_cast<int32_T>(N1) < 1) ||
              (static_cast<int32_T>(N1) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(N1), 1,
                                          static_cast<int32_T>(totalMatches),
                                          &wb_emlrtBCI, &b_st);
          }
          c_i = static_cast<int32_T>(N1);
        }
        if (loop_ub_tmp > indexPairsCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(
              loop_ub_tmp, 0, indexPairsCell.size[1] - 1, &tb_emlrtBCI, &b_st);
        }
        i = (c_i - i) + 1;
        c_i = matchMetricCell.data[loop_ub_tmp].f1.size(1);
        if (i != c_i) {
          emlrtSubAssignSizeCheck1dR2017a(i, c_i, &g_emlrtECI, &b_st);
        }
        currentIdx = static_cast<int32_T>(N1);
      }
    }
    loop_ub = indexPairs.size(1);
    b_assignments.set_size(&hx_emlrtRTEI, &st, indexPairs.size(1), 2);
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_assignments[i1 + b_assignments.size(0) * i] = indexPairs[i + 2 * i1];
      }
    }
  }
  loop_ub = b_assignments.size(0);
  assignments.set_size(&ix_emlrtRTEI, &sp, b_assignments.size(0));
  for (i = 0; i < loop_ub; i++) {
    assignments[i] = b_assignments[i + b_assignments.size(0)];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void EncoderBinaryFeatures::b_assignVisualWords(
    const emlrtStack &sp, const uint8_T vocabularyFeatures[320],
    const array<uint8_T, 2U> &features, array<uint32_T, 1U> &assignments)
{
  array<real_T, 2U> b_numMatches_data;
  array<real_T, 2U> idxFeatures2;
  array<int32_T, 2U> r2;
  array<int32_T, 2U> r3;
  array<real32_T, 2U> b_matchMetric;
  array<real32_T, 2U> b_scores;
  array<real32_T, 2U> matchMetric;
  array<real32_T, 2U> pairMetric;
  array<real32_T, 2U> scores;
  array<uint32_T, 2U> b_assignments;
  array<uint32_T, 2U> b_indexPairs;
  array<uint32_T, 2U> indexPairs;
  array<uint32_T, 2U> relativeIndexPairs;
  array<uint32_T, 2U> varargin_2;
  array<uint8_T, 2U> b_features;
  array<uint8_T, 2U> b_features2;
  array<uint8_T, 2U> b_r;
  array<uint8_T, 2U> features1;
  array<uint8_T, 2U> features1in;
  array<uint8_T, 2U> features2;
  array<boolean_T, 2U> r1;
  bounded_array<cell_wrap_75, 5U, 2U> indexPairsCell;
  bounded_array<cell_wrap_76, 5U, 2U> matchMetricCell;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T numMatches_data[5];
  int32_T b_iv[2];
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  uint8_T features2in[320];
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &cmb_emlrtRSI;
  loop_ub = features.size(1);
  b_loop_ub = features.size(0);
  b_features.set_size(&dy_emlrtRTEI, &st, features.size(1), features.size(0));
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_features[i1 + b_features.size(0) * i] =
          features[i + features.size(0) * i1];
    }
  }
  features1in.set_size(&bl_emlrtRTEI, &st, features.size(1), features.size(0));
  loop_ub_tmp = features.size(0) * features.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    features1in[i] = b_features[i];
  }
  for (i = 0; i < 10; i++) {
    for (i1 = 0; i1 < 32; i1++) {
      features2in[i1 + (i << 5)] = vocabularyFeatures[i + 10 * i1];
    }
  }
  if (features1in.size(1) == 0) {
    b_assignments.set_size(&hx_emlrtRTEI, &st, 0, 2);
  } else {
    uint64_T u;
    int32_T matchThreshold;
    uint32_T N1;
    matchThreshold = features.size(1) << 3;
    b_st.site = &fh_emlrtRSI;
    N1 = static_cast<uint32_T>(features1in.size(1));
    u = static_cast<uint64_T>(features1in.size(1)) * 10ULL;
    if (u > 4294967295ULL) {
      u = 4294967295ULL;
    }
    if (static_cast<uint32_T>(u) < 1000000000U) {
      int32_T currentIdx;
      int32_T end;
      c_st.site = &gh_emlrtRSI;
      d_st.site = &mh_emlrtRSI;
      e_st.site = &rh_emlrtRSI;
      b_features.set_size(&ey_emlrtRTEI, &e_st, features.size(0),
                          features.size(1));
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          b_features[i1 + b_features.size(0) * i] =
              features1in[i + features1in.size(0) * i1];
        }
      }
      features1.set_size(&sl_emlrtRTEI, &e_st, features.size(0),
                         features.size(1));
      for (i = 0; i < loop_ub_tmp; i++) {
        features1[i] = b_features[i];
      }
      f_st.site = &sh_emlrtRSI;
      scores.set_size(&vl_emlrtRTEI, &f_st, features.size(0), 10);
      loop_ub_tmp = features1in.size(1) * 10;
      for (i = 0; i < loop_ub_tmp; i++) {
        scores[i] = 0.0F;
      }
      b_r.set_size(&wl_emlrtRTEI, &f_st, features.size(1), features.size(0));
      for (i = 0; i < b_loop_ub; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_r[i1 + b_r.size(0) * i] = features1[i + features1.size(0) * i1];
        }
      }
      ComputeMetric_hamming_single(&b_r[0], &features2in[0], &scores[0],
                                   static_cast<uint32_T>(features1.size(0)),
                                   10U,
                                   static_cast<uint32_T>(features1.size(1)));
      d_st.site = &nh_emlrtRSI;
      matchFeatures::b_findNearestNeighbors(d_st, scores, relativeIndexPairs,
                                            pairMetric);
      d_st.site = &oh_emlrtRSI;
      loop_ub = pairMetric.size(1);
      r1.set_size(&yl_emlrtRTEI, &d_st, 1, pairMetric.size(1));
      for (i = 0; i < loop_ub; i++) {
        r1[i] = (pairMetric[i] <= matchThreshold);
      }
      currentIdx = 0;
      for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
        if (r1[b_i]) {
          currentIdx++;
        }
      }
      r2.set_size(&gx_emlrtRTEI, &d_st, 1, currentIdx);
      currentIdx = 0;
      for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
        if (r1[b_i]) {
          r2[currentIdx] = b_i;
          currentIdx++;
        }
      }
      loop_ub = r2.size(1);
      b_indexPairs.set_size(&bm_emlrtRTEI, &d_st, 2, r2.size(1));
      for (i = 0; i < loop_ub; i++) {
        if (r2[i] > relativeIndexPairs.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(
              r2[i], 0, relativeIndexPairs.size(1) - 1, &pc_emlrtBCI, &d_st);
        }
        b_indexPairs[2 * i] = relativeIndexPairs[2 * r2[i]];
        if (r2[i] > relativeIndexPairs.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(
              r2[i], 0, relativeIndexPairs.size(1) - 1, &pc_emlrtBCI, &d_st);
        }
        b_indexPairs[2 * i + 1] = relativeIndexPairs[2 * r2[i] + 1];
      }
      end = b_indexPairs.size(1);
      relativeIndexPairs.set_size(&cm_emlrtRTEI, &d_st, 2,
                                  b_indexPairs.size(1));
      loop_ub_tmp = b_indexPairs.size(1) << 1;
      for (i = 0; i < loop_ub_tmp; i++) {
        relativeIndexPairs[i] = b_indexPairs[i];
      }
      for (i = 0; i < loop_ub; i++) {
        if (r2[i] > pairMetric.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(r2[i], 0, pairMetric.size(1) - 1,
                                        &kc_emlrtBCI, &d_st);
        }
      }
      if (relativeIndexPairs.size(1) == 0) {
        indexPairs.set_size(&mm_emlrtRTEI, &c_st, 2, 0);
      } else {
        currentIdx = 0;
        for (int32_T b_i{0}; b_i < end; b_i++) {
          currentIdx++;
        }
        r3.set_size(&gx_emlrtRTEI, &c_st, 1, currentIdx);
        for (int32_T b_i{0}; b_i < end; b_i++) {
          r3[b_i] = b_i;
        }
        loop_ub = r3.size(1);
        indexPairs.set_size(&km_emlrtRTEI, &c_st, 2, r3.size(1));
        for (i = 0; i < loop_ub; i++) {
          if (r3[i] > relativeIndexPairs.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(
                r3[i], 0, relativeIndexPairs.size(1) - 1, &nc_emlrtBCI, &c_st);
          }
          indexPairs[2 * i] = relativeIndexPairs[2 * r3[i]];
          if (r3[i] > relativeIndexPairs.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(
                r3[i], 0, relativeIndexPairs.size(1) - 1, &nc_emlrtBCI, &c_st);
          }
          indexPairs[2 * i + 1] = relativeIndexPairs[2 * r3[i] + 1];
        }
        for (i = 0; i < loop_ub; i++) {
          if (r3[i] > r2.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(r3[i], 0, r2.size(1) - 1,
                                          &mc_emlrtBCI, &c_st);
          }
        }
      }
    } else {
      real_T totalMatches;
      int32_T a;
      int32_T c_i;
      int32_T c_loop_ub;
      int32_T currentIdx;
      int32_T end;
      int32_T numFeatures2;
      int32_T numIterations;
      int8_T unnamed_idx_1;
      numIterations = static_cast<int32_T>(
          muDoubleScalarCeil(static_cast<real_T>(u) / 1.0E+9));
      numFeatures2 = static_cast<int32_T>(
          muDoubleScalarFloor(10.0 / static_cast<real_T>(numIterations)));
      unnamed_idx_1 = static_cast<int8_T>(numIterations);
      indexPairsCell.size[0] = 1;
      indexPairsCell.size[1] = numIterations;
      for (i = 0; i < unnamed_idx_1; i++) {
        if (i > indexPairsCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, indexPairsCell.size[1] - 1,
                                        &dc_emlrtBCI, &b_st);
        }
        indexPairsCell.data[indexPairsCell.size[0] * i].f1.set_size(
            &el_emlrtRTEI, &b_st, 2,
            indexPairsCell.data[indexPairsCell.size[0] * i].f1.size(1));
        if (i > indexPairsCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, indexPairsCell.size[1] - 1,
                                        &dc_emlrtBCI, &b_st);
        }
        indexPairsCell.data[indexPairsCell.size[0] * i].f1.set_size(
            &el_emlrtRTEI, &b_st,
            indexPairsCell.data[indexPairsCell.size[0] * i].f1.size(0), 0);
      }
      matchMetricCell.size[0] = 1;
      matchMetricCell.size[1] = numIterations;
      for (i = 0; i < unnamed_idx_1; i++) {
        if (i > matchMetricCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, matchMetricCell.size[1] - 1,
                                        &dc_emlrtBCI, &b_st);
        }
        matchMetricCell.data[matchMetricCell.size[0] * i].f1.set_size(
            &el_emlrtRTEI, &b_st, 1,
            matchMetricCell.data[matchMetricCell.size[0] * i].f1.size(1));
        if (i > matchMetricCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, matchMetricCell.size[1] - 1,
                                        &dc_emlrtBCI, &b_st);
        }
        matchMetricCell.data[matchMetricCell.size[0] * i].f1.set_size(
            &el_emlrtRTEI, &b_st,
            matchMetricCell.data[matchMetricCell.size[0] * i].f1.size(0), 0);
      }
      idxFeatures2.set_size(&fl_emlrtRTEI, &b_st, 1, 1);
      idxFeatures2[0] = 0.0;
      matchMetricCell.size[0] = 1;
      matchMetricCell.size[1] = numIterations;
      indexPairsCell.size[0] = 1;
      indexPairsCell.size[1] = numIterations;
      for (int32_T b_i{0}; b_i < numIterations; b_i++) {
        boolean_T b;
        if (b_i + 1 < numIterations) {
          c_st.site = &hh_emlrtRSI;
          a = b_i * numFeatures2 + 1;
          currentIdx = (b_i + 1) * numFeatures2;
          d_st.site = &pj_emlrtRSI;
          if (currentIdx < a) {
            idxFeatures2.set_size(&hl_emlrtRTEI, &d_st, 1, 0);
          } else {
            c_loop_ub =
                static_cast<int8_T>(currentIdx) - static_cast<int8_T>(a);
            idxFeatures2.set_size(&hl_emlrtRTEI, &d_st, 1, c_loop_ub + 1);
            for (i = 0; i <= c_loop_ub; i++) {
              idxFeatures2[i] = static_cast<int8_T>(static_cast<int8_T>(a) +
                                                    static_cast<int8_T>(i));
            }
          }
        } else {
          c_st.site = &ih_emlrtRSI;
          if (idxFeatures2.size(1) < 1) {
            emlrtDynamicBoundsCheckR2012b(idxFeatures2.size(1), 1,
                                          idxFeatures2.size(1), &cc_emlrtBCI,
                                          &c_st);
          }
          d_st.site = &pj_emlrtRSI;
          totalMatches = idxFeatures2[idxFeatures2.size(1) - 1];
          if (totalMatches + 1.0 > 10.0) {
            idxFeatures2.set_size(&wm_emlrtRTEI, &d_st, 1, 0);
          } else if (totalMatches + 1.0 == totalMatches + 1.0) {
            idxFeatures2.set_size(
                &wm_emlrtRTEI, &d_st, 1,
                static_cast<int32_T>(10.0 - (totalMatches + 1.0)) + 1);
            c_loop_ub = static_cast<int32_T>(10.0 - (totalMatches + 1.0));
            for (i = 0; i <= c_loop_ub; i++) {
              idxFeatures2[i] = (totalMatches + 1.0) + static_cast<real_T>(i);
            }
          } else {
            idxFeatures2.reserve(&wm_emlrtRTEI, &d_st, 10);
            e_st.site = &qj_emlrtRSI;
            eml_float_colon(totalMatches + 1.0, (real_T *)idxFeatures2.data(),
                            b_iv);
            (*(int32_T(*)[2])idxFeatures2.size())[0] = b_iv[0];
            (*(int32_T(*)[2])idxFeatures2.size())[1] = b_iv[1];
            idxFeatures2.set_size(&wm_emlrtRTEI, &d_st, idxFeatures2.size(0),
                                  idxFeatures2.size(1));
          }
          numFeatures2 = idxFeatures2.size(1);
        }
        c_st.site = &jh_emlrtRSI;
        c_loop_ub = idxFeatures2.size(1);
        features2.set_size(&il_emlrtRTEI, &c_st, 32, idxFeatures2.size(1));
        for (i = 0; i < c_loop_ub; i++) {
          for (i1 = 0; i1 < 32; i1++) {
            if (idxFeatures2[i] !=
                static_cast<int32_T>(muDoubleScalarFloor(idxFeatures2[i]))) {
              emlrtIntegerCheckR2012b(idxFeatures2[i], &j_emlrtDCI, &c_st);
            }
            c_i = static_cast<int32_T>(idxFeatures2[i]);
            if ((c_i < 1) || (c_i > 10)) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, 10, &ni_emlrtBCI, &c_st);
            }
            features2[i1 + 32 * i] = features2in[i1 + ((c_i - 1) << 5)];
          }
        }
        d_st.site = &mh_emlrtRSI;
        e_st.site = &rh_emlrtRSI;
        b_features.set_size(&ey_emlrtRTEI, &e_st, b_loop_ub, loop_ub);
        for (i = 0; i < loop_ub; i++) {
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            b_features[i1 + b_features.size(0) * i] =
                features1in[i + features1in.size(0) * i1];
          }
        }
        features1.set_size(&sl_emlrtRTEI, &e_st, b_loop_ub, loop_ub);
        for (i = 0; i < loop_ub_tmp; i++) {
          features1[i] = b_features[i];
        }
        c_loop_ub = features2.size(1);
        b_features2.set_size(&ul_emlrtRTEI, &e_st, features2.size(1), 32);
        for (i = 0; i < 32; i++) {
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            b_features2[i1 + b_features2.size(0) * i] = features2[i + 32 * i1];
          }
        }
        f_st.site = &sh_emlrtRSI;
        b_scores.set_size(&vl_emlrtRTEI, &f_st, static_cast<int32_T>(N1),
                          numFeatures2);
        a = static_cast<int32_T>(N1) * numFeatures2;
        for (i = 0; i < a; i++) {
          b_scores[i] = 0.0F;
        }
        b_r.set_size(&wl_emlrtRTEI, &f_st, loop_ub, b_loop_ub);
        for (i = 0; i < b_loop_ub; i++) {
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_r[i1 + b_r.size(0) * i] = features1[i + features1.size(0) * i1];
          }
        }
        features2.set_size(&xl_emlrtRTEI, &f_st, 32, c_loop_ub);
        for (i = 0; i < c_loop_ub; i++) {
          for (i1 = 0; i1 < 32; i1++) {
            features2[i1 + 32 * i] = b_features2[i + b_features2.size(0) * i1];
          }
        }
        ComputeMetric_hamming_single(&b_r[0], &features2[0], &b_scores[0],
                                     static_cast<uint32_T>(features1.size(0)),
                                     static_cast<uint32_T>(b_features2.size(0)),
                                     static_cast<uint32_T>(features1.size(1)));
        d_st.site = &nh_emlrtRSI;
        matchFeatures::c_findNearestNeighbors(d_st, b_scores, indexPairs,
                                              matchMetric);
        d_st.site = &oh_emlrtRSI;
        c_loop_ub = matchMetric.size(0);
        if (matchMetric.size(0) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, matchMetric.size(0), &ic_emlrtBCI,
                                        &d_st);
        }
        a = matchMetric.size(1);
        r1.set_size(&yl_emlrtRTEI, &d_st, 1, matchMetric.size(1));
        for (i = 0; i < a; i++) {
          r1[i] = (matchMetric[matchMetric.size(0) * i] <= matchThreshold);
        }
        currentIdx = 0;
        for (c_i = 0; c_i < a; c_i++) {
          if (r1[c_i]) {
            currentIdx++;
          }
        }
        r2.set_size(&gx_emlrtRTEI, &d_st, 1, currentIdx);
        currentIdx = 0;
        for (c_i = 0; c_i < a; c_i++) {
          if (r1[c_i]) {
            r2[currentIdx] = c_i;
            currentIdx++;
          }
        }
        a = r2.size(1);
        b_indexPairs.set_size(&bm_emlrtRTEI, &d_st, 2, r2.size(1));
        for (i = 0; i < a; i++) {
          b = ((r2[i] < 0) || (r2[i] > indexPairs.size(1) - 1));
          if (b) {
            emlrtDynamicBoundsCheckR2012b(r2[i], 0, indexPairs.size(1) - 1,
                                          &pc_emlrtBCI, &d_st);
          }
          b_indexPairs[2 * i] = indexPairs[2 * r2[i]];
          b_indexPairs[2 * i + 1] = indexPairs[2 * r2[i] + 1];
        }
        end = b_indexPairs.size(1);
        indexPairs.set_size(&cm_emlrtRTEI, &d_st, 2, b_indexPairs.size(1));
        currentIdx = b_indexPairs.size(1) << 1;
        for (i = 0; i < currentIdx; i++) {
          indexPairs[i] = b_indexPairs[i];
        }
        b_matchMetric.set_size(&em_emlrtRTEI, &d_st, matchMetric.size(0),
                               r2.size(1));
        for (i = 0; i < a; i++) {
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            if ((r2[i] < 0) || (r2[i] > matchMetric.size(1) - 1)) {
              emlrtDynamicBoundsCheckR2012b(r2[i], 0, matchMetric.size(1) - 1,
                                            &kc_emlrtBCI, &d_st);
            }
            b_matchMetric[b_matchMetric.size(0) * i] =
                matchMetric[matchMetric.size(0) * r2[i]];
          }
        }
        if (matchMetric.size(0) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, matchMetric.size(0), &mi_emlrtBCI,
                                        &c_st);
        }
        if (indexPairs.size(1) == 0) {
          relativeIndexPairs.set_size(&mm_emlrtRTEI, &c_st, 2, 0);
          pairMetric.set_size(&nm_emlrtRTEI, &c_st, 1, 0);
        } else {
          currentIdx = 0;
          for (c_i = 0; c_i < end; c_i++) {
            currentIdx++;
          }
          r3.set_size(&gx_emlrtRTEI, &c_st, 1, currentIdx);
          for (c_i = 0; c_i < end; c_i++) {
            r3[c_i] = c_i;
          }
          a = r3.size(1);
          relativeIndexPairs.set_size(&km_emlrtRTEI, &c_st, 2, r3.size(1));
          for (i = 0; i < a; i++) {
            b = ((r3[i] < 0) || (r3[i] > indexPairs.size(1) - 1));
            if (b) {
              emlrtDynamicBoundsCheckR2012b(r3[i], 0, indexPairs.size(1) - 1,
                                            &nc_emlrtBCI, &c_st);
            }
            relativeIndexPairs[2 * i] = indexPairs[2 * r3[i]];
            relativeIndexPairs[2 * i + 1] = indexPairs[2 * r3[i] + 1];
          }
          pairMetric.set_size(&lm_emlrtRTEI, &c_st, 1, r3.size(1));
          for (i = 0; i < a; i++) {
            if ((r3[i] < 0) || (r3[i] > r2.size(1) - 1)) {
              emlrtDynamicBoundsCheckR2012b(r3[i], 0, r2.size(1) - 1,
                                            &mc_emlrtBCI, &c_st);
            }
            pairMetric[i] = b_matchMetric[b_matchMetric.size(0) * r3[i]];
          }
        }
        if (b_i + 1 > numIterations) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, numIterations, &fc_emlrtBCI,
                                        &b_st);
        }
        numMatches_data[b_i] = pairMetric.size(1);
        i = matchMetricCell.size[1] - 1;
        if (b_i > matchMetricCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, matchMetricCell.size[1] - 1,
                                        &vb_emlrtBCI, &b_st);
        }
        c_loop_ub = pairMetric.size(1);
        matchMetricCell.data[matchMetricCell.size[0] * b_i].f1.set_size(
            &jl_emlrtRTEI, &b_st, 1, pairMetric.size(1));
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          matchMetricCell.data[b_i].f1[i1] = pairMetric[i1];
        }
        if (idxFeatures2.size(1) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, idxFeatures2.size(1),
                                        &bc_emlrtBCI, &b_st);
        }
        c_st.site = &kh_emlrtRSI;
        totalMatches = idxFeatures2[0];
        c_loop_ub = relativeIndexPairs.size(1);
        varargin_2.set_size(&kl_emlrtRTEI, &c_st, 1,
                            relativeIndexPairs.size(1));
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          real_T d;
          uint32_T q0;
          uint32_T qY;
          d = muDoubleScalarRound(
              static_cast<real_T>(relativeIndexPairs[2 * i1 + 1]) +
              totalMatches);
          if (d < 4.294967296E+9) {
            if (d >= 0.0) {
              q0 = static_cast<uint32_T>(d);
            } else {
              q0 = 0U;
            }
          } else if (d >= 4.294967296E+9) {
            q0 = MAX_uint32_T;
          } else {
            q0 = 0U;
          }
          qY = q0 - 1U;
          if (q0 - 1U > q0) {
            qY = 0U;
          }
          varargin_2[i1] = qY;
        }
        d_st.site = &ij_emlrtRSI;
        e_st.site = &jj_emlrtRSI;
        if (varargin_2.size(1) != relativeIndexPairs.size(1)) {
          emlrtErrorWithMessageIdR2018a(
              &e_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
        }
        if (b_i > matchMetricCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, matchMetricCell.size[1] - 1,
                                        &hc_emlrtBCI, &d_st);
        }
        indexPairsCell.data[indexPairsCell.size[0] * b_i].f1.set_size(
            &ll_emlrtRTEI, &d_st, 2,
            indexPairsCell.data[indexPairsCell.size[0] * b_i].f1.size(1));
        if (b_i > matchMetricCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, matchMetricCell.size[1] - 1,
                                        &hc_emlrtBCI, &d_st);
        }
        indexPairsCell.data[indexPairsCell.size[0] * b_i].f1.set_size(
            &ll_emlrtRTEI, &d_st,
            indexPairsCell.data[indexPairsCell.size[0] * b_i].f1.size(0),
            relativeIndexPairs.size(1));
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &hc_emlrtBCI, &d_st);
          }
          indexPairsCell.data[b_i].f1[2 * i1] = relativeIndexPairs[2 * i1];
        }
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &hc_emlrtBCI, &d_st);
          }
          indexPairsCell.data[b_i].f1[2 * i1 + 1] = varargin_2[i1];
        }
      }
      b_numMatches_data.set(&numMatches_data[0], 1, numIterations);
      c_st.site = &lh_emlrtRSI;
      totalMatches = sum(c_st, b_numMatches_data);
      i = static_cast<int32_T>(muDoubleScalarFloor(totalMatches));
      if (totalMatches != i) {
        emlrtIntegerCheckR2012b(totalMatches, &i_emlrtDCI, &b_st);
      }
      i1 = static_cast<int32_T>(totalMatches);
      indexPairs.set_size(&ml_emlrtRTEI, &b_st, 2, i1);
      loop_ub_tmp = i1 << 1;
      for (c_i = 0; c_i < loop_ub_tmp; c_i++) {
        indexPairs[c_i] = 0U;
      }
      if (i1 != i) {
        emlrtIntegerCheckR2012b(totalMatches, &h_emlrtDCI, &b_st);
      }
      currentIdx = 0;
      for (c_loop_ub = 0; c_loop_ub < numIterations; c_loop_ub++) {
        if (c_loop_ub + 1 > numIterations) {
          emlrtDynamicBoundsCheckR2012b(c_loop_ub + 1, 1, numIterations,
                                        &gc_emlrtBCI, &b_st);
        }
        N1 = static_cast<uint32_T>(currentIdx) +
             static_cast<uint32_T>(numMatches_data[c_loop_ub]);
        if (static_cast<uint32_T>(currentIdx) + 1U > N1) {
          i = 0;
          c_i = 0;
        } else {
          if ((static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U) <
               1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U) >
               i1)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U), 1,
                static_cast<int32_T>(totalMatches), &ac_emlrtBCI, &b_st);
          }
          i = currentIdx;
          if ((static_cast<int32_T>(N1) < 1) ||
              (static_cast<int32_T>(N1) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(N1), 1,
                                          static_cast<int32_T>(totalMatches),
                                          &yb_emlrtBCI, &b_st);
          }
          c_i = static_cast<int32_T>(N1);
        }
        if (c_loop_ub > indexPairsCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(
              c_loop_ub, 0, indexPairsCell.size[1] - 1, &ub_emlrtBCI, &b_st);
        }
        b_iv[0] = 2;
        a = c_i - i;
        b_iv[1] = a;
        emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2,
                                      indexPairsCell.data[c_loop_ub].f1.size(),
                                      2, &h_emlrtECI, &b_st);
        for (c_i = 0; c_i < a; c_i++) {
          end = i + c_i;
          indexPairs[2 * end] = indexPairsCell.data[c_loop_ub].f1[2 * c_i];
          indexPairs[2 * end + 1] =
              indexPairsCell.data[c_loop_ub].f1[2 * c_i + 1];
        }
        if (static_cast<uint32_T>(currentIdx) + 1U > N1) {
          i = 1;
          c_i = 0;
        } else {
          if ((static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U) <
               1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U) >
               i1)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U), 1,
                static_cast<int32_T>(totalMatches), &xb_emlrtBCI, &b_st);
          }
          i = static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U);
          if ((static_cast<int32_T>(N1) < 1) ||
              (static_cast<int32_T>(N1) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(N1), 1,
                                          static_cast<int32_T>(totalMatches),
                                          &wb_emlrtBCI, &b_st);
          }
          c_i = static_cast<int32_T>(N1);
        }
        if (c_loop_ub > indexPairsCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(
              c_loop_ub, 0, indexPairsCell.size[1] - 1, &tb_emlrtBCI, &b_st);
        }
        i = (c_i - i) + 1;
        c_i = matchMetricCell.data[c_loop_ub].f1.size(1);
        if (i != c_i) {
          emlrtSubAssignSizeCheck1dR2017a(i, c_i, &g_emlrtECI, &b_st);
        }
        currentIdx = static_cast<int32_T>(N1);
      }
    }
    loop_ub = indexPairs.size(1);
    b_assignments.set_size(&hx_emlrtRTEI, &st, indexPairs.size(1), 2);
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_assignments[i1 + b_assignments.size(0) * i] = indexPairs[i + 2 * i1];
      }
    }
  }
  loop_ub = b_assignments.size(0);
  assignments.set_size(&ix_emlrtRTEI, &sp, b_assignments.size(0));
  for (i = 0; i < loop_ub; i++) {
    assignments[i] = b_assignments[i + b_assignments.size(0)];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace bof
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (EncoderBinaryFeatures.cpp)
