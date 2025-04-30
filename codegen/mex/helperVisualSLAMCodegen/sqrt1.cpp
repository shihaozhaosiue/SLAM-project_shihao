//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sqrt1.cpp
//
// Code generation for function 'sqrt1'
//

// Include files
#include "sqrt1.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

// Function Definitions
namespace coder {
namespace internal {
namespace scalar {
void c_sqrt(creal32_T &x)
{
  real32_T absxi;
  real32_T absxr;
  real32_T xi;
  real32_T xr;
  xr = x.re;
  xi = x.im;
  if (xi == 0.0F) {
    if (xr < 0.0F) {
      absxr = 0.0F;
      absxi = muSingleScalarSqrt(-xr);
    } else {
      absxr = muSingleScalarSqrt(xr);
      absxi = 0.0F;
    }
  } else if (xr == 0.0F) {
    if (xi < 0.0F) {
      absxr = muSingleScalarSqrt(-xi / 2.0F);
      absxi = -absxr;
    } else {
      absxr = muSingleScalarSqrt(xi / 2.0F);
      absxi = absxr;
    }
  } else if (muSingleScalarIsNaN(xr)) {
    absxr = rtNaNF;
    absxi = rtNaNF;
  } else if (muSingleScalarIsNaN(xi)) {
    absxr = rtNaNF;
    absxi = rtNaNF;
  } else if (muSingleScalarIsInf(xi)) {
    absxr = muSingleScalarAbs(xi);
    absxi = xi;
  } else if (muSingleScalarIsInf(xr)) {
    if (xr < 0.0F) {
      absxr = 0.0F;
      absxi = xi * -xr;
    } else {
      absxr = xr;
      absxi = 0.0F;
    }
  } else {
    absxr = muSingleScalarAbs(xr);
    absxi = muSingleScalarAbs(xi);
    if ((absxr > 8.50705867E+37F) || (absxi > 8.50705867E+37F)) {
      absxr *= 0.5F;
      absxi = muSingleScalarHypot(absxr, absxi * 0.5F);
      if (absxi > absxr) {
        absxr = muSingleScalarSqrt(absxi) *
                muSingleScalarSqrt(absxr / absxi + 1.0F);
      } else {
        absxr = muSingleScalarSqrt(absxi) * 1.41421354F;
      }
    } else {
      absxr = muSingleScalarSqrt((muSingleScalarHypot(absxr, absxi) + absxr) *
                                 0.5F);
    }
    if (xr > 0.0F) {
      absxi = 0.5F * (xi / absxr);
    } else {
      if (xi < 0.0F) {
        absxi = -absxr;
      } else {
        absxi = absxr;
      }
      absxr = 0.5F * (xi / absxi);
    }
  }
  x.re = absxr;
  x.im = absxi;
}

} // namespace scalar
} // namespace internal
} // namespace coder

// End of code generation (sqrt1.cpp)
