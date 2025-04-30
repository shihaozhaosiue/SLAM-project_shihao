//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// normalizePoints.cpp
//
// Code generation for function 'normalizePoints'
//

// Include files
#include "normalizePoints.h"
#include "combineVectorElements.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo yl_emlrtRSI{
    25,                // lineNo
    "normalizePoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\normalizePoints.m" // pathName
};

static emlrtRSInfo lo_emlrtRSI{
    19,                // lineNo
    "normalizePoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\normalizePoints.m" // pathName
};

static emlrtRTEInfo kp_emlrtRTEI{
    46,                // lineNo
    5,                 // colNo
    "normalizePoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\normalizePoints.m" // pName
};

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
void normalizePoints(const emlrtStack &sp, const real32_T p[8],
                     real32_T normPoints[8], real32_T T[9])
{
  __m128 b_r;
  emlrtStack st;
  int32_T xoffset;
  real32_T y[8];
  real32_T b_y[4];
  real32_T accumulatedData_idx_0;
  real32_T accumulatedData_idx_1;
  real32_T meanDistanceFromCenter;
  boolean_T b_p;
  st.prev = &sp;
  st.tls = sp.tls;
  accumulatedData_idx_0 = p[0];
  accumulatedData_idx_1 = p[1];
  for (int32_T k{0}; k < 3; k++) {
    xoffset = (k + 1) << 1;
    accumulatedData_idx_0 += p[xoffset];
    accumulatedData_idx_1 += p[xoffset + 1];
  }
  accumulatedData_idx_0 /= 4.0F;
  accumulatedData_idx_1 /= 4.0F;
  for (int32_T k{0}; k < 4; k++) {
    xoffset = k << 1;
    normPoints[xoffset] = p[xoffset] - accumulatedData_idx_0;
    normPoints[xoffset + 1] = p[xoffset + 1] - accumulatedData_idx_1;
  }
  b_r = _mm_loadu_ps(&normPoints[0]);
  _mm_storeu_ps(&y[0], _mm_mul_ps(b_r, b_r));
  b_r = _mm_loadu_ps(&normPoints[4]);
  _mm_storeu_ps(&y[4], _mm_mul_ps(b_r, b_r));
  b_y[0] = sumColumnB(y, 1);
  b_y[1] = sumColumnB(y, 2);
  b_y[2] = sumColumnB(y, 3);
  b_y[3] = sumColumnB(y, 4);
  st.site = &yl_emlrtRSI;
  b_p = false;
  for (int32_T k{0}; k < 4; k++) {
    if (b_p || (b_y[k] < 0.0F)) {
      b_p = true;
    }
  }
  if (b_p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  b_r = _mm_loadu_ps(&b_y[0]);
  _mm_storeu_ps(&b_y[0], _mm_sqrt_ps(b_r));
  meanDistanceFromCenter = sumColumnB(b_y) / 4.0F;
  if (meanDistanceFromCenter > 0.0F) {
    meanDistanceFromCenter = 1.41421354F / meanDistanceFromCenter;
  } else {
    meanDistanceFromCenter = 1.0F;
  }
  for (xoffset = 0; xoffset < 9; xoffset++) {
    T[xoffset] = 0.0F;
  }
  __m128 r1;
  T[0] = meanDistanceFromCenter;
  T[4] = meanDistanceFromCenter;
  T[6] = -meanDistanceFromCenter * accumulatedData_idx_0;
  T[7] = -meanDistanceFromCenter * accumulatedData_idx_1;
  T[8] = 1.0F;
  b_r = _mm_loadu_ps(&normPoints[0]);
  r1 = _mm_set1_ps(meanDistanceFromCenter);
  _mm_storeu_ps(&normPoints[0], _mm_mul_ps(b_r, r1));
  b_r = _mm_loadu_ps(&normPoints[4]);
  _mm_storeu_ps(&normPoints[4], _mm_mul_ps(b_r, r1));
}

void normalizePoints(const emlrtStack &sp, const array<real32_T, 2U> &p,
                     array<real32_T, 2U> &normPoints, real32_T T[9])
{
  __m128 r1;
  array<real32_T, 2U> b_r;
  array<real32_T, 2U> y;
  array<real32_T, 1U> b_y;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T firstBlockLength;
  int32_T lastBlockLength;
  int32_T nblocks;
  int32_T xblockoffset;
  real32_T accumulatedData_idx_0;
  real32_T accumulatedData_idx_1;
  real32_T bsum_idx_0;
  boolean_T b_p;
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
  st.site = &lo_emlrtRSI;
  b_st.site = &mo_emlrtRSI;
  c_st.site = &uj_emlrtRSI;
  if (p.size(1) == 0) {
    accumulatedData_idx_0 = 0.0F;
    accumulatedData_idx_1 = 0.0F;
  } else {
    int32_T xoffset;
    d_st.site = &no_emlrtRSI;
    if (p.size(1) <= 1024) {
      firstBlockLength = p.size(1);
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = static_cast<int32_T>(static_cast<uint32_T>(p.size(1)) >> 10);
      lastBlockLength = p.size(1) - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }
    accumulatedData_idx_0 = p[0];
    accumulatedData_idx_1 = p[1];
    for (int32_T k{2}; k <= firstBlockLength; k++) {
      xoffset = (k - 1) << 1;
      accumulatedData_idx_0 += p[xoffset % 2 + 2 * (xoffset / 2)];
      accumulatedData_idx_1 += p[(xoffset + 1) % 2 + 2 * ((xoffset + 1) / 2)];
    }
    for (int32_T ib{2}; ib <= nblocks; ib++) {
      real32_T bsum_idx_1;
      xblockoffset = (ib - 1) << 11;
      bsum_idx_0 = p[xblockoffset % 2 + 2 * (xblockoffset / 2)];
      bsum_idx_1 = p[(xblockoffset + 1) % 2 + 2 * ((xblockoffset + 1) / 2)];
      if (ib == nblocks) {
        firstBlockLength = lastBlockLength;
      } else {
        firstBlockLength = 1024;
      }
      for (int32_T k{2}; k <= firstBlockLength; k++) {
        xoffset = xblockoffset + ((k - 1) << 1);
        bsum_idx_0 += p[xoffset % 2 + 2 * (xoffset / 2)];
        bsum_idx_1 += p[(xoffset + 1) % 2 + 2 * ((xoffset + 1) / 2)];
      }
      accumulatedData_idx_0 += bsum_idx_0;
      accumulatedData_idx_1 += bsum_idx_1;
    }
  }
  accumulatedData_idx_0 /= static_cast<real32_T>(p.size(1));
  accumulatedData_idx_1 /= static_cast<real32_T>(p.size(1));
  lastBlockLength = p.size(1);
  normPoints.set_size(&jp_emlrtRTEI, &sp, 2, p.size(1));
  if (p.size(1) != 0) {
    firstBlockLength = (p.size(1) != 1);
    for (int32_T k{0}; k < lastBlockLength; k++) {
      xblockoffset = firstBlockLength * k;
      normPoints[2 * k] = p[2 * xblockoffset] - accumulatedData_idx_0;
      normPoints[2 * k + 1] = p[2 * xblockoffset + 1] - accumulatedData_idx_1;
    }
  }
  st.site = &yl_emlrtRSI;
  b_st.site = &sj_emlrtRSI;
  b_r.set_size(&ao_emlrtRTEI, &b_st, 2, p.size(1));
  nblocks = normPoints.size(1) << 1;
  for (lastBlockLength = 0; lastBlockLength < nblocks; lastBlockLength++) {
    bsum_idx_0 = normPoints[lastBlockLength];
    b_r[lastBlockLength] = bsum_idx_0 * bsum_idx_0;
  }
  c_st.site = &tj_emlrtRSI;
  b_combineVectorElements(c_st, b_r, y);
  st.site = &yl_emlrtRSI;
  b_p = false;
  lastBlockLength = y.size(1);
  for (int32_T k{0}; k < lastBlockLength; k++) {
    if (b_p || (y[k] < 0.0F)) {
      b_p = true;
    }
  }
  if (b_p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  b_st.site = &po_emlrtRSI;
  c_st.site = &qo_emlrtRSI;
  if (y.size(1) > 2147483646) {
    d_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  xblockoffset = (y.size(1) / 4) << 2;
  firstBlockLength = xblockoffset - 4;
  for (int32_T k{0}; k <= firstBlockLength; k += 4) {
    r1 = _mm_loadu_ps(&y[k]);
    _mm_storeu_ps(&y[k], _mm_sqrt_ps(r1));
  }
  for (int32_T k{xblockoffset}; k < lastBlockLength; k++) {
    y[k] = muSingleScalarSqrt(y[k]);
  }
  st.site = &yl_emlrtRSI;
  b_st.site = &mo_emlrtRSI;
  c_st.site = &uj_emlrtRSI;
  if (y.size(1) == 0) {
    bsum_idx_0 = 0.0F;
  } else {
    d_st.site = &vj_emlrtRSI;
    firstBlockLength = y.size(1);
    b_y = y.reshape(firstBlockLength);
    e_st.site = &wj_emlrtRSI;
    bsum_idx_0 = sumMatrixColumns(e_st, b_y, y.size(1));
  }
  bsum_idx_0 /= static_cast<real32_T>(y.size(1));
  if (bsum_idx_0 > 0.0F) {
    bsum_idx_0 = 1.41421354F / bsum_idx_0;
  } else {
    bsum_idx_0 = 1.0F;
  }
  for (lastBlockLength = 0; lastBlockLength < 9; lastBlockLength++) {
    T[lastBlockLength] = 0.0F;
  }
  T[0] = bsum_idx_0;
  T[4] = bsum_idx_0;
  T[6] = -bsum_idx_0 * accumulatedData_idx_0;
  T[7] = -bsum_idx_0 * accumulatedData_idx_1;
  T[8] = 1.0F;
  normPoints.set_size(&kp_emlrtRTEI, &sp, 2, normPoints.size(1));
  xblockoffset = (nblocks / 4) << 2;
  firstBlockLength = xblockoffset - 4;
  for (lastBlockLength = 0; lastBlockLength <= firstBlockLength;
       lastBlockLength += 4) {
    r1 = _mm_loadu_ps(&normPoints[lastBlockLength]);
    _mm_storeu_ps(&normPoints[lastBlockLength],
                  _mm_mul_ps(r1, _mm_set1_ps(bsum_idx_0)));
  }
  for (lastBlockLength = xblockoffset; lastBlockLength < nblocks;
       lastBlockLength++) {
    normPoints[lastBlockLength] = normPoints[lastBlockLength] * bsum_idx_0;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (normalizePoints.cpp)
