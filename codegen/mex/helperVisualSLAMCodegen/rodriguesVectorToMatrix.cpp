//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rodriguesVectorToMatrix.cpp
//
// Code generation for function 'rodriguesVectorToMatrix'
//

// Include files
#include "rodriguesVectorToMatrix.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <cstring>
#include <emmintrin.h>

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace calibration {
void rodriguesVectorToMatrix(const real_T rotationVector[3],
                             real_T rotationMatrix[9])
{
  real_T b_u[9];
  real_T u[3];
  real_T absxk;
  real_T scale;
  real_T t;
  real_T theta;
  scale = 3.3121686421112381E-170;
  absxk = muDoubleScalarAbs(rotationVector[0]);
  if (absxk > 3.3121686421112381E-170) {
    theta = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    theta = t * t;
  }
  absxk = muDoubleScalarAbs(rotationVector[1]);
  if (absxk > scale) {
    t = scale / absxk;
    theta = theta * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    theta += t * t;
  }
  absxk = muDoubleScalarAbs(rotationVector[2]);
  if (absxk > scale) {
    t = scale / absxk;
    theta = theta * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    theta += t * t;
  }
  theta = scale * muDoubleScalarSqrt(theta);
  if (theta < 1.0E-6) {
    std::memset(&rotationMatrix[0], 0, 9U * sizeof(real_T));
    rotationMatrix[0] = 1.0;
    rotationMatrix[4] = 1.0;
    rotationMatrix[8] = 1.0;
  } else {
    int8_T a[9];
    _mm_storeu_pd(&u[0], _mm_div_pd(_mm_loadu_pd(&rotationVector[0]),
                                    _mm_set1_pd(theta)));
    u[2] = rotationVector[2] / theta;
    absxk = muDoubleScalarCos(theta);
    scale = muDoubleScalarSin(theta);
    for (int32_T i{0}; i < 9; i++) {
      a[i] = 0;
    }
    __m128d b_r;
    rotationMatrix[0] = scale * 0.0;
    rotationMatrix[3] = scale * -u[2];
    rotationMatrix[6] = scale * u[1];
    rotationMatrix[1] = scale * u[2];
    rotationMatrix[4] = scale * 0.0;
    rotationMatrix[7] = scale * -u[0];
    rotationMatrix[2] = scale * -u[1];
    rotationMatrix[5] = scale * u[0];
    rotationMatrix[8] = scale * 0.0;
    a[0] = 1;
    b_r = _mm_loadu_pd(&u[0]);
    _mm_storeu_pd(&b_u[0], _mm_mul_pd(b_r, _mm_set1_pd(u[0])));
    b_u[2] = u[0] * u[2];
    a[4] = 1;
    b_r = _mm_loadu_pd(&u[0]);
    _mm_storeu_pd(&b_u[3], _mm_mul_pd(b_r, _mm_set1_pd(u[1])));
    b_u[5] = u[1] * u[2];
    a[8] = 1;
    b_r = _mm_loadu_pd(&u[0]);
    _mm_storeu_pd(&b_u[6], _mm_mul_pd(b_r, _mm_set1_pd(u[2])));
    b_u[8] = u[2] * u[2];
    for (int32_T i{0}; i < 9; i++) {
      rotationMatrix[i] =
          (static_cast<real_T>(a[i]) * absxk + rotationMatrix[i]) +
          (1.0 - absxk) * b_u[i];
    }
  }
}

} // namespace calibration
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (rodriguesVectorToMatrix.cpp)
