//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// xzlangeM.cpp
//
// Code generation for function 'xzlangeM'
//

// Include files
#include "xzlangeM.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

// Function Definitions
namespace coder {
namespace internal {
namespace reflapack {
real_T b_xzlangeM(const real_T x[9])
{
  real_T y;
  int32_T k;
  boolean_T exitg1;
  y = 0.0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 9)) {
    real_T absxk;
    absxk = muDoubleScalarAbs(x[k]);
    if (muDoubleScalarIsNaN(absxk)) {
      y = rtNaN;
      exitg1 = true;
    } else {
      if (absxk > y) {
        y = absxk;
      }
      k++;
    }
  }
  return y;
}

real32_T b_xzlangeM(const real32_T x[16])
{
  int32_T k;
  real32_T y;
  boolean_T exitg1;
  y = 0.0F;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 16)) {
    real32_T absxk;
    absxk = muSingleScalarAbs(x[k]);
    if (muSingleScalarIsNaN(absxk)) {
      y = rtNaNF;
      exitg1 = true;
    } else {
      if (absxk > y) {
        y = absxk;
      }
      k++;
    }
  }
  return y;
}

real_T c_xzlangeM(const real_T x[16])
{
  real_T y;
  int32_T k;
  boolean_T exitg1;
  y = 0.0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 16)) {
    real_T absxk;
    absxk = muDoubleScalarAbs(x[k]);
    if (muDoubleScalarIsNaN(absxk)) {
      y = rtNaN;
      exitg1 = true;
    } else {
      if (absxk > y) {
        y = absxk;
      }
      k++;
    }
  }
  return y;
}

real_T xzlangeM(const real_T x[45])
{
  real_T y;
  int32_T k;
  boolean_T exitg1;
  y = 0.0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 45)) {
    real_T absxk;
    absxk = muDoubleScalarAbs(x[k]);
    if (muDoubleScalarIsNaN(absxk)) {
      y = rtNaN;
      exitg1 = true;
    } else {
      if (absxk > y) {
        y = absxk;
      }
      k++;
    }
  }
  return y;
}

real32_T xzlangeM(const real32_T x[9])
{
  int32_T k;
  real32_T y;
  boolean_T exitg1;
  y = 0.0F;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 9)) {
    real32_T absxk;
    absxk = muSingleScalarAbs(x[k]);
    if (muSingleScalarIsNaN(absxk)) {
      y = rtNaNF;
      exitg1 = true;
    } else {
      if (absxk > y) {
        y = absxk;
      }
      k++;
    }
  }
  return y;
}

} // namespace reflapack
} // namespace internal
} // namespace coder

// End of code generation (xzlangeM.cpp)
