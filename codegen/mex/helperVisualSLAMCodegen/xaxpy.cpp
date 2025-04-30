//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// xaxpy.cpp
//
// Code generation for function 'xaxpy'
//

// Include files
#include "xaxpy.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>
#include <xmmintrin.h>

// Function Definitions
namespace coder {
namespace internal {
namespace blas {
void b_xaxpy(int32_T n, real_T a, const real_T x[5], int32_T ix0, real_T y[45],
             int32_T iy0)
{
  if ((n >= 1) && (!(a == 0.0))) {
    int32_T i;
    int32_T scalarLB;
    int32_T vectorUB;
    scalarLB = n / 2 * 2;
    vectorUB = scalarLB - 2;
    for (int32_T k{0}; k <= vectorUB; k += 2) {
      __m128d b_r;
      __m128d r1;
      i = (iy0 + k) - 1;
      b_r = _mm_loadu_pd(&x[(ix0 + k) - 1]);
      b_r = _mm_mul_pd(_mm_set1_pd(a), b_r);
      r1 = _mm_loadu_pd(&y[i]);
      b_r = _mm_add_pd(r1, b_r);
      _mm_storeu_pd(&y[i], b_r);
    }
    for (int32_T k{scalarLB}; k < n; k++) {
      i = (iy0 + k) - 1;
      y[i] += a * x[(ix0 + k) - 1];
    }
  }
}

void b_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[25], int32_T iy0)
{
  if (!(a == 0.0)) {
    for (int32_T k{0}; k < n; k++) {
      int32_T i;
      i = (iy0 + k) - 1;
      y[i] += a * y[(ix0 + k) - 1];
    }
  }
}

void b_xaxpy(int32_T n, real32_T a, int32_T ix0, real32_T y[16], int32_T iy0)
{
  if (!(a == 0.0F)) {
    for (int32_T k{0}; k < n; k++) {
      int32_T i;
      i = (iy0 + k) - 1;
      y[i] += a * y[(ix0 + k) - 1];
    }
  }
}

void b_xaxpy(int32_T n, real32_T a, const real32_T x[4], int32_T ix0,
             real32_T y[16], int32_T iy0)
{
  if (!(a == 0.0F)) {
    int32_T i;
    int32_T scalarLB;
    int32_T vectorUB;
    scalarLB = n / 4 * 4;
    vectorUB = scalarLB - 4;
    for (int32_T k{0}; k <= vectorUB; k += 4) {
      __m128 b_r;
      __m128 r1;
      i = (iy0 + k) - 1;
      b_r = _mm_loadu_ps(&x[(ix0 + k) - 1]);
      b_r = _mm_mul_ps(_mm_set1_ps(a), b_r);
      r1 = _mm_loadu_ps(&y[i]);
      b_r = _mm_add_ps(r1, b_r);
      _mm_storeu_ps(&y[i], b_r);
    }
    for (int32_T k{scalarLB}; k < n; k++) {
      i = (iy0 + k) - 1;
      y[i] += a * x[(ix0 + k) - 1];
    }
  }
}

void c_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[81], int32_T iy0)
{
  if (!(a == 0.0)) {
    for (int32_T k{0}; k < n; k++) {
      int32_T i;
      i = (iy0 + k) - 1;
      y[i] += a * y[(ix0 + k) - 1];
    }
  }
}

void c_xaxpy(int32_T n, real_T a, const real_T x[16], int32_T ix0, real_T y[4],
             int32_T iy0)
{
  if (!(a == 0.0)) {
    int32_T i;
    int32_T scalarLB;
    int32_T vectorUB;
    scalarLB = (n / 2) << 1;
    vectorUB = scalarLB - 2;
    for (int32_T k{0}; k <= vectorUB; k += 2) {
      __m128d b_r;
      i = (iy0 + k) - 1;
      b_r = _mm_loadu_pd(&y[i]);
      _mm_storeu_pd(
          &y[i], _mm_add_pd(b_r, _mm_mul_pd(_mm_set1_pd(a),
                                            _mm_loadu_pd(&x[(ix0 + k) - 1]))));
    }
    for (int32_T k{scalarLB}; k < n; k++) {
      i = (iy0 + k) - 1;
      y[i] += a * x[(ix0 + k) - 1];
    }
  }
}

void d_xaxpy(int32_T n, real_T a, const real_T x[4], int32_T ix0, real_T y[16],
             int32_T iy0)
{
  if (!(a == 0.0)) {
    int32_T i;
    int32_T scalarLB;
    int32_T vectorUB;
    scalarLB = n / 2 * 2;
    vectorUB = scalarLB - 2;
    for (int32_T k{0}; k <= vectorUB; k += 2) {
      __m128d b_r;
      __m128d r1;
      i = (iy0 + k) - 1;
      b_r = _mm_loadu_pd(&x[(ix0 + k) - 1]);
      b_r = _mm_mul_pd(_mm_set1_pd(a), b_r);
      r1 = _mm_loadu_pd(&y[i]);
      b_r = _mm_add_pd(r1, b_r);
      _mm_storeu_pd(&y[i], b_r);
    }
    for (int32_T k{scalarLB}; k < n; k++) {
      i = (iy0 + k) - 1;
      y[i] += a * x[(ix0 + k) - 1];
    }
  }
}

void d_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0)
{
  if (!(a == 0.0)) {
    for (int32_T k{0}; k < n; k++) {
      int32_T i;
      i = (iy0 + k) - 1;
      y[i] += a * y[(ix0 + k) - 1];
    }
  }
}

