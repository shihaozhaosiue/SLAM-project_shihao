//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// partialSort.cpp
//
// Code generation for function 'partialSort'
//

// Include files
#include "partialSort.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "log2.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstring>

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
int32_T partialSort(const emlrtStack &sp, array<real32_T, 2U> &x,
                    real32_T values_data[], uint32_T indices_data[],
                    int32_T &indices_size)
{
  array<int32_T, 2U> iidx;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  int32_T b_indices_data[2];
  int32_T values_size;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  indices_size = 2;
  if (x.size(1) < 2) {
    indices_size = x.size(1);
  }
  values_size = indices_size;
  if (indices_size - 1 >= 0) {
    std::memset(&values_data[0], 0,
                static_cast<uint32_T>(indices_size) * sizeof(real32_T));
    std::memset(&b_indices_data[0], 0,
                static_cast<uint32_T>(indices_size) * sizeof(int32_T));
  }
  if (x.size(1) == 0) {
    if (indices_size - 1 >= 0) {
      std::memset(&indices_data[0], 0,
                  static_cast<uint32_T>(indices_size) * sizeof(uint32_T));
    }
  } else {
    int32_T idx;
    int32_T last;
    if (indices_size == 1) {
      real32_T ex;
      st.site = &vh_emlrtRSI;
      b_st.site = &bi_emlrtRSI;
      c_st.site = &ci_emlrtRSI;
      d_st.site = &di_emlrtRSI;
      e_st.site = &gf_emlrtRSI;
      last = x.size(1);
      if (x.size(1) <= 2) {
        if (x.size(1) == 1) {
          ex = x[0];
          idx = 1;
        } else if ((x[0] > x[1]) || (muSingleScalarIsNaN(x[0]) &&
                                     (!muSingleScalarIsNaN(x[1])))) {
          ex = x[1];
          idx = 2;
        } else {
          ex = x[0];
          idx = 1;
        }
      } else {
        int32_T k;
        f_st.site = &if_emlrtRSI;
        if (!muSingleScalarIsNaN(x[0])) {
          idx = 1;
        } else {
          boolean_T exitg1;
          idx = 0;
          g_st.site = &jf_emlrtRSI;
          if (x.size(1) > 2147483646) {
            h_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(h_st);
          }
          k = 2;
          exitg1 = false;
          while ((!exitg1) && (k <= last)) {
            if (!muSingleScalarIsNaN(x[k - 1])) {
              idx = k;
              exitg1 = true;
            } else {
              k++;
            }
          }
        }
        if (idx == 0) {
          ex = x[0];
          idx = 1;
        } else {
          int32_T a;
          f_st.site = &hf_emlrtRSI;
          ex = x[idx - 1];
          a = idx + 1;
          g_st.site = &kf_emlrtRSI;
          if ((idx + 1 <= x.size(1)) && (x.size(1) > 2147483646)) {
            h_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(h_st);
          }
          for (k = a; k <= last; k++) {
            real32_T f;
            f = x[k - 1];
            if (ex > f) {
              ex = f;
              idx = k;
            }
          }
        }
      }
      values_data[0] = ex;
      b_indices_data[0] = idx;
    } else {
      st.site = &wh_emlrtRSI;
      if (indices_size < b_log2(st, static_cast<real_T>(x.size(1)))) {
        for (int32_T i{0}; i < indices_size; i++) {
          st.site = &xh_emlrtRSI;
          b_st.site = &bi_emlrtRSI;
          c_st.site = &ci_emlrtRSI;
          d_st.site = &di_emlrtRSI;
          e_st.site = &gf_emlrtRSI;
          last = x.size(1);
          if (x.size(1) <= 2) {
            if (x.size(1) == 1) {
              if (i + 1 > indices_size) {
                emlrtDynamicBoundsCheckR2012b(i + 1, 1, indices_size,
                                              &qc_emlrtBCI, &e_st);
              }
              values_data[i] = x[0];
              idx = 1;
            } else if ((x[0] > x[1]) || (muSingleScalarIsNaN(x[0]) &&
                                         (!muSingleScalarIsNaN(x[1])))) {
              if (i + 1 > indices_size) {
                emlrtDynamicBoundsCheckR2012b(i + 1, 1, indices_size,
                                              &qc_emlrtBCI, &e_st);
              }
              values_data[i] = x[1];
              idx = 2;
            } else {
              if (i + 1 > indices_size) {
                emlrtDynamicBoundsCheckR2012b(i + 1, 1, indices_size,
                                              &qc_emlrtBCI, &e_st);
              }
              values_data[i] = x[0];
              idx = 1;
            }
          } else {
            int32_T k;
            f_st.site = &if_emlrtRSI;
            if (!muSingleScalarIsNaN(x[0])) {
              idx = 1;
            } else {
              boolean_T exitg1;
              idx = 0;
              g_st.site = &jf_emlrtRSI;
              if (x.size(1) > 2147483646) {
                h_st.site = &qe_emlrtRSI;
                check_forloop_overflow_error(h_st);
              }
              k = 2;
              exitg1 = false;
              while ((!exitg1) && (k <= last)) {
                if (!muSingleScalarIsNaN(x[k - 1])) {
                  idx = k;
                  exitg1 = true;
                } else {
                  k++;
                }
              }
            }
            if (idx == 0) {
              if (i + 1 > indices_size) {
                emlrtDynamicBoundsCheckR2012b(i + 1, 1, indices_size,
                                              &qc_emlrtBCI, &e_st);
              }
              values_data[i] = x[0];
              idx = 1;
            } else {
              int32_T a;
              real32_T ex;
              f_st.site = &hf_emlrtRSI;
              ex = x[idx - 1];
              a = idx + 1;
              g_st.site = &kf_emlrtRSI;
              if ((idx + 1 <= x.size(1)) && (x.size(1) > 2147483646)) {
                h_st.site = &qe_emlrtRSI;
                check_forloop_overflow_error(h_st);
              }
              for (k = a; k <= last; k++) {
                real32_T f;
                f = x[k - 1];
                if (ex > f) {
                  ex = f;
                  idx = k;
                }
              }
              if (i + 1 > indices_size) {
                emlrtDynamicBoundsCheckR2012b(i + 1, 1, indices_size,
                                              &qc_emlrtBCI, &e_st);
              }
              values_data[i] = ex;
            }
          }
          if (i + 1 > indices_size) {
            emlrtDynamicBoundsCheckR2012b(i + 1, 1, indices_size, &wc_emlrtBCI,
                                          &st);
          }
          b_indices_data[i] = idx;
          st.site = &yh_emlrtRSI;
          if (i + 1 > indices_size) {
            emlrtDynamicBoundsCheckR2012b(i + 1, 1, indices_size, &vc_emlrtBCI,
                                          &st);
          }
          b_st.site = &ki_emlrtRSI;
          if ((idx < 1) || (idx > x.size(1))) {
            emlrtErrorWithMessageIdR2018a(&b_st, &p_emlrtRTEI,
                                          "MATLAB:sub2ind:IndexOutOfRange",
                                          "MATLAB:sub2ind:IndexOutOfRange", 0);
          }
          if (idx > x.size(1)) {
            emlrtDynamicBoundsCheckR2012b(idx, 1, x.size(1), &yc_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          x[idx - 1] = rtInfF;
        }
      } else {
        st.site = &ai_emlrtRSI;
        b_st.site = &li_emlrtRSI;
        ::coder::internal::b_sort(b_st, x, iidx);
        if (indices_size < 1) {
          values_size = 0;
        } else {
          if (x.size(1) < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, x.size(1), &uc_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          if (indices_size > x.size(1)) {
            emlrtDynamicBoundsCheckR2012b(indices_size, 1, x.size(1),
                                          &tc_emlrtBCI, (emlrtConstCTX)&sp);
          }
        }
        for (idx = 0; idx < values_size; idx++) {
          values_data[idx] = x[idx];
        }
        if (indices_size < 1) {
          indices_size = 0;
        } else {
          if (iidx.size(1) < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, iidx.size(1), &sc_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          if (indices_size > iidx.size(1)) {
            emlrtDynamicBoundsCheckR2012b(indices_size, 1, iidx.size(1),
                                          &rc_emlrtBCI, (emlrtConstCTX)&sp);
          }
        }
        for (idx = 0; idx < indices_size; idx++) {
          b_indices_data[idx] = iidx[idx];
        }
      }
    }
    for (idx = 0; idx < indices_size; idx++) {
      last = b_indices_data[idx];
      if (last < 0) {
        last = 0;
      }
      indices_data[idx] = static_cast<uint32_T>(last);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return values_size;
}

} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (partialSort.cpp)
