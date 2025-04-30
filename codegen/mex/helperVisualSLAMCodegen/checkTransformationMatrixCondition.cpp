//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// checkTransformationMatrixCondition.cpp
//
// Code generation for function 'checkTransformationMatrixCondition'
//

// Include files
#include "checkTransformationMatrixCondition.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xzgetrf.h"
#include "mwmathutil.h"
#include <algorithm>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo sp_emlrtRSI{
    14,      // lineNo
    "rcond", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\rcond.m" // pathName
};

static emlrtRSInfo tp_emlrtRSI{
    60,      // lineNo
    "rcond", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\rcond.m" // pathName
};

static emlrtRSInfo up_emlrtRSI{
    62,      // lineNo
    "rcond", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\rcond.m" // pathName
};

static emlrtRSInfo vp_emlrtRSI{
    65,      // lineNo
    "rcond", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\rcond.m" // pathName
};

static emlrtRSInfo wp_emlrtRSI{
    123,     // lineNo
    "rcond", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\rcond.m" // pathName
};

static emlrtRSInfo xp_emlrtRSI{
    44,      // lineNo
    "rcond", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\rcond.m" // pathName
};

// Function Declarations
namespace coder {
namespace images {
namespace geotrans {
namespace internal {
static boolean_T isBadlyConditioned(const emlrtStack &sp, const real_T A[9]);

}
} // namespace geotrans
} // namespace images
} // namespace coder

