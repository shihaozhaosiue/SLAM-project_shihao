//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// svd1.cpp
//
// Code generation for function 'svd1'
//

// Include files
#include "svd1.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>

// Variable Definitions
static emlrtRSInfo ro_emlrtRSI{
    23,    // lineNo
    "svd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" // pathName
};

static emlrtRSInfo so_emlrtRSI{
    163,              // lineNo
    "getUSVForEmpty", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" // pathName
};

static emlrtRSInfo st_emlrtRSI{
    81,           // lineNo
    "callLAPACK", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" // pathName
};

static emlrtRTEInfo pp_emlrtRTEI{
    57,    // lineNo
    33,    // colNo
    "svd", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" // pName
};

static emlrtRTEInfo qp_emlrtRTEI{
    84,    // lineNo
    66,    // colNo
    "svd", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" // pName
};

static emlrtRTEInfo rp_emlrtRTEI{
    45,       // lineNo
    24,       // colNo
    "xgesdd", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgesdd.m" // pName
};

static emlrtRTEInfo sp_emlrtRTEI{
    96,    // lineNo
    36,    // colNo
    "svd", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" // pName
};

static emlrtRTEInfo tp_emlrtRTEI{
    83,       // lineNo
    24,       // colNo
    "xgesvd", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgesvd.m" // pName
};

static emlrtRTEInfo up_emlrtRTEI{
    23,    // lineNo
    9,     // colNo
    "svd", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" // pName
};

static emlrtRTEInfo nr_emlrtRTEI{
    81,    // lineNo
    63,    // colNo
    "svd", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" // pName
};

static const int8_T iv2[81]{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
                            0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
                            0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
                            0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
                            0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};

static const char_T cv4[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                            '_', 'd', 'g', 'e', 's', 'd', 'd'};

// Function Definitions
namespace coder {
namespace internal {
int32_T b_svd(const emlrtStack &sp, const array<real32_T, 2U> &A,
              array<real32_T, 2U> &U, real32_T s_data[], real32_T V[81])
{
  array<real32_T, 2U> Utmp;
  array<real32_T, 2U> b_A;
  array<real32_T, 2U> c_A;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T s_size;
  real32_T Vt[81];
  real32_T superb_data[8];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (A.size(0) == 0) {
    st.site = &ro_emlrtRSI;
    U.set_size(&up_emlrtRTEI, &st, 0, 0);
    b_st.site = &so_emlrtRSI;
    s_size = 0;
    for (int32_T i{0}; i < 81; i++) {
      V[i] = iv2[i];
    }
  } else {
    ptrdiff_t info_t;
    int32_T i;
    int32_T info;
    st.site = &gm_emlrtRSI;
    i = A.size(0);
    b_A.set_size(&pp_emlrtRTEI, &st, A.size(0), 9);
    info = A.size(0) * 9;
    for (int32_T i1{0}; i1 < info; i1++) {
      b_A[i1] = A[i1];
    }
    b_st.site = &im_emlrtRSI;
    c_A.set_size(&qp_emlrtRTEI, &b_st, A.size(0), 9);
    for (int32_T i1{0}; i1 < info; i1++) {
      c_A[i1] = A[i1];
    }
    Utmp.set_size(&rp_emlrtRTEI, &b_st, A.size(0), A.size(0));
    s_size = muIntScalarMin_sint32(9, i);
    info_t = LAPACKE_sgesdd(102, 'A', (ptrdiff_t)A.size(0), (ptrdiff_t)9,
                            &(c_A.data())[0], (ptrdiff_t)A.size(0), &s_data[0],
                            &(Utmp.data())[0], (ptrdiff_t)A.size(0), &Vt[0],
                            (ptrdiff_t)9);
    c_st.site = &jm_emlrtRSI;
    if ((int32_T)info_t < 0) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&c_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&c_st, &gb_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      14, &cv[0], 12, (int32_T)info_t);
      }
    }
    info = (int32_T)info_t;
    if ((int32_T)info_t > 0) {
      b_st.site = &hm_emlrtRSI;
      c_st.site = &km_emlrtRSI;
      U.set_size(&tp_emlrtRTEI, &c_st, A.size(0), s_size);
      info_t = LAPACKE_sgesvd(102, 'S', 'A', (ptrdiff_t)A.size(0), (ptrdiff_t)9,
                              &(b_A.data())[0], (ptrdiff_t)A.size(0),
                              &s_data[0], &(U.data())[0], (ptrdiff_t)A.size(0),
                              &Vt[0], (ptrdiff_t)9, &superb_data[0]);
      for (i = 0; i < 9; i++) {
        for (int32_T i1{0}; i1 < 9; i1++) {
          V[i1 + 9 * i] = Vt[i + 9 * i1];
        }
      }
      d_st.site = &lm_emlrtRSI;
      if ((int32_T)info_t < 0) {
        if ((int32_T)info_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&d_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &gb_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &cv1[0], 12, (int32_T)info_t);
        }
      }
      info = (int32_T)info_t;
    } else {
      for (int32_T i1{0}; i1 < 9; i1++) {
        for (int32_T k{0}; k < 9; k++) {
          V[k + 9 * i1] = Vt[i1 + 9 * k];
        }
      }
      i = muIntScalarMin_sint32(i, 9);
      U.set_size(&sp_emlrtRTEI, &st, A.size(0), i);
      i *= A.size(0);
      for (int32_T k{0}; k < i; k++) {
        U[k] = Utmp[k];
      }
    }
    if (info > 0) {
      emlrtErrorWithMessageIdR2018a(&st, &eb_emlrtRTEI,
                                    "Coder:MATLAB:svd_NoConvergence",
                                    "Coder:MATLAB:svd_NoConvergence", 0);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return s_size;
}

