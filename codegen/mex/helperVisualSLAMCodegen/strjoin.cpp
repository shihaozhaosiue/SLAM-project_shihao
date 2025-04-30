//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// strjoin.cpp
//
// Code generation for function 'strjoin'
//

// Include files
#include "strjoin.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"

// Function Definitions
namespace coder {
void strjoin(char_T joinedStr_data[], int32_T joinedStr_size[2])
{
  static const char_T c_f1[6]{'V', 'i', 'e', 'w', 'I', 'd'};
  joinedStr_size[0] = 1;
  joinedStr_size[1] = 20;
  for (int32_T j{0}; j < 6; j++) {
    joinedStr_data[j] = c_f1[j];
  }
  joinedStr_data[6] = ',';
  joinedStr_data[7] = ' ';
  for (int32_T j{0}; j < 12; j++) {
    joinedStr_data[j + 8] = cv6[j];
  }
}

} // namespace coder

// End of code generation (strjoin.cpp)
