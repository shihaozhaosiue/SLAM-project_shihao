//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// eml_setop.cpp
//
// Code generation for function 'eml_setop'
//

// Include files
#include "eml_setop.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "issorted.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sortIdx.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo ffb_emlrtRSI{
    433,          // lineNo
    "do_vectors", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pathName
};

static emlrtRSInfo gfb_emlrtRSI{
    432,          // lineNo
    "do_vectors", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pathName
};

static emlrtRSInfo hfb_emlrtRSI{
    229,          // lineNo
    "do_vectors", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pathName
};

static emlrtRSInfo cjb_emlrtRSI{
    230,          // lineNo
    "do_vectors", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pathName
};

static emlrtRSInfo kac_emlrtRSI{
    241,          // lineNo
    "do_vectors", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pathName
};

static emlrtRSInfo lac_emlrtRSI{
    244,          // lineNo
    "do_vectors", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pathName
};

static emlrtRSInfo psc_emlrtRSI{
    847,       // lineNo
    "do_rows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pathName
};

static emlrtRSInfo qsc_emlrtRSI{
    845,       // lineNo
    "do_rows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pathName
};

static emlrtRSInfo rsc_emlrtRSI{
    629,       // lineNo
    "do_rows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pathName
};

static emlrtRTEInfo ee_emlrtRTEI{
    242,          // lineNo
    13,           // colNo
    "do_vectors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pName
};

static emlrtRTEInfo fe_emlrtRTEI{
    245,          // lineNo
    13,           // colNo
    "do_vectors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pName
};

static emlrtRTEInfo ge_emlrtRTEI{
    409,          // lineNo
    5,            // colNo
    "do_vectors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pName
};

static emlrtRTEInfo he_emlrtRTEI{
    420,          // lineNo
    9,            // colNo
    "do_vectors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pName
};

static emlrtRTEInfo ie_emlrtRTEI{
    447,          // lineNo
    5,            // colNo
    "do_vectors", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pName
};

static emlrtRTEInfo xu_emlrtRTEI{
    223,         // lineNo
    24,          // colNo
    "eml_setop", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pName
};

static emlrtRTEInfo yu_emlrtRTEI{
    224,         // lineNo
    25,          // colNo
    "eml_setop", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pName
};

static emlrtRTEInfo av_emlrtRTEI{
    442,         // lineNo
    9,           // colNo
    "eml_setop", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pName
};

static emlrtRTEInfo fw_emlrtRTEI{
    442,         // lineNo
    14,          // colNo
    "eml_setop", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pName
};

static emlrtRTEInfo hfb_emlrtRTEI{
    225,         // lineNo
    25,          // colNo
    "eml_setop", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pName
};

static emlrtRTEInfo ifb_emlrtRTEI{
    415,         // lineNo
    9,           // colNo
    "eml_setop", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pName
};

static emlrtRTEInfo jfb_emlrtRTEI{
    426,         // lineNo
    13,          // colNo
    "eml_setop", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pName
};

static emlrtRTEInfo kfb_emlrtRTEI{
    451,         // lineNo
    9,           // colNo
    "eml_setop", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pName
};

static emlrtRTEInfo rmb_emlrtRTEI{
    629,         // lineNo
    9,           // colNo
    "eml_setop", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" // pName
};