int32_T b_svd(const emlrtStack &sp, const array<real_T, 2U> &A,
              array<real_T, 2U> &U, real_T s_data[], real_T V[81])
{
  array<real_T, 2U> b_A;
  array<real_T, 2U> c_A;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T Vt[81];
  real_T superb_data[8];
  int32_T s_size;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (A.size(0) == 0) {
    st.site = &ro_emlrtRSI;
    U.set_size(&up_emlrtRTEI, &st, 0, 0);
    b_st.site = &so_emlrtRSI;
    s_size = 0;
    for (int32_T i{0}; i < 81; i++) {
      V[i] = iv2[i];
    }
  } else {
    ptrdiff_t info_t;
    int32_T i;
    int32_T info;
    st.site = &gm_emlrtRSI;
    i = A.size(0);
    b_A.set_size(&pp_emlrtRTEI, &st, A.size(0), 9);
    info = A.size(0) * 9;
    for (int32_T i1{0}; i1 < info; i1++) {
      b_A[i1] = A[i1];
    }
    b_st.site = &st_emlrtRSI;
    c_A.set_size(&nr_emlrtRTEI, &b_st, A.size(0), 9);
    for (int32_T i1{0}; i1 < info; i1++) {
      c_A[i1] = A[i1];
    }
    U.set_size(&rp_emlrtRTEI, &b_st, A.size(0), A.size(0));
    s_size = muIntScalarMin_sint32(9, i);
    info_t = LAPACKE_dgesdd(102, 'A', (ptrdiff_t)A.size(0), (ptrdiff_t)9,
                            &(c_A.data())[0], (ptrdiff_t)A.size(0), &s_data[0],
                            &(U.data())[0], (ptrdiff_t)A.size(0), &Vt[0],
                            (ptrdiff_t)9);
    c_st.site = &jm_emlrtRSI;
    if ((int32_T)info_t < 0) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&c_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&c_st, &gb_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      14, &cv4[0], 12, (int32_T)info_t);
      }
    }
    info = (int32_T)info_t;
    if ((int32_T)info_t > 0) {
      b_st.site = &hm_emlrtRSI;
      c_st.site = &km_emlrtRSI;
      U.set_size(&tp_emlrtRTEI, &c_st, A.size(0), A.size(0));
      info_t = LAPACKE_dgesvd(102, 'A', 'A', (ptrdiff_t)A.size(0), (ptrdiff_t)9,
                              &(b_A.data())[0], (ptrdiff_t)A.size(0),
                              &s_data[0], &(U.data())[0], (ptrdiff_t)A.size(0),
                              &Vt[0], (ptrdiff_t)9, &superb_data[0]);
      for (i = 0; i < 9; i++) {
        for (int32_T i1{0}; i1 < 9; i1++) {
          V[i1 + 9 * i] = Vt[i + 9 * i1];
        }
      }
      d_st.site = &lm_emlrtRSI;
      if ((int32_T)info_t < 0) {
        if ((int32_T)info_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&d_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &gb_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &cv3[0], 12, (int32_T)info_t);
        }
      }
      info = (int32_T)info_t;
    } else {
      for (i = 0; i < 9; i++) {
        for (int32_T i1{0}; i1 < 9; i1++) {
          V[i1 + 9 * i] = Vt[i + 9 * i1];
        }
      }
    }
    if (info > 0) {
      emlrtErrorWithMessageIdR2018a(&st, &eb_emlrtRTEI,
                                    "Coder:MATLAB:svd_NoConvergence",
                                    "Coder:MATLAB:svd_NoConvergence", 0);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return s_size;
}

