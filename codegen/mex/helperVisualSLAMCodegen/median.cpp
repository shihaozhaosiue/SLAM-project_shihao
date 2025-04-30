//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// median.cpp
//
// Code generation for function 'median'
//

// Include files
#include "median.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "quickselect.h"
#include "rt_nonfinite.h"
#include "sort3.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo byb_emlrtRSI{
    139,      // lineNo
    "median", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\median.m" // pathName
};

static emlrtRSInfo cyb_emlrtRSI{
    87,        // lineNo
    "vmedian", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vmedia"
    "n.m" // pathName
};

static emlrtRSInfo dyb_emlrtRSI{
    108,       // lineNo
    "vmedian", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vmedia"
    "n.m" // pathName
};

static emlrtRSInfo eyb_emlrtRSI{
    113,       // lineNo
    "vmedian", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vmedia"
    "n.m" // pathName
};

static emlrtRSInfo fyb_emlrtRSI{
    119,       // lineNo
    "vmedian", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vmedia"
    "n.m" // pathName
};

static emlrtRTEInfo jeb_emlrtRTEI{
    119,       // lineNo
    15,        // colNo
    "vmedian", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vmedia"
    "n.m" // pName
};

static emlrtRTEInfo keb_emlrtRTEI{
    108,       // lineNo
    15,        // colNo
    "vmedian", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vmedia"
    "n.m" // pName
};

