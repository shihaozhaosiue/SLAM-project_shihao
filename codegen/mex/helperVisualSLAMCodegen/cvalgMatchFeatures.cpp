//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// cvalgMatchFeatures.cpp
//
// Code generation for function 'cvalgMatchFeatures'
//

// Include files
#include "cvalgMatchFeatures.h"
#include "colon.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "log2.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sub2ind.h"
#include "sum.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "cvstCG_ComputeMetric.h"
#include "mwmathutil.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo ph_emlrtRSI{
    236,                // lineNo
    "exhaustiveSearch", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

static emlrtRSInfo qh_emlrtRSI{
    249,                // lineNo
    "exhaustiveSearch", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

static emlrtRSInfo th_emlrtRSI{
    267,                    // lineNo
    "findNearestNeighbors", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

static emlrtRSInfo uh_emlrtRSI{
    270,                    // lineNo
    "findNearestNeighbors", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

static emlrtRSInfo ei_emlrtRSI{
    288,             // lineNo
    "unaryMinOrMax", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRSInfo fi_emlrtRSI{
    381,                     // lineNo
    "unaryMinOrMaxDispatch", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRSInfo gi_emlrtRSI{
    455,          // lineNo
    "minOrMax2D", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRSInfo kj_emlrtRSI{
    336,                      // lineNo
    "removeAmbiguousMatches", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

static emlrtRSInfo lj_emlrtRSI{
    353,                 // lineNo
    "findUniqueIndices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

static emlrtRSInfo mj_emlrtRSI{
    449,          // lineNo
    "minOrMax2D", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRSInfo nj_emlrtRSI{
    533,                         // lineNo
    "minOrMax2DColumnMajorDim1", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRSInfo oj_emlrtRSI{
    531,                         // lineNo
    "minOrMax2DColumnMajorDim1", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRTEInfo l_emlrtRTEI{
    90,              // lineNo
    27,              // colNo
    "unaryMinOrMax", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pName
};

static emlrtBCInfo jc_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    342,                      // lineNo
    27,                       // colNo
    "",                       // aName
    "removeAmbiguousMatches", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo lc_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    342,                      // lineNo
    29,                       // colNo
    "",                       // aName
    "removeAmbiguousMatches", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo oc_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    341,                      // lineNo
    29,                       // colNo
    "",                       // aName
    "removeAmbiguousMatches", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

static emlrtECInfo i_emlrtECI{
    -1,            // nDims
    37,            // lineNo
    14,            // colNo
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m" // pName
};

static emlrtECInfo j_emlrtECI{
    -1,            // nDims
    28,            // lineNo
    10,            // colNo
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m" // pName
};

static emlrtECInfo k_emlrtECI{
    -1,            // nDims
    37,            // lineNo
    28,            // colNo
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m" // pName
};

static emlrtECInfo l_emlrtECI{
    -1,            // nDims
    28,            // lineNo
    24,            // colNo
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m" // pName
};

static emlrtBCInfo xc_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    270,                    // lineNo
    62,                     // colNo
    "",                     // aName
    "findNearestNeighbors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ad_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    459,                      // lineNo
    45,                       // colNo
    "",                       // aName
    "findUnambiguousMatches", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo bd_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    459,                      // lineNo
    23,                       // colNo
    "",                       // aName
    "findUnambiguousMatches", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo cd_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    457,                      // lineNo
    25,                       // colNo
    "",                       // aName
    "findUnambiguousMatches", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo dd_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    458,                      // lineNo
    1,                        // colNo
    "",                       // aName
    "findUnambiguousMatches", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ed_emlrtBCI{
    -1,                  // iFirst
    -1,                  // iLast
    353,                 // lineNo
    29,                  // colNo
    "",                  // aName
    "findUniqueIndices", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m", // pName
    0                                      // checkKind
};

static emlrtRTEInfo nl_emlrtRTEI{
    199,                  // lineNo
    5,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo pl_emlrtRTEI{
    52,                   // lineNo
    1,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo rl_emlrtRTEI{
    18,                   // lineNo
    5,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo am_emlrtRTEI{
    212,                  // lineNo
    38,                   // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo dm_emlrtRTEI{
    530,                  // lineNo
    15,                   // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo fm_emlrtRTEI{
    338,                  // lineNo
    5,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo gm_emlrtRTEI{
    332,                  // lineNo
    5,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo hm_emlrtRTEI{
    341,                  // lineNo
    15,                   // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo im_emlrtRTEI{
    341,                  // lineNo
    1,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo jm_emlrtRTEI{
    342,                  // lineNo
    1,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo om_emlrtRTEI{
    267,                  // lineNo
    66,                   // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo pm_emlrtRTEI{
    17,            // lineNo
    1,             // colNo
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m" // pName
};

static emlrtRTEInfo qm_emlrtRTEI{
    18,            // lineNo
    1,             // colNo
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m" // pName
};

static emlrtRTEInfo rm_emlrtRTEI{
    50,            // lineNo
    5,             // colNo
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m" // pName
};

static emlrtRTEInfo sm_emlrtRTEI{
    51,            // lineNo
    5,             // colNo
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m" // pName
};

static emlrtRTEInfo um_emlrtRTEI{
    552,             // lineNo
    5,               // colNo
    "unaryMinOrMax", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pName
};

static emlrtRTEInfo vm_emlrtRTEI{
    18,    // lineNo
    5,     // colNo
    "min", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" // pName
};

static emlrtRTEInfo xm_emlrtRTEI{
    39,            // lineNo
    15,            // colNo
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m" // pName
};

static emlrtRTEInfo ym_emlrtRTEI{
    54,            // lineNo
    1,             // colNo
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m" // pName
};

static emlrtRTEInfo an_emlrtRTEI{
    21,            // lineNo
    5,             // colNo
    "partialSort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\partialSort.m" // pName
};

static emlrtRTEInfo bn_emlrtRTEI{
    270,                  // lineNo
    22,                   // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo cn_emlrtRTEI{
    270,                  // lineNo
    1,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo dn_emlrtRTEI{
    457,                  // lineNo
    12,                   // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo en_emlrtRTEI{
    444,                  // lineNo
    31,                   // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo fn_emlrtRTEI{
    461,                  // lineNo
    1,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo gn_emlrtRTEI{
    523,             // lineNo
    21,              // colNo
    "unaryMinOrMax", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pName
};

static emlrtRTEInfo hn_emlrtRTEI{
    525,             // lineNo
    5,               // colNo
    "unaryMinOrMax", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pName
};

static emlrtRTEInfo in_emlrtRTEI{
    356,                  // lineNo
    1,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRTEInfo jn_emlrtRTEI{
    357,                  // lineNo
    1,                    // colNo
    "cvalgMatchFeatures", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pName
};

static emlrtRSInfo sid_emlrtRSI{
    357,                 // lineNo
    "findUniqueIndices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\cvalgMatchFeatures.m" // pathName
};

// Function Declarations
static void binary_expand_op(const emlrtStack &sp,
                             coder::array<boolean_T, 2U> &in1,
                             const coder::array<uint32_T, 2U> &in2,
                             const coder::array<uint32_T, 2U> &in3);

namespace coder {
namespace vision {
namespace internal {
namespace matchFeatures {
static void exhaustiveSearch(const emlrtStack &sp,
                             const array<uint8_T, 2U> &features1,
                             const array<uint8_T, 2U> &features2, uint32_T N1,
                             uint32_T N2, array<uint32_T, 2U> &indexPairs,
                             array<real32_T, 2U> &matchMetric);

static void findNearestNeighbors(const emlrtStack &sp,
                                 const array<real32_T, 2U> &scores,
                                 array<uint32_T, 2U> &indexPairs,
                                 array<real32_T, 2U> &topTwoMetrics);

static void findUnambiguousMatches(const emlrtStack &sp,
                                   array<real32_T, 2U> &topTwoScores,
                                   real_T maxRatioThreshold,
                                   array<boolean_T, 2U> &unambiguousIndices);

static void findUniqueIndices(const emlrtStack &sp,
                              const array<real32_T, 2U> &scores,
                              const array<uint32_T, 2U> &indexPairs,
                              array<boolean_T, 2U> &uniqueIndices);

} // namespace matchFeatures
} // namespace internal
} // namespace vision
} // namespace coder

// Function Definitions
static void binary_expand_op(const emlrtStack &sp,
                             coder::array<boolean_T, 2U> &in1,
                             const coder::array<uint32_T, 2U> &in2,
                             const coder::array<uint32_T, 2U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in1.set_size(&jn_emlrtRTEI, &sp, 1, in1.size(1));
  if (in3.size(1) == 1) {
    loop_ub = in2.size(1);
  } else {
    loop_ub = in3.size(1);
  }
  in1.set_size(&jn_emlrtRTEI, &sp, in1.size(0), loop_ub);
  stride_0_1 = (in2.size(1) != 1);
  stride_1_1 = (in3.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_1] == in3[2 * (i * stride_1_1)]);
  }
}

namespace coder {
namespace vision {
namespace internal {
namespace matchFeatures {
static void exhaustiveSearch(const emlrtStack &sp,
                             const array<uint8_T, 2U> &features1,
                             const array<uint8_T, 2U> &features2, uint32_T N1,
                             uint32_T N2, array<uint32_T, 2U> &indexPairs,
                             array<real32_T, 2U> &matchMetric)
{
  array<int32_T, 2U> r2;
  array<int32_T, 2U> r3;
  array<int32_T, 2U> r4;
  array<real32_T, 2U> b_matchMetric;
  array<real32_T, 2U> c_matchMetric;
  array<real32_T, 2U> d_matchMetric;
  array<real32_T, 2U> e_matchMetric;
  array<real32_T, 2U> scores;
  array<uint32_T, 2U> b_indexPairs;
  array<uint8_T, 2U> b_features1;
  array<uint8_T, 2U> b_features2;
  array<uint8_T, 2U> b_r;
  array<uint8_T, 2U> c_features2;
  array<uint8_T, 2U> r1;
  array<boolean_T, 2U> unambiguousIndices;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &mh_emlrtRSI;
  b_st.site = &rh_emlrtRSI;
  loop_ub = features1.size(1);
  b_features1.set_size(&sl_emlrtRTEI, &b_st, features1.size(1), 32);
  for (int32_T i{0}; i < 32; i++) {
    for (loop_ub_tmp = 0; loop_ub_tmp < loop_ub; loop_ub_tmp++) {
      b_features1[loop_ub_tmp + b_features1.size(0) * i] =
          features1[i + 32 * loop_ub_tmp];
    }
  }
  b_loop_ub = features2.size(1);
  c_loop_ub = features2.size(0);
  b_features2.set_size(&tl_emlrtRTEI, &b_st, features2.size(1),
                       features2.size(0));
  for (int32_T i{0}; i < c_loop_ub; i++) {
    for (loop_ub_tmp = 0; loop_ub_tmp < b_loop_ub; loop_ub_tmp++) {
      b_features2[loop_ub_tmp + b_features2.size(0) * i] =
          features2[i + features2.size(0) * loop_ub_tmp];
    }
  }
  c_features2.set_size(&ul_emlrtRTEI, &b_st, features2.size(1),
                       features2.size(0));
  loop_ub_tmp = features2.size(0) * features2.size(1);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    c_features2[i] = b_features2[i];
  }
  c_st.site = &sh_emlrtRSI;
  scores.set_size(&vl_emlrtRTEI, &c_st, static_cast<int32_T>(N1),
                  static_cast<int32_T>(N2));
  loop_ub_tmp = static_cast<int32_T>(N1) * static_cast<int32_T>(N2);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    scores[i] = 0.0F;
  }
  b_r.set_size(&wl_emlrtRTEI, &c_st, 32, features1.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    for (loop_ub_tmp = 0; loop_ub_tmp < 32; loop_ub_tmp++) {
      b_r[loop_ub_tmp + 32 * i] =
          b_features1[i + b_features1.size(0) * loop_ub_tmp];
    }
  }
  r1.set_size(&xl_emlrtRTEI, &c_st, features2.size(0), features2.size(1));
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (loop_ub_tmp = 0; loop_ub_tmp < c_loop_ub; loop_ub_tmp++) {
      r1[loop_ub_tmp + r1.size(0) * i] =
          c_features2[i + c_features2.size(0) * loop_ub_tmp];
    }
  }
  ComputeMetric_hamming_single(&b_r[0], &r1[0], &scores[0],
                               static_cast<uint32_T>(b_features1.size(0)),
                               static_cast<uint32_T>(c_features2.size(0)), 32U);
  st.site = &nh_emlrtRSI;
  findNearestNeighbors(st, scores, b_indexPairs, b_matchMetric);
  st.site = &oh_emlrtRSI;
  b_loop_ub = b_matchMetric.size(0);
  if (b_matchMetric.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, b_matchMetric.size(0), &ic_emlrtBCI,
                                  &st);
  }
  loop_ub = b_matchMetric.size(1);
  unambiguousIndices.set_size(&yl_emlrtRTEI, &st, 1, b_matchMetric.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    unambiguousIndices[i] =
        (b_matchMetric[b_matchMetric.size(0) * i] <= 102.0F);
  }
  c_loop_ub = 0;
  for (loop_ub_tmp = 0; loop_ub_tmp < loop_ub; loop_ub_tmp++) {
    if (unambiguousIndices[loop_ub_tmp]) {
      c_loop_ub++;
    }
  }
  r2.set_size(&am_emlrtRTEI, &st, 1, c_loop_ub);
  c_loop_ub = 0;
  for (loop_ub_tmp = 0; loop_ub_tmp < loop_ub; loop_ub_tmp++) {
    if (unambiguousIndices[loop_ub_tmp]) {
      r2[c_loop_ub] = loop_ub_tmp;
      c_loop_ub++;
    }
  }
  loop_ub = r2.size(1);
  indexPairs.set_size(&bm_emlrtRTEI, &st, 2, r2.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r2[i] > b_indexPairs.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(r2[i], 0, b_indexPairs.size(1) - 1,
                                    &pc_emlrtBCI, &st);
    }
    indexPairs[2 * i] = b_indexPairs[2 * r2[i]];
    if (r2[i] > b_indexPairs.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(r2[i], 0, b_indexPairs.size(1) - 1,
                                    &pc_emlrtBCI, &st);
    }
    indexPairs[2 * i + 1] = b_indexPairs[2 * r2[i] + 1];
  }
  b_indexPairs.set_size(&cm_emlrtRTEI, &st, 2, indexPairs.size(1));
  loop_ub_tmp = indexPairs.size(1) << 1;
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    b_indexPairs[i] = indexPairs[i];
  }
  c_matchMetric.set_size(&dm_emlrtRTEI, &st, b_matchMetric.size(0), r2.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    for (loop_ub_tmp = 0; loop_ub_tmp < b_loop_ub; loop_ub_tmp++) {
      if (r2[i] > b_matchMetric.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(r2[i], 0, b_matchMetric.size(1) - 1,
                                      &kc_emlrtBCI, &st);
      }
      c_matchMetric[loop_ub_tmp + c_matchMetric.size(0) * i] =
          b_matchMetric[loop_ub_tmp + b_matchMetric.size(0) * r2[i]];
    }
  }
  loop_ub = c_matchMetric.size(1);
  b_matchMetric.set_size(&em_emlrtRTEI, &st, c_matchMetric.size(0),
                         c_matchMetric.size(1));
  loop_ub_tmp = c_matchMetric.size(0) * c_matchMetric.size(1);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    b_matchMetric[i] = c_matchMetric[i];
  }
  st.site = &ph_emlrtRSI;
  if (N2 > 1U) {
    d_matchMetric.set_size(&gm_emlrtRTEI, &st, b_matchMetric.size(0),
                           b_matchMetric.size(1));
    loop_ub = b_matchMetric.size(0) * b_matchMetric.size(1) - 1;
    for (int32_T i{0}; i <= loop_ub; i++) {
      d_matchMetric[i] = b_matchMetric[i];
    }
    b_st.site = &kj_emlrtRSI;
    findUnambiguousMatches(b_st, d_matchMetric, 0.9, unambiguousIndices);
  } else {
    unambiguousIndices.set_size(&fm_emlrtRTEI, &st, 1, c_matchMetric.size(1));
    for (int32_T i{0}; i < loop_ub; i++) {
      unambiguousIndices[i] = true;
    }
  }
  b_loop_ub = unambiguousIndices.size(1);
  c_loop_ub = 0;
  for (loop_ub_tmp = 0; loop_ub_tmp < b_loop_ub; loop_ub_tmp++) {
    if (unambiguousIndices[loop_ub_tmp]) {
      c_loop_ub++;
    }
  }
  r3.set_size(&am_emlrtRTEI, &st, 1, c_loop_ub);
  c_loop_ub = 0;
  for (loop_ub_tmp = 0; loop_ub_tmp < b_loop_ub; loop_ub_tmp++) {
    if (unambiguousIndices[loop_ub_tmp]) {
      r3[c_loop_ub] = loop_ub_tmp;
      c_loop_ub++;
    }
  }
  loop_ub = r3.size(1);
  indexPairs.set_size(&hm_emlrtRTEI, &st, 2, r3.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > b_indexPairs.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, b_indexPairs.size(1) - 1,
                                    &oc_emlrtBCI, &st);
    }
    indexPairs[2 * i] = b_indexPairs[2 * r3[i]];
    if (r3[i] > b_indexPairs.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, b_indexPairs.size(1) - 1,
                                    &oc_emlrtBCI, &st);
    }
    indexPairs[2 * i + 1] = b_indexPairs[2 * r3[i] + 1];
  }
  b_indexPairs.set_size(&im_emlrtRTEI, &st, 2, indexPairs.size(1));
  loop_ub_tmp = indexPairs.size(1) << 1;
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    b_indexPairs[i] = indexPairs[i];
  }
  if (c_matchMetric.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, c_matchMetric.size(0), &jc_emlrtBCI,
                                  &st);
  }
  e_matchMetric.set_size(&jm_emlrtRTEI, &st, 1, r3.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > b_matchMetric.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, b_matchMetric.size(1) - 1,
                                    &lc_emlrtBCI, &st);
    }
    e_matchMetric[i] = b_matchMetric[b_matchMetric.size(0) * r3[i]];
  }
  if (b_indexPairs.size(1) == 0) {
    indexPairs.set_size(&mm_emlrtRTEI, &sp, 2, 0);
    matchMetric.set_size(&nm_emlrtRTEI, &sp, 1, 0);
  } else {
    st.site = &qh_emlrtRSI;
    findUniqueIndices(st, scores, b_indexPairs, unambiguousIndices);
    b_loop_ub = unambiguousIndices.size(1);
    c_loop_ub = 0;
    for (loop_ub_tmp = 0; loop_ub_tmp < b_loop_ub; loop_ub_tmp++) {
      if (unambiguousIndices[loop_ub_tmp]) {
        c_loop_ub++;
      }
    }
    r4.set_size(&am_emlrtRTEI, &sp, 1, c_loop_ub);
    c_loop_ub = 0;
    for (loop_ub_tmp = 0; loop_ub_tmp < b_loop_ub; loop_ub_tmp++) {
      if (unambiguousIndices[loop_ub_tmp]) {
        r4[c_loop_ub] = loop_ub_tmp;
        c_loop_ub++;
      }
    }
    loop_ub = r4.size(1);
    indexPairs.set_size(&km_emlrtRTEI, &sp, 2, r4.size(1));
    for (int32_T i{0}; i < loop_ub; i++) {
      if (r4[i] > b_indexPairs.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(r4[i], 0, b_indexPairs.size(1) - 1,
                                      &nc_emlrtBCI, (emlrtConstCTX)&sp);
      }
      indexPairs[2 * i] = b_indexPairs[2 * r4[i]];
      if (r4[i] > b_indexPairs.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(r4[i], 0, b_indexPairs.size(1) - 1,
                                      &nc_emlrtBCI, (emlrtConstCTX)&sp);
      }
      indexPairs[2 * i + 1] = b_indexPairs[2 * r4[i] + 1];
    }
    matchMetric.set_size(&lm_emlrtRTEI, &sp, 1, r4.size(1));
    for (int32_T i{0}; i < loop_ub; i++) {
      if (r4[i] > r3.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(r4[i], 0, r3.size(1) - 1, &mc_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      matchMetric[i] = e_matchMetric[r4[i]];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void findNearestNeighbors(const emlrtStack &sp,
                                 const array<real32_T, 2U> &scores,
                                 array<uint32_T, 2U> &indexPairs,
                                 array<real32_T, 2U> &topTwoMetrics)
{
  array<real_T, 2U> b_indices;
  array<real_T, 2U> y;
  array<int32_T, 2U> iidx;
  array<int32_T, 2U> indices;
  array<int32_T, 2U> r1;
  array<int32_T, 1U> idx;
  array<real32_T, 2U> x;
  array<real32_T, 1U> ex;
  array<uint32_T, 2U> b_varargin_1;
  array<uint32_T, 2U> topTwoIndices;
  array<uint32_T, 1U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  int32_T b_ex[2];
  int32_T varargin_1[2];
  int32_T b_loop_ub_tmp;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T n;
  int32_T siz_idx_1;
  uint32_T varargin_2[2];
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &th_emlrtRSI;
  loop_ub = scores.size(0);
  siz_idx_1 = scores.size(1);
  x.set_size(&om_emlrtRTEI, &st, scores.size(0), scores.size(1));
  loop_ub_tmp = scores.size(0) * scores.size(1);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    x[i] = scores[i];
  }
  n = 2;
  if (scores.size(1) < 2) {
    n = scores.size(1);
  }
  topTwoMetrics.set_size(&pm_emlrtRTEI, &st, n, scores.size(0));
  b_loop_ub_tmp = n * scores.size(0);
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    topTwoMetrics[i] = 0.0F;
  }
  indices.set_size(&qm_emlrtRTEI, &st, n, scores.size(0));
  for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
    indices[i] = 0;
  }
  if ((scores.size(0) == 0) || (scores.size(1) == 0)) {
    topTwoIndices.set_size(&an_emlrtRTEI, &st, n, scores.size(0));
    for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
      topTwoIndices[i] = 0U;
    }
  } else {
    int32_T i1;
    if (n == 1) {
      b_st.site = &vh_emlrtRSI;
      c_st.site = &bi_emlrtRSI;
      d_st.site = &ci_emlrtRSI;
      e_st.site = &di_emlrtRSI;
      f_st.site = &ei_emlrtRSI;
      g_st.site = &fi_emlrtRSI;
      h_st.site = &gi_emlrtRSI;
      ex.set_size(&tm_emlrtRTEI, &h_st, scores.size(0));
      idx.set_size(&um_emlrtRTEI, &h_st, scores.size(0));
      for (int32_T i{0}; i < loop_ub; i++) {
        idx[i] = 1;
      }
      i_st.site = &ji_emlrtRSI;
      if (scores.size(0) > 2147483646) {
        j_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(j_st);
      }
      for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
        ex[b_i] = scores[b_i];
      }
      i_st.site = &ii_emlrtRSI;
      if (scores.size(1) > 2147483646) {
        j_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(j_st);
      }
      for (int32_T j{2}; j <= siz_idx_1; j++) {
        i_st.site = &hi_emlrtRSI;
        if (loop_ub > 2147483646) {
          j_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(j_st);
        }
        for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
          real32_T b;
          boolean_T p;
          b = scores[b_i + scores.size(0) * (j - 1)];
          if (muSingleScalarIsNaN(b)) {
            p = false;
          } else if (muSingleScalarIsNaN(ex[b_i])) {
            p = true;
          } else {
            p = (ex[b_i] > b);
          }
          if (p) {
            ex[b_i] = b;
            idx[b_i] = j;
          }
        }
      }
      b_r.set_size(&vm_emlrtRTEI, &b_st, scores.size(0));
      for (int32_T i{0}; i < loop_ub; i++) {
        b_r[i] = static_cast<uint32_T>(idx[i]);
      }
      b_ex[0] = 1;
      b_ex[1] = scores.size(0);
      emlrtSubAssignSizeCheckR2012b(&b_ex[0], 2, ex.size(), 1, &j_emlrtECI,
                                    &st);
      for (int32_T i{0}; i < loop_ub; i++) {
        topTwoMetrics[topTwoMetrics.size(0) * i] = ex[i];
      }
      b_ex[0] = 1;
      b_ex[1] = scores.size(0);
      emlrtSubAssignSizeCheckR2012b(&b_ex[0], 2, b_r.size(), 1, &l_emlrtECI,
                                    &st);
      for (int32_T i{0}; i < loop_ub; i++) {
        indices[indices.size(0) * i] = static_cast<int32_T>(b_r[i]);
      }
    } else {
      b_st.site = &wh_emlrtRSI;
      if (n < b_log2(b_st, static_cast<real_T>(scores.size(1)))) {
        if (n - 1 >= 0) {
          varargin_2[0] = 1U;
          varargin_1[0] = 1;
        }
        for (int32_T b_i{0}; b_i < n; b_i++) {
          int32_T j;
          boolean_T exitg1;
          boolean_T p;
          b_st.site = &xh_emlrtRSI;
          c_st.site = &bi_emlrtRSI;
          d_st.site = &ci_emlrtRSI;
          e_st.site = &di_emlrtRSI;
          if (x.size(1) < 1) {
            emlrtErrorWithMessageIdR2018a(
                &e_st, &m_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
                "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }
          f_st.site = &ei_emlrtRSI;
          g_st.site = &fi_emlrtRSI;
          h_st.site = &gi_emlrtRSI;
          ex.set_size(&tm_emlrtRTEI, &h_st, loop_ub);
          idx.set_size(&um_emlrtRTEI, &h_st, loop_ub);
          for (int32_T i{0}; i < loop_ub; i++) {
            idx[i] = 1;
          }
          if (x.size(0) >= 1) {
            i_st.site = &ji_emlrtRSI;
            if (x.size(0) > 2147483646) {
              j_st.site = &qe_emlrtRSI;
              check_forloop_overflow_error(j_st);
            }
            for (b_loop_ub_tmp = 0; b_loop_ub_tmp < loop_ub; b_loop_ub_tmp++) {
              ex[b_loop_ub_tmp] = x[b_loop_ub_tmp];
            }
            i_st.site = &ii_emlrtRSI;
            if (x.size(1) > 2147483646) {
              j_st.site = &qe_emlrtRSI;
              check_forloop_overflow_error(j_st);
            }
            for (j = 2; j <= siz_idx_1; j++) {
              i_st.site = &hi_emlrtRSI;
              if (loop_ub > 2147483646) {
                j_st.site = &qe_emlrtRSI;
                check_forloop_overflow_error(j_st);
              }
              for (b_loop_ub_tmp = 0; b_loop_ub_tmp < loop_ub;
                   b_loop_ub_tmp++) {
                real32_T b;
                b = x[b_loop_ub_tmp + x.size(0) * (j - 1)];
                if (muSingleScalarIsNaN(b)) {
                  p = false;
                } else if (muSingleScalarIsNaN(ex[b_loop_ub_tmp])) {
                  p = true;
                } else {
                  p = (ex[b_loop_ub_tmp] > b);
                }
                if (p) {
                  ex[b_loop_ub_tmp] = b;
                  idx[b_loop_ub_tmp] = j;
                }
              }
            }
          }
          b_r.set_size(&vm_emlrtRTEI, &b_st, loop_ub);
          for (int32_T i{0}; i < loop_ub; i++) {
            b_r[i] = static_cast<uint32_T>(idx[i]);
          }
          if (b_i + 1 > topTwoMetrics.size(0)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, topTwoMetrics.size(0),
                                          &qc_emlrtBCI, &st);
          }
          b_ex[0] = 1;
          b_ex[1] = loop_ub;
          emlrtSubAssignSizeCheckR2012b(&b_ex[0], 2, ex.size(), 1, &i_emlrtECI,
                                        &st);
          for (int32_T i{0}; i < loop_ub; i++) {
            topTwoMetrics[b_i + topTwoMetrics.size(0) * i] = ex[i];
          }
          if (b_i + 1 > topTwoMetrics.size(0)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, topTwoMetrics.size(0),
                                          &wc_emlrtBCI, &st);
          }
          b_ex[0] = 1;
          b_ex[1] = loop_ub;
          emlrtSubAssignSizeCheckR2012b(&b_ex[0], 2, b_r.size(), 1, &k_emlrtECI,
                                        &st);
          for (int32_T i{0}; i < loop_ub; i++) {
            indices[b_i + indices.size(0) * i] = static_cast<int32_T>(b_r[i]);
          }
          if (x.size(0) < 1) {
            y.set_size(&wm_emlrtRTEI, &st, 1, 0);
          } else {
            y.set_size(&wm_emlrtRTEI, &st, 1, loop_ub);
            b_loop_ub_tmp = x.size(0) - 1;
            for (int32_T i{0}; i <= b_loop_ub_tmp; i++) {
              y[i] = static_cast<real_T>(i) + 1.0;
            }
          }
          b_st.site = &yh_emlrtRSI;
          if (b_i + 1 > topTwoMetrics.size(0)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, topTwoMetrics.size(0),
                                          &vc_emlrtBCI, &b_st);
          }
          c_st.site = &ki_emlrtRSI;
          if (!::coder::internal::allinrange(y, loop_ub)) {
            emlrtErrorWithMessageIdR2018a(&c_st, &p_emlrtRTEI,
                                          "MATLAB:sub2ind:IndexOutOfRange",
                                          "MATLAB:sub2ind:IndexOutOfRange", 0);
          }
          j = y.size(1);
          varargin_1[1] = y.size(1);
          varargin_2[1] = static_cast<uint32_T>(indices.size(1));
          p = true;
          b_loop_ub_tmp = 0;
          exitg1 = false;
          while ((!exitg1) && (b_loop_ub_tmp < 2)) {
            if (varargin_1[b_loop_ub_tmp] !=
                static_cast<int32_T>(varargin_2[b_loop_ub_tmp])) {
              p = false;
              exitg1 = true;
            } else {
              b_loop_ub_tmp++;
            }
          }
          if (!p) {
            emlrtErrorWithMessageIdR2018a(
                &c_st, &q_emlrtRTEI, "MATLAB:sub2ind:SubscriptVectorSize",
                "MATLAB:sub2ind:SubscriptVectorSize", 0);
          }
          b_indices.set_size(&p_emlrtRTEI, &c_st, 1, loop_ub);
          for (int32_T i{0}; i < loop_ub; i++) {
            b_indices[i] = indices[b_i + indices.size(0) * i];
          }
          if (!::coder::internal::allinrange(b_indices, siz_idx_1)) {
            emlrtErrorWithMessageIdR2018a(&c_st, &p_emlrtRTEI,
                                          "MATLAB:sub2ind:IndexOutOfRange",
                                          "MATLAB:sub2ind:IndexOutOfRange", 0);
          }
          r1.set_size(&xm_emlrtRTEI, &st, 1, y.size(1));
          for (int32_T i{0}; i < j; i++) {
            i1 = static_cast<int32_T>(y[i]) +
                 loop_ub * (indices[b_i + indices.size(0) * i] - 1);
            if ((i1 < 1) || (i1 > loop_ub_tmp)) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub_tmp, &yc_emlrtBCI,
                                            &st);
            }
            r1[i] = i1;
          }
          b_loop_ub_tmp = r1.size(1) - 1;
          for (int32_T i{0}; i <= b_loop_ub_tmp; i++) {
            x[r1[i] - 1] = rtInfF;
          }
        }
      } else {
        b_st.site = &ai_emlrtRSI;
        c_st.site = &li_emlrtRSI;
        ::coder::internal::sort(c_st, x, iidx);
        if (n < 1) {
          loop_ub = 0;
        } else {
          if (x.size(1) < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, x.size(1), &uc_emlrtBCI, &st);
          }
          if (n > x.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n, 1, x.size(1), &tc_emlrtBCI, &st);
          }
          loop_ub = n;
        }
        b_loop_ub_tmp = x.size(0);
        topTwoMetrics.set_size(&rm_emlrtRTEI, &st, loop_ub, x.size(0));
        for (int32_T i{0}; i < b_loop_ub_tmp; i++) {
          for (i1 = 0; i1 < loop_ub; i1++) {
            topTwoMetrics[i1 + topTwoMetrics.size(0) * i] =
                x[i + x.size(0) * i1];
          }
        }
        if (n < 1) {
          n = 0;
        } else {
          if (iidx.size(1) < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, iidx.size(1), &sc_emlrtBCI,
                                          &st);
          }
          if (n > iidx.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n, 1, iidx.size(1), &rc_emlrtBCI,
                                          &st);
          }
        }
        loop_ub = iidx.size(0);
        indices.set_size(&sm_emlrtRTEI, &st, n, iidx.size(0));
        for (int32_T i{0}; i < loop_ub; i++) {
          for (i1 = 0; i1 < n; i1++) {
            indices[i1 + indices.size(0) * i] = iidx[i + iidx.size(0) * i1];
          }
        }
      }
    }
    topTwoIndices.set_size(&ym_emlrtRTEI, &st, indices.size(0),
                           indices.size(1));
    loop_ub_tmp = indices.size(0) * indices.size(1);
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      i1 = indices[i];
      if (i1 < 0) {
        i1 = 0;
      }
      topTwoIndices[i] = static_cast<uint32_T>(i1);
    }
  }
  if (topTwoIndices.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, topTwoIndices.size(0), &xc_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if (scores.size(0) < 1) {
    y.set_size(&wm_emlrtRTEI, &sp, 1, 0);
  } else {
    y.set_size(&wm_emlrtRTEI, &sp, 1, scores.size(0));
    loop_ub = scores.size(0) - 1;
    for (int32_T i{0}; i <= loop_ub; i++) {
      y[i] = static_cast<real_T>(i) + 1.0;
    }
  }
  st.site = &uh_emlrtRSI;
  loop_ub = y.size(1);
  b_varargin_1.set_size(&bn_emlrtRTEI, &st, 1, y.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_varargin_1[i] = static_cast<uint32_T>(y[i]);
  }
  b_st.site = &ij_emlrtRSI;
  c_st.site = &jj_emlrtRSI;
  if (topTwoIndices.size(1) != b_varargin_1.size(1)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  indexPairs.set_size(&cn_emlrtRTEI, &b_st, 2, y.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    indexPairs[2 * i] = b_varargin_1[i];
  }
  loop_ub = topTwoIndices.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    indexPairs[2 * i + 1] = topTwoIndices[topTwoIndices.size(0) * i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void findUnambiguousMatches(const emlrtStack &sp,
                                   array<real32_T, 2U> &topTwoScores,
                                   real_T maxRatioThreshold,
                                   array<boolean_T, 2U> &unambiguousIndices)
{
  array<int32_T, 2U> r1;
  array<boolean_T, 2U> b_r;
  int32_T loop_ub;
  int32_T trueCount;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (topTwoScores.size(0) < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, topTwoScores.size(0), &cd_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  loop_ub = topTwoScores.size(1);
  b_r.set_size(&dn_emlrtRTEI, &sp, 1, topTwoScores.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_r[i] = (topTwoScores[topTwoScores.size(0) * i + 1] < 1.0E-6F);
  }
  trueCount = 0;
  for (int32_T i{0}; i < loop_ub; i++) {
    if (b_r[i]) {
      trueCount++;
    }
  }
  r1.set_size(&en_emlrtRTEI, &sp, 1, trueCount);
  trueCount = 0;
  for (int32_T i{0}; i < loop_ub; i++) {
    if (b_r[i]) {
      r1[trueCount] = i;
      trueCount++;
    }
  }
  loop_ub = r1.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    trueCount = topTwoScores.size(0);
    for (int32_T b_i{0}; b_i < trueCount; b_i++) {
      if (r1[i] > topTwoScores.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(r1[i], 0, topTwoScores.size(1) - 1,
                                      &dd_emlrtBCI, (emlrtConstCTX)&sp);
      }
      topTwoScores[b_i + topTwoScores.size(0) * r1[i]] = 1.0F;
    }
  }
  if (topTwoScores.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, topTwoScores.size(0), &bd_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if (topTwoScores.size(0) < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, topTwoScores.size(0), &ad_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  loop_ub = topTwoScores.size(1);
  unambiguousIndices.set_size(&fn_emlrtRTEI, &sp, 1, topTwoScores.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    unambiguousIndices[i] = (topTwoScores[topTwoScores.size(0) * i] /
                                 topTwoScores[topTwoScores.size(0) * i + 1] <=
                             maxRatioThreshold);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void findUniqueIndices(const emlrtStack &sp,
                              const array<real32_T, 2U> &scores,
                              const array<uint32_T, 2U> &indexPairs,
                              array<boolean_T, 2U> &uniqueIndices)
{
  array<int32_T, 2U> idx;
  array<real32_T, 2U> ex;
  array<uint32_T, 2U> b_idx;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  int32_T ex_tmp;
  int32_T loop_ub_tmp;
  int32_T m;
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
  st.site = &lj_emlrtRSI;
  loop_ub_tmp = indexPairs.size(1);
  for (ex_tmp = 0; ex_tmp < loop_ub_tmp; ex_tmp++) {
    if ((static_cast<int32_T>(indexPairs[2 * ex_tmp + 1]) < 1) ||
        (static_cast<int32_T>(indexPairs[2 * ex_tmp + 1]) > scores.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(indexPairs[2 * ex_tmp + 1]), 1, scores.size(1),
          &ed_emlrtBCI, &st);
    }
  }
  b_st.site = &bi_emlrtRSI;
  c_st.site = &ci_emlrtRSI;
  d_st.site = &di_emlrtRSI;
  if (((scores.size(0) != 1) || (indexPairs.size(1) != 1)) &&
      (scores.size(0) == 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &l_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  if (scores.size(0) < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ei_emlrtRSI;
  f_st.site = &fi_emlrtRSI;
  g_st.site = &mj_emlrtRSI;
  m = scores.size(0);
  ex.set_size(&gn_emlrtRTEI, &g_st, 1, indexPairs.size(1));
  idx.set_size(&hn_emlrtRTEI, &g_st, 1, indexPairs.size(1));
  for (ex_tmp = 0; ex_tmp < loop_ub_tmp; ex_tmp++) {
    idx[ex_tmp] = 1;
  }
  if (indexPairs.size(1) >= 1) {
    boolean_T overflow;
    h_st.site = &oj_emlrtRSI;
    if (indexPairs.size(1) > 2147483646) {
      i_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(i_st);
    }
    overflow = (scores.size(0) > 2147483646);
    for (int32_T j{0}; j < loop_ub_tmp; j++) {
      ex_tmp = static_cast<int32_T>(indexPairs[2 * j + 1]) - 1;
      ex[j] = scores[scores.size(0) * ex_tmp];
      h_st.site = &nj_emlrtRSI;
      if (overflow) {
        i_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(i_st);
      }
      for (int32_T i{2}; i <= m; i++) {
        real32_T a;
        real32_T b_tmp;
        boolean_T p;
        a = ex[j];
        b_tmp = scores[(i + scores.size(0) * ex_tmp) - 1];
        if (muSingleScalarIsNaN(b_tmp)) {
          p = false;
        } else if (muSingleScalarIsNaN(a)) {
          p = true;
        } else {
          p = (a > b_tmp);
        }
        if (p) {
          ex[j] = b_tmp;
          idx[j] = i;
        }
      }
    }
  }
  b_idx.set_size(&in_emlrtRTEI, &sp, 1, indexPairs.size(1));
  for (ex_tmp = 0; ex_tmp < loop_ub_tmp; ex_tmp++) {
    b_idx[ex_tmp] = static_cast<uint32_T>(idx[ex_tmp]);
  }
  if (b_idx.size(1) == indexPairs.size(1)) {
    uniqueIndices.set_size(&jn_emlrtRTEI, &sp, 1, indexPairs.size(1));
    for (ex_tmp = 0; ex_tmp < loop_ub_tmp; ex_tmp++) {
      uniqueIndices[ex_tmp] = (b_idx[ex_tmp] == indexPairs[2 * ex_tmp]);
    }
  } else {
    st.site = &sid_emlrtRSI;
    binary_expand_op(st, uniqueIndices, b_idx, indexPairs);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void b_findNearestNeighbors(const emlrtStack &sp,
                            const array<real32_T, 2U> &scores,
                            array<uint32_T, 2U> &indexPairs,
                            array<real32_T, 2U> &topTwoMetrics)
{
  array<int32_T, 2U> indices;
  array<real32_T, 1U> ex;
  array<uint32_T, 2U> varargin_1;
  array<int8_T, 2U> topTwoIndices;
  array<int8_T, 1U> idx;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  int32_T b_ex[2];
  int32_T b_i;
  int32_T j;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &th_emlrtRSI;
  loop_ub = scores.size(0);
  topTwoMetrics.set_size(&pm_emlrtRTEI, &st, 1, scores.size(0));
  indices.set_size(&qm_emlrtRTEI, &st, 1, scores.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    topTwoMetrics[i] = 0.0F;
    indices[i] = 0;
  }
  if (scores.size(0) == 0) {
    topTwoIndices.set_size(&an_emlrtRTEI, &st, 1, 0);
  } else {
    b_st.site = &vh_emlrtRSI;
    c_st.site = &bi_emlrtRSI;
    d_st.site = &ci_emlrtRSI;
    e_st.site = &di_emlrtRSI;
    f_st.site = &ei_emlrtRSI;
    g_st.site = &fi_emlrtRSI;
    h_st.site = &gi_emlrtRSI;
    ex.set_size(&tm_emlrtRTEI, &h_st, scores.size(0));
    idx.set_size(&um_emlrtRTEI, &h_st, scores.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      idx[i] = 1;
    }
    i_st.site = &ji_emlrtRSI;
    if (scores.size(0) > 2147483646) {
      j_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(j_st);
    }
    for (b_i = 0; b_i < loop_ub; b_i++) {
      ex[b_i] = scores[b_i];
    }
    for (j = 0; j < 9; j++) {
      i_st.site = &hi_emlrtRSI;
      if (loop_ub > 2147483646) {
        j_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(j_st);
      }
      for (b_i = 0; b_i < loop_ub; b_i++) {
        real32_T b;
        boolean_T p;
        b = scores[b_i + scores.size(0) * (j + 1)];
        if (muSingleScalarIsNaN(b)) {
          p = false;
        } else if (muSingleScalarIsNaN(ex[b_i])) {
          p = true;
        } else {
          p = (ex[b_i] > b);
        }
        if (p) {
          ex[b_i] = b;
          idx[b_i] = static_cast<int8_T>(j + 2);
        }
      }
    }
    b_ex[0] = 1;
    b_ex[1] = scores.size(0);
    emlrtSubAssignSizeCheckR2012b(&b_ex[0], 2, ex.size(), 1, &j_emlrtECI, &st);
    for (int32_T i{0}; i < loop_ub; i++) {
      topTwoMetrics[i] = ex[i];
    }
    b_ex[0] = 1;
    b_ex[1] = scores.size(0);
    emlrtSubAssignSizeCheckR2012b(&b_ex[0], 2, idx.size(), 1, &l_emlrtECI, &st);
    for (int32_T i{0}; i < loop_ub; i++) {
      indices[i] = idx[i];
    }
    topTwoIndices.set_size(&ym_emlrtRTEI, &st, 1, scores.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      topTwoIndices[i] = static_cast<int8_T>(indices[i]);
    }
  }
  if (scores.size(0) < 1) {
    indices.set_size(&wm_emlrtRTEI, &sp, 1, 0);
  } else {
    indices.set_size(&wm_emlrtRTEI, &sp, 1, scores.size(0));
    b_i = (scores.size(0) / 4) << 2;
    j = b_i - 4;
    for (int32_T i{0}; i <= j; i += 4) {
      _mm_storeu_si128(
          (__m128i *)&indices[i],
          _mm_add_epi32(
              _mm_set1_epi32(1),
              _mm_add_epi32(_mm_set1_epi32(i),
                            _mm_loadu_si128((const __m128i *)&iv3[0]))));
    }
    for (int32_T i{b_i}; i < loop_ub; i++) {
      indices[i] = i + 1;
    }
  }
  st.site = &uh_emlrtRSI;
  loop_ub = indices.size(1);
  varargin_1.set_size(&bn_emlrtRTEI, &st, 1, indices.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    varargin_1[i] = static_cast<uint32_T>(indices[i]);
  }
  b_st.site = &ij_emlrtRSI;
  c_st.site = &jj_emlrtRSI;
  if (topTwoIndices.size(1) != varargin_1.size(1)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  indexPairs.set_size(&cn_emlrtRTEI, &b_st, 2, indices.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    indexPairs[2 * i] = varargin_1[i];
  }
  loop_ub = topTwoIndices.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    indexPairs[2 * i + 1] = static_cast<uint32_T>(topTwoIndices[i]);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void c_findNearestNeighbors(const emlrtStack &sp,
                            const array<real32_T, 2U> &scores,
                            array<uint32_T, 2U> &indexPairs,
                            array<real32_T, 2U> &topTwoMetrics)
{
  array<int32_T, 2U> iidx;
  array<real32_T, 2U> y;
  array<real32_T, 1U> ex;
  array<uint32_T, 2U> b_y;
  array<int8_T, 2U> indices;
  array<int8_T, 1U> idx;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  int32_T b_ex[2];
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T n;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &th_emlrtRSI;
  n = 1;
  if (scores.size(1) < 1) {
    n = 0;
  }
  loop_ub = scores.size(0);
  topTwoMetrics.set_size(&pm_emlrtRTEI, &st, n, scores.size(0));
  loop_ub_tmp = n * scores.size(0);
  for (int32_T j{0}; j < loop_ub_tmp; j++) {
    topTwoMetrics[j] = 0.0F;
  }
  indices.set_size(&qm_emlrtRTEI, &st, n, scores.size(0));
  for (int32_T j{0}; j < loop_ub_tmp; j++) {
    indices[j] = 0;
  }
  if ((scores.size(0) == 0) || (scores.size(1) == 0)) {
    indices.set_size(&an_emlrtRTEI, &st, n, scores.size(0));
    for (int32_T j{0}; j < loop_ub_tmp; j++) {
      indices[j] = 0;
    }
  } else if (n == 1) {
    b_st.site = &vh_emlrtRSI;
    c_st.site = &bi_emlrtRSI;
    d_st.site = &ci_emlrtRSI;
    e_st.site = &di_emlrtRSI;
    f_st.site = &ei_emlrtRSI;
    g_st.site = &fi_emlrtRSI;
    h_st.site = &gi_emlrtRSI;
    n = scores.size(1);
    ex.set_size(&tm_emlrtRTEI, &h_st, scores.size(0));
    idx.set_size(&um_emlrtRTEI, &h_st, scores.size(0));
    for (int32_T j{0}; j < loop_ub; j++) {
      idx[j] = 1;
    }
    i_st.site = &ji_emlrtRSI;
    if (scores.size(0) > 2147483646) {
      j_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(j_st);
    }
    for (loop_ub_tmp = 0; loop_ub_tmp < loop_ub; loop_ub_tmp++) {
      ex[loop_ub_tmp] = scores[loop_ub_tmp];
    }
    i_st.site = &ii_emlrtRSI;
    for (int32_T j{2}; j <= n; j++) {
      i_st.site = &hi_emlrtRSI;
      if (loop_ub > 2147483646) {
        j_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(j_st);
      }
      for (loop_ub_tmp = 0; loop_ub_tmp < loop_ub; loop_ub_tmp++) {
        real32_T b;
        boolean_T p;
        b = scores[loop_ub_tmp + scores.size(0) * (j - 1)];
        if (muSingleScalarIsNaN(b)) {
          p = false;
        } else if (muSingleScalarIsNaN(ex[loop_ub_tmp])) {
          p = true;
        } else {
          p = (ex[loop_ub_tmp] > b);
        }
        if (p) {
          ex[loop_ub_tmp] = b;
          idx[loop_ub_tmp] = static_cast<int8_T>(j);
        }
      }
    }
    b_ex[0] = 1;
    b_ex[1] = scores.size(0);
    emlrtSubAssignSizeCheckR2012b(&b_ex[0], 2, ex.size(), 1, &j_emlrtECI, &st);
    for (int32_T j{0}; j < loop_ub; j++) {
      topTwoMetrics[topTwoMetrics.size(0) * j] = ex[j];
    }
    b_ex[0] = 1;
    b_ex[1] = scores.size(0);
    emlrtSubAssignSizeCheckR2012b(&b_ex[0], 2, idx.size(), 1, &l_emlrtECI, &st);
    for (int32_T j{0}; j < loop_ub; j++) {
      indices[indices.size(0) * j] = idx[j];
    }
  } else {
    b_st.site = &wh_emlrtRSI;
    if (!(b_log2(b_st, static_cast<real_T>(scores.size(1))) > 0.0)) {
      b_st.site = &ai_emlrtRSI;
      y.set_size(&tr_emlrtRTEI, &b_st, scores.size(0), scores.size(1));
      loop_ub_tmp = scores.size(0) * scores.size(1);
      for (int32_T j{0}; j < loop_ub_tmp; j++) {
        y[j] = scores[j];
      }
      c_st.site = &li_emlrtRSI;
      ::coder::internal::sort(c_st, y, iidx);
      topTwoMetrics.set_size(&rm_emlrtRTEI, &st, 0, y.size(0));
      indices.set_size(&sm_emlrtRTEI, &st, 0, iidx.size(0));
    }
  }
  if (indices.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, indices.size(0), &xc_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if (scores.size(0) < 1) {
    b_y.set_size(&wm_emlrtRTEI, &sp, 1, 0);
  } else {
    b_y.set_size(&wm_emlrtRTEI, &sp, 1, scores.size(0));
    loop_ub = scores.size(0) - 1;
    for (int32_T j{0}; j <= loop_ub; j++) {
      b_y[j] = static_cast<uint32_T>(j) + 1U;
    }
  }
  st.site = &uh_emlrtRSI;
  b_st.site = &ij_emlrtRSI;
  c_st.site = &jj_emlrtRSI;
  if (indices.size(1) != b_y.size(1)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  loop_ub = b_y.size(1);
  indexPairs.set_size(&cn_emlrtRTEI, &b_st, 2, b_y.size(1));
  for (int32_T j{0}; j < loop_ub; j++) {
    indexPairs[2 * j] = b_y[j];
  }
  loop_ub = indices.size(1);
  for (int32_T j{0}; j < loop_ub; j++) {
    indexPairs[2 * j + 1] = static_cast<uint32_T>(indices[indices.size(0) * j]);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void cvalgMatchFeatures(const emlrtStack &sp,
                        const array<uint8_T, 2U> &features1in,
                        array<uint8_T, 2U> &features2in,
                        array<uint32_T, 2U> &indexPairs,
                        array<real32_T, 1U> &matchMetric)
{
  array<real_T, 2U> b_numMatches_data;
  array<real_T, 2U> idxFeatures2;
  array<real32_T, 2U> pairMetric;
  array<uint32_T, 2U> relativeIndexPairs;
  array<uint32_T, 2U> varargin_2;
  array<uint8_T, 2U> b_features1in;
  array<uint8_T, 2U> b_features2in;
  array<uint8_T, 2U> d_features2in;
  bounded_array<cell_wrap_75, 5U, 2U> indexPairsCell;
  bounded_array<cell_wrap_76, 5U, 2U> matchMetricCell;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T numMatches_data[5];
  int32_T c_features2in[2];
  int32_T currentIdx;
  int32_T features2in_tmp;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  loop_ub = features1in.size(0);
  b_features1in.set_size(&bl_emlrtRTEI, &sp, 32, features1in.size(0));
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < 32; i1++) {
      b_features1in[i1 + 32 * i] = features1in[i + features1in.size(0) * i1];
    }
  }
  features2in_tmp = features2in.size(1);
  currentIdx = features2in.size(0);
  b_features2in.set_size(&cl_emlrtRTEI, &sp, features2in.size(1),
                         features2in.size(0));
  for (i = 0; i < currentIdx; i++) {
    for (i1 = 0; i1 < features2in_tmp; i1++) {
      b_features2in[i1 + b_features2in.size(0) * i] =
          features2in[i + features2in.size(0) * i1];
    }
  }
  features2in.set_size(&dl_emlrtRTEI, &sp, features2in_tmp, currentIdx);
  loop_ub_tmp = features2in_tmp * currentIdx;
  for (i = 0; i < loop_ub_tmp; i++) {
    features2in[i] = b_features2in[i];
  }
  if ((b_features1in.size(1) == 0) ||
      ((features2in.size(0) == 0) || (features2in.size(1) == 0))) {
    indexPairs.set_size(&ql_emlrtRTEI, &sp, 0, 2);
    matchMetric.set_size(&rl_emlrtRTEI, &sp, 0);
  } else {
    uint64_T u;
    uint32_T N2;
    st.site = &fh_emlrtRSI;
    N2 = static_cast<uint32_T>(features2in.size(1));
    u = static_cast<uint64_T>(b_features1in.size(1)) *
        static_cast<uint64_T>(features2in.size(1));
    if (u > 4294967295ULL) {
      u = 4294967295ULL;
    }
    if (static_cast<uint32_T>(u) < 1000000000U) {
      b_st.site = &gh_emlrtRSI;
      exhaustiveSearch(b_st, b_features1in, features2in,
                       static_cast<uint32_T>(b_features1in.size(1)),
                       static_cast<uint32_T>(features2in.size(1)),
                       relativeIndexPairs, pairMetric);
    } else {
      real_T totalMatches;
      int32_T b_loop_ub_tmp;
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
                                        &dc_emlrtBCI, &st);
        }
        indexPairsCell.data[indexPairsCell.size[0] * i].f1.set_size(
            &el_emlrtRTEI, &st, 2,
            indexPairsCell.data[indexPairsCell.size[0] * i].f1.size(1));
        if (i > indexPairsCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, indexPairsCell.size[1] - 1,
                                        &dc_emlrtBCI, &st);
        }
        indexPairsCell.data[indexPairsCell.size[0] * i].f1.set_size(
            &el_emlrtRTEI, &st,
            indexPairsCell.data[indexPairsCell.size[0] * i].f1.size(0), 0);
      }
      matchMetricCell.size[0] = 1;
      matchMetricCell.size[1] = numIterations;
      for (i = 0; i < unnamed_idx_1; i++) {
        if (i > matchMetricCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, matchMetricCell.size[1] - 1,
                                        &dc_emlrtBCI, &st);
        }
        matchMetricCell.data[matchMetricCell.size[0] * i].f1.set_size(
            &el_emlrtRTEI, &st, 1,
            matchMetricCell.data[matchMetricCell.size[0] * i].f1.size(1));
        if (i > matchMetricCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, matchMetricCell.size[1] - 1,
                                        &dc_emlrtBCI, &st);
        }
        matchMetricCell.data[matchMetricCell.size[0] * i].f1.set_size(
            &el_emlrtRTEI, &st,
            matchMetricCell.data[matchMetricCell.size[0] * i].f1.size(0), 0);
      }
      idxFeatures2.set_size(&fl_emlrtRTEI, &st, 1, 1);
      idxFeatures2[0] = 0.0;
      matchMetricCell.size[0] = 1;
      matchMetricCell.size[1] = numIterations;
      indexPairsCell.size[0] = 1;
      indexPairsCell.size[1] = numIterations;
      for (int32_T b_i{0}; b_i < numIterations; b_i++) {
        real_T b;
        if (b_i + 1 < numIterations) {
          b_st.site = &hh_emlrtRSI;
          totalMatches = ((static_cast<real_T>(b_i) + 1.0) - 1.0) *
                             static_cast<real_T>(numFeatures2) +
                         1.0;
          b = (static_cast<real_T>(b_i) + 1.0) *
              static_cast<real_T>(numFeatures2);
          c_st.site = &pj_emlrtRSI;
          if (b < totalMatches) {
            idxFeatures2.set_size(&hl_emlrtRTEI, &c_st, 1, 0);
          } else {
            loop_ub = static_cast<int32_T>(b - totalMatches);
            idxFeatures2.set_size(&hl_emlrtRTEI, &c_st, 1, loop_ub + 1);
            for (i = 0; i <= loop_ub; i++) {
              idxFeatures2[i] = totalMatches + static_cast<real_T>(i);
            }
          }
        } else {
          b_st.site = &ih_emlrtRSI;
          if (idxFeatures2.size(1) < 1) {
            emlrtDynamicBoundsCheckR2012b(idxFeatures2.size(1), 1,
                                          idxFeatures2.size(1), &cc_emlrtBCI,
                                          &b_st);
          }
          c_st.site = &pj_emlrtRSI;
          totalMatches = idxFeatures2[idxFeatures2.size(1) - 1];
          if (N2 < totalMatches + 1.0) {
            idxFeatures2.set_size(&gl_emlrtRTEI, &c_st, 1, 0);
          } else if (totalMatches + 1.0 == totalMatches + 1.0) {
            loop_ub = static_cast<int32_T>(static_cast<real_T>(N2) -
                                           (totalMatches + 1.0));
            idxFeatures2.set_size(&gl_emlrtRTEI, &c_st, 1, loop_ub + 1);
            for (i = 0; i <= loop_ub; i++) {
              idxFeatures2[i] = (totalMatches + 1.0) + static_cast<real_T>(i);
            }
          } else {
            d_st.site = &qj_emlrtRSI;
            eml_float_colon(d_st, totalMatches + 1.0, static_cast<real_T>(N2),
                            idxFeatures2);
          }
          numFeatures2 = idxFeatures2.size(1);
        }
        loop_ub = idxFeatures2.size(1);
        d_features2in.set_size(&il_emlrtRTEI, &st, features2in_tmp,
                               idxFeatures2.size(1));
        for (i = 0; i < loop_ub; i++) {
          for (i1 = 0; i1 < features2in_tmp; i1++) {
            if (idxFeatures2[i] !=
                static_cast<int32_T>(muDoubleScalarFloor(idxFeatures2[i]))) {
              emlrtIntegerCheckR2012b(idxFeatures2[i], &j_emlrtDCI, &st);
            }
            b_loop_ub_tmp = static_cast<int32_T>(idxFeatures2[i]);
            if ((b_loop_ub_tmp < 1) || (b_loop_ub_tmp > currentIdx)) {
              emlrtDynamicBoundsCheckR2012b(b_loop_ub_tmp, 1, currentIdx,
                                            &ec_emlrtBCI, &st);
            }
            d_features2in[i1 + d_features2in.size(0) * i] =
                features2in[i1 + features2in.size(0) * (b_loop_ub_tmp - 1)];
          }
        }
        b_st.site = &jh_emlrtRSI;
        exhaustiveSearch(b_st, b_features1in, d_features2in,
                         static_cast<uint32_T>(b_features1in.size(1)),
                         static_cast<uint32_T>(numFeatures2),
                         relativeIndexPairs, pairMetric);
        loop_ub_tmp = pairMetric.size(1);
        if (b_i + 1 > numIterations) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, numIterations, &fc_emlrtBCI,
                                        &st);
        }
        numMatches_data[b_i] = pairMetric.size(1);
        i = matchMetricCell.size[1] - 1;
        if (b_i > matchMetricCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, matchMetricCell.size[1] - 1,
                                        &vb_emlrtBCI, &st);
        }
        matchMetricCell.data[matchMetricCell.size[0] * b_i].f1.set_size(
            &jl_emlrtRTEI, &st, 1, pairMetric.size(1));
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          matchMetricCell.data[b_i].f1[i1] = pairMetric[i1];
        }
        if (idxFeatures2.size(1) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, idxFeatures2.size(1),
                                        &bc_emlrtBCI, &st);
        }
        b_st.site = &kh_emlrtRSI;
        totalMatches = idxFeatures2[0];
        loop_ub_tmp = relativeIndexPairs.size(1);
        varargin_2.set_size(&kl_emlrtRTEI, &b_st, 1,
                            relativeIndexPairs.size(1));
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
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
          varargin_2[i1] = qY;
        }
        c_st.site = &ij_emlrtRSI;
        d_st.site = &jj_emlrtRSI;
        if (varargin_2.size(1) != relativeIndexPairs.size(1)) {
          emlrtErrorWithMessageIdR2018a(
              &d_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
        }
        if (b_i > matchMetricCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, matchMetricCell.size[1] - 1,
                                        &hc_emlrtBCI, &c_st);
        }
        indexPairsCell.data[indexPairsCell.size[0] * b_i].f1.set_size(
            &ll_emlrtRTEI, &c_st, 2,
            indexPairsCell.data[indexPairsCell.size[0] * b_i].f1.size(1));
        if (b_i > matchMetricCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, matchMetricCell.size[1] - 1,
                                        &hc_emlrtBCI, &c_st);
        }
        indexPairsCell.data[indexPairsCell.size[0] * b_i].f1.set_size(
            &ll_emlrtRTEI, &c_st,
            indexPairsCell.data[indexPairsCell.size[0] * b_i].f1.size(0),
            relativeIndexPairs.size(1));
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &hc_emlrtBCI, &c_st);
          }
          indexPairsCell.data[b_i].f1[2 * i1] = relativeIndexPairs[2 * i1];
        }
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &hc_emlrtBCI, &c_st);
          }
          indexPairsCell.data[b_i].f1[2 * i1 + 1] = varargin_2[i1];
        }
      }
      b_numMatches_data.set(&numMatches_data[0], 1, numIterations);
      b_st.site = &lh_emlrtRSI;
      totalMatches = sum(b_st, b_numMatches_data);
      i = static_cast<int32_T>(muDoubleScalarFloor(totalMatches));
      if (totalMatches != i) {
        emlrtIntegerCheckR2012b(totalMatches, &i_emlrtDCI, &st);
      }
      loop_ub_tmp = static_cast<int32_T>(totalMatches);
      relativeIndexPairs.set_size(&ml_emlrtRTEI, &st, 2, loop_ub_tmp);
      b_loop_ub_tmp = loop_ub_tmp << 1;
      for (i1 = 0; i1 < b_loop_ub_tmp; i1++) {
        relativeIndexPairs[i1] = 0U;
      }
      if (loop_ub_tmp != i) {
        emlrtIntegerCheckR2012b(totalMatches, &h_emlrtDCI, &st);
      }
      pairMetric.set_size(&nl_emlrtRTEI, &st, 1, loop_ub_tmp);
      for (i = 0; i < loop_ub_tmp; i++) {
        pairMetric[i] = 0.0F;
      }
      currentIdx = 0;
      for (numFeatures2 = 0; numFeatures2 < numIterations; numFeatures2++) {
        if (numFeatures2 + 1 > numIterations) {
          emlrtDynamicBoundsCheckR2012b(numFeatures2 + 1, 1, numIterations,
                                        &gc_emlrtBCI, &st);
        }
        N2 = static_cast<uint32_T>(currentIdx) +
             static_cast<uint32_T>(numMatches_data[numFeatures2]);
        if (static_cast<uint32_T>(currentIdx) + 1U > N2) {
          i = 0;
          i1 = 0;
        } else {
          if ((static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U) <
               1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U) >
               loop_ub_tmp)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U), 1,
                static_cast<int32_T>(totalMatches), &ac_emlrtBCI, &st);
          }
          i = currentIdx;
          if ((static_cast<int32_T>(N2) < 1) ||
              (static_cast<int32_T>(N2) > loop_ub_tmp)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(N2), 1,
                                          static_cast<int32_T>(totalMatches),
                                          &yb_emlrtBCI, &st);
          }
          i1 = static_cast<int32_T>(N2);
        }
        if (numFeatures2 > indexPairsCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(
              numFeatures2, 0, indexPairsCell.size[1] - 1, &ub_emlrtBCI, &st);
        }
        c_features2in[0] = 2;
        features2in_tmp = i1 - i;
        c_features2in[1] = features2in_tmp;
        emlrtSubAssignSizeCheckR2012b(
            &c_features2in[0], 2, indexPairsCell.data[numFeatures2].f1.size(),
            2, &h_emlrtECI, &st);
        for (i1 = 0; i1 < features2in_tmp; i1++) {
          b_loop_ub_tmp = i + i1;
          relativeIndexPairs[2 * b_loop_ub_tmp] =
              indexPairsCell.data[numFeatures2].f1[2 * i1];
          relativeIndexPairs[2 * b_loop_ub_tmp + 1] =
              indexPairsCell.data[numFeatures2].f1[2 * i1 + 1];
        }
        if (static_cast<uint32_T>(currentIdx) + 1U > N2) {
          currentIdx = 0;
          i = 0;
        } else {
          if ((static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U) <
               1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U) >
               loop_ub_tmp)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(currentIdx) + 1U), 1,
                static_cast<int32_T>(totalMatches), &xb_emlrtBCI, &st);
          }
          if ((static_cast<int32_T>(N2) < 1) ||
              (static_cast<int32_T>(N2) > loop_ub_tmp)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(N2), 1,
                                          static_cast<int32_T>(totalMatches),
                                          &wb_emlrtBCI, &st);
          }
          i = static_cast<int32_T>(N2);
        }
        if (numFeatures2 > indexPairsCell.size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(
              numFeatures2, 0, indexPairsCell.size[1] - 1, &tb_emlrtBCI, &st);
        }
        i -= currentIdx;
        loop_ub = matchMetricCell.data[numFeatures2].f1.size(1);
        if (i != loop_ub) {
          emlrtSubAssignSizeCheck1dR2017a(i, loop_ub, &g_emlrtECI, &st);
        }
        for (i = 0; i < loop_ub; i++) {
          pairMetric[currentIdx + i] = matchMetricCell.data[numFeatures2].f1[i];
        }
        currentIdx = static_cast<int32_T>(N2);
      }
    }
    loop_ub = relativeIndexPairs.size(1);
    indexPairs.set_size(&ol_emlrtRTEI, &sp, relativeIndexPairs.size(1), 2);
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        indexPairs[i1 + indexPairs.size(0) * i] =
            relativeIndexPairs[i + 2 * i1];
      }
    }
    loop_ub = pairMetric.size(1);
    matchMetric.set_size(&pl_emlrtRTEI, &sp, pairMetric.size(1));
    for (i = 0; i < loop_ub; i++) {
      matchMetric[i] = pairMetric[i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void exhaustiveSearch(const emlrtStack &sp, const array<uint8_T, 2U> &features1,
                      const array<uint8_T, 2U> &features2,
                      real32_T matchThreshold, uint32_T N1, uint32_T N2,
                      array<uint32_T, 2U> &indexPairs,
                      array<real32_T, 2U> &matchMetric)
{
  array<int32_T, 2U> r2;
  array<int32_T, 2U> r3;
  array<int32_T, 2U> r4;
  array<real32_T, 2U> b_matchMetric;
  array<real32_T, 2U> c_matchMetric;
  array<real32_T, 2U> d_matchMetric;
  array<real32_T, 2U> e_matchMetric;
  array<real32_T, 2U> scores;
  array<uint32_T, 2U> b_indexPairs;
  array<uint8_T, 2U> b_features1;
  array<uint8_T, 2U> b_features2;
  array<uint8_T, 2U> b_r;
  array<uint8_T, 2U> c_features1;
  array<uint8_T, 2U> r1;
  array<boolean_T, 2U> unambiguousIndices;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &mh_emlrtRSI;
  b_st.site = &rh_emlrtRSI;
  loop_ub = features1.size(1);
  b_loop_ub = features1.size(0);
  b_features1.set_size(&ey_emlrtRTEI, &b_st, features1.size(1),
                       features1.size(0));
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (loop_ub_tmp = 0; loop_ub_tmp < loop_ub; loop_ub_tmp++) {
      b_features1[loop_ub_tmp + b_features1.size(0) * i] =
          features1[i + features1.size(0) * loop_ub_tmp];
    }
  }
  c_features1.set_size(&sl_emlrtRTEI, &b_st, features1.size(1),
                       features1.size(0));
  loop_ub_tmp = features1.size(0) * features1.size(1);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    c_features1[i] = b_features1[i];
  }
  c_loop_ub = features2.size(1);
  d_loop_ub = features2.size(0);
  b_features1.set_size(&tl_emlrtRTEI, &b_st, features2.size(1),
                       features2.size(0));
  for (int32_T i{0}; i < d_loop_ub; i++) {
    for (loop_ub_tmp = 0; loop_ub_tmp < c_loop_ub; loop_ub_tmp++) {
      b_features1[loop_ub_tmp + b_features1.size(0) * i] =
          features2[i + features2.size(0) * loop_ub_tmp];
    }
  }
  b_features2.set_size(&ul_emlrtRTEI, &b_st, features2.size(1),
                       features2.size(0));
  loop_ub_tmp = features2.size(0) * features2.size(1);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    b_features2[i] = b_features1[i];
  }
  c_st.site = &sh_emlrtRSI;
  scores.set_size(&vl_emlrtRTEI, &c_st, static_cast<int32_T>(N1),
                  static_cast<int32_T>(N2));
  loop_ub_tmp = static_cast<int32_T>(N1) * static_cast<int32_T>(N2);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    scores[i] = 0.0F;
  }
  b_r.set_size(&wl_emlrtRTEI, &c_st, features1.size(0), features1.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    for (loop_ub_tmp = 0; loop_ub_tmp < b_loop_ub; loop_ub_tmp++) {
      b_r[loop_ub_tmp + b_r.size(0) * i] =
          c_features1[i + c_features1.size(0) * loop_ub_tmp];
    }
  }
  r1.set_size(&xl_emlrtRTEI, &c_st, features2.size(0), features2.size(1));
  for (int32_T i{0}; i < c_loop_ub; i++) {
    for (loop_ub_tmp = 0; loop_ub_tmp < d_loop_ub; loop_ub_tmp++) {
      r1[loop_ub_tmp + r1.size(0) * i] =
          b_features2[i + b_features2.size(0) * loop_ub_tmp];
    }
  }
  ComputeMetric_hamming_single(&b_r[0], &r1[0], &scores[0],
                               static_cast<uint32_T>(c_features1.size(0)),
                               static_cast<uint32_T>(b_features2.size(0)),
                               static_cast<uint32_T>(c_features1.size(1)));
  st.site = &nh_emlrtRSI;
  findNearestNeighbors(st, scores, b_indexPairs, b_matchMetric);
  st.site = &oh_emlrtRSI;
  b_loop_ub = b_matchMetric.size(0);
  if (b_matchMetric.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, b_matchMetric.size(0), &ic_emlrtBCI,
                                  &st);
  }
  loop_ub = b_matchMetric.size(1);
  unambiguousIndices.set_size(&yl_emlrtRTEI, &st, 1, b_matchMetric.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    unambiguousIndices[i] =
        (b_matchMetric[b_matchMetric.size(0) * i] <= matchThreshold);
  }
  loop_ub_tmp = 0;
  for (c_loop_ub = 0; c_loop_ub < loop_ub; c_loop_ub++) {
    if (unambiguousIndices[c_loop_ub]) {
      loop_ub_tmp++;
    }
  }
  r2.set_size(&am_emlrtRTEI, &st, 1, loop_ub_tmp);
  loop_ub_tmp = 0;
  for (c_loop_ub = 0; c_loop_ub < loop_ub; c_loop_ub++) {
    if (unambiguousIndices[c_loop_ub]) {
      r2[loop_ub_tmp] = c_loop_ub;
      loop_ub_tmp++;
    }
  }
  loop_ub = r2.size(1);
  indexPairs.set_size(&bm_emlrtRTEI, &st, 2, r2.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r2[i] > b_indexPairs.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(r2[i], 0, b_indexPairs.size(1) - 1,
                                    &pc_emlrtBCI, &st);
    }
    indexPairs[2 * i] = b_indexPairs[2 * r2[i]];
    if (r2[i] > b_indexPairs.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(r2[i], 0, b_indexPairs.size(1) - 1,
                                    &pc_emlrtBCI, &st);
    }
    indexPairs[2 * i + 1] = b_indexPairs[2 * r2[i] + 1];
  }
  b_indexPairs.set_size(&cm_emlrtRTEI, &st, 2, indexPairs.size(1));
  loop_ub_tmp = indexPairs.size(1) << 1;
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    b_indexPairs[i] = indexPairs[i];
  }
  c_matchMetric.set_size(&dm_emlrtRTEI, &st, b_matchMetric.size(0), r2.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    for (loop_ub_tmp = 0; loop_ub_tmp < b_loop_ub; loop_ub_tmp++) {
      if (r2[i] > b_matchMetric.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(r2[i], 0, b_matchMetric.size(1) - 1,
                                      &kc_emlrtBCI, &st);
      }
      c_matchMetric[loop_ub_tmp + c_matchMetric.size(0) * i] =
          b_matchMetric[loop_ub_tmp + b_matchMetric.size(0) * r2[i]];
    }
  }
  loop_ub = c_matchMetric.size(1);
  b_matchMetric.set_size(&em_emlrtRTEI, &st, c_matchMetric.size(0),
                         c_matchMetric.size(1));
  loop_ub_tmp = c_matchMetric.size(0) * c_matchMetric.size(1);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    b_matchMetric[i] = c_matchMetric[i];
  }
  st.site = &ph_emlrtRSI;
  if (N2 > 1U) {
    d_matchMetric.set_size(&gm_emlrtRTEI, &st, b_matchMetric.size(0),
                           b_matchMetric.size(1));
    loop_ub = b_matchMetric.size(0) * b_matchMetric.size(1) - 1;
    for (int32_T i{0}; i <= loop_ub; i++) {
      d_matchMetric[i] = b_matchMetric[i];
    }
    b_st.site = &kj_emlrtRSI;
    findUnambiguousMatches(b_st, d_matchMetric, 0.7, unambiguousIndices);
  } else {
    unambiguousIndices.set_size(&fm_emlrtRTEI, &st, 1, c_matchMetric.size(1));
    for (int32_T i{0}; i < loop_ub; i++) {
      unambiguousIndices[i] = true;
    }
  }
  b_loop_ub = unambiguousIndices.size(1);
  loop_ub_tmp = 0;
  for (c_loop_ub = 0; c_loop_ub < b_loop_ub; c_loop_ub++) {
    if (unambiguousIndices[c_loop_ub]) {
      loop_ub_tmp++;
    }
  }
  r3.set_size(&am_emlrtRTEI, &st, 1, loop_ub_tmp);
  loop_ub_tmp = 0;
  for (c_loop_ub = 0; c_loop_ub < b_loop_ub; c_loop_ub++) {
    if (unambiguousIndices[c_loop_ub]) {
      r3[loop_ub_tmp] = c_loop_ub;
      loop_ub_tmp++;
    }
  }
  loop_ub = r3.size(1);
  indexPairs.set_size(&hm_emlrtRTEI, &st, 2, r3.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > b_indexPairs.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, b_indexPairs.size(1) - 1,
                                    &oc_emlrtBCI, &st);
    }
    indexPairs[2 * i] = b_indexPairs[2 * r3[i]];
    if (r3[i] > b_indexPairs.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, b_indexPairs.size(1) - 1,
                                    &oc_emlrtBCI, &st);
    }
    indexPairs[2 * i + 1] = b_indexPairs[2 * r3[i] + 1];
  }
  b_indexPairs.set_size(&im_emlrtRTEI, &st, 2, indexPairs.size(1));
  loop_ub_tmp = indexPairs.size(1) << 1;
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    b_indexPairs[i] = indexPairs[i];
  }
  if (c_matchMetric.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, c_matchMetric.size(0), &jc_emlrtBCI,
                                  &st);
  }
  e_matchMetric.set_size(&jm_emlrtRTEI, &st, 1, r3.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    if (r3[i] > b_matchMetric.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(r3[i], 0, b_matchMetric.size(1) - 1,
                                    &lc_emlrtBCI, &st);
    }
    e_matchMetric[i] = b_matchMetric[b_matchMetric.size(0) * r3[i]];
  }
  if (b_indexPairs.size(1) == 0) {
    indexPairs.set_size(&mm_emlrtRTEI, &sp, 2, 0);
    matchMetric.set_size(&nm_emlrtRTEI, &sp, 1, 0);
  } else {
    st.site = &qh_emlrtRSI;
    findUniqueIndices(st, scores, b_indexPairs, unambiguousIndices);
    b_loop_ub = unambiguousIndices.size(1);
    loop_ub_tmp = 0;
    for (c_loop_ub = 0; c_loop_ub < b_loop_ub; c_loop_ub++) {
      if (unambiguousIndices[c_loop_ub]) {
        loop_ub_tmp++;
      }
    }
    r4.set_size(&am_emlrtRTEI, &sp, 1, loop_ub_tmp);
    loop_ub_tmp = 0;
    for (c_loop_ub = 0; c_loop_ub < b_loop_ub; c_loop_ub++) {
      if (unambiguousIndices[c_loop_ub]) {
        r4[loop_ub_tmp] = c_loop_ub;
        loop_ub_tmp++;
      }
    }
    loop_ub = r4.size(1);
    indexPairs.set_size(&km_emlrtRTEI, &sp, 2, r4.size(1));
    for (int32_T i{0}; i < loop_ub; i++) {
      if (r4[i] > b_indexPairs.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(r4[i], 0, b_indexPairs.size(1) - 1,
                                      &nc_emlrtBCI, (emlrtConstCTX)&sp);
      }
      indexPairs[2 * i] = b_indexPairs[2 * r4[i]];
      if (r4[i] > b_indexPairs.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(r4[i], 0, b_indexPairs.size(1) - 1,
                                      &nc_emlrtBCI, (emlrtConstCTX)&sp);
      }
      indexPairs[2 * i + 1] = b_indexPairs[2 * r4[i] + 1];
    }
    matchMetric.set_size(&lm_emlrtRTEI, &sp, 1, r4.size(1));
    for (int32_T i{0}; i < loop_ub; i++) {
      if (r4[i] > r3.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(r4[i], 0, r3.size(1) - 1, &mc_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      matchMetric[i] = e_matchMetric[r4[i]];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace matchFeatures
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (cvalgMatchFeatures.cpp)
