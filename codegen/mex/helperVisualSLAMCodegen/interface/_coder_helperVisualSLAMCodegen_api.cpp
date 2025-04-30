//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_helperVisualSLAMCodegen_api.cpp
//
// Code generation for function '_coder_helperVisualSLAMCodegen_api'
//

// Include files
#include "_coder_helperVisualSLAMCodegen_api.h"
#include "helperVisualSLAMCodegen.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_types.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <cstddef>

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               uint8_T ret[307200]);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                             const char_T *identifier, cell_wrap_0 y[128]);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             cell_wrap_0 y[128]);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             uint8_T y[307200]);

static const mxArray *emlrt_marshallOut(const struct0_T &u);

static const mxArray *emlrt_marshallOut(const coder::array<cell_wrap_1, 1U> &u);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               uint8_T ret[307200])
{
  static const int32_T dims[2]{480, 640};
  uint8_T(*b_r)[307200];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "uint8", false, 2U,
                          (const void *)&dims[0]);
  b_r = (uint8_T(*)[307200])emlrtMxGetData(src);
  for (int32_T i{0}; i < 307200; i++) {
    ret[i] = (*b_r)[i];
  }
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                             const char_T *identifier, cell_wrap_0 y[128])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId, y);
  emlrtDestroyArray(&b_nullptr);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             cell_wrap_0 y[128])
{
  emlrtMsgIdentifier thisId;
  int32_T b_iv[2];
  char_T str[11];
  boolean_T b_bv[2];
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  b_bv[0] = false;
  b_iv[0] = 1;
  b_bv[1] = false;
  b_iv[1] = 128;
  emlrtCheckCell((emlrtCTX)&sp, parentId, u, 2U, &b_iv[0], &b_bv[0]);
  for (int32_T i{0}; i < 128; i++) {
    emlrtMexSnprintf(&str[0], (size_t)11U, "%d", i + 1);
    thisId.fIdentifier = &str[0];
    emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetCell((emlrtCTX)&sp, parentId, u, i)),
                     &thisId, y[i].f1);
  }
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             uint8_T y[307200])
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(const struct0_T &u)
{
  static const char_T *sv[6]{"viewIds",        "xyzPoints", "optimizedPoses",
                             "estimatedPoses", "vId",       "addedFramesIdx"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  real_T *c_pData;
  int32_T b_iv[2];
  int32_T i;
  real32_T *b_pData;
  uint32_T *pData;
  y = nullptr;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 6, (const char_T **)&sv[0]));
  b_y = nullptr;
  m = emlrtCreateNumericArray(
      1, ((coder::array<uint32_T, 1U> *)&u.viewIds)->size(), mxUINT32_CLASS,
      mxREAL);
  pData = static_cast<uint32_T *>(emlrtMxGetData(m));
  i = 0;
  for (int32_T b_i{0}; b_i < u.viewIds.size(0); b_i++) {
    pData[i] = u.viewIds[b_i];
    i++;
  }
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "viewIds", b_y, 0);
  c_y = nullptr;
  b_iv[0] = u.xyzPoints.size(0);
  b_iv[1] = 3;
  m = emlrtCreateNumericArray(2, &b_iv[0], mxSINGLE_CLASS, mxREAL);
  b_pData = static_cast<real32_T *>(emlrtMxGetData(m));
  i = 0;
  for (int32_T b_i{0}; b_i < u.xyzPoints.size(0); b_i++) {
    b_pData[i] = u.xyzPoints[b_i];
    i++;
  }
  for (int32_T b_i{0}; b_i < u.xyzPoints.size(0); b_i++) {
    b_pData[i] = u.xyzPoints[b_i + u.xyzPoints.size(0)];
    i++;
  }
  for (int32_T b_i{0}; b_i < u.xyzPoints.size(0); b_i++) {
    b_pData[i] = u.xyzPoints[b_i + u.xyzPoints.size(0) * 2];
    i++;
  }
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "xyzPoints", c_y, 1);
  emlrtSetFieldR2017b(y, 0, "optimizedPoses",
                      emlrt_marshallOut(u.optimizedPoses), 2);
  emlrtSetFieldR2017b(y, 0, "estimatedPoses",
                      emlrt_marshallOut(u.estimatedPoses), 3);
  d_y = nullptr;
  m = emlrtCreateNumericArray(1, ((coder::array<uint32_T, 1U> *)&u.vId)->size(),
                              mxUINT32_CLASS, mxREAL);
  pData = static_cast<uint32_T *>(emlrtMxGetData(m));
  i = 0;
  for (int32_T b_i{0}; b_i < u.vId.size(0); b_i++) {
    pData[i] = u.vId[b_i];
    i++;
  }
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "vId", d_y, 4);
  e_y = nullptr;
  m = emlrtCreateNumericArray(
      1, ((coder::array<real_T, 1U> *)&u.addedFramesIdx)->size(),
      mxDOUBLE_CLASS, mxREAL);
  c_pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.addedFramesIdx.size(0); b_i++) {
    c_pData[i] = u.addedFramesIdx[b_i];
    i++;
  }
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, "addedFramesIdx", e_y, 5);
  return y;
}

static const mxArray *emlrt_marshallOut(const coder::array<cell_wrap_1, 1U> &u)
{
  static const int32_T b_iv[2]{4, 4};
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real32_T *pData;
  y = nullptr;
  emlrtAssign(&y, emlrtCreateCellArrayR2014a(
                      1, ((coder::array<cell_wrap_1, 1U> *)&u)->size()));
  for (int32_T i{0}; i < u.size(0); i++) {
    int32_T i1;
    b_y = nullptr;
    m = emlrtCreateNumericArray(2, (const void *)&b_iv[0], mxSINGLE_CLASS,
                                mxREAL);
    pData = static_cast<real32_T *>(emlrtMxGetData(m));
    i1 = 0;
    for (int32_T b_i{0}; b_i < 4; b_i++) {
      int32_T i2;
      i2 = b_i << 2;
      pData[i1] = u[i].f1[i2];
      pData[i1 + 1] = u[i].f1[i2 + 1];
      pData[i1 + 2] = u[i].f1[i2 + 2];
      pData[i1 + 3] = u[i].f1[i2 + 3];
      i1 += 4;
    }
    emlrtAssign(&b_y, m);
    emlrtSetCell(y, i, b_y);
  }
  return y;
}

void b_helperVisualSLAMCodegen_api(c_helperVisualSLAMCodegenStackD *SD,
                                   const mxArray *prhs, const mxArray **plhs)
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  struct0_T out;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  // Marshall function inputs
  emlrt_marshallIn(st, emlrtAliasP(prhs), "imagesCell", SD->f6.imagesCell);
  // Invoke the target function
  helperVisualSLAMCodegen(SD, &st, SD->f6.imagesCell, &out);
  // Marshall function outputs
  *plhs = emlrt_marshallOut(out);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

// End of code generation (_coder_helperVisualSLAMCodegen_api.cpp)
