//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// WarningState.cpp
//
// Code generation for function 'WarningState'
//

// Include files
#include "WarningState.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_mexutil.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRSInfo vcd_emlrtRSI{
    71,                         // lineNo
    "WarningState/callWarning", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\WarningState."
    "m" // pathName
};

static emlrtRSInfo aid_emlrtRSI{
    22,                                            // lineNo
    "matlabCodegenHandle/matlabCodegenDestructor", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\matlabCodegenHandle.m" // pathName
};

static emlrtMCInfo g_emlrtMCI{
    70,                         // lineNo
    27,                         // colNo
    "WarningState/callWarning", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\WarningState."
    "m" // pName
};

static emlrtMCInfo h_emlrtMCI{
    34,                     // lineNo
    21,                     // colNo
    "WarningState/warning", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\WarningState."
    "m" // pName
};

static emlrtMCInfo i_emlrtMCI{
    49,                    // lineNo
    17,                    // colNo
    "WarningState/delete", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\WarningState."
    "m" // pName
};

static emlrtRSInfo cid_emlrtRSI{
    49,                    // lineNo
    "WarningState/delete", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\WarningState."
    "m" // pathName
};

static emlrtRSInfo did_emlrtRSI{
    34,                     // lineNo
    "WarningState/warning", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\WarningState."
    "m" // pathName
};

static emlrtRSInfo iid_emlrtRSI{
    70,                         // lineNo
    "WarningState/callWarning", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\WarningState."
    "m" // pathName
};

// Function Declarations
static int32_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId);

static int32_T emlrt_marshallIn(const emlrtStack &sp,
                                const mxArray *a__output_of_feval_,
                                const char_T *identifier);

static int32_T emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId);

// Function Definitions
static int32_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  int32_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "int32", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<int32_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

static int32_T emlrt_marshallIn(const emlrtStack &sp,
                                const mxArray *a__output_of_feval_,
                                const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  int32_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(a__output_of_feval_), &thisId);
  emlrtDestroyArray(&a__output_of_feval_);
  return y;
}

static int32_T emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = b_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

namespace coder {
namespace internal {
void WarningState::_populateDestructorParams(const emlrtStack *b_sp)
{
  sp = b_sp;
}

WarningState *WarningState::callWarning(const emlrtStack &b_sp,
                                        WarningState &iobj_0)
{
  static const int32_T b_iv[2]{1, 50};
  static const int32_T b_iv1[2]{1, 3};
  static const int32_T b_iv2[2]{1, 3};
  static const char_T u[50]{'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't', 'e',
                            'r', 'n', 'a', 'l', '.', 'E', 'x', 't', 'r', 'i',
                            'n', 's', 'i', 'c', 'W', 'a', 'r', 'n', 'i', 'n',
                            'g', 'M', 'a', 'n', 'a', 'g', 'e', 'r', '.', 'c',
                            'a', 'l', 'l', 'W', 'a', 'r', 'n', 'i', 'n', 'g'};
  static const char_T varargin_1[3]{'o', 'f', 'f'};
  static const char_T varargin_2[3]{'a', 'l', 'l'};
  WarningState *ws;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T b_idx;
  st.prev = &b_sp;
  st.tls = b_sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&b_sp, 50, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&b_sp, 3, m, &varargin_1[0]);
  emlrtAssign(&b_y, m);
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&b_sp, 3, m, &varargin_2[0]);
  emlrtAssign(&c_y, m);
  st.site = &iid_emlrtRSI;
  b_idx = emlrt_marshallIn(st, feval(st, y, b_y, c_y, g_emlrtMCI),
                           "<output of feval>");
  st.site = &vcd_emlrtRSI;
  ws = &(&iobj_0)[1];
  (&iobj_0)[1].idx = b_idx;
  (&iobj_0)[1].matlabCodegenIsDeleted = false;
  (&iobj_0)[1]._populateDestructorParams((const emlrtStack *)&b_sp);
  return ws;
}

WarningState::WarningState()
{
  matlabCodegenIsDeleted = true;
  sp = nullptr;
}

WarningState::~WarningState()
{
  if (!matlabCodegenIsDeleted) {
    emlrtSetIsInDestructor((emlrtCTX *)emlrtRootTLSGlobal, true);
    try {
      matlabCodegenDestructor(sp);
    } catch (...) {
      /* no actions */
    }
    emlrtSetIsInDestructor((emlrtCTX *)emlrtRootTLSGlobal, false);
  }
}

void WarningState::matlabCodegenDestructor(const emlrtStack *b_sp)
{
  static const int32_T b_iv[2]{1, 50};
  static const char_T u[50]{'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't', 'e',
                            'r', 'n', 'a', 'l', '.', 'E', 'x', 't', 'r', 'i',
                            'n', 's', 'i', 'c', 'W', 'a', 'r', 'n', 'i', 'n',
                            'g', 'M', 'a', 'n', 'a', 'g', 'e', 'r', '.', 'd',
                            'e', 'l', 'e', 't', 'e', 'S', 't', 'a', 't', 'e'};
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = b_sp;
  st.tls = b_sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!matlabCodegenIsDeleted) {
    matlabCodegenIsDeleted = true;
    st.site = &aid_emlrtRSI;
    if (idx > 0) {
      y = nullptr;
      m = emlrtCreateCharArray(2, &b_iv[0]);
      emlrtInitCharArrayR2013a(&st, 50, m, &u[0]);
      emlrtAssign(&y, m);
      b_y = nullptr;
      m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
      *static_cast<int32_T *>(emlrtMxGetData(m)) = idx;
      emlrtAssign(&b_y, m);
      b_st.site = &cid_emlrtRSI;
      feval(b_st, y, b_y, i_emlrtMCI);
    }
  }
}

void WarningState::warning(const emlrtStack &b_sp) const
{
  static const int32_T b_iv[2]{1, 51};
  static const char_T u[51]{
      'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't', 'e', 'r', 'n', 'a',
      'l', '.', 'E', 'x', 't', 'r', 'i', 'n', 's', 'i', 'c', 'W', 'a',
      'r', 'n', 'i', 'n', 'g', 'M', 'a', 'n', 'a', 'g', 'e', 'r', '.',
      'r', 'e', 's', 't', 'o', 'r', 'e', 'S', 't', 'a', 't', 'e'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = &b_sp;
  st.tls = b_sp.tls;
  if (idx > 0) {
    y = nullptr;
    m = emlrtCreateCharArray(2, &b_iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)&b_sp, 51, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = nullptr;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *static_cast<int32_T *>(emlrtMxGetData(m)) = idx;
    emlrtAssign(&b_y, m);
    st.site = &did_emlrtRSI;
    feval(st, y, b_y, h_emlrtMCI);
  }
}

} // namespace internal
} // namespace coder

// End of code generation (WarningState.cpp)