// Function Definitions
namespace coder {
void b_do_vectors(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                  const array<uint32_T, 1U> &b, array<uint32_T, 1U> &c,
                  array<int32_T, 1U> &ia, array<int32_T, 1U> &ib)
{
  array<int32_T, 1U> aperm;
  array<int32_T, 1U> bperm;
  emlrtStack b_st;
  emlrtStack st;
  int32_T iafirst;
  int32_T ialast;
  int32_T ibfirst;
  int32_T iblast;
  int32_T na;
  int32_T nb;
  int32_T nc;
  int32_T ncmax;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  na = a.size(0);
  nb = b.size(0);
  ncmax = muIntScalarMin_sint32(na, nb);
  c.set_size(&xu_emlrtRTEI, &sp, ncmax);
  ia.set_size(&yu_emlrtRTEI, &sp, ncmax);
  ib.set_size(&hfb_emlrtRTEI, &sp, ncmax);
  st.site = &hfb_emlrtRSI;
  internal::sortIdx(st, a, aperm);
  st.site = &cjb_emlrtRSI;
  internal::sortIdx(st, b, bperm);
  nc = 0;
  iafirst = 0;
  ialast = 1;
  ibfirst = 0;
  iblast = 1;
  while ((ialast <= na) && (iblast <= nb)) {
    int32_T b_ialast;
    int32_T b_iblast;
    uint32_T ak;
    uint32_T bk;
    b_ialast = ialast;
    ak = a[aperm[ialast - 1] - 1];
    while ((b_ialast < a.size(0)) && (a[aperm[b_ialast] - 1] == ak)) {
      b_ialast++;
    }
    ialast = b_ialast;
    b_iblast = iblast;
    bk = b[bperm[iblast - 1] - 1];
    while ((b_iblast < b.size(0)) && (b[bperm[b_iblast] - 1] == bk)) {
      b_iblast++;
    }
    iblast = b_iblast;
    if (ak == bk) {
      nc++;
      ia[nc - 1] = aperm[iafirst];
      ib[nc - 1] = bperm[ibfirst];
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    } else if (ak < bk) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
    } else {
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    }
  }
  if (nc > ncmax) {
    emlrtErrorWithMessageIdR2018a(&sp, &ge_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (nc < 1) {
    nb = 0;
  } else {
    nb = nc;
  }
  ia.set_size(&ifb_emlrtRTEI, &sp, nb);
  if (nc > ncmax) {
    emlrtErrorWithMessageIdR2018a(&sp, &he_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  ib.set_size(&jfb_emlrtRTEI, &sp, nb);
  st.site = &gfb_emlrtRSI;
  b_st.site = &li_emlrtRSI;
  internal::sort(b_st, ia, aperm);
  st.site = &ffb_emlrtRSI;
  if (nc > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (na = 0; na < nc; na++) {
    c[na] = a[ia[na] - 1];
  }
  na = aperm.size(0);
  bperm.set_size(&fw_emlrtRTEI, &sp, aperm.size(0));
  for (iafirst = 0; iafirst < na; iafirst++) {
    bperm[iafirst] = ib[aperm[iafirst] - 1];
  }
  ib.set_size(&av_emlrtRTEI, &sp, aperm.size(0));
  for (iafirst = 0; iafirst < na; iafirst++) {
    ib[iafirst] = bperm[iafirst];
  }
  if (nc > ncmax) {
    emlrtErrorWithMessageIdR2018a(&sp, &ie_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  c.set_size(&kfb_emlrtRTEI, &sp, nb);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

int32_T b_do_vectors(const emlrtStack &sp, const uint32_T a_data[],
                     int32_T a_size, uint32_T c_data[], int32_T ia_data[],
                     int32_T &ia_size, int32_T ib_data[], int32_T &ib_size)
{
  array<int32_T, 1U> iidx;
  array<int32_T, 1U> y;
  array<uint32_T, 1U> b_a_data;
  emlrtStack b_st;
  emlrtStack st;
  int32_T c_size;
  int32_T iafirst;
  int32_T ialast;
  int32_T nc;
  uint32_T b_c_data;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_a_data.set((uint32_T *)&a_data[0], a_size);
  st.site = &hfb_emlrtRSI;
  internal::sortIdx(st, b_a_data, y);
  nc = 0;
  iafirst = 0;
  ialast = 1;
  c_size = 1;
  while ((ialast <= 2) && (c_size <= 1)) {
    int32_T b_ialast;
    b_ialast = ialast;
    b_c_data = a_data[y[ialast - 1] - 1];
    while ((b_ialast < 2) && (a_data[y[1] - 1] == b_c_data)) {
      b_ialast = 2;
    }
    ialast = b_ialast;
    if (b_c_data == 2U) {
      nc++;
      ia_data[0] = y[iafirst];
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      c_size = 2;
    } else if (b_c_data < 2U) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
    } else {
      c_size = 2;
    }
  }
  c_size = (nc >= 1);
  for (ialast = 0; ialast < c_size; ialast++) {
    iafirst = ia_data[0];
  }
  if (c_size - 1 >= 0) {
    ia_data[0] = iafirst;
  }
  st.site = &gfb_emlrtRSI;
  y.set_size(&tr_emlrtRTEI, &st, c_size);
  for (ialast = 0; ialast < c_size; ialast++) {
    y[0] = ia_data[0];
  }
  b_st.site = &li_emlrtRSI;
  internal::sort(b_st, y, iidx);
  iafirst = y.size(0);
  ia_size = y.size(0);
  for (ialast = 0; ialast < iafirst; ialast++) {
    ia_data[ialast] = y[ialast];
  }
  st.site = &ffb_emlrtRSI;
  if (nc > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  if (static_cast<uint8_T>(nc) - 1 >= 0) {
    c_data[0] = a_data[y[0] - 1];
  }
  iafirst = iidx.size(0);
  ib_size = iidx.size(0);
  if (iafirst - 1 >= 0) {
    ib_data[0] = 1;
  }
  for (ialast = 0; ialast < c_size; ialast++) {
    b_c_data = c_data[0];
  }
  if (c_size - 1 >= 0) {
    c_data[0] = b_c_data;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return c_size;
}

int32_T do_rows(const emlrtStack &sp, const array<uint32_T, 2U> &a,
                const uint32_T b[2], uint32_T c_data[], int32_T c_size[2],
                int32_T ia_data[], int32_T ib_data[], int32_T &ib_size)
{
  array<int32_T, 1U> aperm;
  array<int32_T, 1U> iwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T b_k;
  int32_T i;
  int32_T ia_size;
  int32_T iafirst;
  int32_T ialast;
  int32_T ibfirst;
  int32_T iblast;
  int32_T j;
  int32_T k;
  int32_T nc;
  int32_T qEnd;
  int32_T v1_tmp;
  uint32_T v1;
  uint32_T v2;
  int8_T cola[2];
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  nc = 0;
  cola[0] = 1;
  cola[1] = 2;
  st.site = &rsc_emlrtRSI;
  ia_size = a.size(0) + 1;
  i = a.size(0);
  aperm.set_size(&rmb_emlrtRTEI, &st, a.size(0));
  for (ibfirst = 0; ibfirst < i; ibfirst++) {
    aperm[ibfirst] = 0;
  }
  b_st.site = &kcb_emlrtRSI;
  iwork.set_size(&cv_emlrtRTEI, &b_st, a.size(0));
  i = a.size(0) - 1;
  c_st.site = &lcb_emlrtRSI;
  if (a.size(0) - 1 > 2147483645) {
    d_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (k = 1; k <= i; k += 2) {
    p = true;
    b_k = 0;
    exitg1 = false;
    while ((!exitg1) && (b_k < 2)) {
      v1_tmp = cola[b_k] - 1;
      v1 = a[(k + a.size(0) * v1_tmp) - 1];
      v2 = a[k + a.size(0) * v1_tmp];
      if (v1 == v2) {
        b_k++;
      } else {
        p = (v1 <= v2);
        exitg1 = true;
      }
    }
    if (p) {
      aperm[k - 1] = k;
      aperm[k] = k + 1;
    } else {
      aperm[k - 1] = k + 1;
      aperm[k] = k;
    }
  }
  if ((static_cast<uint32_T>(a.size(0)) & 1U) != 0U) {
    aperm[a.size(0) - 1] = a.size(0);
  }
  i = 2;
  while (i < ia_size - 1) {
    iafirst = i << 1;
    j = 1;
    for (ibfirst = i + 1; ibfirst < ia_size; ibfirst = qEnd + i) {
      int32_T kEnd;
      ialast = j;
      iblast = ibfirst;
      qEnd = j + iafirst;
      if (qEnd > ia_size) {
        qEnd = ia_size;
      }
      k = 0;
      kEnd = qEnd - j;
      while (k + 1 <= kEnd) {
        p = true;
        b_k = 0;
        exitg1 = false;
        while ((!exitg1) && (b_k < 2)) {
          v1_tmp = cola[b_k] - 1;
          v1 = a[(aperm[ialast - 1] + a.size(0) * v1_tmp) - 1];
          v2 = a[(aperm[iblast - 1] + a.size(0) * v1_tmp) - 1];
          if (v1 == v2) {
            b_k++;
          } else {
            p = (v1 <= v2);
            exitg1 = true;
          }
        }
        if (p) {
          iwork[k] = aperm[ialast - 1];
          ialast++;
          if (ialast == ibfirst) {
            while (iblast < qEnd) {
              k++;
              iwork[k] = aperm[iblast - 1];
              iblast++;
            }
          }
        } else {
          iwork[k] = aperm[iblast - 1];
          iblast++;
          if (iblast == qEnd) {
            while (ialast < ibfirst) {
              k++;
              iwork[k] = aperm[ialast - 1];
              ialast++;
            }
          }
        }
        k++;
      }
      c_st.site = &mcb_emlrtRSI;
      for (k = 0; k < kEnd; k++) {
        aperm[(j + k) - 1] = iwork[k];
      }
      j = qEnd;
    }
    i = iafirst;
  }
  iafirst = 1;
  ibfirst = 1;
  ialast = 1;
  iblast = 1;
  while ((iafirst <= a.size(0)) && (ibfirst <= 1)) {
    j = aperm[ialast - 1] - 1;
    exitg1 = false;
    while ((!exitg1) && (ialast < a.size(0))) {
      int32_T exitg3;
      k = 0;
      do {
        exitg3 = 0;
        if (k < 2) {
          if (a[j + a.size(0) * k] == a[(aperm[ialast] + a.size(0) * k) - 1]) {
            k++;
          } else {
            exitg3 = 1;
          }
        } else {
          ialast++;
          exitg3 = 2;
        }
      } while (exitg3 == 0);
      if (exitg3 == 1) {
        exitg1 = true;
      }
    }
    while (iblast < 1) {
      iblast++;
    }
    i = aperm[iafirst - 1];
    k = 0;
    int32_T exitg2;
    do {
      exitg2 = 0;
      if (k < 2) {
        if (a[(i + a.size(0) * k) - 1] == b[k]) {
          k++;
        } else {
          if (a[(i + a.size(0) * k) - 1] < b[k]) {
            ialast++;
            iafirst = ialast;
          } else {
            iblast++;
            ibfirst = iblast;
          }
          exitg2 = 1;
        }
      } else {
        nc++;
        ia_data[0] = i;
        ialast++;
        iafirst = ialast;
        iblast++;
        ibfirst = iblast;
        exitg2 = 1;
      }
    } while (exitg2 == 0);
  }
  iafirst = (nc >= 1);
  for (ibfirst = 0; ibfirst < iafirst; ibfirst++) {
    i = ia_data[0];
  }
  if (iafirst - 1 >= 0) {
    ia_data[0] = i;
  }
  st.site = &qsc_emlrtRSI;
  aperm.set_size(&tr_emlrtRTEI, &st, iafirst);
  for (ibfirst = 0; ibfirst < iafirst; ibfirst++) {
    aperm[0] = ia_data[0];
  }
  b_st.site = &li_emlrtRSI;
  internal::sort(b_st, aperm, iwork);
  i = aperm.size(0);
  ia_size = aperm.size(0);
  for (ibfirst = 0; ibfirst < i; ibfirst++) {
    ia_data[ibfirst] = aperm[ibfirst];
  }
  st.site = &psc_emlrtRSI;
  if (nc > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  if (static_cast<uint8_T>(nc) - 1 >= 0) {
    c_data[0] = a[aperm[0] - 1];
  }
  st.site = &psc_emlrtRSI;
  if (static_cast<uint8_T>(nc) - 1 >= 0) {
    c_data[1] = a[(aperm[0] + a.size(0)) - 1];
  }
  i = iwork.size(0);
  ib_size = iwork.size(0);
  if (i - 1 >= 0) {
    ib_data[0] = 1;
  }
  for (ibfirst = 0; ibfirst < 2; ibfirst++) {
    for (i = 0; i < iafirst; i++) {
      c_data[iafirst * ibfirst] = c_data[ibfirst];
    }
  }
  c_size[0] = iafirst;
  c_size[1] = 2;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return ia_size;
}

void do_vectors(const emlrtStack &sp, const array<real_T, 1U> &a,
                const array<real_T, 1U> &b, array<real_T, 1U> &c,
                array<int32_T, 1U> &ia, array<int32_T, 1U> &ib)
{
  array<int32_T, 1U> aperm;
  array<int32_T, 1U> bperm;
  emlrtStack b_st;
  emlrtStack st;
  int32_T iafirst;
  int32_T ialast;
  int32_T ibfirst;
  int32_T iblast;
  int32_T na;
  int32_T nb;
  int32_T nc;
  int32_T ncmax;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  na = a.size(0);
  nb = b.size(0);
  ncmax = muIntScalarMin_sint32(na, nb);
  c.set_size(&xu_emlrtRTEI, &sp, ncmax);
  ia.set_size(&yu_emlrtRTEI, &sp, ncmax);
  ib.set_size(&hfb_emlrtRTEI, &sp, ncmax);
  st.site = &hfb_emlrtRSI;
  internal::sortIdx(st, a, aperm);
  st.site = &cjb_emlrtRSI;
  internal::sortIdx(st, b, bperm);
  nc = 0;
  iafirst = 0;
  ialast = 1;
  ibfirst = 0;
  iblast = 1;
  while ((ialast <= na) && (iblast <= nb)) {
    real_T ak;
    real_T bk;
    int32_T b_ialast;
    int32_T b_iblast;
    b_ialast = ialast;
    ak = a[aperm[ialast - 1] - 1];
    while ((b_ialast < a.size(0)) && (a[aperm[b_ialast] - 1] == ak)) {
      b_ialast++;
    }
    ialast = b_ialast;
    b_iblast = iblast;
    bk = b[bperm[iblast - 1] - 1];
    while ((b_iblast < b.size(0)) && (b[bperm[b_iblast] - 1] == bk)) {
      b_iblast++;
    }
    iblast = b_iblast;
    if (ak == bk) {
      nc++;
      ia[nc - 1] = aperm[iafirst];
      ib[nc - 1] = bperm[ibfirst];
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    } else {
      boolean_T p;
      if (muDoubleScalarIsNaN(bk)) {
        p = !muDoubleScalarIsNaN(ak);
      } else if (muDoubleScalarIsNaN(ak)) {
        p = false;
      } else {
        p = (ak < bk);
      }
      if (p) {
        ialast = b_ialast + 1;
        iafirst = b_ialast;
      } else {
        iblast = b_iblast + 1;
        ibfirst = b_iblast;
      }
    }
  }
  if (ncmax > 0) {
    if (nc > ncmax) {
      emlrtErrorWithMessageIdR2018a(&sp, &ge_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nc < 1) {
      nb = 0;
    } else {
      nb = nc;
    }
    ia.set_size(&ifb_emlrtRTEI, &sp, nb);
    if (nc > ncmax) {
      emlrtErrorWithMessageIdR2018a(&sp, &he_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    ib.set_size(&jfb_emlrtRTEI, &sp, nb);
  }
  st.site = &gfb_emlrtRSI;
  b_st.site = &li_emlrtRSI;
  internal::sort(b_st, ia, aperm);
  st.site = &ffb_emlrtRSI;
  if (nc > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (na = 0; na < nc; na++) {
    c[na] = a[ia[na] - 1];
  }
  na = aperm.size(0);
  bperm.set_size(&fw_emlrtRTEI, &sp, aperm.size(0));
  for (nb = 0; nb < na; nb++) {
    bperm[nb] = ib[aperm[nb] - 1];
  }
  ib.set_size(&av_emlrtRTEI, &sp, aperm.size(0));
  for (nb = 0; nb < na; nb++) {
    ib[nb] = bperm[nb];
  }
  if (ncmax > 0) {
    if (nc > ncmax) {
      emlrtErrorWithMessageIdR2018a(&sp, &ie_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nc < 1) {
      nc = 0;
    }
    c.set_size(&kfb_emlrtRTEI, &sp, nc);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

int32_T do_vectors(const emlrtStack &sp, const array<real_T, 1U> &a,
                   const array<real_T, 1U> &b, array<real_T, 1U> &c,
                   array<int32_T, 1U> &ia)
{
  array<int32_T, 1U> aperm;
  array<int32_T, 1U> bperm;
  array<int32_T, 1U> mjd_emlrtRSI;
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_ialast;
  int32_T i;
  int32_T iafirst;
  int32_T ialast;
  int32_T ib_size;
  int32_T iblast;
  int32_T nc;
  int32_T nia;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  i = a.size(0);
  c.set_size(&xu_emlrtRTEI, &sp, a.size(0));
  ia.set_size(&yu_emlrtRTEI, &sp, a.size(0));
  ib_size = 0;
  st.site = &hfb_emlrtRSI;
  internal::sortIdx(st, a, aperm);
  st.site = &cjb_emlrtRSI;
  internal::sortIdx(st, b, bperm);
  nc = 0;
  nia = 0;
  iafirst = 0;
  ialast = 1;
  iblast = 1;
  while ((ialast <= i) && (iblast <= b.size(0))) {
    real_T ak;
    real_T bk;
    b_ialast = ialast;
    ak = a[aperm[ialast - 1] - 1];
    while ((b_ialast < a.size(0)) && (a[aperm[b_ialast] - 1] == ak)) {
      b_ialast++;
    }
    ialast = b_ialast;
    bk = b[bperm[iblast - 1] - 1];
    while ((iblast < b.size(0)) && (b[bperm[iblast] - 1] == bk)) {
      iblast++;
    }
    if (ak == bk) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast++;
    } else {
      boolean_T p;
      if (muDoubleScalarIsNaN(bk)) {
        p = !muDoubleScalarIsNaN(ak);
      } else if (muDoubleScalarIsNaN(ak)) {
        p = false;
      } else {
        p = (ak < bk);
      }
      if (p) {
        ialast = nc;
        nia = nc + 1;
        nc++;
        ia[ialast] = aperm[iafirst];
        ialast = b_ialast + 1;
        iafirst = b_ialast;
      } else {
        iblast++;
      }
    }
  }
  while (ialast <= i) {
    b_ialast = ialast;
    while ((b_ialast < a.size(0)) &&
           (a[aperm[b_ialast] - 1] == a[aperm[ialast - 1] - 1])) {
      b_ialast++;
    }
    ialast = nc;
    nia = nc + 1;
    nc++;
    ia[ialast] = aperm[iafirst];
    ialast = b_ialast + 1;
    iafirst = b_ialast;
  }
  if (a.size(0) > 0) {
    if (nia > a.size(0)) {
      emlrtErrorWithMessageIdR2018a(&sp, &ge_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nia < 1) {
      i = 0;
    } else {
      i = nia;
    }
    ia.set_size(&ifb_emlrtRTEI, &sp, i);
  }
  st.site = &gfb_emlrtRSI;
  b_st.site = &li_emlrtRSI;
  internal::sort(b_st, ia, mjd_emlrtRSI);
  st.site = &ffb_emlrtRSI;
  if (nia > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (ialast = 0; ialast < nia; ialast++) {
    c[ialast] = a[ia[ialast] - 1];
  }
  if (a.size(0) > 0) {
    if (nc > a.size(0)) {
      emlrtErrorWithMessageIdR2018a(&sp, &ie_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nc < 1) {
      nc = 0;
    }
    c.set_size(&kfb_emlrtRTEI, &sp, nc);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return ib_size;
}

int32_T do_vectors(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                   const array<real_T, 1U> &b, array<uint32_T, 1U> &c,
                   array<int32_T, 1U> &ia)
{
  array<int32_T, 1U> aperm;
  array<int32_T, 1U> bperm;
  array<int32_T, 1U> mjd_emlrtRSI;
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_ialast;
  int32_T i;
  int32_T iafirst;
  int32_T ialast;
  int32_T ib_size;
  int32_T iblast;
  int32_T nc;
  int32_T nia;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  i = a.size(0);
  c.set_size(&xu_emlrtRTEI, &sp, a.size(0));
  ia.set_size(&yu_emlrtRTEI, &sp, a.size(0));
  ib_size = 0;
  st.site = &hfb_emlrtRSI;
  internal::sortIdx(st, a, aperm);
  st.site = &cjb_emlrtRSI;
  internal::sortIdx(st, b, bperm);
  nc = 0;
  nia = 0;
  iafirst = 0;
  ialast = 1;
  iblast = 1;
  while ((ialast <= i) && (iblast <= b.size(0))) {
    real_T bk;
    uint32_T ak;
    b_ialast = ialast;
    ak = a[aperm[ialast - 1] - 1];
    while ((b_ialast < a.size(0)) && (a[aperm[b_ialast] - 1] == ak)) {
      b_ialast++;
    }
    ialast = b_ialast;
    bk = b[bperm[iblast - 1] - 1];
    while ((iblast < b.size(0)) && (b[bperm[iblast] - 1] == bk)) {
      iblast++;
    }
    if (ak == bk) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast++;
    } else if (muDoubleScalarIsNaN(bk) || (ak < bk)) {
      ialast = nc;
      nia = nc + 1;
      nc++;
      ia[ialast] = aperm[iafirst];
      ialast = b_ialast + 1;
      iafirst = b_ialast;
    } else {
      iblast++;
    }
  }
  while (ialast <= i) {
    b_ialast = ialast;
    while ((b_ialast < a.size(0)) &&
           (a[aperm[b_ialast] - 1] == a[aperm[ialast - 1] - 1])) {
      b_ialast++;
    }
    ialast = nc;
    nia = nc + 1;
    nc++;
    ia[ialast] = aperm[iafirst];
    ialast = b_ialast + 1;
    iafirst = b_ialast;
  }
  if (a.size(0) > 0) {
    if (nia > a.size(0)) {
      emlrtErrorWithMessageIdR2018a(&sp, &ge_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nia < 1) {
      i = 0;
    } else {
      i = nia;
    }
    ia.set_size(&ifb_emlrtRTEI, &sp, i);
  }
  st.site = &gfb_emlrtRSI;
  b_st.site = &li_emlrtRSI;
  internal::sort(b_st, ia, mjd_emlrtRSI);
  st.site = &ffb_emlrtRSI;
  if (nia > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (ialast = 0; ialast < nia; ialast++) {
    c[ialast] = a[ia[ialast] - 1];
  }
  if (a.size(0) > 0) {
    if (nc > a.size(0)) {
      emlrtErrorWithMessageIdR2018a(&sp, &ie_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nc < 1) {
      nc = 0;
    }
    c.set_size(&kfb_emlrtRTEI, &sp, nc);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return ib_size;
}

void do_vectors(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                const array<uint32_T, 2U> &b, array<uint32_T, 1U> &c,
                array<int32_T, 1U> &ia, array<int32_T, 1U> &ib)
{
  array<int32_T, 2U> bperm;
  array<int32_T, 1U> aperm;
  array<int32_T, 1U> b_ib;
  emlrtStack b_st;
  emlrtStack st;
  int32_T iafirst;
  int32_T ialast;
  int32_T ibfirst;
  int32_T iblast;
  int32_T na;
  int32_T nb;
  int32_T nc;
  int32_T ncmax;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  na = a.size(0);
  nb = b.size(1);
  ncmax = muIntScalarMin_sint32(na, nb);
  c.set_size(&xu_emlrtRTEI, &sp, ncmax);
  ia.set_size(&yu_emlrtRTEI, &sp, ncmax);
  ib.set_size(&hfb_emlrtRTEI, &sp, ncmax);
  st.site = &hfb_emlrtRSI;
  internal::sortIdx(st, a, aperm);
  st.site = &cjb_emlrtRSI;
  internal::sortIdx(st, b, bperm);
  nc = 0;
  iafirst = 0;
  ialast = 1;
  ibfirst = 0;
  iblast = 1;
  while ((ialast <= na) && (iblast <= nb)) {
    int32_T b_ialast;
    int32_T b_iblast;
    uint32_T ak;
    uint32_T bk;
    b_ialast = ialast;
    ak = a[aperm[ialast - 1] - 1];
    while ((b_ialast < a.size(0)) && (a[aperm[b_ialast] - 1] == ak)) {
      b_ialast++;
    }
    ialast = b_ialast;
    b_iblast = iblast;
    bk = b[bperm[iblast - 1] - 1];
    while ((b_iblast < b.size(1)) && (b[bperm[b_iblast] - 1] == bk)) {
      b_iblast++;
    }
    iblast = b_iblast;
    if (ak == bk) {
      nc++;
      ia[nc - 1] = aperm[iafirst];
      ib[nc - 1] = bperm[ibfirst];
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    } else if (ak < bk) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
    } else {
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    }
  }
  if (nc > ncmax) {
    emlrtErrorWithMessageIdR2018a(&sp, &ge_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (nc < 1) {
    nb = 0;
  } else {
    nb = nc;
  }
  ia.set_size(&ifb_emlrtRTEI, &sp, nb);
  if (nc > ncmax) {
    emlrtErrorWithMessageIdR2018a(&sp, &he_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  ib.set_size(&jfb_emlrtRTEI, &sp, nb);
  st.site = &gfb_emlrtRSI;
  b_st.site = &li_emlrtRSI;
  internal::sort(b_st, ia, aperm);
  st.site = &ffb_emlrtRSI;
  if (nc > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (na = 0; na < nc; na++) {
    c[na] = a[ia[na] - 1];
  }
  na = aperm.size(0);
  b_ib.set_size(&fw_emlrtRTEI, &sp, aperm.size(0));
  for (iafirst = 0; iafirst < na; iafirst++) {
    b_ib[iafirst] = ib[aperm[iafirst] - 1];
  }
  ib.set_size(&av_emlrtRTEI, &sp, aperm.size(0));
  for (iafirst = 0; iafirst < na; iafirst++) {
    ib[iafirst] = b_ib[iafirst];
  }
  if (nc > ncmax) {
    emlrtErrorWithMessageIdR2018a(&sp, &ie_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  c.set_size(&kfb_emlrtRTEI, &sp, nb);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

int32_T do_vectors(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                   const array<uint32_T, 1U> &b, array<uint32_T, 1U> &c,
                   array<int32_T, 1U> &ia)
{
  array<int32_T, 1U> aperm;
  array<int32_T, 1U> bperm;
  array<int32_T, 1U> mjd_emlrtRSI;
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_ialast;
  int32_T i;
  int32_T iafirst;
  int32_T ialast;
  int32_T ib_size;
  int32_T iblast;
  int32_T nc;
  int32_T nia;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  i = a.size(0);
  c.set_size(&xu_emlrtRTEI, &sp, a.size(0));
  ia.set_size(&yu_emlrtRTEI, &sp, a.size(0));
  ib_size = 0;
  st.site = &hfb_emlrtRSI;
  internal::sortIdx(st, a, aperm);
  st.site = &cjb_emlrtRSI;
  internal::sortIdx(st, b, bperm);
  nc = 0;
  nia = 0;
  iafirst = 0;
  ialast = 1;
  iblast = 1;
  while ((ialast <= i) && (iblast <= b.size(0))) {
    uint32_T ak;
    uint32_T bk;
    b_ialast = ialast;
    ak = a[aperm[ialast - 1] - 1];
    while ((b_ialast < a.size(0)) && (a[aperm[b_ialast] - 1] == ak)) {
      b_ialast++;
    }
    ialast = b_ialast;
    bk = b[bperm[iblast - 1] - 1];
    while ((iblast < b.size(0)) && (b[bperm[iblast] - 1] == bk)) {
      iblast++;
    }
    if (ak == bk) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast++;
    } else if (ak < bk) {
      ialast = nc;
      nia = nc + 1;
      nc++;
      ia[ialast] = aperm[iafirst];
      ialast = b_ialast + 1;
      iafirst = b_ialast;
    } else {
      iblast++;
    }
  }
  while (ialast <= i) {
    b_ialast = ialast;
    while ((b_ialast < a.size(0)) &&
           (a[aperm[b_ialast] - 1] == a[aperm[ialast - 1] - 1])) {
      b_ialast++;
    }
    ialast = nc;
    nia = nc + 1;
    nc++;
    ia[ialast] = aperm[iafirst];
    ialast = b_ialast + 1;
    iafirst = b_ialast;
  }
  if (a.size(0) > 0) {
    if (nia > a.size(0)) {
      emlrtErrorWithMessageIdR2018a(&sp, &ge_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nia < 1) {
      i = 0;
    } else {
      i = nia;
    }
    ia.set_size(&ifb_emlrtRTEI, &sp, i);
  }
  st.site = &gfb_emlrtRSI;
  b_st.site = &li_emlrtRSI;
  internal::sort(b_st, ia, mjd_emlrtRSI);
  st.site = &ffb_emlrtRSI;
  if (nia > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (ialast = 0; ialast < nia; ialast++) {
    c[ialast] = a[ia[ialast] - 1];
  }
  if (a.size(0) > 0) {
    if (nc > a.size(0)) {
      emlrtErrorWithMessageIdR2018a(&sp, &ie_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nc < 1) {
      nc = 0;
    }
    c.set_size(&kfb_emlrtRTEI, &sp, nc);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return ib_size;
}

int32_T do_vectors(const emlrtStack &sp, const uint32_T a_data[],
                   int32_T a_size, uint32_T c_data[], int32_T ia_data[],
                   int32_T &ia_size, int32_T ib_data[], int32_T &ib_size)
{
  array<int32_T, 1U> iidx;
  array<int32_T, 1U> y;
  array<uint32_T, 1U> b_a_data;
  emlrtStack b_st;
  emlrtStack st;
  int32_T c_size;
  int32_T iafirst;
  int32_T ialast;
  int32_T nc;
  uint32_T b_c_data;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_a_data.set((uint32_T *)&a_data[0], a_size);
  st.site = &hfb_emlrtRSI;
  internal::sortIdx(st, b_a_data, y);
  nc = 0;
  iafirst = 0;
  ialast = 1;
  c_size = 1;
  while ((ialast <= 2) && (c_size <= 1)) {
    int32_T b_ialast;
    b_ialast = ialast;
    b_c_data = a_data[y[ialast - 1] - 1];
    while ((b_ialast < 2) && (a_data[y[1] - 1] == b_c_data)) {
      b_ialast = 2;
    }
    ialast = b_ialast;
    if (b_c_data == 1U) {
      nc++;
      ia_data[0] = y[iafirst];
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      c_size = 2;
    } else if (b_c_data < 1U) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
    } else {
      c_size = 2;
    }
  }
  c_size = (nc >= 1);
  for (ialast = 0; ialast < c_size; ialast++) {
    iafirst = ia_data[0];
  }
  if (c_size - 1 >= 0) {
    ia_data[0] = iafirst;
  }
  st.site = &gfb_emlrtRSI;
  y.set_size(&tr_emlrtRTEI, &st, c_size);
  for (ialast = 0; ialast < c_size; ialast++) {
    y[0] = ia_data[0];
  }
  b_st.site = &li_emlrtRSI;
  internal::sort(b_st, y, iidx);
  iafirst = y.size(0);
  ia_size = y.size(0);
  for (ialast = 0; ialast < iafirst; ialast++) {
    ia_data[ialast] = y[ialast];
  }
  st.site = &ffb_emlrtRSI;
  if (nc > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  if (static_cast<uint8_T>(nc) - 1 >= 0) {
    c_data[0] = a_data[y[0] - 1];
  }
  iafirst = iidx.size(0);
  ib_size = iidx.size(0);
  if (iafirst - 1 >= 0) {
    ib_data[0] = 1;
  }
  for (ialast = 0; ialast < c_size; ialast++) {
    b_c_data = c_data[0];
  }
  if (c_size - 1 >= 0) {
    c_data[0] = b_c_data;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return c_size;
}

int32_T do_vectors(const emlrtStack &sp, const int32_T b_size[2],
                   int32_T c_size[2], int32_T &ib_size)
{
  array<int32_T, 2U> mjd_emlrtRSI;
  array<int32_T, 1U> njd_emlrtRSI;
  array<int32_T, 1U> y;
  array<uint32_T, 2U> b_data;
  emlrtStack b_st;
  emlrtStack st;
  int32_T ia_size;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  c_size[0] = 1;
  c_size[1] = 0;
  b_data.set(nullptr, b_size[0], b_size[1]);
  st.site = &cjb_emlrtRSI;
  internal::sortIdx(st, b_data, mjd_emlrtRSI);
  st.site = &gfb_emlrtRSI;
  y.set_size(&tr_emlrtRTEI, &st, 0);
  b_st.site = &li_emlrtRSI;
  internal::sort(b_st, y, njd_emlrtRSI);
  ia_size = y.size(0);
  st.site = &ffb_emlrtRSI;
  ib_size = 0;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return ia_size;
}

int32_T do_vectors(const emlrtStack &sp, const uint32_T b_data[],
                   const int32_T b_size[2], int32_T c_size[2],
                   int32_T ia_data[], int32_T ib_data[], int32_T &ib_size)
{
  array<int32_T, 2U> mjd_emlrtRSI;
  array<int32_T, 1U> iidx;
  array<int32_T, 1U> y;
  array<uint32_T, 2U> b_b_data;
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_ib_data;
  int32_T ia_size;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  c_size[0] = 1;
  b_b_data.set((uint32_T *)&b_data[0], b_size[0], b_size[1]);
  st.site = &cjb_emlrtRSI;
  internal::sortIdx(st, b_b_data, mjd_emlrtRSI);
  st.site = &gfb_emlrtRSI;
  y.set_size(&tr_emlrtRTEI, &st, 0);
  b_st.site = &li_emlrtRSI;
  internal::sort(b_st, y, iidx);
  loop_ub = y.size(0);
  ia_size = y.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    ia_data[i] = y[i];
  }
  st.site = &ffb_emlrtRSI;
  loop_ub = iidx.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_ib_data = ib_data[iidx[i] - 1];
  }
  ib_size = iidx.size(0);
  if (loop_ub - 1 >= 0) {
    ib_data[0] = b_ib_data;
  }
  c_size[1] = 0;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return ia_size;
}

void do_vectors(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                const array<uint32_T, 1U> &b, array<uint32_T, 1U> &c,
                array<int32_T, 1U> &ia, array<int32_T, 1U> &ib)
{
  emlrtStack st;
  int32_T iafirst;
  int32_T ialast;
  int32_T ibfirst;
  int32_T iblast;
  int32_T na;
  int32_T nb;
  int32_T nc;
  int32_T ncmax;
  st.prev = &sp;
  st.tls = sp.tls;
  na = a.size(0);
  nb = b.size(0);
  ncmax = muIntScalarMin_sint32(na, nb);
  c.set_size(&xu_emlrtRTEI, &sp, ncmax);
  ia.set_size(&yu_emlrtRTEI, &sp, ncmax);
  ib.set_size(&hfb_emlrtRTEI, &sp, ncmax);
  st.site = &kac_emlrtRSI;
  if (!issorted(st, a)) {
    emlrtErrorWithMessageIdR2018a(&sp, &ee_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedA",
                                  "Coder:toolbox:eml_setop_unsortedA", 0);
  }
  st.site = &lac_emlrtRSI;
  if (!issorted(st, b)) {
    emlrtErrorWithMessageIdR2018a(&sp, &fe_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedB",
                                  "Coder:toolbox:eml_setop_unsortedB", 0);
  }
  nc = 0;
  iafirst = 0;
  ialast = 1;
  ibfirst = 0;
  iblast = 1;
  while ((ialast <= na) && (iblast <= nb)) {
    int32_T b_ialast;
    int32_T b_iblast;
    uint32_T ak;
    uint32_T bk;
    b_ialast = ialast;
    ak = a[ialast - 1];
    while ((b_ialast < a.size(0)) && (a[b_ialast] == ak)) {
      b_ialast++;
    }
    ialast = b_ialast;
    b_iblast = iblast;
    bk = b[iblast - 1];
    while ((b_iblast < b.size(0)) && (b[b_iblast] == bk)) {
      b_iblast++;
    }
    iblast = b_iblast;
    if (ak == bk) {
      nc++;
      c[nc - 1] = ak;
      ia[nc - 1] = iafirst + 1;
      ib[nc - 1] = ibfirst + 1;
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    } else if (ak < bk) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
    } else {
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    }
  }
  if (ncmax > 0) {
    if (nc > ncmax) {
      emlrtErrorWithMessageIdR2018a(&sp, &ge_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nc < 1) {
      na = 0;
    } else {
      na = nc;
    }
    ia.set_size(&ifb_emlrtRTEI, &sp, na);
    if (nc > ncmax) {
      emlrtErrorWithMessageIdR2018a(&sp, &he_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    ib.set_size(&jfb_emlrtRTEI, &sp, na);
    if (nc > ncmax) {
      emlrtErrorWithMessageIdR2018a(&sp, &ie_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    c.set_size(&kfb_emlrtRTEI, &sp, na);
  }
}

int32_T do_vectors(const emlrtStack &sp, uint32_T a,
                   const array<uint32_T, 2U> &b, uint32_T c_data[],
                   int32_T c_size[2], int32_T ia_data[], int32_T ib_data[],
                   int32_T &ib_size)
{
  array<int32_T, 2U> bperm;
  array<int32_T, 1U> iidx;
  array<int32_T, 1U> y;
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_iblast;
  int32_T ia_size;
  int32_T ibfirst;
  int32_T iblast;
  int32_T nc;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  c_size[0] = 1;
  st.site = &cjb_emlrtRSI;
  internal::sortIdx(st, b, bperm);
  nc = 0;
  ibfirst = 0;
  iblast = 1;
  exitg1 = false;
  while ((!exitg1) && (iblast <= b.size(1))) {
    uint32_T bk;
    b_iblast = iblast;
    bk = b[bperm[iblast - 1] - 1];
    while ((b_iblast < b.size(1)) && (b[bperm[b_iblast] - 1] == bk)) {
      b_iblast++;
    }
    if (a == bk) {
      nc = 1;
      ib_data[0] = bperm[ibfirst];
      exitg1 = true;
    } else if (a < bk) {
      exitg1 = true;
    } else {
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    }
  }
  ibfirst = (nc >= 1);
  for (int32_T i{0}; i < ibfirst; i++) {
    iblast = ib_data[0];
  }
  if (ibfirst - 1 >= 0) {
    ib_data[0] = iblast;
  }
  st.site = &gfb_emlrtRSI;
  y.set_size(&tr_emlrtRTEI, &st, ibfirst);
  for (int32_T i{0}; i < ibfirst; i++) {
    y[0] = 1;
  }
  b_st.site = &li_emlrtRSI;
  internal::sort(b_st, y, iidx);
  b_iblast = y.size(0);
  ia_size = y.size(0);
  for (int32_T i{0}; i < b_iblast; i++) {
    ia_data[i] = y[i];
  }
  st.site = &ffb_emlrtRSI;
  if (nc - 1 >= 0) {
    c_data[0] = a;
  }
  b_iblast = iidx.size(0);
  for (int32_T i{0}; i < b_iblast; i++) {
    iblast = ib_data[iidx[i] - 1];
  }
  ib_size = iidx.size(0);
  if (b_iblast - 1 >= 0) {
    ib_data[0] = iblast;
  }
  c_size[1] = ibfirst;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return ia_size;
}

int32_T do_vectors(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                   uint32_T b, uint32_T c_data[], int32_T ia_data[],
                   int32_T &ia_size, int32_T ib_data[], int32_T &ib_size)
{
  array<int32_T, 1U> aperm;
  array<int32_T, 1U> iidx;
  emlrtStack b_st;
  emlrtStack st;
  int32_T c_size;
  int32_T iafirst;
  int32_T ialast;
  int32_T nc;
  uint32_T b_c_data;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &hfb_emlrtRSI;
  internal::sortIdx(st, a, aperm);
  nc = 0;
  iafirst = 0;
  ialast = 1;
  c_size = 1;
  while ((ialast <= a.size(0)) && (c_size <= 1)) {
    int32_T b_ialast;
    b_ialast = ialast;
    b_c_data = a[aperm[ialast - 1] - 1];
    while ((b_ialast < a.size(0)) && (a[aperm[b_ialast] - 1] == b_c_data)) {
      b_ialast++;
    }
    ialast = b_ialast;
    if (b_c_data == b) {
      nc++;
      ia_data[0] = aperm[iafirst];
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      c_size = 2;
    } else if (b_c_data < b) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
    } else {
      c_size = 2;
    }
  }
  c_size = (nc >= 1);
  for (ialast = 0; ialast < c_size; ialast++) {
    iafirst = ia_data[0];
  }
  if (c_size - 1 >= 0) {
    ia_data[0] = iafirst;
  }
  st.site = &gfb_emlrtRSI;
  aperm.set_size(&tr_emlrtRTEI, &st, c_size);
  for (ialast = 0; ialast < c_size; ialast++) {
    aperm[0] = ia_data[0];
  }
  b_st.site = &li_emlrtRSI;
  internal::sort(b_st, aperm, iidx);
  iafirst = aperm.size(0);
  ia_size = aperm.size(0);
  for (ialast = 0; ialast < iafirst; ialast++) {
    ia_data[ialast] = aperm[ialast];
  }
  st.site = &ffb_emlrtRSI;
  if (nc > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  if (static_cast<uint8_T>(nc) - 1 >= 0) {
    c_data[0] = a[aperm[0] - 1];
  }
  iafirst = iidx.size(0);
  ib_size = iidx.size(0);
  if (iafirst - 1 >= 0) {
    ib_data[0] = 1;
  }
  for (ialast = 0; ialast < c_size; ialast++) {
    b_c_data = c_data[0];
  }
  if (c_size - 1 >= 0) {
    c_data[0] = b_c_data;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return c_size;
}

} // namespace coder

// End of code generation (eml_setop.cpp)
