//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// warning.cpp
//
// Code generation for function 'warning'
//

// Include files
#include "warning.h"
#include "helperVisualSLAMCodegen_mexutil.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtMCInfo c_emlrtMCI{
    14,        // lineNo
    25,        // colNo
    "warning", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\warning.m" // pName
};

static emlrtMCInfo d_emlrtMCI{
    14,        // lineNo
    9,         // colNo
    "warning", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\warning.m" // pName
};

static emlrtRSInfo eid_emlrtRSI{
    14,        // lineNo
    "warning", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\warning.m" // pathName
};

// Function Declarations
static const mxArray *b_feval(const emlrtStack &sp, const mxArray *m1,
                              const mxArray *m2, emlrtMCInfo &location);

static const mxArray *feval(const emlrtStack &sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, emlrtMCInfo &location);

// Function Definitions
static const mxArray *b_feval(const emlrtStack &sp, const mxArray *m1,
                              const mxArray *m2, emlrtMCInfo &location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 1, &m, 2, &pArrays[0],
                               "feval", true, &location);
}

static const mxArray *feval(const emlrtStack &sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, emlrtMCInfo &location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  return emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 1, &m, 4, &pArrays[0],
                               "feval", true, &location);
}

namespace coder {
namespace internal {
void b_warning(const emlrtStack &sp)
{
  static const int32_T b_iv[2]{1, 7};
  static const int32_T b_iv1[2]{1, 7};
  static const int32_T b_iv2[2]{1, 21};
  static const char_T msgID[21]{'M', 'A', 'T', 'L', 'A', 'B', ':',
                                's', 'i', 'n', 'g', 'u', 'l', 'a',
                                'r', 'M', 'a', 't', 'r', 'i', 'x'};
  static const char_T b_u[7]{'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7]{'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 21, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &eid_emlrtRSI;
  feval(st, y, b_feval(st, b_y, c_y, c_emlrtMCI), d_emlrtMCI);
}

void c_warning(const emlrtStack &sp)
{
  static const int32_T b_iv[2]{1, 7};
  static const int32_T b_iv1[2]{1, 7};
  static const int32_T b_iv2[2]{1, 30};
  static const char_T msgID[30]{'v', 'i', 's', 'i', 'o', 'n', ':', 'r',
                                'a', 'n', 's', 'a', 'c', ':', 'm', 'a',
                                'x', 'T', 'r', 'i', 'a', 'l', 's', 'R',
                                'e', 'a', 'c', 'h', 'e', 'd'};
  static const char_T b_u[7]{'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7]{'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 30, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &eid_emlrtRSI;
  feval(st, y, b_feval(st, b_y, c_y, c_emlrtMCI), d_emlrtMCI);
}

void d_warning(const emlrtStack &sp)
{
  static const int32_T b_iv[2]{1, 7};
  static const int32_T b_iv1[2]{1, 7};
  static const int32_T b_iv2[2]{1, 43};
  static const char_T msgID[43]{
      'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l', 'b', 'o', 'x', ':', 'F',
      'i', 'n', 'd', 'V', 'e', 'c', 't', 'o', 'r', 'O', 'r', 'i', 'e', 'n', 't',
      'a', 't', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h'};
  static const char_T b_u[7]{'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7]{'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 43, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &eid_emlrtRSI;
  feval(st, y, b_feval(st, b_y, c_y, c_emlrtMCI), d_emlrtMCI);
}

void e_warning(const emlrtStack &sp)
{
  static const int32_T b_iv[2]{1, 7};
  static const int32_T b_iv1[2]{1, 7};
  static const int32_T b_iv2[2]{1, 24};
  static const char_T msgID[24]{'M', 'A', 'T', 'L', 'A', 'B', ':', 'e',
                                'i', 'g', ':', 'N', 'o', 'C', 'o', 'n',
                                'v', 'e', 'r', 'g', 'e', 'n', 'c', 'e'};
  static const char_T b_u[7]{'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7]{'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 24, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &eid_emlrtRSI;
  feval(st, y, b_feval(st, b_y, c_y, c_emlrtMCI), d_emlrtMCI);
}

void f_warning(const emlrtStack &sp)
{
  static const int32_T b_iv[2]{1, 7};
  static const int32_T b_iv1[2]{1, 7};
  static const int32_T b_iv2[2]{1, 34};
  static const char_T msgID[34]{'v', 'i', 's', 'i', 'o', 'n', ':', 'i', 'n',
                                'v', 'e', 'r', 't', 'e', 'd', 'I', 'm', 'a',
                                'g', 'e', 'I', 'n', 'd', 'e', 'x', ':', 'n',
                                'o', 'I', 'm', 'a', 'g', 'e', 's'};
  static const char_T b_u[7]{'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7]{'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 34, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &eid_emlrtRSI;
  feval(st, y, b_feval(st, b_y, c_y, c_emlrtMCI), d_emlrtMCI);
}

void warning(const emlrtStack &sp, const char_T varargin_1[14])
{
  static const int32_T b_iv[2]{1, 7};
  static const int32_T b_iv1[2]{1, 7};
  static const int32_T b_iv2[2]{1, 33};
  static const int32_T b_iv3[2]{1, 14};
  static const char_T msgID[33]{'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
                                'L', 'A', 'B', ':', 'i', 'l', 'l', 'C', 'o',
                                'n', 'd', 'i', 't', 'i', 'o', 'n', 'e', 'd',
                                'M', 'a', 't', 'r', 'i', 'x'};
  static const char_T b_u[7]{'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7]{'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 33, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv3[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 14, m, &varargin_1[0]);
  emlrtAssign(&d_y, m);
  st.site = &eid_emlrtRSI;
  feval(st, y, feval(st, b_y, c_y, d_y, c_emlrtMCI), d_emlrtMCI);
}

void warning(const emlrtStack &sp, const char_T varargin_1[23],
             const char_T varargin_2[23])
{
  static const int32_T b_iv[2]{1, 7};
  static const int32_T b_iv1[2]{1, 7};
  static const int32_T b_iv2[2]{1, 32};
  static const int32_T b_iv3[2]{1, 23};
  static const int32_T b_iv4[2]{1, 23};
  static const char_T msgID[32]{'M', 'A', 'T', 'L', 'A', 'B', ':', 'n',
                                'c', 'h', 'o', 'o', 's', 'e', 'k', ':',
                                'L', 'a', 'r', 'g', 'e', 'C', 'o', 'e',
                                'f', 'f', 'i', 'c', 'i', 'e', 'n', 't'};
  static const char_T b_u[7]{'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7]{'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 32, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv3[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 23, m, &varargin_1[0]);
  emlrtAssign(&d_y, m);
  e_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv4[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 23, m, &varargin_2[0]);
  emlrtAssign(&e_y, m);
  st.site = &eid_emlrtRSI;
  feval(st, y, feval(st, b_y, c_y, d_y, e_y, c_emlrtMCI), d_emlrtMCI);
}

void warning(const emlrtStack &sp)
{
  static const int32_T b_iv[2]{1, 7};
  static const int32_T b_iv1[2]{1, 7};
  static const int32_T b_iv2[2]{1, 52};
  static const char_T c_u[52]{
      'i', 'm', 'a', 'g', 'e', 's', ':', 'g', 'e', 'o', 't', 'r', 'a',
      'n', 's', ':', 't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 'a',
      't', 'i', 'o', 'n', 'M', 'a', 't', 'r', 'i', 'x', 'B', 'a', 'd',
      'l', 'y', 'C', 'o', 'n', 'd', 'i', 't', 'i', 'o', 'n', 'e', 'd'};
  static const char_T b_u[7]{'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7]{'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *propValues;
  const mxArray *y;
  const char_T *propClasses{"coder.internal.string"};
  const char_T *propNames{"Value"};
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  propValues = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, propValues, &u[0]);
  emlrtAssign(&y, propValues);
  b_y = nullptr;
  propValues = emlrtCreateCharArray(2, &b_iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, propValues, &b_u[0]);
  emlrtAssign(&b_y, propValues);
  c_y = nullptr;
  m = nullptr;
  emlrtAssign(&c_y, emlrtCreateClassInstance2022a((emlrtCTX)&sp,
                                                  "coder.internal.string"));
  m = nullptr;
  d_y = nullptr;
  propValues = emlrtCreateCharArray(2, &b_iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 52, propValues, &c_u[0]);
  emlrtAssign(&d_y, propValues);
  emlrtAssign(&m, d_y);
  propValues = m;
  emlrtSetAllProperties((emlrtCTX)&sp, &c_y, 0, 1, (const char_T **)&propNames,
                        (const char_T **)&propClasses, &propValues);
  emlrtAssign(&c_y, emlrtConvertInstanceToRedirectSource(
                        (emlrtCTX)&sp, c_y, 0, "coder.internal.string"));
  st.site = &eid_emlrtRSI;
  feval(st, y, b_feval(st, b_y, c_y, c_emlrtMCI), d_emlrtMCI);
}

} // namespace internal
} // namespace coder

// End of code generation (warning.cpp)