int32_T b_svd(const emlrtStack &sp, const real_T A_data[],
              const int32_T A_size[2], real_T U_data[], int32_T U_size[2],
              real_T s_data[], real_T V[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T b_A_data[15];
  real_T c_A_data[15];
  real_T Vt[9];
  real_T superb_data[2];
  int32_T s_size;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (A_size[0] == 0) {
    st.site = &ro_emlrtRSI;
    U_size[0] = 0;
    U_size[1] = 0;
    b_st.site = &so_emlrtRSI;
    s_size = 0;
    for (int32_T i{0}; i < 9; i++) {
      V[i] = iv1[i];
    }
  } else {
    ptrdiff_t info_t;
    int32_T info;
    st.site = &gm_emlrtRSI;
    info = A_size[0] * 3;
    std::copy(&A_data[0], &A_data[info], &b_A_data[0]);
    b_st.site = &st_emlrtRSI;
    std::copy(&A_data[0], &A_data[info], &c_A_data[0]);
    U_size[0] = A_size[0];
    U_size[1] = A_size[0];
    s_size = muIntScalarMin_sint32(3, A_size[0]);
    info_t =
        LAPACKE_dgesdd(102, 'A', (ptrdiff_t)A_size[0], (ptrdiff_t)3,
                       &c_A_data[0], (ptrdiff_t)A_size[0], &s_data[0],
                       &U_data[0], (ptrdiff_t)A_size[0], &Vt[0], (ptrdiff_t)3);
    c_st.site = &jm_emlrtRSI;
    if ((int32_T)info_t < 0) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&c_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&c_st, &gb_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      14, &cv4[0], 12, (int32_T)info_t);
      }
    }
    info = (int32_T)info_t;
    if ((int32_T)info_t > 0) {
      b_st.site = &hm_emlrtRSI;
      c_st.site = &km_emlrtRSI;
      info_t = LAPACKE_dgesvd(102, 'A', 'A', (ptrdiff_t)A_size[0], (ptrdiff_t)3,
                              &b_A_data[0], (ptrdiff_t)A_size[0], &s_data[0],
                              &U_data[0], (ptrdiff_t)A_size[0], &Vt[0],
                              (ptrdiff_t)3, &superb_data[0]);
      for (int32_T i{0}; i < 3; i++) {
        V[3 * i] = Vt[i];
        V[3 * i + 1] = Vt[i + 3];
        V[3 * i + 2] = Vt[i + 6];
      }
      d_st.site = &lm_emlrtRSI;
      if ((int32_T)info_t < 0) {
        if ((int32_T)info_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&d_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &gb_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &cv3[0], 12, (int32_T)info_t);
        }
      }
      info = (int32_T)info_t;
    } else {
      for (int32_T i{0}; i < 3; i++) {
        V[3 * i] = Vt[i];
        V[3 * i + 1] = Vt[i + 3];
        V[3 * i + 2] = Vt[i + 6];
      }
    }
    if (info > 0) {
      emlrtErrorWithMessageIdR2018a(&st, &eb_emlrtRTEI,
                                    "Coder:MATLAB:svd_NoConvergence",
                                    "Coder:MATLAB:svd_NoConvergence", 0);
    }
  }
  return s_size;
}

