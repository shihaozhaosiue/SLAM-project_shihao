//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rcond.cpp
//
// Code generation for function 'rcond'
//

// Include files
#include "rcond.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

// Function Definitions
namespace coder {
real32_T rcond(const real32_T A[4])
{
  int32_T j;
  int32_T jA;
  real32_T normA;
  real32_T result;
  real32_T s;
  boolean_T exitg1;
  result = 0.0F;
  normA = 0.0F;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 2)) {
    jA = j << 1;
    s = muSingleScalarAbs(A[jA]) + muSingleScalarAbs(A[jA + 1]);
    if (muSingleScalarIsNaN(s)) {
      normA = rtNaNF;
      exitg1 = true;
    } else {
      if (s > normA) {
        normA = s;
      }
      j++;
    }
  }
  if (!(normA == 0.0F)) {
    real32_T b_A[4];
    b_A[0] = A[0];
    b_A[1] = A[1];
    b_A[2] = A[2];
    b_A[3] = A[3];
    jA = 0;
    if (muSingleScalarAbs(A[1]) > muSingleScalarAbs(A[0])) {
      jA = 1;
    }
    if (A[jA] != 0.0F) {
      if (jA != 0) {
        b_A[0] = A[1];
        b_A[1] = A[0];
        b_A[2] = A[3];
        b_A[3] = A[2];
      }
      b_A[1] /= b_A[0];
    }
    if (b_A[2] != 0.0F) {
      b_A[3] += b_A[1] * -b_A[2];
    }
    jA = 1;
    int32_T exitg2;
    do {
      exitg2 = 0;
      if (jA + 1 > 0) {
        if (b_A[jA + (jA << 1)] == 0.0F) {
          exitg2 = 1;
        } else {
          jA--;
        }
      } else {
        int32_T iter;
        int32_T jump;
        int32_T kase;
        real32_T x[2];
        real32_T ainvnm;
        ainvnm = 0.0F;
        iter = 2;
        kase = 1;
        jump = 1;
        j = 0;
        x[0] = 0.5F;
        x[1] = 0.5F;
        int32_T exitg3;
        do {
          exitg3 = 0;
          if (kase == 1) {
            for (int32_T b_j{0}; b_j < 2; b_j++) {
              int32_T i;
              jA = (b_j + (b_j << 1)) + 1;
              i = 1 - b_j;
              for (int32_T b_i{0}; b_i < i; b_i++) {
                x[b_j + 1] -= x[b_j] * b_A[jA];
              }
            }
            for (int32_T b_j{1}; b_j >= 0; b_j--) {
              jA = b_j + (b_j << 1);
              x[b_j] /= b_A[jA];
              for (int32_T b_i{0}; b_i < b_j; b_i++) {
                x[b_j - 1] -= x[b_j] * b_A[jA - 1];
              }
            }
          } else {
            for (int32_T b_j{0}; b_j < 2; b_j++) {
              jA = b_j << 1;
              s = x[b_j];
              for (int32_T b_i{0}; b_i < b_j; b_i++) {
                s -= b_A[jA] * x[0];
              }
              x[b_j] = s / b_A[jA + b_j];
            }
            for (int32_T b_j{1}; b_j >= 0; b_j--) {
              int32_T i;
              jA = b_j << 1;
              s = x[b_j];
              i = b_j + 2;
              for (int32_T b_i{2}; b_i >= i; b_i--) {
                s -= b_A[jA + 1] * x[1];
              }
              x[b_j] = s;
            }
          }
          if (jump == 1) {
            real32_T ainvnm_tmp;
            s = muSingleScalarAbs(x[0]);
            ainvnm_tmp = muSingleScalarAbs(x[1]);
            ainvnm = s + ainvnm_tmp;
            if ((!muSingleScalarIsInf(ainvnm)) &&
                (!muSingleScalarIsNaN(ainvnm))) {
              if (s > 1.17549435E-38F) {
                x[0] /= s;
              } else {
                x[0] = 1.0F;
              }
              if (ainvnm_tmp > 1.17549435E-38F) {
                x[1] /= ainvnm_tmp;
              } else {
                x[1] = 1.0F;
              }
              kase = 2;
              jump = 2;
            } else {
              exitg3 = 1;
            }
          } else if (jump == 2) {
            j = 0;
            if (!(muSingleScalarAbs(x[1]) <= muSingleScalarAbs(x[0]))) {
              j = 1;
            }
            iter = 2;
            x[0] = 0.0F;
            x[1] = 0.0F;
            x[j] = 1.0F;
            kase = 1;
            jump = 3;
          } else if (jump == 3) {
            real32_T ainvnm_tmp;
            s = muSingleScalarAbs(x[0]);
            ainvnm_tmp = muSingleScalarAbs(x[1]);
            ainvnm = s + ainvnm_tmp;
            if (ainvnm <= x[0]) {
              x[0] = 1.0F;
              x[1] = -2.0F;
              kase = 1;
              jump = 5;
            } else {
              if (s > 1.17549435E-38F) {
                x[0] /= s;
              } else {
                x[0] = 1.0F;
              }
              if (ainvnm_tmp > 1.17549435E-38F) {
                x[1] /= ainvnm_tmp;
              } else {
                x[1] = 1.0F;
              }
              kase = 2;
              jump = 4;
            }
          } else if (jump == 4) {
            jA = j;
            j = 0;
            if (!(muSingleScalarAbs(x[1]) <= muSingleScalarAbs(x[0]))) {
              j = 1;
            }
            if ((muSingleScalarAbs(x[jA]) != muSingleScalarAbs(x[j])) &&
                (iter <= 5)) {
              iter++;
              x[0] = 0.0F;
              x[1] = 0.0F;
              x[j] = 1.0F;
              kase = 1;
              jump = 3;
            } else {
              x[0] = 1.0F;
              x[1] = -2.0F;
              kase = 1;
              jump = 5;
            }
          } else if (jump == 5) {
            s = 2.0F * (muSingleScalarAbs(x[0]) + muSingleScalarAbs(x[1])) /
                3.0F / 2.0F;
            if (s > ainvnm) {
              ainvnm = s;
            }
            exitg3 = 1;
          }
        } while (exitg3 == 0);
        if (ainvnm != 0.0F) {
          result = 1.0F / ainvnm / normA;
        }
        if (muSingleScalarIsNaN(result)) {
          boolean_T p;
          p = false;
          for (jA = 0; jA < 4; jA++) {
            if (p || muSingleScalarIsNaN(b_A[jA])) {
              p = true;
            }
          }
          if (!p) {
            result = 0.0F;
          }
        }
        exitg2 = 1;
      }
    } while (exitg2 == 0);
  }
  return result;
}

} // namespace coder

// End of code generation (rcond.cpp)
