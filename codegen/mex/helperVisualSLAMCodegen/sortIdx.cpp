//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sortIdx.cpp
//
// Code generation for function 'sortIdx'
//

// Include files
#include "sortIdx.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo dj_emlrtRSI{
    488,           // lineNo
    "merge_block", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo ej_emlrtRSI{
    496,           // lineNo
    "merge_block", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo fj_emlrtRSI{
    503,           // lineNo
    "merge_block", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo gj_emlrtRSI{
    550,     // lineNo
    "merge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo hj_emlrtRSI{
    519,     // lineNo
    "merge", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo gdb_emlrtRSI{
    432,                      // lineNo
    "initialize_vector_sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo hdb_emlrtRSI{
    457,                      // lineNo
    "initialize_vector_sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo idb_emlrtRSI{
    462,                      // lineNo
    "initialize_vector_sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo ifb_emlrtRSI{
    145,       // lineNo
    "sortIdx", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo ibd_emlrtRSI{
    333,                // lineNo
    "block_merge_sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo jbd_emlrtRSI{
    347,          // lineNo
    "shift_NaNs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo kbd_emlrtRSI{
    356,          // lineNo
    "shift_NaNs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRTEInfo bv_emlrtRTEI{
    61,        // lineNo
    5,         // colNo
    "sortIdx", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pName
};

// Function Declarations
namespace coder {
namespace internal {
static void b_merge(const emlrtStack &sp, array<int32_T, 1U> &idx,
                    array<real_T, 1U> &x, int32_T offset, int32_T np,
                    int32_T nq, array<int32_T, 1U> &iwork,
                    array<real_T, 1U> &xwork);

static void b_merge_block(const emlrtStack &sp, array<int32_T, 1U> &idx,
                          array<real_T, 1U> &x, int32_T offset, int32_T n,
                          int32_T preSortLevel, array<int32_T, 1U> &iwork,
                          array<real_T, 1U> &xwork);

static void merge(const emlrtStack &sp, array<int32_T, 2U> &idx,
                  array<real32_T, 2U> &x, int32_T offset, int32_T np,
                  int32_T nq, array<int32_T, 1U> &iwork,
                  array<real32_T, 1U> &xwork);

static void merge(const emlrtStack &sp, array<int32_T, 1U> &idx,
                  array<uint32_T, 1U> &x, int32_T offset, int32_T np,
                  int32_T nq, array<int32_T, 1U> &iwork,
                  array<uint32_T, 1U> &xwork);

static void merge(const emlrtStack &sp, array<int32_T, 1U> &idx,
                  array<real32_T, 1U> &x, int32_T offset, int32_T np,
                  int32_T nq, array<int32_T, 1U> &iwork,
                  array<real32_T, 1U> &xwork);

static void merge(const emlrtStack &sp, array<int32_T, 1U> &idx,
                  array<int32_T, 1U> &x, int32_T offset, int32_T np, int32_T nq,
                  array<int32_T, 1U> &iwork, array<int32_T, 1U> &xwork);

static void merge(const emlrtStack &sp, array<int32_T, 1U> &idx,
                  array<real_T, 1U> &x, int32_T offset, int32_T np, int32_T nq,
                  array<int32_T, 1U> &iwork, array<real_T, 1U> &xwork);

static void merge_block(const emlrtStack &sp, array<int32_T, 1U> &idx,
                        array<uint32_T, 1U> &x, int32_T offset, int32_T n,
                        int32_T preSortLevel, array<int32_T, 1U> &iwork,
                        array<uint32_T, 1U> &xwork);

static void merge_block(const emlrtStack &sp, array<int32_T, 1U> &idx,
                        array<real32_T, 1U> &x, int32_T offset, int32_T n,
                        int32_T preSortLevel, array<int32_T, 1U> &iwork,
                        array<real32_T, 1U> &xwork);

static void merge_block(const emlrtStack &sp, array<int32_T, 1U> &idx,
                        array<int32_T, 1U> &x, int32_T offset, int32_T n,
                        int32_T preSortLevel, array<int32_T, 1U> &iwork,
                        array<int32_T, 1U> &xwork);

static void merge_block(const emlrtStack &sp, array<int32_T, 1U> &idx,
                        array<real_T, 1U> &x, int32_T offset, int32_T n,
                        int32_T preSortLevel, array<int32_T, 1U> &iwork,
                        array<real_T, 1U> &xwork);

} // namespace internal
} // namespace coder

// Function Definitions
namespace coder {
namespace internal {
static void b_merge(const emlrtStack &sp, array<int32_T, 1U> &idx,
                    array<real_T, 1U> &x, int32_T offset, int32_T np,
                    int32_T nq, array<int32_T, 1U> &iwork,
                    array<real_T, 1U> &xwork)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (nq != 0) {
    int32_T iout;
    int32_T n_tmp;
    int32_T p;
    int32_T q;
    n_tmp = np + nq;
    st.site = &hj_emlrtRSI;
    if (n_tmp > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T j{0}; j < n_tmp; j++) {
      iout = offset + j;
      iwork[j] = idx[iout];
      xwork[j] = x[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork[p] >= xwork[q]) {
        idx[iout] = iwork[p];
        x[iout] = xwork[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx[iout] = iwork[q];
        x[iout] = xwork[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          st.site = &gj_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(b_st);
          }
          for (int32_T j{p + 1}; j <= np; j++) {
            iout = q + j;
            idx[iout] = iwork[j - 1];
            x[iout] = xwork[j - 1];
          }
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

static void b_merge_block(const emlrtStack &sp, array<int32_T, 1U> &idx,
                          array<real_T, 1U> &x, int32_T offset, int32_T n,
                          int32_T preSortLevel, array<int32_T, 1U> &iwork,
                          array<real_T, 1U> &xwork)
{
  emlrtStack st;
  int32_T bLen;
  int32_T nPairs;
  st.prev = &sp;
  st.tls = sp.tls;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    int32_T nTail;
    int32_T tailOffset;
    if ((static_cast<uint32_T>(nPairs) & 1U) != 0U) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        st.site = &dj_emlrtRSI;
        b_merge(st, idx, x, offset + tailOffset, bLen, nTail - bLen, iwork,
                xwork);
      }
    }
    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      st.site = &ej_emlrtRSI;
      b_merge(st, idx, x, offset + nTail * tailOffset, bLen, bLen, iwork,
              xwork);
    }
    bLen = tailOffset;
  }
  if (n > bLen) {
    st.site = &fj_emlrtRSI;
    b_merge(st, idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

static void merge(const emlrtStack &sp, array<int32_T, 2U> &idx,
                  array<real32_T, 2U> &x, int32_T offset, int32_T np,
                  int32_T nq, array<int32_T, 1U> &iwork,
                  array<real32_T, 1U> &xwork)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (nq != 0) {
    int32_T iout;
    int32_T n_tmp;
    int32_T p;
    int32_T q;
    n_tmp = np + nq;
    st.site = &hj_emlrtRSI;
    if (n_tmp > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T j{0}; j < n_tmp; j++) {
      iout = offset + j;
      iwork[j] = idx[iout];
      xwork[j] = x[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork[p] <= xwork[q]) {
        idx[iout] = iwork[p];
        x[iout] = xwork[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx[iout] = iwork[q];
        x[iout] = xwork[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          st.site = &gj_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(b_st);
          }
          for (int32_T j{p + 1}; j <= np; j++) {
            iout = q + j;
            idx[iout] = iwork[j - 1];
            x[iout] = xwork[j - 1];
          }
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

static void merge(const emlrtStack &sp, array<int32_T, 1U> &idx,
                  array<uint32_T, 1U> &x, int32_T offset, int32_T np,
                  int32_T nq, array<int32_T, 1U> &iwork,
                  array<uint32_T, 1U> &xwork)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (nq != 0) {
    int32_T iout;
    int32_T n_tmp;
    int32_T p;
    int32_T q;
    n_tmp = np + nq;
    st.site = &hj_emlrtRSI;
    if (n_tmp > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T j{0}; j < n_tmp; j++) {
      iout = offset + j;
      iwork[j] = idx[iout];
      xwork[j] = x[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork[p] <= xwork[q]) {
        idx[iout] = iwork[p];
        x[iout] = xwork[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx[iout] = iwork[q];
        x[iout] = xwork[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          st.site = &gj_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(b_st);
          }
          for (int32_T j{p + 1}; j <= np; j++) {
            iout = q + j;
            idx[iout] = iwork[j - 1];
            x[iout] = xwork[j - 1];
          }
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

static void merge(const emlrtStack &sp, array<int32_T, 1U> &idx,
                  array<real32_T, 1U> &x, int32_T offset, int32_T np,
                  int32_T nq, array<int32_T, 1U> &iwork,
                  array<real32_T, 1U> &xwork)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (nq != 0) {
    int32_T iout;
    int32_T n_tmp;
    int32_T p;
    int32_T q;
    n_tmp = np + nq;
    st.site = &hj_emlrtRSI;
    if (n_tmp > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T j{0}; j < n_tmp; j++) {
      iout = offset + j;
      iwork[j] = idx[iout];
      xwork[j] = x[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork[p] <= xwork[q]) {
        idx[iout] = iwork[p];
        x[iout] = xwork[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx[iout] = iwork[q];
        x[iout] = xwork[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          st.site = &gj_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(b_st);
          }
          for (int32_T j{p + 1}; j <= np; j++) {
            iout = q + j;
            idx[iout] = iwork[j - 1];
            x[iout] = xwork[j - 1];
          }
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

static void merge(const emlrtStack &sp, array<int32_T, 1U> &idx,
                  array<int32_T, 1U> &x, int32_T offset, int32_T np, int32_T nq,
                  array<int32_T, 1U> &iwork, array<int32_T, 1U> &xwork)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (nq != 0) {
    int32_T iout;
    int32_T n_tmp;
    int32_T p;
    int32_T q;
    n_tmp = np + nq;
    st.site = &hj_emlrtRSI;
    if (n_tmp > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T j{0}; j < n_tmp; j++) {
      iout = offset + j;
      iwork[j] = idx[iout];
      xwork[j] = x[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork[p] <= xwork[q]) {
        idx[iout] = iwork[p];
        x[iout] = xwork[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx[iout] = iwork[q];
        x[iout] = xwork[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          st.site = &gj_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(b_st);
          }
          for (int32_T j{p + 1}; j <= np; j++) {
            iout = q + j;
            idx[iout] = iwork[j - 1];
            x[iout] = xwork[j - 1];
          }
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

static void merge(const emlrtStack &sp, array<int32_T, 1U> &idx,
                  array<real_T, 1U> &x, int32_T offset, int32_T np, int32_T nq,
                  array<int32_T, 1U> &iwork, array<real_T, 1U> &xwork)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (nq != 0) {
    int32_T iout;
    int32_T n_tmp;
    int32_T p;
    int32_T q;
    n_tmp = np + nq;
    st.site = &hj_emlrtRSI;
    if (n_tmp > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T j{0}; j < n_tmp; j++) {
      iout = offset + j;
      iwork[j] = idx[iout];
      xwork[j] = x[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork[p] <= xwork[q]) {
        idx[iout] = iwork[p];
        x[iout] = xwork[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx[iout] = iwork[q];
        x[iout] = xwork[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          st.site = &gj_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(b_st);
          }
          for (int32_T j{p + 1}; j <= np; j++) {
            iout = q + j;
            idx[iout] = iwork[j - 1];
            x[iout] = xwork[j - 1];
          }
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

static void merge_block(const emlrtStack &sp, array<int32_T, 1U> &idx,
                        array<uint32_T, 1U> &x, int32_T offset, int32_T n,
                        int32_T preSortLevel, array<int32_T, 1U> &iwork,
                        array<uint32_T, 1U> &xwork)
{
  emlrtStack st;
  int32_T bLen;
  int32_T nPairs;
  st.prev = &sp;
  st.tls = sp.tls;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    int32_T nTail;
    int32_T tailOffset;
    if ((static_cast<uint32_T>(nPairs) & 1U) != 0U) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        st.site = &dj_emlrtRSI;
        merge(st, idx, x, offset + tailOffset, bLen, nTail - bLen, iwork,
              xwork);
      }
    }
    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      st.site = &ej_emlrtRSI;
      merge(st, idx, x, offset + nTail * tailOffset, bLen, bLen, iwork, xwork);
    }
    bLen = tailOffset;
  }
  if (n > bLen) {
    st.site = &fj_emlrtRSI;
    merge(st, idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

static void merge_block(const emlrtStack &sp, array<int32_T, 1U> &idx,
                        array<real32_T, 1U> &x, int32_T offset, int32_T n,
                        int32_T preSortLevel, array<int32_T, 1U> &iwork,
                        array<real32_T, 1U> &xwork)
{
  emlrtStack st;
  int32_T bLen;
  int32_T nPairs;
  st.prev = &sp;
  st.tls = sp.tls;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    int32_T nTail;
    int32_T tailOffset;
    if ((static_cast<uint32_T>(nPairs) & 1U) != 0U) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        st.site = &dj_emlrtRSI;
        merge(st, idx, x, offset + tailOffset, bLen, nTail - bLen, iwork,
              xwork);
      }
    }
    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      st.site = &ej_emlrtRSI;
      merge(st, idx, x, offset + nTail * tailOffset, bLen, bLen, iwork, xwork);
    }
    bLen = tailOffset;
  }
  if (n > bLen) {
    st.site = &fj_emlrtRSI;
    merge(st, idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

static void merge_block(const emlrtStack &sp, array<int32_T, 1U> &idx,
                        array<int32_T, 1U> &x, int32_T offset, int32_T n,
                        int32_T preSortLevel, array<int32_T, 1U> &iwork,
                        array<int32_T, 1U> &xwork)
{
  emlrtStack st;
  int32_T bLen;
  int32_T nPairs;
  st.prev = &sp;
  st.tls = sp.tls;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    int32_T nTail;
    int32_T tailOffset;
    if ((static_cast<uint32_T>(nPairs) & 1U) != 0U) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        st.site = &dj_emlrtRSI;
        merge(st, idx, x, offset + tailOffset, bLen, nTail - bLen, iwork,
              xwork);
      }
    }
    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      st.site = &ej_emlrtRSI;
      merge(st, idx, x, offset + nTail * tailOffset, bLen, bLen, iwork, xwork);
    }
    bLen = tailOffset;
  }
  if (n > bLen) {
    st.site = &fj_emlrtRSI;
    merge(st, idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

static void merge_block(const emlrtStack &sp, array<int32_T, 1U> &idx,
                        array<real_T, 1U> &x, int32_T offset, int32_T n,
                        int32_T preSortLevel, array<int32_T, 1U> &iwork,
                        array<real_T, 1U> &xwork)
{
  emlrtStack st;
  int32_T bLen;
  int32_T nPairs;
  st.prev = &sp;
  st.tls = sp.tls;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    int32_T nTail;
    int32_T tailOffset;
    if ((static_cast<uint32_T>(nPairs) & 1U) != 0U) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        st.site = &dj_emlrtRSI;
        merge(st, idx, x, offset + tailOffset, bLen, nTail - bLen, iwork,
              xwork);
      }
    }
    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      st.site = &ej_emlrtRSI;
      merge(st, idx, x, offset + nTail * tailOffset, bLen, bLen, iwork, xwork);
    }
    bLen = tailOffset;
  }
  if (n > bLen) {
    st.site = &fj_emlrtRSI;
    merge(st, idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

void b_sortIdx(const emlrtStack &sp, array<uint32_T, 1U> &x,
               array<int32_T, 1U> &idx)
{
  array<int32_T, 1U> iwork;
  array<uint32_T, 1U> xwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T i;
  int32_T nQuartets;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  nQuartets = x.size(0);
  idx.set_size(&bv_emlrtRTEI, &sp, nQuartets);
  for (i = 0; i < nQuartets; i++) {
    idx[i] = 0;
  }
  if (x.size(0) != 0) {
    int32_T idx4[4];
    int32_T b_i;
    int32_T i1;
    int32_T i2;
    int32_T i3;
    int32_T i4;
    int32_T offset;
    uint32_T x4[4];
    st.site = &qi_emlrtRSI;
    iwork.set_size(&ytb_emlrtRTEI, &st, nQuartets);
    for (i = 0; i < nQuartets; i++) {
      iwork[i] = 0;
    }
    xwork.set_size(&aub_emlrtRTEI, &st, nQuartets);
    b_st.site = &ri_emlrtRSI;
    x4[0] = 0U;
    idx4[0] = 0;
    x4[1] = 0U;
    idx4[1] = 0;
    x4[2] = 0U;
    idx4[2] = 0;
    x4[3] = 0U;
    idx4[3] = 0;
    nQuartets = x.size(0) >> 2;
    c_st.site = &gdb_emlrtRSI;
    for (int32_T j{0}; j < nQuartets; j++) {
      uint32_T u;
      uint32_T u1;
      uint32_T u2;
      uint32_T u3;
      b_i = j << 2;
      idx4[0] = b_i + 1;
      idx4[1] = b_i + 2;
      idx4[2] = b_i + 3;
      idx4[3] = b_i + 4;
      u = x[b_i];
      x4[0] = u;
      u1 = x[b_i + 1];
      x4[1] = u1;
      u2 = x[b_i + 2];
      x4[2] = u2;
      u3 = x[b_i + 3];
      x4[3] = u3;
      if (u <= u1) {
        i1 = 1;
        i2 = 2;
      } else {
        i1 = 2;
        i2 = 1;
      }
      if (u2 <= u3) {
        i3 = 3;
        i4 = 4;
      } else {
        i3 = 4;
        i4 = 3;
      }
      u = x4[i1 - 1];
      u1 = x4[i3 - 1];
      if (u <= u1) {
        u = x4[i2 - 1];
        if (u <= u1) {
          i = i1;
          offset = i2;
          i1 = i3;
          i2 = i4;
        } else if (u <= x4[i4 - 1]) {
          i = i1;
          offset = i3;
          i1 = i2;
          i2 = i4;
        } else {
          i = i1;
          offset = i3;
          i1 = i4;
        }
      } else {
        u1 = x4[i4 - 1];
        if (u <= u1) {
          if (x4[i2 - 1] <= u1) {
            i = i3;
            offset = i1;
            i1 = i2;
            i2 = i4;
          } else {
            i = i3;
            offset = i1;
            i1 = i4;
          }
        } else {
          i = i3;
          offset = i4;
        }
      }
      idx[b_i] = idx4[i - 1];
      idx[b_i + 1] = idx4[offset - 1];
      idx[b_i + 2] = idx4[i1 - 1];
      idx[b_i + 3] = idx4[i2 - 1];
      x[b_i] = x4[i - 1];
      x[b_i + 1] = x4[offset - 1];
      x[b_i + 2] = x4[i1 - 1];
      x[b_i + 3] = x4[i2 - 1];
    }
    b_i = nQuartets << 2;
    i1 = x.size(0) - b_i;
    if (i1 > 0) {
      int8_T perm[4];
      c_st.site = &hdb_emlrtRSI;
      if (i1 > 2147483646) {
        d_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (int32_T k{0}; k < i1; k++) {
        nQuartets = b_i + k;
        idx4[k] = nQuartets + 1;
        x4[k] = x[nQuartets];
      }
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (i1 == 1) {
        perm[0] = 1;
      } else if (i1 == 2) {
        if (x4[0] <= x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else if (x4[0] <= x4[1]) {
        if (x4[1] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 2;
          perm[2] = 3;
        } else if (x4[0] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 3;
          perm[2] = 2;
        } else {
          perm[0] = 3;
          perm[1] = 1;
          perm[2] = 2;
        }
      } else if (x4[0] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 1;
        perm[2] = 3;
      } else if (x4[1] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 3;
        perm[2] = 1;
      } else {
        perm[0] = 3;
        perm[1] = 2;
        perm[2] = 1;
      }
      c_st.site = &idb_emlrtRSI;
      for (int32_T k{0}; k < i1; k++) {
        i2 = b_i + k;
        i = perm[k];
        idx[i2] = idx4[i - 1];
        x[i2] = x4[i - 1];
      }
    }
    nQuartets = 2;
    if (x.size(0) > 1) {
      if (x.size(0) >= 256) {
        i4 = x.size(0) >> 8;
        b_st.site = &si_emlrtRSI;
        for (int32_T b{0}; b < i4; b++) {
          int32_T b_iwork[256];
          uint32_T b_xwork[256];
          b_st.site = &ti_emlrtRSI;
          offset = (b << 8) - 1;
          for (int32_T b_b{0}; b_b < 6; b_b++) {
            int32_T bLen;
            int32_T bLen2;
            bLen = 1 << (b_b + 2);
            bLen2 = bLen << 1;
            i = 256 >> (b_b + 3);
            c_st.site = &aj_emlrtRSI;
            for (int32_T k{0}; k < i; k++) {
              i1 = (offset + k * bLen2) + 1;
              c_st.site = &bj_emlrtRSI;
              for (int32_T j{0}; j < bLen2; j++) {
                nQuartets = i1 + j;
                b_iwork[j] = idx[nQuartets];
                b_xwork[j] = x[nQuartets];
              }
              i3 = 0;
              b_i = bLen;
              nQuartets = i1 - 1;
              int32_T exitg1;
              do {
                exitg1 = 0;
                nQuartets++;
                if (b_xwork[i3] <= b_xwork[b_i]) {
                  idx[nQuartets] = b_iwork[i3];
                  x[nQuartets] = b_xwork[i3];
                  if (i3 + 1 < bLen) {
                    i3++;
                  } else {
                    exitg1 = 1;
                  }
                } else {
                  idx[nQuartets] = b_iwork[b_i];
                  x[nQuartets] = b_xwork[b_i];
                  if (b_i + 1 < bLen2) {
                    b_i++;
                  } else {
                    nQuartets -= i3;
                    c_st.site = &cj_emlrtRSI;
                    for (int32_T j{i3 + 1}; j <= bLen; j++) {
                      i2 = nQuartets + j;
                      idx[i2] = b_iwork[j - 1];
                      x[i2] = b_xwork[j - 1];
                    }
                    exitg1 = 1;
                  }
                }
              } while (exitg1 == 0);
            }
          }
        }
        nQuartets = i4 << 8;
        b_i = x.size(0) - nQuartets;
        if (b_i > 0) {
          b_st.site = &ui_emlrtRSI;
          merge_block(b_st, idx, x, nQuartets, b_i, 2, iwork, xwork);
        }
        nQuartets = 8;
      }
      b_st.site = &vi_emlrtRSI;
      merge_block(b_st, idx, x, 0, x.size(0), nQuartets, iwork, xwork);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void b_sortIdx(const emlrtStack &sp, array<real_T, 1U> &x,
               array<int32_T, 1U> &idx)
{
  array<real_T, 1U> xwork;
  array<int32_T, 1U> iwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T bLen2;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  bLen2 = x.size(0);
  idx.set_size(&bv_emlrtRTEI, &sp, bLen2);
  for (i = 0; i < bLen2; i++) {
    idx[i] = 0;
  }
  if (x.size(0) != 0) {
    real_T x4[4];
    int32_T idx4[4];
    int32_T bLen;
    int32_T i1;
    int32_T i2;
    int32_T i3;
    int32_T i4;
    int32_T ib;
    int32_T idx_tmp;
    int32_T nBlocks;
    int32_T wOffset_tmp;
    st.site = &qi_emlrtRSI;
    iwork.set_size(&ytb_emlrtRTEI, &st, bLen2);
    for (i = 0; i < bLen2; i++) {
      iwork[i] = 0;
    }
    xwork.set_size(&aub_emlrtRTEI, &st, bLen2);
    b_st.site = &ri_emlrtRSI;
    x4[0] = 0.0;
    idx4[0] = 0;
    x4[1] = 0.0;
    idx4[1] = 0;
    x4[2] = 0.0;
    idx4[2] = 0;
    x4[3] = 0.0;
    idx4[3] = 0;
    nBlocks = 0;
    ib = 0;
    c_st.site = &wi_emlrtRSI;
    if (x.size(0) > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T k{0}; k < bLen2; k++) {
      if (muDoubleScalarIsNaN(x[k])) {
        idx_tmp = (bLen2 - nBlocks) - 1;
        idx[idx_tmp] = k + 1;
        xwork[idx_tmp] = x[k];
        nBlocks++;
      } else {
        ib++;
        idx4[ib - 1] = k + 1;
        x4[ib - 1] = x[k];
        if (ib == 4) {
          real_T d;
          real_T d1;
          ib = k - nBlocks;
          if (x4[0] <= x4[1]) {
            i1 = 1;
            i2 = 2;
          } else {
            i1 = 2;
            i2 = 1;
          }
          if (x4[2] <= x4[3]) {
            i3 = 3;
            i4 = 4;
          } else {
            i3 = 4;
            i4 = 3;
          }
          d = x4[i1 - 1];
          d1 = x4[i3 - 1];
          if (d <= d1) {
            d = x4[i2 - 1];
            if (d <= d1) {
              i = i1;
              bLen = i2;
              i1 = i3;
              i2 = i4;
            } else if (d <= x4[i4 - 1]) {
              i = i1;
              bLen = i3;
              i1 = i2;
              i2 = i4;
            } else {
              i = i1;
              bLen = i3;
              i1 = i4;
            }
          } else {
            d1 = x4[i4 - 1];
            if (d <= d1) {
              if (x4[i2 - 1] <= d1) {
                i = i3;
                bLen = i1;
                i1 = i2;
                i2 = i4;
              } else {
                i = i3;
                bLen = i1;
                i1 = i4;
              }
            } else {
              i = i3;
              bLen = i4;
            }
          }
          idx[ib - 3] = idx4[i - 1];
          idx[ib - 2] = idx4[bLen - 1];
          idx[ib - 1] = idx4[i1 - 1];
          idx[ib] = idx4[i2 - 1];
          x[ib - 3] = x4[i - 1];
          x[ib - 2] = x4[bLen - 1];
          x[ib - 1] = x4[i1 - 1];
          x[ib] = x4[i2 - 1];
          ib = 0;
        }
      }
    }
    wOffset_tmp = x.size(0) - nBlocks;
    if (ib > 0) {
      int8_T perm[4];
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (ib == 1) {
        perm[0] = 1;
      } else if (ib == 2) {
        if (x4[0] <= x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else if (x4[0] <= x4[1]) {
        if (x4[1] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 2;
          perm[2] = 3;
        } else if (x4[0] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 3;
          perm[2] = 2;
        } else {
          perm[0] = 3;
          perm[1] = 1;
          perm[2] = 2;
        }
      } else if (x4[0] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 1;
        perm[2] = 3;
      } else if (x4[1] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 3;
        perm[2] = 1;
      } else {
        perm[0] = 3;
        perm[1] = 2;
        perm[2] = 1;
      }
      c_st.site = &xi_emlrtRSI;
      if (ib > 2147483646) {
        d_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      i = static_cast<uint8_T>(ib);
      for (int32_T k{0}; k < i; k++) {
        idx_tmp = (wOffset_tmp - ib) + k;
        bLen = perm[k];
        idx[idx_tmp] = idx4[bLen - 1];
        x[idx_tmp] = x4[bLen - 1];
      }
    }
    i1 = nBlocks >> 1;
    c_st.site = &yi_emlrtRSI;
    for (int32_T k{0}; k < i1; k++) {
      ib = wOffset_tmp + k;
      i2 = idx[ib];
      idx_tmp = (bLen2 - k) - 1;
      idx[ib] = idx[idx_tmp];
      idx[idx_tmp] = i2;
      x[ib] = xwork[idx_tmp];
      x[idx_tmp] = xwork[ib];
    }
    if ((static_cast<uint32_T>(nBlocks) & 1U) != 0U) {
      i = wOffset_tmp + i1;
      x[i] = xwork[i];
    }
    ib = 2;
    if (wOffset_tmp > 1) {
      if (x.size(0) >= 256) {
        nBlocks = wOffset_tmp >> 8;
        if (nBlocks > 0) {
          b_st.site = &si_emlrtRSI;
          for (int32_T b{0}; b < nBlocks; b++) {
            real_T b_xwork[256];
            int32_T b_iwork[256];
            b_st.site = &ti_emlrtRSI;
            i4 = (b << 8) - 1;
            for (int32_T b_b{0}; b_b < 6; b_b++) {
              bLen = 1 << (b_b + 2);
              bLen2 = bLen << 1;
              i = 256 >> (b_b + 3);
              c_st.site = &aj_emlrtRSI;
              for (int32_T k{0}; k < i; k++) {
                i2 = (i4 + k * bLen2) + 1;
                c_st.site = &bj_emlrtRSI;
                for (i1 = 0; i1 < bLen2; i1++) {
                  ib = i2 + i1;
                  b_iwork[i1] = idx[ib];
                  b_xwork[i1] = x[ib];
                }
                i3 = 0;
                i1 = bLen;
                ib = i2 - 1;
                int32_T exitg1;
                do {
                  exitg1 = 0;
                  ib++;
                  if (b_xwork[i3] <= b_xwork[i1]) {
                    idx[ib] = b_iwork[i3];
                    x[ib] = b_xwork[i3];
                    if (i3 + 1 < bLen) {
                      i3++;
                    } else {
                      exitg1 = 1;
                    }
                  } else {
                    idx[ib] = b_iwork[i1];
                    x[ib] = b_xwork[i1];
                    if (i1 + 1 < bLen2) {
                      i1++;
                    } else {
                      ib -= i3;
                      c_st.site = &cj_emlrtRSI;
                      for (i1 = i3 + 1; i1 <= bLen; i1++) {
                        idx_tmp = ib + i1;
                        idx[idx_tmp] = b_iwork[i1 - 1];
                        x[idx_tmp] = b_xwork[i1 - 1];
                      }
                      exitg1 = 1;
                    }
                  }
                } while (exitg1 == 0);
              }
            }
          }
          ib = nBlocks << 8;
          i1 = wOffset_tmp - ib;
          if (i1 > 0) {
            b_st.site = &ui_emlrtRSI;
            merge_block(b_st, idx, x, ib, i1, 2, iwork, xwork);
          }
          ib = 8;
        }
      }
      b_st.site = &vi_emlrtRSI;
      merge_block(b_st, idx, x, 0, wOffset_tmp, ib, iwork, xwork);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void c_sortIdx(const emlrtStack &sp, array<real_T, 1U> &x,
               array<int32_T, 1U> &idx)
{
  array<real_T, 1U> xwork;
  array<int32_T, 1U> iwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T bLen2;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  bLen2 = x.size(0);
  idx.set_size(&bv_emlrtRTEI, &sp, bLen2);
  for (i = 0; i < bLen2; i++) {
    idx[i] = 0;
  }
  if (x.size(0) != 0) {
    real_T x4[4];
    int32_T idx4[4];
    int32_T bLen;
    int32_T i1;
    int32_T i2;
    int32_T i3;
    int32_T i4;
    int32_T ib;
    int32_T idx_tmp;
    int32_T nNaNs;
    int32_T wOffset_tmp;
    st.site = &qi_emlrtRSI;
    iwork.set_size(&ytb_emlrtRTEI, &st, bLen2);
    for (i = 0; i < bLen2; i++) {
      iwork[i] = 0;
    }
    xwork.set_size(&aub_emlrtRTEI, &st, bLen2);
    b_st.site = &ri_emlrtRSI;
    x4[0] = 0.0;
    idx4[0] = 0;
    x4[1] = 0.0;
    idx4[1] = 0;
    x4[2] = 0.0;
    idx4[2] = 0;
    x4[3] = 0.0;
    idx4[3] = 0;
    nNaNs = 0;
    ib = 0;
    c_st.site = &wi_emlrtRSI;
    if (x.size(0) > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T k{0}; k < bLen2; k++) {
      if (muDoubleScalarIsNaN(x[k])) {
        idx_tmp = (bLen2 - nNaNs) - 1;
        idx[idx_tmp] = k + 1;
        xwork[idx_tmp] = x[k];
        nNaNs++;
      } else {
        ib++;
        idx4[ib - 1] = k + 1;
        x4[ib - 1] = x[k];
        if (ib == 4) {
          real_T d;
          real_T d1;
          ib = k - nNaNs;
          if (x4[0] >= x4[1]) {
            i1 = 1;
            i2 = 2;
          } else {
            i1 = 2;
            i2 = 1;
          }
          if (x4[2] >= x4[3]) {
            i3 = 3;
            i4 = 4;
          } else {
            i3 = 4;
            i4 = 3;
          }
          d = x4[i1 - 1];
          d1 = x4[i3 - 1];
          if (d >= d1) {
            d = x4[i2 - 1];
            if (d >= d1) {
              i = i1;
              bLen = i2;
              i1 = i3;
              i2 = i4;
            } else if (d >= x4[i4 - 1]) {
              i = i1;
              bLen = i3;
              i1 = i2;
              i2 = i4;
            } else {
              i = i1;
              bLen = i3;
              i1 = i4;
            }
          } else {
            d1 = x4[i4 - 1];
            if (d >= d1) {
              if (x4[i2 - 1] >= d1) {
                i = i3;
                bLen = i1;
                i1 = i2;
                i2 = i4;
              } else {
                i = i3;
                bLen = i1;
                i1 = i4;
              }
            } else {
              i = i3;
              bLen = i4;
            }
          }
          idx[ib - 3] = idx4[i - 1];
          idx[ib - 2] = idx4[bLen - 1];
          idx[ib - 1] = idx4[i1 - 1];
          idx[ib] = idx4[i2 - 1];
          x[ib - 3] = x4[i - 1];
          x[ib - 2] = x4[bLen - 1];
          x[ib - 1] = x4[i1 - 1];
          x[ib] = x4[i2 - 1];
          ib = 0;
        }
      }
    }
    wOffset_tmp = x.size(0) - nNaNs;
    if (ib > 0) {
      int8_T perm[4];
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (ib == 1) {
        perm[0] = 1;
      } else if (ib == 2) {
        if (x4[0] >= x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else if (x4[0] >= x4[1]) {
        if (x4[1] >= x4[2]) {
          perm[0] = 1;
          perm[1] = 2;
          perm[2] = 3;
        } else if (x4[0] >= x4[2]) {
          perm[0] = 1;
          perm[1] = 3;
          perm[2] = 2;
        } else {
          perm[0] = 3;
          perm[1] = 1;
          perm[2] = 2;
        }
      } else if (x4[0] >= x4[2]) {
        perm[0] = 2;
        perm[1] = 1;
        perm[2] = 3;
      } else if (x4[1] >= x4[2]) {
        perm[0] = 2;
        perm[1] = 3;
        perm[2] = 1;
      } else {
        perm[0] = 3;
        perm[1] = 2;
        perm[2] = 1;
      }
      c_st.site = &xi_emlrtRSI;
      if (ib > 2147483646) {
        d_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      i = static_cast<uint8_T>(ib);
      for (int32_T k{0}; k < i; k++) {
        idx_tmp = (wOffset_tmp - ib) + k;
        bLen = perm[k];
        idx[idx_tmp] = idx4[bLen - 1];
        x[idx_tmp] = x4[bLen - 1];
      }
    }
    i1 = nNaNs >> 1;
    c_st.site = &yi_emlrtRSI;
    for (int32_T k{0}; k < i1; k++) {
      ib = wOffset_tmp + k;
      i2 = idx[ib];
      idx_tmp = (bLen2 - k) - 1;
      idx[ib] = idx[idx_tmp];
      idx[idx_tmp] = i2;
      x[ib] = xwork[idx_tmp];
      x[idx_tmp] = xwork[ib];
    }
    if ((static_cast<uint32_T>(nNaNs) & 1U) != 0U) {
      i = wOffset_tmp + i1;
      x[i] = xwork[i];
    }
    ib = 2;
    if (wOffset_tmp > 1) {
      if (x.size(0) >= 256) {
        int32_T nBlocks;
        nBlocks = wOffset_tmp >> 8;
        if (nBlocks > 0) {
          b_st.site = &si_emlrtRSI;
          for (int32_T b{0}; b < nBlocks; b++) {
            real_T b_xwork[256];
            int32_T b_iwork[256];
            b_st.site = &ti_emlrtRSI;
            i4 = (b << 8) - 1;
            for (int32_T b_b{0}; b_b < 6; b_b++) {
              bLen = 1 << (b_b + 2);
              bLen2 = bLen << 1;
              i = 256 >> (b_b + 3);
              c_st.site = &aj_emlrtRSI;
              for (int32_T k{0}; k < i; k++) {
                i2 = (i4 + k * bLen2) + 1;
                c_st.site = &bj_emlrtRSI;
                for (i1 = 0; i1 < bLen2; i1++) {
                  ib = i2 + i1;
                  b_iwork[i1] = idx[ib];
                  b_xwork[i1] = x[ib];
                }
                i3 = 0;
                i1 = bLen;
                ib = i2 - 1;
                int32_T exitg1;
                do {
                  exitg1 = 0;
                  ib++;
                  if (b_xwork[i3] >= b_xwork[i1]) {
                    idx[ib] = b_iwork[i3];
                    x[ib] = b_xwork[i3];
                    if (i3 + 1 < bLen) {
                      i3++;
                    } else {
                      exitg1 = 1;
                    }
                  } else {
                    idx[ib] = b_iwork[i1];
                    x[ib] = b_xwork[i1];
                    if (i1 + 1 < bLen2) {
                      i1++;
                    } else {
                      ib -= i3;
                      c_st.site = &cj_emlrtRSI;
                      for (i1 = i3 + 1; i1 <= bLen; i1++) {
                        idx_tmp = ib + i1;
                        idx[idx_tmp] = b_iwork[i1 - 1];
                        x[idx_tmp] = b_xwork[i1 - 1];
                      }
                      exitg1 = 1;
                    }
                  }
                } while (exitg1 == 0);
              }
            }
          }
          ib = nBlocks << 8;
          i1 = wOffset_tmp - ib;
          if (i1 > 0) {
            b_st.site = &ui_emlrtRSI;
            b_merge_block(b_st, idx, x, ib, i1, 2, iwork, xwork);
          }
          ib = 8;
        }
      }
      b_st.site = &vi_emlrtRSI;
      b_merge_block(b_st, idx, x, 0, wOffset_tmp, ib, iwork, xwork);
    }
    if ((nNaNs > 0) && (wOffset_tmp > 0)) {
      b_st.site = &ibd_emlrtRSI;
      c_st.site = &jbd_emlrtRSI;
      if (nNaNs > 2147483646) {
        d_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (int32_T k{0}; k < nNaNs; k++) {
        ib = wOffset_tmp + k;
        xwork[k] = x[ib];
        iwork[k] = idx[ib];
      }
      for (int32_T k{wOffset_tmp}; k >= 1; k--) {
        i = (nNaNs + k) - 1;
        x[i] = x[k - 1];
        idx[i] = idx[k - 1];
      }
      c_st.site = &kbd_emlrtRSI;
      for (int32_T k{0}; k < nNaNs; k++) {
        x[k] = xwork[k];
        idx[k] = iwork[k];
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void merge_block(const emlrtStack &sp, array<int32_T, 2U> &idx,
                 array<real32_T, 2U> &x, int32_T offset, int32_T n,
                 int32_T preSortLevel, array<int32_T, 1U> &iwork,
                 array<real32_T, 1U> &xwork)
{
  emlrtStack st;
  int32_T bLen;
  int32_T nPairs;
  st.prev = &sp;
  st.tls = sp.tls;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    int32_T nTail;
    int32_T tailOffset;
    if ((static_cast<uint32_T>(nPairs) & 1U) != 0U) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        st.site = &dj_emlrtRSI;
        merge(st, idx, x, offset + tailOffset, bLen, nTail - bLen, iwork,
              xwork);
      }
    }
    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      st.site = &ej_emlrtRSI;
      merge(st, idx, x, offset + nTail * tailOffset, bLen, bLen, iwork, xwork);
    }
    bLen = tailOffset;
  }
  if (n > bLen) {
    st.site = &fj_emlrtRSI;
    merge(st, idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

void sortIdx(const emlrtStack &sp, const array<real_T, 1U> &x,
             array<int32_T, 1U> &idx)
{
  array<int32_T, 1U> iwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b_i;
  int32_T i;
  int32_T n;
  int32_T qEnd;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  n = x.size(0) + 1;
  i = x.size(0);
  idx.set_size(&bv_emlrtRTEI, &sp, x.size(0));
  for (b_i = 0; b_i < i; b_i++) {
    idx[b_i] = 0;
  }
  if (x.size(0) != 0) {
    int32_T k;
    st.site = &ifb_emlrtRSI;
    iwork.set_size(&cv_emlrtRTEI, &st, x.size(0));
    i = x.size(0) - 1;
    b_st.site = &lcb_emlrtRSI;
    if (x.size(0) - 1 > 2147483645) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (k = 1; k <= i; k += 2) {
      if ((x[k - 1] <= x[k]) || muDoubleScalarIsNaN(x[k])) {
        idx[k - 1] = k;
        idx[k] = k + 1;
      } else {
        idx[k - 1] = k + 1;
        idx[k] = k;
      }
    }
    if ((static_cast<uint32_T>(x.size(0)) & 1U) != 0U) {
      idx[x.size(0) - 1] = x.size(0);
    }
    i = 2;
    while (i < n - 1) {
      int32_T i2;
      int32_T j;
      i2 = i << 1;
      j = 1;
      for (int32_T pEnd{i + 1}; pEnd < n; pEnd = qEnd + i) {
        int32_T kEnd;
        int32_T p;
        int32_T q;
        p = j;
        q = pEnd - 1;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          real_T d;
          d = x[idx[q] - 1];
          b_i = idx[p - 1];
          if ((x[b_i - 1] <= d) || muDoubleScalarIsNaN(d)) {
            iwork[k] = b_i;
            p++;
            if (p == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                iwork[k] = idx[q];
                q++;
              }
            }
          } else {
            iwork[k] = idx[q];
            q++;
            if (q + 1 == qEnd) {
              while (p < pEnd) {
                k++;
                iwork[k] = idx[p - 1];
                p++;
              }
            }
          }
          k++;
        }
        b_st.site = &mcb_emlrtRSI;
        for (k = 0; k < kEnd; k++) {
          idx[(j + k) - 1] = iwork[k];
        }
        j = qEnd;
      }
      i = i2;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sortIdx(const emlrtStack &sp, const array<uint32_T, 2U> &x,
             array<int32_T, 2U> &idx)
{
  array<int32_T, 1U> iwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b_i;
  int32_T i;
  int32_T n;
  int32_T qEnd;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  n = x.size(1) + 1;
  i = x.size(1);
  idx.set_size(&ew_emlrtRTEI, &sp, 1, x.size(1));
  for (b_i = 0; b_i < i; b_i++) {
    idx[b_i] = 0;
  }
  if (x.size(1) != 0) {
    int32_T k;
    st.site = &ifb_emlrtRSI;
    iwork.set_size(&cv_emlrtRTEI, &st, x.size(1));
    i = x.size(1) - 1;
    b_st.site = &lcb_emlrtRSI;
    if (x.size(1) - 1 > 2147483645) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (k = 1; k <= i; k += 2) {
      if (x[k - 1] <= x[k]) {
        idx[k - 1] = k;
        idx[k] = k + 1;
      } else {
        idx[k - 1] = k + 1;
        idx[k] = k;
      }
    }
    if ((static_cast<uint32_T>(x.size(1)) & 1U) != 0U) {
      idx[x.size(1) - 1] = x.size(1);
    }
    i = 2;
    while (i < n - 1) {
      int32_T i2;
      int32_T j;
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
          int32_T i1;
          b_i = idx[q - 1];
          i1 = idx[p - 1];
          if (x[i1 - 1] <= x[b_i - 1]) {
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
            iwork[k] = b_i;
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
        b_st.site = &mcb_emlrtRSI;
        for (k = 0; k < kEnd; k++) {
          idx[(j + k) - 1] = iwork[k];
        }
        j = qEnd;
      }
      i = i2;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sortIdx(const emlrtStack &sp, array<real32_T, 1U> &x,
             array<int32_T, 1U> &idx)
{
  array<int32_T, 1U> iwork;
  array<real32_T, 1U> xwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T bLen2;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  bLen2 = x.size(0);
  idx.set_size(&bv_emlrtRTEI, &sp, bLen2);
  for (i = 0; i < bLen2; i++) {
    idx[i] = 0;
  }
  if (x.size(0) != 0) {
    int32_T idx4[4];
    int32_T bLen;
    int32_T i1;
    int32_T i2;
    int32_T i3;
    int32_T i4;
    int32_T ib;
    int32_T idx_tmp;
    int32_T nBlocks;
    int32_T wOffset_tmp;
    real32_T x4[4];
    st.site = &qi_emlrtRSI;
    iwork.set_size(&ytb_emlrtRTEI, &st, bLen2);
    for (i = 0; i < bLen2; i++) {
      iwork[i] = 0;
    }
    xwork.set_size(&aub_emlrtRTEI, &st, bLen2);
    b_st.site = &ri_emlrtRSI;
    x4[0] = 0.0F;
    idx4[0] = 0;
    x4[1] = 0.0F;
    idx4[1] = 0;
    x4[2] = 0.0F;
    idx4[2] = 0;
    x4[3] = 0.0F;
    idx4[3] = 0;
    nBlocks = 0;
    ib = 0;
    c_st.site = &wi_emlrtRSI;
    if (x.size(0) > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T k{0}; k < bLen2; k++) {
      if (muSingleScalarIsNaN(x[k])) {
        idx_tmp = (bLen2 - nBlocks) - 1;
        idx[idx_tmp] = k + 1;
        xwork[idx_tmp] = x[k];
        nBlocks++;
      } else {
        ib++;
        idx4[ib - 1] = k + 1;
        x4[ib - 1] = x[k];
        if (ib == 4) {
          real32_T f;
          real32_T f1;
          ib = k - nBlocks;
          if (x4[0] <= x4[1]) {
            i1 = 1;
            i2 = 2;
          } else {
            i1 = 2;
            i2 = 1;
          }
          if (x4[2] <= x4[3]) {
            i3 = 3;
            i4 = 4;
          } else {
            i3 = 4;
            i4 = 3;
          }
          f = x4[i1 - 1];
          f1 = x4[i3 - 1];
          if (f <= f1) {
            f = x4[i2 - 1];
            if (f <= f1) {
              i = i1;
              bLen = i2;
              i1 = i3;
              i2 = i4;
            } else if (f <= x4[i4 - 1]) {
              i = i1;
              bLen = i3;
              i1 = i2;
              i2 = i4;
            } else {
              i = i1;
              bLen = i3;
              i1 = i4;
            }
          } else {
            f1 = x4[i4 - 1];
            if (f <= f1) {
              if (x4[i2 - 1] <= f1) {
                i = i3;
                bLen = i1;
                i1 = i2;
                i2 = i4;
              } else {
                i = i3;
                bLen = i1;
                i1 = i4;
              }
            } else {
              i = i3;
              bLen = i4;
            }
          }
          idx[ib - 3] = idx4[i - 1];
          idx[ib - 2] = idx4[bLen - 1];
          idx[ib - 1] = idx4[i1 - 1];
          idx[ib] = idx4[i2 - 1];
          x[ib - 3] = x4[i - 1];
          x[ib - 2] = x4[bLen - 1];
          x[ib - 1] = x4[i1 - 1];
          x[ib] = x4[i2 - 1];
          ib = 0;
        }
      }
    }
    wOffset_tmp = x.size(0) - nBlocks;
    if (ib > 0) {
      int8_T perm[4];
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (ib == 1) {
        perm[0] = 1;
      } else if (ib == 2) {
        if (x4[0] <= x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else if (x4[0] <= x4[1]) {
        if (x4[1] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 2;
          perm[2] = 3;
        } else if (x4[0] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 3;
          perm[2] = 2;
        } else {
          perm[0] = 3;
          perm[1] = 1;
          perm[2] = 2;
        }
      } else if (x4[0] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 1;
        perm[2] = 3;
      } else if (x4[1] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 3;
        perm[2] = 1;
      } else {
        perm[0] = 3;
        perm[1] = 2;
        perm[2] = 1;
      }
      c_st.site = &xi_emlrtRSI;
      if (ib > 2147483646) {
        d_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      i = static_cast<uint8_T>(ib);
      for (int32_T k{0}; k < i; k++) {
        idx_tmp = (wOffset_tmp - ib) + k;
        bLen = perm[k];
        idx[idx_tmp] = idx4[bLen - 1];
        x[idx_tmp] = x4[bLen - 1];
      }
    }
    i1 = nBlocks >> 1;
    c_st.site = &yi_emlrtRSI;
    for (int32_T k{0}; k < i1; k++) {
      ib = wOffset_tmp + k;
      i2 = idx[ib];
      idx_tmp = (bLen2 - k) - 1;
      idx[ib] = idx[idx_tmp];
      idx[idx_tmp] = i2;
      x[ib] = xwork[idx_tmp];
      x[idx_tmp] = xwork[ib];
    }
    if ((static_cast<uint32_T>(nBlocks) & 1U) != 0U) {
      i = wOffset_tmp + i1;
      x[i] = xwork[i];
    }
    ib = 2;
    if (wOffset_tmp > 1) {
      if (x.size(0) >= 256) {
        nBlocks = wOffset_tmp >> 8;
        if (nBlocks > 0) {
          b_st.site = &si_emlrtRSI;
          for (int32_T b{0}; b < nBlocks; b++) {
            int32_T b_iwork[256];
            real32_T b_xwork[256];
            b_st.site = &ti_emlrtRSI;
            i4 = (b << 8) - 1;
            for (int32_T b_b{0}; b_b < 6; b_b++) {
              bLen = 1 << (b_b + 2);
              bLen2 = bLen << 1;
              i = 256 >> (b_b + 3);
              c_st.site = &aj_emlrtRSI;
              for (int32_T k{0}; k < i; k++) {
                i2 = (i4 + k * bLen2) + 1;
                c_st.site = &bj_emlrtRSI;
                for (i1 = 0; i1 < bLen2; i1++) {
                  ib = i2 + i1;
                  b_iwork[i1] = idx[ib];
                  b_xwork[i1] = x[ib];
                }
                i3 = 0;
                i1 = bLen;
                ib = i2 - 1;
                int32_T exitg1;
                do {
                  exitg1 = 0;
                  ib++;
                  if (b_xwork[i3] <= b_xwork[i1]) {
                    idx[ib] = b_iwork[i3];
                    x[ib] = b_xwork[i3];
                    if (i3 + 1 < bLen) {
                      i3++;
                    } else {
                      exitg1 = 1;
                    }
                  } else {
                    idx[ib] = b_iwork[i1];
                    x[ib] = b_xwork[i1];
                    if (i1 + 1 < bLen2) {
                      i1++;
                    } else {
                      ib -= i3;
                      c_st.site = &cj_emlrtRSI;
                      for (i1 = i3 + 1; i1 <= bLen; i1++) {
                        idx_tmp = ib + i1;
                        idx[idx_tmp] = b_iwork[i1 - 1];
                        x[idx_tmp] = b_xwork[i1 - 1];
                      }
                      exitg1 = 1;
                    }
                  }
                } while (exitg1 == 0);
              }
            }
          }
          ib = nBlocks << 8;
          i1 = wOffset_tmp - ib;
          if (i1 > 0) {
            b_st.site = &ui_emlrtRSI;
            merge_block(b_st, idx, x, ib, i1, 2, iwork, xwork);
          }
          ib = 8;
        }
      }
      b_st.site = &vi_emlrtRSI;
      merge_block(b_st, idx, x, 0, wOffset_tmp, ib, iwork, xwork);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sortIdx(const emlrtStack &sp, const array<uint32_T, 1U> &x,
             array<int32_T, 1U> &idx)
{
  array<int32_T, 1U> iwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b_i;
  int32_T i;
  int32_T n;
  int32_T qEnd;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  n = x.size(0) + 1;
  i = x.size(0);
  idx.set_size(&bv_emlrtRTEI, &sp, x.size(0));
  for (b_i = 0; b_i < i; b_i++) {
    idx[b_i] = 0;
  }
  if (x.size(0) != 0) {
    int32_T k;
    st.site = &ifb_emlrtRSI;
    iwork.set_size(&cv_emlrtRTEI, &st, x.size(0));
    i = x.size(0) - 1;
    b_st.site = &lcb_emlrtRSI;
    if (x.size(0) - 1 > 2147483645) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (k = 1; k <= i; k += 2) {
      if (x[k - 1] <= x[k]) {
        idx[k - 1] = k;
        idx[k] = k + 1;
      } else {
        idx[k - 1] = k + 1;
        idx[k] = k;
      }
    }
    if ((static_cast<uint32_T>(x.size(0)) & 1U) != 0U) {
      idx[x.size(0) - 1] = x.size(0);
    }
    i = 2;
    while (i < n - 1) {
      int32_T i2;
      int32_T j;
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
          int32_T i1;
          b_i = idx[q - 1];
          i1 = idx[p - 1];
          if (x[i1 - 1] <= x[b_i - 1]) {
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
            iwork[k] = b_i;
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
        b_st.site = &mcb_emlrtRSI;
        for (k = 0; k < kEnd; k++) {
          idx[(j + k) - 1] = iwork[k];
        }
        j = qEnd;
      }
      i = i2;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sortIdx(const emlrtStack &sp, array<int32_T, 1U> &x,
             array<int32_T, 1U> &idx)
{
  array<int32_T, 1U> iwork;
  array<int32_T, 1U> xwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T i;
  int32_T i3;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  i3 = x.size(0);
  idx.set_size(&bv_emlrtRTEI, &sp, i3);
  for (i = 0; i < i3; i++) {
    idx[i] = 0;
  }
  if (x.size(0) != 0) {
    int32_T idx4[4];
    int32_T x4[4];
    int32_T b_i;
    int32_T i1;
    int32_T i2;
    int32_T i4;
    int32_T nBlocks;
    int32_T nQuartets;
    st.site = &qi_emlrtRSI;
    iwork.set_size(&ytb_emlrtRTEI, &st, i3);
    for (i = 0; i < i3; i++) {
      iwork[i] = 0;
    }
    xwork.set_size(&aub_emlrtRTEI, &st, i3);
    b_st.site = &ri_emlrtRSI;
    x4[0] = 0;
    idx4[0] = 0;
    x4[1] = 0;
    idx4[1] = 0;
    x4[2] = 0;
    idx4[2] = 0;
    x4[3] = 0;
    idx4[3] = 0;
    nQuartets = x.size(0) >> 2;
    c_st.site = &gdb_emlrtRSI;
    for (int32_T j{0}; j < nQuartets; j++) {
      b_i = j << 2;
      idx4[0] = b_i + 1;
      idx4[1] = b_i + 2;
      idx4[2] = b_i + 3;
      idx4[3] = b_i + 4;
      i = x[b_i];
      x4[0] = i;
      nBlocks = x[b_i + 1];
      x4[1] = nBlocks;
      i3 = x[b_i + 2];
      x4[2] = i3;
      i4 = x[b_i + 3];
      x4[3] = i4;
      if (i <= nBlocks) {
        i1 = 1;
        i2 = 2;
      } else {
        i1 = 2;
        i2 = 1;
      }
      if (i3 <= i4) {
        i3 = 3;
        i4 = 4;
      } else {
        i3 = 4;
        i4 = 3;
      }
      i = x4[i1 - 1];
      nBlocks = x4[i3 - 1];
      if (i <= nBlocks) {
        i = x4[i2 - 1];
        if (i <= nBlocks) {
          i = i1;
          nBlocks = i2;
          i1 = i3;
          i2 = i4;
        } else if (i <= x4[i4 - 1]) {
          i = i1;
          nBlocks = i3;
          i1 = i2;
          i2 = i4;
        } else {
          i = i1;
          nBlocks = i3;
          i1 = i4;
        }
      } else {
        nBlocks = x4[i4 - 1];
        if (i <= nBlocks) {
          if (x4[i2 - 1] <= nBlocks) {
            i = i3;
            nBlocks = i1;
            i1 = i2;
            i2 = i4;
          } else {
            i = i3;
            nBlocks = i1;
            i1 = i4;
          }
        } else {
          i = i3;
          nBlocks = i4;
        }
      }
      idx[b_i] = idx4[i - 1];
      idx[b_i + 1] = idx4[nBlocks - 1];
      idx[b_i + 2] = idx4[i1 - 1];
      idx[b_i + 3] = idx4[i2 - 1];
      x[b_i] = x4[i - 1];
      x[b_i + 1] = x4[nBlocks - 1];
      x[b_i + 2] = x4[i1 - 1];
      x[b_i + 3] = x4[i2 - 1];
    }
    nQuartets <<= 2;
    b_i = x.size(0) - nQuartets;
    if (b_i > 0) {
      int8_T perm[4];
      c_st.site = &hdb_emlrtRSI;
      if (b_i > 2147483646) {
        d_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      i4 = (b_i / 4) << 2;
      i3 = i4 - 4;
      for (int32_T k{0}; k <= i3; k += 4) {
        __m128i b_r;
        _mm_storeu_si128(
            (__m128i *)&idx4[k],
            _mm_add_epi32(
                _mm_add_epi32(
                    _mm_set1_epi32(nQuartets),
                    _mm_add_epi32(_mm_set1_epi32(k),
                                  _mm_loadu_si128((const __m128i *)&iv3[0]))),
                _mm_set1_epi32(1)));
        b_r = _mm_loadu_si128((const __m128i *)&x[nQuartets + k]);
        _mm_storeu_si128((__m128i *)&x4[k], b_r);
      }
      for (int32_T k{i4}; k < b_i; k++) {
        i3 = nQuartets + k;
        idx4[k] = i3 + 1;
        x4[k] = x[i3];
      }
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (b_i == 1) {
        perm[0] = 1;
      } else if (b_i == 2) {
        if (x4[0] <= x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else if (x4[0] <= x4[1]) {
        if (x4[1] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 2;
          perm[2] = 3;
        } else if (x4[0] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 3;
          perm[2] = 2;
        } else {
          perm[0] = 3;
          perm[1] = 1;
          perm[2] = 2;
        }
      } else if (x4[0] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 1;
        perm[2] = 3;
      } else if (x4[1] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 3;
        perm[2] = 1;
      } else {
        perm[0] = 3;
        perm[1] = 2;
        perm[2] = 1;
      }
      c_st.site = &idb_emlrtRSI;
      for (int32_T k{0}; k < b_i; k++) {
        i4 = nQuartets + k;
        i = perm[k];
        idx[i4] = idx4[i - 1];
        x[i4] = x4[i - 1];
      }
    }
    i3 = 2;
    if (x.size(0) > 1) {
      if (x.size(0) >= 256) {
        nBlocks = x.size(0) >> 8;
        b_st.site = &si_emlrtRSI;
        for (int32_T b{0}; b < nBlocks; b++) {
          int32_T b_iwork[256];
          int32_T b_xwork[256];
          b_st.site = &ti_emlrtRSI;
          i1 = (b << 8) - 1;
          for (int32_T b_b{0}; b_b < 6; b_b++) {
            int32_T bLen2;
            i2 = 1 << (b_b + 2);
            bLen2 = i2 << 1;
            i = 256 >> (b_b + 3);
            c_st.site = &aj_emlrtRSI;
            for (int32_T k{0}; k < i; k++) {
              nQuartets = (i1 + k * bLen2) + 1;
              c_st.site = &bj_emlrtRSI;
              for (int32_T j{0}; j < bLen2; j++) {
                i3 = nQuartets + j;
                b_iwork[j] = idx[i3];
                b_xwork[j] = x[i3];
              }
              b_i = 0;
              i4 = i2;
              i3 = nQuartets - 1;
              int32_T exitg1;
              do {
                exitg1 = 0;
                i3++;
                if (b_xwork[b_i] <= b_xwork[i4]) {
                  idx[i3] = b_iwork[b_i];
                  x[i3] = b_xwork[b_i];
                  if (b_i + 1 < i2) {
                    b_i++;
                  } else {
                    exitg1 = 1;
                  }
                } else {
                  idx[i3] = b_iwork[i4];
                  x[i3] = b_xwork[i4];
                  if (i4 + 1 < bLen2) {
                    i4++;
                  } else {
                    i3 -= b_i;
                    c_st.site = &cj_emlrtRSI;
                    for (int32_T j{b_i + 1}; j <= i2; j++) {
                      i4 = i3 + j;
                      idx[i4] = b_iwork[j - 1];
                      x[i4] = b_xwork[j - 1];
                    }
                    exitg1 = 1;
                  }
                }
              } while (exitg1 == 0);
            }
          }
        }
        i3 = nBlocks << 8;
        i4 = x.size(0) - i3;
        if (i4 > 0) {
          b_st.site = &ui_emlrtRSI;
          merge_block(b_st, idx, x, i3, i4, 2, iwork, xwork);
        }
        i3 = 8;
      }
      b_st.site = &vi_emlrtRSI;
      merge_block(b_st, idx, x, 0, x.size(0), i3, iwork, xwork);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace internal
} // namespace coder

// End of code generation (sortIdx.cpp)
