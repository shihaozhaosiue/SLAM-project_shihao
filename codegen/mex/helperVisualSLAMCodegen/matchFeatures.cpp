//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// matchFeatures.cpp
//
// Code generation for function 'matchFeatures'
//

// Include files
#include "matchFeatures.h"
#include "binaryFeatures.h"
#include "colon.h"
#include "cvalgMatchFeatures.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRTEInfo al_emlrtRTEI{
    44,              // lineNo
    20,              // colNo
    "matchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeatures.m" // pName
};

// Function Definitions
namespace coder {
void matchFeatures(const emlrtStack &sp, const binaryFeatures &varargin_1,
                   const b_binaryFeatures &varargin_2,
                   array<uint32_T, 2U> &indexPairs)
{
  array<real32_T, 1U> matchMetric;
  array<uint8_T, 2U> b_varargin_2;
  emlrtStack st;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_varargin_2.set_size(&al_emlrtRTEI, &sp, varargin_2.Features.size(0),
                        varargin_2.Features.size(1));
  loop_ub = varargin_2.Features.size(0) * varargin_2.Features.size(1) - 1;
  for (int32_T i{0}; i <= loop_ub; i++) {
    b_varargin_2[i] = varargin_2.Features[i];
  }
  st.site = &eh_emlrtRSI;
  vision::internal::matchFeatures::cvalgMatchFeatures(
      st, varargin_1.Features, b_varargin_2, indexPairs, matchMetric);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void matchFeatures(const emlrtStack &sp, const b_binaryFeatures &varargin_1,
                   const b_binaryFeatures &varargin_2,
                   array<uint32_T, 2U> &indexPairs)
{
  array<real_T, 2U> b_numMatches_data;
  array<real_T, 2U> idxFeatures2;
  array<real32_T, 2U> pairMetric;
  array<uint32_T, 2U> b_varargin_2;
  array<uint32_T, 2U> relativeIndexPairs;
  array<uint8_T, 2U> b_features2in;
  array<uint8_T, 2U> b_varargin_1;
  array<uint8_T, 2U> features1in;
  array<uint8_T, 2U> features2in;
  bounded_array<cell_wrap_75, 5U, 2U> indexPairsCell;
  bounded_array<cell_wrap_76, 5U, 2U> matchMetricCell;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T numMatches_data[5];
  int32_T c_varargin_1[2];
  int32_T b_loop_ub;
  int32_T currentIdx;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T threshold;
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
  st.site = &dh_emlrtRSI;
  if (varargin_1.Features.size(1) != varargin_2.Features.size(1)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &qe_emlrtRTEI, "vision:matchFeatures:featuresNotSameDimension",
        "vision:matchFeatures:featuresNotSameDimension", 0);
  }
  threshold = static_cast<int32_T>(muSingleScalarRound(
      0.399999976F *
      (8.0F * static_cast<real32_T>(varargin_1.Features.size(1)))));
  st.site = &eh_emlrtRSI;
  loop_ub = varargin_1.Features.size(1);
  b_loop_ub = varargin_1.Features.size(0);
  b_varargin_1.set_size(&dy_emlrtRTEI, &st, varargin_1.Features.size(1),
                        varargin_1.Features.size(0));
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_varargin_1[i1 + b_varargin_1.size(0) * i] =
          varargin_1.Features[i + varargin_1.Features.size(0) * i1];
    }
  }
  features1in.set_size(&bl_emlrtRTEI, &st, varargin_1.Features.size(1),
                       varargin_1.Features.size(0));
  currentIdx = varargin_1.Features.size(0) * varargin_1.Features.size(1);
  for (i = 0; i < currentIdx; i++) {
    features1in[i] = b_varargin_1[i];
  }
  loop_ub = varargin_2.Features.size(1);
  b_loop_ub = varargin_2.Features.size(0);
  b_varargin_1.set_size(&cl_emlrtRTEI, &st, varargin_2.Features.size(1),
                        varargin_2.Features.size(0));
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_varargin_1[i1 + b_varargin_1.size(0) * i] =
          varargin_2.Features[i + varargin_2.Features.size(0) * i1];
    }
  }
  features2in.set_size(&dl_emlrtRTEI, &st, varargin_2.Features.size(1),
                       varargin_2.Features.size(0));
  currentIdx = varargin_2.Features.size(0) * varargin_2.Features.size(1);
  for (i = 0; i < currentIdx; i++) {
    features2in[i] = b_varargin_1[i];
  }
  if ((features1in.size(0) == 0) || (features1in.size(1) == 0) ||
      ((features2in.size(0) == 0) || (features2in.size(1) == 0))) {
    indexPairs.set_size(&ql_emlrtRTEI, &st, 0, 2);
  } else {
    uint64_T u;
    uint32_T N2;
    b_st.site = &fh_emlrtRSI;
    N2 = static_cast<uint32_T>(features2in.size(1));
    u = static_cast<uint64_T>(features1in.size(1)) *
        static_cast<uint64_T>(features2in.size(1));
    if (u > 4294967295ULL) {
      u = 4294967295ULL;
    }
    if (static_cast<uint32_T>(u) < 1000000000U) {
      c_st.site = &gh_emlrtRSI;
      vision::internal::matchFeatures::exhaustiveSearch(
          c_st, features1in, features2in, static_cast<real32_T>(threshold),
          static_cast<uint32_T>(features1in.size(1)),
          static_cast<uint32_T>(features2in.size(1)), relativeIndexPairs,
          pairMetric);
    } else {
      real_T totalMatches;
      int32_T i2;
      int32_T numFeatures2;
      int32_T numIterations;
      int8_T unnamed_idx_1;
      numIterations = static_cast<int32_T>(
          muDoubleScalarCeil(static_cast<real_T>(u) / 1.0E+9));
      numFeatures2 = static_cast<int32_T>(
          muDoubleScalarFloor(static_cast<real_T>(features2in.size(1)) /
                              static_cast<real_T>(numIterations)));
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
        real_T b;
        if (b_i + 1 < numIterations) {
          c_st.site = &hh_emlrtRSI;
          totalMatches = ((static_cast<real_T>(b_i) + 1.0) - 1.0) *
                             static_cast<real_T>(numFeatures2) +
                         1.0;
          b = (static_cast<real_T>(b_i) + 1.0) *
              static_cast<real_T>(numFeatures2);
          d_st.site = &pj_emlrtRSI;
          if (b < totalMatches) {
            idxFeatures2.set_size(&hl_emlrtRTEI, &d_st, 1, 0);
          } else {
            currentIdx = static_cast<int32_T>(b - totalMatches);
            idxFeatures2.set_size(&hl_emlrtRTEI, &d_st, 1, currentIdx + 1);
            for (i = 0; i <= currentIdx; i++) {
              idxFeatures2[i] = totalMatches + static_cast<real_T>(i);
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
          if (N2 < totalMatches + 1.0) {
            idxFeatures2.set_size(&gl_emlrtRTEI, &d_st, 1, 0);
          } else if (totalMatches + 1.0 == totalMatches + 1.0) {
            currentIdx = static_cast<int32_T>(static_cast<real_T>(N2) -
                                              (totalMatches + 1.0));
            idxFeatures2.set_size(&gl_emlrtRTEI, &d_st, 1, currentIdx + 1);
            for (i = 0; i <= currentIdx; i++) {
              idxFeatures2[i] = (totalMatches + 1.0) + static_cast<real_T>(i);
            }
          } else {
            e_st.site = &qj_emlrtRSI;
            eml_float_colon(e_st, totalMatches + 1.0, static_cast<real_T>(N2),
                            idxFeatures2);
          }
          numFeatures2 = idxFeatures2.size(1);
        }
        currentIdx = idxFeatures2.size(1);
        b_features2in.set_size(&il_emlrtRTEI, &b_st, loop_ub,
                               idxFeatures2.size(1));
        for (i = 0; i < currentIdx; i++) {
          for (i1 = 0; i1 < loop_ub; i1++) {
            if (idxFeatures2[i] !=
                static_cast<int32_T>(muDoubleScalarFloor(idxFeatures2[i]))) {
              emlrtIntegerCheckR2012b(idxFeatures2[i], &j_emlrtDCI, &b_st);
            }
            i2 = static_cast<int32_T>(idxFeatures2[i]);
            if ((i2 < 1) || (i2 > b_loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, b_loop_ub, &ec_emlrtBCI,
                                            &b_st);
            }
            b_features2in[i1 + b_features2in.size(0) * i] =
                features2in[i1 + features2in.size(0) * (i2 - 1)];
          }
        }
        c_st.site = &jh_emlrtRSI;
        vision::internal::matchFeatures::exhaustiveSearch(
            c_st, features1in, b_features2in, static_cast<real32_T>(threshold),
            static_cast<uint32_T>(features1in.size(1)),
            static_cast<uint32_T>(numFeatures2), relativeIndexPairs,
            pairMetric);
        currentIdx = pairMetric.size(1);
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
        matchMetricCell.data[matchMetricCell.size[0] * b_i].f1.set_size(
            &jl_emlrtRTEI, &b_st, 1, pairMetric.size(1));
        for (i1 = 0; i1 < currentIdx; i1++) {
          matchMetricCell.data[b_i].f1[i1] = pairMetric[i1];
        }
        if (idxFeatures2.size(1) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, idxFeatures2.size(1),
                                        &bc_emlrtBCI, &b_st);
        }
        c_st.site = &kh_emlrtRSI;
        totalMatches = idxFeatures2[0];
        currentIdx = relativeIndexPairs.size(1);
        b_varargin_2.set_size(&kl_emlrtRTEI, &c_st, 1,
                              relativeIndexPairs.size(1));
        for (i1 = 0; i1 < currentIdx; i1++) {
          uint32_T q0;
          uint32_T qY;
          b = muDoubleScalarRound(
              static_cast<real_T>(relativeIndexPairs[2 * i1 + 1]) +
              totalMatches);
          if (b < 4.294967296E+9) {
            if (b >= 0.0) {
              q0 = static_cast<uint32_T>(b);
            } else {
              q0 = 0U;
            }
          } else if (b >= 4.294967296E+9) {
            q0 = MAX_uint32_T;
          } else {
            q0 = 0U;
          }
          qY = q0 - 1U;
          if (q0 - 1U > q0) {
            qY = 0U;
          }
          b_varargin_2[i1] = qY;
        }
        d_st.site = &ij_emlrtRSI;
        e_st.site = &jj_emlrtRSI;
        if (b_varargin_2.size(1) != relativeIndexPairs.size(1)) {
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
        for (i1 = 0; i1 < currentIdx; i1++) {
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &hc_emlrtBCI, &d_st);
          }
          indexPairsCell.data[b_i].f1[2 * i1] = relativeIndexPairs[2 * i1];
        }
        for (i1 = 0; i1 < currentIdx; i1++) {
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &hc_emlrtBCI, &d_st);
          }
          indexPairsCell.data[b_i].f1[2 * i1 + 1] = b_varargin_2[i1];
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
      relativeIndexPairs.set_size(&ml_emlrtRTEI, &b_st, 2, i1);
      currentIdx = i1 << 1;
      for (i2 = 0; i2 < currentIdx; i2++) {
        relativeIndexPairs[i2] = 0U;
      }
      if (i1 != i) {
        emlrtIntegerCheckR2012b(totalMatches, &h_emlrtDCI, &b_st);
      }
      currentIdx = 0;
      for (b_loop_ub = 0; b_loop_ub < numIterations; b_loop_ub++) {
        if (b_loop_ub + 1 > numIterations) {
          emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, numIterations,
                                        &gc_emlrtBCI, &b_st);
        }
        N2 = static_cast<uint32_T>(currentIdx) +
             static_cast<uint32_T>(numMatches_data[b_loop_ub]);
        if (static_cast<uint32_T>(currentIdx) + 1U > N2) {
          i = 0;
          i2 = 0;
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
          if ((static_cast<int32_T>(N2) < 1) ||
              (static_cast<int32_T>(N2) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(N2), 1,
                                          static_cast<int32_T>(totalMatches),
                                          &yb_emlrtBCI, &b_st);
          }
          i2 = static_cast<int32_T>(N2);
        }
        if (b_loop_ub > indexPairsCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(
              b_loop_ub, 0, indexPairsCell.size[1] - 1, &ub_emlrtBCI, &b_st);
        }
        c_varargin_1[0] = 2;
        threshold = i2 - i;
        c_varargin_1[1] = threshold;
        emlrtSubAssignSizeCheckR2012b(&c_varargin_1[0], 2,
                                      indexPairsCell.data[b_loop_ub].f1.size(),
                                      2, &h_emlrtECI, &b_st);
        for (i2 = 0; i2 < threshold; i2++) {
          loop_ub = i + i2;
          relativeIndexPairs[2 * loop_ub] =
              indexPairsCell.data[b_loop_ub].f1[2 * i2];
          relativeIndexPairs[2 * loop_ub + 1] =
              indexPairsCell.data[b_loop_ub].f1[2 * i2 + 1];
        }
        if (static_cast<uint32_T>(currentIdx) + 1U > N2) {
          i = 1;
          i2 = 0;
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
          if ((static_cast<int32_T>(N2) < 1) ||
              (static_cast<int32_T>(N2) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(N2), 1,
                                          static_cast<int32_T>(totalMatches),
                                          &wb_emlrtBCI, &b_st);
          }
          i2 = static_cast<int32_T>(N2);
        }
        if (b_loop_ub > indexPairsCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(
              b_loop_ub, 0, indexPairsCell.size[1] - 1, &tb_emlrtBCI, &b_st);
        }
        i = (i2 - i) + 1;
        i2 = matchMetricCell.data[b_loop_ub].f1.size(1);
        if (i != i2) {
          emlrtSubAssignSizeCheck1dR2017a(i, i2, &g_emlrtECI, &b_st);
        }
        currentIdx = static_cast<int32_T>(N2);
      }
    }
    loop_ub = relativeIndexPairs.size(1);
    indexPairs.set_size(&ol_emlrtRTEI, &st, relativeIndexPairs.size(1), 2);
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        indexPairs[i1 + indexPairs.size(0) * i] =
            relativeIndexPairs[i + 2 * i1];
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (matchFeatures.cpp)
