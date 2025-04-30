//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// acosd.cpp
//
// Code generation for function 'acosd'
//

// Include files
#include "acosd.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "sqrt1.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo loc_emlrtRSI{
    16,      // lineNo
    "acosd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\acosd.m" // pathName
};

// Function Definitions
namespace coder {
void b_acosd(const emlrtStack &sp, array<creal32_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  creal32_T u;
  creal32_T v;
  int32_T nx;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &loc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x.size(0);
  b_st.site = &qo_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{0}; k < nx; k++) {
    real32_T absim;
    real32_T absre;
    absre = x[k].re;
    absim = x[k].im;
    if ((absim == 0.0F) && (!(muSingleScalarAbs(absre) > 1.0F))) {
      v.re = muSingleScalarAcos(absre);
      v.im = 0.0F;
    } else {
      real32_T ar_tmp_tmp;
      real32_T ci;
      boolean_T xneg;
      v.re = absre + 1.0F;
      v.im = absim;
      internal::scalar::c_sqrt(v);
      u.re = 1.0F - absre;
      u.im = 0.0F - absim;
      internal::scalar::c_sqrt(u);
      ar_tmp_tmp = v.re;
      if ((-v.im == 0.0F) && (u.im == 0.0F)) {
        ci = 0.0F;
      } else {
        real32_T t3;
        real32_T t4;
        boolean_T b;
        t3 = v.re * u.im;
        t4 = -v.im * u.re;
        ci = t3 + t4;
        xneg = muSingleScalarIsNaN(ci);
        b = muSingleScalarIsInf(ci);
        if ((b || xneg) && (!muSingleScalarIsNaN(v.re)) &&
            (!muSingleScalarIsNaN(-v.im)) && (!muSingleScalarIsNaN(u.re)) &&
            (!muSingleScalarIsNaN(u.im))) {
          real32_T b_absre;
          real32_T sai;
          real32_T sar;
          real32_T sbi;
          real32_T sbr;
          boolean_T b1;
          boolean_T finiteScale;
          absre = muSingleScalarAbs(v.re);
          absim = muSingleScalarAbs(-v.im);
          if (absre > absim) {
            if (v.re < 0.0F) {
              sar = -1.0F;
            } else {
              sar = 1.0F;
            }
            sai = -v.im / absre;
          } else if (absim > absre) {
            sar = v.re / absim;
            if (-v.im < 0.0F) {
              sai = -1.0F;
            } else {
              sai = 1.0F;
            }
            absre = absim;
          } else {
            if (v.re < 0.0F) {
              sar = -1.0F;
            } else {
              sar = 1.0F;
            }
            if (-v.im < 0.0F) {
              sai = -1.0F;
            } else {
              sai = 1.0F;
            }
          }
          b_absre = muSingleScalarAbs(u.re);
          absim = muSingleScalarAbs(u.im);
          if (b_absre > absim) {
            if (u.re < 0.0F) {
              sbr = -1.0F;
            } else {
              sbr = 1.0F;
            }
            sbi = u.im / b_absre;
          } else if (absim > b_absre) {
            sbr = u.re / absim;
            if (u.im < 0.0F) {
              sbi = -1.0F;
            } else {
              sbi = 1.0F;
            }
            b_absre = absim;
          } else {
            if (u.re < 0.0F) {
              sbr = -1.0F;
            } else {
              sbr = 1.0F;
            }
            if (u.im < 0.0F) {
              sbi = -1.0F;
            } else {
              sbi = 1.0F;
            }
          }
          b1 = muSingleScalarIsInf(absre);
          if ((!b1) && (!muSingleScalarIsNaN(absre)) &&
              ((!muSingleScalarIsInf(b_absre)) &&
               (!muSingleScalarIsNaN(b_absre)))) {
            finiteScale = true;
          } else {
            finiteScale = false;
          }
          if (xneg || (b && finiteScale)) {
            ci = sar * sbi + sai * sbr;
            if (ci != 0.0F) {
              ci = ci * absre * b_absre;
            } else if ((b1 && ((u.re == 0.0F) || (u.im == 0.0F))) ||
                       (muSingleScalarIsInf(b_absre) &&
                        ((v.re == 0.0F) || (-v.im == 0.0F)))) {
              if (muSingleScalarIsNaN(t3)) {
                t3 = 0.0F;
              }
              if (muSingleScalarIsNaN(t4)) {
                t4 = 0.0F;
              }
              ci = t3 + t4;
            }
          }
        }
      }
      xneg = (ci < 0.0F);
      if (xneg) {
        ci = -ci;
      }
      if (ci >= 2.68435456E+8F) {
        ci = muSingleScalarLog(ci) + 0.693147182F;
      } else if (ci > 2.0F) {
        ci = muSingleScalarLog(
            2.0F * ci + 1.0F / (muSingleScalarSqrt(ci * ci + 1.0F) + ci));
      } else {
        absre = ci * ci;
        ci += absre / (muSingleScalarSqrt(absre + 1.0F) + 1.0F);
        absim = muSingleScalarAbs(ci);
        if ((absim > 8.388608E+6F) ||
            (muSingleScalarIsInf(ci) || muSingleScalarIsNaN(ci))) {
          ci++;
          ci = muSingleScalarLog(ci);
        } else if (!(absim < 1.1920929E-7F)) {
          ci = muSingleScalarLog(ci + 1.0F) * (ci / ((ci + 1.0F) - 1.0F));
        }
      }
      if (xneg) {
        ci = -ci;
      }
      v.re = 2.0F * muSingleScalarAtan2(u.re, ar_tmp_tmp);
      v.im = ci;
    }
    x[k].re = 57.2957802F * v.re;
    x[k].im = 57.2957802F * v.im;
  }
}

} // namespace coder

// End of code generation (acosd.cpp)
