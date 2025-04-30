//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// isequal.h
//
// Code generation for function 'isequal'
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
namespace coder {
boolean_T isequal(const real_T varargin_1[2], const real_T varargin_2[2]);

boolean_T isequal(const char_T varargin_1_f1[6], const char_T varargin_1_f2[12],
                  const char_T varargin_2_f1[6],
                  const char_T varargin_2_f2[12]);

} // namespace coder

// End of code generation (isequal.h)
