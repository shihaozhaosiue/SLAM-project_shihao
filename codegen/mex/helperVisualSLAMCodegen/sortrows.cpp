//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sortrows.cpp
//
// Code generation for function 'sortrows'
//

// Include files
#include "sortrows.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "sortLE.h"
#include "coder_array.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo jcb_emlrtRSI{
    82,        // lineNo
    "sortIdx", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRTEInfo dub_emlrtRTEI{
    29,         // lineNo
    1,          // colNo
    "sortrows", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m" // pName
};

// Function Definitions
namespace coder {
void sortrows(const emlrtStack &sp, array<int32_T, 2U> &y,
              array<real_T, 1U> &ndx)
{
  array<int32_T, 1U> idx;
  array<int32_T, 1U> iwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T i;
  int32_T i2;
  int32_T j;
  int32_T loop_ub;
  int32_T n;
  int32_T qEnd;
  boolean_T b_overflow;
  boolean_T overflow;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &hcb_emlrtRSI;
  n = y.size(0) + 1;
  loop_ub = y.size(0);
  idx.set_size(&jv_emlrtRTEI, &st, loop_ub);
  for (i2 = 0; i2 < loop_ub; i2++) {
    idx[i2] = 0;
  }
  if (y.size(0) == 0) {
    b_st.site = &jcb_emlrtRSI;
  } else {
    int32_T b_k;
    int32_T k;
    int32_T v1;
    int32_T v2;
    boolean_T exitg1;
    b_st.site = &kcb_emlrtRSI;
    iwork.set_size(&cv_emlrtRTEI, &b_st, loop_ub);
    i2 = y.size(0) - 1;
    c_st.site = &lcb_emlrtRSI;
    if (y.size(0) - 1 > 2147483645) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (k = 1; k <= i2; k += 2) {
      overflow = true;
      b_k = 0;
      exitg1 = false;
      while ((!exitg1) && (b_k < 2)) {
        v1 = y[(k + y.size(0) * b_k) - 1];
        v2 = y[k + y.size(0) * b_k];
        if (v1 == v2) {
          b_k++;
        } else {
          overflow = (v1 <= v2);
          exitg1 = true;
        }
      }
      if (overflow) {
        idx[k - 1] = k;
        idx[k] = k + 1;
      } else {
        idx[k - 1] = k + 1;
        idx[k] = k;
      }
    }
    if ((static_cast<uint32_T>(y.size(0)) & 1U) != 0U) {
      idx[i2] = loop_ub;
    }
    i = 2;
    while (i < n - 1) {
      i2 = i << 1;
      j = 1;
      for (int32_T pEnd{i + 1}; pEnd < n; pEnd = qEnd + i) {
        int32_T kEnd;
        int32_T p;
        int32_T q;
        p = j;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          overflow = true;
          b_k = 0;
          exitg1 = false;
          while ((!exitg1) && (b_k < 2)) {
            v1 = y[(idx[p - 1] + y.size(0) * b_k) - 1];
            v2 = y[(idx[q - 1] + y.size(0) * b_k) - 1];
            if (v1 == v2) {
              b_k++;
            } else {
              overflow = (v1 <= v2);
              exitg1 = true;
            }
          }
          if (overflow) {
            iwork[k] = idx[p - 1];
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                k++;
                iwork[k] = idx[q - 1];
                q++;
              }
            }
          } else {
            iwork[k] = idx[q - 1];
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                k++;
                iwork[k] = idx[p - 1];
                p++;
              }
            }
          }
          k++;
        }
        c_st.site = &mcb_emlrtRSI;
        for (k = 0; k < kEnd; k++) {
          idx[(j + k) - 1] = iwork[k];
        }
        j = qEnd;
      }
      i = i2;
    }
  }
  st.site = &icb_emlrtRSI;
  iwork.set_size(&kv_emlrtRTEI, &st, loop_ub);
  overflow = (loop_ub > 2147483646);
  b_overflow = (loop_ub > 2147483646);
  for (j = 0; j < 2; j++) {
    b_st.site = &ncb_emlrtRSI;
    if (overflow) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (i = 0; i < loop_ub; i++) {
      iwork[i] = y[(idx[i] + y.size(0) * j) - 1];
    }
    b_st.site = &ocb_emlrtRSI;
    if (b_overflow) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (i = 0; i < loop_ub; i++) {
      y[i + y.size(0) * j] = iwork[i];
    }
  }
  ndx.set_size(&dub_emlrtRTEI, &sp, loop_ub);
  for (i2 = 0; i2 < loop_ub; i2++) {
    ndx[i2] = idx[i2];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sortrows(const emlrtStack &sp, array<real_T, 2U> &y,
              array<real_T, 1U> &ndx)
{
  array<real_T, 1U> ycol;
  array<int32_T, 1U> idx;
  array<int32_T, 1U> iwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T b_i;
  int32_T i;
  int32_T j;
  int32_T loop_ub;
  int32_T n;
  int32_T qEnd;
  boolean_T b_overflow;
  boolean_T overflow;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &hcb_emlrtRSI;
  n = y.size(0) + 1;
  loop_ub = y.size(0);
  idx.set_size(&jv_emlrtRTEI, &st, loop_ub);
  for (i = 0; i < loop_ub; i++) {
    idx[i] = 0;
  }
  if (y.size(0) == 0) {
    int32_T i2;
    int32_T pEnd;
    b_st.site = &jcb_emlrtRSI;
    if (y.size(0) > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    i2 = ((n - 1) / 4) << 2;
    pEnd = i2 - 4;
    for (int32_T k{0}; k <= pEnd; k += 4) {
      _mm_storeu_si128(
          (__m128i *)&idx[k],
          _mm_add_epi32(
              _mm_add_epi32(_mm_set1_epi32(k),
                            _mm_loadu_si128((const __m128i *)&iv3[0])),
              _mm_set1_epi32(1)));
    }
    for (int32_T k{i2}; k <= n - 2; k++) {
      idx[k] = k + 1;
    }
  } else {
    int32_T i2;
    int32_T k;
    b_st.site = &kcb_emlrtRSI;
    iwork.set_size(&cv_emlrtRTEI, &b_st, loop_ub);
    i2 = y.size(0) - 1;
    c_st.site = &lcb_emlrtRSI;
    if (y.size(0) - 1 > 2147483645) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (k = 1; k <= i2; k += 2) {
      if (internal::sortLE(y, k, k + 1)) {
        idx[k - 1] = k;
        idx[k] = k + 1;
      } else {
        idx[k - 1] = k + 1;
        idx[k] = k;
      }
    }
    if ((static_cast<uint32_T>(y.size(0)) & 1U) != 0U) {
      idx[i2] = loop_ub;
    }
    b_i = 2;
    while (b_i < n - 1) {
      i2 = b_i << 1;
      j = 1;
      for (int32_T pEnd{b_i + 1}; pEnd < n; pEnd = qEnd + b_i) {
        int32_T kEnd;
        int32_T p;
        int32_T q;
        p = j;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          int32_T i1;
          i = idx[q - 1];
          i1 = idx[p - 1];
          if (internal::sortLE(y, i1, i)) {
            iwork[k] = i1;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                k++;
                iwork[k] = idx[q - 1];
                q++;
              }
            }
          } else {
            iwork[k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                k++;
                iwork[k] = idx[p - 1];
                p++;
              }
            }
          }
          k++;
        }
        c_st.site = &mcb_emlrtRSI;
        for (k = 0; k < kEnd; k++) {
          idx[(j + k) - 1] = iwork[k];
        }
        j = qEnd;
      }
      b_i = i2;
    }
  }
  st.site = &icb_emlrtRSI;
  ycol.set_size(&kv_emlrtRTEI, &st, loop_ub);
  overflow = (loop_ub > 2147483646);
  b_overflow = (loop_ub > 2147483646);
  for (j = 0; j < 2; j++) {
    b_st.site = &ncb_emlrtRSI;
    if (overflow) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (b_i = 0; b_i < loop_ub; b_i++) {
      ycol[b_i] = y[(idx[b_i] + y.size(0) * j) - 1];
    }
    b_st.site = &ocb_emlrtRSI;
    if (b_overflow) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (b_i = 0; b_i < loop_ub; b_i++) {
      y[b_i + y.size(0) * j] = ycol[b_i];
    }
  }
  loop_ub = idx.size(0);
  ndx.set_size(&dub_emlrtRTEI, &sp, idx.size(0));
  for (i = 0; i < loop_ub; i++) {
    ndx[i] = idx[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (sortrows.cpp)
