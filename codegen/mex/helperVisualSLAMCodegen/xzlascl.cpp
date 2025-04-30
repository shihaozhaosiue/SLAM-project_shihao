//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// xzlascl.cpp
//
// Code generation for function 'xzlascl'
//

// Include files
#include "xzlascl.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <xmmintrin.h>

// Function Definitions
namespace coder {
namespace internal {
namespace reflapack {
void b_xzlascl(real_T cfrom, real_T cto, real_T A[3])
{
  real_T cfromc;
  real_T ctoc;
  boolean_T notdone;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    __m128d b_r;
    real_T cfrom1;
    real_T cto1;
    real_T mul;
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((muDoubleScalarAbs(cfrom1) > muDoubleScalarAbs(ctoc)) &&
        (ctoc != 0.0)) {
      mul = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (muDoubleScalarAbs(cto1) > muDoubleScalarAbs(cfromc)) {
      mul = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }
    b_r = _mm_loadu_pd(&A[0]);
    _mm_storeu_pd(&A[0], _mm_mul_pd(b_r, _mm_set1_pd(mul)));
    A[2] *= mul;
  }
}

void b_xzlascl(real32_T cfrom, real32_T cto, real32_T A[4])
{
  real32_T cfromc;
  real32_T ctoc;
  boolean_T notdone;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    __m128 b_r;
    real32_T cfrom1;
    real32_T cto1;
    real32_T mul;
    cfrom1 = cfromc * 1.97215226E-31F;
    cto1 = ctoc / 5.0706024E+30F;
    if ((muSingleScalarAbs(cfrom1) > muSingleScalarAbs(ctoc)) &&
        (ctoc != 0.0F)) {
      mul = 1.97215226E-31F;
      cfromc = cfrom1;
    } else if (muSingleScalarAbs(cto1) > muSingleScalarAbs(cfromc)) {
      mul = 5.0706024E+30F;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }
    b_r = _mm_loadu_ps(&A[0]);
    _mm_storeu_ps(&A[0], _mm_mul_ps(b_r, _mm_set1_ps(mul)));
  }
}

void c_xzlascl(real_T cfrom, real_T cto, real_T A[4])
{
  real_T cfromc;
  real_T ctoc;
  boolean_T notdone;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    __m128d b_r;
    __m128d r1;
    real_T cfrom1;
    real_T cto1;
    real_T mul;
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((muDoubleScalarAbs(cfrom1) > muDoubleScalarAbs(ctoc)) &&
        (ctoc != 0.0)) {
      mul = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (muDoubleScalarAbs(cto1) > muDoubleScalarAbs(cfromc)) {
      mul = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }
    b_r = _mm_loadu_pd(&A[0]);
    r1 = _mm_set1_pd(mul);
    _mm_storeu_pd(&A[0], _mm_mul_pd(b_r, r1));
    b_r = _mm_loadu_pd(&A[2]);
    _mm_storeu_pd(&A[2], _mm_mul_pd(b_r, r1));
  }
}

void c_xzlascl(real32_T cfrom, real32_T cto, real32_T A[9])
{
  real32_T cfromc;
  real32_T ctoc;
  boolean_T notdone;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    real32_T cfrom1;
    real32_T cto1;
    real32_T mul;
    cfrom1 = cfromc * 1.97215226E-31F;
    cto1 = ctoc / 5.0706024E+30F;
    if ((muSingleScalarAbs(cfrom1) > muSingleScalarAbs(ctoc)) &&
        (ctoc != 0.0F)) {
      mul = 1.97215226E-31F;
      cfromc = cfrom1;
    } else if (muSingleScalarAbs(cto1) > muSingleScalarAbs(cfromc)) {
      mul = 5.0706024E+30F;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }
    for (int32_T j{0}; j < 3; j++) {
      int32_T offset;
      offset = j * 3 - 1;
      A[offset + 1] *= mul;
      A[offset + 2] *= mul;
      A[offset + 3] *= mul;
    }
  }
}

void d_xzlascl(real_T cfrom, real_T cto, real_T A[45])
{
  real_T cfromc;
  real_T ctoc;
  boolean_T notdone;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    real_T cfrom1;
    real_T cto1;
    real_T mul;
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((muDoubleScalarAbs(cfrom1) > muDoubleScalarAbs(ctoc)) &&
        (ctoc != 0.0)) {
      mul = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (muDoubleScalarAbs(cto1) > muDoubleScalarAbs(cfromc)) {
      mul = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }
    for (int32_T i{0}; i <= 42; i += 2) {
      __m128d b_r;
      b_r = _mm_loadu_pd(&A[i]);
      b_r = _mm_mul_pd(b_r, _mm_set1_pd(mul));
      _mm_storeu_pd(&A[i], b_r);
    }
    A[44] *= mul;
  }
}

void d_xzlascl(real32_T cfrom, real32_T cto, real32_T A[16])
{
  real32_T cfromc;
  real32_T ctoc;
  boolean_T notdone;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    real32_T cfrom1;
    real32_T cto1;
    real32_T mul;
    cfrom1 = cfromc * 1.97215226E-31F;
    cto1 = ctoc / 5.0706024E+30F;
    if ((muSingleScalarAbs(cfrom1) > muSingleScalarAbs(ctoc)) &&
        (ctoc != 0.0F)) {
      mul = 1.97215226E-31F;
      cfromc = cfrom1;
    } else if (muSingleScalarAbs(cto1) > muSingleScalarAbs(cfromc)) {
      mul = 5.0706024E+30F;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }
    for (int32_T j{0}; j < 4; j++) {
      int32_T offset;
      offset = (j << 2) - 1;
      A[offset + 1] *= mul;
      A[offset + 2] *= mul;
      A[offset + 3] *= mul;
      A[offset + 4] *= mul;
    }
  }
}

