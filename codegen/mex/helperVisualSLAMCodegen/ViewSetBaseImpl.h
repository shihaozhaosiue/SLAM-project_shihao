//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ViewSetBaseImpl.h
//
// Code generation for function 'ViewSetBaseImpl'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Definitions
namespace coder {
class ViewSetBaseImpl {
public:
  static uint32_T checkViewId(const emlrtStack &sp, real_T viewId);
  static void checkViewId(const emlrtStack &sp, const uint32_T *viewId);
  static void checkViewIds(const emlrtStack &sp,
                           const array<uint32_T, 1U> &viewIds);
};

} // namespace coder

// End of code generation (ViewSetBaseImpl.h)
