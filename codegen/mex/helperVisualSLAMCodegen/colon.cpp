//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// colon.cpp
//
// Code generation for function 'colon'
//

// Include files
#include "colon.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo
    rj_emlrtRSI{
        319,               // lineNo
        "eml_float_colon", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pathName
    };

static emlrtRTEInfo
    s_emlrtRTEI{
        419,               // lineNo
        15,                // colNo
        "assert_pmaxsize", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pName
    };

static emlrtRTEInfo
    kn_emlrtRTEI{
        320,     // lineNo
        20,      // colNo
        "colon", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pName
    };

// Function Definitions
namespace coder {
void eml_float_colon(const emlrtStack &sp, real_T a, real_T b,
                     array<real_T, 2U> &y)
{
  emlrtStack st;
  real_T apnd;
  real_T cdiff;
  real_T ndbl;
  int32_T n;
  st.prev = &sp;
  st.tls = sp.tls;
  ndbl = muDoubleScalarFloor((b - a) + 0.5);
  apnd = a + ndbl;
  cdiff = apnd - b;
  if (muDoubleScalarAbs(cdiff) <
      4.4408920985006262E-16 *
          muDoubleScalarMax(muDoubleScalarAbs(a), muDoubleScalarAbs(b))) {
    ndbl++;
    apnd = b;
  } else if (cdiff > 0.0) {
    apnd = a + (ndbl - 1.0);
  } else {
    ndbl++;
  }
  if (ndbl >= 0.0) {
    n = static_cast<int32_T>(ndbl);
  } else {
    n = 0;
  }
  st.site = &rj_emlrtRSI;
  if (ndbl > 2.147483647E+9) {
    emlrtErrorWithMessageIdR2018a(&st, &s_emlrtRTEI, "Coder:MATLAB:pmaxsize",
                                  "Coder:MATLAB:pmaxsize", 0);
  }
  y.set_size(&kn_emlrtRTEI, &sp, 1, n);
  if (n > 0) {
    y[0] = a;
    if (n > 1) {
      int32_T nm1d2;
      y[n - 1] = apnd;
      nm1d2 = (n - 1) / 2;
      for (int32_T k{0}; k <= nm1d2 - 2; k++) {
        y[k + 1] = a + (static_cast<real_T>(k) + 1.0);
        y[(n - k) - 2] = apnd - (static_cast<real_T>(k) + 1.0);
      }
      if (nm1d2 << 1 == n - 1) {
        y[nm1d2] = (a + apnd) / 2.0;
      } else {
        y[nm1d2] = a + static_cast<real_T>(nm1d2);
        y[nm1d2 + 1] = apnd - static_cast<real_T>(nm1d2);
      }
    }
  }
}

void eml_float_colon(real_T a, real_T y_data[], int32_T y_size[2])
{
  real_T apnd;
  real_T ndbl;
  ndbl = muDoubleScalarFloor((10.0 - a) + 0.5);
  apnd = a + ndbl;
  if (muDoubleScalarAbs(apnd - 10.0) <
      4.4408920985006262E-16 * muDoubleScalarMax(muDoubleScalarAbs(a), 10.0)) {
    ndbl++;
    apnd = 10.0;
  } else if (apnd - 10.0 > 0.0) {
    apnd = a + (ndbl - 1.0);
  } else {
    ndbl++;
  }
  y_size[0] = 1;
  y_size[1] = static_cast<int32_T>(ndbl);
  if (static_cast<int32_T>(ndbl) > 0) {
    y_data[0] = a;
    if (static_cast<int32_T>(ndbl) > 1) {
      int32_T nm1d2;
      y_data[static_cast<int32_T>(ndbl) - 1] = apnd;
      nm1d2 = (static_cast<int32_T>(ndbl) - 1) / 2;
      for (int32_T k{0}; k <= nm1d2 - 2; k++) {
        y_data[k + 1] = a + (static_cast<real_T>(k) + 1.0);
        y_data[(static_cast<int32_T>(ndbl) - k) - 2] =
            apnd - (static_cast<real_T>(k) + 1.0);
      }
      if (nm1d2 << 1 == static_cast<int32_T>(ndbl) - 1) {
        y_data[nm1d2] = (a + apnd) / 2.0;
      } else {
        y_data[nm1d2] = a + static_cast<real_T>(nm1d2);
        y_data[nm1d2 + 1] = apnd - static_cast<real_T>(nm1d2);
      }
    }
  }
}

void eml_integer_colon_dispatcher(const emlrtStack &sp, int32_T b,
                                  array<int32_T, 2U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T n;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ap_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &bp_emlrtRSI;
  if (b < 1) {
    n = 0;
  } else {
    n = b;
  }
  y.set_size(&vp_emlrtRTEI, &st, 1, n);
  if (n > 0) {
    int32_T yk;
    y[0] = 1;
    yk = 1;
    b_st.site = &cp_emlrtRSI;
    if (n > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (int32_T k{2}; k <= n; k++) {
      yk++;
      y[k - 1] = yk;
    }
  }
}

} // namespace coder

// End of code generation (colon.cpp)
