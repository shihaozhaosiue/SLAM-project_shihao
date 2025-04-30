//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ishermitian.cpp
//
// Code generation for function 'ishermitian'
//

// Include files
#include "ishermitian.h"
#include "rt_nonfinite.h"

// Function Definitions
namespace coder {
boolean_T ishermitian(const real_T A[900])
{
  int32_T j;
  boolean_T exitg2;
  boolean_T p;
  p = true;
  j = 0;
  exitg2 = false;
  while ((!exitg2) && (j < 30)) {
    int32_T exitg1;
    int32_T i;
    i = 0;
    do {
      exitg1 = 0;
      if (i <= j) {
        if (!(A[i + 30 * j] == A[j + 30 * i])) {
          p = false;
          exitg1 = 1;
        } else {
          i++;
        }
      } else {
        j++;
        exitg1 = 2;
      }
    } while (exitg1 == 0);
    if (exitg1 == 1) {
      exitg2 = true;
    }
  }
  return p;
}

} // namespace coder

// End of code generation (ishermitian.cpp)
