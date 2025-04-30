//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// vecnorm.cpp
//
// Code generation for function 'vecnorm'
//

// Include files
#include "vecnorm.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo yy_emlrtRSI{
    56,        // lineNo
    "vecnorm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\vecnorm.m" // pathName
};

static emlrtRSInfo yxb_emlrtRSI{
    51,        // lineNo
    "vecnorm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\vecnorm.m" // pathName
};

static emlrtRSInfo ayb_emlrtRSI{
    52,        // lineNo
    "vecnorm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\vecnorm.m" // pathName
};

static emlrtRTEInfo ht_emlrtRTEI{
    56,        // lineNo
    5,         // colNo
    "vecnorm", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\vecnorm.m" // pName
};

static emlrtRTEInfo ieb_emlrtRTEI{
    50,        // lineNo
    24,        // colNo
    "vecnorm", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\vecnorm.m" // pName
};

// Function Definitions
namespace coder {
void b_vecnorm(const emlrtStack &sp, const array<real32_T, 2U> &x,
               array<real32_T, 1U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &yy_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  loop_ub = x.size(0);
  y.set_size(&ht_emlrtRTEI, &st, x.size(0));
  for (int32_T j{0}; j < loop_ub; j++) {
    y[j] = 0.0F;
  }
  b_st.site = &aab_emlrtRSI;
  c_st.site = &bab_emlrtRSI;
  if (x.size(0) > 2147483646) {
    d_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (int32_T j{0}; j < loop_ub; j++) {
    real32_T absxk;
    real32_T scale;
    real32_T t;
    real32_T yv;
    scale = 1.29246971E-26F;
    absxk = muSingleScalarAbs(x[j]);
    if (absxk > 1.29246971E-26F) {
      yv = 1.0F;
      scale = absxk;
    } else {
      t = absxk / 1.29246971E-26F;
      yv = t * t;
    }
    absxk = muSingleScalarAbs(x[j + loop_ub]);
    if (absxk > scale) {
      t = scale / absxk;
      yv = yv * t * t + 1.0F;
      scale = absxk;
    } else {
      t = absxk / scale;
      yv += t * t;
    }
    y[j] = scale * muSingleScalarSqrt(yv);
  }
}

void vecnorm(const emlrtStack &sp, const array<real32_T, 2U> &x,
             array<real32_T, 2U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T ncols_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  ncols_tmp = x.size(1);
  y.set_size(&ieb_emlrtRTEI, &sp, 1, x.size(1));
  st.site = &yxb_emlrtRSI;
  if (x.size(1) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T j{0}; j < ncols_tmp; j++) {
    int32_T ix0;
    real32_T b_y;
    real32_T scale;
    st.site = &ayb_emlrtRSI;
    ix0 = j * 3 + 3;
    b_st.site = &hg_emlrtRSI;
    b_y = 0.0F;
    scale = 1.29246971E-26F;
    c_st.site = &ig_emlrtRSI;
    if ((ix0 - 2 <= ix0) && (ix0 > 2147483646)) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T k{ix0 - 2}; k <= ix0; k++) {
      real32_T absxk;
      absxk = muSingleScalarAbs(x[k - 1]);
      if (absxk > scale) {
        real32_T t;
        t = scale / absxk;
        b_y = b_y * t * t + 1.0F;
        scale = absxk;
      } else {
        real32_T t;
        t = absxk / scale;
        b_y += t * t;
      }
    }
    y[j] = scale * muSingleScalarSqrt(b_y);
  }
}

void vecnorm(const emlrtStack &sp, const array<real32_T, 2U> &x,
             array<real32_T, 1U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &yy_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  loop_ub = x.size(0);
  y.set_size(&ht_emlrtRTEI, &st, x.size(0));
  for (int32_T j{0}; j < loop_ub; j++) {
    y[j] = 0.0F;
  }
  b_st.site = &aab_emlrtRSI;
  c_st.site = &bab_emlrtRSI;
  if (x.size(0) > 2147483646) {
    d_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (int32_T j{0}; j < loop_ub; j++) {
    real32_T absxk;
    real32_T scale;
    real32_T t;
    real32_T yv;
    scale = 1.29246971E-26F;
    absxk = muSingleScalarAbs(x[j]);
    if (absxk > 1.29246971E-26F) {
      yv = 1.0F;
      scale = absxk;
    } else {
      t = absxk / 1.29246971E-26F;
      yv = t * t;
    }
    absxk = muSingleScalarAbs(x[j + loop_ub]);
    if (absxk > scale) {
      t = scale / absxk;
      yv = yv * t * t + 1.0F;
      scale = absxk;
    } else {
      t = absxk / scale;
      yv += t * t;
    }
    absxk = muSingleScalarAbs(x[j + (loop_ub << 1)]);
    if (absxk > scale) {
      t = scale / absxk;
      yv = yv * t * t + 1.0F;
      scale = absxk;
    } else {
      t = absxk / scale;
      yv += t * t;
    }
    y[j] = scale * muSingleScalarSqrt(yv);
  }
}

} // namespace coder

// End of code generation (vecnorm.cpp)
