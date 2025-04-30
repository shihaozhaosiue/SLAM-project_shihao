//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sort.cpp
//
// Code generation for function 'sort'
//

// Include files
#include "sort.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo mi_emlrtRSI{
    81,     // lineNo
    "sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" // pathName
};

static emlrtRSInfo ni_emlrtRSI{
    84,     // lineNo
    "sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" // pathName
};

static emlrtRSInfo oi_emlrtRSI{
    87,     // lineNo
    "sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" // pathName
};

static emlrtRSInfo pi_emlrtRSI{
    90,     // lineNo
    "sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" // pathName
};

static emlrtRSInfo cw_emlrtRSI{
    76,     // lineNo
    "sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" // pathName
};

static emlrtRSInfo dw_emlrtRSI{
    79,     // lineNo
    "sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" // pathName
};

static emlrtRSInfo rac_emlrtRSI{
    72,     // lineNo
    "sort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" // pathName
};

static emlrtRTEInfo wtb_emlrtRTEI{
    56,     // lineNo
    24,     // colNo
    "sort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" // pName
};

static emlrtRTEInfo xtb_emlrtRTEI{
    75,     // lineNo
    26,     // colNo
    "sort", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
void b_sort(const emlrtStack &sp, array<real_T, 1U> &x, array<int32_T, 1U> &idx)
{
  array<real_T, 1U> vwork;
  array<int32_T, 1U> iidx;
  emlrtStack b_st;
  emlrtStack st;
  int32_T dim;
  int32_T i;
  int32_T vstride;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  dim = 2;
  if (x.size(0) != 1) {
    dim = 1;
  }
  if (dim <= 1) {
    i = x.size(0);
  } else {
    i = 1;
  }
  vwork.set_size(&wtb_emlrtRTEI, &sp, i);
  idx.set_size(&xtb_emlrtRTEI, &sp, x.size(0));
  st.site = &cw_emlrtRSI;
  vstride = 1;
  dim -= 2;
  for (int32_T k{0}; k <= dim; k++) {
    vstride *= x.size(0);
  }
  st.site = &dw_emlrtRSI;
  st.site = &mi_emlrtRSI;
  if (vstride > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T j{0}; j < vstride; j++) {
    st.site = &ni_emlrtRSI;
    if (i > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T k{0}; k < i; k++) {
      vwork[k] = x[j + k * vstride];
    }
    st.site = &oi_emlrtRSI;
    c_sortIdx(st, vwork, iidx);
    st.site = &pi_emlrtRSI;
    for (int32_T k{0}; k < i; k++) {
      dim = j + k * vstride;
      x[dim] = vwork[k];
      idx[dim] = iidx[k];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void b_sort(const emlrtStack &sp, array<real32_T, 2U> &x,
            array<int32_T, 2U> &idx)
{
  array<int32_T, 1U> iwork;
  array<real32_T, 1U> xwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &rac_emlrtRSI;
  bLen2 = x.size(1);
  idx.set_size(&ew_emlrtRTEI, &st, 1, bLen2);
  for (i = 0; i < bLen2; i++) {
    idx[i] = 0;
  }
  if (x.size(1) != 0) {
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
    b_st.site = &qi_emlrtRSI;
    iwork.set_size(&ytb_emlrtRTEI, &b_st, bLen2);
    for (i = 0; i < bLen2; i++) {
      iwork[i] = 0;
    }
    xwork.set_size(&aub_emlrtRTEI, &b_st, bLen2);
    c_st.site = &ri_emlrtRSI;
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
    d_st.site = &wi_emlrtRSI;
    if (x.size(1) > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
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
    wOffset_tmp = x.size(1) - nBlocks;
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
      d_st.site = &xi_emlrtRSI;
      if (ib > 2147483646) {
        e_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(e_st);
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
    d_st.site = &yi_emlrtRSI;
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
      if (x.size(1) >= 256) {
        nBlocks = wOffset_tmp >> 8;
        if (nBlocks > 0) {
          c_st.site = &si_emlrtRSI;
          for (int32_T b{0}; b < nBlocks; b++) {
            int32_T b_iwork[256];
            real32_T b_xwork[256];
            c_st.site = &ti_emlrtRSI;
            i4 = (b << 8) - 1;
            for (int32_T b_b{0}; b_b < 6; b_b++) {
              bLen = 1 << (b_b + 2);
              bLen2 = bLen << 1;
              i = 256 >> (b_b + 3);
              d_st.site = &aj_emlrtRSI;
              for (int32_T k{0}; k < i; k++) {
                i2 = (i4 + k * bLen2) + 1;
                d_st.site = &bj_emlrtRSI;
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
                      d_st.site = &cj_emlrtRSI;
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
            c_st.site = &ui_emlrtRSI;
            merge_block(c_st, idx, x, ib, i1, 2, iwork, xwork);
          }
          ib = 8;
        }
      }
      c_st.site = &vi_emlrtRSI;
      merge_block(c_st, idx, x, 0, wOffset_tmp, ib, iwork, xwork);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

int32_T sort(const emlrtStack &sp, real32_T x_data[], const int32_T &x_size,
             int32_T idx_data[])
{
  array<int32_T, 1U> iidx;
  array<real32_T, 1U> vwork;
  emlrtStack b_st;
  emlrtStack st;
  int32_T dim;
  int32_T i;
  int32_T idx_size;
  int32_T vstride;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  dim = 2;
  if (x_size != 1) {
    dim = 1;
  }
  if (dim <= 1) {
    i = x_size;
  } else {
    i = 1;
  }
  vwork.set_size(&wtb_emlrtRTEI, &sp, i);
  idx_size = x_size;
  st.site = &cw_emlrtRSI;
  vstride = 1;
  dim -= 2;
  for (int32_T k{0}; k <= dim; k++) {
    vstride *= x_size;
  }
  st.site = &dw_emlrtRSI;
  st.site = &mi_emlrtRSI;
  if (vstride > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T j{0}; j < vstride; j++) {
    st.site = &ni_emlrtRSI;
    for (int32_T k{0}; k < i; k++) {
      vwork[k] = x_data[j + k * vstride];
    }
    st.site = &oi_emlrtRSI;
    sortIdx(st, vwork, iidx);
    st.site = &pi_emlrtRSI;
    for (int32_T k{0}; k < i; k++) {
      dim = j + k * vstride;
      x_data[dim] = vwork[k];
      idx_data[dim] = iidx[k];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return idx_size;
}

void sort(const emlrtStack &sp, array<real_T, 1U> &x)
{
  array<real_T, 1U> vwork;
  array<int32_T, 1U> mjd_emlrtRSI;
  emlrtStack b_st;
  emlrtStack st;
  int32_T dim;
  int32_T i;
  int32_T vstride;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  dim = 2;
  if (x.size(0) != 1) {
    dim = 1;
  }
  if (dim <= 1) {
    i = x.size(0);
  } else {
    i = 1;
  }
  vwork.set_size(&wtb_emlrtRTEI, &sp, i);
  st.site = &cw_emlrtRSI;
  vstride = 1;
  dim -= 2;
  for (int32_T k{0}; k <= dim; k++) {
    vstride *= x.size(0);
  }
  st.site = &dw_emlrtRSI;
  st.site = &mi_emlrtRSI;
  if (vstride > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (dim = 0; dim < vstride; dim++) {
    st.site = &ni_emlrtRSI;
    if (i > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T k{0}; k < i; k++) {
      vwork[k] = x[dim + k * vstride];
    }
    st.site = &oi_emlrtRSI;
    b_sortIdx(st, vwork, mjd_emlrtRSI);
    st.site = &pi_emlrtRSI;
    for (int32_T k{0}; k < i; k++) {
      x[dim + k * vstride] = vwork[k];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sort(const emlrtStack &sp, array<uint32_T, 1U> &x)
{
  array<int32_T, 1U> mjd_emlrtRSI;
  array<uint32_T, 1U> vwork;
  emlrtStack b_st;
  emlrtStack st;
  int32_T dim;
  int32_T i;
  int32_T vstride;
  boolean_T b_overflow;
  boolean_T overflow;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  dim = 2;
  if (x.size(0) != 1) {
    dim = 1;
  }
  if (dim <= 1) {
    i = x.size(0);
  } else {
    i = 1;
  }
  vwork.set_size(&wtb_emlrtRTEI, &sp, i);
  st.site = &cw_emlrtRSI;
  vstride = 1;
  dim -= 2;
  for (int32_T k{0}; k <= dim; k++) {
    vstride *= x.size(0);
  }
  st.site = &dw_emlrtRSI;
  overflow = (i > 2147483646);
  b_overflow = (i > 2147483646);
  st.site = &mi_emlrtRSI;
  if (vstride > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (dim = 0; dim < vstride; dim++) {
    st.site = &ni_emlrtRSI;
    if (overflow) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T k{0}; k < i; k++) {
      vwork[k] = x[dim + k * vstride];
    }
    st.site = &oi_emlrtRSI;
    b_sortIdx(st, vwork, mjd_emlrtRSI);
    st.site = &pi_emlrtRSI;
    if (b_overflow) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T k{0}; k < i; k++) {
      x[dim + k * vstride] = vwork[k];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sort(const emlrtStack &sp, array<int32_T, 2U> &x)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T vstride;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  vstride = x.size(0);
  st.site = &mi_emlrtRSI;
  if (x.size(0) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T j{0}; j < vstride; j++) {
    int32_T vwork_idx_0;
    int32_T vwork_idx_1;
    int32_T vwork_idx_1_tmp;
    vwork_idx_0 = x[j];
    vwork_idx_1_tmp = j + vstride;
    vwork_idx_1 = x[vwork_idx_1_tmp];
    if (vwork_idx_0 > vwork_idx_1) {
      int32_T tmp;
      tmp = vwork_idx_0;
      vwork_idx_0 = vwork_idx_1;
      vwork_idx_1 = tmp;
    }
    x[j] = vwork_idx_0;
    x[vwork_idx_1_tmp] = vwork_idx_1;
  }
}

void sort(const emlrtStack &sp, array<uint32_T, 1U> &x, array<int32_T, 1U> &idx)
{
  array<int32_T, 1U> iidx;
  array<uint32_T, 1U> vwork;
  emlrtStack b_st;
  emlrtStack st;
  int32_T dim;
  int32_T i;
  int32_T vstride;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  dim = 2;
  if (x.size(0) != 1) {
    dim = 1;
  }
  if (dim <= 1) {
    i = x.size(0);
  } else {
    i = 1;
  }
  vwork.set_size(&wtb_emlrtRTEI, &sp, i);
  idx.set_size(&xtb_emlrtRTEI, &sp, x.size(0));
  st.site = &cw_emlrtRSI;
  vstride = 1;
  dim -= 2;
  for (int32_T k{0}; k <= dim; k++) {
    vstride *= x.size(0);
  }
  st.site = &dw_emlrtRSI;
  st.site = &mi_emlrtRSI;
  if (vstride > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T j{0}; j < vstride; j++) {
    st.site = &ni_emlrtRSI;
    if (i > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T k{0}; k < i; k++) {
      vwork[k] = x[j + k * vstride];
    }
    st.site = &oi_emlrtRSI;
    b_sortIdx(st, vwork, iidx);
    st.site = &pi_emlrtRSI;
    for (int32_T k{0}; k < i; k++) {
      dim = j + k * vstride;
      x[dim] = vwork[k];
      idx[dim] = iidx[k];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sort(const emlrtStack &sp, array<real32_T, 2U> &x, array<int32_T, 2U> &idx)
{
  array<int32_T, 1U> iidx;
  array<real32_T, 1U> vwork;
  emlrtStack b_st;
  emlrtStack st;
  int32_T vlen_tmp;
  int32_T vstride;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  vlen_tmp = x.size(1);
  vwork.set_size(&wtb_emlrtRTEI, &sp, vlen_tmp);
  idx.set_size(&xtb_emlrtRTEI, &sp, x.size(0), x.size(1));
  vstride = x.size(0);
  st.site = &mi_emlrtRSI;
  if (x.size(0) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T j{0}; j < vstride; j++) {
    st.site = &ni_emlrtRSI;
    if (vlen_tmp > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T k{0}; k < vlen_tmp; k++) {
      vwork[k] = x[j + k * vstride];
    }
    st.site = &oi_emlrtRSI;
    sortIdx(st, vwork, iidx);
    st.site = &pi_emlrtRSI;
    for (int32_T k{0}; k < vlen_tmp; k++) {
      int32_T i;
      i = j + k * vstride;
      x[i] = vwork[k];
      idx[i] = iidx[k];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sort(const emlrtStack &sp, array<int32_T, 1U> &x, array<int32_T, 1U> &idx)
{
  array<int32_T, 1U> iidx;
  array<int32_T, 1U> vwork;
  emlrtStack b_st;
  emlrtStack st;
  int32_T dim;
  int32_T i;
  int32_T vstride;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  dim = 2;
  if (x.size(0) != 1) {
    dim = 1;
  }
  if (dim <= 1) {
    i = x.size(0);
  } else {
    i = 1;
  }
  vwork.set_size(&wtb_emlrtRTEI, &sp, i);
  idx.set_size(&xtb_emlrtRTEI, &sp, x.size(0));
  st.site = &cw_emlrtRSI;
  vstride = 1;
  dim -= 2;
  for (int32_T k{0}; k <= dim; k++) {
    vstride *= x.size(0);
  }
  st.site = &dw_emlrtRSI;
  st.site = &mi_emlrtRSI;
  if (vstride > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T j{0}; j < vstride; j++) {
    st.site = &ni_emlrtRSI;
    if (i > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T k{0}; k < i; k++) {
      vwork[k] = x[j + k * vstride];
    }
    st.site = &oi_emlrtRSI;
    sortIdx(st, vwork, iidx);
    st.site = &pi_emlrtRSI;
    for (int32_T k{0}; k < i; k++) {
      dim = j + k * vstride;
      x[dim] = vwork[k];
      idx[dim] = iidx[k];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sort(const emlrtStack &sp, array<real_T, 1U> &x, array<int32_T, 1U> &idx)
{
  array<real_T, 1U> vwork;
  array<int32_T, 1U> iidx;
  emlrtStack b_st;
  emlrtStack st;
  int32_T dim;
  int32_T i;
  int32_T vstride;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  dim = 2;
  if (x.size(0) != 1) {
    dim = 1;
  }
  if (dim <= 1) {
    i = x.size(0);
  } else {
    i = 1;
  }
  vwork.set_size(&wtb_emlrtRTEI, &sp, i);
  idx.set_size(&xtb_emlrtRTEI, &sp, x.size(0));
  st.site = &cw_emlrtRSI;
  vstride = 1;
  dim -= 2;
  for (int32_T k{0}; k <= dim; k++) {
    vstride *= x.size(0);
  }
  st.site = &dw_emlrtRSI;
  st.site = &mi_emlrtRSI;
  if (vstride > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T j{0}; j < vstride; j++) {
    st.site = &ni_emlrtRSI;
    if (i > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T k{0}; k < i; k++) {
      vwork[k] = x[j + k * vstride];
    }
    st.site = &oi_emlrtRSI;
    b_sortIdx(st, vwork, iidx);
    st.site = &pi_emlrtRSI;
    for (int32_T k{0}; k < i; k++) {
      dim = j + k * vstride;
      x[dim] = vwork[k];
      idx[dim] = iidx[k];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace internal
} // namespace coder

// End of code generation (sort.cpp)
