//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// nchoosek.cpp
//
// Code generation for function 'nchoosek'
//

// Include files
#include "nchoosek.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_mexutil.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo vbd_emlrtRSI{
    71,         // lineNo
    "nchoosek", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m" // pathName
};

static emlrtRSInfo wbd_emlrtRSI{
    65,         // lineNo
    "nchoosek", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m" // pathName
};

static emlrtRSInfo xbd_emlrtRSI{
    129,   // lineNo
    "nCk", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m" // pathName
};

static emlrtRSInfo ybd_emlrtRSI{
    153,        // lineNo
    "nCkInt64", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m" // pathName
};

static emlrtRSInfo acd_emlrtRSI{
    56,         // lineNo
    "nchoosek", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m" // pathName
};

static emlrtRSInfo bcd_emlrtRSI{
    142,   // lineNo
    "nCk", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m" // pathName
};

static emlrtRSInfo ccd_emlrtRSI{
    141,   // lineNo
    "nCk", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m" // pathName
};

static emlrtRTEInfo pf_emlrtRTEI{
    20,         // lineNo
    23,         // colNo
    "nchoosek", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m" // pName
};

static emlrtDCInfo ic_emlrtDCI{
    66,         // lineNo
    62,         // colNo
    "nchoosek", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m", // pName
    4 // checkKind
};

static emlrtRTEInfo vob_emlrtRTEI{
    66,         // lineNo
    5,          // colNo
    "nchoosek", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m" // pName
};

static emlrtRTEInfo wob_emlrtRTEI{
    60,         // lineNo
    5,          // colNo
    "nchoosek", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m" // pName
};

static emlrtRTEInfo kfc_emlrtRTEI{
    155,        // lineNo
    13,         // colNo
    "nCkInt64", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m" // pName
};

