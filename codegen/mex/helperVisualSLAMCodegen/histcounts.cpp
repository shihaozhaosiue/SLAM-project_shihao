//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// histcounts.cpp
//
// Code generation for function 'histcounts'
//

// Include files
#include "histcounts.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo
    hmb_emlrtRSI{
        27,           // lineNo
        "histcounts", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\histcounts."
        "m" // pathName
    };

static emlrtRSInfo
    imb_emlrtRSI{
        51,           // lineNo
        "histcounts", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\histcounts."
        "m" // pathName
    };

static emlrtRSInfo
    jmb_emlrtRSI{
        87,           // lineNo
        "parseinput", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\histcounts."
        "m" // pathName
    };

static emlrtRSInfo
    kmb_emlrtRSI{
        264,          // lineNo
        "HistCounts", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\histcounts."
        "m" // pathName
    };

static emlrtRSInfo lmb_emlrtRSI{
    30,                  // lineNo
    "mapElementsToBins", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\mapEle"
    "mentsToBins.m" // pathName
};

static emlrtRTEInfo
    ed_emlrtRTEI{
        85,           // lineNo
        31,           // colNo
        "parseinput", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\histcounts."
        "m" // pName
    };

static emlrtRTEInfo fd_emlrtRTEI{
    13,                      // lineNo
    37,                      // colNo
    "validatenondecreasing", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatenondecreasing.m" // pName
};

static emlrtRTEInfo
    jx_emlrtRTEI{
        264,          // lineNo
        5,            // colNo
        "histcounts", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\histcounts."
        "m" // pName
    };

static emlrtRTEInfo
    kx_emlrtRTEI{
        58,           // lineNo
        1,            // colNo
        "histcounts", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\histcounts."
        "m" // pName
    };

// Function Definitions
namespace coder {
void histcounts(const emlrtStack &sp, const array<real_T, 1U> &x,
                const array<real_T, 2U> &varargin_1, array<real_T, 2U> &n)
{
  array<int32_T, 2U> ni;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T delta;
  real_T leftEdge;
  int32_T k;
  int32_T loop_ub;
  int32_T nx;
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
  st.site = &hmb_emlrtRSI;
  if (varargin_1.size(1) < 2) {
    emlrtErrorWithMessageIdR2018a(&st, &ed_emlrtRTEI,
                                  "MATLAB:histcounts:EmptyOrScalarBinEdges",
                                  "MATLAB:histcounts:EmptyOrScalarBinEdges", 0);
  }
  b_st.site = &jmb_emlrtRSI;
  c_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= varargin_1.size(1) - 2)) {
    if (!(varargin_1[k] <= varargin_1[k + 1])) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &fd_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedNonDecreasing",
        "MATLAB:histcounts:expectedNonDecreasing", 3, 4, 22,
        "input number 2, edges,");
  }
  st.site = &imb_emlrtRSI;
  b_st.site = &kmb_emlrtRSI;
  loop_ub = varargin_1.size(1) - 1;
  ni.set_size(&jx_emlrtRTEI, &b_st, 1, varargin_1.size(1) - 1);
  for (nx = 0; nx < loop_ub; nx++) {
    ni[nx] = 0;
  }
  nx = x.size(0);
  leftEdge = varargin_1[0];
  delta = varargin_1[1] - varargin_1[0];
  c_st.site = &lmb_emlrtRSI;
  if (x.size(0) > 2147483646) {
    d_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (k = 0; k < nx; k++) {
    if ((x[k] >= leftEdge) && (x[k] <= varargin_1[loop_ub])) {
      real_T bGuess;
      bGuess = muDoubleScalarCeil((x[k] - leftEdge) / delta);
      if ((bGuess >= 1.0) && (bGuess < varargin_1.size(1)) &&
          (x[k] >= varargin_1[static_cast<int32_T>(bGuess) - 1]) &&
          (x[k] < varargin_1[static_cast<int32_T>(bGuess)])) {
        ni[static_cast<int32_T>(bGuess) - 1] =
            ni[static_cast<int32_T>(bGuess) - 1] + 1;
      } else {
        int32_T high_i;
        int32_T low_i;
        int32_T low_ip1;
        high_i = varargin_1.size(1);
        low_i = 1;
        low_ip1 = 2;
        while (high_i > low_ip1) {
          int32_T mid_i;
          mid_i = (low_i >> 1) + (high_i >> 1);
          if (((static_cast<uint32_T>(low_i) & 1U) == 1U) &&
              ((static_cast<uint32_T>(high_i) & 1U) == 1U)) {
            mid_i++;
          }
          if (x[k] >= varargin_1[mid_i - 1]) {
            low_i = mid_i;
            low_ip1 = mid_i + 1;
          } else {
            high_i = mid_i;
          }
        }
        ni[low_i - 1] = ni[low_i - 1] + 1;
      }
    }
  }
  n.set_size(&kx_emlrtRTEI, &sp, 1, varargin_1.size(1) - 1);
  for (nx = 0; nx < loop_ub; nx++) {
    n[nx] = ni[nx];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (histcounts.cpp)