// Function Definitions
namespace coder {
real32_T median(const emlrtStack &sp, const array<real32_T, 2U> &x)
{
  array<real32_T, 2U> a__4;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T a__6;
  int32_T ilast;
  int32_T k;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  a__6 = x.size(1);
  if (x.size(1) == 0) {
    y = rtNaNF;
  } else {
    st.site = &byb_emlrtRSI;
    b_st.site = &cyb_emlrtRSI;
    if (x.size(1) > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    k = 0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (k <= a__6 - 1) {
        if (muSingleScalarIsNaN(x[k])) {
          y = rtNaNF;
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        if (a__6 <= 4) {
          if (a__6 == 0) {
            y = rtNaNF;
          } else if (a__6 == 1) {
            y = x[0];
          } else if (a__6 == 2) {
            if (muSingleScalarIsInf(x[0])) {
              y = (x[0] + x[1]) / 2.0F;
            } else {
              y = x[0] + (x[1] - x[0]) / 2.0F;
            }
          } else if (a__6 == 3) {
            internal::sort3(x[0], x[1], x[2], ilast);
            y = x[ilast - 1];
          } else {
            if (x[0] < x[1]) {
              if (x[1] < x[2]) {
                k = 0;
                ilast = 1;
                a__6 = 2;
              } else if (x[0] < x[2]) {
                k = 0;
                ilast = 2;
                a__6 = 1;
              } else {
                k = 2;
                ilast = 0;
                a__6 = 1;
              }
            } else if (x[0] < x[2]) {
              k = 1;
              ilast = 0;
              a__6 = 2;
            } else if (x[1] < x[2]) {
              k = 1;
              ilast = 2;
              a__6 = 0;
            } else {
              k = 2;
              ilast = 1;
              a__6 = 0;
            }
            if (x[k] < x[3]) {
              if (x[3] < x[a__6]) {
                if (muSingleScalarIsInf(x[ilast])) {
                  y = (x[ilast] + x[3]) / 2.0F;
                } else {
                  y = x[ilast] + (x[3] - x[ilast]) / 2.0F;
                }
              } else if (muSingleScalarIsInf(x[ilast])) {
                y = (x[ilast] + x[a__6]) / 2.0F;
              } else {
                y = x[ilast] + (x[a__6] - x[ilast]) / 2.0F;
              }
            } else if (muSingleScalarIsInf(x[k])) {
              y = (x[k] + x[ilast]) / 2.0F;
            } else {
              y = x[k] + (x[ilast] - x[k]) / 2.0F;
            }
          }
        } else {
          int32_T midm1;
          midm1 = a__6 >> 1;
          if ((static_cast<uint32_T>(a__6) & 1U) == 0U) {
            a__4.set_size(&keb_emlrtRTEI, &st, 1, a__6);
            for (k = 0; k < a__6; k++) {
              a__4[k] = x[k];
            }
            b_st.site = &dyb_emlrtRSI;
            y = internal::quickselect(a__4, midm1 + 1, a__6, k, ilast);
            if (midm1 < k) {
              real32_T b;
              b_st.site = &eyb_emlrtRSI;
              b = internal::quickselect(a__4, midm1, ilast - 1, k, a__6);
              if (muSingleScalarIsInf(y)) {
                y = (y + b) / 2.0F;
              } else {
                y += (b - y) / 2.0F;
              }
            }
          } else {
            a__4.set_size(&jeb_emlrtRTEI, &st, 1, a__6);
            for (k = 0; k < a__6; k++) {
              a__4[k] = x[k];
            }
            b_st.site = &fyb_emlrtRSI;
            y = internal::quickselect(a__4, midm1 + 1, a__6, k, a__6);
          }
        }
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return y;
}

real32_T median(const emlrtStack &sp, const array<real32_T, 1U> &x)
{
  array<real32_T, 1U> a__4;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T a__6;
  int32_T ilast;
  int32_T k;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  a__6 = x.size(0);
  if (x.size(0) == 0) {
    y = rtNaNF;
  } else {
    st.site = &byb_emlrtRSI;
    b_st.site = &cyb_emlrtRSI;
    if (x.size(0) > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    k = 0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (k <= a__6 - 1) {
        if (muSingleScalarIsNaN(x[k])) {
          y = rtNaNF;
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        if (a__6 <= 4) {
          if (a__6 == 0) {
            y = rtNaNF;
          } else if (a__6 == 1) {
            y = x[0];
          } else if (a__6 == 2) {
            if (muSingleScalarIsInf(x[0])) {
              y = (x[0] + x[1]) / 2.0F;
            } else {
              y = x[0] + (x[1] - x[0]) / 2.0F;
            }
          } else if (a__6 == 3) {
            internal::sort3(x[0], x[1], x[2], ilast);
            y = x[ilast - 1];
          } else {
            if (x[0] < x[1]) {
              if (x[1] < x[2]) {
                k = 0;
                ilast = 1;
                a__6 = 2;
              } else if (x[0] < x[2]) {
                k = 0;
                ilast = 2;
                a__6 = 1;
              } else {
                k = 2;
                ilast = 0;
                a__6 = 1;
              }
            } else if (x[0] < x[2]) {
              k = 1;
              ilast = 0;
              a__6 = 2;
            } else if (x[1] < x[2]) {
              k = 1;
              ilast = 2;
              a__6 = 0;
            } else {
              k = 2;
              ilast = 1;
              a__6 = 0;
            }
            if (x[k] < x[3]) {
              if (x[3] < x[a__6]) {
                if (muSingleScalarIsInf(x[ilast])) {
                  y = (x[ilast] + x[3]) / 2.0F;
                } else {
                  y = x[ilast] + (x[3] - x[ilast]) / 2.0F;
                }
              } else if (muSingleScalarIsInf(x[ilast])) {
                y = (x[ilast] + x[a__6]) / 2.0F;
              } else {
                y = x[ilast] + (x[a__6] - x[ilast]) / 2.0F;
              }
            } else if (muSingleScalarIsInf(x[k])) {
              y = (x[k] + x[ilast]) / 2.0F;
            } else {
              y = x[k] + (x[ilast] - x[k]) / 2.0F;
            }
          }
        } else {
          int32_T midm1;
          midm1 = a__6 >> 1;
          if ((static_cast<uint32_T>(a__6) & 1U) == 0U) {
            a__4.set_size(&keb_emlrtRTEI, &st, a__6);
            for (k = 0; k < a__6; k++) {
              a__4[k] = x[k];
            }
            b_st.site = &dyb_emlrtRSI;
            y = internal::quickselect(a__4, midm1 + 1, a__6, k, ilast);
            if (midm1 < k) {
              real32_T b;
              b_st.site = &eyb_emlrtRSI;
              b = internal::quickselect(a__4, midm1, ilast - 1, k, a__6);
              if (muSingleScalarIsInf(y)) {
                y = (y + b) / 2.0F;
              } else {
                y += (b - y) / 2.0F;
              }
            }
          } else {
            a__4.set_size(&jeb_emlrtRTEI, &st, a__6);
            for (k = 0; k < a__6; k++) {
              a__4[k] = x[k];
            }
            b_st.site = &fyb_emlrtRSI;
            y = internal::quickselect(a__4, midm1 + 1, a__6, k, a__6);
          }
        }
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return y;
}

} // namespace coder

// End of code generation (median.cpp)
