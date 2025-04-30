//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// inv.cpp
//
// Code generation for function 'inv'
//

// Include files
#include "inv.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_mexutil.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"

// Function Definitions
namespace coder {
void checkcond(const emlrtStack &sp, const real_T x[16], const real_T xinv[16])
{
  static const int32_T b_iv[2]{1, 6};
  static const char_T rfmt[6]{'%', '1', '4', '.', '6', 'e'};
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T n1x;
  real_T n1xinv;
  real_T s;
  int32_T j;
  int32_T s_tmp;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n1x = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 4)) {
    s_tmp = j << 2;
    s = ((muDoubleScalarAbs(x[s_tmp]) + muDoubleScalarAbs(x[s_tmp + 1])) +
         muDoubleScalarAbs(x[s_tmp + 2])) +
        muDoubleScalarAbs(x[s_tmp + 3]);
    if (muDoubleScalarIsNaN(s)) {
      n1x = rtNaN;
      exitg1 = true;
    } else {
      if (s > n1x) {
        n1x = s;
      }
      j++;
    }
  }
  n1xinv = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 4)) {
    s_tmp = j << 2;
    s = ((muDoubleScalarAbs(xinv[s_tmp]) + muDoubleScalarAbs(xinv[s_tmp + 1])) +
         muDoubleScalarAbs(xinv[s_tmp + 2])) +
        muDoubleScalarAbs(xinv[s_tmp + 3]);
    if (muDoubleScalarIsNaN(s)) {
      n1xinv = rtNaN;
      exitg1 = true;
    } else {
      if (s > n1xinv) {
        n1xinv = s;
      }
      j++;
    }
  }
  s = 1.0 / (n1x * n1xinv);
  if ((n1x == 0.0) || (n1xinv == 0.0) || (s == 0.0)) {
    if (!emlrtSetWarningFlag((emlrtCTX)&sp)) {
      st.site = &fx_emlrtRSI;
      internal::b_warning(st);
    }
  } else if ((muDoubleScalarIsNaN(s) || (s < 2.2204460492503131E-16)) &&
             (!emlrtSetWarningFlag((emlrtCTX)&sp))) {
    char_T str[14];
    st.site = &gx_emlrtRSI;
    y = nullptr;
    m = emlrtCreateCharArray(2, &b_iv[0]);
    emlrtInitCharArrayR2013a(&st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_y = nullptr;
    m = emlrtCreateDoubleScalar(s);
    emlrtAssign(&b_y, m);
    b_st.site = &hid_emlrtRSI;
    emlrt_marshallIn(b_st, b_sprintf(b_st, y, b_y, e_emlrtMCI),
                     "<output of sprintf>", str);
    st.site = &gx_emlrtRSI;
    internal::warning(st, str);
  }
}

} // namespace coder

// End of code generation (inv.cpp)
