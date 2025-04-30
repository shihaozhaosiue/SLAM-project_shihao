//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// mtimes.cpp
//
// Code generation for function 'mtimes'
//

// Include files
#include "mtimes.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "coder_array.h"
#include <cstddef>

// Variable Definitions
static emlrtRTEInfo yp_emlrtRTEI{
    140,      // lineNo
    5,        // colNo
    "mtimes", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
namespace blas {
void b_mtimes(const emlrtStack &sp, const array<real32_T, 2U> &A,
              const real32_T B[9], array<real32_T, 2U> &C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real32_T alpha1;
  real32_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (A.size(0) == 0) {
    C.set_size(&yp_emlrtRTEI, &sp, 0, 3);
  } else {
    st.site = &nn_emlrtRSI;
    b_st.site = &on_emlrtRSI;
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0F;
    beta1 = 0.0F;
    m_t = (ptrdiff_t)A.size(0);
    n_t = (ptrdiff_t)3;
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)A.size(0);
    ldb_t = (ptrdiff_t)3;
    ldc_t = (ptrdiff_t)A.size(0);
    C.set_size(&tn_emlrtRTEI, &b_st, A.size(0), 3);
    sgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &(A.data())[0], &lda_t,
          (real32_T *)&B[0], &ldb_t, &beta1, &(C.data())[0], &ldc_t);
  }
}

void b_mtimes(const emlrtStack &sp, const array<real_T, 2U> &A,
              const real_T B[9], array<real_T, 2U> &C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((A.size(0) == 0) || (A.size(1) == 0)) {
    int32_T loop_ub_tmp;
    C.set_size(&yp_emlrtRTEI, &sp, A.size(0), 3);
    loop_ub_tmp = A.size(0) * 3;
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      C[i] = 0.0;
    }
  } else {
    st.site = &nn_emlrtRSI;
    b_st.site = &on_emlrtRSI;
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A.size(0);
    n_t = (ptrdiff_t)3;
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)A.size(0);
    ldb_t = (ptrdiff_t)3;
    ldc_t = (ptrdiff_t)A.size(0);
    C.set_size(&tn_emlrtRTEI, &b_st, A.size(0), 3);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &(A.data())[0], &lda_t,
          (real_T *)&B[0], &ldb_t, &beta1, &(C.data())[0], &ldc_t);
  }
}

void c_mtimes(const emlrtStack &sp, const array<real32_T, 2U> &A,
              const real32_T B[9], array<real32_T, 2U> &C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real32_T alpha1;
  real32_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((A.size(0) == 0) || (A.size(1) == 0)) {
    int32_T loop_ub_tmp;
    C.set_size(&yp_emlrtRTEI, &sp, A.size(0), 3);
    loop_ub_tmp = A.size(0) * 3;
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      C[i] = 0.0F;
    }
  } else {
    st.site = &nn_emlrtRSI;
    b_st.site = &on_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0F;
    beta1 = 0.0F;
    m_t = (ptrdiff_t)A.size(0);
    n_t = (ptrdiff_t)3;
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)A.size(0);
    ldb_t = (ptrdiff_t)3;
    ldc_t = (ptrdiff_t)A.size(0);
    C.set_size(&tn_emlrtRTEI, &b_st, A.size(0), 3);
    sgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &(A.data())[0], &lda_t,
          (real32_T *)&B[0], &ldb_t, &beta1, &(C.data())[0], &ldc_t);
  }
}

void mtimes(const emlrtStack &sp, const array<real_T, 2U> &A, const real_T B[9],
            array<real_T, 2U> &C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (A.size(0) == 0) {
    C.set_size(&yp_emlrtRTEI, &sp, 0, 3);
  } else {
    st.site = &nn_emlrtRSI;
    b_st.site = &on_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A.size(0);
    n_t = (ptrdiff_t)3;
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)A.size(0);
    ldb_t = (ptrdiff_t)3;
    ldc_t = (ptrdiff_t)A.size(0);
    C.set_size(&tn_emlrtRTEI, &b_st, A.size(0), 3);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &(A.data())[0], &lda_t,
          (real_T *)&B[0], &ldb_t, &beta1, &(C.data())[0], &ldc_t);
  }
}

void mtimes(const emlrtStack &sp, const array<real32_T, 2U> &A,
            const array<real32_T, 2U> &B, array<real32_T, 2U> &C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real32_T alpha1;
  real32_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((A.size(0) == 0) || (B.size(0) == 0) || (B.size(1) == 0)) {
    int32_T loop_ub_tmp;
    C.set_size(&yp_emlrtRTEI, &sp, A.size(0), B.size(0));
    loop_ub_tmp = A.size(0) * B.size(0);
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      C[i] = 0.0F;
    }
  } else {
    st.site = &nn_emlrtRSI;
    b_st.site = &on_emlrtRSI;
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0F;
    beta1 = 0.0F;
    m_t = (ptrdiff_t)A.size(0);
    n_t = (ptrdiff_t)B.size(0);
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)A.size(0);
    ldb_t = (ptrdiff_t)B.size(0);
    ldc_t = (ptrdiff_t)A.size(0);
    C.set_size(&tn_emlrtRTEI, &b_st, A.size(0), B.size(0));
    sgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &(A.data())[0], &lda_t,
          &(B.data())[0], &ldb_t, &beta1, &(C.data())[0], &ldc_t);
  }
}

void mtimes(const emlrtStack &sp, const array<real32_T, 2U> &A,
            const real32_T B[9], array<real32_T, 2U> &C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real32_T alpha1;
  real32_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((A.size(0) == 0) || (A.size(1) == 0)) {
    int32_T loop_ub_tmp;
    C.set_size(&yp_emlrtRTEI, &sp, A.size(0), 3);
    loop_ub_tmp = A.size(0) * 3;
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      C[i] = 0.0F;
    }
  } else {
    st.site = &nn_emlrtRSI;
    b_st.site = &on_emlrtRSI;
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0F;
    beta1 = 0.0F;
    m_t = (ptrdiff_t)A.size(0);
    n_t = (ptrdiff_t)3;
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)A.size(0);
    ldb_t = (ptrdiff_t)3;
    ldc_t = (ptrdiff_t)A.size(0);
    C.set_size(&tn_emlrtRTEI, &b_st, A.size(0), 3);
    sgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &(A.data())[0], &lda_t,
          (real32_T *)&B[0], &ldb_t, &beta1, &(C.data())[0], &ldc_t);
  }
}

} // namespace blas
} // namespace internal
} // namespace coder

// End of code generation (mtimes.cpp)
