//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// isequal.cpp
//
// Code generation for function 'isequal'
//

// Include files
#include "isequal.h"
#include "rt_nonfinite.h"

// Function Definitions
namespace coder {
boolean_T isequal(const real_T varargin_1[2], const real_T varargin_2[2])
{
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!(varargin_1[k] == varargin_2[k])) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  return p;
}

boolean_T isequal(const char_T varargin_1_f1[6], const char_T varargin_1_f2[12],
                  const char_T varargin_2_f1[6], const char_T varargin_2_f2[12])
{
  int32_T k;
  boolean_T exitg1;
  boolean_T out;
  boolean_T p;
  p = true;
  out = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (varargin_1_f1[k] != varargin_2_f1[k]) {
      out = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!out) {
    p = false;
  } else {
    out = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 12)) {
      if (varargin_1_f2[k] != varargin_2_f2[k]) {
        out = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
    if (!out) {
      p = false;
    }
  }
  return p;
}

} // namespace coder

// End of code generation (isequal.cpp)
