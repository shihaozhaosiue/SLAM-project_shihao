//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// randperm.cpp
//
// Code generation for function 'randperm'
//

// Include files
#include "randperm.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rand.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRTEInfo rf_emlrtRTEI{
    12,         // lineNo
    15,         // colNo
    "randperm", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m" // pName
};

// Function Definitions
namespace coder {
void randperm(const emlrtStack &sp, real_T n, real_T p[3])
{
  if (!(n == muDoubleScalarFloor(n))) {
    emlrtErrorWithMessageIdR2018a(&sp, &rf_emlrtRTEI,
                                  "MATLAB:randperm:inputType",
                                  "MATLAB:randperm:inputType", 0);
  }
  if (!(n >= 3.0)) {
    emlrtErrorWithMessageIdR2018a(&sp, &cb_emlrtRTEI,
                                  "MATLAB:randperm:inputKTooLarge",
                                  "MATLAB:randperm:inputKTooLarge", 0);
  }
  p[1] = 0.0;
  p[2] = 0.0;
  if (n <= 3.0) {
    real_T j;
    p[0] = 1.0;
    j = b_rand() * 2.0;
    j = muDoubleScalarFloor(j);
    p[1] = p[static_cast<int32_T>(j + 1.0) - 1];
    p[static_cast<int32_T>(j + 1.0) - 1] = 2.0;
    j = b_rand() * 3.0;
    j = muDoubleScalarFloor(j);
    p[2] = p[static_cast<int32_T>(j + 1.0) - 1];
    p[static_cast<int32_T>(j + 1.0) - 1] = 3.0;
  } else if (n / 4.0 <= 3.0) {
    real_T j;
    real_T newEntry;
    real_T nleftm1;
    real_T pt;
    real_T selectedLoc;
    nleftm1 = 0.0;
    selectedLoc = n;
    pt = 3.0 / n;
    newEntry = b_rand();
    while (newEntry > pt) {
      nleftm1++;
      selectedLoc--;
      pt += (1.0 - pt) * (3.0 / selectedLoc);
    }
    nleftm1++;
    j = b_rand();
    j = muDoubleScalarFloor(j);
    p[0] = 0.0;
    p[static_cast<int32_T>(j + 1.0) - 1] = nleftm1;
    selectedLoc = n - nleftm1;
    pt = 2.0 / selectedLoc;
    newEntry = b_rand();
    while (newEntry > pt) {
      nleftm1++;
      selectedLoc--;
      pt += (1.0 - pt) * (2.0 / selectedLoc);
    }
    nleftm1++;
    j = b_rand() * 2.0;
    j = muDoubleScalarFloor(j);
    p[1] = p[static_cast<int32_T>(j + 1.0) - 1];
    p[static_cast<int32_T>(j + 1.0) - 1] = nleftm1;
    selectedLoc = n - nleftm1;
    pt = 1.0 / selectedLoc;
    newEntry = b_rand();
    while (newEntry > pt) {
      nleftm1++;
      selectedLoc--;
      pt += (1.0 - pt) * (1.0 / selectedLoc);
    }
    nleftm1++;
    j = b_rand() * 3.0;
    j = muDoubleScalarFloor(j);
    p[2] = p[static_cast<int32_T>(j + 1.0) - 1];
    p[static_cast<int32_T>(j + 1.0) - 1] = nleftm1;
  } else {
    real_T hashTbl[3];
    real_T link[3];
    real_T loc[3];
    real_T val[3];
    real_T newEntry;
    hashTbl[0] = 0.0;
    link[0] = 0.0;
    val[0] = 0.0;
    loc[0] = 0.0;
    hashTbl[1] = 0.0;
    link[1] = 0.0;
    val[1] = 0.0;
    loc[1] = 0.0;
    hashTbl[2] = 0.0;
    link[2] = 0.0;
    val[2] = 0.0;
    loc[2] = 0.0;
    newEntry = 1.0;
    for (int32_T m{0}; m < 3; m++) {
      real_T j;
      real_T nleftm1;
      real_T pt;
      real_T selectedLoc;
      nleftm1 = n - (static_cast<real_T>(m) + 1.0);
      selectedLoc = b_rand() * (nleftm1 + 1.0);
      selectedLoc = muDoubleScalarFloor(selectedLoc);
      if (muDoubleScalarIsNaN(selectedLoc) ||
          muDoubleScalarIsInf(selectedLoc)) {
        pt = rtNaN;
      } else if (selectedLoc == 0.0) {
        pt = 0.0;
      } else {
        pt = muDoubleScalarRem(selectedLoc, 3.0);
        if (pt == 0.0) {
          pt = 0.0;
        } else if (pt < 0.0) {
          pt += 3.0;
        }
      }
      j = hashTbl[static_cast<int32_T>(pt + 1.0) - 1];
      while ((j > 0.0) && (loc[static_cast<int32_T>(j) - 1] != selectedLoc)) {
        j = link[static_cast<int32_T>(j) - 1];
      }
      if (j > 0.0) {
        p[m] = val[static_cast<int32_T>(j) - 1] + 1.0;
      } else {
        p[m] = selectedLoc + 1.0;
        j = newEntry;
        newEntry++;
        loc[static_cast<int32_T>(j) - 1] = selectedLoc;
        link[static_cast<int32_T>(j) - 1] =
            hashTbl[static_cast<int32_T>(pt + 1.0) - 1];
        hashTbl[static_cast<int32_T>(pt + 1.0) - 1] = j;
      }
      if (m + 1 < 3) {
        if (muDoubleScalarIsInf(nleftm1)) {
          selectedLoc = rtNaN;
        } else {
          selectedLoc = muDoubleScalarRem(nleftm1, 3.0);
        }
        selectedLoc = hashTbl[static_cast<int32_T>(selectedLoc + 1.0) - 1];
        while ((selectedLoc > 0.0) &&
               (loc[static_cast<int32_T>(selectedLoc) - 1] != nleftm1)) {
          selectedLoc = link[static_cast<int32_T>(selectedLoc) - 1];
        }
        if (selectedLoc > 0.0) {
          val[static_cast<int32_T>(j) - 1] =
              val[static_cast<int32_T>(selectedLoc) - 1];
        } else {
          val[static_cast<int32_T>(j) - 1] = nleftm1;
        }
      }
    }
  }
}

} // namespace coder

// End of code generation (randperm.cpp)
