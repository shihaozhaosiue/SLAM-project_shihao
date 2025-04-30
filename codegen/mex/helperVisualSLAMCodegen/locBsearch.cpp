//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// locBsearch.cpp
//
// Code generation for function 'locBsearch'
//

// Include files
#include "locBsearch.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
int32_T b_sparse_locBsearch(const array<int32_T, 1U> &x, real_T xi,
                            int32_T xstart, int32_T xend, boolean_T &found)
{
  int32_T n;
  if (xstart < xend) {
    if (xi < x[xstart - 1]) {
      n = xstart - 1;
      found = false;
    } else {
      int32_T high_i;
      high_i = xend;
      n = xstart;
      while (high_i > n + 1) {
        int32_T mid_i;
        mid_i = (n >> 1) + (high_i >> 1);
        if (((static_cast<uint32_T>(n) & 1U) == 1U) &&
            ((static_cast<uint32_T>(high_i) & 1U) == 1U)) {
          mid_i++;
        }
        if (xi >= x[mid_i - 1]) {
          n = mid_i;
        } else {
          high_i = mid_i;
        }
      }
      found = (x[n - 1] == xi);
    }
  } else if (xstart == xend) {
    n = xstart - 1;
    found = false;
  } else {
    n = 0;
    found = false;
  }
  return n;
}

int32_T sparse_locBsearch(const array<int32_T, 1U> &x, int32_T xi,
                          int32_T xstart, int32_T xend, boolean_T &found)
{
  int32_T n;
  if (xstart < xend) {
    if (xi < x[xstart - 1]) {
      n = xstart - 1;
      found = false;
    } else {
      int32_T high_i;
      high_i = xend;
      n = xstart;
      while (high_i > n + 1) {
        int32_T mid_i;
        mid_i = (n >> 1) + (high_i >> 1);
        if (((static_cast<uint32_T>(n) & 1U) == 1U) &&
            ((static_cast<uint32_T>(high_i) & 1U) == 1U)) {
          mid_i++;
        }
        if (xi >= x[mid_i - 1]) {
          n = mid_i;
        } else {
          high_i = mid_i;
        }
      }
      found = (x[n - 1] == xi);
    }
  } else if (xstart == xend) {
    n = xstart - 1;
    found = false;
  } else {
    n = 0;
    found = false;
  }
  return n;
}

} // namespace coder

// End of code generation (locBsearch.cpp)
