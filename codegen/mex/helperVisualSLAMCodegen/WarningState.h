//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// WarningState.h
//
// Code generation for function 'WarningState'
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

// Type Definitions
namespace coder {
namespace internal {
class WarningState {
public:
  static WarningState *callWarning(const emlrtStack &b_sp,
                                   WarningState &iobj_0);
  void warning(const emlrtStack &b_sp) const;
  void matlabCodegenDestructor(const emlrtStack *b_sp);
  void _populateDestructorParams(const emlrtStack *b_sp);
  ~WarningState();
  WarningState();
  boolean_T matlabCodegenIsDeleted;
  int32_T idx;

private:
  const emlrtStack *sp;
};

} // namespace internal
} // namespace coder

// End of code generation (WarningState.h)
