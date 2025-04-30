//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// string1.cpp
//
// Code generation for function 'string1'
//

// Include files
#include "string1.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
void rtString::init(const emlrtStack &sp)
{
  static const char_T b_cv[47]{'i', 'm', 'a', 'g', 'e', 's', ':', 'g', 'e', 'o',
                               't', 'r', 'a', 'n', 's', ':', 'i', 'n', 'v', 'a',
                               'l', 'i', 'd', 'T', 'r', 'a', 'n', 's', 'f', 'o',
                               'r', 'm', 'a', 't', 'i', 'o', 'n', 'M', 'a', 't',
                               'r', 'i', 'x', 'S', 'i', 'z', 'e'};
  Value.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, 1, 47);
  for (int32_T i{0}; i < 47; i++) {
    Value[i] = b_cv[i];
  }
}

void rtString::init(const emlrtStack &sp, const char_T t28_Value[4])
{
  Value.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, 1, 4);
  Value[0] = t28_Value[0];
  Value[1] = t28_Value[1];
  Value[2] = t28_Value[2];
  Value[3] = t28_Value[3];
}

} // namespace coder

// End of code generation (string1.cpp)
