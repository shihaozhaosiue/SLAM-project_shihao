//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// repmat.cpp
//
// Code generation for function 'repmat'
//

// Include files
#include "repmat.h"
#include "assertValidSizeArg.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_mexutil.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtMCInfo b_emlrtMCI{
    53,       // lineNo
    5,        // colNo
    "repmat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" // pName
};

static const char_T cv5[15]{'M', 'A', 'T', 'L', 'A', 'B', ':', 'p',
                            'm', 'a', 'x', 's', 'i', 'z', 'e'};

static emlrtRSInfo gid_emlrtRSI{
    53,       // lineNo
    "repmat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" // pathName
};

// Function Definitions
namespace coder {
void b_repmat(const emlrtStack &sp, const real32_T a[16], real_T varargin_1,
              array<real32_T, 2U> &b)
{
  static const int32_T b_iv[2]{1, 15};
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  int32_T ntilerows;
  int32_T outsize_idx_0_tmp;
  boolean_T overflow;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ne_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((varargin_1 != varargin_1) || muDoubleScalarIsInf(varargin_1)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &k_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  outsize_idx_0_tmp = static_cast<int32_T>(varargin_1) << 2;
  if (!(outsize_idx_0_tmp ==
        4.0 * static_cast<real_T>(static_cast<int32_T>(varargin_1)))) {
    y = nullptr;
    m = emlrtCreateCharArray(2, &b_iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 15, m, &cv5[0]);
    emlrtAssign(&y, m);
    st.site = &gid_emlrtRSI;
    b_error(st, y, b_emlrtMCI);
  }
  b.set_size(&xj_emlrtRTEI, &sp, outsize_idx_0_tmp, 4);
  ntilerows = static_cast<int32_T>(varargin_1);
  overflow = (static_cast<int32_T>(varargin_1) > 2147483646);
  for (int32_T jcol{0}; jcol < 4; jcol++) {
    int32_T iacol;
    int32_T ibmat;
    iacol = jcol << 2;
    ibmat = jcol * outsize_idx_0_tmp - 1;
    st.site = &oe_emlrtRSI;
    if (overflow) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T itilerow{0}; itilerow < ntilerows; itilerow++) {
      int32_T ibcol;
      ibcol = ibmat + (itilerow << 2);
      b[ibcol + 1] = a[iacol];
      b[ibcol + 2] = a[iacol + 1];
      b[ibcol + 3] = a[iacol + 2];
      b[ibcol + 4] = a[iacol + 3];
    }
  }
}

int32_T repmat(ptrdiff_t a, ptrdiff_t b_data[])
{
  int32_T b_size;
  b_size = 4;
  for (int32_T i{0}; i < 4; i++) {
    b_data[i] = a;
  }
  return b_size;
}

void repmat(const emlrtStack &sp, const real32_T a_data[], real_T varargin_1,
            array<real32_T, 2U> &b)
{
  static const int32_T b_iv[2]{1, 15};
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  int32_T ntilerows;
  int32_T outsize_idx_0_tmp;
  boolean_T overflow;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ne_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((varargin_1 != varargin_1) || muDoubleScalarIsInf(varargin_1)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &k_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  outsize_idx_0_tmp = static_cast<int32_T>(varargin_1) << 2;
  if (!(outsize_idx_0_tmp ==
        4.0 * static_cast<real_T>(static_cast<int32_T>(varargin_1)))) {
    y = nullptr;
    m = emlrtCreateCharArray(2, &b_iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 15, m, &cv5[0]);
    emlrtAssign(&y, m);
    st.site = &gid_emlrtRSI;
    b_error(st, y, b_emlrtMCI);
  }
  b.set_size(&xj_emlrtRTEI, &sp, outsize_idx_0_tmp, 4);
  ntilerows = static_cast<int32_T>(varargin_1);
  overflow = (static_cast<int32_T>(varargin_1) > 2147483646);
  for (int32_T jcol{0}; jcol < 4; jcol++) {
    int32_T iacol;
    int32_T ibmat;
    iacol = jcol << 2;
    ibmat = jcol * outsize_idx_0_tmp - 1;
    st.site = &oe_emlrtRSI;
    if (overflow) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T itilerow{0}; itilerow < ntilerows; itilerow++) {
      int32_T ibcol;
      ibcol = ibmat + (itilerow << 2);
      st.site = &pe_emlrtRSI;
      b[ibcol + 1] = a_data[iacol];
      b[ibcol + 2] = a_data[iacol + 1];
      b[ibcol + 3] = a_data[iacol + 2];
      b[ibcol + 4] = a_data[iacol + 3];
    }
  }
}

void repmat(const emlrtStack &sp, const array<real32_T, 1U> &a,
            array<real32_T, 2U> &b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  boolean_T overflow;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  i = a.size(0);
  b.set_size(&xj_emlrtRTEI, &sp, a.size(0), 4);
  overflow = (a.size(0) > 2147483646);
  for (int32_T jtilecol{0}; jtilecol < 4; jtilecol++) {
    int32_T ibtile;
    ibtile = jtilecol * i;
    st.site = &pe_emlrtRSI;
    if (overflow) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T k{0}; k < i; k++) {
      b[ibtile + k] = a[k];
    }
  }
}

void repmat(const emlrtStack &sp, const array<real_T, 2U> &a, real_T varargin_1,
            array<real_T, 2U> &b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  int32_T i1;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ne_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((varargin_1 != varargin_1) || muDoubleScalarIsInf(varargin_1)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &k_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  i = static_cast<int32_T>(varargin_1);
  i1 = a.size(1);
  b.set_size(&xj_emlrtRTEI, &sp, i, a.size(1));
  st.site = &ry_emlrtRSI;
  if (a.size(1) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T jcol{0}; jcol < i1; jcol++) {
    int32_T ibmat;
    ibmat = jcol * static_cast<int32_T>(varargin_1);
    st.site = &oe_emlrtRSI;
    if (static_cast<int32_T>(varargin_1) > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T itilerow{0}; itilerow < i; itilerow++) {
      b[ibmat + itilerow] = a[jcol];
    }
  }
}

void repmat(const emlrtStack &sp, const real_T a_data[],
            const real_T varargin_1[2], array<real_T, 1U> &b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ne_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  internal::assertValidSizeArg(st, varargin_1);
  i = static_cast<int32_T>(varargin_1[0]);
  b.set_size(&xj_emlrtRTEI, &sp, i);
  st.site = &oe_emlrtRSI;
  if (static_cast<int32_T>(varargin_1[0]) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T itilerow{0}; itilerow < i; itilerow++) {
    st.site = &pe_emlrtRSI;
    b[itilerow] = a_data[0];
  }
}

void repmat(const emlrtStack &sp, const real32_T a_data[], real_T varargin_1,
            array<real32_T, 1U> &b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ne_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((varargin_1 != varargin_1) || muDoubleScalarIsInf(varargin_1)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &k_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  i = static_cast<int32_T>(varargin_1);
  b.set_size(&xj_emlrtRTEI, &sp, i);
  st.site = &oe_emlrtRSI;
  if (static_cast<int32_T>(varargin_1) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T itilerow{0}; itilerow < i; itilerow++) {
    st.site = &pe_emlrtRSI;
    b[itilerow] = a_data[0];
  }
}

} // namespace coder

// End of code generation (repmat.cpp)