// Function Definitions
namespace coder {
void nchoosek(const emlrtStack &sp, const uint32_T x_data[],
              const int32_T x_size[2], array<uint32_T, 2U> &y)
{
  static const int32_T b_iv[2]{1, 7};
  static const int32_T b_iv1[2]{1, 7};
  static const char_T rfmt[7]{'%', '2', '3', '.', '1', '5', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  uint64_T u1;
  int32_T n_tmp;
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
  if (x_size[1] != 1) {
    emlrtErrorWithMessageIdR2018a(&sp, &pf_emlrtRTEI,
                                  "MATLAB:nchoosek:InvalidArg1",
                                  "MATLAB:nchoosek:InvalidArg1", 0);
  }
  n_tmp = x_size[0];
  if (x_size[0] < 3) {
    y.set_size(&wob_emlrtRTEI, &sp, 0, 3);
  } else {
    real_T b_y;
    int32_T comb[3];
    int32_T b_r;
    int32_T nmkpi;
    int32_T nrows_tmp;
    st.site = &wbd_emlrtRSI;
    b_r = 3;
    if (x_size[0] - 3 < 3) {
      b_r = x_size[0] - 3;
    }
    if (b_r == 0) {
      b_y = 1.0;
    } else if (b_r == 1) {
      b_y = x_size[0];
    } else {
      real_T maxRelErr;
      b_st.site = &acd_emlrtRSI;
      maxRelErr = 0.0;
      b_y = x_size[0];
      for (nmkpi = 0; nmkpi <= b_r - 2; nmkpi++) {
        b_y *= (static_cast<real_T>((n_tmp - nmkpi) - 2) + 1.0) /
               (static_cast<real_T>(nmkpi) + 2.0);
        if (!(b_y < 1.125899906842624E+15)) {
          maxRelErr += 4.4408920985006262E-16;
        }
        b_y = muDoubleScalarRound(b_y);
      }
      if ((maxRelErr != 0.0) && (b_y <= 3.6893488147419103E+19)) {
        uint64_T i;
        uint64_T n;
        uint64_T yint;
        boolean_T exitg1;
        c_st.site = &xbd_emlrtRSI;
        n = static_cast<uint64_T>(x_size[0]);
        yint = 1ULL;
        d_st.site = &ybd_emlrtRSI;
        if (static_cast<uint64_T>(b_r) > 18446744073709551614ULL) {
          e_st.site = &qe_emlrtRSI;
          b_check_forloop_overflow_error(e_st);
        }
        i = 1ULL;
        exitg1 = false;
        while ((!exitg1) &&
               (static_cast<uint32_T>(i) <= static_cast<uint32_T>(b_r))) {
          uint64_T u;
          u = yint / i;
          if (n == 0ULL) {
            emlrtDivisionByZeroErrorR2012b(&kfc_emlrtRTEI, &c_st);
          } else {
            u1 = MAX_uint64_T / n;
          }
          if (u >= u1) {
            yint = MAX_uint64_T;
            exitg1 = true;
          } else {
            yint = u * n + (yint - u * i) * n / i;
            n--;
            i++;
          }
        }
        b_y = static_cast<real_T>(yint);
        maxRelErr = 0.0;
      }
      if (b_y > 9.007199254740992E+15) {
        maxRelErr = muDoubleScalarMax(maxRelErr, 2.2204460492503131E-16);
      }
      if ((maxRelErr != 0.0) &&
          ((!muDoubleScalarIsInf(b_y)) && (!muDoubleScalarIsNaN(b_y))) &&
          (!emlrtSetWarningFlag(&b_st))) {
        char_T b_str[23];
        char_T str[23];
        c_st.site = &bcd_emlrtRSI;
        c_y = nullptr;
        m = emlrtCreateCharArray(2, &b_iv[0]);
        emlrtInitCharArrayR2013a(&c_st, 7, m, &rfmt[0]);
        emlrtAssign(&c_y, m);
        d_y = nullptr;
        m = emlrtCreateDoubleScalar(maxRelErr);
        emlrtAssign(&d_y, m);
        d_st.site = &hid_emlrtRSI;
        b_emlrt_marshallIn(d_st, b_sprintf(d_st, c_y, d_y, e_emlrtMCI),
                           "<output of sprintf>", str);
        c_st.site = &bcd_emlrtRSI;
        e_y = nullptr;
        m = emlrtCreateCharArray(2, &b_iv1[0]);
        emlrtInitCharArrayR2013a(&c_st, 7, m, &rfmt[0]);
        emlrtAssign(&e_y, m);
        f_y = nullptr;
        m = emlrtCreateDoubleScalar(muDoubleScalarCeil(maxRelErr * b_y));
        emlrtAssign(&f_y, m);
        d_st.site = &hid_emlrtRSI;
        b_emlrt_marshallIn(d_st, b_sprintf(d_st, e_y, f_y, e_emlrtMCI),
                           "<output of sprintf>", b_str);
        c_st.site = &ccd_emlrtRSI;
        internal::warning(c_st, str, b_str);
      }
    }
    nrows_tmp = static_cast<int32_T>(b_y);
    if (static_cast<int32_T>(b_y) < 0) {
      emlrtNonNegativeCheckR2012b(
          static_cast<real_T>(static_cast<int32_T>(b_y)), &ic_emlrtDCI,
          (emlrtConstCTX)&sp);
    }
    y.set_size(&vob_emlrtRTEI, &sp, nrows_tmp, 3);
    comb[0] = 1;
    comb[1] = 2;
    comb[2] = 3;
    b_r = 2;
    nmkpi = x_size[0];
    st.site = &vbd_emlrtRSI;
    if (static_cast<int32_T>(b_y) > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T row{0}; row < nrows_tmp; row++) {
      y[row] = x_data[comb[0] - 1];
      y[row + y.size(0)] = x_data[comb[1] - 1];
      y[row + y.size(0) * 2] = x_data[comb[2] - 1];
      if (b_r + 1 > 0) {
        int32_T a;
        int32_T combj;
        a = comb[b_r];
        combj = comb[b_r] + 1;
        comb[b_r]++;
        if (a + 1 < nmkpi) {
          b_r += 2;
          for (nmkpi = b_r; nmkpi < 4; nmkpi++) {
            combj++;
            comb[nmkpi - 1] = combj;
          }
          b_r = 2;
          nmkpi = n_tmp;
        } else {
          b_r--;
          nmkpi--;
        }
      }
    }
  }
}

} // namespace coder

// End of code generation (nchoosek.cpp)