int32_T c_svd(const emlrtStack &sp, const array<real32_T, 2U> &A,
              array<real32_T, 2U> &U, real32_T s_data[], real32_T V[16])
{
  array<real32_T, 2U> b_A;
  array<real32_T, 2U> c_A;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T s_size;
  real32_T Vt[16];
  real32_T superb_data[3];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (A.size(0) == 0) {
    st.site = &ro_emlrtRSI;
    U.set_size(&up_emlrtRTEI, &st, 0, 0);
    b_st.site = &so_emlrtRSI;
    s_size = 0;
    for (int32_T i{0}; i < 16; i++) {
      V[i] = iv[i];
    }
  } else {
    ptrdiff_t info_t;
    int32_T V_tmp;
    int32_T i;
    int32_T info;
    st.site = &gm_emlrtRSI;
    i = A.size(0);
    b_A.set_size(&pp_emlrtRTEI, &st, A.size(0), 4);
    info = A.size(0) << 2;
    for (V_tmp = 0; V_tmp < info; V_tmp++) {
      b_A[V_tmp] = A[V_tmp];
    }
    b_st.site = &st_emlrtRSI;
    c_A.set_size(&nr_emlrtRTEI, &b_st, A.size(0), 4);
    for (V_tmp = 0; V_tmp < info; V_tmp++) {
      c_A[V_tmp] = A[V_tmp];
    }
    U.set_size(&rp_emlrtRTEI, &b_st, A.size(0), A.size(0));
    s_size = muIntScalarMin_sint32(4, i);
    info_t = LAPACKE_sgesdd(102, 'A', (ptrdiff_t)A.size(0), (ptrdiff_t)4,
                            &(c_A.data())[0], (ptrdiff_t)A.size(0), &s_data[0],
                            &(U.data())[0], (ptrdiff_t)A.size(0), &Vt[0],
                            (ptrdiff_t)4);
    c_st.site = &jm_emlrtRSI;
    if ((int32_T)info_t < 0) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&c_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&c_st, &gb_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      14, &cv[0], 12, (int32_T)info_t);
      }
    }
    info = (int32_T)info_t;
    if ((int32_T)info_t > 0) {
      b_st.site = &hm_emlrtRSI;
      c_st.site = &km_emlrtRSI;
      U.set_size(&tp_emlrtRTEI, &c_st, A.size(0), A.size(0));
      info_t = LAPACKE_sgesvd(102, 'A', 'A', (ptrdiff_t)A.size(0), (ptrdiff_t)4,
                              &(b_A.data())[0], (ptrdiff_t)A.size(0),
                              &s_data[0], &(U.data())[0], (ptrdiff_t)A.size(0),
                              &Vt[0], (ptrdiff_t)4, &superb_data[0]);
      for (i = 0; i < 4; i++) {
        V_tmp = i << 2;
        V[V_tmp] = Vt[i];
        V[V_tmp + 1] = Vt[i + 4];
        V[V_tmp + 2] = Vt[i + 8];
        V[V_tmp + 3] = Vt[i + 12];
      }
      d_st.site = &lm_emlrtRSI;
      if ((int32_T)info_t < 0) {
        if ((int32_T)info_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&d_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &gb_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &cv1[0], 12, (int32_T)info_t);
        }
      }
      info = (int32_T)info_t;
    } else {
      for (i = 0; i < 4; i++) {
        V_tmp = i << 2;
        V[V_tmp] = Vt[i];
        V[V_tmp + 1] = Vt[i + 4];
        V[V_tmp + 2] = Vt[i + 8];
        V[V_tmp + 3] = Vt[i + 12];
      }
    }
    if (info > 0) {
      emlrtErrorWithMessageIdR2018a(&st, &eb_emlrtRTEI,
                                    "Coder:MATLAB:svd_NoConvergence",
                                    "Coder:MATLAB:svd_NoConvergence", 0);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return s_size;
}

} // namespace internal
} // namespace coder

// End of code generation (svd1.cpp)
