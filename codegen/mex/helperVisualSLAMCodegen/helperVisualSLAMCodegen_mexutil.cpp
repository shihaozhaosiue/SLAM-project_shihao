//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperVisualSLAMCodegen_mexutil.cpp
//
// Code generation for function 'helperVisualSLAMCodegen_mexutil'
//

// Include files
#include "helperVisualSLAMCodegen_mexutil.h"
#include "rt_nonfinite.h"

// Function Definitions
void b_emlrt_marshallIn(const emlrtStack &sp,
                        const mxArray *a__output_of_sprintf_,
                        const char_T *identifier, char_T y[23])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, char_T y[23])
{
  d_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

void b_error(const emlrtStack &sp, const mxArray *m, emlrtMCInfo &location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 0, nullptr, 1, &pArray, "error",
                        true, &location);
}

const mxArray *b_sprintf(const emlrtStack &sp, const mxArray *m1,
                         const mxArray *m2, emlrtMCInfo &location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 1, &m, 2, &pArrays[0],
                               "sprintf", true, &location);
}

void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2]{1, 14};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[23])
{
  static const int32_T dims[2]{1, 23};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 23);
  emlrtDestroyArray(&src);
}

int32_T div_s32(const emlrtStack &sp, int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(nullptr, (emlrtConstCTX)&sp);
  } else {
    uint32_T u;
    uint32_T u1;
    if (numerator < 0) {
      u = ~static_cast<uint32_T>(numerator) + 1U;
    } else {
      u = static_cast<uint32_T>(numerator);
    }
    if (denominator < 0) {
      u1 = ~static_cast<uint32_T>(denominator) + 1U;
    } else {
      u1 = static_cast<uint32_T>(denominator);
    }
    u /= u1;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -static_cast<int32_T>(u);
    } else {
      quotient = static_cast<int32_T>(u);
    }
  }
  return quotient;
}

void emlrt_marshallIn(const emlrtStack &sp,
                      const mxArray *a__output_of_sprintf_,
                      const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                      const emlrtMsgIdentifier *parentId, char_T y[14])
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

const mxArray *feval(const emlrtStack &sp, const mxArray *m1, const mxArray *m2,
                     const mxArray *m3, emlrtMCInfo &location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 1, &m, 3, &pArrays[0],
                               "feval", true, &location);
}

void feval(const emlrtStack &sp, const mxArray *m, const mxArray *m1,
           emlrtMCInfo &location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 0, nullptr, 2, &pArrays[0], "feval",
                        true, &location);
}

// End of code generation (helperVisualSLAMCodegen_mexutil.cpp)
