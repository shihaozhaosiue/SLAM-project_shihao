//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// string1.h
//
// Code generation for function 'string1'
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
class rtString {
public:
  void init(const emlrtStack &sp, const char_T t28_Value[4]);
  void init(const emlrtStack &sp);
  array<char_T, 2U> Value;
};

} // namespace coder

// End of code generation (string1.h)
