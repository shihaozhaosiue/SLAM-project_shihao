//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// EncoderVocabularyTree.cpp
//
// Code generation for function 'EncoderVocabularyTree'
//

// Include files
#include "EncoderVocabularyTree.h"
#include "EncoderBinaryFeatures.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "histcounts.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include "string1.h"
#include "blas.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo dmb_emlrtRSI{
    229,                  // lineNo
    "iAssignRecursively", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pathName
};

static emlrtRSInfo emb_emlrtRSI{
    261,                  // lineNo
    "iAssignRecursively", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pathName
};

static emlrtRSInfo fmb_emlrtRSI{
    281,                  // lineNo
    "iAssignRecursively", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pathName
};

static emlrtRSInfo gmb_emlrtRSI{
    291,                  // lineNo
    "iAssignRecursively", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pathName
};

static emlrtDCInfo oc_emlrtDCI{
    212,                  // lineNo
    23,                   // colNo
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    1                                         // checkKind
};

static emlrtDCInfo pc_emlrtDCI{
    235,                  // lineNo
    27,                   // colNo
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    1                                         // checkKind
};

static emlrtRTEInfo mg_emlrtRTEI{
    244,                  // lineNo
    13,                   // colNo
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

static emlrtDCInfo qc_emlrtDCI{
    268,                  // lineNo
    31,                   // colNo
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    1                                         // checkKind
};

static emlrtRTEInfo ng_emlrtRTEI{
    288,                  // lineNo
    17,                   // colNo
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

static emlrtECInfo oe_emlrtECI{
    -1,                   // nDims
    286,                  // lineNo
    9,                    // colNo
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

static emlrtECInfo pe_emlrtECI{
    -1,                   // nDims
    234,                  // lineNo
    5,                    // colNo
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

static emlrtECInfo qe_emlrtECI{
    -1,                   // nDims
    265,                  // lineNo
    9,                    // colNo
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

static emlrtBCInfo fdb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    212,                  // lineNo
    23,                   // colNo
    "",                   // aName
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo gdb_emlrtBCI{
    0,                    // iFirst
    110,                  // iLast
    235,                  // lineNo
    27,                   // colNo
    "",                   // aName
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo hdb_emlrtBCI{
    0,                    // iFirst
    110,                  // iLast
    268,                  // lineNo
    31,                   // colNo
    "",                   // aName
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo idb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    242,                  // lineNo
    42,                   // colNo
    "",                   // aName
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo jdb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    242,                  // lineNo
    77,                   // colNo
    "",                   // aName
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo kdb_emlrtBCI{
    0,                    // iFirst
    110,                  // iLast
    245,                  // lineNo
    31,                   // colNo
    "",                   // aName
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

static emlrtDCInfo rc_emlrtDCI{
    245,                  // lineNo
    31,                   // colNo
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    1                                         // checkKind
};

static emlrtBCInfo ldb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    230,                  // lineNo
    46,                   // colNo
    "",                   // aName
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo mdb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    230,                  // lineNo
    24,                   // colNo
    "",                   // aName
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

static emlrtDCInfo sc_emlrtDCI{
    230,                  // lineNo
    24,                   // colNo
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    1                                         // checkKind
};

static emlrtBCInfo ndb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    234,                  // lineNo
    17,                   // colNo
    "",                   // aName
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo odb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    282,                  // lineNo
    50,                   // colNo
    "",                   // aName
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo pdb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    262,                  // lineNo
    50,                   // colNo
    "",                   // aName
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo qdb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    282,                  // lineNo
    28,                   // colNo
    "",                   // aName
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

static emlrtDCInfo tc_emlrtDCI{
    282,                  // lineNo
    28,                   // colNo
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    1                                         // checkKind
};

static emlrtBCInfo rdb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    262,                  // lineNo
    28,                   // colNo
    "",                   // aName
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

static emlrtDCInfo uc_emlrtDCI{
    262,                  // lineNo
    28,                   // colNo
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    1                                         // checkKind
};

static emlrtBCInfo sdb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    265,                  // lineNo
    21,                   // colNo
    "",                   // aName
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

static emlrtBCInfo tdb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    286,                  // lineNo
    21,                   // colNo
    "",                   // aName
    "iAssignRecursively", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m", // pName
    0                                         // checkKind
};

static emlrtRTEInfo ex_emlrtRTEI{
    65,                // lineNo
    13,                // colNo
    "EncoderStrategy", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bof\\EncoderStrategy.m" // pName
};

static emlrtRTEInfo fx_emlrtRTEI{
    68,                // lineNo
    17,                // colNo
    "EncoderStrategy", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "bof\\EncoderStrategy.m" // pName
};

static emlrtRTEInfo bwb_emlrtRTEI{
    207,                     // lineNo
    34,                      // colNo
    "EncoderVocabularyTree", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

static emlrtRTEInfo cwb_emlrtRTEI{
    282,                     // lineNo
    41,                      // colNo
    "EncoderVocabularyTree", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

static emlrtRTEInfo dwb_emlrtRTEI{
    285,                     // lineNo
    9,                       // colNo
    "EncoderVocabularyTree", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

static emlrtRTEInfo ewb_emlrtRTEI{
    289,                     // lineNo
    29,                      // colNo
    "EncoderVocabularyTree", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

static emlrtRTEInfo fwb_emlrtRTEI{
    262,                     // lineNo
    41,                      // colNo
    "EncoderVocabularyTree", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

static emlrtRTEInfo gwb_emlrtRTEI{
    265,                     // lineNo
    9,                       // colNo
    "EncoderVocabularyTree", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

static emlrtRTEInfo hwb_emlrtRTEI{
    230,                     // lineNo
    37,                      // colNo
    "EncoderVocabularyTree", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

static emlrtRTEInfo iwb_emlrtRTEI{
    234,                     // lineNo
    5,                       // colNo
    "EncoderVocabularyTree", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bof\\EncoderVocabularyTree.m" // pName
};

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace bof {
void EncoderVocabularyTree::iAssignRecursively(
    const emlrtStack *sp, const array<cell_wrap_16, 1U> &vocabulary,
    const real_T vocabSizes[111], array<real_T, 1U> &assignments,
    const array<uint8_T, 2U> &features,
    const array<boolean_T, 1U> &whichFeatures, real_T *offset,
    real_T curNodeIdx, real_T curLevel, real_T numLevels, real_T bFactor,
    const array<real_T, 1U> &leafNodes)
{
  array<int32_T, 1U> b_r;
  array<uint32_T, 1U> aidx;
  array<uint32_T, 1U> whichBranch;
  array<uint8_T, 2U> b_features;
  array<boolean_T, 1U> b_whichBranch;
  emlrtStack st;
  int32_T i;
  int32_T i1;
  uint8_T uv[320];
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  i = static_cast<int32_T>(muDoubleScalarFloor(curNodeIdx));
  if (curNodeIdx != i) {
    emlrtIntegerCheckR2012b(curNodeIdx, &oc_emlrtDCI, (emlrtConstCTX)sp);
  }
  i1 = static_cast<int32_T>(curNodeIdx);
  if ((i1 - 1 < 0) || (i1 - 1 > vocabulary.size(0) - 1)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(curNodeIdx) - 1, 0,
                                  vocabulary.size(0) - 1, &fdb_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (curLevel == numLevels) {
    int32_T end_tmp;
    int32_T trueCount;
    end_tmp = whichFeatures.size(0);
    trueCount = 0;
    for (int32_T b_i{0}; b_i < end_tmp; b_i++) {
      if (whichFeatures[b_i]) {
        trueCount++;
      }
    }
    b_r.set_size(&bwb_emlrtRTEI, sp, trueCount);
    trueCount = 0;
    for (int32_T b_i{0}; b_i < end_tmp; b_i++) {
      if (whichFeatures[b_i]) {
        b_r[trueCount] = b_i;
        trueCount++;
      }
    }
    trueCount = b_r.size(0);
    b_features.set_size(&hwb_emlrtRTEI, sp, b_r.size(0), 32);
    for (int32_T i2{0}; i2 < 32; i2++) {
      for (int32_T b_i{0}; b_i < trueCount; b_i++) {
        if (b_r[b_i] > features.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_r[b_i], 0, features.size(0) - 1,
                                        &ldb_emlrtBCI, (emlrtConstCTX)sp);
        }
        b_features[b_i + b_features.size(0) * i2] =
            features[b_r[b_i] + features.size(0) * i2];
      }
    }
    if (i1 != i) {
      emlrtIntegerCheckR2012b(curNodeIdx, &sc_emlrtDCI, (emlrtConstCTX)sp);
    }
    if ((i1 - 1 < 0) || (i1 - 1 > vocabulary.size(0) - 1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(curNodeIdx) - 1, 0,
                                    vocabulary.size(0) - 1, &mdb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    std::copy(&vocabulary[static_cast<int32_T>(curNodeIdx) - 1].f1[0],
              &vocabulary[static_cast<int32_T>(curNodeIdx) - 1].f1[320],
              &uv[0]);
    st.site = &dmb_emlrtRSI;
    EncoderBinaryFeatures::assignVisualWords(st, uv, b_features, aidx);
    end_tmp = assignments.size(0);
    for (int32_T i2{0}; i2 < trueCount; i2++) {
      if (b_r[i2] > end_tmp - 1) {
        emlrtDynamicBoundsCheckR2012b(b_r[i2], 0, end_tmp - 1, &ndb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
    }
    end_tmp = aidx.size(0);
    whichBranch.set_size(&iwb_emlrtRTEI, sp, aidx.size(0));
    for (int32_T i2{0}; i2 < end_tmp; i2++) {
      real_T d;
      uint32_T empty;
      d = muDoubleScalarRound(static_cast<real_T>(aidx[i2]) + *offset);
      if (d < 4.294967296E+9) {
        if (d >= 0.0) {
          empty = static_cast<uint32_T>(d);
        } else {
          empty = 0U;
        }
      } else if (d >= 4.294967296E+9) {
        empty = MAX_uint32_T;
      } else {
        empty = 0U;
      }
      whichBranch[i2] = empty;
    }
    emlrtSubAssignSizeCheckR2012b(b_r.size(), 1, whichBranch.size(), 1,
                                  &pe_emlrtECI, (emlrtCTX)sp);
    for (int32_T i2{0}; i2 < trueCount; i2++) {
      assignments[b_r[i2]] = whichBranch[i2];
    }
    if (i1 != i) {
      emlrtIntegerCheckR2012b(curNodeIdx, &pc_emlrtDCI, (emlrtConstCTX)sp);
    }
    if ((i1 - 1 < 0) || (i1 - 1 > 110)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(curNodeIdx) - 1, 0,
                                    110, &gdb_emlrtBCI, (emlrtConstCTX)sp);
    }
    *offset += vocabSizes[i1 - 1];
  } else {
    real_T childNodeIdx;
    real_T d;
    int32_T i2;
    uint32_T empty;
    empty = 0U;
    if ((static_cast<int32_T>(curLevel - 1.0) < 1) ||
        (static_cast<int32_T>(curLevel - 1.0) > leafNodes.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(curLevel - 1.0), 1,
                                    leafNodes.size(0), &idb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(curLevel) < 1) ||
        (static_cast<int32_T>(curLevel) > leafNodes.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(curLevel), 1,
                                    leafNodes.size(0), &jdb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    childNodeIdx =
        (curNodeIdx - leafNodes[static_cast<int32_T>(curLevel - 1.0) - 1]) *
            bFactor +
        leafNodes[static_cast<int32_T>(curLevel) - 1];
    i2 = static_cast<int32_T>(bFactor);
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, bFactor, mxDOUBLE_CLASS,
                                  static_cast<int32_T>(bFactor), &mg_emlrtRTEI,
                                  (emlrtConstCTX)sp);
    for (int32_T b_i{0}; b_i < i2; b_i++) {
      d = (childNodeIdx + (static_cast<real_T>(b_i) + 1.0)) - 1.0;
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &rc_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(d) - 1 < 0) ||
          (static_cast<int32_T>(d) - 1 > 110)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d) - 1, 0, 110,
                                      &kdb_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (vocabSizes[static_cast<int32_T>(d) - 1] == 0.0) {
        empty++;
      }
    }
    if (empty == bFactor) {
      int32_T end_tmp;
      int32_T trueCount;
      end_tmp = whichFeatures.size(0);
      trueCount = 0;
      for (int32_T b_i{0}; b_i < end_tmp; b_i++) {
        if (whichFeatures[b_i]) {
          trueCount++;
        }
      }
      b_r.set_size(&bwb_emlrtRTEI, sp, trueCount);
      trueCount = 0;
      for (int32_T b_i{0}; b_i < end_tmp; b_i++) {
        if (whichFeatures[b_i]) {
          b_r[trueCount] = b_i;
          trueCount++;
        }
      }
      trueCount = b_r.size(0);
      b_features.set_size(&fwb_emlrtRTEI, sp, b_r.size(0), 32);
      for (i2 = 0; i2 < 32; i2++) {
        for (int32_T b_i{0}; b_i < trueCount; b_i++) {
          if (b_r[b_i] > features.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_r[b_i], 0, features.size(0) - 1,
                                          &pdb_emlrtBCI, (emlrtConstCTX)sp);
          }
          b_features[b_i + b_features.size(0) * i2] =
              features[b_r[b_i] + features.size(0) * i2];
        }
      }
      if (i1 != i) {
        emlrtIntegerCheckR2012b(curNodeIdx, &uc_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((i1 - 1 < 0) || (i1 - 1 > vocabulary.size(0) - 1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(curNodeIdx) - 1, 0,
                                      vocabulary.size(0) - 1, &rdb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      std::copy(&vocabulary[static_cast<int32_T>(curNodeIdx) - 1].f1[0],
                &vocabulary[static_cast<int32_T>(curNodeIdx) - 1].f1[320],
                &uv[0]);
      st.site = &emb_emlrtRSI;
      EncoderBinaryFeatures::assignVisualWords(st, uv, b_features, aidx);
      end_tmp = assignments.size(0);
      for (i2 = 0; i2 < trueCount; i2++) {
        if (b_r[i2] > end_tmp - 1) {
          emlrtDynamicBoundsCheckR2012b(b_r[i2], 0, end_tmp - 1, &sdb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      end_tmp = aidx.size(0);
      whichBranch.set_size(&gwb_emlrtRTEI, sp, aidx.size(0));
      for (i2 = 0; i2 < end_tmp; i2++) {
        d = muDoubleScalarRound(static_cast<real_T>(aidx[i2]) + *offset);
        if (d < 4.294967296E+9) {
          if (d >= 0.0) {
            empty = static_cast<uint32_T>(d);
          } else {
            empty = 0U;
          }
        } else if (d >= 4.294967296E+9) {
          empty = MAX_uint32_T;
        } else {
          empty = 0U;
        }
        whichBranch[i2] = empty;
      }
      emlrtSubAssignSizeCheckR2012b(b_r.size(), 1, whichBranch.size(), 1,
                                    &qe_emlrtECI, (emlrtCTX)sp);
      for (i2 = 0; i2 < trueCount; i2++) {
        assignments[b_r[i2]] = whichBranch[i2];
      }
      if (i1 != i) {
        emlrtIntegerCheckR2012b(curNodeIdx, &qc_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((i1 - 1 < 0) || (i1 - 1 > 110)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(curNodeIdx) - 1, 0,
                                      110, &hdb_emlrtBCI, (emlrtConstCTX)sp);
      }
      *offset += vocabSizes[i1 - 1];
    } else {
      int32_T end_tmp;
      int32_T trueCount;
      end_tmp = whichFeatures.size(0);
      trueCount = 0;
      for (int32_T b_i{0}; b_i < end_tmp; b_i++) {
        if (whichFeatures[b_i]) {
          trueCount++;
        }
      }
      b_r.set_size(&bwb_emlrtRTEI, sp, trueCount);
      trueCount = 0;
      for (int32_T b_i{0}; b_i < end_tmp; b_i++) {
        if (whichFeatures[b_i]) {
          b_r[trueCount] = b_i;
          trueCount++;
        }
      }
      trueCount = b_r.size(0);
      b_features.set_size(&cwb_emlrtRTEI, sp, b_r.size(0), 32);
      for (int32_T b_i{0}; b_i < 32; b_i++) {
        for (int32_T i3{0}; i3 < trueCount; i3++) {
          if (b_r[i3] > features.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_r[i3], 0, features.size(0) - 1,
                                          &odb_emlrtBCI, (emlrtConstCTX)sp);
          }
          b_features[i3 + b_features.size(0) * b_i] =
              features[b_r[i3] + features.size(0) * b_i];
        }
      }
      if (i1 != i) {
        emlrtIntegerCheckR2012b(curNodeIdx, &tc_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((i1 - 1 < 0) || (i1 - 1 > vocabulary.size(0) - 1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(curNodeIdx) - 1, 0,
                                      vocabulary.size(0) - 1, &qdb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      std::copy(&vocabulary[static_cast<int32_T>(curNodeIdx) - 1].f1[0],
                &vocabulary[static_cast<int32_T>(curNodeIdx) - 1].f1[320],
                &uv[0]);
      st.site = &fmb_emlrtRSI;
      EncoderBinaryFeatures::assignVisualWords(st, uv, b_features, aidx);
      whichBranch.set_size(&dwb_emlrtRTEI, sp, whichFeatures.size(0));
      for (i = 0; i < end_tmp; i++) {
        whichBranch[i] = 0U;
      }
      for (i = 0; i < trueCount; i++) {
        if (b_r[i] > whichFeatures.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_r[i], 0, whichFeatures.size(0) - 1,
                                        &tdb_emlrtBCI, (emlrtConstCTX)sp);
        }
      }
      emlrtSubAssignSizeCheckR2012b(b_r.size(), 1, aidx.size(), 1, &oe_emlrtECI,
                                    (emlrtCTX)sp);
      for (i = 0; i < trueCount; i++) {
        whichBranch[b_r[i]] = aidx[i];
      }
      emlrtForLoopVectorCheckR2021a(1.0, 1.0, bFactor, mxDOUBLE_CLASS,
                                    static_cast<int32_T>(bFactor),
                                    &ng_emlrtRTEI, (emlrtConstCTX)sp);
      for (int32_T b_i{0}; b_i < i2; b_i++) {
        b_whichBranch.set_size(&ewb_emlrtRTEI, sp, end_tmp);
        for (i = 0; i < end_tmp; i++) {
          b_whichBranch[i] =
              (whichBranch[i] == static_cast<uint32_T>(b_i) + 1U);
        }
        st.site = &gmb_emlrtRSI;
        EncoderVocabularyTree::iAssignRecursively(
            &st, vocabulary, vocabSizes, assignments, features, b_whichBranch,
            offset, (childNodeIdx + (static_cast<real_T>(b_i) + 1.0)) - 1.0,
            curLevel + 1.0, numLevels, bFactor, leafNodes);
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void EncoderVocabularyTree::b_iAssignRecursively(
    const emlrtStack *sp, const array<cell_wrap_16, 1U> &vocabulary,
    const real_T vocabSizes[111], array<real_T, 1U> &assignments,
    const array<uint8_T, 2U> &features,
    const array<boolean_T, 1U> &whichFeatures, real_T *offset,
    real_T curNodeIdx, real_T curLevel, real_T numLevels, real_T bFactor,
    const array<real_T, 1U> &leafNodes)
{
  array<int32_T, 1U> b_r;
  array<uint32_T, 1U> aidx;
  array<uint32_T, 1U> whichBranch;
  array<uint8_T, 2U> b_features;
  array<boolean_T, 1U> b_whichBranch;
  emlrtStack st;
  int32_T i;
  int32_T i1;
  uint8_T uv[320];
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  i = static_cast<int32_T>(muDoubleScalarFloor(curNodeIdx));
  if (curNodeIdx != i) {
    emlrtIntegerCheckR2012b(curNodeIdx, &oc_emlrtDCI, (emlrtConstCTX)sp);
  }
  i1 = static_cast<int32_T>(curNodeIdx);
  if ((i1 - 1 < 0) || (i1 - 1 > vocabulary.size(0) - 1)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(curNodeIdx) - 1, 0,
                                  vocabulary.size(0) - 1, &fdb_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (curLevel == numLevels) {
    int32_T loop_ub;
    int32_T trueCount;
    loop_ub = whichFeatures.size(0);
    trueCount = 0;
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (whichFeatures[b_i]) {
        trueCount++;
      }
    }
    b_r.set_size(&bwb_emlrtRTEI, sp, trueCount);
    trueCount = 0;
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (whichFeatures[b_i]) {
        b_r[trueCount] = b_i;
        trueCount++;
      }
    }
    trueCount = b_r.size(0);
    loop_ub = features.size(1);
    b_features.set_size(&hwb_emlrtRTEI, sp, b_r.size(0), features.size(1));
    for (int32_T i2{0}; i2 < loop_ub; i2++) {
      for (int32_T b_i{0}; b_i < trueCount; b_i++) {
        if (b_r[b_i] > features.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_r[b_i], 0, features.size(0) - 1,
                                        &ldb_emlrtBCI, (emlrtConstCTX)sp);
        }
        b_features[b_i + b_features.size(0) * i2] =
            features[b_r[b_i] + features.size(0) * i2];
      }
    }
    if (i1 != i) {
      emlrtIntegerCheckR2012b(curNodeIdx, &sc_emlrtDCI, (emlrtConstCTX)sp);
    }
    if ((i1 - 1 < 0) || (i1 - 1 > vocabulary.size(0) - 1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(curNodeIdx) - 1, 0,
                                    vocabulary.size(0) - 1, &mdb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    std::copy(&vocabulary[static_cast<int32_T>(curNodeIdx) - 1].f1[0],
              &vocabulary[static_cast<int32_T>(curNodeIdx) - 1].f1[320],
              &uv[0]);
    st.site = &dmb_emlrtRSI;
    EncoderBinaryFeatures::b_assignVisualWords(st, uv, b_features, aidx);
    loop_ub = assignments.size(0);
    for (int32_T i2{0}; i2 < trueCount; i2++) {
      if (b_r[i2] > loop_ub - 1) {
        emlrtDynamicBoundsCheckR2012b(b_r[i2], 0, loop_ub - 1, &ndb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
    }
    loop_ub = aidx.size(0);
    whichBranch.set_size(&iwb_emlrtRTEI, sp, aidx.size(0));
    for (int32_T i2{0}; i2 < loop_ub; i2++) {
      real_T d;
      uint32_T empty;
      d = muDoubleScalarRound(static_cast<real_T>(aidx[i2]) + *offset);
      if (d < 4.294967296E+9) {
        if (d >= 0.0) {
          empty = static_cast<uint32_T>(d);
        } else {
          empty = 0U;
        }
      } else if (d >= 4.294967296E+9) {
        empty = MAX_uint32_T;
      } else {
        empty = 0U;
      }
      whichBranch[i2] = empty;
    }
    emlrtSubAssignSizeCheckR2012b(b_r.size(), 1, whichBranch.size(), 1,
                                  &pe_emlrtECI, (emlrtCTX)sp);
    for (int32_T i2{0}; i2 < trueCount; i2++) {
      assignments[b_r[i2]] = whichBranch[i2];
    }
    if (i1 != i) {
      emlrtIntegerCheckR2012b(curNodeIdx, &pc_emlrtDCI, (emlrtConstCTX)sp);
    }
    if ((i1 - 1 < 0) || (i1 - 1 > 110)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(curNodeIdx) - 1, 0,
                                    110, &gdb_emlrtBCI, (emlrtConstCTX)sp);
    }
    *offset += vocabSizes[i1 - 1];
  } else {
    real_T childNodeIdx;
    real_T d;
    int32_T i2;
    uint32_T empty;
    empty = 0U;
    if ((static_cast<int32_T>(curLevel - 1.0) < 1) ||
        (static_cast<int32_T>(curLevel - 1.0) > leafNodes.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(curLevel - 1.0), 1,
                                    leafNodes.size(0), &idb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(curLevel) < 1) ||
        (static_cast<int32_T>(curLevel) > leafNodes.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(curLevel), 1,
                                    leafNodes.size(0), &jdb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    childNodeIdx =
        (curNodeIdx - leafNodes[static_cast<int32_T>(curLevel - 1.0) - 1]) *
            bFactor +
        leafNodes[static_cast<int32_T>(curLevel) - 1];
    i2 = static_cast<int32_T>(bFactor);
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, bFactor, mxDOUBLE_CLASS,
                                  static_cast<int32_T>(bFactor), &mg_emlrtRTEI,
                                  (emlrtConstCTX)sp);
    for (int32_T b_i{0}; b_i < i2; b_i++) {
      d = (childNodeIdx + (static_cast<real_T>(b_i) + 1.0)) - 1.0;
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &rc_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(d) - 1 < 0) ||
          (static_cast<int32_T>(d) - 1 > 110)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d) - 1, 0, 110,
                                      &kdb_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (vocabSizes[static_cast<int32_T>(d) - 1] == 0.0) {
        empty++;
      }
    }
    if (empty == bFactor) {
      int32_T loop_ub;
      int32_T trueCount;
      loop_ub = whichFeatures.size(0);
      trueCount = 0;
      for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
        if (whichFeatures[b_i]) {
          trueCount++;
        }
      }
      b_r.set_size(&bwb_emlrtRTEI, sp, trueCount);
      trueCount = 0;
      for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
        if (whichFeatures[b_i]) {
          b_r[trueCount] = b_i;
          trueCount++;
        }
      }
      trueCount = b_r.size(0);
      loop_ub = features.size(1);
      b_features.set_size(&fwb_emlrtRTEI, sp, b_r.size(0), features.size(1));
      for (i2 = 0; i2 < loop_ub; i2++) {
        for (int32_T b_i{0}; b_i < trueCount; b_i++) {
          if (b_r[b_i] > features.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_r[b_i], 0, features.size(0) - 1,
                                          &pdb_emlrtBCI, (emlrtConstCTX)sp);
          }
          b_features[b_i + b_features.size(0) * i2] =
              features[b_r[b_i] + features.size(0) * i2];
        }
      }
      if (i1 != i) {
        emlrtIntegerCheckR2012b(curNodeIdx, &uc_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((i1 - 1 < 0) || (i1 - 1 > vocabulary.size(0) - 1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(curNodeIdx) - 1, 0,
                                      vocabulary.size(0) - 1, &rdb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      std::copy(&vocabulary[static_cast<int32_T>(curNodeIdx) - 1].f1[0],
                &vocabulary[static_cast<int32_T>(curNodeIdx) - 1].f1[320],
                &uv[0]);
      st.site = &emb_emlrtRSI;
      EncoderBinaryFeatures::b_assignVisualWords(st, uv, b_features, aidx);
      loop_ub = assignments.size(0);
      for (i2 = 0; i2 < trueCount; i2++) {
        if (b_r[i2] > loop_ub - 1) {
          emlrtDynamicBoundsCheckR2012b(b_r[i2], 0, loop_ub - 1, &sdb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      loop_ub = aidx.size(0);
      whichBranch.set_size(&gwb_emlrtRTEI, sp, aidx.size(0));
      for (i2 = 0; i2 < loop_ub; i2++) {
        d = muDoubleScalarRound(static_cast<real_T>(aidx[i2]) + *offset);
        if (d < 4.294967296E+9) {
          if (d >= 0.0) {
            empty = static_cast<uint32_T>(d);
          } else {
            empty = 0U;
          }
        } else if (d >= 4.294967296E+9) {
          empty = MAX_uint32_T;
        } else {
          empty = 0U;
        }
        whichBranch[i2] = empty;
      }
      emlrtSubAssignSizeCheckR2012b(b_r.size(), 1, whichBranch.size(), 1,
                                    &qe_emlrtECI, (emlrtCTX)sp);
      for (i2 = 0; i2 < trueCount; i2++) {
        assignments[b_r[i2]] = whichBranch[i2];
      }
      if (i1 != i) {
        emlrtIntegerCheckR2012b(curNodeIdx, &qc_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((i1 - 1 < 0) || (i1 - 1 > 110)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(curNodeIdx) - 1, 0,
                                      110, &hdb_emlrtBCI, (emlrtConstCTX)sp);
      }
      *offset += vocabSizes[i1 - 1];
    } else {
      int32_T end_tmp;
      int32_T loop_ub;
      int32_T trueCount;
      end_tmp = whichFeatures.size(0);
      trueCount = 0;
      for (int32_T b_i{0}; b_i < end_tmp; b_i++) {
        if (whichFeatures[b_i]) {
          trueCount++;
        }
      }
      b_r.set_size(&bwb_emlrtRTEI, sp, trueCount);
      trueCount = 0;
      for (int32_T b_i{0}; b_i < end_tmp; b_i++) {
        if (whichFeatures[b_i]) {
          b_r[trueCount] = b_i;
          trueCount++;
        }
      }
      trueCount = b_r.size(0);
      loop_ub = features.size(1);
      b_features.set_size(&cwb_emlrtRTEI, sp, b_r.size(0), features.size(1));
      for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
        for (int32_T i3{0}; i3 < trueCount; i3++) {
          if (b_r[i3] > features.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_r[i3], 0, features.size(0) - 1,
                                          &odb_emlrtBCI, (emlrtConstCTX)sp);
          }
          b_features[i3 + b_features.size(0) * b_i] =
              features[b_r[i3] + features.size(0) * b_i];
        }
      }
      if (i1 != i) {
        emlrtIntegerCheckR2012b(curNodeIdx, &tc_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((i1 - 1 < 0) || (i1 - 1 > vocabulary.size(0) - 1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(curNodeIdx) - 1, 0,
                                      vocabulary.size(0) - 1, &qdb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      std::copy(&vocabulary[static_cast<int32_T>(curNodeIdx) - 1].f1[0],
                &vocabulary[static_cast<int32_T>(curNodeIdx) - 1].f1[320],
                &uv[0]);
      st.site = &fmb_emlrtRSI;
      EncoderBinaryFeatures::b_assignVisualWords(st, uv, b_features, aidx);
      whichBranch.set_size(&dwb_emlrtRTEI, sp, whichFeatures.size(0));
      for (i = 0; i < end_tmp; i++) {
        whichBranch[i] = 0U;
      }
      for (i = 0; i < trueCount; i++) {
        if (b_r[i] > whichFeatures.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_r[i], 0, whichFeatures.size(0) - 1,
                                        &tdb_emlrtBCI, (emlrtConstCTX)sp);
        }
      }
      emlrtSubAssignSizeCheckR2012b(b_r.size(), 1, aidx.size(), 1, &oe_emlrtECI,
                                    (emlrtCTX)sp);
      for (i = 0; i < trueCount; i++) {
        whichBranch[b_r[i]] = aidx[i];
      }
      emlrtForLoopVectorCheckR2021a(1.0, 1.0, bFactor, mxDOUBLE_CLASS,
                                    static_cast<int32_T>(bFactor),
                                    &ng_emlrtRTEI, (emlrtConstCTX)sp);
      for (int32_T b_i{0}; b_i < i2; b_i++) {
        b_whichBranch.set_size(&ewb_emlrtRTEI, sp, end_tmp);
        for (i = 0; i < end_tmp; i++) {
          b_whichBranch[i] =
              (whichBranch[i] == static_cast<uint32_T>(b_i) + 1U);
        }
        st.site = &gmb_emlrtRSI;
        EncoderVocabularyTree::b_iAssignRecursively(
            &st, vocabulary, vocabSizes, assignments, features, b_whichBranch,
            offset, (childNodeIdx + (static_cast<real_T>(b_i) + 1.0)) - 1.0,
            curLevel + 1.0, numLevels, bFactor, leafNodes);
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void EncoderVocabularyTree::encode(const emlrtStack &sp,
                                   const array<uint8_T, 2U> &features,
                                   array<real32_T, 2U> &featureVector) const
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  array<real_T, 2U> h;
  array<real_T, 2U> y;
  array<real_T, 1U> assignments;
  array<real_T, 1U> leafNodes;
  array<uint32_T, 1U> whichBranch;
  array<boolean_T, 1U> b_whichBranch;
  emlrtStack b_st;
  emlrtStack st;
  real_T b;
  real_T offset;
  int32_T b_i;
  int32_T i;
  int32_T loop_ub;
  int32_T vectorUB;
  uint8_T uv[320];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &vlb_emlrtRSI;
  loop_ub = features.size(0);
  assignments.set_size(&ax_emlrtRTEI, &st, features.size(0));
  for (i = 0; i < loop_ub; i++) {
    assignments[i] = 0.0;
  }
  if (Vocabulary.size(0) > 1) {
    b = NumLevels - 1.0;
    if (!(b >= 0.0)) {
      emlrtNonNegativeCheckR2012b(b, &u_emlrtDCI, &st);
    }
    if (b != static_cast<int32_T>(muDoubleScalarFloor(b))) {
      emlrtIntegerCheckR2012b(b, &t_emlrtDCI, &st);
    }
    leafNodes.set_size(&cx_emlrtRTEI, &st, static_cast<int32_T>(b));
    if (!(b >= 0.0)) {
      emlrtNonNegativeCheckR2012b(b, &u_emlrtDCI, &st);
    }
    if (b != static_cast<int32_T>(muDoubleScalarFloor(b))) {
      emlrtIntegerCheckR2012b(b, &t_emlrtDCI, &st);
    }
    loop_ub = static_cast<int32_T>(b);
    for (i = 0; i < loop_ub; i++) {
      leafNodes[i] = 0.0;
    }
    i = static_cast<int32_T>(NumLevels - 1.0);
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &ii_emlrtBCI, &st);
    }
    leafNodes[0] = 2.0;
    i = static_cast<int32_T>(b - 1.0);
    emlrtForLoopVectorCheckR2021a(2.0, 1.0, b, mxDOUBLE_CLASS,
                                  static_cast<int32_T>(b - 1.0), &cd_emlrtRTEI,
                                  &st);
    for (loop_ub = 0; loop_ub < i; loop_ub++) {
      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           leafNodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U), 1,
            leafNodes.size(0), &ki_emlrtBCI, &st);
      }
      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 2U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 2U) >
           leafNodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 2U), 1,
            leafNodes.size(0), &li_emlrtBCI, &st);
      }
      leafNodes[loop_ub + 1] =
          leafNodes[loop_ub] +
          muDoubleScalarPower(
              BranchingFactor,
              static_cast<real_T>(static_cast<uint32_T>(loop_ub) + 1U));
    }
  } else {
    leafNodes.set_size(&bx_emlrtRTEI, &st, 1);
    leafNodes[0] = 1.0;
  }
  offset = 0.0;
  i = Vocabulary.size(0) - 1;
  if (i < 0) {
    emlrtDynamicBoundsCheckR2012b(0, 0, i, &ji_emlrtBCI, &st);
  }
  std::copy(&Vocabulary[0].f1[0], &Vocabulary[0].f1[320], &uv[0]);
  b_st.site = &amb_emlrtRSI;
  EncoderBinaryFeatures::assignVisualWords(b_st, uv, features, whichBranch);
  if (Vocabulary.size(0) == 1) {
    loop_ub = whichBranch.size(0);
    assignments.set_size(&ax_emlrtRTEI, &st, whichBranch.size(0));
    for (i = 0; i < loop_ub; i++) {
      assignments[i] = whichBranch[i];
    }
  } else {
    b = BranchingFactor;
    i = static_cast<int32_T>(b);
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, b, mxDOUBLE_CLASS,
                                  static_cast<int32_T>(b), &dd_emlrtRTEI, &st);
    for (b_i = 0; b_i < i; b_i++) {
      loop_ub = whichBranch.size(0);
      b_whichBranch.set_size(&dx_emlrtRTEI, &st, whichBranch.size(0));
      for (vectorUB = 0; vectorUB < loop_ub; vectorUB++) {
        b_whichBranch[vectorUB] =
            (whichBranch[vectorUB] == static_cast<uint32_T>(b_i) + 1U);
      }
      b_st.site = &bmb_emlrtRSI;
      EncoderVocabularyTree::iAssignRecursively(
          &b_st, Vocabulary, VocabularySizes, assignments, features,
          b_whichBranch, &offset, (static_cast<real_T>(b_i) + 1.0) + 1.0, 2.0,
          NumLevels, BranchingFactor, leafNodes);
    }
  }
  b = VocabularySize + 1.0;
  if (muDoubleScalarIsNaN(b)) {
    y.set_size(&wm_emlrtRTEI, &sp, 1, 1);
    y[0] = rtNaN;
  } else if (b < 1.0) {
    y.set_size(&wm_emlrtRTEI, &sp, 1, 0);
  } else {
    y.set_size(&wm_emlrtRTEI, &sp, 1, static_cast<int32_T>(b - 1.0) + 1);
    loop_ub = static_cast<int32_T>(b - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      y[i] = static_cast<real_T>(i) + 1.0;
    }
  }
  st.site = &wlb_emlrtRSI;
  histcounts(st, assignments, y, h);
  loop_ub = h.size(1);
  featureVector.set_size(&ex_emlrtRTEI, &sp, 1, h.size(1));
  for (i = 0; i < loop_ub; i++) {
    featureVector[i] = static_cast<real32_T>(h[i]);
  }
  st.site = &xlb_emlrtRSI;
  if (::coder::internal::b_strcmp(st, Normalization)) {
    real32_T b_y;
    n_t = (ptrdiff_t)featureVector.size(1);
    incx_t = (ptrdiff_t)1;
    b_y = snrm2(&n_t, &featureVector[0], &incx_t);
    featureVector.set_size(&fx_emlrtRTEI, &sp, 1, featureVector.size(1));
    loop_ub = featureVector.size(1) - 1;
    b_i = (featureVector.size(1) / 4) << 2;
    vectorUB = b_i - 4;
    for (i = 0; i <= vectorUB; i += 4) {
      __m128 b_r;
      b_r = _mm_loadu_ps(&featureVector[i]);
      _mm_storeu_ps(&featureVector[i],
                    _mm_div_ps(b_r, _mm_set1_ps(b_y + 1.1920929E-7F)));
    }
    for (i = b_i; i <= loop_ub; i++) {
      featureVector[i] = featureVector[i] / (b_y + 1.1920929E-7F);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace bof
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (EncoderVocabularyTree.cpp)
