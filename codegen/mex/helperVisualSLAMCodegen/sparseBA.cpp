//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sparseBA.cpp
//
// Code generation for function 'sparseBA'
//

// Include files
#include "sparseBA.h"
#include "affine3d.h"
#include "rigid3d.h"
#include "rigid3dImpl.h"
#include "rigidtform3d.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRSInfo hxb_emlrtRSI{
    444,                          // lineNo
    "inOutTypeMatchPreConjugate", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo ixb_emlrtRSI{
    445,                          // lineNo
    "inOutTypeMatchPreConjugate", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\sparseBA.m" // pathName
};

static emlrtRSInfo jxb_emlrtRSI{
    49,                // lineNo
    "rigid3d/rigid3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\rigid3d.m" // pathName
};

static emlrtRSInfo kxb_emlrtRSI{
    50,                // lineNo
    "rigid3d/rigid3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\rigid3d.m" // pathName
};

static emlrtRSInfo lxb_emlrtRSI{
    86,                        // lineNo
    "rigid3dImpl/rigid3dImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+"
    "internal\\rigid3dImpl.m" // pathName
};

static emlrtRSInfo mxb_emlrtRSI{
    87,                        // lineNo
    "rigid3dImpl/rigid3dImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+"
    "internal\\rigid3dImpl.m" // pathName
};

static emlrtRSInfo nxb_emlrtRSI{
    98,                        // lineNo
    "rigid3dImpl/rigid3dImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+"
    "internal\\rigid3dImpl.m" // pathName
};

static emlrtRSInfo oxb_emlrtRSI{
    102,                       // lineNo
    "rigid3dImpl/rigid3dImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+"
    "internal\\rigid3dImpl.m" // pathName
};

static emlrtRTEInfo vd_emlrtRTEI{
    99,                        // lineNo
    21,                        // colNo
    "rigid3dImpl/rigid3dImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+"
    "internal\\rigid3dImpl.m" // pName
};

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace codegen {
namespace bundleAdjust {
void inOutTypeMatchPreConjugate(const emlrtStack &sp, const real32_T R[9],
                                const real32_T t[3],
                                b_rigidtform3d &refinedPose)
{
  affine3d b;
  rigid3d pose;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T T_tmp;
  real32_T T[16];
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hxb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &jxb_emlrtRSI;
  c_st.site = &lxb_emlrtRSI;
  images::internal::rigid3dImpl::validateRotationMatrix(c_st, R);
  c_st.site = &mxb_emlrtRSI;
  images::internal::rigid3dImpl::validateTranslationVector(c_st, t);
  for (int32_T i{0}; i < 3; i++) {
    T_tmp = i << 2;
    T[T_tmp] = R[3 * i];
    T[T_tmp + 1] = R[3 * i + 1];
    T[T_tmp + 2] = R[3 * i + 2];
    T[i + 12] = 0.0F;
    T[T_tmp + 3] = t[i];
  }
  T[15] = 1.0F;
  c_st.site = &nxb_emlrtRSI;
  if (!rigid3d::isTransformationMatrixRigid(c_st, T)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &vd_emlrtRTEI,
                                  "images:geotrans:invalidRigidMatrix",
                                  "images:geotrans:invalidRigidMatrix", 0);
  }
  c_st.site = &oxb_emlrtRSI;
  pose.AffineTform.init(c_st, T);
  b_st.site = &kxb_emlrtRSI;
  c_st.site = &lxb_emlrtRSI;
  images::internal::rigid3dImpl::validateRotationMatrix(c_st, R);
  c_st.site = &mxb_emlrtRSI;
  images::internal::rigid3dImpl::validateTranslationVector(c_st, t);
  for (int32_T i{0}; i < 3; i++) {
    T_tmp = i << 2;
    T[T_tmp] = R[3 * i];
    T[T_tmp + 1] = R[3 * i + 1];
    T[T_tmp + 2] = R[3 * i + 2];
    T[i + 12] = 0.0F;
    T[T_tmp + 3] = t[i];
  }
  T[15] = 1.0F;
  c_st.site = &nxb_emlrtRSI;
  if (!rigid3d::isTransformationMatrixRigid(c_st, T)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &vd_emlrtRTEI,
                                  "images:geotrans:invalidRigidMatrix",
                                  "images:geotrans:invalidRigidMatrix", 0);
  }
  c_st.site = &oxb_emlrtRSI;
  b.init(c_st, T);
  for (int32_T i{0}; i < 4; i++) {
    T_tmp = i << 2;
    T[T_tmp] = pose.AffineTform.T[i];
    T[T_tmp + 1] = pose.AffineTform.T[i + 4];
    T[T_tmp + 2] = pose.AffineTform.T[i + 8];
    T[T_tmp + 3] = pose.AffineTform.T[i + 12];
  }
  st.site = &ixb_emlrtRSI;
  refinedPose.b_init(st, T);
}

} // namespace bundleAdjust
} // namespace codegen
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (sparseBA.cpp)