// Function Definitions
namespace coder {
namespace images {
namespace geotrans {
namespace internal {
static boolean_T isBadlyConditioned(const emlrtStack &sp, const real_T A[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T b_A[9];
  real_T x[3];
  real_T normA;
  real_T rc;
  real_T s;
  int32_T j;
  boolean_T exitg1;
  boolean_T tf;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &rp_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &sp_emlrtRSI;
  rc = 0.0;
  normA = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 3)) {
    s = (muDoubleScalarAbs(A[3 * j]) + muDoubleScalarAbs(A[3 * j + 1])) +
        muDoubleScalarAbs(A[3 * j + 2]);
    if (muDoubleScalarIsNaN(s)) {
      normA = rtNaN;
      exitg1 = true;
    } else {
      if (s > normA) {
        normA = s;
      }
      j++;
    }
  }
  if (!(normA == 0.0)) {
    int32_T ipiv[3];
    int32_T jA;
    c_st.site = &xp_emlrtRSI;
    std::copy(&A[0], &A[9], &b_A[0]);
    d_st.site = &yp_emlrtRSI;
    ::coder::internal::reflapack::xzgetrf(d_st, b_A, ipiv);
    jA = 2;
    int32_T exitg2;
    do {
      exitg2 = 0;
      if (jA + 1 > 0) {
        if (b_A[jA + 3 * jA] == 0.0) {
          exitg2 = 1;
        } else {
          jA--;
        }
      } else {
        real_T ainvnm;
        int32_T iter;
        int32_T jump;
        int32_T kase;
        ainvnm = 0.0;
        iter = 2;
        kase = 1;
        jump = 1;
        j = 0;
        x[0] = 0.33333333333333331;
        x[1] = 0.33333333333333331;
        x[2] = 0.33333333333333331;
        int32_T exitg3;
        do {
          exitg3 = 0;
          if (kase == 1) {
            int32_T jjA;
            c_st.site = &tp_emlrtRSI;
            for (int32_T b_j{0}; b_j < 3; b_j++) {
              int32_T i;
              int32_T scalarLB;
              jjA = b_j + b_j * 3;
              i = 1 - b_j;
              scalarLB = ((2 - b_j) / 2) << 1;
              jA = scalarLB - 2;
              for (int32_T b_i{0}; b_i <= jA; b_i += 2) {
                __m128d b_r;
                __m128d r1;
                b_r = _mm_loadu_pd(&b_A[jjA + 1]);
                r1 = _mm_loadu_pd(&x[b_j + 1]);
                _mm_storeu_pd(
                    &x[b_j + 1],
                    _mm_sub_pd(r1, _mm_mul_pd(_mm_set1_pd(x[b_j]), b_r)));
              }
              for (int32_T b_i{scalarLB}; b_i <= i; b_i++) {
                jA = (b_j + b_i) + 1;
                x[jA] -= x[b_j] * b_A[(jjA + b_i) + 1];
              }
            }
            c_st.site = &up_emlrtRSI;
            for (int32_T b_j{2}; b_j >= 0; b_j--) {
              jjA = b_j + b_j * 3;
              x[b_j] /= b_A[jjA];
              for (int32_T b_i{0}; b_i < b_j; b_i++) {
                jA = (b_j - b_i) - 1;
                x[jA] -= x[b_j] * b_A[(jjA - b_i) - 1];
              }
            }
          } else {
            c_st.site = &vp_emlrtRSI;
            for (int32_T b_j{0}; b_j < 3; b_j++) {
              jA = b_j * 3;
              s = x[b_j];
              for (int32_T b_i{0}; b_i < b_j; b_i++) {
                s -= b_A[jA + b_i] * x[b_i];
              }
              x[b_j] = s / b_A[jA + b_j];
            }
            for (int32_T b_j{2}; b_j >= 0; b_j--) {
              int32_T i;
              jA = b_j * 3;
              s = x[b_j];
              i = b_j + 2;
              for (int32_T b_i{3}; b_i >= i; b_i--) {
                s -= b_A[(jA + b_i) - 1] * x[b_i - 1];
              }
              x[b_j] = s;
            }
          }
          if (jump == 1) {
            real_T absrexk;
            real_T ainvnm_tmp;
            s = muDoubleScalarAbs(x[0]);
            absrexk = muDoubleScalarAbs(x[1]);
            ainvnm_tmp = muDoubleScalarAbs(x[2]);
            ainvnm = (s + absrexk) + ainvnm_tmp;
            if ((!muDoubleScalarIsInf(ainvnm)) &&
                (!muDoubleScalarIsNaN(ainvnm))) {
              if (s > 2.2250738585072014E-308) {
                x[0] /= s;
              } else {
                x[0] = 1.0;
              }
              if (absrexk > 2.2250738585072014E-308) {
                x[1] /= absrexk;
              } else {
                x[1] = 1.0;
              }
              if (ainvnm_tmp > 2.2250738585072014E-308) {
                x[2] /= ainvnm_tmp;
              } else {
                x[2] = 1.0;
              }
              kase = 2;
              jump = 2;
            } else {
              exitg3 = 1;
            }
          } else if (jump == 2) {
            real_T absrexk;
            j = 0;
            s = muDoubleScalarAbs(x[0]);
            absrexk = muDoubleScalarAbs(x[1]);
            if (!(absrexk <= s)) {
              j = 1;
              s = absrexk;
            }
            if (!(muDoubleScalarAbs(x[2]) <= s)) {
              j = 2;
            }
            iter = 2;
            x[0] = 0.0;
            x[1] = 0.0;
            x[2] = 0.0;
            x[j] = 1.0;
            kase = 1;
            jump = 3;
          } else if (jump == 3) {
            real_T absrexk;
            real_T ainvnm_tmp;
            s = muDoubleScalarAbs(x[0]);
            absrexk = muDoubleScalarAbs(x[1]);
            ainvnm_tmp = muDoubleScalarAbs(x[2]);
            ainvnm = (s + absrexk) + ainvnm_tmp;
            if (ainvnm <= x[0]) {
              x[0] = 1.0;
              x[1] = -1.5;
              x[2] = 2.0;
              kase = 1;
              jump = 5;
            } else {
              if (s > 2.2250738585072014E-308) {
                x[0] /= s;
              } else {
                x[0] = 1.0;
              }
              if (absrexk > 2.2250738585072014E-308) {
                x[1] /= absrexk;
              } else {
                x[1] = 1.0;
              }
              if (ainvnm_tmp > 2.2250738585072014E-308) {
                x[2] /= ainvnm_tmp;
              } else {
                x[2] = 1.0;
              }
              kase = 2;
              jump = 4;
            }
          } else if (jump == 4) {
            real_T absrexk;
            jA = j;
            j = 0;
            s = muDoubleScalarAbs(x[0]);
            absrexk = muDoubleScalarAbs(x[1]);
            if (!(absrexk <= s)) {
              j = 1;
              s = absrexk;
            }
            if (!(muDoubleScalarAbs(x[2]) <= s)) {
              j = 2;
            }
            if ((muDoubleScalarAbs(x[jA]) != muDoubleScalarAbs(x[j])) &&
                (iter <= 5)) {
              iter++;
              x[0] = 0.0;
              x[1] = 0.0;
              x[2] = 0.0;
              x[j] = 1.0;
              kase = 1;
              jump = 3;
            } else {
              x[0] = 1.0;
              x[1] = -1.5;
              x[2] = 2.0;
              kase = 1;
              jump = 5;
            }
          } else if (jump == 5) {
            s = 2.0 *
                ((muDoubleScalarAbs(x[0]) + muDoubleScalarAbs(x[1])) +
                 muDoubleScalarAbs(x[2])) /
                3.0 / 3.0;
            if (s > ainvnm) {
              ainvnm = s;
            }
            exitg3 = 1;
          }
        } while (exitg3 == 0);
        if (ainvnm != 0.0) {
          rc = 1.0 / ainvnm / normA;
        }
        if (muDoubleScalarIsNaN(rc)) {
          c_st.site = &wp_emlrtRSI;
          tf = false;
          for (jA = 0; jA < 9; jA++) {
            if (tf || muDoubleScalarIsNaN(b_A[jA])) {
              tf = true;
            }
          }
          if (!tf) {
            rc = 0.0;
          }
        }
        exitg2 = 1;
      }
    } while (exitg2 == 0);
  }
  return rc < 2.2204460492503131E-16;
}

void c_checkTransformationMatrixCond(const emlrtStack &sp, const real_T A[16])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T c_A[16];
  real_T b_x[4];
  int32_T jA;
  boolean_T x[3];
  boolean_T exitg1;
  boolean_T y;
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
  x[0] = (A[3] == 0.0);
  x[1] = (A[7] == 0.0);
  x[2] = (A[11] == 0.0);
  y = true;
  jA = 0;
  exitg1 = false;
  while ((!exitg1) && (jA <= 2)) {
    if (!x[jA]) {
      y = false;
      exitg1 = true;
    } else {
      jA++;
    }
  }
  if (y) {
    real_T b_A[9];
    for (int32_T i{0}; i < 3; i++) {
      jA = i << 2;
      b_A[3 * i] = A[jA];
      b_A[3 * i + 1] = A[jA + 1];
      b_A[3 * i + 2] = A[jA + 2];
    }
    st.site = &pp_emlrtRSI;
    y = isBadlyConditioned(st, b_A);
  } else {
    real_T normA;
    real_T rc;
    real_T s;
    int32_T j;
    st.site = &qp_emlrtRSI;
    b_st.site = &rp_emlrtRSI;
    c_st.site = &sp_emlrtRSI;
    rc = 0.0;
    normA = 0.0;
    j = 0;
    exitg1 = false;
    while ((!exitg1) && (j < 4)) {
      jA = j << 2;
      s = ((muDoubleScalarAbs(A[jA]) + muDoubleScalarAbs(A[jA + 1])) +
           muDoubleScalarAbs(A[jA + 2])) +
          muDoubleScalarAbs(A[jA + 3]);
      if (muDoubleScalarIsNaN(s)) {
        normA = rtNaN;
        exitg1 = true;
      } else {
        if (s > normA) {
          normA = s;
        }
        j++;
      }
    }
    if (!(normA == 0.0)) {
      int32_T ipiv[4];
      d_st.site = &xp_emlrtRSI;
      std::copy(&A[0], &A[16], &c_A[0]);
      e_st.site = &yp_emlrtRSI;
      ::coder::internal::reflapack::b_xzgetrf(e_st, c_A, ipiv);
      jA = 3;
      int32_T exitg2;
      do {
        exitg2 = 0;
        if (jA + 1 > 0) {
          if (c_A[jA + (jA << 2)] == 0.0) {
            exitg2 = 1;
          } else {
            jA--;
          }
        } else {
          real_T ainvnm;
          int32_T iter;
          int32_T jump;
          int32_T kase;
          ainvnm = 0.0;
          iter = 2;
          kase = 1;
          jump = 1;
          j = 0;
          b_x[0] = 0.25;
          b_x[1] = 0.25;
          b_x[2] = 0.25;
          b_x[3] = 0.25;
          int32_T exitg3;
          do {
            exitg3 = 0;
            if (kase == 1) {
              int32_T jjA;
              d_st.site = &tp_emlrtRSI;
              for (int32_T b_j{0}; b_j < 4; b_j++) {
                int32_T i;
                int32_T scalarLB;
                jjA = b_j + (b_j << 2);
                i = 2 - b_j;
                scalarLB = ((3 - b_j) / 2) << 1;
                jA = scalarLB - 2;
                for (int32_T b_i{0}; b_i <= jA; b_i += 2) {
                  __m128d b_r;
                  __m128d r1;
                  b_r = _mm_loadu_pd(&c_A[jjA + 1]);
                  r1 = _mm_loadu_pd(&b_x[b_j + 1]);
                  _mm_storeu_pd(
                      &b_x[b_j + 1],
                      _mm_sub_pd(r1, _mm_mul_pd(_mm_set1_pd(b_x[b_j]), b_r)));
                }
                for (int32_T b_i{scalarLB}; b_i <= i; b_i++) {
                  jA = (b_j + b_i) + 1;
                  b_x[jA] -= b_x[b_j] * c_A[(jjA + b_i) + 1];
                }
              }
              d_st.site = &up_emlrtRSI;
              for (int32_T b_j{3}; b_j >= 0; b_j--) {
                jjA = b_j + (b_j << 2);
                b_x[b_j] /= c_A[jjA];
                for (int32_T b_i{0}; b_i < b_j; b_i++) {
                  jA = (b_j - b_i) - 1;
                  b_x[jA] -= b_x[b_j] * c_A[(jjA - b_i) - 1];
                }
              }
            } else {
              d_st.site = &vp_emlrtRSI;
              for (int32_T b_j{0}; b_j < 4; b_j++) {
                jA = b_j << 2;
                s = b_x[b_j];
                for (int32_T b_i{0}; b_i < b_j; b_i++) {
                  s -= c_A[jA + b_i] * b_x[b_i];
                }
                b_x[b_j] = s / c_A[jA + b_j];
              }
              for (int32_T b_j{3}; b_j >= 0; b_j--) {
                int32_T i;
                jA = b_j << 2;
                s = b_x[b_j];
                i = b_j + 2;
                for (int32_T b_i{4}; b_i >= i; b_i--) {
                  s -= c_A[(jA + b_i) - 1] * b_x[b_i - 1];
                }
                b_x[b_j] = s;
              }
            }
            if (jump == 1) {
              real_T absrexk;
              real_T ainvnm_tmp;
              real_T b_ainvnm_tmp;
              s = muDoubleScalarAbs(b_x[0]);
              absrexk = muDoubleScalarAbs(b_x[1]);
              ainvnm_tmp = muDoubleScalarAbs(b_x[2]);
              b_ainvnm_tmp = muDoubleScalarAbs(b_x[3]);
              ainvnm = ((s + absrexk) + ainvnm_tmp) + b_ainvnm_tmp;
              if ((!muDoubleScalarIsInf(ainvnm)) &&
                  (!muDoubleScalarIsNaN(ainvnm))) {
                if (s > 2.2250738585072014E-308) {
                  b_x[0] /= s;
                } else {
                  b_x[0] = 1.0;
                }
                if (absrexk > 2.2250738585072014E-308) {
                  b_x[1] /= absrexk;
                } else {
                  b_x[1] = 1.0;
                }
                if (ainvnm_tmp > 2.2250738585072014E-308) {
                  b_x[2] /= ainvnm_tmp;
                } else {
                  b_x[2] = 1.0;
                }
                if (b_ainvnm_tmp > 2.2250738585072014E-308) {
                  b_x[3] /= b_ainvnm_tmp;
                } else {
                  b_x[3] = 1.0;
                }
                kase = 2;
                jump = 2;
              } else {
                exitg3 = 1;
              }
            } else if (jump == 2) {
              real_T absrexk;
              j = 0;
              s = muDoubleScalarAbs(b_x[0]);
              absrexk = muDoubleScalarAbs(b_x[1]);
              if (!(absrexk <= s)) {
                j = 1;
                s = absrexk;
              }
              absrexk = muDoubleScalarAbs(b_x[2]);
              if (!(absrexk <= s)) {
                j = 2;
                s = absrexk;
              }
              if (!(muDoubleScalarAbs(b_x[3]) <= s)) {
                j = 3;
              }
              iter = 2;
              b_x[0] = 0.0;
              b_x[1] = 0.0;
              b_x[2] = 0.0;
              b_x[3] = 0.0;
              b_x[j] = 1.0;
              kase = 1;
              jump = 3;
            } else if (jump == 3) {
              real_T absrexk;
              real_T ainvnm_tmp;
              real_T b_ainvnm_tmp;
              s = muDoubleScalarAbs(b_x[0]);
              absrexk = muDoubleScalarAbs(b_x[1]);
              ainvnm_tmp = muDoubleScalarAbs(b_x[2]);
              b_ainvnm_tmp = muDoubleScalarAbs(b_x[3]);
              ainvnm = ((s + absrexk) + ainvnm_tmp) + b_ainvnm_tmp;
              if (ainvnm <= b_x[0]) {
                b_x[0] = 1.0;
                b_x[1] = -1.3333333333333333;
                b_x[2] = 1.6666666666666665;
                b_x[3] = -2.0;
                kase = 1;
                jump = 5;
              } else {
                if (s > 2.2250738585072014E-308) {
                  b_x[0] /= s;
                } else {
                  b_x[0] = 1.0;
                }
                if (absrexk > 2.2250738585072014E-308) {
                  b_x[1] /= absrexk;
                } else {
                  b_x[1] = 1.0;
                }
                if (ainvnm_tmp > 2.2250738585072014E-308) {
                  b_x[2] /= ainvnm_tmp;
                } else {
                  b_x[2] = 1.0;
                }
                if (b_ainvnm_tmp > 2.2250738585072014E-308) {
                  b_x[3] /= b_ainvnm_tmp;
                } else {
                  b_x[3] = 1.0;
                }
                kase = 2;
                jump = 4;
              }
            } else if (jump == 4) {
              real_T absrexk;
              jA = j;
              j = 0;
              s = muDoubleScalarAbs(b_x[0]);
              absrexk = muDoubleScalarAbs(b_x[1]);
              if (!(absrexk <= s)) {
                j = 1;
                s = absrexk;
              }
              absrexk = muDoubleScalarAbs(b_x[2]);
              if (!(absrexk <= s)) {
                j = 2;
                s = absrexk;
              }
              if (!(muDoubleScalarAbs(b_x[3]) <= s)) {
                j = 3;
              }
              if ((muDoubleScalarAbs(b_x[jA]) != muDoubleScalarAbs(b_x[j])) &&
                  (iter <= 5)) {
                iter++;
                b_x[0] = 0.0;
                b_x[1] = 0.0;
                b_x[2] = 0.0;
                b_x[3] = 0.0;
                b_x[j] = 1.0;
                kase = 1;
                jump = 3;
              } else {
                b_x[0] = 1.0;
                b_x[1] = -1.3333333333333333;
                b_x[2] = 1.6666666666666665;
                b_x[3] = -2.0;
                kase = 1;
                jump = 5;
              }
            } else if (jump == 5) {
              s = 2.0 *
                  (((muDoubleScalarAbs(b_x[0]) + muDoubleScalarAbs(b_x[1])) +
                    muDoubleScalarAbs(b_x[2])) +
                   muDoubleScalarAbs(b_x[3])) /
                  3.0 / 4.0;
              if (s > ainvnm) {
                ainvnm = s;
              }
              exitg3 = 1;
            }
          } while (exitg3 == 0);
          if (ainvnm != 0.0) {
            rc = 1.0 / ainvnm / normA;
          }
          if (muDoubleScalarIsNaN(rc)) {
            d_st.site = &wp_emlrtRSI;
            y = false;
            for (jA = 0; jA < 16; jA++) {
              if (y || muDoubleScalarIsNaN(c_A[jA])) {
                y = true;
              }
            }
            if (!y) {
              rc = 0.0;
            }
          }
          exitg2 = 1;
        }
      } while (exitg2 == 0);
    }
    y = (rc < 2.2204460492503131E-16);
  }
  st.site = &bh_emlrtRSI;
  if (y) {
    b_st.site = &ch_emlrtRSI;
    ::coder::internal::warning(b_st);
  }
}

void c_checkTransformationMatrixCond(const emlrtStack &sp, const real32_T A[16])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T jA;
  real32_T c_A[16];
  boolean_T x[3];
  boolean_T exitg1;
  boolean_T y;
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
  x[0] = (A[3] == 0.0F);
  x[1] = (A[7] == 0.0F);
  x[2] = (A[11] == 0.0F);
  y = true;
  jA = 0;
  exitg1 = false;
  while ((!exitg1) && (jA <= 2)) {
    if (!x[jA]) {
      y = false;
      exitg1 = true;
    } else {
      jA++;
    }
  }
  if (y) {
    real32_T b_A[9];
    for (int32_T i{0}; i < 3; i++) {
      jA = i << 2;
      b_A[3 * i] = A[jA];
      b_A[3 * i + 1] = A[jA + 1];
      b_A[3 * i + 2] = A[jA + 2];
    }
    st.site = &pp_emlrtRSI;
    y = isBadlyConditioned(st, b_A);
  } else {
    int32_T j;
    real32_T normA;
    real32_T rc;
    real32_T s;
    st.site = &qp_emlrtRSI;
    b_st.site = &rp_emlrtRSI;
    c_st.site = &sp_emlrtRSI;
    rc = 0.0F;
    normA = 0.0F;
    j = 0;
    exitg1 = false;
    while ((!exitg1) && (j < 4)) {
      jA = j << 2;
      s = ((muSingleScalarAbs(A[jA]) + muSingleScalarAbs(A[jA + 1])) +
           muSingleScalarAbs(A[jA + 2])) +
          muSingleScalarAbs(A[jA + 3]);
      if (muSingleScalarIsNaN(s)) {
        normA = rtNaNF;
        exitg1 = true;
      } else {
        if (s > normA) {
          normA = s;
        }
        j++;
      }
    }
    if (!(normA == 0.0F)) {
      int32_T ipiv[4];
      d_st.site = &xp_emlrtRSI;
      std::copy(&A[0], &A[16], &c_A[0]);
      e_st.site = &yp_emlrtRSI;
      ::coder::internal::reflapack::b_xzgetrf(e_st, c_A, ipiv);
      jA = 3;
      int32_T exitg2;
      do {
        exitg2 = 0;
        if (jA + 1 > 0) {
          if (c_A[jA + (jA << 2)] == 0.0F) {
            exitg2 = 1;
          } else {
            jA--;
          }
        } else {
          int32_T iter;
          int32_T jump;
          int32_T kase;
          real32_T b_x[4];
          real32_T ainvnm;
          ainvnm = 0.0F;
          iter = 2;
          kase = 1;
          jump = 1;
          j = 0;
          b_x[0] = 0.25F;
          b_x[1] = 0.25F;
          b_x[2] = 0.25F;
          b_x[3] = 0.25F;
          int32_T exitg3;
          do {
            exitg3 = 0;
            if (kase == 1) {
              int32_T ix;
              d_st.site = &tp_emlrtRSI;
              for (int32_T b_j{0}; b_j < 4; b_j++) {
                int32_T i;
                jA = b_j + (b_j << 2);
                i = 2 - b_j;
                for (int32_T b_i{0}; b_i <= i; b_i++) {
                  ix = (b_j + b_i) + 1;
                  b_x[ix] -= b_x[b_j] * c_A[(jA + b_i) + 1];
                }
              }
              d_st.site = &up_emlrtRSI;
              for (int32_T b_j{3}; b_j >= 0; b_j--) {
                jA = b_j + (b_j << 2);
                b_x[b_j] /= c_A[jA];
                for (int32_T b_i{0}; b_i < b_j; b_i++) {
                  ix = (b_j - b_i) - 1;
                  b_x[ix] -= b_x[b_j] * c_A[(jA - b_i) - 1];
                }
              }
            } else {
              d_st.site = &vp_emlrtRSI;
              for (int32_T b_j{0}; b_j < 4; b_j++) {
                jA = b_j << 2;
                s = b_x[b_j];
                for (int32_T b_i{0}; b_i < b_j; b_i++) {
                  s -= c_A[jA + b_i] * b_x[b_i];
                }
                b_x[b_j] = s / c_A[jA + b_j];
              }
              for (int32_T b_j{3}; b_j >= 0; b_j--) {
                int32_T i;
                jA = b_j << 2;
                s = b_x[b_j];
                i = b_j + 2;
                for (int32_T b_i{4}; b_i >= i; b_i--) {
                  s -= c_A[(jA + b_i) - 1] * b_x[b_i - 1];
                }
                b_x[b_j] = s;
              }
            }
            if (jump == 1) {
              real32_T absrexk;
              real32_T ainvnm_tmp;
              real32_T b_ainvnm_tmp;
              s = muSingleScalarAbs(b_x[0]);
              absrexk = muSingleScalarAbs(b_x[1]);
              ainvnm_tmp = muSingleScalarAbs(b_x[2]);
              b_ainvnm_tmp = muSingleScalarAbs(b_x[3]);
              ainvnm = ((s + absrexk) + ainvnm_tmp) + b_ainvnm_tmp;
              if ((!muSingleScalarIsInf(ainvnm)) &&
                  (!muSingleScalarIsNaN(ainvnm))) {
                if (s > 1.17549435E-38F) {
                  b_x[0] /= s;
                } else {
                  b_x[0] = 1.0F;
                }
                if (absrexk > 1.17549435E-38F) {
                  b_x[1] /= absrexk;
                } else {
                  b_x[1] = 1.0F;
                }
                if (ainvnm_tmp > 1.17549435E-38F) {
                  b_x[2] /= ainvnm_tmp;
                } else {
                  b_x[2] = 1.0F;
                }
                if (b_ainvnm_tmp > 1.17549435E-38F) {
                  b_x[3] /= b_ainvnm_tmp;
                } else {
                  b_x[3] = 1.0F;
                }
                kase = 2;
                jump = 2;
              } else {
                exitg3 = 1;
              }
            } else if (jump == 2) {
              real32_T absrexk;
              j = 0;
              s = muSingleScalarAbs(b_x[0]);
              absrexk = muSingleScalarAbs(b_x[1]);
              if (!(absrexk <= s)) {
                j = 1;
                s = absrexk;
              }
              absrexk = muSingleScalarAbs(b_x[2]);
              if (!(absrexk <= s)) {
                j = 2;
                s = absrexk;
              }
              if (!(muSingleScalarAbs(b_x[3]) <= s)) {
                j = 3;
              }
              iter = 2;
              b_x[0] = 0.0F;
              b_x[1] = 0.0F;
              b_x[2] = 0.0F;
              b_x[3] = 0.0F;
              b_x[j] = 1.0F;
              kase = 1;
              jump = 3;
            } else if (jump == 3) {
              real32_T absrexk;
              real32_T ainvnm_tmp;
              real32_T b_ainvnm_tmp;
              s = muSingleScalarAbs(b_x[0]);
              absrexk = muSingleScalarAbs(b_x[1]);
              ainvnm_tmp = muSingleScalarAbs(b_x[2]);
              b_ainvnm_tmp = muSingleScalarAbs(b_x[3]);
              ainvnm = ((s + absrexk) + ainvnm_tmp) + b_ainvnm_tmp;
              if (ainvnm <= b_x[0]) {
                b_x[0] = 1.0F;
                b_x[1] = -1.33333337F;
                b_x[2] = 1.66666675F;
                b_x[3] = -2.0F;
                kase = 1;
                jump = 5;
              } else {
                if (s > 1.17549435E-38F) {
                  b_x[0] /= s;
                } else {
                  b_x[0] = 1.0F;
                }
                if (absrexk > 1.17549435E-38F) {
                  b_x[1] /= absrexk;
                } else {
                  b_x[1] = 1.0F;
                }
                if (ainvnm_tmp > 1.17549435E-38F) {
                  b_x[2] /= ainvnm_tmp;
                } else {
                  b_x[2] = 1.0F;
                }
                if (b_ainvnm_tmp > 1.17549435E-38F) {
                  b_x[3] /= b_ainvnm_tmp;
                } else {
                  b_x[3] = 1.0F;
                }
                kase = 2;
                jump = 4;
              }
            } else if (jump == 4) {
              real32_T absrexk;
              jA = j;
              j = 0;
              s = muSingleScalarAbs(b_x[0]);
              absrexk = muSingleScalarAbs(b_x[1]);
              if (!(absrexk <= s)) {
                j = 1;
                s = absrexk;
              }
              absrexk = muSingleScalarAbs(b_x[2]);
              if (!(absrexk <= s)) {
                j = 2;
                s = absrexk;
              }
              if (!(muSingleScalarAbs(b_x[3]) <= s)) {
                j = 3;
              }
              if ((muSingleScalarAbs(b_x[jA]) != muSingleScalarAbs(b_x[j])) &&
                  (iter <= 5)) {
                iter++;
                b_x[0] = 0.0F;
                b_x[1] = 0.0F;
                b_x[2] = 0.0F;
                b_x[3] = 0.0F;
                b_x[j] = 1.0F;
                kase = 1;
                jump = 3;
              } else {
                b_x[0] = 1.0F;
                b_x[1] = -1.33333337F;
                b_x[2] = 1.66666675F;
                b_x[3] = -2.0F;
                kase = 1;
                jump = 5;
              }
            } else if (jump == 5) {
              s = 2.0F *
                  (((muSingleScalarAbs(b_x[0]) + muSingleScalarAbs(b_x[1])) +
                    muSingleScalarAbs(b_x[2])) +
                   muSingleScalarAbs(b_x[3])) /
                  3.0F / 4.0F;
              if (s > ainvnm) {
                ainvnm = s;
              }
              exitg3 = 1;
            }
          } while (exitg3 == 0);
          if (ainvnm != 0.0F) {
            rc = 1.0F / ainvnm / normA;
          }
          if (muSingleScalarIsNaN(rc)) {
            d_st.site = &wp_emlrtRSI;
            y = false;
            for (jA = 0; jA < 16; jA++) {
              if (y || muSingleScalarIsNaN(c_A[jA])) {
                y = true;
              }
            }
            if (!y) {
              rc = 0.0F;
            }
          }
          exitg2 = 1;
        }
      } while (exitg2 == 0);
    }
    y = (rc < 1.1920929E-7F);
  }
  st.site = &bh_emlrtRSI;
  if (y) {
    b_st.site = &ch_emlrtRSI;
    ::coder::internal::warning(b_st);
  }
}

boolean_T isBadlyConditioned(const emlrtStack &sp, const real32_T A[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T j;
  real32_T normA;
  real32_T rc;
  real32_T s;
  boolean_T exitg1;
  boolean_T tf;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &rp_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &sp_emlrtRSI;
  rc = 0.0F;
  normA = 0.0F;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 3)) {
    s = (muSingleScalarAbs(A[3 * j]) + muSingleScalarAbs(A[3 * j + 1])) +
        muSingleScalarAbs(A[3 * j + 2]);
    if (muSingleScalarIsNaN(s)) {
      normA = rtNaNF;
      exitg1 = true;
    } else {
      if (s > normA) {
        normA = s;
      }
      j++;
    }
  }
  if (!(normA == 0.0F)) {
    int32_T i;
    int32_T jA;
    real32_T b_A[9];
    c_st.site = &xp_emlrtRSI;
    for (i = 0; i < 9; i++) {
      b_A[i] = A[i];
    }
    int32_T ipiv[3];
    d_st.site = &yp_emlrtRSI;
    ::coder::internal::reflapack::xzgetrf(d_st, b_A, ipiv);
    jA = 2;
    int32_T exitg2;
    do {
      exitg2 = 0;
      if (jA + 1 > 0) {
        if (b_A[jA + 3 * jA] == 0.0F) {
          exitg2 = 1;
        } else {
          jA--;
        }
      } else {
        int32_T iter;
        int32_T jump;
        int32_T kase;
        real32_T x[3];
        real32_T ainvnm;
        ainvnm = 0.0F;
        iter = 2;
        kase = 1;
        jump = 1;
        j = 0;
        x[0] = 0.333333343F;
        x[1] = 0.333333343F;
        x[2] = 0.333333343F;
        int32_T exitg3;
        do {
          exitg3 = 0;
          if (kase == 1) {
            int32_T ix;
            c_st.site = &tp_emlrtRSI;
            for (int32_T b_j{0}; b_j < 3; b_j++) {
              jA = b_j + b_j * 3;
              i = 1 - b_j;
              for (int32_T b_i{0}; b_i <= i; b_i++) {
                ix = (b_j + b_i) + 1;
                x[ix] -= x[b_j] * b_A[(jA + b_i) + 1];
              }
            }
            c_st.site = &up_emlrtRSI;
            for (int32_T b_j{2}; b_j >= 0; b_j--) {
              jA = b_j + b_j * 3;
              x[b_j] /= b_A[jA];
              for (int32_T b_i{0}; b_i < b_j; b_i++) {
                ix = (b_j - b_i) - 1;
                x[ix] -= x[b_j] * b_A[(jA - b_i) - 1];
              }
            }
          } else {
            c_st.site = &vp_emlrtRSI;
            for (int32_T b_j{0}; b_j < 3; b_j++) {
              jA = b_j * 3;
              s = x[b_j];
              for (int32_T b_i{0}; b_i < b_j; b_i++) {
                s -= b_A[jA + b_i] * x[b_i];
              }
              x[b_j] = s / b_A[jA + b_j];
            }
            for (int32_T b_j{2}; b_j >= 0; b_j--) {
              jA = b_j * 3;
              s = x[b_j];
              i = b_j + 2;
              for (int32_T b_i{3}; b_i >= i; b_i--) {
                s -= b_A[(jA + b_i) - 1] * x[b_i - 1];
              }
              x[b_j] = s;
            }
          }
          if (jump == 1) {
            real32_T absrexk;
            real32_T ainvnm_tmp;
            s = muSingleScalarAbs(x[0]);
            absrexk = muSingleScalarAbs(x[1]);
            ainvnm_tmp = muSingleScalarAbs(x[2]);
            ainvnm = (s + absrexk) + ainvnm_tmp;
            if ((!muSingleScalarIsInf(ainvnm)) &&
                (!muSingleScalarIsNaN(ainvnm))) {
              if (s > 1.17549435E-38F) {
                x[0] /= s;
              } else {
                x[0] = 1.0F;
              }
              if (absrexk > 1.17549435E-38F) {
                x[1] /= absrexk;
              } else {
                x[1] = 1.0F;
              }
              if (ainvnm_tmp > 1.17549435E-38F) {
                x[2] /= ainvnm_tmp;
              } else {
                x[2] = 1.0F;
              }
              kase = 2;
              jump = 2;
            } else {
              exitg3 = 1;
            }
          } else if (jump == 2) {
            real32_T absrexk;
            j = 0;
            s = muSingleScalarAbs(x[0]);
            absrexk = muSingleScalarAbs(x[1]);
            if (!(absrexk <= s)) {
              j = 1;
              s = absrexk;
            }
            if (!(muSingleScalarAbs(x[2]) <= s)) {
              j = 2;
            }
            iter = 2;
            x[0] = 0.0F;
            x[1] = 0.0F;
            x[2] = 0.0F;
            x[j] = 1.0F;
            kase = 1;
            jump = 3;
          } else if (jump == 3) {
            real32_T absrexk;
            real32_T ainvnm_tmp;
            s = muSingleScalarAbs(x[0]);
            absrexk = muSingleScalarAbs(x[1]);
            ainvnm_tmp = muSingleScalarAbs(x[2]);
            ainvnm = (s + absrexk) + ainvnm_tmp;
            if (ainvnm <= x[0]) {
              x[0] = 1.0F;
              x[1] = -1.5F;
              x[2] = 2.0F;
              kase = 1;
              jump = 5;
            } else {
              if (s > 1.17549435E-38F) {
                x[0] /= s;
              } else {
                x[0] = 1.0F;
              }
              if (absrexk > 1.17549435E-38F) {
                x[1] /= absrexk;
              } else {
                x[1] = 1.0F;
              }
              if (ainvnm_tmp > 1.17549435E-38F) {
                x[2] /= ainvnm_tmp;
              } else {
                x[2] = 1.0F;
              }
              kase = 2;
              jump = 4;
            }
          } else if (jump == 4) {
            real32_T absrexk;
            jA = j;
            j = 0;
            s = muSingleScalarAbs(x[0]);
            absrexk = muSingleScalarAbs(x[1]);
            if (!(absrexk <= s)) {
              j = 1;
              s = absrexk;
            }
            if (!(muSingleScalarAbs(x[2]) <= s)) {
              j = 2;
            }
            if ((muSingleScalarAbs(x[jA]) != muSingleScalarAbs(x[j])) &&
                (iter <= 5)) {
              iter++;
              x[0] = 0.0F;
              x[1] = 0.0F;
              x[2] = 0.0F;
              x[j] = 1.0F;
              kase = 1;
              jump = 3;
            } else {
              x[0] = 1.0F;
              x[1] = -1.5F;
              x[2] = 2.0F;
              kase = 1;
              jump = 5;
            }
          } else if (jump == 5) {
            s = 2.0F *
                ((muSingleScalarAbs(x[0]) + muSingleScalarAbs(x[1])) +
                 muSingleScalarAbs(x[2])) /
                3.0F / 3.0F;
            if (s > ainvnm) {
              ainvnm = s;
            }
            exitg3 = 1;
          }
        } while (exitg3 == 0);
        if (ainvnm != 0.0F) {
          rc = 1.0F / ainvnm / normA;
        }
        if (muSingleScalarIsNaN(rc)) {
          c_st.site = &wp_emlrtRSI;
          tf = false;
          for (jA = 0; jA < 9; jA++) {
            if (tf || muSingleScalarIsNaN(b_A[jA])) {
              tf = true;
            }
          }
          if (!tf) {
            rc = 0.0F;
          }
        }
        exitg2 = 1;
      }
    } while (exitg2 == 0);
  }
  return rc < 1.1920929E-7F;
}

} // namespace internal
} // namespace geotrans
} // namespace images
} // namespace coder

// End of code generation (checkTransformationMatrixCondition.cpp)
