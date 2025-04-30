//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// bigProduct.cpp
//
// Code generation for function 'bigProduct'
//

// Include files
#include "bigProduct.h"
#include "rt_nonfinite.h"

// Function Definitions
namespace coder {
namespace internal {
int32_T b_bigProduct(int32_T a, int32_T b, int32_T &highorderbits)
{
  int32_T highOrderB;
  int32_T loworderbits;
  int32_T partialResults_idx_0_tmp;
  int32_T partialResults_idx_1;
  int32_T partialResults_idx_2;
  int32_T tmp;
  loworderbits = a >> 16;
  tmp = static_cast<int32_T>(static_cast<uint32_T>(a) & 65535U);
  highOrderB = b >> 16;
  partialResults_idx_2 =
      static_cast<int32_T>(static_cast<uint32_T>(b) & 65535U);
  partialResults_idx_0_tmp = tmp * partialResults_idx_2;
  tmp *= highOrderB;
  partialResults_idx_1 = tmp << 16;
  highorderbits = tmp >> 16;
  tmp = loworderbits * partialResults_idx_2;
  partialResults_idx_2 = tmp << 16;
  highorderbits += tmp >> 16;
  highorderbits += loworderbits * highOrderB;
  if (partialResults_idx_0_tmp > MAX_int32_T - partialResults_idx_1) {
    loworderbits =
        (partialResults_idx_0_tmp + partialResults_idx_1) - MAX_int32_T;
    highorderbits++;
  } else {
    loworderbits = partialResults_idx_0_tmp + partialResults_idx_1;
  }
  if (loworderbits > MAX_int32_T - partialResults_idx_2) {
    loworderbits = (loworderbits + partialResults_idx_2) - MAX_int32_T;
    highorderbits++;
  } else {
    loworderbits += partialResults_idx_2;
  }
  return loworderbits;
}

int32_T bigProduct(int32_T a, int32_T b, int32_T &highorderbits)
{
  int32_T highOrderA;
  int32_T highOrderB;
  int32_T lowOrderB;
  int32_T loworderbits;
  int32_T partialResults_idx_0_tmp;
  int32_T partialResults_idx_1;
  int32_T partialResults_idx_2;
  int32_T tmp;
  loworderbits = 0;
  highOrderA = a >> 16;
  partialResults_idx_2 =
      static_cast<int32_T>(static_cast<uint32_T>(a) & 65535U);
  highOrderB = b >> 16;
  lowOrderB = static_cast<int32_T>(static_cast<uint32_T>(b) & 65535U);
  partialResults_idx_0_tmp = partialResults_idx_2 * lowOrderB;
  tmp = partialResults_idx_2 * highOrderB;
  partialResults_idx_1 = tmp << 16;
  highorderbits = tmp >> 16;
  if (highorderbits <= 0) {
    tmp = highOrderA * lowOrderB;
    partialResults_idx_2 = tmp << 16;
    highorderbits += tmp >> 16;
    if (highorderbits <= 0) {
      highorderbits += highOrderA * highOrderB;
      if (highorderbits <= 0) {
        if (partialResults_idx_0_tmp > MAX_int32_T - partialResults_idx_1) {
          loworderbits =
              (partialResults_idx_0_tmp + partialResults_idx_1) - MAX_int32_T;
          highorderbits++;
        } else {
          loworderbits = partialResults_idx_0_tmp + partialResults_idx_1;
        }
        if (loworderbits > MAX_int32_T - partialResults_idx_2) {
          loworderbits = (loworderbits + partialResults_idx_2) - MAX_int32_T;
          highorderbits++;
        } else {
          loworderbits += partialResults_idx_2;
        }
      }
    }
  }
  return loworderbits;
}

} // namespace internal
} // namespace coder

// End of code generation (bigProduct.cpp)
