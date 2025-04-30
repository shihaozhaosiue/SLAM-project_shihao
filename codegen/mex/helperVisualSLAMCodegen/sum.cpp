//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sum.cpp
//
// Code generation for function 'sum'
//

// Include files
#include "sum.h"
#include "anonymous_function.h"
#include "colon.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "introsort.h"
#include "rt_nonfinite.h"
#include "sparse1.h"
#include "sumMatrixIncludeNaN.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstring>
#include <emmintrin.h>
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo vq_emlrtRSI{
    192,                // lineNo
    "colMajorFlatIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blocke"
    "dSummation.m" // pathName
};

static emlrtRSInfo qmb_emlrtRSI{
    101,                     // lineNo
    "combineVectorElements", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRSInfo rmb_emlrtRSI{
    142,                     // lineNo
    "combineVectorElements", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRSInfo smb_emlrtRSI{
    29,                   // lineNo
    "sparse/genericLike", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\genericLike.m" // pathName
};

static emlrtRSInfo tmb_emlrtRSI{
    21,                           // lineNo
    "checkAndSaturateExpandSize", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\checkAndSaturateExpandSize.m" // pathName
};

static emlrtRSInfo umb_emlrtRSI{
    368,          // lineNo
    "sparseIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRSInfo vmb_emlrtRSI{
    392,                // lineNo
    "sparseColumnIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRSInfo wmb_emlrtRSI{
    395,                // lineNo
    "sparseColumnIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRSInfo xmb_emlrtRSI{
    407,                // lineNo
    "sparseColumnIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRSInfo ymb_emlrtRSI{
    418,                // lineNo
    "sparseColumnIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRSInfo anb_emlrtRSI{
    103,                     // lineNo
    "combineVectorElements", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRSInfo bnb_emlrtRSI{
    375,          // lineNo
    "sparseIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRSInfo cnb_emlrtRSI{
    377,          // lineNo
    "sparseIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRSInfo dnb_emlrtRSI{
    444,                // lineNo
    "sparseRowMapIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRSInfo enb_emlrtRSI{
    456,                // lineNo
    "sparseRowMapIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRSInfo fnb_emlrtRSI{
    483,                   // lineNo
    "sparseRowReduceIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRSInfo gnb_emlrtRSI{
    20,                    // lineNo
    "sparse/rowReduction", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\rowReduction.m" // pathName
};

static emlrtRSInfo hnb_emlrtRSI{
    21,                    // lineNo
    "sparse/rowReduction", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\rowReduction.m" // pathName
};

static emlrtRSInfo inb_emlrtRSI{
    14,             // lineNo
    "introsortIdx", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\introsortIdx."
    "m" // pathName
};

static emlrtRSInfo jnb_emlrtRSI{
    15,             // lineNo
    "introsortIdx", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\introsortIdx."
    "m" // pathName
};

static emlrtRSInfo nxc_emlrtRSI{
    28,                   // lineNo
    "sparse/genericLike", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\genericLike.m" // pathName
};

static emlrtRSInfo oxc_emlrtRSI{
    451,                // lineNo
    "sparseRowMapIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRSInfo pxc_emlrtRSI{
    460,                // lineNo
    "sparseRowMapIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRTEInfo t_emlrtRTEI{
    46,        // lineNo
    23,        // colNo
    "sumprod", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumpro"
    "d.m" // pName
};

static emlrtRTEInfo rb_emlrtRTEI{
    76,        // lineNo
    9,         // colNo
    "sumprod", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumpro"
    "d.m" // pName
};

static emlrtDCInfo ec_emlrtDCI{
    441,                // lineNo
    5,                  // colNo
    "sparseRowMapIter", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m", // pName
    4                    // checkKind
};

static emlrtDCInfo fc_emlrtDCI{
    143,                     // lineNo
    39,                      // colNo
    "combineVectorElements", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m", // pName
    4                    // checkKind
};

static emlrtRTEInfo eq_emlrtRTEI{
    20,    // lineNo
    1,     // colNo
    "sum", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m" // pName
};

static emlrtRTEInfo sx_emlrtRTEI{
    30,                // lineNo
    21,                // colNo
    "function_handle", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\function_"
    "handle.m" // pName
};

static emlrtRTEInfo tx_emlrtRTEI{
    15,             // lineNo
    1,              // colNo
    "introsortIdx", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\introsortIdx."
    "m" // pName
};

static emlrtRTEInfo tnb_emlrtRTEI{
    441,                     // lineNo
    5,                       // colNo
    "combineVectorElements", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pName
};

// Function Definitions
namespace coder {
void b_sum(const emlrtStack &sp, const array<real32_T, 2U> &x,
           array<real32_T, 1U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &sj_emlrtRSI;
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
  b_st.site = &tj_emlrtRSI;
  c_st.site = &uj_emlrtRSI;
  if (x.size(0) == 0) {
    y.set_size(&eq_emlrtRTEI, &c_st, 0);
  } else {
    int32_T scalarLB;
    int32_T vectorUB;
    int32_T vstride_tmp;
    d_st.site = &no_emlrtRSI;
    vstride_tmp = x.size(0);
    y.set_size(&dq_emlrtRTEI, &d_st, x.size(0));
    e_st.site = &uq_emlrtRSI;
    if (x.size(0) > 2147483646) {
      f_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }
    for (int32_T xj{0}; xj < vstride_tmp; xj++) {
      y[xj] = x[xj];
    }
    scalarLB = (vstride_tmp / 4) << 2;
    vectorUB = scalarLB - 4;
    for (int32_T k{0}; k < 2; k++) {
      int32_T xoffset;
      xoffset = (k + 1) * vstride_tmp;
      e_st.site = &vq_emlrtRSI;
      for (int32_T xj{0}; xj <= vectorUB; xj += 4) {
        __m128 b_r;
        b_r = _mm_loadu_ps(&y[xj]);
        _mm_storeu_ps(&y[xj], _mm_add_ps(b_r, _mm_loadu_ps(&x[xoffset + xj])));
      }
      for (int32_T xj{scalarLB}; xj < vstride_tmp; xj++) {
        y[xj] = y[xj] + x[xoffset + xj];
      }
    }
  }
}

void b_sum(const emlrtStack &sp, const sparse &x, b_sparse &y)
{
  anonymous_function b_this;
  array<real_T, 1U> yt;
  array<int32_T, 2U> b_y;
  array<int32_T, 1U> xrowidxPerm;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
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
  st.site = &sj_emlrtRSI;
  b_st.site = &tj_emlrtRSI;
  if ((x.m == 0) || (x.n == 0) || (x.n == 0)) {
    c_st.site = &anb_emlrtRSI;
    d_st.site = &nxc_emlrtRSI;
    if (x.m < 0) {
      y.m = 0;
    } else {
      y.m = x.m;
    }
    e_st.site = &tmb_emlrtRSI;
    y.colidx.set_size(&eq_emlrtRTEI, &c_st, 2);
    y.colidx[0] = 1;
    y.colidx[1] = 1;
    y.d.set_size(&eq_emlrtRTEI, &c_st, 1);
    y.d[0] = 0.0;
    y.rowidx.set_size(&eq_emlrtRTEI, &c_st, 1);
    y.rowidx[0] = 1;
    y.maxnz = 1;
  } else {
    int32_T currentRow;
    int32_T i;
    int32_T idx;
    int32_T nzx_tmp;
    int32_T outIdx;
    boolean_T guard1;
    c_st.site = &rmb_emlrtRSI;
    guard1 = false;
    if (x.n != 0) {
      i = x.colidx[x.colidx.size(0) - 1];
      if ((x.m <= i - 1) || (x.m <= x.n + 1)) {
        d_st.site = &bnb_emlrtRSI;
        yt.set_size(&tnb_emlrtRTEI, &d_st, x.m);
        currentRow = x.m;
        for (idx = 0; idx < currentRow; idx++) {
          yt[idx] = 0.0;
        }
        e_st.site = &dnb_emlrtRSI;
        if (i - 1 > 2147483646) {
          f_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(f_st);
        }
        for (idx = 0; idx <= i - 2; idx++) {
          yt[x.rowidx[idx] - 1] = yt[x.rowidx[idx] - 1] + x.d[idx];
        }
        outIdx = 0;
        e_st.site = &oxc_emlrtRSI;
        if (x.m > 2147483646) {
          f_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(f_st);
        }
        for (nzx_tmp = 0; nzx_tmp < currentRow; nzx_tmp++) {
          if (yt[nzx_tmp] != 0.0) {
            outIdx++;
          }
        }
        e_st.site = &enb_emlrtRSI;
        idx = outIdx;
        y.m = x.m;
        if (outIdx < 1) {
          idx = 1;
        }
        y.maxnz = idx;
        y.d.set_size(&px_emlrtRTEI, &e_st, idx);
        y.rowidx.set_size(&qx_emlrtRTEI, &e_st, idx);
        y.colidx.set_size(&rx_emlrtRTEI, &e_st, 2);
        y.colidx[0] = 1;
        y.colidx[1] = outIdx + 1;
        idx = 0;
        e_st.site = &pxc_emlrtRSI;
        for (nzx_tmp = 0; nzx_tmp < currentRow; nzx_tmp++) {
          if (yt[nzx_tmp] != 0.0) {
            y.rowidx[idx] = nzx_tmp + 1;
            y.d[idx] = yt[nzx_tmp];
            idx++;
          }
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      d_st.site = &cnb_emlrtRSI;
      e_st.site = &fnb_emlrtRSI;
      nzx_tmp = x.colidx[x.colidx.size(0) - 1] - 1;
      if (nzx_tmp < 1) {
        idx = 0;
      } else {
        idx = nzx_tmp;
      }
      f_st.site = &gnb_emlrtRSI;
      g_st.site = &inb_emlrtRSI;
      h_st.site = &pj_emlrtRSI;
      i_st.site = &yo_emlrtRSI;
      eml_integer_colon_dispatcher(i_st, idx, b_y);
      b_this.workspace.x.set_size(&sx_emlrtRTEI, &f_st, idx);
      for (i = 0; i < idx; i++) {
        b_this.workspace.x[i] = x.rowidx[i];
      }
      outIdx = b_y.size(1);
      xrowidxPerm.set_size(&tx_emlrtRTEI, &f_st, b_y.size(1));
      for (i = 0; i < outIdx; i++) {
        xrowidxPerm[i] = b_y[i];
      }
      g_st.site = &jnb_emlrtRSI;
      internal::introsort(g_st, xrowidxPerm, idx, b_this);
      f_st.site = &hnb_emlrtRSI;
      idx = nzx_tmp;
      y.m = x.m;
      if (nzx_tmp < 1) {
        idx = 1;
      }
      y.maxnz = idx;
      y.d.set_size(&px_emlrtRTEI, &f_st, idx);
      y.rowidx.set_size(&qx_emlrtRTEI, &f_st, idx);
      y.colidx.set_size(&rx_emlrtRTEI, &f_st, 2);
      idx = 0;
      outIdx = 0;
      while (idx + 1 <= nzx_tmp) {
        currentRow = x.rowidx[xrowidxPerm[idx] - 1];
        y.d[outIdx] = x.d[xrowidxPerm[idx] - 1];
        idx++;
        while ((idx + 1 <= nzx_tmp) &&
               (x.rowidx[xrowidxPerm[idx] - 1] == currentRow)) {
          y.d[outIdx] = y.d[outIdx] + x.d[xrowidxPerm[idx] - 1];
          idx++;
        }
        if (y.d[outIdx] != 0.0) {
          y.rowidx[outIdx] = currentRow;
          outIdx++;
        }
      }
      y.colidx[0] = 1;
      y.colidx[1] = outIdx + 1;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sum(const emlrtStack &sp, const array<real_T, 2U> &x, real_T y_data[],
         int32_T y_size[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &sj_emlrtRSI;
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
  if (((x.size(0) != 1) || (x.size(1) != 1)) && (x.size(0) == 1)) {
    emlrtErrorWithMessageIdR2018a(&st, &t_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  if ((x.size(0) == 0) && (x.size(1) == 0)) {
    emlrtErrorWithMessageIdR2018a(&st, &rb_emlrtRTEI,
                                  "Coder:toolbox:UnsupportedSpecialEmpty",
                                  "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }
  b_st.site = &tj_emlrtRSI;
  c_st.site = &uj_emlrtRSI;
  if ((x.size(0) == 0) || (x.size(1) == 0)) {
    int32_T loop_ub;
    y_size[0] = 1;
    y_size[1] = x.size(1);
    loop_ub = x.size(1);
    if (loop_ub - 1 >= 0) {
      std::memset(&y_data[0], 0,
                  static_cast<uint32_T>(loop_ub) * sizeof(real_T));
    }
  } else {
    int32_T loop_ub;
    d_st.site = &xn_emlrtRSI;
    e_st.site = &wj_emlrtRSI;
    y_size[0] = 1;
    loop_ub = x.size(1);
    y_size[1] = x.size(1);
    if (x.size(0) < 4096) {
      for (int32_T col{0}; col < loop_ub; col++) {
        f_st.site = &xj_emlrtRSI;
        y_data[col] = sumColumnB(f_st, x, col + 1, x.size(0));
      }
    } else {
      int32_T inb;
      int32_T nfb;
      int32_T nleft;
      nfb = static_cast<int32_T>(static_cast<uint32_T>(x.size(0)) >> 12);
      inb = nfb << 12;
      nleft = x.size(0) - inb;
      for (int32_T col{0}; col < loop_ub; col++) {
        real_T s;
        s = sumColumnB4(x, col + 1, 1);
        for (int32_T ib{2}; ib <= nfb; ib++) {
          s += sumColumnB4(x, col + 1, ((ib - 1) << 12) + 1);
        }
        if (nleft > 0) {
          f_st.site = &ak_emlrtRSI;
          s += sumColumnB(f_st, x, col + 1, nleft, inb + 1);
        }
        y_data[col] = s;
      }
    }
  }
}

void sum(const emlrtStack &sp, const array<real_T, 2U> &x, array<real_T, 2U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &sj_emlrtRSI;
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
  b_st.site = &tj_emlrtRSI;
  c_st.site = &uj_emlrtRSI;
  if (x.size(1) == 0) {
    y.set_size(&eq_emlrtRTEI, &c_st, 1, 0);
  } else {
    int32_T i;
    d_st.site = &xn_emlrtRSI;
    e_st.site = &wj_emlrtRSI;
    i = x.size(1);
    y.set_size(&lp_emlrtRTEI, &e_st, 1, x.size(1));
    f_st.site = &oo_emlrtRSI;
    if (x.size(1) > 2147483646) {
      g_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(g_st);
    }
    for (int32_T col{0}; col < i; col++) {
      y[col] = b_sumColumnB(x, col + 1);
    }
  }
}

void sum(const emlrtStack &sp, const array<real32_T, 2U> &x,
         array<real32_T, 1U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &sj_emlrtRSI;
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
  b_st.site = &tj_emlrtRSI;
  c_st.site = &uj_emlrtRSI;
  if (x.size(0) == 0) {
    y.set_size(&eq_emlrtRTEI, &c_st, 0);
  } else {
    int32_T scalarLB;
    int32_T vectorUB;
    int32_T vstride_tmp;
    d_st.site = &no_emlrtRSI;
    vstride_tmp = x.size(0);
    y.set_size(&dq_emlrtRTEI, &d_st, x.size(0));
    e_st.site = &uq_emlrtRSI;
    if (x.size(0) > 2147483646) {
      f_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }
    for (int32_T xj{0}; xj < vstride_tmp; xj++) {
      y[xj] = x[xj];
    }
    e_st.site = &vq_emlrtRSI;
    scalarLB = (x.size(0) / 4) << 2;
    vectorUB = scalarLB - 4;
    for (int32_T xj{0}; xj <= vectorUB; xj += 4) {
      __m128 b_r;
      b_r = _mm_loadu_ps(&y[xj]);
      _mm_storeu_ps(&y[xj],
                    _mm_add_ps(b_r, _mm_loadu_ps(&x[vstride_tmp + xj])));
    }
    for (int32_T xj{scalarLB}; xj < vstride_tmp; xj++) {
      y[xj] = y[xj] + x[vstride_tmp + xj];
    }
  }
}

real32_T sum(const emlrtStack &sp, const array<real32_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &sj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &tj_emlrtRSI;
  c_st.site = &uj_emlrtRSI;
  if (x.size(0) == 0) {
    y = 0.0F;
  } else {
    d_st.site = &xn_emlrtRSI;
    e_st.site = &wj_emlrtRSI;
    y = sumMatrixColumns(e_st, x, x.size(0));
  }
  return y;
}

void sum(const emlrtStack &sp, const sparse &x, b_sparse &y)
{
  anonymous_function b_this;
  array<real_T, 1U> yt;
  array<int32_T, 2U> b_y;
  array<int32_T, 1U> xrowidxPerm;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
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
  st.site = &sj_emlrtRSI;
  b_st.site = &tj_emlrtRSI;
  if ((x.m == 0) || (x.n == 0) || (x.n == 0)) {
    c_st.site = &anb_emlrtRSI;
    d_st.site = &nxc_emlrtRSI;
    if (x.m < 0) {
      y.m = 0;
    } else {
      y.m = x.m;
    }
    e_st.site = &tmb_emlrtRSI;
    y.colidx.set_size(&eq_emlrtRTEI, &c_st, 2);
    y.colidx[0] = 1;
    y.colidx[1] = 1;
    y.d.set_size(&eq_emlrtRTEI, &c_st, 1);
    y.d[0] = 0.0;
    y.rowidx.set_size(&eq_emlrtRTEI, &c_st, 1);
    y.rowidx[0] = 1;
    y.maxnz = 1;
  } else {
    int32_T currentRow;
    int32_T idx;
    int32_T nzx_tmp;
    int32_T outIdx;
    boolean_T guard1;
    c_st.site = &rmb_emlrtRSI;
    guard1 = false;
    if (x.n != 0) {
      currentRow = x.colidx[x.colidx.size(0) - 1];
      if ((x.m <= currentRow - 1) || (x.m <= x.n + 1)) {
        d_st.site = &bnb_emlrtRSI;
        if (x.m < 0) {
          emlrtNonNegativeCheckR2012b(static_cast<real_T>(x.m), &ec_emlrtDCI,
                                      &d_st);
        }
        outIdx = x.m;
        yt.set_size(&tnb_emlrtRTEI, &d_st, x.m);
        for (idx = 0; idx < outIdx; idx++) {
          yt[idx] = 0.0;
        }
        e_st.site = &dnb_emlrtRSI;
        if (currentRow - 1 > 2147483646) {
          f_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(f_st);
        }
        for (idx = 0; idx <= currentRow - 2; idx++) {
          yt[x.rowidx[idx] - 1] = yt[x.rowidx[idx] - 1] + 1.0;
        }
        outIdx = 0;
        currentRow = x.m;
        e_st.site = &oxc_emlrtRSI;
        if (x.m > 2147483646) {
          f_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(f_st);
        }
        for (nzx_tmp = 0; nzx_tmp < currentRow; nzx_tmp++) {
          if (yt[nzx_tmp] != 0.0) {
            outIdx++;
          }
        }
        e_st.site = &enb_emlrtRSI;
        idx = outIdx;
        y.m = x.m;
        if (outIdx < 1) {
          idx = 1;
        }
        y.maxnz = idx;
        y.d.set_size(&px_emlrtRTEI, &e_st, idx);
        y.rowidx.set_size(&qx_emlrtRTEI, &e_st, idx);
        y.colidx.set_size(&rx_emlrtRTEI, &e_st, 2);
        y.colidx[0] = 1;
        y.colidx[1] = outIdx + 1;
        idx = 0;
        e_st.site = &pxc_emlrtRSI;
        for (nzx_tmp = 0; nzx_tmp < currentRow; nzx_tmp++) {
          if (yt[nzx_tmp] != 0.0) {
            y.rowidx[idx] = nzx_tmp + 1;
            y.d[idx] = yt[nzx_tmp];
            idx++;
          }
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      d_st.site = &cnb_emlrtRSI;
      e_st.site = &fnb_emlrtRSI;
      nzx_tmp = x.colidx[x.colidx.size(0) - 1] - 1;
      if (nzx_tmp < 1) {
        outIdx = 0;
      } else {
        outIdx = nzx_tmp;
      }
      f_st.site = &gnb_emlrtRSI;
      g_st.site = &inb_emlrtRSI;
      h_st.site = &pj_emlrtRSI;
      i_st.site = &yo_emlrtRSI;
      eml_integer_colon_dispatcher(i_st, outIdx, b_y);
      b_this.workspace.x.set_size(&sx_emlrtRTEI, &f_st, outIdx);
      for (currentRow = 0; currentRow < outIdx; currentRow++) {
        b_this.workspace.x[currentRow] = x.rowidx[currentRow];
      }
      idx = b_y.size(1);
      xrowidxPerm.set_size(&tx_emlrtRTEI, &f_st, b_y.size(1));
      for (currentRow = 0; currentRow < idx; currentRow++) {
        xrowidxPerm[currentRow] = b_y[currentRow];
      }
      g_st.site = &jnb_emlrtRSI;
      internal::introsort(g_st, xrowidxPerm, outIdx, b_this);
      f_st.site = &hnb_emlrtRSI;
      idx = nzx_tmp;
      y.m = x.m;
      if (nzx_tmp < 1) {
        idx = 1;
      }
      y.maxnz = idx;
      y.d.set_size(&px_emlrtRTEI, &f_st, idx);
      y.rowidx.set_size(&qx_emlrtRTEI, &f_st, idx);
      y.colidx.set_size(&rx_emlrtRTEI, &f_st, 2);
      idx = 1;
      outIdx = 0;
      while (idx <= nzx_tmp) {
        currentRow = x.rowidx[xrowidxPerm[idx - 1] - 1];
        y.d[outIdx] = 1.0;
        idx++;
        while ((idx <= nzx_tmp) &&
               (x.rowidx[xrowidxPerm[idx - 1] - 1] == currentRow)) {
          y.d[outIdx] = y.d[outIdx] + 1.0;
          idx++;
        }
        y.rowidx[outIdx] = currentRow;
        outIdx++;
      }
      y.colidx[0] = 1;
      y.colidx[1] = outIdx + 1;
    }
    if (y.m < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(y.m), &fc_emlrtDCI,
                                  &b_st);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

real_T sum(const emlrtStack &sp, const array<real_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &sj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &tj_emlrtRSI;
  c_st.site = &uj_emlrtRSI;
  if (x.size(0) == 0) {
    y = 0.0;
  } else {
    d_st.site = &xn_emlrtRSI;
    e_st.site = &wj_emlrtRSI;
    y = sumMatrixColumns(e_st, x, x.size(0));
  }
  return y;
}

void sum(const emlrtStack &sp, const array<real_T, 2U> &x, array<real_T, 1U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &sj_emlrtRSI;
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
  b_st.site = &tj_emlrtRSI;
  c_st.site = &uj_emlrtRSI;
  if (x.size(0) == 0) {
    y.set_size(&eq_emlrtRTEI, &c_st, 0);
  } else {
    int32_T scalarLB;
    int32_T vectorUB;
    int32_T vstride_tmp;
    d_st.site = &no_emlrtRSI;
    vstride_tmp = x.size(0);
    y.set_size(&dq_emlrtRTEI, &d_st, x.size(0));
    e_st.site = &uq_emlrtRSI;
    if (x.size(0) > 2147483646) {
      f_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }
    for (int32_T xj{0}; xj < vstride_tmp; xj++) {
      y[xj] = x[xj];
    }
    e_st.site = &vq_emlrtRSI;
    scalarLB = (x.size(0) / 2) << 1;
    vectorUB = scalarLB - 2;
    for (int32_T xj{0}; xj <= vectorUB; xj += 2) {
      __m128d b_r;
      b_r = _mm_loadu_pd(&y[xj]);
      _mm_storeu_pd(&y[xj],
                    _mm_add_pd(b_r, _mm_loadu_pd(&x[vstride_tmp + xj])));
    }
    for (int32_T xj{scalarLB}; xj < vstride_tmp; xj++) {
      y[xj] = y[xj] + x[vstride_tmp + xj];
    }
  }
}

void sum(const real_T x[12], real_T y[4])
{
  __m128d b_r;
  y[0] = x[0];
  y[1] = x[1];
  y[2] = x[2];
  y[3] = x[3];
  b_r = _mm_loadu_pd(&y[0]);
  _mm_storeu_pd(&y[0], _mm_add_pd(b_r, _mm_loadu_pd(&x[4])));
  b_r = _mm_loadu_pd(&y[2]);
  _mm_storeu_pd(&y[2], _mm_add_pd(b_r, _mm_loadu_pd(&x[6])));
  b_r = _mm_loadu_pd(&y[0]);
  _mm_storeu_pd(&y[0], _mm_add_pd(b_r, _mm_loadu_pd(&x[8])));
  b_r = _mm_loadu_pd(&y[2]);
  _mm_storeu_pd(&y[2], _mm_add_pd(b_r, _mm_loadu_pd(&x[10])));
}

void sum(const emlrtStack &sp, const c_sparse &x, c_sparse &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &sj_emlrtRSI;
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
  b_st.site = &tj_emlrtRSI;
  if (x.n == 0) {
    c_st.site = &qmb_emlrtRSI;
    d_st.site = &smb_emlrtRSI;
    e_st.site = &tmb_emlrtRSI;
    y.n = 0;
    y.colidx.set_size(&eq_emlrtRTEI, &c_st, 1);
    y.colidx[0] = 1;
    y.d.set_size(&eq_emlrtRTEI, &c_st, 1);
    y.d[0] = 0.0;
    y.rowidx.set_size(&eq_emlrtRTEI, &c_st, 1);
    y.rowidx[0] = 1;
    y.maxnz = 1;
  } else {
    int32_T b;
    int32_T outidx;
    c_st.site = &rmb_emlrtRSI;
    d_st.site = &umb_emlrtRSI;
    outidx = x.colidx[x.colidx.size(0) - 1] - 1;
    e_st.site = &vmb_emlrtRSI;
    outidx = muIntScalarMin_sint32(x.n, outidx);
    y.n = x.n;
    if (outidx < 1) {
      outidx = 1;
    }
    y.maxnz = outidx;
    y.d.set_size(&px_emlrtRTEI, &e_st, outidx);
    y.rowidx.set_size(&qx_emlrtRTEI, &e_st, outidx);
    if (x.n + 1 < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(x.n + 1), &w_emlrtDCI,
                                  &e_st);
    }
    y.colidx.set_size(&rx_emlrtRTEI, &e_st, x.n + 1);
    y.colidx[0] = 1;
    outidx = 1;
    b = x.n;
    e_st.site = &wmb_emlrtRSI;
    if (x.n > 2147483646) {
      f_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }
    for (int32_T col{0}; col < b; col++) {
      real_T b_r;
      int32_T xend;
      int32_T xstart_tmp;
      xstart_tmp = x.colidx[col];
      xend = x.colidx[col + 1];
      b_r = 0.0;
      e_st.site = &xmb_emlrtRSI;
      if ((xstart_tmp <= x.colidx[col + 1] - 1) &&
          (x.colidx[col + 1] - 1 > 2147483646)) {
        f_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(f_st);
      }
      for (int32_T xp{xstart_tmp}; xp < xend; xp++) {
        b_r++;
      }
      if (b_r != 0.0) {
        y.d[outidx - 1] = b_r;
        outidx++;
      }
      y.colidx[col + 1] = outidx;
    }
    outidx = y.colidx[y.colidx.size(0) - 1];
    e_st.site = &ymb_emlrtRSI;
    if (outidx - 1 > 2147483646) {
      f_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }
    for (b = 0; b <= outidx - 2; b++) {
      y.rowidx[b] = 1;
    }
  }
}

void sum(const emlrtStack &sp, const c_sparse &x, d_sparse &y)
{
  anonymous_function b_this;
  array<int32_T, 2U> b_y;
  array<int32_T, 1U> xrowidxPerm;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
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
  st.site = &sj_emlrtRSI;
  b_st.site = &tj_emlrtRSI;
  if (x.n == 0) {
    c_st.site = &anb_emlrtRSI;
    y.colidx.set_size(&eq_emlrtRTEI, &c_st, 2);
    y.colidx[0] = 1;
    y.colidx[1] = 1;
    y.d.set_size(&eq_emlrtRTEI, &c_st, 1);
    y.d[0] = 0.0;
    y.rowidx.set_size(&eq_emlrtRTEI, &c_st, 1);
    y.rowidx[0] = 1;
  } else {
    int32_T currentRow;
    int32_T idx;
    int32_T outIdx;
    boolean_T guard1;
    c_st.site = &rmb_emlrtRSI;
    guard1 = false;
    if (x.n != 0) {
      currentRow = x.colidx[x.colidx.size(0) - 1];
      if ((currentRow - 1 >= 1) || (x.n + 1 >= 1)) {
        real_T yt;
        d_st.site = &bnb_emlrtRSI;
        yt = 0.0;
        e_st.site = &dnb_emlrtRSI;
        if (currentRow - 1 > 2147483646) {
          f_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(f_st);
        }
        for (idx = 0; idx <= currentRow - 2; idx++) {
          yt += x.d[idx];
        }
        idx = 0;
        if (yt != 0.0) {
          idx = 1;
        }
        e_st.site = &enb_emlrtRSI;
        outIdx = idx;
        if (idx < 1) {
          outIdx = 1;
        }
        y.d.set_size(&px_emlrtRTEI, &e_st, outIdx);
        y.rowidx.set_size(&qx_emlrtRTEI, &e_st, outIdx);
        y.colidx.set_size(&rx_emlrtRTEI, &e_st, 2);
        y.colidx[0] = 1;
        y.colidx[1] = idx + 1;
        if (yt != 0.0) {
          y.rowidx[0] = 1;
          y.d[0] = yt;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      int32_T nzx_tmp;
      d_st.site = &cnb_emlrtRSI;
      e_st.site = &fnb_emlrtRSI;
      nzx_tmp = x.colidx[x.colidx.size(0) - 1] - 1;
      if (nzx_tmp < 1) {
        idx = 0;
      } else {
        idx = nzx_tmp;
      }
      f_st.site = &gnb_emlrtRSI;
      g_st.site = &inb_emlrtRSI;
      h_st.site = &pj_emlrtRSI;
      i_st.site = &yo_emlrtRSI;
      eml_integer_colon_dispatcher(i_st, idx, b_y);
      b_this.workspace.x.set_size(&sx_emlrtRTEI, &f_st, idx);
      for (currentRow = 0; currentRow < idx; currentRow++) {
        b_this.workspace.x[currentRow] = x.rowidx[currentRow];
      }
      outIdx = b_y.size(1);
      xrowidxPerm.set_size(&tx_emlrtRTEI, &f_st, b_y.size(1));
      for (currentRow = 0; currentRow < outIdx; currentRow++) {
        xrowidxPerm[currentRow] = b_y[currentRow];
      }
      g_st.site = &jnb_emlrtRSI;
      internal::introsort(g_st, xrowidxPerm, idx, b_this);
      f_st.site = &hnb_emlrtRSI;
      outIdx = nzx_tmp;
      if (nzx_tmp < 1) {
        outIdx = 1;
      }
      y.d.set_size(&px_emlrtRTEI, &f_st, outIdx);
      y.rowidx.set_size(&qx_emlrtRTEI, &f_st, outIdx);
      y.colidx.set_size(&rx_emlrtRTEI, &f_st, 2);
      idx = 0;
      outIdx = 0;
      while (idx + 1 <= nzx_tmp) {
        currentRow = x.rowidx[xrowidxPerm[idx] - 1];
        y.d[outIdx] = x.d[xrowidxPerm[idx] - 1];
        idx++;
        while ((idx + 1 <= nzx_tmp) &&
               (x.rowidx[xrowidxPerm[idx] - 1] == currentRow)) {
          y.d[outIdx] = y.d[outIdx] + x.d[xrowidxPerm[idx] - 1];
          idx++;
        }
        if (y.d[outIdx] != 0.0) {
          y.rowidx[outIdx] = currentRow;
          outIdx++;
        }
      }
      y.colidx[0] = 1;
      y.colidx[1] = outIdx + 1;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

real_T sum(const emlrtStack &sp, const array<real_T, 2U> &x)
{
  array<real_T, 1U> c_x;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &sj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &tj_emlrtRSI;
  c_st.site = &uj_emlrtRSI;
  if (x.size(1) == 0) {
    y = 0.0;
  } else {
    int32_T b_x;
    d_st.site = &vj_emlrtRSI;
    b_x = x.size(1);
    c_x = x.reshape(b_x);
    e_st.site = &wj_emlrtRSI;
    y = sumMatrixColumns(e_st, c_x, x.size(1));
  }
  return y;
}

} // namespace coder

// End of code generation (sum.cpp)