void e_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[16], int32_T iy0)
{
  if (!(a == 0.0)) {
    for (int32_T k{0}; k < n; k++) {
      int32_T i;
      i = (iy0 + k) - 1;
      y[i] += a * y[(ix0 + k) - 1];
    }
  }
}

void xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[45], int32_T iy0)
{
  if (!(a == 0.0)) {
    for (int32_T k{0}; k < n; k++) {
      int32_T i;
      i = (iy0 + k) - 1;
      y[i] += a * y[(ix0 + k) - 1];
    }
  }
}

void xaxpy(int32_T n, real_T a, const real_T x[45], int32_T ix0, real_T y[5],
           int32_T iy0)
{
  if ((n >= 1) && (!(a == 0.0))) {
    int32_T i;
    int32_T scalarLB;
    int32_T vectorUB;
    scalarLB = (n / 2) << 1;
    vectorUB = scalarLB - 2;
    for (int32_T k{0}; k <= vectorUB; k += 2) {
      __m128d b_r;
      i = (iy0 + k) - 1;
      b_r = _mm_loadu_pd(&y[i]);
      _mm_storeu_pd(
          &y[i], _mm_add_pd(b_r, _mm_mul_pd(_mm_set1_pd(a),
                                            _mm_loadu_pd(&x[(ix0 + k) - 1]))));
    }
    for (int32_T k{scalarLB}; k < n; k++) {
      i = (iy0 + k) - 1;
      y[i] += a * x[(ix0 + k) - 1];
    }
  }
}

void xaxpy(real_T a, const real_T x[9], int32_T ix0, real_T y[3])
{
  if (!(a == 0.0)) {
    __m128d b_r;
    b_r = _mm_loadu_pd(&y[1]);
    _mm_storeu_pd(
        &y[1],
        _mm_add_pd(b_r, _mm_mul_pd(_mm_set1_pd(a), _mm_loadu_pd(&x[ix0 - 1]))));
  }
}

void xaxpy(real_T a, const real_T x[3], real_T y[9], int32_T iy0)
{
  if (!(a == 0.0)) {
    __m128d b_r;
    __m128d r1;
    int32_T i;
    i = iy0 - 1;
    b_r = _mm_loadu_pd(&x[1]);
    b_r = _mm_mul_pd(_mm_set1_pd(a), b_r);
    r1 = _mm_loadu_pd(&y[i]);
    b_r = _mm_add_pd(r1, b_r);
    _mm_storeu_pd(&y[i], b_r);
  }
}

void xaxpy(int32_T n, real32_T a, const real32_T x[16], int32_T ix0,
           real32_T y[4], int32_T iy0)
{
  if (!(a == 0.0F)) {
    int32_T i;
    int32_T scalarLB;
    int32_T vectorUB;
    scalarLB = (n / 4) << 2;
    vectorUB = scalarLB - 4;
    for (int32_T k{0}; k <= vectorUB; k += 4) {
      __m128 b_r;
      i = (iy0 + k) - 1;
      b_r = _mm_loadu_ps(&y[i]);
      _mm_storeu_ps(
          &y[i], _mm_add_ps(b_r, _mm_mul_ps(_mm_set1_ps(a),
                                            _mm_loadu_ps(&x[(ix0 + k) - 1]))));
    }
    for (int32_T k{scalarLB}; k < n; k++) {
      i = (iy0 + k) - 1;
      y[i] += a * x[(ix0 + k) - 1];
    }
  }
}

void xaxpy(int32_T n, real32_T a, int32_T ix0, real32_T y[9], int32_T iy0)
{
  if (!(a == 0.0F)) {
    for (int32_T k{0}; k < n; k++) {
      int32_T i;
      i = (iy0 + k) - 1;
      y[i] += a * y[(ix0 + k) - 1];
    }
  }
}

void xaxpy(real32_T a, const real32_T x[9], int32_T ix0, real32_T y[3])
{
  if (!(a == 0.0F)) {
    for (int32_T k{0}; k < 2; k++) {
      y[k + 1] += a * x[(ix0 + k) - 1];
    }
  }
}

void xaxpy(real32_T a, const real32_T x[3], real32_T y[9], int32_T iy0)
{
  if (!(a == 0.0F)) {
    for (int32_T k{0}; k < 2; k++) {
      int32_T i;
      i = (iy0 + k) - 1;
      y[i] += a * x[k + 1];
    }
  }
}

} // namespace blas
} // namespace internal
} // namespace coder

// End of code generation (xaxpy.cpp)
