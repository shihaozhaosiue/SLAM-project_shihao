//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// quickselect.cpp
//
// Code generation for function 'quickselect'
//

// Include files
#include "quickselect.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Declarations
namespace coder {
namespace internal {
static int32_T thirdOfFive(const array<real32_T, 2U> &v, int32_T ia,
                           int32_T ib);

static int32_T thirdOfFive(const array<real32_T, 1U> &v, int32_T ia,
                           int32_T ib);

} // namespace internal
} // namespace coder

// Function Definitions
namespace coder {
namespace internal {
static int32_T thirdOfFive(const array<real32_T, 2U> &v, int32_T ia, int32_T ib)
{
  int32_T im;
  if ((ia == ib) || (ia + 1 == ib)) {
    im = ia;
  } else if ((ia + 2 == ib) || (ia + 3 == ib)) {
    real32_T v4;
    v4 = v[ia - 1];
    if (v4 < v[ia]) {
      real32_T v5;
      v5 = v[ia + 1];
      if (v[ia] < v5) {
        im = ia + 1;
      } else if (v4 < v5) {
        im = ia + 2;
      } else {
        im = ia;
      }
    } else {
      real32_T v5;
      v5 = v[ia + 1];
      if (v4 < v5) {
        im = ia;
      } else if (v[ia] < v5) {
        im = ia + 2;
      } else {
        im = ia + 1;
      }
    }
  } else {
    int32_T j2;
    int32_T j3;
    int32_T j4;
    int32_T j5;
    real32_T v4;
    real32_T v5;
    v4 = v[ia - 1];
    if (v4 < v[ia]) {
      v5 = v[ia + 1];
      if (v[ia] < v5) {
        im = ia;
        j2 = ia;
        j3 = ia + 2;
      } else if (v4 < v5) {
        im = ia;
        j2 = ia + 1;
        j3 = ia + 1;
      } else {
        im = ia + 2;
        j2 = ia - 1;
        j3 = ia + 1;
      }
    } else {
      v5 = v[ia + 1];
      if (v4 < v5) {
        im = ia + 1;
        j2 = ia - 1;
        j3 = ia + 2;
      } else if (v[ia] < v5) {
        im = ia + 1;
        j2 = ia + 1;
        j3 = ia;
      } else {
        im = ia + 2;
        j2 = ia;
        j3 = ia;
      }
    }
    j4 = ia;
    j5 = ia + 1;
    v4 = v[ia + 2];
    v5 = v[ia + 3];
    if (v5 < v4) {
      j4 = ia + 1;
      j5 = ia;
      v5 = v4;
      v4 = v[ia + 3];
    }
    if (!(v5 < v[im - 1])) {
      if (v5 < v[j2]) {
        im = j5 + 3;
      } else if (v4 < v[j2]) {
        im = j2 + 1;
      } else if (v4 < v[j3 - 1]) {
        im = j4 + 3;
      } else {
        im = j3;
      }
    }
  }
  return im;
}

static int32_T thirdOfFive(const array<real32_T, 1U> &v, int32_T ia, int32_T ib)
{
  int32_T im;
  if ((ia == ib) || (ia + 1 == ib)) {
    im = ia;
  } else if ((ia + 2 == ib) || (ia + 3 == ib)) {
    real32_T v4;
    v4 = v[ia - 1];
    if (v4 < v[ia]) {
      real32_T v5;
      v5 = v[ia + 1];
      if (v[ia] < v5) {
        im = ia + 1;
      } else if (v4 < v5) {
        im = ia + 2;
      } else {
        im = ia;
      }
    } else {
      real32_T v5;
      v5 = v[ia + 1];
      if (v4 < v5) {
        im = ia;
      } else if (v[ia] < v5) {
        im = ia + 2;
      } else {
        im = ia + 1;
      }
    }
  } else {
    int32_T j2;
    int32_T j3;
    int32_T j4;
    int32_T j5;
    real32_T v4;
    real32_T v5;
    v4 = v[ia - 1];
    if (v4 < v[ia]) {
      v5 = v[ia + 1];
      if (v[ia] < v5) {
        im = ia;
        j2 = ia;
        j3 = ia + 2;
      } else if (v4 < v5) {
        im = ia;
        j2 = ia + 1;
        j3 = ia + 1;
      } else {
        im = ia + 2;
        j2 = ia - 1;
        j3 = ia + 1;
      }
    } else {
      v5 = v[ia + 1];
      if (v4 < v5) {
        im = ia + 1;
        j2 = ia - 1;
        j3 = ia + 2;
      } else if (v[ia] < v5) {
        im = ia + 1;
        j2 = ia + 1;
        j3 = ia;
      } else {
        im = ia + 2;
        j2 = ia;
        j3 = ia;
      }
    }
    j4 = ia;
    j5 = ia + 1;
    v4 = v[ia + 2];
    v5 = v[ia + 3];
    if (v5 < v4) {
      j4 = ia + 1;
      j5 = ia;
      v5 = v4;
      v4 = v[ia + 3];
    }
    if (!(v5 < v[im - 1])) {
      if (v5 < v[j2]) {
        im = j5 + 3;
      } else if (v4 < v[j2]) {
        im = j2 + 1;
      } else if (v4 < v[j3 - 1]) {
        im = j4 + 3;
      } else {
        im = j3;
      }
    }
  }
  return im;
}

real32_T quickselect(array<real32_T, 2U> &v, int32_T n, int32_T vlen,
                     int32_T &nfirst, int32_T &nlast)
{
  real32_T vn;
  if (n > vlen) {
    vn = rtNaNF;
    nfirst = 0;
    nlast = 0;
  } else {
    int32_T ia;
    int32_T ib;
    int32_T ilast;
    int32_T ipiv;
    int32_T oldnv;
    boolean_T checkspeed;
    boolean_T exitg1;
    boolean_T isslow;
    ipiv = n;
    ia = 0;
    ib = vlen - 1;
    nfirst = 1;
    ilast = vlen - 1;
    oldnv = vlen;
    checkspeed = false;
    isslow = false;
    exitg1 = false;
    while ((!exitg1) && (ia + 1 < ib + 1)) {
      boolean_T guard1;
      vn = v[ipiv - 1];
      v[ipiv - 1] = v[ib];
      v[ib] = vn;
      ilast = ia;
      ipiv = -1;
      for (int32_T k{ia + 1}; k <= ib; k++) {
        real32_T vk_tmp;
        vk_tmp = v[k - 1];
        if (vk_tmp == vn) {
          v[k - 1] = v[ilast];
          v[ilast] = vk_tmp;
          ipiv++;
          ilast++;
        } else if (vk_tmp < vn) {
          v[k - 1] = v[ilast];
          v[ilast] = vk_tmp;
          ilast++;
        }
      }
      v[ib] = v[ilast];
      v[ilast] = vn;
      guard1 = false;
      if (n <= ilast + 1) {
        nfirst = ilast - ipiv;
        if (n >= nfirst) {
          exitg1 = true;
        } else {
          ib = ilast - 1;
          guard1 = true;
        }
      } else {
        ia = ilast + 1;
        guard1 = true;
      }
      if (guard1) {
        int32_T c;
        c = (ib - ia) + 1;
        if (checkspeed) {
          isslow = (c > oldnv / 2);
          oldnv = c;
        }
        checkspeed = !checkspeed;
        if (isslow) {
          while (c > 1) {
            int32_T ngroupsof5;
            ngroupsof5 = c / 5;
            nlast = c - ngroupsof5 * 5;
            c = ngroupsof5;
            for (int32_T k{0}; k < ngroupsof5; k++) {
              ipiv = (ia + k * 5) + 1;
              ipiv = thirdOfFive(v, ipiv, ipiv + 4) - 1;
              ilast = ia + k;
              vn = v[ilast];
              v[ilast] = v[ipiv];
              v[ipiv] = vn;
            }
            if (nlast > 0) {
              ipiv = (ia + ngroupsof5 * 5) + 1;
              ipiv = thirdOfFive(v, ipiv, (ipiv + nlast) - 1) - 1;
              ilast = ia + ngroupsof5;
              vn = v[ilast];
              v[ilast] = v[ipiv];
              v[ipiv] = vn;
              c = ngroupsof5 + 1;
            }
          }
        } else if (c >= 3) {
          ipiv = ia + static_cast<int32_T>(static_cast<uint32_T>(c - 1) >> 1);
          if (v[ia] < v[ipiv]) {
            if (!(v[ipiv] < v[ib])) {
              if (v[ia] < v[ib]) {
                ipiv = ib;
              } else {
                ipiv = ia;
              }
            }
          } else if (v[ia] < v[ib]) {
            ipiv = ia;
          } else if (v[ipiv] < v[ib]) {
            ipiv = ib;
          }
          if (ipiv + 1 > ia + 1) {
            vn = v[ia];
            v[ia] = v[ipiv];
            v[ipiv] = vn;
          }
        }
        ipiv = ia + 1;
        nfirst = ia + 1;
        ilast = ib;
      }
    }
    vn = v[ilast];
    nlast = ilast + 1;
  }
  return vn;
}

real32_T quickselect(array<real32_T, 1U> &v, int32_T n, int32_T vlen,
                     int32_T &nfirst, int32_T &nlast)
{
  real32_T vn;
  if (n > vlen) {
    vn = rtNaNF;
    nfirst = 0;
    nlast = 0;
  } else {
    int32_T ia;
    int32_T ib;
    int32_T ilast;
    int32_T ipiv;
    int32_T oldnv;
    boolean_T checkspeed;
    boolean_T exitg1;
    boolean_T isslow;
    ipiv = n;
    ia = 0;
    ib = vlen - 1;
    nfirst = 1;
    ilast = vlen - 1;
    oldnv = vlen;
    checkspeed = false;
    isslow = false;
    exitg1 = false;
    while ((!exitg1) && (ia + 1 < ib + 1)) {
      boolean_T guard1;
      vn = v[ipiv - 1];
      v[ipiv - 1] = v[ib];
      v[ib] = vn;
      ilast = ia;
      ipiv = -1;
      for (int32_T k{ia + 1}; k <= ib; k++) {
        real32_T vk_tmp;
        vk_tmp = v[k - 1];
        if (vk_tmp == vn) {
          v[k - 1] = v[ilast];
          v[ilast] = vk_tmp;
          ipiv++;
          ilast++;
        } else if (vk_tmp < vn) {
          v[k - 1] = v[ilast];
          v[ilast] = vk_tmp;
          ilast++;
        }
      }
      v[ib] = v[ilast];
      v[ilast] = vn;
      guard1 = false;
      if (n <= ilast + 1) {
        nfirst = ilast - ipiv;
        if (n >= nfirst) {
          exitg1 = true;
        } else {
          ib = ilast - 1;
          guard1 = true;
        }
      } else {
        ia = ilast + 1;
        guard1 = true;
      }
      if (guard1) {
        int32_T c;
        c = (ib - ia) + 1;
        if (checkspeed) {
          isslow = (c > oldnv / 2);
          oldnv = c;
        }
        checkspeed = !checkspeed;
        if (isslow) {
          while (c > 1) {
            int32_T ngroupsof5;
            ngroupsof5 = c / 5;
            nlast = c - ngroupsof5 * 5;
            c = ngroupsof5;
            for (int32_T k{0}; k < ngroupsof5; k++) {
              ipiv = (ia + k * 5) + 1;
              ipiv = thirdOfFive(v, ipiv, ipiv + 4) - 1;
              ilast = ia + k;
              vn = v[ilast];
              v[ilast] = v[ipiv];
              v[ipiv] = vn;
            }
            if (nlast > 0) {
              ipiv = (ia + ngroupsof5 * 5) + 1;
              ipiv = thirdOfFive(v, ipiv, (ipiv + nlast) - 1) - 1;
              ilast = ia + ngroupsof5;
              vn = v[ilast];
              v[ilast] = v[ipiv];
              v[ipiv] = vn;
              c = ngroupsof5 + 1;
            }
          }
        } else if (c >= 3) {
          ipiv = ia + static_cast<int32_T>(static_cast<uint32_T>(c - 1) >> 1);
          if (v[ia] < v[ipiv]) {
            if (!(v[ipiv] < v[ib])) {
              if (v[ia] < v[ib]) {
                ipiv = ib;
              } else {
                ipiv = ia;
              }
            }
          } else if (v[ia] < v[ib]) {
            ipiv = ia;
          } else if (v[ipiv] < v[ib]) {
            ipiv = ib;
          }
          if (ipiv + 1 > ia + 1) {
            vn = v[ia];
            v[ia] = v[ipiv];
            v[ipiv] = vn;
          }
        }
        ipiv = ia + 1;
        nfirst = ia + 1;
        ilast = ib;
      }
    }
    vn = v[ilast];
    nlast = ilast + 1;
  }
  return vn;
}

} // namespace internal
} // namespace coder

// End of code generation (quickselect.cpp)