void e_xzlascl(real_T cfrom, real_T cto, real_T A[9])
{
  real_T cfromc;
  real_T ctoc;
  boolean_T notdone;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    real_T cfrom1;
    real_T cto1;
    real_T mul;
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((muDoubleScalarAbs(cfrom1) > muDoubleScalarAbs(ctoc)) &&
        (ctoc != 0.0)) {
      mul = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (muDoubleScalarAbs(cto1) > muDoubleScalarAbs(cfromc)) {
      mul = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }
    for (int32_T j{0}; j < 3; j++) {
      int32_T offset;
      offset = j * 3 - 1;
      A[offset + 1] *= mul;
      A[offset + 2] *= mul;
      A[offset + 3] *= mul;
    }
  }
}

void f_xzlascl(real_T cfrom, real_T cto, real_T A[16])
{
  real_T cfromc;
  real_T ctoc;
  boolean_T notdone;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    real_T cfrom1;
    real_T cto1;
    real_T mul;
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((muDoubleScalarAbs(cfrom1) > muDoubleScalarAbs(ctoc)) &&
        (ctoc != 0.0)) {
      mul = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (muDoubleScalarAbs(cto1) > muDoubleScalarAbs(cfromc)) {
      mul = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }
    for (int32_T j{0}; j < 4; j++) {
      int32_T offset;
      offset = (j << 2) - 1;
      A[offset + 1] *= mul;
      A[offset + 2] *= mul;
      A[offset + 3] *= mul;
      A[offset + 4] *= mul;
    }
  }
}

void xzlascl(real_T cfrom, real_T cto, real_T A[5])
{
  real_T cfromc;
  real_T ctoc;
  boolean_T notdone;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    __m128d b_r;
    __m128d r1;
    real_T cfrom1;
    real_T cto1;
    real_T mul;
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((muDoubleScalarAbs(cfrom1) > muDoubleScalarAbs(ctoc)) &&
        (ctoc != 0.0)) {
      mul = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (muDoubleScalarAbs(cto1) > muDoubleScalarAbs(cfromc)) {
      mul = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }
    b_r = _mm_loadu_pd(&A[0]);
    r1 = _mm_set1_pd(mul);
    _mm_storeu_pd(&A[0], _mm_mul_pd(b_r, r1));
    b_r = _mm_loadu_pd(&A[2]);
    _mm_storeu_pd(&A[2], _mm_mul_pd(b_r, r1));
    A[4] *= mul;
  }
}

void xzlascl(real32_T cfrom, real32_T cto, real32_T A[3])
{
  real32_T cfromc;
  real32_T ctoc;
  boolean_T notdone;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    real32_T cfrom1;
    real32_T cto1;
    real32_T mul;
    cfrom1 = cfromc * 1.97215226E-31F;
    cto1 = ctoc / 5.0706024E+30F;
    if ((muSingleScalarAbs(cfrom1) > muSingleScalarAbs(ctoc)) &&
        (ctoc != 0.0F)) {
      mul = 1.97215226E-31F;
      cfromc = cfrom1;
    } else if (muSingleScalarAbs(cto1) > muSingleScalarAbs(cfromc)) {
      mul = 5.0706024E+30F;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }
    A[0] *= mul;
    A[1] *= mul;
    A[2] *= mul;
  }
}

} // namespace reflapack
} // namespace internal
} // namespace coder

// End of code generation (xzlascl.cpp)
