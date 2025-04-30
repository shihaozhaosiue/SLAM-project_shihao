//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// xzsvdc.cpp
//
// Code generation for function 'xzsvdc'
//

// Include files
#include "xzsvdc.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "xaxpy.h"
#include "xdotc.h"
#include "xnrm2.h"
#include "xrot.h"
#include "xscal.h"
#include "xswap.h"
#include "xzlangeM.h"
#include "xzlascl.h"
#include "blas.h"
#include "mwmathutil.h"
#include <cstring>
#include <emmintrin.h>
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo jg_emlrtRSI{
    21,                   // lineNo
    "scaleVectorByRecip", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\scaleVectorByRecip.m" // pathName
};

static emlrtRSInfo mm_emlrtRSI{
    452,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo nm_emlrtRSI{
    431,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo om_emlrtRSI{
    418,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo pm_emlrtRSI{
    415,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo qm_emlrtRSI{
    404,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo rm_emlrtRSI{
    377,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo sm_emlrtRSI{
    375,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo tm_emlrtRSI{
    358,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo um_emlrtRSI{
    138,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo vm_emlrtRSI{
    101,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo mp_emlrtRSI{
    144,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo np_emlrtRSI{
    118,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo op_emlrtRSI{
    106,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo fs_emlrtRSI{
    275,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo gs_emlrtRSI{
    264,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo hs_emlrtRSI{
    239,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo is_emlrtRSI{
    218,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRSInfo js_emlrtRSI{
    208,      // lineNo
    "xzsvdc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pathName
};

static emlrtRTEInfo kb_emlrtRTEI{
    293,      // lineNo
    13,       // colNo
    "xzsvdc", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
namespace reflapack {
void b_xzsvdc(const emlrtStack &sp, real_T A[16], real_T S[4])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T e[4];
  real_T work[4];
  real_T anrm;
  real_T b;
  real_T b_r;
  real_T cscale;
  real_T nrm;
  real_T scale;
  real_T sm;
  real_T sn;
  real_T snorm;
  real_T sqds;
  int32_T ii;
  int32_T iter;
  int32_T m;
  int32_T qp1;
  int32_T qq;
  int32_T qs;
  int32_T vectorUB;
  boolean_T doscale;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  S[0] = 0.0;
  e[0] = 0.0;
  work[0] = 0.0;
  S[1] = 0.0;
  e[1] = 0.0;
  work[1] = 0.0;
  S[2] = 0.0;
  e[2] = 0.0;
  work[2] = 0.0;
  S[3] = 0.0;
  e[3] = 0.0;
  work[3] = 0.0;
  doscale = false;
  anrm = c_xzlangeM(A);
  cscale = anrm;
  if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
    doscale = true;
    cscale = 6.7178761075670888E-139;
    f_xzlascl(anrm, cscale, A);
  } else if (anrm > 1.4885657073574029E+138) {
    doscale = true;
    cscale = 1.4885657073574029E+138;
    f_xzlascl(anrm, cscale, A);
  }
  for (int32_T q{0}; q < 3; q++) {
    __m128d c_r;
    boolean_T apply_transform;
    qp1 = q + 2;
    m = q + (q << 2);
    qq = m + 1;
    apply_transform = false;
    st.site = &vm_emlrtRSI;
    nrm = blas::d_xnrm2(st, 4 - q, A, m + 1);
    if (nrm > 0.0) {
      apply_transform = true;
      if (A[m] < 0.0) {
        sqds = -nrm;
      } else {
        sqds = nrm;
      }
      S[q] = sqds;
      st.site = &op_emlrtRSI;
      if (muDoubleScalarAbs(sqds) >= 1.0020841800044864E-292) {
        b_st.site = &jg_emlrtRSI;
        blas::d_xscal(b_st, 4 - q, 1.0 / sqds, A, m + 1);
      } else {
        qs = (m - q) + 4;
        iter = ((((qs - m) / 2) << 1) + m) + 1;
        vectorUB = iter - 2;
        for (int32_T k{qq}; k <= vectorUB; k += 2) {
          c_r = _mm_loadu_pd(&A[k - 1]);
          _mm_storeu_pd(&A[k - 1], _mm_div_pd(c_r, _mm_set1_pd(S[q])));
        }
        for (int32_T k{iter}; k <= qs; k++) {
          A[k - 1] /= S[q];
        }
      }
      A[m]++;
      S[q] = -S[q];
    } else {
      S[q] = 0.0;
    }
    for (qs = qp1; qs < 5; qs++) {
      qq = q + ((qs - 1) << 2);
      if (apply_transform) {
        st.site = &np_emlrtRSI;
        nrm = blas::e_xdotc(st, 4 - q, A, m + 1, A, qq + 1);
        nrm = -(nrm / A[m]);
        blas::e_xaxpy(4 - q, nrm, m + 1, A, qq + 1);
      }
      e[qs - 1] = A[qq];
    }
    if (q + 1 <= 2) {
      st.site = &um_emlrtRSI;
      nrm = blas::e_xnrm2(st, 3 - q, e, q + 2);
      if (nrm == 0.0) {
        e[q] = 0.0;
      } else {
        if (e[q + 1] < 0.0) {
          e[q] = -nrm;
        } else {
          e[q] = nrm;
        }
        st.site = &mp_emlrtRSI;
        sm = e[q];
        if (muDoubleScalarAbs(e[q]) >= 1.0020841800044864E-292) {
          b_st.site = &jg_emlrtRSI;
          blas::e_xscal(b_st, 3 - q, 1.0 / e[q], e, q + 2);
        } else {
          iter = ((((3 - q) / 2) << 1) + q) + 2;
          vectorUB = iter - 2;
          for (int32_T k{qp1}; k <= vectorUB; k += 2) {
            c_r = _mm_loadu_pd(&e[k - 1]);
            _mm_storeu_pd(&e[k - 1], _mm_div_pd(c_r, _mm_set1_pd(sm)));
          }
          for (int32_T k{iter}; k < 5; k++) {
            e[k - 1] /= sm;
          }
        }
        e[q + 1]++;
        e[q] = -e[q];
        for (ii = qp1; ii < 5; ii++) {
          work[ii - 1] = 0.0;
        }
        for (qs = qp1; qs < 5; qs++) {
          blas::c_xaxpy(3 - q, e[qs - 1], A, (q + ((qs - 1) << 2)) + 2, work,
                        q + 2);
        }
        for (qs = qp1; qs < 5; qs++) {
          blas::d_xaxpy(3 - q, -e[qs - 1] / e[q + 1], work, q + 2, A,
                        (q + ((qs - 1) << 2)) + 2);
        }
      }
    }
  }
  m = 2;
  S[3] = A[15];
  e[2] = A[14];
  e[3] = 0.0;
  iter = 0;
  sqds = S[0];
  if (S[0] != 0.0) {
    nrm = muDoubleScalarAbs(S[0]);
    b_r = S[0] / nrm;
    sqds = nrm;
    S[0] = nrm;
    e[0] /= b_r;
  }
  if (e[0] != 0.0) {
    nrm = muDoubleScalarAbs(e[0]);
    b_r = nrm / e[0];
    e[0] = nrm;
    S[1] *= b_r;
  }
  snorm = muDoubleScalarMax(muDoubleScalarAbs(sqds), e[0]);
  sqds = S[1];
  if (S[1] != 0.0) {
    nrm = muDoubleScalarAbs(S[1]);
    b_r = S[1] / nrm;
    sqds = nrm;
    S[1] = nrm;
    e[1] /= b_r;
  }
  if (e[1] != 0.0) {
    nrm = muDoubleScalarAbs(e[1]);
    b_r = nrm / e[1];
    e[1] = nrm;
    S[2] *= b_r;
  }
  snorm = muDoubleScalarMax(snorm,
                            muDoubleScalarMax(muDoubleScalarAbs(sqds), e[1]));
  sqds = S[2];
  if (S[2] != 0.0) {
    nrm = muDoubleScalarAbs(S[2]);
    b_r = S[2] / nrm;
    sqds = nrm;
    S[2] = nrm;
    e[2] = A[14] / b_r;
  }
  if (e[2] != 0.0) {
    nrm = muDoubleScalarAbs(e[2]);
    b_r = nrm / e[2];
    e[2] = nrm;
    S[3] = A[15] * b_r;
  }
  snorm = muDoubleScalarMax(snorm,
                            muDoubleScalarMax(muDoubleScalarAbs(sqds), e[2]));
  sqds = S[3];
  if (S[3] != 0.0) {
    nrm = muDoubleScalarAbs(S[3]);
    sqds = nrm;
    S[3] = nrm;
  }
  snorm =
      muDoubleScalarMax(snorm, muDoubleScalarMax(muDoubleScalarAbs(sqds), 0.0));
  exitg1 = false;
  while ((!exitg1) && (m + 2 > 0)) {
    if (iter >= 75) {
      emlrtErrorWithMessageIdR2018a(&sp, &kb_emlrtRTEI,
                                    "Coder:MATLAB:svd_NoConvergence",
                                    "Coder:MATLAB:svd_NoConvergence", 0);
    } else {
      boolean_T exitg2;
      vectorUB = m + 1;
      ii = m + 1;
      exitg2 = false;
      while (!(exitg2 || (ii == 0))) {
        nrm = muDoubleScalarAbs(e[ii - 1]);
        if ((nrm <= 2.2204460492503131E-16 * (muDoubleScalarAbs(S[ii - 1]) +
                                              muDoubleScalarAbs(S[ii]))) ||
            (nrm <= 1.0020841800044864E-292) ||
            ((iter > 20) && (nrm <= 2.2204460492503131E-16 * snorm))) {
          e[ii - 1] = 0.0;
          exitg2 = true;
        } else {
          ii--;
        }
      }
      if (ii == m + 1) {
        qq = 4;
      } else {
        qs = m + 2;
        qq = m + 2;
        exitg2 = false;
        while ((!exitg2) && (qq >= ii)) {
          qs = qq;
          if (qq == ii) {
            exitg2 = true;
          } else {
            nrm = 0.0;
            if (qq < m + 2) {
              nrm = muDoubleScalarAbs(e[qq - 1]);
            }
            if (qq > ii + 1) {
              nrm += muDoubleScalarAbs(e[qq - 2]);
            }
            b_r = muDoubleScalarAbs(S[qq - 1]);
            if ((b_r <= 2.2204460492503131E-16 * nrm) ||
                (b_r <= 1.0020841800044864E-292)) {
              S[qq - 1] = 0.0;
              exitg2 = true;
            } else {
              qq--;
            }
          }
        }
        if (qs == ii) {
          qq = 3;
        } else if (qs == m + 2) {
          qq = 1;
        } else {
          qq = 2;
          ii = qs;
        }
      }
      switch (qq) {
      case 1:
        b_r = e[m];
        e[m] = 0.0;
        for (int32_T k{vectorUB}; k >= ii + 1; k--) {
          st.site = &tm_emlrtRSI;
          scale = 0.0;
          sn = 0.0;
          drotg(&S[k - 1], &b_r, &scale, &sn);
          if (k > ii + 1) {
            nrm = e[k - 2];
            b_r = -sn * nrm;
            e[k - 2] = nrm * scale;
          }
        }
        break;
      case 2:
        b_r = e[ii - 1];
        e[ii - 1] = 0.0;
        st.site = &sm_emlrtRSI;
        for (int32_T k{ii + 1}; k <= m + 2; k++) {
          st.site = &rm_emlrtRSI;
          scale = 0.0;
          sn = 0.0;
          drotg(&S[k - 1], &b_r, &scale, &sn);
          nrm = e[k - 1];
          b_r = -sn * nrm;
          e[k - 1] = nrm * scale;
        }
        break;
      case 3:
        nrm = S[m + 1];
        scale = muDoubleScalarMax(
            muDoubleScalarMax(
                muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarAbs(nrm),
                                                    muDoubleScalarAbs(S[m])),
                                  muDoubleScalarAbs(e[m])),
                muDoubleScalarAbs(S[ii])),
            muDoubleScalarAbs(e[ii]));
        sm = nrm / scale;
        nrm = S[m] / scale;
        b_r = e[m] / scale;
        sqds = S[ii] / scale;
        b = ((nrm + sm) * (nrm - sm) + b_r * b_r) / 2.0;
        nrm = sm * b_r;
        nrm *= nrm;
        if ((b != 0.0) || (nrm != 0.0)) {
          b_r = b * b + nrm;
          st.site = &qm_emlrtRSI;
          if (b_r < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          b_r = muDoubleScalarSqrt(b_r);
          if (b < 0.0) {
            b_r = -b_r;
          }
          b_r = nrm / (b + b_r);
        } else {
          b_r = 0.0;
        }
        b_r += (sqds + sm) * (sqds - sm);
        nrm = sqds * (e[ii] / scale);
        st.site = &pm_emlrtRSI;
        for (int32_T k{ii + 1}; k <= vectorUB; k++) {
          st.site = &om_emlrtRSI;
          scale = 0.0;
          sn = 0.0;
          drotg(&b_r, &nrm, &scale, &sn);
          if (k > ii + 1) {
            e[k - 2] = b_r;
          }
          nrm = e[k - 1];
          b_r = S[k - 1];
          sm = scale * b_r + sn * nrm;
          e[k - 1] = scale * nrm - sn * b_r;
          sqds = S[k];
          b = sn * sqds;
          sqds *= scale;
          st.site = &nm_emlrtRSI;
          scale = 0.0;
          sn = 0.0;
          drotg(&sm, &b, &scale, &sn);
          S[k - 1] = sm;
          nrm = e[k - 1];
          b_r = scale * nrm + sn * sqds;
          sqds = -sn * nrm + scale * sqds;
          S[k] = sqds;
          nrm = sn * e[k];
          e[k] *= scale;
        }
        e[m] = b_r;
        iter++;
        break;
      default:
        if (S[ii] < 0.0) {
          S[ii] = -S[ii];
        }
        qp1 = ii + 1;
        while ((ii + 1 < 4) && (S[ii] < S[qp1])) {
          nrm = S[ii];
          S[ii] = S[qp1];
          S[qp1] = nrm;
          ii = qp1;
          qp1++;
        }
        iter = 0;
        m--;
        break;
      }
    }
  }
  if (doscale) {
    c_xzlascl(cscale, anrm, S);
  }
}

void b_xzsvdc(const emlrtStack &sp, real_T A[9], real_T U[9], real_T S[3],
              real_T V[9])
{
  __m128d b_r;
  emlrtStack b_st;
  emlrtStack st;
  real_T e[3];
  real_T work[3];
  real_T anrm;
  real_T b;
  real_T cscale;
  real_T f;
  real_T nrm;
  real_T rt;
  real_T scale;
  real_T snorm;
  real_T sqds;
  int32_T i;
  int32_T ii;
  int32_T iter;
  int32_T m;
  int32_T qjj;
  int32_T qp1;
  int32_T qq;
  int32_T qs;
  boolean_T doscale;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  S[0] = 0.0;
  e[0] = 0.0;
  work[0] = 0.0;
  S[1] = 0.0;
  e[1] = 0.0;
  work[1] = 0.0;
  S[2] = 0.0;
  e[2] = 0.0;
  work[2] = 0.0;
  std::memset(&U[0], 0, 9U * sizeof(real_T));
  std::memset(&V[0], 0, 9U * sizeof(real_T));
  doscale = false;
  anrm = b_xzlangeM(A);
  cscale = anrm;
  if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
    doscale = true;
    cscale = 6.7178761075670888E-139;
    e_xzlascl(anrm, cscale, A);
  } else if (anrm > 1.4885657073574029E+138) {
    doscale = true;
    cscale = 1.4885657073574029E+138;
    e_xzlascl(anrm, cscale, A);
  }
  for (int32_T q{0}; q < 2; q++) {
    boolean_T apply_transform;
    qp1 = q + 2;
    qs = q + 3 * q;
    qq = qs + 1;
    apply_transform = false;
    st.site = &vm_emlrtRSI;
    nrm = blas::c_xnrm2(st, 3 - q, A, qs + 1);
    if (nrm > 0.0) {
      apply_transform = true;
      if (A[qs] < 0.0) {
        rt = -nrm;
      } else {
        rt = nrm;
      }
      S[q] = rt;
      st.site = &op_emlrtRSI;
      if (muDoubleScalarAbs(rt) >= 1.0020841800044864E-292) {
        b_st.site = &jg_emlrtRSI;
        blas::c_xscal(b_st, 3 - q, 1.0 / rt, A, qs + 1);
      } else {
        i = (qs - q) + 3;
        iter = ((((i - qs) / 2) << 1) + qs) + 1;
        qjj = iter - 2;
        for (int32_T k{qq}; k <= qjj; k += 2) {
          b_r = _mm_loadu_pd(&A[k - 1]);
          _mm_storeu_pd(&A[k - 1], _mm_div_pd(b_r, _mm_set1_pd(S[q])));
        }
        for (int32_T k{iter}; k <= i; k++) {
          A[k - 1] /= S[q];
        }
      }
      A[qs]++;
      S[q] = -S[q];
    } else {
      S[q] = 0.0;
    }
    for (iter = qp1; iter < 4; iter++) {
      qjj = q + 3 * (iter - 1);
      if (apply_transform) {
        st.site = &np_emlrtRSI;
        nrm = blas::d_xdotc(st, 3 - q, A, qs + 1, A, qjj + 1);
        nrm = -(nrm / A[qs]);
        blas::d_xaxpy(3 - q, nrm, qs + 1, A, qjj + 1);
      }
      e[iter - 1] = A[qjj];
    }
    for (ii = q + 1; ii < 4; ii++) {
      qjj = (ii + 3 * q) - 1;
      U[qjj] = A[qjj];
    }
    if (q + 1 <= 1) {
      st.site = &um_emlrtRSI;
      nrm = blas::xnrm2(e);
      if (nrm == 0.0) {
        e[0] = 0.0;
      } else {
        if (e[1] < 0.0) {
          e[0] = -nrm;
        } else {
          e[0] = nrm;
        }
        st.site = &mp_emlrtRSI;
        f = e[0];
        if (muDoubleScalarAbs(e[0]) >= 1.0020841800044864E-292) {
          blas::xscal(1.0 / e[0], e);
        } else {
          iter = ((((2 - q) / 2) << 1) + q) + 2;
          qjj = iter - 2;
          for (int32_T k{qp1}; k <= qjj; k += 2) {
            b_r = _mm_loadu_pd(&e[k - 1]);
            _mm_storeu_pd(&e[k - 1], _mm_div_pd(b_r, _mm_set1_pd(f)));
          }
          for (int32_T k{iter}; k < 4; k++) {
            e[k - 1] /= f;
          }
        }
        e[1]++;
        e[0] = -e[0];
        for (ii = qp1; ii < 4; ii++) {
          work[ii - 1] = 0.0;
        }
        for (iter = qp1; iter < 4; iter++) {
          blas::xaxpy(e[iter - 1], A, 3 * (iter - 1) + 2, work);
        }
        for (iter = qp1; iter < 4; iter++) {
          blas::xaxpy(-e[iter - 1] / e[1], work, A, 3 * (iter - 1) + 2);
        }
      }
      for (ii = qp1; ii < 4; ii++) {
        V[ii - 1] = e[ii - 1];
      }
    }
  }
  m = 1;
  S[2] = A[8];
  e[1] = A[7];
  e[2] = 0.0;
  U[6] = 0.0;
  U[7] = 0.0;
  U[8] = 1.0;
  for (int32_T q{1}; q >= 0; q--) {
    qp1 = q + 2;
    qq = q + 3 * q;
    if (S[q] != 0.0) {
      for (iter = qp1; iter < 4; iter++) {
        qjj = (q + 3 * (iter - 1)) + 1;
        st.site = &js_emlrtRSI;
        nrm = blas::d_xdotc(st, 3 - q, U, qq + 1, U, qjj);
        nrm = -(nrm / U[qq]);
        blas::d_xaxpy(3 - q, nrm, qq + 1, U, qjj);
      }
      iter = q + 3;
      qjj = q + 1;
      for (ii = q + 1; ii <= qjj; ii += 2) {
        i = (ii + 3 * q) - 1;
        b_r = _mm_loadu_pd(&U[i]);
        _mm_storeu_pd(&U[i], _mm_mul_pd(b_r, _mm_set1_pd(-1.0)));
      }
      for (ii = iter; ii < 4; ii++) {
        qjj = 3 * q + 2;
        U[qjj] = -U[qjj];
      }
      U[qq]++;
      st.site = &is_emlrtRSI;
      if (q - 1 >= 0) {
        U[3 * q] = 0.0;
      }
    } else {
      U[3 * q] = 0.0;
      U[3 * q + 1] = 0.0;
      U[3 * q + 2] = 0.0;
      U[qq] = 1.0;
    }
  }
  for (int32_T q{2}; q >= 0; q--) {
    if ((q + 1 <= 1) && (e[0] != 0.0)) {
      st.site = &hs_emlrtRSI;
      nrm = blas::d_xdotc(st, 2, V, 2, V, 5);
      nrm = -(nrm / V[1]);
      blas::d_xaxpy(2, nrm, 2, V, 5);
      st.site = &hs_emlrtRSI;
      nrm = blas::d_xdotc(st, 2, V, 2, V, 8);
      nrm = -(nrm / V[1]);
      blas::d_xaxpy(2, nrm, 2, V, 8);
    }
    V[3 * q] = 0.0;
    V[3 * q + 1] = 0.0;
    V[3 * q + 2] = 0.0;
    V[q + 3 * q] = 1.0;
  }
  if (S[0] != 0.0) {
    rt = muDoubleScalarAbs(S[0]);
    nrm = S[0] / rt;
    S[0] = rt;
    e[0] /= nrm;
    st.site = &gs_emlrtRSI;
    blas::c_xscal(st, nrm, U, 1);
  }
  if (e[0] != 0.0) {
    rt = muDoubleScalarAbs(e[0]);
    nrm = rt / e[0];
    e[0] = rt;
    S[1] *= nrm;
    st.site = &fs_emlrtRSI;
    blas::c_xscal(st, nrm, V, 4);
  }
  if (S[1] != 0.0) {
    rt = muDoubleScalarAbs(S[1]);
    nrm = S[1] / rt;
    S[1] = rt;
    e[1] = A[7] / nrm;
    st.site = &gs_emlrtRSI;
    blas::c_xscal(st, nrm, U, 4);
  }
  if (e[1] != 0.0) {
    rt = muDoubleScalarAbs(e[1]);
    nrm = rt / e[1];
    e[1] = rt;
    S[2] = A[8] * nrm;
    st.site = &fs_emlrtRSI;
    blas::c_xscal(st, nrm, V, 7);
  }
  if (S[2] != 0.0) {
    rt = muDoubleScalarAbs(S[2]);
    nrm = S[2] / rt;
    S[2] = rt;
    st.site = &gs_emlrtRSI;
    blas::c_xscal(st, nrm, U, 7);
  }
  iter = 0;
  snorm = muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarMax(S[0], e[0]),
                                              muDoubleScalarMax(S[1], e[1])),
                            muDoubleScalarMax(S[2], 0.0));
  exitg1 = false;
  while ((!exitg1) && (m + 2 > 0)) {
    if (iter >= 75) {
      emlrtErrorWithMessageIdR2018a(&sp, &kb_emlrtRTEI,
                                    "Coder:MATLAB:svd_NoConvergence",
                                    "Coder:MATLAB:svd_NoConvergence", 0);
    } else {
      boolean_T exitg2;
      qq = m + 1;
      ii = m + 1;
      exitg2 = false;
      while (!(exitg2 || (ii == 0))) {
        nrm = muDoubleScalarAbs(e[ii - 1]);
        if ((nrm <= 2.2204460492503131E-16 * (muDoubleScalarAbs(S[ii - 1]) +
                                              muDoubleScalarAbs(S[ii]))) ||
            (nrm <= 1.0020841800044864E-292) ||
            ((iter > 20) && (nrm <= 2.2204460492503131E-16 * snorm))) {
          e[ii - 1] = 0.0;
          exitg2 = true;
        } else {
          ii--;
        }
      }
      if (ii == m + 1) {
        qjj = 4;
      } else {
        qs = m + 2;
        qjj = m + 2;
        exitg2 = false;
        while ((!exitg2) && (qjj >= ii)) {
          qs = qjj;
          if (qjj == ii) {
            exitg2 = true;
          } else {
            nrm = 0.0;
            if (qjj < m + 2) {
              nrm = muDoubleScalarAbs(e[qjj - 1]);
            }
            if (qjj > ii + 1) {
              nrm += muDoubleScalarAbs(e[qjj - 2]);
            }
            rt = muDoubleScalarAbs(S[qjj - 1]);
            if ((rt <= 2.2204460492503131E-16 * nrm) ||
                (rt <= 1.0020841800044864E-292)) {
              S[qjj - 1] = 0.0;
              exitg2 = true;
            } else {
              qjj--;
            }
          }
        }
        if (qs == ii) {
          qjj = 3;
        } else if (qs == m + 2) {
          qjj = 1;
        } else {
          qjj = 2;
          ii = qs;
        }
      }
      switch (qjj) {
      case 1:
        f = e[m];
        e[m] = 0.0;
        for (int32_T k{qq}; k >= ii + 1; k--) {
          st.site = &tm_emlrtRSI;
          sqds = 0.0;
          scale = 0.0;
          drotg(&S[k - 1], &f, &sqds, &scale);
          if (k > ii + 1) {
            f = -scale * e[0];
            e[0] *= sqds;
          }
          blas::c_xrot(V, 3 * (k - 1) + 1, 3 * (m + 1) + 1, sqds, scale);
        }
        break;
      case 2:
        f = e[ii - 1];
        e[ii - 1] = 0.0;
        st.site = &sm_emlrtRSI;
        for (int32_T k{ii + 1}; k <= m + 2; k++) {
          st.site = &rm_emlrtRSI;
          sqds = 0.0;
          scale = 0.0;
          drotg(&S[k - 1], &f, &sqds, &scale);
          nrm = e[k - 1];
          f = -scale * nrm;
          e[k - 1] = nrm * sqds;
          blas::c_xrot(U, 3 * (k - 1) + 1, 3 * (ii - 1) + 1, sqds, scale);
        }
        break;
      case 3:
        nrm = S[m + 1];
        scale = muDoubleScalarMax(
            muDoubleScalarMax(
                muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarAbs(nrm),
                                                    muDoubleScalarAbs(S[m])),
                                  muDoubleScalarAbs(e[m])),
                muDoubleScalarAbs(S[ii])),
            muDoubleScalarAbs(e[ii]));
        f = nrm / scale;
        nrm = S[m] / scale;
        rt = e[m] / scale;
        sqds = S[ii] / scale;
        b = ((nrm + f) * (nrm - f) + rt * rt) / 2.0;
        nrm = f * rt;
        nrm *= nrm;
        if ((b != 0.0) || (nrm != 0.0)) {
          rt = b * b + nrm;
          st.site = &qm_emlrtRSI;
          if (rt < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          rt = muDoubleScalarSqrt(rt);
          if (b < 0.0) {
            rt = -rt;
          }
          rt = nrm / (b + rt);
        } else {
          rt = 0.0;
        }
        f = (sqds + f) * (sqds - f) + rt;
        nrm = sqds * (e[ii] / scale);
        st.site = &pm_emlrtRSI;
        for (int32_T k{ii + 1}; k <= qq; k++) {
          st.site = &om_emlrtRSI;
          sqds = 0.0;
          scale = 0.0;
          drotg(&f, &nrm, &sqds, &scale);
          if (k > ii + 1) {
            e[0] = f;
          }
          nrm = e[k - 1];
          rt = S[k - 1];
          f = sqds * rt + scale * nrm;
          e[k - 1] = sqds * nrm - scale * rt;
          rt = S[k];
          b = scale * rt;
          rt *= sqds;
          i = 3 * (k - 1) + 1;
          qjj = 3 * k + 1;
          blas::c_xrot(V, i, qjj, sqds, scale);
          st.site = &nm_emlrtRSI;
          sqds = 0.0;
          scale = 0.0;
          drotg(&f, &b, &sqds, &scale);
          S[k - 1] = f;
          nrm = e[k - 1];
          f = sqds * nrm + scale * rt;
          rt = -scale * nrm + sqds * rt;
          S[k] = rt;
          nrm = scale * e[k];
          e[k] *= sqds;
          blas::c_xrot(U, i, qjj, sqds, scale);
        }
        e[m] = f;
        iter++;
        break;
      default:
        if (S[ii] < 0.0) {
          S[ii] = -S[ii];
          st.site = &mm_emlrtRSI;
          blas::b_xscal(st, V, 3 * ii + 1);
        }
        qp1 = ii + 1;
        while ((ii + 1 < 3) && (S[ii] < S[qp1])) {
          rt = S[ii];
          S[ii] = S[qp1];
          S[qp1] = rt;
          i = 3 * ii + 1;
          qjj = 3 * (ii + 1) + 1;
          blas::c_xswap(V, i, qjj);
          blas::c_xswap(U, i, qjj);
          ii = qp1;
          qp1++;
        }
        iter = 0;
        m--;
        break;
      }
    }
  }
  if (doscale) {
    b_xzlascl(cscale, anrm, S);
  }
}

void b_xzsvdc(const emlrtStack &sp, real32_T A[16], real32_T S[4])
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T ii;
  int32_T iter;
  int32_T m;
  int32_T qq;
  int32_T qs;
  int32_T vectorUB;
  real32_T e[4];
  real32_T work[4];
  real32_T anrm;
  real32_T b;
  real32_T cscale;
  real32_T nrm;
  real32_T rt;
  real32_T scale;
  real32_T sm;
  real32_T sn;
  real32_T snorm;
  real32_T sqds;
  boolean_T doscale;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  S[0] = 0.0F;
  e[0] = 0.0F;
  work[0] = 0.0F;
  S[1] = 0.0F;
  e[1] = 0.0F;
  work[1] = 0.0F;
  S[2] = 0.0F;
  e[2] = 0.0F;
  work[2] = 0.0F;
  S[3] = 0.0F;
  e[3] = 0.0F;
  work[3] = 0.0F;
  doscale = false;
  anrm = b_xzlangeM(A);
  cscale = anrm;
  if ((anrm > 0.0F) && (anrm < 9.09494702E-13F)) {
    doscale = true;
    cscale = 9.09494702E-13F;
    d_xzlascl(anrm, cscale, A);
  } else if (anrm > 1.09951163E+12F) {
    doscale = true;
    cscale = 1.09951163E+12F;
    d_xzlascl(anrm, cscale, A);
  }
  for (int32_T q{0}; q < 3; q++) {
    int32_T qp1_tmp;
    boolean_T apply_transform;
    qp1_tmp = q + 2;
    m = q + (q << 2);
    qq = m + 1;
    apply_transform = false;
    st.site = &vm_emlrtRSI;
    nrm = blas::b_xnrm2(st, 4 - q, A, m + 1);
    if (nrm > 0.0F) {
      apply_transform = true;
      if (A[m] < 0.0F) {
        sqds = -nrm;
      } else {
        sqds = nrm;
      }
      S[q] = sqds;
      st.site = &op_emlrtRSI;
      if (muSingleScalarAbs(sqds) >= 9.86076132E-32F) {
        b_st.site = &jg_emlrtRSI;
        blas::b_xscal(b_st, 4 - q, 1.0F / sqds, A, m + 1);
      } else {
        qs = (m - q) + 4;
        iter = ((((qs - m) / 4) << 2) + m) + 1;
        vectorUB = iter - 4;
        for (int32_T k{qq}; k <= vectorUB; k += 4) {
          __m128 b_r;
          b_r = _mm_loadu_ps(&A[k - 1]);
          _mm_storeu_ps(&A[k - 1], _mm_div_ps(b_r, _mm_set1_ps(S[q])));
        }
        for (int32_T k{iter}; k <= qs; k++) {
          A[k - 1] /= S[q];
        }
      }
      A[m]++;
      S[q] = -S[q];
    } else {
      S[q] = 0.0F;
    }
    for (qs = qp1_tmp; qs < 5; qs++) {
      qq = q + ((qs - 1) << 2);
      if (apply_transform) {
        st.site = &np_emlrtRSI;
        nrm = blas::b_xdotc(st, 4 - q, A, m + 1, A, qq + 1);
        blas::b_xaxpy(4 - q, -(nrm / A[m]), m + 1, A, qq + 1);
      }
      e[qs - 1] = A[qq];
    }
    if (q + 1 <= 2) {
      st.site = &um_emlrtRSI;
      nrm = blas::c_xnrm2(st, 3 - q, e, q + 2);
      if (nrm == 0.0F) {
        e[q] = 0.0F;
      } else {
        if (e[q + 1] < 0.0F) {
          e[q] = -nrm;
        } else {
          e[q] = nrm;
        }
        st.site = &mp_emlrtRSI;
        sm = e[q];
        if (muSingleScalarAbs(e[q]) >= 9.86076132E-32F) {
          b_st.site = &jg_emlrtRSI;
          blas::c_xscal(b_st, 3 - q, 1.0F / e[q], e, q + 2);
        } else {
          for (int32_T k{qp1_tmp}; k < 5; k++) {
            e[k - 1] /= sm;
          }
        }
        e[q + 1]++;
        e[q] = -e[q];
        for (ii = qp1_tmp; ii < 5; ii++) {
          work[ii - 1] = 0.0F;
        }
        for (qs = qp1_tmp; qs < 5; qs++) {
          blas::xaxpy(3 - q, e[qs - 1], A, (q + ((qs - 1) << 2)) + 2, work,
                      q + 2);
        }
        for (qs = qp1_tmp; qs < 5; qs++) {
          blas::b_xaxpy(3 - q, -e[qs - 1] / e[q + 1], work, q + 2, A,
                        (q + ((qs - 1) << 2)) + 2);
        }
      }
    }
  }
  m = 2;
  S[3] = A[15];
  e[2] = A[14];
  e[3] = 0.0F;
  iter = 0;
  sqds = S[0];
  if (S[0] != 0.0F) {
    rt = muSingleScalarAbs(S[0]);
    nrm = S[0] / rt;
    sqds = rt;
    S[0] = rt;
    e[0] /= nrm;
  }
  if (e[0] != 0.0F) {
    rt = muSingleScalarAbs(e[0]);
    nrm = e[0];
    e[0] = rt;
    S[1] *= rt / nrm;
  }
  snorm = muSingleScalarMax(muSingleScalarAbs(sqds), e[0]);
  sqds = S[1];
  if (S[1] != 0.0F) {
    rt = muSingleScalarAbs(S[1]);
    nrm = S[1] / rt;
    sqds = rt;
    S[1] = rt;
    e[1] /= nrm;
  }
  if (e[1] != 0.0F) {
    rt = muSingleScalarAbs(e[1]);
    nrm = e[1];
    e[1] = rt;
    S[2] *= rt / nrm;
  }
  snorm = muSingleScalarMax(snorm,
                            muSingleScalarMax(muSingleScalarAbs(sqds), e[1]));
  sqds = S[2];
  if (S[2] != 0.0F) {
    rt = muSingleScalarAbs(S[2]);
    nrm = S[2] / rt;
    sqds = rt;
    S[2] = rt;
    e[2] = A[14] / nrm;
  }
  if (e[2] != 0.0F) {
    rt = muSingleScalarAbs(e[2]);
    nrm = e[2];
    e[2] = rt;
    S[3] = A[15] * (rt / nrm);
  }
  snorm = muSingleScalarMax(snorm,
                            muSingleScalarMax(muSingleScalarAbs(sqds), e[2]));
  sqds = S[3];
  if (S[3] != 0.0F) {
    rt = muSingleScalarAbs(S[3]);
    sqds = rt;
    S[3] = rt;
  }
  snorm = muSingleScalarMax(snorm,
                            muSingleScalarMax(muSingleScalarAbs(sqds), 0.0F));
  exitg1 = false;
  while ((!exitg1) && (m + 2 > 0)) {
    if (iter >= 75) {
      emlrtErrorWithMessageIdR2018a(&sp, &kb_emlrtRTEI,
                                    "Coder:MATLAB:svd_NoConvergence",
                                    "Coder:MATLAB:svd_NoConvergence", 0);
    } else {
      boolean_T exitg2;
      vectorUB = m + 1;
      ii = m + 1;
      exitg2 = false;
      while (!(exitg2 || (ii == 0))) {
        nrm = muSingleScalarAbs(e[ii - 1]);
        if ((nrm <= 1.1920929E-7F * (muSingleScalarAbs(S[ii - 1]) +
                                     muSingleScalarAbs(S[ii]))) ||
            (nrm <= 9.86076132E-32F) ||
            ((iter > 20) && (nrm <= 1.1920929E-7F * snorm))) {
          e[ii - 1] = 0.0F;
          exitg2 = true;
        } else {
          ii--;
        }
      }
      if (ii == m + 1) {
        qq = 4;
      } else {
        qs = m + 2;
        qq = m + 2;
        exitg2 = false;
        while ((!exitg2) && (qq >= ii)) {
          qs = qq;
          if (qq == ii) {
            exitg2 = true;
          } else {
            nrm = 0.0F;
            if (qq < m + 2) {
              nrm = muSingleScalarAbs(e[qq - 1]);
            }
            if (qq > ii + 1) {
              nrm += muSingleScalarAbs(e[qq - 2]);
            }
            rt = muSingleScalarAbs(S[qq - 1]);
            if ((rt <= 1.1920929E-7F * nrm) || (rt <= 9.86076132E-32F)) {
              S[qq - 1] = 0.0F;
              exitg2 = true;
            } else {
              qq--;
            }
          }
        }
        if (qs == ii) {
          qq = 3;
        } else if (qs == m + 2) {
          qq = 1;
        } else {
          qq = 2;
          ii = qs;
        }
      }
      switch (qq) {
      case 1:
        rt = e[m];
        e[m] = 0.0F;
        for (int32_T k{vectorUB}; k >= ii + 1; k--) {
          st.site = &tm_emlrtRSI;
          scale = 0.0F;
          sn = 0.0F;
          srotg(&S[k - 1], &rt, &scale, &sn);
          if (k > ii + 1) {
            nrm = e[k - 2];
            rt = -sn * nrm;
            e[k - 2] = nrm * scale;
          }
        }
        break;
      case 2:
        rt = e[ii - 1];
        e[ii - 1] = 0.0F;
        st.site = &sm_emlrtRSI;
        for (int32_T k{ii + 1}; k <= m + 2; k++) {
          st.site = &rm_emlrtRSI;
          scale = 0.0F;
          sn = 0.0F;
          srotg(&S[k - 1], &rt, &scale, &sn);
          nrm = e[k - 1];
          rt = -sn * nrm;
          e[k - 1] = nrm * scale;
        }
        break;
      case 3:
        nrm = S[m + 1];
        scale = muSingleScalarMax(
            muSingleScalarMax(
                muSingleScalarMax(muSingleScalarMax(muSingleScalarAbs(nrm),
                                                    muSingleScalarAbs(S[m])),
                                  muSingleScalarAbs(e[m])),
                muSingleScalarAbs(S[ii])),
            muSingleScalarAbs(e[ii]));
        sm = nrm / scale;
        nrm = S[m] / scale;
        rt = e[m] / scale;
        sqds = S[ii] / scale;
        b = ((nrm + sm) * (nrm - sm) + rt * rt) / 2.0F;
        nrm = sm * rt;
        nrm *= nrm;
        if ((b != 0.0F) || (nrm != 0.0F)) {
          rt = b * b + nrm;
          st.site = &qm_emlrtRSI;
          if (rt < 0.0F) {
            emlrtErrorWithMessageIdR2018a(
                &st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          rt = muSingleScalarSqrt(rt);
          if (b < 0.0F) {
            rt = -rt;
          }
          rt = nrm / (b + rt);
        } else {
          rt = 0.0F;
        }
        rt += (sqds + sm) * (sqds - sm);
        nrm = sqds * (e[ii] / scale);
        st.site = &pm_emlrtRSI;
        for (int32_T k{ii + 1}; k <= vectorUB; k++) {
          st.site = &om_emlrtRSI;
          scale = 0.0F;
          sn = 0.0F;
          srotg(&rt, &nrm, &scale, &sn);
          if (k > ii + 1) {
            e[k - 2] = rt;
          }
          nrm = e[k - 1];
          rt = S[k - 1];
          sm = scale * rt + sn * nrm;
          e[k - 1] = scale * nrm - sn * rt;
          sqds = S[k];
          b = sn * sqds;
          sqds *= scale;
          st.site = &nm_emlrtRSI;
          scale = 0.0F;
          sn = 0.0F;
          srotg(&sm, &b, &scale, &sn);
          S[k - 1] = sm;
          nrm = e[k - 1];
          rt = scale * nrm + sn * sqds;
          sqds = -sn * nrm + scale * sqds;
          S[k] = sqds;
          nrm = sn * e[k];
          e[k] *= scale;
        }
        e[m] = rt;
        iter++;
        break;
      default:
        if (S[ii] < 0.0F) {
          S[ii] = -S[ii];
        }
        qq = ii + 1;
        while ((ii + 1 < 4) && (S[ii] < S[qq])) {
          rt = S[ii];
          S[ii] = S[qq];
          S[qq] = rt;
          ii = qq;
          qq++;
        }
        iter = 0;
        m--;
        break;
      }
    }
  }
  if (doscale) {
    b_xzlascl(cscale, anrm, S);
  }
}

void xzsvdc(const emlrtStack &sp, real_T A[45], real_T U[25], real_T S[5],
            real_T V[81])
{
  __m128d b_r;
  emlrtStack b_st;
  emlrtStack st;
  real_T e[9];
  real_T s[6];
  real_T work[5];
  real_T anrm;
  real_T b;
  real_T cscale;
  real_T nrm;
  real_T rt;
  real_T scale;
  real_T sm;
  real_T sn;
  real_T snorm;
  real_T sqds;
  int32_T i;
  int32_T ii;
  int32_T iter;
  int32_T m;
  int32_T qp1;
  int32_T qp1jj;
  int32_T qq;
  int32_T scalarLB;
  boolean_T doscale;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (i = 0; i < 6; i++) {
    s[i] = 0.0;
  }
  std::memset(&e[0], 0, 9U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    work[i] = 0.0;
  }
  std::memset(&U[0], 0, 25U * sizeof(real_T));
  std::memset(&V[0], 0, 81U * sizeof(real_T));
  doscale = false;
  anrm = xzlangeM(A);
  cscale = anrm;
  if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
    doscale = true;
    cscale = 6.7178761075670888E-139;
    d_xzlascl(anrm, cscale, A);
  } else if (anrm > 1.4885657073574029E+138) {
    doscale = true;
    cscale = 1.4885657073574029E+138;
    d_xzlascl(anrm, cscale, A);
  }
  for (int32_T q{0}; q < 5; q++) {
    boolean_T apply_transform;
    qp1 = q + 2;
    qp1jj = q + 5 * q;
    qq = qp1jj + 1;
    apply_transform = false;
    if (q + 1 <= 4) {
      st.site = &vm_emlrtRSI;
      nrm = blas::xnrm2(st, 5 - q, A, qp1jj + 1);
      if (nrm > 0.0) {
        apply_transform = true;
        if (A[qp1jj] < 0.0) {
          sqds = -nrm;
        } else {
          sqds = nrm;
        }
        s[q] = sqds;
        st.site = &op_emlrtRSI;
        if (muDoubleScalarAbs(sqds) >= 1.0020841800044864E-292) {
          b_st.site = &jg_emlrtRSI;
          blas::xscal(b_st, 5 - q, 1.0 / sqds, A, qp1jj + 1);
        } else {
          i = (qp1jj - q) + 5;
          scalarLB = ((((i - qp1jj) / 2) << 1) + qp1jj) + 1;
          iter = scalarLB - 2;
          for (int32_T k{qq}; k <= iter; k += 2) {
            b_r = _mm_loadu_pd(&A[k - 1]);
            _mm_storeu_pd(&A[k - 1], _mm_div_pd(b_r, _mm_set1_pd(s[q])));
          }
          for (int32_T k{scalarLB}; k <= i; k++) {
            A[k - 1] /= s[q];
          }
        }
        A[qp1jj]++;
        s[q] = -s[q];
      } else {
        s[q] = 0.0;
      }
    }
    for (iter = qp1; iter < 10; iter++) {
      i = q + 5 * (iter - 1);
      if (apply_transform) {
        st.site = &np_emlrtRSI;
        nrm = blas::xdotc(st, 5 - q, A, qp1jj + 1, A, i + 1);
        nrm = -(nrm / A[qp1jj]);
        blas::xaxpy(5 - q, nrm, qp1jj + 1, A, i + 1);
      }
      e[iter - 1] = A[i];
    }
    if (q + 1 <= 4) {
      for (ii = q + 1; ii < 6; ii++) {
        i = (ii + 5 * q) - 1;
        U[i] = A[i];
      }
    }
    st.site = &um_emlrtRSI;
    nrm = blas::b_xnrm2(st, 8 - q, e, q + 2);
    if (nrm == 0.0) {
      e[q] = 0.0;
    } else {
      if (e[q + 1] < 0.0) {
        e[q] = -nrm;
      } else {
        e[q] = nrm;
      }
      st.site = &mp_emlrtRSI;
      sm = e[q];
      if (muDoubleScalarAbs(e[q]) >= 1.0020841800044864E-292) {
        b_st.site = &jg_emlrtRSI;
        blas::b_xscal(b_st, 8 - q, 1.0 / e[q], e, q + 2);
      } else {
        scalarLB = ((((8 - q) / 2) << 1) + q) + 2;
        iter = scalarLB - 2;
        for (int32_T k{qp1}; k <= iter; k += 2) {
          b_r = _mm_loadu_pd(&e[k - 1]);
          _mm_storeu_pd(&e[k - 1], _mm_div_pd(b_r, _mm_set1_pd(sm)));
        }
        for (int32_T k{scalarLB}; k < 10; k++) {
          e[k - 1] /= sm;
        }
      }
      e[q + 1]++;
      e[q] = -e[q];
      if (q + 2 <= 5) {
        for (ii = qp1; ii < 6; ii++) {
          work[ii - 1] = 0.0;
        }
        for (iter = qp1; iter < 10; iter++) {
          blas::xaxpy(4 - q, e[iter - 1], A, (q + 5 * (iter - 1)) + 2, work,
                      q + 2);
        }
        for (iter = qp1; iter < 10; iter++) {
          blas::b_xaxpy(4 - q, -e[iter - 1] / e[q + 1], work, q + 2, A,
                        (q + 5 * (iter - 1)) + 2);
        }
      }
    }
    for (ii = qp1; ii < 10; ii++) {
      V[(ii + 9 * q) - 1] = e[ii - 1];
    }
  }
  m = 4;
  s[4] = A[24];
  s[5] = 0.0;
  e[5] = 0.0;
  for (ii = 0; ii < 5; ii++) {
    U[ii + 20] = 0.0;
  }
  U[24] = 1.0;
  for (int32_T q{3}; q >= 0; q--) {
    qp1 = q + 2;
    qq = q + 5 * q;
    if (s[q] != 0.0) {
      for (iter = qp1; iter < 6; iter++) {
        i = (q + 5 * (iter - 1)) + 1;
        st.site = &js_emlrtRSI;
        nrm = blas::b_xdotc(st, 5 - q, U, qq + 1, U, i);
        nrm = -(nrm / U[qq]);
        blas::b_xaxpy(5 - q, nrm, qq + 1, U, i);
      }
      scalarLB = ((((5 - q) / 2) << 1) + q) + 1;
      iter = scalarLB - 2;
      for (ii = q + 1; ii <= iter; ii += 2) {
        i = (ii + 5 * q) - 1;
        b_r = _mm_loadu_pd(&U[i]);
        _mm_storeu_pd(&U[i], _mm_mul_pd(b_r, _mm_set1_pd(-1.0)));
      }
      for (ii = scalarLB; ii < 6; ii++) {
        i = (ii + 5 * q) - 1;
        U[i] = -U[i];
      }
      U[qq]++;
      st.site = &is_emlrtRSI;
      for (ii = 0; ii < q; ii++) {
        U[ii + 5 * q] = 0.0;
      }
    } else {
      for (ii = 0; ii < 5; ii++) {
        U[ii + 5 * q] = 0.0;
      }
      U[qq] = 1.0;
    }
  }
  for (int32_T q{8}; q >= 0; q--) {
    if ((q + 1 <= 5) && (e[q] != 0.0)) {
      qp1 = q + 2;
      i = (q + 9 * q) + 2;
      for (iter = qp1; iter < 10; iter++) {
        qp1jj = (q + 9 * (iter - 1)) + 2;
        st.site = &hs_emlrtRSI;
        nrm = blas::c_xdotc(st, 8 - q, V, i, V, qp1jj);
        nrm = -(nrm / V[i - 1]);
        blas::c_xaxpy(8 - q, nrm, i, V, qp1jj);
      }
    }
    std::memset(&V[q * 9], 0, 9U * sizeof(real_T));
    V[q + 9 * q] = 1.0;
  }
  for (int32_T q{0}; q < 6; q++) {
    sqds = s[q];
    if (sqds != 0.0) {
      rt = muDoubleScalarAbs(sqds);
      nrm = sqds / rt;
      s[q] = rt;
      if (q + 1 < 6) {
        e[q] /= nrm;
      }
      if (q + 1 <= 5) {
        st.site = &gs_emlrtRSI;
        blas::xscal(st, nrm, U, 5 * q + 1);
      }
    }
    if (q + 1 < 6) {
      sqds = e[q];
      if (sqds != 0.0) {
        rt = muDoubleScalarAbs(sqds);
        nrm = rt / sqds;
        e[q] = rt;
        s[q + 1] *= nrm;
        st.site = &fs_emlrtRSI;
        blas::b_xscal(st, nrm, V, 9 * (q + 1) + 1);
      }
    }
  }
  iter = 0;
  snorm = 0.0;
  for (ii = 0; ii < 6; ii++) {
    snorm =
        muDoubleScalarMax(snorm, muDoubleScalarMax(muDoubleScalarAbs(s[ii]),
                                                   muDoubleScalarAbs(e[ii])));
  }
  exitg1 = false;
  while ((!exitg1) && (m + 2 > 0)) {
    if (iter >= 75) {
      emlrtErrorWithMessageIdR2018a(&sp, &kb_emlrtRTEI,
                                    "Coder:MATLAB:svd_NoConvergence",
                                    "Coder:MATLAB:svd_NoConvergence", 0);
    } else {
      boolean_T exitg2;
      scalarLB = m + 1;
      ii = m + 1;
      exitg2 = false;
      while (!(exitg2 || (ii == 0))) {
        nrm = muDoubleScalarAbs(e[ii - 1]);
        if ((nrm <= 2.2204460492503131E-16 * (muDoubleScalarAbs(s[ii - 1]) +
                                              muDoubleScalarAbs(s[ii]))) ||
            (nrm <= 1.0020841800044864E-292) ||
            ((iter > 20) && (nrm <= 2.2204460492503131E-16 * snorm))) {
          e[ii - 1] = 0.0;
          exitg2 = true;
        } else {
          ii--;
        }
      }
      if (ii == m + 1) {
        i = 4;
      } else {
        qp1jj = m + 2;
        i = m + 2;
        exitg2 = false;
        while ((!exitg2) && (i >= ii)) {
          qp1jj = i;
          if (i == ii) {
            exitg2 = true;
          } else {
            nrm = 0.0;
            if (i < m + 2) {
              nrm = muDoubleScalarAbs(e[i - 1]);
            }
            if (i > ii + 1) {
              nrm += muDoubleScalarAbs(e[i - 2]);
            }
            rt = muDoubleScalarAbs(s[i - 1]);
            if ((rt <= 2.2204460492503131E-16 * nrm) ||
                (rt <= 1.0020841800044864E-292)) {
              s[i - 1] = 0.0;
              exitg2 = true;
            } else {
              i--;
            }
          }
        }
        if (qp1jj == ii) {
          i = 3;
        } else if (qp1jj == m + 2) {
          i = 1;
        } else {
          i = 2;
          ii = qp1jj;
        }
      }
      switch (i) {
      case 1:
        rt = e[m];
        e[m] = 0.0;
        for (int32_T k{scalarLB}; k >= ii + 1; k--) {
          st.site = &tm_emlrtRSI;
          scale = 0.0;
          sn = 0.0;
          drotg(&s[k - 1], &rt, &scale, &sn);
          if (k > ii + 1) {
            nrm = e[k - 2];
            rt = -sn * nrm;
            e[k - 2] = nrm * scale;
          }
          blas::xrot(V, 9 * (k - 1) + 1, 9 * (m + 1) + 1, scale, sn);
        }
        break;
      case 2:
        rt = e[ii - 1];
        e[ii - 1] = 0.0;
        st.site = &sm_emlrtRSI;
        for (int32_T k{ii + 1}; k <= m + 2; k++) {
          st.site = &rm_emlrtRSI;
          scale = 0.0;
          sn = 0.0;
          drotg(&s[k - 1], &rt, &scale, &sn);
          nrm = e[k - 1];
          rt = -sn * nrm;
          e[k - 1] = nrm * scale;
          blas::b_xrot(U, 5 * (k - 1) + 1, 5 * (ii - 1) + 1, scale, sn);
        }
        break;
      case 3:
        nrm = s[m + 1];
        scale = muDoubleScalarMax(
            muDoubleScalarMax(
                muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarAbs(nrm),
                                                    muDoubleScalarAbs(s[m])),
                                  muDoubleScalarAbs(e[m])),
                muDoubleScalarAbs(s[ii])),
            muDoubleScalarAbs(e[ii]));
        sm = nrm / scale;
        nrm = s[m] / scale;
        rt = e[m] / scale;
        sqds = s[ii] / scale;
        b = ((nrm + sm) * (nrm - sm) + rt * rt) / 2.0;
        nrm = sm * rt;
        nrm *= nrm;
        if ((b != 0.0) || (nrm != 0.0)) {
          rt = b * b + nrm;
          st.site = &qm_emlrtRSI;
          if (rt < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          rt = muDoubleScalarSqrt(rt);
          if (b < 0.0) {
            rt = -rt;
          }
          rt = nrm / (b + rt);
        } else {
          rt = 0.0;
        }
        rt += (sqds + sm) * (sqds - sm);
        nrm = sqds * (e[ii] / scale);
        st.site = &pm_emlrtRSI;
        for (int32_T k{ii + 1}; k <= scalarLB; k++) {
          st.site = &om_emlrtRSI;
          scale = 0.0;
          sn = 0.0;
          drotg(&rt, &nrm, &scale, &sn);
          if (k > ii + 1) {
            e[k - 2] = rt;
          }
          nrm = e[k - 1];
          rt = s[k - 1];
          sm = scale * rt + sn * nrm;
          e[k - 1] = scale * nrm - sn * rt;
          sqds = s[k];
          b = sn * sqds;
          sqds *= scale;
          blas::xrot(V, 9 * (k - 1) + 1, 9 * k + 1, scale, sn);
          st.site = &nm_emlrtRSI;
          scale = 0.0;
          sn = 0.0;
          drotg(&sm, &b, &scale, &sn);
          s[k - 1] = sm;
          nrm = e[k - 1];
          rt = scale * nrm + sn * sqds;
          sqds = -sn * nrm + scale * sqds;
          s[k] = sqds;
          nrm = sn * e[k];
          e[k] *= scale;
          if (k < 5) {
            blas::b_xrot(U, 5 * (k - 1) + 1, 5 * k + 1, scale, sn);
          }
        }
        e[m] = rt;
        iter++;
        break;
      default:
        if (s[ii] < 0.0) {
          s[ii] = -s[ii];
          st.site = &mm_emlrtRSI;
          blas::xscal(st, V, 9 * ii + 1);
        }
        qp1 = ii + 1;
        while ((ii + 1 < 6) && (s[ii] < s[qp1])) {
          rt = s[ii];
          s[ii] = s[qp1];
          s[qp1] = rt;
          blas::xswap(V, 9 * ii + 1, 9 * (ii + 1) + 1);
          if (ii + 1 < 5) {
            blas::b_xswap(U, 5 * ii + 1, 5 * (ii + 1) + 1);
          }
          ii = qp1;
          qp1++;
        }
        iter = 0;
        m--;
        break;
      }
    }
  }
  for (int32_T k{0}; k < 5; k++) {
    S[k] = s[k];
  }
  if (doscale) {
    xzlascl(cscale, anrm, S);
  }
}

void xzsvdc(const emlrtStack &sp, real_T A[9], real_T S[3])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T e[3];
  real_T work[3];
  real_T anrm;
  real_T b;
  real_T b_r;
  real_T cscale;
  real_T nrm;
  real_T scale;
  real_T sm;
  real_T sn;
  real_T snorm;
  real_T sqds;
  int32_T ii;
  int32_T iter;
  int32_T m;
  int32_T qp1;
  int32_T qq;
  int32_T qs;
  int32_T vectorUB;
  boolean_T doscale;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  S[0] = 0.0;
  e[0] = 0.0;
  work[0] = 0.0;
  S[1] = 0.0;
  e[1] = 0.0;
  work[1] = 0.0;
  S[2] = 0.0;
  e[2] = 0.0;
  work[2] = 0.0;
  doscale = false;
  anrm = b_xzlangeM(A);
  cscale = anrm;
  if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
    doscale = true;
    cscale = 6.7178761075670888E-139;
    e_xzlascl(anrm, cscale, A);
  } else if (anrm > 1.4885657073574029E+138) {
    doscale = true;
    cscale = 1.4885657073574029E+138;
    e_xzlascl(anrm, cscale, A);
  }
  for (int32_T q{0}; q < 2; q++) {
    __m128d c_r;
    boolean_T apply_transform;
    qp1 = q + 2;
    m = q + 3 * q;
    qq = m + 1;
    apply_transform = false;
    st.site = &vm_emlrtRSI;
    nrm = blas::c_xnrm2(st, 3 - q, A, m + 1);
    if (nrm > 0.0) {
      apply_transform = true;
      if (A[m] < 0.0) {
        sqds = -nrm;
      } else {
        sqds = nrm;
      }
      S[q] = sqds;
      st.site = &op_emlrtRSI;
      if (muDoubleScalarAbs(sqds) >= 1.0020841800044864E-292) {
        b_st.site = &jg_emlrtRSI;
        blas::c_xscal(b_st, 3 - q, 1.0 / sqds, A, m + 1);
      } else {
        qs = (m - q) + 3;
        iter = ((((qs - m) / 2) << 1) + m) + 1;
        vectorUB = iter - 2;
        for (int32_T k{qq}; k <= vectorUB; k += 2) {
          c_r = _mm_loadu_pd(&A[k - 1]);
          _mm_storeu_pd(&A[k - 1], _mm_div_pd(c_r, _mm_set1_pd(S[q])));
        }
        for (int32_T k{iter}; k <= qs; k++) {
          A[k - 1] /= S[q];
        }
      }
      A[m]++;
      S[q] = -S[q];
    } else {
      S[q] = 0.0;
    }
    for (qs = qp1; qs < 4; qs++) {
      qq = q + 3 * (qs - 1);
      if (apply_transform) {
        st.site = &np_emlrtRSI;
        nrm = blas::d_xdotc(st, 3 - q, A, m + 1, A, qq + 1);
        nrm = -(nrm / A[m]);
        blas::d_xaxpy(3 - q, nrm, m + 1, A, qq + 1);
      }
      e[qs - 1] = A[qq];
    }
    if (q + 1 <= 1) {
      st.site = &um_emlrtRSI;
      nrm = blas::xnrm2(e);
      if (nrm == 0.0) {
        e[0] = 0.0;
      } else {
        if (e[1] < 0.0) {
          e[0] = -nrm;
        } else {
          e[0] = nrm;
        }
        st.site = &mp_emlrtRSI;
        sm = e[0];
        if (muDoubleScalarAbs(e[0]) >= 1.0020841800044864E-292) {
          blas::xscal(1.0 / e[0], e);
        } else {
          iter = ((((2 - q) / 2) << 1) + q) + 2;
          vectorUB = iter - 2;
          for (int32_T k{qp1}; k <= vectorUB; k += 2) {
            c_r = _mm_loadu_pd(&e[k - 1]);
            _mm_storeu_pd(&e[k - 1], _mm_div_pd(c_r, _mm_set1_pd(sm)));
          }
          for (int32_T k{iter}; k < 4; k++) {
            e[k - 1] /= sm;
          }
        }
        e[1]++;
        e[0] = -e[0];
        for (ii = qp1; ii < 4; ii++) {
          work[ii - 1] = 0.0;
        }
        for (qs = qp1; qs < 4; qs++) {
          blas::xaxpy(e[qs - 1], A, 3 * (qs - 1) + 2, work);
        }
        for (qs = qp1; qs < 4; qs++) {
          blas::xaxpy(-e[qs - 1] / e[1], work, A, 3 * (qs - 1) + 2);
        }
      }
    }
  }
  m = 1;
  S[2] = A[8];
  e[1] = A[7];
  e[2] = 0.0;
  iter = 0;
  sqds = S[0];
  if (S[0] != 0.0) {
    nrm = muDoubleScalarAbs(S[0]);
    b_r = S[0] / nrm;
    sqds = nrm;
    S[0] = nrm;
    e[0] /= b_r;
  }
  if (e[0] != 0.0) {
    nrm = muDoubleScalarAbs(e[0]);
    b_r = nrm / e[0];
    e[0] = nrm;
    S[1] *= b_r;
  }
  snorm = muDoubleScalarMax(muDoubleScalarAbs(sqds), e[0]);
  sqds = S[1];
  if (S[1] != 0.0) {
    nrm = muDoubleScalarAbs(S[1]);
    b_r = S[1] / nrm;
    sqds = nrm;
    S[1] = nrm;
    e[1] = A[7] / b_r;
  }
  if (e[1] != 0.0) {
    nrm = muDoubleScalarAbs(e[1]);
    b_r = nrm / e[1];
    e[1] = nrm;
    S[2] = A[8] * b_r;
  }
  snorm = muDoubleScalarMax(snorm,
                            muDoubleScalarMax(muDoubleScalarAbs(sqds), e[1]));
  sqds = S[2];
  if (S[2] != 0.0) {
    nrm = muDoubleScalarAbs(S[2]);
    sqds = nrm;
    S[2] = nrm;
  }
  snorm =
      muDoubleScalarMax(snorm, muDoubleScalarMax(muDoubleScalarAbs(sqds), 0.0));
  exitg1 = false;
  while ((!exitg1) && (m + 2 > 0)) {
    if (iter >= 75) {
      emlrtErrorWithMessageIdR2018a(&sp, &kb_emlrtRTEI,
                                    "Coder:MATLAB:svd_NoConvergence",
                                    "Coder:MATLAB:svd_NoConvergence", 0);
    } else {
      boolean_T exitg2;
      vectorUB = m + 1;
      ii = m + 1;
      exitg2 = false;
      while (!(exitg2 || (ii == 0))) {
        nrm = muDoubleScalarAbs(e[ii - 1]);
        if ((nrm <= 2.2204460492503131E-16 * (muDoubleScalarAbs(S[ii - 1]) +
                                              muDoubleScalarAbs(S[ii]))) ||
            (nrm <= 1.0020841800044864E-292) ||
            ((iter > 20) && (nrm <= 2.2204460492503131E-16 * snorm))) {
          e[ii - 1] = 0.0;
          exitg2 = true;
        } else {
          ii--;
        }
      }
      if (ii == m + 1) {
        qq = 4;
      } else {
        qs = m + 2;
        qq = m + 2;
        exitg2 = false;
        while ((!exitg2) && (qq >= ii)) {
          qs = qq;
          if (qq == ii) {
            exitg2 = true;
          } else {
            nrm = 0.0;
            if (qq < m + 2) {
              nrm = muDoubleScalarAbs(e[qq - 1]);
            }
            if (qq > ii + 1) {
              nrm += muDoubleScalarAbs(e[qq - 2]);
            }
            b_r = muDoubleScalarAbs(S[qq - 1]);
            if ((b_r <= 2.2204460492503131E-16 * nrm) ||
                (b_r <= 1.0020841800044864E-292)) {
              S[qq - 1] = 0.0;
              exitg2 = true;
            } else {
              qq--;
            }
          }
        }
        if (qs == ii) {
          qq = 3;
        } else if (qs == m + 2) {
          qq = 1;
        } else {
          qq = 2;
          ii = qs;
        }
      }
      switch (qq) {
      case 1:
        b_r = e[m];
        e[m] = 0.0;
        for (int32_T k{vectorUB}; k >= ii + 1; k--) {
          st.site = &tm_emlrtRSI;
          scale = 0.0;
          sn = 0.0;
          drotg(&S[k - 1], &b_r, &scale, &sn);
          if (k > ii + 1) {
            b_r = -sn * e[0];
            e[0] *= scale;
          }
        }
        break;
      case 2:
        b_r = e[ii - 1];
        e[ii - 1] = 0.0;
        st.site = &sm_emlrtRSI;
        for (int32_T k{ii + 1}; k <= m + 2; k++) {
          st.site = &rm_emlrtRSI;
          scale = 0.0;
          sn = 0.0;
          drotg(&S[k - 1], &b_r, &scale, &sn);
          nrm = e[k - 1];
          b_r = -sn * nrm;
          e[k - 1] = nrm * scale;
        }
        break;
      case 3:
        nrm = S[m + 1];
        scale = muDoubleScalarMax(
            muDoubleScalarMax(
                muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarAbs(nrm),
                                                    muDoubleScalarAbs(S[m])),
                                  muDoubleScalarAbs(e[m])),
                muDoubleScalarAbs(S[ii])),
            muDoubleScalarAbs(e[ii]));
        sm = nrm / scale;
        nrm = S[m] / scale;
        b_r = e[m] / scale;
        sqds = S[ii] / scale;
        b = ((nrm + sm) * (nrm - sm) + b_r * b_r) / 2.0;
        nrm = sm * b_r;
        nrm *= nrm;
        if ((b != 0.0) || (nrm != 0.0)) {
          b_r = b * b + nrm;
          st.site = &qm_emlrtRSI;
          if (b_r < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          b_r = muDoubleScalarSqrt(b_r);
          if (b < 0.0) {
            b_r = -b_r;
          }
          b_r = nrm / (b + b_r);
        } else {
          b_r = 0.0;
        }
        b_r += (sqds + sm) * (sqds - sm);
        nrm = sqds * (e[ii] / scale);
        st.site = &pm_emlrtRSI;
        for (int32_T k{ii + 1}; k <= vectorUB; k++) {
          st.site = &om_emlrtRSI;
          scale = 0.0;
          sn = 0.0;
          drotg(&b_r, &nrm, &scale, &sn);
          if (k > ii + 1) {
            e[0] = b_r;
          }
          nrm = e[k - 1];
          b_r = S[k - 1];
          sm = scale * b_r + sn * nrm;
          e[k - 1] = scale * nrm - sn * b_r;
          sqds = S[k];
          b = sn * sqds;
          sqds *= scale;
          st.site = &nm_emlrtRSI;
          scale = 0.0;
          sn = 0.0;
          drotg(&sm, &b, &scale, &sn);
          S[k - 1] = sm;
          nrm = e[k - 1];
          b_r = scale * nrm + sn * sqds;
          sqds = -sn * nrm + scale * sqds;
          S[k] = sqds;
          nrm = sn * e[k];
          e[k] *= scale;
        }
        e[m] = b_r;
        iter++;
        break;
      default:
        if (S[ii] < 0.0) {
          S[ii] = -S[ii];
        }
        qp1 = ii + 1;
        while ((ii + 1 < 3) && (S[ii] < S[qp1])) {
          nrm = S[ii];
          S[ii] = S[qp1];
          S[qp1] = nrm;
          ii = qp1;
          qp1++;
        }
        iter = 0;
        m--;
        break;
      }
    }
  }
  if (doscale) {
    b_xzlascl(cscale, anrm, S);
  }
}

void xzsvdc(const emlrtStack &sp, real32_T A[9], real32_T U[9], real32_T S[3],
            real32_T V[9])
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  int32_T ii;
  int32_T m;
  int32_T qjj;
  int32_T qp1;
  int32_T qp1_tmp;
  int32_T qq;
  int32_T qs;
  real32_T e[3];
  real32_T work[3];
  real32_T anrm;
  real32_T b;
  real32_T cscale;
  real32_T f;
  real32_T nrm;
  real32_T rt;
  real32_T scale;
  real32_T snorm;
  real32_T sqds;
  boolean_T doscale;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  S[0] = 0.0F;
  e[0] = 0.0F;
  work[0] = 0.0F;
  S[1] = 0.0F;
  e[1] = 0.0F;
  work[1] = 0.0F;
  S[2] = 0.0F;
  e[2] = 0.0F;
  work[2] = 0.0F;
  for (i = 0; i < 9; i++) {
    U[i] = 0.0F;
    V[i] = 0.0F;
  }
  doscale = false;
  anrm = xzlangeM(A);
  cscale = anrm;
  if ((anrm > 0.0F) && (anrm < 9.09494702E-13F)) {
    doscale = true;
    cscale = 9.09494702E-13F;
    c_xzlascl(anrm, cscale, A);
  } else if (anrm > 1.09951163E+12F) {
    doscale = true;
    cscale = 1.09951163E+12F;
    c_xzlascl(anrm, cscale, A);
  }
  for (int32_T q{0}; q < 2; q++) {
    boolean_T apply_transform;
    qp1_tmp = q + 2;
    qs = q + 3 * q;
    qq = qs + 1;
    apply_transform = false;
    st.site = &vm_emlrtRSI;
    nrm = blas::xnrm2(st, 3 - q, A, qs + 1);
    if (nrm > 0.0F) {
      apply_transform = true;
      if (A[qs] < 0.0F) {
        rt = -nrm;
      } else {
        rt = nrm;
      }
      S[q] = rt;
      st.site = &op_emlrtRSI;
      if (muSingleScalarAbs(rt) >= 9.86076132E-32F) {
        b_st.site = &jg_emlrtRSI;
        blas::xscal(b_st, 3 - q, 1.0F / rt, A, qs + 1);
      } else {
        i = (qs - q) + 3;
        qp1 = ((((i - qs) / 4) << 2) + qs) + 1;
        qjj = qp1 - 4;
        for (int32_T k{qq}; k <= qjj; k += 4) {
          __m128 b_r;
          b_r = _mm_loadu_ps(&A[k - 1]);
          _mm_storeu_ps(&A[k - 1], _mm_div_ps(b_r, _mm_set1_ps(S[q])));
        }
        for (int32_T k{qp1}; k <= i; k++) {
          A[k - 1] /= S[q];
        }
      }
      A[qs]++;
      S[q] = -S[q];
    } else {
      S[q] = 0.0F;
    }
    for (int32_T k{qp1_tmp}; k < 4; k++) {
      qjj = q + 3 * (k - 1);
      if (apply_transform) {
        st.site = &np_emlrtRSI;
        nrm = blas::xdotc(st, 3 - q, A, qs + 1, A, qjj + 1);
        blas::xaxpy(3 - q, -(nrm / A[qs]), qs + 1, A, qjj + 1);
      }
      e[k - 1] = A[qjj];
    }
    for (ii = q + 1; ii < 4; ii++) {
      qjj = (ii + 3 * q) - 1;
      U[qjj] = A[qjj];
    }
    if (q + 1 <= 1) {
      st.site = &um_emlrtRSI;
      nrm = blas::xnrm2(e);
      if (nrm == 0.0F) {
        e[0] = 0.0F;
      } else {
        if (e[1] < 0.0F) {
          e[0] = -nrm;
        } else {
          e[0] = nrm;
        }
        st.site = &mp_emlrtRSI;
        f = e[0];
        if (muSingleScalarAbs(e[0]) >= 9.86076132E-32F) {
          blas::xscal(1.0F / e[0], e);
        } else {
          for (int32_T k{qp1_tmp}; k < 4; k++) {
            e[k - 1] /= f;
          }
        }
        e[1]++;
        e[0] = -e[0];
        for (ii = qp1_tmp; ii < 4; ii++) {
          work[ii - 1] = 0.0F;
        }
        for (int32_T k{qp1_tmp}; k < 4; k++) {
          blas::xaxpy(e[k - 1], A, 3 * (k - 1) + 2, work);
        }
        for (int32_T k{qp1_tmp}; k < 4; k++) {
          blas::xaxpy(-e[k - 1] / e[1], work, A, 3 * (k - 1) + 2);
        }
      }
      for (ii = qp1_tmp; ii < 4; ii++) {
        V[ii - 1] = e[ii - 1];
      }
    }
  }
  m = 1;
  S[2] = A[8];
  e[1] = A[7];
  e[2] = 0.0F;
  U[6] = 0.0F;
  U[7] = 0.0F;
  U[8] = 1.0F;
  for (int32_T q{1}; q >= 0; q--) {
    qp1 = q + 2;
    qq = q + 3 * q;
    if (S[q] != 0.0F) {
      for (int32_T k{qp1}; k < 4; k++) {
        qjj = (q + 3 * (k - 1)) + 1;
        st.site = &js_emlrtRSI;
        nrm = blas::xdotc(st, 3 - q, U, qq + 1, U, qjj);
        blas::xaxpy(3 - q, -(nrm / U[qq]), qq + 1, U, qjj);
      }
      qp1 = q + 1;
      for (ii = qp1; ii < 4; ii++) {
        qjj = (ii + 3 * q) - 1;
        U[qjj] = -U[qjj];
      }
      U[qq]++;
      st.site = &is_emlrtRSI;
      if (q - 1 >= 0) {
        U[3 * q] = 0.0F;
      }
    } else {
      U[3 * q] = 0.0F;
      U[3 * q + 1] = 0.0F;
      U[3 * q + 2] = 0.0F;
      U[qq] = 1.0F;
    }
  }
  for (int32_T q{2}; q >= 0; q--) {
    if ((q + 1 <= 1) && (e[0] != 0.0F)) {
      st.site = &hs_emlrtRSI;
      nrm = blas::xdotc(st, 2, V, 2, V, 5);
      blas::xaxpy(2, -(nrm / V[1]), 2, V, 5);
      st.site = &hs_emlrtRSI;
      nrm = blas::xdotc(st, 2, V, 2, V, 8);
      blas::xaxpy(2, -(nrm / V[1]), 2, V, 8);
    }
    V[3 * q] = 0.0F;
    V[3 * q + 1] = 0.0F;
    V[3 * q + 2] = 0.0F;
    V[q + 3 * q] = 1.0F;
  }
  if (S[0] != 0.0F) {
    rt = muSingleScalarAbs(S[0]);
    nrm = S[0] / rt;
    S[0] = rt;
    e[0] /= nrm;
    st.site = &gs_emlrtRSI;
    blas::xscal(st, nrm, U, 1);
  }
  if (e[0] != 0.0F) {
    rt = muSingleScalarAbs(e[0]);
    nrm = rt / e[0];
    e[0] = rt;
    S[1] *= nrm;
    st.site = &fs_emlrtRSI;
    blas::xscal(st, nrm, V, 4);
  }
  if (S[1] != 0.0F) {
    rt = muSingleScalarAbs(S[1]);
    nrm = S[1] / rt;
    S[1] = rt;
    e[1] = A[7] / nrm;
    st.site = &gs_emlrtRSI;
    blas::xscal(st, nrm, U, 4);
  }
  if (e[1] != 0.0F) {
    rt = muSingleScalarAbs(e[1]);
    nrm = rt / e[1];
    e[1] = rt;
    S[2] = A[8] * nrm;
    st.site = &fs_emlrtRSI;
    blas::xscal(st, nrm, V, 7);
  }
  if (S[2] != 0.0F) {
    rt = muSingleScalarAbs(S[2]);
    nrm = S[2] / rt;
    S[2] = rt;
    st.site = &gs_emlrtRSI;
    blas::xscal(st, nrm, U, 7);
  }
  qp1 = 0;
  snorm = muSingleScalarMax(muSingleScalarMax(muSingleScalarMax(S[0], e[0]),
                                              muSingleScalarMax(S[1], e[1])),
                            muSingleScalarMax(S[2], 0.0F));
  exitg1 = false;
  while ((!exitg1) && (m + 2 > 0)) {
    if (qp1 >= 75) {
      emlrtErrorWithMessageIdR2018a(&sp, &kb_emlrtRTEI,
                                    "Coder:MATLAB:svd_NoConvergence",
                                    "Coder:MATLAB:svd_NoConvergence", 0);
    } else {
      boolean_T exitg2;
      qp1_tmp = m + 1;
      ii = m + 1;
      exitg2 = false;
      while (!(exitg2 || (ii == 0))) {
        nrm = muSingleScalarAbs(e[ii - 1]);
        if ((nrm <= 1.1920929E-7F * (muSingleScalarAbs(S[ii - 1]) +
                                     muSingleScalarAbs(S[ii]))) ||
            (nrm <= 9.86076132E-32F) ||
            ((qp1 > 20) && (nrm <= 1.1920929E-7F * snorm))) {
          e[ii - 1] = 0.0F;
          exitg2 = true;
        } else {
          ii--;
        }
      }
      if (ii == m + 1) {
        qjj = 4;
      } else {
        qs = m + 2;
        qjj = m + 2;
        exitg2 = false;
        while ((!exitg2) && (qjj >= ii)) {
          qs = qjj;
          if (qjj == ii) {
            exitg2 = true;
          } else {
            nrm = 0.0F;
            if (qjj < m + 2) {
              nrm = muSingleScalarAbs(e[qjj - 1]);
            }
            if (qjj > ii + 1) {
              nrm += muSingleScalarAbs(e[qjj - 2]);
            }
            rt = muSingleScalarAbs(S[qjj - 1]);
            if ((rt <= 1.1920929E-7F * nrm) || (rt <= 9.86076132E-32F)) {
              S[qjj - 1] = 0.0F;
              exitg2 = true;
            } else {
              qjj--;
            }
          }
        }
        if (qs == ii) {
          qjj = 3;
        } else if (qs == m + 2) {
          qjj = 1;
        } else {
          qjj = 2;
          ii = qs;
        }
      }
      switch (qjj) {
      case 1:
        f = e[m];
        e[m] = 0.0F;
        for (int32_T k{qp1_tmp}; k >= ii + 1; k--) {
          st.site = &tm_emlrtRSI;
          sqds = 0.0F;
          scale = 0.0F;
          srotg(&S[k - 1], &f, &sqds, &scale);
          if (k > ii + 1) {
            f = -scale * e[0];
            e[0] *= sqds;
          }
          blas::xrot(V, 3 * (k - 1) + 1, 3 * (m + 1) + 1, sqds, scale);
        }
        break;
      case 2:
        f = e[ii - 1];
        e[ii - 1] = 0.0F;
        st.site = &sm_emlrtRSI;
        for (int32_T k{ii + 1}; k <= m + 2; k++) {
          st.site = &rm_emlrtRSI;
          sqds = 0.0F;
          scale = 0.0F;
          srotg(&S[k - 1], &f, &sqds, &scale);
          nrm = e[k - 1];
          f = -scale * nrm;
          e[k - 1] = nrm * sqds;
          blas::xrot(U, 3 * (k - 1) + 1, 3 * (ii - 1) + 1, sqds, scale);
        }
        break;
      case 3:
        nrm = S[m + 1];
        scale = muSingleScalarMax(
            muSingleScalarMax(
                muSingleScalarMax(muSingleScalarMax(muSingleScalarAbs(nrm),
                                                    muSingleScalarAbs(S[m])),
                                  muSingleScalarAbs(e[m])),
                muSingleScalarAbs(S[ii])),
            muSingleScalarAbs(e[ii]));
        f = nrm / scale;
        nrm = S[m] / scale;
        rt = e[m] / scale;
        sqds = S[ii] / scale;
        b = ((nrm + f) * (nrm - f) + rt * rt) / 2.0F;
        nrm = f * rt;
        nrm *= nrm;
        if ((b != 0.0F) || (nrm != 0.0F)) {
          rt = b * b + nrm;
          st.site = &qm_emlrtRSI;
          if (rt < 0.0F) {
            emlrtErrorWithMessageIdR2018a(
                &st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          rt = muSingleScalarSqrt(rt);
          if (b < 0.0F) {
            rt = -rt;
          }
          rt = nrm / (b + rt);
        } else {
          rt = 0.0F;
        }
        f = (sqds + f) * (sqds - f) + rt;
        nrm = sqds * (e[ii] / scale);
        st.site = &pm_emlrtRSI;
        for (int32_T k{ii + 1}; k <= qp1_tmp; k++) {
          st.site = &om_emlrtRSI;
          sqds = 0.0F;
          scale = 0.0F;
          srotg(&f, &nrm, &sqds, &scale);
          if (k > ii + 1) {
            e[0] = f;
          }
          nrm = e[k - 1];
          rt = S[k - 1];
          f = sqds * rt + scale * nrm;
          e[k - 1] = sqds * nrm - scale * rt;
          rt = S[k];
          b = scale * rt;
          rt *= sqds;
          i = 3 * (k - 1) + 1;
          qs = 3 * k + 1;
          blas::xrot(V, i, qs, sqds, scale);
          st.site = &nm_emlrtRSI;
          sqds = 0.0F;
          scale = 0.0F;
          srotg(&f, &b, &sqds, &scale);
          S[k - 1] = f;
          nrm = e[k - 1];
          f = sqds * nrm + scale * rt;
          rt = -scale * nrm + sqds * rt;
          S[k] = rt;
          nrm = scale * e[k];
          e[k] *= sqds;
          blas::xrot(U, i, qs, sqds, scale);
        }
        e[m] = f;
        qp1++;
        break;
      default:
        if (S[ii] < 0.0F) {
          S[ii] = -S[ii];
          st.site = &mm_emlrtRSI;
          blas::xscal(st, V, 3 * ii + 1);
        }
        qp1 = ii + 1;
        while ((ii + 1 < 3) && (S[ii] < S[qp1])) {
          rt = S[ii];
          S[ii] = S[qp1];
          S[qp1] = rt;
          i = 3 * ii + 1;
          qs = 3 * (ii + 1) + 1;
          blas::xswap(V, i, qs);
          blas::xswap(U, i, qs);
          ii = qp1;
          qp1++;
        }
        qp1 = 0;
        m--;
        break;
      }
    }
  }
  if (doscale) {
    xzlascl(cscale, anrm, S);
  }
}

void xzsvdc(const emlrtStack &sp, real32_T A[9], real32_T S[3])
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T ii;
  int32_T iter;
  int32_T m;
  int32_T qq;
  int32_T qs;
  int32_T vectorUB;
  real32_T e[3];
  real32_T work[3];
  real32_T anrm;
  real32_T b;
  real32_T cscale;
  real32_T nrm;
  real32_T rt;
  real32_T scale;
  real32_T sm;
  real32_T sn;
  real32_T snorm;
  real32_T sqds;
  boolean_T doscale;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  S[0] = 0.0F;
  e[0] = 0.0F;
  work[0] = 0.0F;
  S[1] = 0.0F;
  e[1] = 0.0F;
  work[1] = 0.0F;
  S[2] = 0.0F;
  e[2] = 0.0F;
  work[2] = 0.0F;
  doscale = false;
  anrm = xzlangeM(A);
  cscale = anrm;
  if ((anrm > 0.0F) && (anrm < 9.09494702E-13F)) {
    doscale = true;
    cscale = 9.09494702E-13F;
    c_xzlascl(anrm, cscale, A);
  } else if (anrm > 1.09951163E+12F) {
    doscale = true;
    cscale = 1.09951163E+12F;
    c_xzlascl(anrm, cscale, A);
  }
  for (int32_T q{0}; q < 2; q++) {
    int32_T qp1_tmp;
    boolean_T apply_transform;
    qp1_tmp = q + 2;
    m = q + 3 * q;
    qq = m + 1;
    apply_transform = false;
    st.site = &vm_emlrtRSI;
    nrm = blas::xnrm2(st, 3 - q, A, m + 1);
    if (nrm > 0.0F) {
      apply_transform = true;
      if (A[m] < 0.0F) {
        sqds = -nrm;
      } else {
        sqds = nrm;
      }
      S[q] = sqds;
      st.site = &op_emlrtRSI;
      if (muSingleScalarAbs(sqds) >= 9.86076132E-32F) {
        b_st.site = &jg_emlrtRSI;
        blas::xscal(b_st, 3 - q, 1.0F / sqds, A, m + 1);
      } else {
        qs = (m - q) + 3;
        iter = ((((qs - m) / 4) << 2) + m) + 1;
        vectorUB = iter - 4;
        for (int32_T k{qq}; k <= vectorUB; k += 4) {
          __m128 b_r;
          b_r = _mm_loadu_ps(&A[k - 1]);
          _mm_storeu_ps(&A[k - 1], _mm_div_ps(b_r, _mm_set1_ps(S[q])));
        }
        for (int32_T k{iter}; k <= qs; k++) {
          A[k - 1] /= S[q];
        }
      }
      A[m]++;
      S[q] = -S[q];
    } else {
      S[q] = 0.0F;
    }
    for (qs = qp1_tmp; qs < 4; qs++) {
      qq = q + 3 * (qs - 1);
      if (apply_transform) {
        st.site = &np_emlrtRSI;
        nrm = blas::xdotc(st, 3 - q, A, m + 1, A, qq + 1);
        blas::xaxpy(3 - q, -(nrm / A[m]), m + 1, A, qq + 1);
      }
      e[qs - 1] = A[qq];
    }
    if (q + 1 <= 1) {
      st.site = &um_emlrtRSI;
      nrm = blas::xnrm2(e);
      if (nrm == 0.0F) {
        e[0] = 0.0F;
      } else {
        if (e[1] < 0.0F) {
          e[0] = -nrm;
        } else {
          e[0] = nrm;
        }
        st.site = &mp_emlrtRSI;
        sm = e[0];
        if (muSingleScalarAbs(e[0]) >= 9.86076132E-32F) {
          blas::xscal(1.0F / e[0], e);
        } else {
          for (int32_T k{qp1_tmp}; k < 4; k++) {
            e[k - 1] /= sm;
          }
        }
        e[1]++;
        e[0] = -e[0];
        for (ii = qp1_tmp; ii < 4; ii++) {
          work[ii - 1] = 0.0F;
        }
        for (qs = qp1_tmp; qs < 4; qs++) {
          blas::xaxpy(e[qs - 1], A, 3 * (qs - 1) + 2, work);
        }
        for (qs = qp1_tmp; qs < 4; qs++) {
          blas::xaxpy(-e[qs - 1] / e[1], work, A, 3 * (qs - 1) + 2);
        }
      }
    }
  }
  m = 1;
  S[2] = A[8];
  e[1] = A[7];
  e[2] = 0.0F;
  iter = 0;
  sqds = S[0];
  if (S[0] != 0.0F) {
    rt = muSingleScalarAbs(S[0]);
    nrm = S[0] / rt;
    sqds = rt;
    S[0] = rt;
    e[0] /= nrm;
  }
  if (e[0] != 0.0F) {
    rt = muSingleScalarAbs(e[0]);
    nrm = e[0];
    e[0] = rt;
    S[1] *= rt / nrm;
  }
  snorm = muSingleScalarMax(muSingleScalarAbs(sqds), e[0]);
  sqds = S[1];
  if (S[1] != 0.0F) {
    rt = muSingleScalarAbs(S[1]);
    nrm = S[1] / rt;
    sqds = rt;
    S[1] = rt;
    e[1] = A[7] / nrm;
  }
  if (e[1] != 0.0F) {
    rt = muSingleScalarAbs(e[1]);
    nrm = e[1];
    e[1] = rt;
    S[2] = A[8] * (rt / nrm);
  }
  snorm = muSingleScalarMax(snorm,
                            muSingleScalarMax(muSingleScalarAbs(sqds), e[1]));
  sqds = S[2];
  if (S[2] != 0.0F) {
    rt = muSingleScalarAbs(S[2]);
    sqds = rt;
    S[2] = rt;
  }
  snorm = muSingleScalarMax(snorm,
                            muSingleScalarMax(muSingleScalarAbs(sqds), 0.0F));
  exitg1 = false;
  while ((!exitg1) && (m + 2 > 0)) {
    if (iter >= 75) {
      emlrtErrorWithMessageIdR2018a(&sp, &kb_emlrtRTEI,
                                    "Coder:MATLAB:svd_NoConvergence",
                                    "Coder:MATLAB:svd_NoConvergence", 0);
    } else {
      boolean_T exitg2;
      vectorUB = m + 1;
      ii = m + 1;
      exitg2 = false;
      while (!(exitg2 || (ii == 0))) {
        nrm = muSingleScalarAbs(e[ii - 1]);
        if ((nrm <= 1.1920929E-7F * (muSingleScalarAbs(S[ii - 1]) +
                                     muSingleScalarAbs(S[ii]))) ||
            (nrm <= 9.86076132E-32F) ||
            ((iter > 20) && (nrm <= 1.1920929E-7F * snorm))) {
          e[ii - 1] = 0.0F;
          exitg2 = true;
        } else {
          ii--;
        }
      }
      if (ii == m + 1) {
        qq = 4;
      } else {
        qs = m + 2;
        qq = m + 2;
        exitg2 = false;
        while ((!exitg2) && (qq >= ii)) {
          qs = qq;
          if (qq == ii) {
            exitg2 = true;
          } else {
            nrm = 0.0F;
            if (qq < m + 2) {
              nrm = muSingleScalarAbs(e[qq - 1]);
            }
            if (qq > ii + 1) {
              nrm += muSingleScalarAbs(e[qq - 2]);
            }
            rt = muSingleScalarAbs(S[qq - 1]);
            if ((rt <= 1.1920929E-7F * nrm) || (rt <= 9.86076132E-32F)) {
              S[qq - 1] = 0.0F;
              exitg2 = true;
            } else {
              qq--;
            }
          }
        }
        if (qs == ii) {
          qq = 3;
        } else if (qs == m + 2) {
          qq = 1;
        } else {
          qq = 2;
          ii = qs;
        }
      }
      switch (qq) {
      case 1:
        rt = e[m];
        e[m] = 0.0F;
        for (int32_T k{vectorUB}; k >= ii + 1; k--) {
          st.site = &tm_emlrtRSI;
          scale = 0.0F;
          sn = 0.0F;
          srotg(&S[k - 1], &rt, &scale, &sn);
          if (k > ii + 1) {
            rt = -sn * e[0];
            e[0] *= scale;
          }
        }
        break;
      case 2:
        rt = e[ii - 1];
        e[ii - 1] = 0.0F;
        st.site = &sm_emlrtRSI;
        for (int32_T k{ii + 1}; k <= m + 2; k++) {
          st.site = &rm_emlrtRSI;
          scale = 0.0F;
          sn = 0.0F;
          srotg(&S[k - 1], &rt, &scale, &sn);
          nrm = e[k - 1];
          rt = -sn * nrm;
          e[k - 1] = nrm * scale;
        }
        break;
      case 3:
        nrm = S[m + 1];
        scale = muSingleScalarMax(
            muSingleScalarMax(
                muSingleScalarMax(muSingleScalarMax(muSingleScalarAbs(nrm),
                                                    muSingleScalarAbs(S[m])),
                                  muSingleScalarAbs(e[m])),
                muSingleScalarAbs(S[ii])),
            muSingleScalarAbs(e[ii]));
        sm = nrm / scale;
        nrm = S[m] / scale;
        rt = e[m] / scale;
        sqds = S[ii] / scale;
        b = ((nrm + sm) * (nrm - sm) + rt * rt) / 2.0F;
        nrm = sm * rt;
        nrm *= nrm;
        if ((b != 0.0F) || (nrm != 0.0F)) {
          rt = b * b + nrm;
          st.site = &qm_emlrtRSI;
          if (rt < 0.0F) {
            emlrtErrorWithMessageIdR2018a(
                &st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          rt = muSingleScalarSqrt(rt);
          if (b < 0.0F) {
            rt = -rt;
          }
          rt = nrm / (b + rt);
        } else {
          rt = 0.0F;
        }
        rt += (sqds + sm) * (sqds - sm);
        nrm = sqds * (e[ii] / scale);
        st.site = &pm_emlrtRSI;
        for (int32_T k{ii + 1}; k <= vectorUB; k++) {
          st.site = &om_emlrtRSI;
          scale = 0.0F;
          sn = 0.0F;
          srotg(&rt, &nrm, &scale, &sn);
          if (k > ii + 1) {
            e[0] = rt;
          }
          nrm = e[k - 1];
          rt = S[k - 1];
          sm = scale * rt + sn * nrm;
          e[k - 1] = scale * nrm - sn * rt;
          sqds = S[k];
          b = sn * sqds;
          sqds *= scale;
          st.site = &nm_emlrtRSI;
          scale = 0.0F;
          sn = 0.0F;
          srotg(&sm, &b, &scale, &sn);
          S[k - 1] = sm;
          nrm = e[k - 1];
          rt = scale * nrm + sn * sqds;
          sqds = -sn * nrm + scale * sqds;
          S[k] = sqds;
          nrm = sn * e[k];
          e[k] *= scale;
        }
        e[m] = rt;
        iter++;
        break;
      default:
        if (S[ii] < 0.0F) {
          S[ii] = -S[ii];
        }
        qq = ii + 1;
        while ((ii + 1 < 3) && (S[ii] < S[qq])) {
          rt = S[ii];
          S[ii] = S[qq];
          S[qq] = rt;
          ii = qq;
          qq++;
        }
        iter = 0;
        m--;
        break;
      }
    }
  }
  if (doscale) {
    xzlascl(cscale, anrm, S);
  }
}

} // namespace reflapack
} // namespace internal
} // namespace coder

// End of code generation (xzsvdc.cpp)
