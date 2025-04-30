//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperVisualSLAMCodegen.h
//
// Code generation for function 'helperVisualSLAMCodegen'
//

#pragma once

// Include files
#include "helperVisualSLAMCodegen_types.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void b_and(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
           const coder::array<boolean_T, 1U> &in2,
           const coder::array<boolean_T, 1U> &in3);

void c_and(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
           const coder::array<boolean_T, 1U> &in2);

emlrtCTX emlrtGetRootTLSGlobal();

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

void helperVisualSLAMCodegen(c_helperVisualSLAMCodegenStackD *SD,
                             const emlrtStack *sp,
                             const cell_wrap_0 imagesCell[128], struct0_T *out);

void times(const emlrtStack &sp, coder::array<real32_T, 1U> &in1,
           const coder::array<real32_T, 1U> &in2);

// End of code generation (helperVisualSLAMCodegen.h)
