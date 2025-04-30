//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperVisualSLAMCodegen_mexutil.h
//
// Code generation for function 'helperVisualSLAMCodegen_mexutil'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void b_emlrt_marshallIn(const emlrtStack &sp,
                        const mxArray *a__output_of_sprintf_,
                        const char_T *identifier, char_T y[23]);

void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, char_T y[23]);

void b_error(const emlrtStack &sp, const mxArray *m, emlrtMCInfo &location);

const mxArray *b_sprintf(const emlrtStack &sp, const mxArray *m1,
                         const mxArray *m2, emlrtMCInfo &location);

void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[14]);

void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[23]);

int32_T div_s32(const emlrtStack &sp, int32_T numerator, int32_T denominator);

void emlrt_marshallIn(const emlrtStack &sp,
                      const mxArray *a__output_of_sprintf_,
                      const char_T *identifier, char_T y[14]);

void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                      const emlrtMsgIdentifier *parentId, char_T y[14]);

const mxArray *feval(const emlrtStack &sp, const mxArray *m1, const mxArray *m2,
                     const mxArray *m3, emlrtMCInfo &location);

void feval(const emlrtStack &sp, const mxArray *m, const mxArray *m1,
           emlrtMCInfo &location);

// End of code generation (helperVisualSLAMCodegen_mexutil.h)
