//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// triangulate.cpp
//
// Code generation for function 'triangulate'
//

// Include files
#include "triangulate.h"
#include "bsxfun.h"
#include "combineVectorElements.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen.h"
#include "helperVisualSLAMCodegen_data.h"
#include "ixfun.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "svd1.h"
#include "blas.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstddef>
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo
    xx_emlrtRSI{
        111,           // lineNo
        "triangulate", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    yx_emlrtRSI{
        127,           // lineNo
        "triangulate", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    ay_emlrtRSI{
        128,           // lineNo
        "triangulate", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    by_emlrtRSI{
        130,           // lineNo
        "triangulate", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    cy_emlrtRSI{
        131,           // lineNo
        "triangulate", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    dy_emlrtRSI{
        132,           // lineNo
        "triangulate", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    ey_emlrtRSI{
        133,           // lineNo
        "triangulate", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    fy_emlrtRSI{
        136,           // lineNo
        "triangulate", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    gy_emlrtRSI{
        142,           // lineNo
        "triangulate", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    hy_emlrtRSI{
        143,           // lineNo
        "triangulate", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    iy_emlrtRSI{
        144,           // lineNo
        "triangulate", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    jy_emlrtRSI{
        146,           // lineNo
        "triangulate", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    ky_emlrtRSI{
        149,           // lineNo
        "triangulate", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    ly_emlrtRSI{
        158,           // lineNo
        "parseInputs", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    my_emlrtRSI{
        159,           // lineNo
        "parseInputs", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    ny_emlrtRSI{
        166,           // lineNo
        "parsePoints", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    oy_emlrtRSI{
        198,                   // lineNo
        "parseCameraMatrices", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    py_emlrtRSI{
        207,                   // lineNo
        "parseCameraMatrices", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    qy_emlrtRSI{
        217,                    // lineNo
        "validateCameraMatrix", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    sy_emlrtRSI{
        229,              // lineNo
        "compute3dPoint", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    ty_emlrtRSI{
        237,             // lineNo
        "projectPoints", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    uy_emlrtRSI{
        238,             // lineNo
        "projectPoints", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    vy_emlrtRSI{
        240,             // lineNo
        "projectPoints", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtECInfo
    hb_emlrtECI{
        1,             // nDims
        150,           // lineNo
        18,            // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtECInfo
    ib_emlrtECI{
        2,             // nDims
        147,           // lineNo
        9,             // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtECInfo
    jb_emlrtECI{
        2,             // nDims
        146,           // lineNo
        21,            // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtECInfo
    kb_emlrtECI{
        2,             // nDims
        145,           // lineNo
        9,             // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtECInfo
    lb_emlrtECI{
        2,             // nDims
        144,           // lineNo
        21,            // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtBCInfo
    cf_emlrtBCI{
        -1,            // iFirst
        -1,            // iLast
        136,           // lineNo
        19,            // colNo
        "",            // aName
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m", // pName
        0 // checkKind
    };

static emlrtBCInfo
    df_emlrtBCI{
        -1,            // iFirst
        -1,            // iLast
        136,           // lineNo
        65,            // colNo
        "",            // aName
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m", // pName
        0 // checkKind
    };

static emlrtBCInfo
    ef_emlrtBCI{
        -1,            // iFirst
        -1,            // iLast
        136,           // lineNo
        53,            // colNo
        "",            // aName
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m", // pName
        0 // checkKind
    };

static emlrtECInfo
    mb_emlrtECI{
        1,             // nDims
        132,           // lineNo
        19,            // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtECInfo
    nb_emlrtECI{
        1,             // nDims
        132,           // lineNo
        20,            // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtBCInfo
    ut_emlrtBCI{
        -1,            // iFirst
        -1,            // iLast
        144,           // lineNo
        29,            // colNo
        "",            // aName
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m", // pName
        0 // checkKind
    };

static emlrtBCInfo
    vt_emlrtBCI{
        -1,            // iFirst
        -1,            // iLast
        145,           // lineNo
        17,            // colNo
        "",            // aName
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m", // pName
        0 // checkKind
    };

static emlrtBCInfo
    wt_emlrtBCI{
        -1,            // iFirst
        -1,            // iLast
        146,           // lineNo
        29,            // colNo
        "",            // aName
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m", // pName
        0 // checkKind
    };

static emlrtBCInfo
    xt_emlrtBCI{
        -1,            // iFirst
        -1,            // iLast
        147,           // lineNo
        17,            // colNo
        "",            // aName
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m", // pName
        0 // checkKind
    };

static emlrtRTEInfo
    ns_emlrtRTEI{
        125,           // lineNo
        17,            // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo os_emlrtRTEI{
    245,   // lineNo
    5,     // colNo
    "cat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pName
};

static emlrtRTEInfo ps_emlrtRTEI{
    245,   // lineNo
    14,    // colNo
    "cat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pName
};

static emlrtRTEInfo
    qs_emlrtRTEI{
        132,           // lineNo
        20,            // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    rs_emlrtRTEI{
        132,           // lineNo
        5,             // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    ss_emlrtRTEI{
        136,           // lineNo
        41,            // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    ts_emlrtRTEI{
        144,           // lineNo
        21,            // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    us_emlrtRTEI{
        145,           // lineNo
        9,             // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    vs_emlrtRTEI{
        144,           // lineNo
        5,             // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    ws_emlrtRTEI{
        146,           // lineNo
        21,            // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    xs_emlrtRTEI{
        147,           // lineNo
        9,             // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    ys_emlrtRTEI{
        146,           // lineNo
        5,             // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    at_emlrtRTEI{
        149,           // lineNo
        5,             // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    bt_emlrtRTEI{
        237,           // lineNo
        17,            // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    ct_emlrtRTEI{
        238,           // lineNo
        1,             // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    dt_emlrtRTEI{
        239,           // lineNo
        1,             // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    et_emlrtRTEI{
        240,           // lineNo
        29,            // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    ft_emlrtRTEI{
        240,           // lineNo
        52,            // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    bub_emlrtRTEI{
        175,           // lineNo
        5,             // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    cub_emlrtRTEI{
        176,           // lineNo
        5,             // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRTEInfo
    afc_emlrtRTEI{
        132,           // lineNo
        19,            // colNo
        "triangulate", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pName
    };

static emlrtRSInfo
    oid_emlrtRSI{
        150,           // lineNo
        "triangulate", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    bjd_emlrtRSI{
        147,           // lineNo
        "triangulate", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

static emlrtRSInfo
    cjd_emlrtRSI{
        145,           // lineNo
        "triangulate", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\triangulate.m" // pathName
    };

// Function Declarations
static void binary_expand_op_16(const emlrtStack &sp,
                                coder::array<real32_T, 2U> &in1,
                                const coder::array<real32_T, 2U> &in2,
                                const coder::array<real32_T, 2U> &in3);

static void binary_expand_op_17(const emlrtStack &sp,
                                coder::array<real32_T, 2U> &in1,
                                const coder::array<real32_T, 2U> &in2,
                                const coder::array<real32_T, 2U> &in3);

static void binary_expand_op_40(const emlrtStack &sp,
                                coder::array<real32_T, 2U> &in1,
                                const coder::array<real32_T, 2U> &in2,
                                const coder::array<real32_T, 2U> &in3);

static void binary_expand_op_41(const emlrtStack &sp,
                                coder::array<real32_T, 2U> &in1,
                                const coder::array<real32_T, 2U> &in2,
                                const coder::array<real32_T, 2U> &in3);

namespace coder {
static void b_projectPoints(const emlrtStack &sp,
                            const array<real32_T, 2U> &points3d,
                            const real32_T P_data[], const int32_T P_size[2],
                            array<real32_T, 2U> &points2d,
                            array<boolean_T, 1U> &isInFrontOfCamera);

static void compute3dPoint(const emlrtStack &sp, const array<real32_T, 2U> &A,
                           real32_T point3d[3]);

static void
parseInputs(const emlrtStack &sp, const array<real32_T, 2U> &matchedPoints1,
            const array<real32_T, 2U> &matchedPoints2,
            const real_T varargin_1[12], const real32_T varargin_2_data[],
            const int32_T varargin_2_size[2], array<real32_T, 2U> &points1,
            array<real32_T, 2U> &points2, real32_T camMatrix1[12]);

static void
parseInputs(const emlrtStack &sp, const array<real32_T, 2U> &matchedPoints1,
            const array<real32_T, 2U> &matchedPoints2,
            const real32_T varargin_1[12], const real32_T varargin_2[12],
            array<real32_T, 2U> &points1, array<real32_T, 2U> &points2);

static void projectPoints(const emlrtStack &sp,
                          const array<real32_T, 2U> &points3d,
                          const real32_T P[12], array<real32_T, 2U> &points2d,
                          array<boolean_T, 1U> &isInFrontOfCamera);

} // namespace coder
static void minus(const emlrtStack &sp, coder::array<real32_T, 2U> &in1,
                  const coder::array<real32_T, 2U> &in2);

static void times(const emlrtStack &sp, coder::array<real32_T, 2U> &in1,
                  const coder::array<real32_T, 2U> &in2);

// Function Definitions
static void binary_expand_op_16(const emlrtStack &sp,
                                coder::array<real32_T, 2U> &in1,
                                const coder::array<real32_T, 2U> &in2,
                                const coder::array<real32_T, 2U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in1.set_size(&xs_emlrtRTEI, &sp, 1, in1.size(1));
  if (in3.size(1) == 1) {
    loop_ub = in2.size(1);
  } else {
    loop_ub = in3.size(1);
  }
  in1.set_size(&xs_emlrtRTEI, &sp, in1.size(0), loop_ub);
  stride_0_1 = (in2.size(1) != 1);
  stride_1_1 = (in3.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = in2[2 * (i * stride_0_1) + 1] - in3[2 * (i * stride_1_1) + 1];
  }
}

static void binary_expand_op_17(const emlrtStack &sp,
                                coder::array<real32_T, 2U> &in1,
                                const coder::array<real32_T, 2U> &in2,
                                const coder::array<real32_T, 2U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in1.set_size(&ws_emlrtRTEI, &sp, 1, in1.size(1));
  if (in3.size(1) == 1) {
    loop_ub = in2.size(1);
  } else {
    loop_ub = in3.size(1);
  }
  in1.set_size(&ws_emlrtRTEI, &sp, in1.size(0), loop_ub);
  stride_0_1 = (in2.size(1) != 1);
  stride_1_1 = (in3.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = in2[2 * (i * stride_0_1)] - in3[2 * (i * stride_1_1)];
  }
}

static void binary_expand_op_40(const emlrtStack &sp,
                                coder::array<real32_T, 2U> &in1,
                                const coder::array<real32_T, 2U> &in2,
                                const coder::array<real32_T, 2U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in1.set_size(&xs_emlrtRTEI, &sp, 1, in1.size(1));
  if (in3.size(1) == 1) {
    loop_ub = in2.size(1);
  } else {
    loop_ub = in3.size(1);
  }
  in1.set_size(&xs_emlrtRTEI, &sp, in1.size(0), loop_ub);
  stride_0_1 = (in2.size(1) != 1);
  stride_1_1 = (in3.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] =
        in2[in2.size(0) * (i * stride_0_1) + 1] - in3[2 * (i * stride_1_1) + 1];
  }
}

static void binary_expand_op_41(const emlrtStack &sp,
                                coder::array<real32_T, 2U> &in1,
                                const coder::array<real32_T, 2U> &in2,
                                const coder::array<real32_T, 2U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in1.set_size(&ws_emlrtRTEI, &sp, 1, in1.size(1));
  if (in3.size(1) == 1) {
    loop_ub = in2.size(1);
  } else {
    loop_ub = in3.size(1);
  }
  in1.set_size(&ws_emlrtRTEI, &sp, in1.size(0), loop_ub);
  stride_0_1 = (in2.size(1) != 1);
  stride_1_1 = (in3.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = in2[in2.size(0) * (i * stride_0_1)] - in3[2 * (i * stride_1_1)];
  }
}

namespace coder {
static void b_projectPoints(const emlrtStack &sp,
                            const array<real32_T, 2U> &points3d,
                            const real32_T P_data[], const int32_T P_size[2],
                            array<real32_T, 2U> &points2d,
                            array<boolean_T, 1U> &isInFrontOfCamera)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  array<real32_T, 2U> b_points2dHomog;
  array<real32_T, 2U> b_r;
  array<real32_T, 2U> c_points2dHomog;
  array<real32_T, 2U> points2dHomog;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T loop_ub;
  int32_T result_tmp;
  real32_T alpha1;
  real32_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  int8_T input_sizes_idx_1;
  int8_T sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &ty_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  if (points3d.size(0) != 0) {
    result_tmp = points3d.size(0);
  } else {
    result_tmp = 0;
  }
  c_st.site = &jj_emlrtRSI;
  if ((points3d.size(0) != result_tmp) && (points3d.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((points3d.size(0) != result_tmp) && (points3d.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (result_tmp == 0);
  if (empty_non_axis_sizes || (points3d.size(0) != 0)) {
    input_sizes_idx_1 = 3;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (points3d.size(0) != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  b_r.set_size(&bt_emlrtRTEI, &b_st, result_tmp,
               input_sizes_idx_1 + sizes_idx_1);
  loop_ub = input_sizes_idx_1;
  for (int32_T i{0}; i < loop_ub; i++) {
    for (int32_T i1{0}; i1 < result_tmp; i1++) {
      b_r[i1 + b_r.size(0) * i] = points3d[i1 + result_tmp * i];
    }
  }
  loop_ub = sizes_idx_1;
  for (int32_T i{0}; i < loop_ub; i++) {
    for (int32_T i1{0}; i1 < result_tmp; i1++) {
      b_r[i1 + b_r.size(0) * input_sizes_idx_1] = 1.0F;
    }
  }
  st.site = &uy_emlrtRSI;
  b_st.site = &mn_emlrtRSI;
  if (P_size[1] != b_r.size(1)) {
    if ((b_r.size(0) == 1) && (b_r.size(1) == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &u_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &v_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &ln_emlrtRSI;
  if ((b_r.size(0) == 0) || (b_r.size(1) == 0)) {
    points2dHomog.set_size(&ct_emlrtRTEI, &b_st, 3, result_tmp);
    result_tmp = 3 * b_r.size(0);
    for (int32_T i{0}; i < result_tmp; i++) {
      points2dHomog[i] = 0.0F;
    }
  } else {
    c_st.site = &nn_emlrtRSI;
    d_st.site = &on_emlrtRSI;
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0F;
    beta1 = 0.0F;
    m_t = (ptrdiff_t)3;
    n_t = (ptrdiff_t)b_r.size(0);
    k_t = (ptrdiff_t)P_size[1];
    lda_t = (ptrdiff_t)3;
    ldb_t = (ptrdiff_t)b_r.size(0);
    ldc_t = (ptrdiff_t)3;
    points2dHomog.set_size(&tn_emlrtRTEI, &d_st, 3, result_tmp);
    sgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real32_T *)&P_data[0],
          &lda_t, &(b_r.data())[0], &ldb_t, &beta1, &(points2dHomog.data())[0],
          &ldc_t);
  }
  loop_ub = points2dHomog.size(1);
  isInFrontOfCamera.set_size(&dt_emlrtRTEI, &sp, points2dHomog.size(1));
  b_points2dHomog.set_size(&et_emlrtRTEI, &sp, 2, points2dHomog.size(1));
  c_points2dHomog.set_size(&ft_emlrtRTEI, &sp, 1, points2dHomog.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    isInFrontOfCamera[i] = (points2dHomog[3 * i + 2] > 0.0F);
    b_points2dHomog[2 * i] = points2dHomog[3 * i];
    b_points2dHomog[2 * i + 1] = points2dHomog[3 * i + 1];
    c_points2dHomog[i] = points2dHomog[3 * i + 2];
  }
  st.site = &vy_emlrtRSI;
  bsxfun(st, b_points2dHomog, c_points2dHomog, points2d);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void compute3dPoint(const emlrtStack &sp, const array<real32_T, 2U> &A,
                           real32_T point3d[3])
{
  array<real32_T, 2U> U1;
  array<real32_T, 2U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T nx_tmp;
  real32_T V1[16];
  real32_T s1_data[4];
  boolean_T p;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &sy_emlrtRSI;
  b_st.site = &am_emlrtRSI;
  c_st.site = &dm_emlrtRSI;
  d_st.site = &em_emlrtRSI;
  nx_tmp = A.size(0) << 2;
  p = true;
  e_st.site = &fm_emlrtRSI;
  if (nx_tmp > 2147483646) {
    f_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(f_st);
  }
  for (int32_T k{0}; k < nx_tmp; k++) {
    if ((!p) || (muSingleScalarIsInf(A[k]) || muSingleScalarIsNaN(A[k]))) {
      p = false;
    }
  }
  if (p) {
    b_st.site = &bm_emlrtRSI;
    internal::c_svd(b_st, A, U1, s1_data, V1);
  } else {
    b_r.set_size(&np_emlrtRTEI, &st, A.size(0), 4);
    nx_tmp = A.size(0) << 2;
    for (int32_T k{0}; k < nx_tmp; k++) {
      b_r[k] = 0.0F;
    }
    b_st.site = &cm_emlrtRSI;
    internal::c_svd(b_st, b_r, U1, s1_data, V1);
    for (int32_T k{0}; k < 16; k++) {
      V1[k] = rtNaNF;
    }
  }
  point3d[0] = V1[12] / V1[15];
  point3d[1] = V1[13] / V1[15];
  point3d[2] = V1[14] / V1[15];
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void
parseInputs(const emlrtStack &sp, const array<real32_T, 2U> &matchedPoints1,
            const array<real32_T, 2U> &matchedPoints2,
            const real_T varargin_1[12], const real32_T varargin_2_data[],
            const int32_T varargin_2_size[2], array<real32_T, 2U> &points1,
            array<real32_T, 2U> &points2, real32_T camMatrix1[12])
{
  static real_T dv[2]{0.0, 2.0};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  int32_T k;
  uint32_T b_varargin_1[2];
  uint32_T varargin_2[2];
  boolean_T exitg1;
  boolean_T p;
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
  dv[0U] = rtNaN;
  st.site = &ly_emlrtRSI;
  b_st.site = &ny_emlrtRSI;
  c_st.site = &vk_emlrtRSI;
  d_st.site = &xk_emlrtRSI;
  e_st.site = &yk_emlrtRSI;
  f_st.site = &al_emlrtRSI;
  g_st.site = &xf_emlrtRSI;
  h_st.site = &be_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    if (p) {
      d = dv[k];
      if ((!(d != d)) && (matchedPoints1.size(k) != 2)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &h_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:triangulate:incorrectSize", 3, 4, 14, "matchedPoints1");
  }
  c_st.site = &wk_emlrtRSI;
  d_st.site = &xk_emlrtRSI;
  e_st.site = &yk_emlrtRSI;
  f_st.site = &al_emlrtRSI;
  g_st.site = &xf_emlrtRSI;
  h_st.site = &be_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    if (p) {
      d = dv[k];
      if ((!(d != d)) && (matchedPoints2.size(k) != 2)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &h_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:triangulate:incorrectSize", 3, 4, 14, "matchedPoints2");
  }
  b_varargin_1[0] = static_cast<uint32_T>(matchedPoints1.size(0));
  varargin_2[0] = static_cast<uint32_T>(matchedPoints2.size(0));
  b_varargin_1[1] = 2U;
  varargin_2[1] = 2U;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (static_cast<int32_T>(b_varargin_1[k]) !=
        static_cast<int32_T>(varargin_2[k])) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &bb_emlrtRTEI,
                                  "vision:points:numPtsMismatch",
                                  "vision:points:numPtsMismatch", 6, 4, 14,
                                  "matchedPoints1", 4, 14, "matchedPoints2");
  }
  k = matchedPoints1.size(0);
  points1.set_size(&bub_emlrtRTEI, &st, 2, matchedPoints1.size(0));
  for (i = 0; i < k; i++) {
    points1[2 * i] = matchedPoints1[i];
    points1[2 * i + 1] = matchedPoints1[i + matchedPoints1.size(0)];
  }
  k = matchedPoints2.size(0);
  points2.set_size(&cub_emlrtRTEI, &st, 2, matchedPoints2.size(0));
  for (i = 0; i < k; i++) {
    points2[2 * i] = matchedPoints2[i];
    points2[2 * i + 1] = matchedPoints2[i + matchedPoints2.size(0)];
  }
  st.site = &my_emlrtRSI;
  b_st.site = &oy_emlrtRSI;
  c_st.site = &qy_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 12)) {
    if ((!muDoubleScalarIsInf(varargin_1[k])) &&
        (!muDoubleScalarIsNaN(varargin_1[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:triangulate:expectedFinite", 3, 4, 13, "cameraMatrix1");
  }
  b_st.site = &py_emlrtRSI;
  c_st.site = &qy_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    if ((!p) || (k + 3 != varargin_2_size[k])) {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:triangulate:incorrectSize", 3, 4, 13, "cameraMatrix2");
  }
  d_st.site = &be_emlrtRSI;
  p = true;
  i = 3 * varargin_2_size[1];
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i - 1)) {
    if ((!muSingleScalarIsInf(varargin_2_data[k])) &&
        (!muSingleScalarIsNaN(varargin_2_data[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:triangulate:expectedFinite", 3, 4, 13, "cameraMatrix2");
  }
  for (i = 0; i < 12; i++) {
    camMatrix1[i] = static_cast<real32_T>(varargin_1[i]);
  }
}

static void
parseInputs(const emlrtStack &sp, const array<real32_T, 2U> &matchedPoints1,
            const array<real32_T, 2U> &matchedPoints2,
            const real32_T varargin_1[12], const real32_T varargin_2[12],
            array<real32_T, 2U> &points1, array<real32_T, 2U> &points2)
{
  static real_T dv[2]{0.0, 2.0};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  real_T d;
  int32_T k;
  int32_T loop_ub;
  uint32_T b_varargin_1[2];
  uint32_T b_varargin_2[2];
  boolean_T exitg1;
  boolean_T p;
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
  dv[0U] = rtNaN;
  st.site = &ly_emlrtRSI;
  b_st.site = &ny_emlrtRSI;
  c_st.site = &vk_emlrtRSI;
  d_st.site = &xk_emlrtRSI;
  e_st.site = &yk_emlrtRSI;
  f_st.site = &al_emlrtRSI;
  g_st.site = &xf_emlrtRSI;
  h_st.site = &be_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    if (p) {
      d = dv[k];
      if ((!(d != d)) && (matchedPoints1.size(k) != 2)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &h_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:triangulate:incorrectSize", 3, 4, 14, "matchedPoints1");
  }
  c_st.site = &wk_emlrtRSI;
  d_st.site = &xk_emlrtRSI;
  e_st.site = &yk_emlrtRSI;
  f_st.site = &al_emlrtRSI;
  g_st.site = &xf_emlrtRSI;
  h_st.site = &be_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    if (p) {
      d = dv[k];
      if ((!(d != d)) && (matchedPoints2.size(k) != 2)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &h_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:triangulate:incorrectSize", 3, 4, 14, "matchedPoints2");
  }
  b_varargin_1[0] = static_cast<uint32_T>(matchedPoints1.size(0));
  b_varargin_2[0] = static_cast<uint32_T>(matchedPoints2.size(0));
  b_varargin_1[1] = static_cast<uint32_T>(matchedPoints1.size(1));
  b_varargin_2[1] = static_cast<uint32_T>(matchedPoints2.size(1));
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (static_cast<int32_T>(b_varargin_1[k]) !=
        static_cast<int32_T>(b_varargin_2[k])) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &bb_emlrtRTEI,
                                  "vision:points:numPtsMismatch",
                                  "vision:points:numPtsMismatch", 6, 4, 14,
                                  "matchedPoints1", 4, 14, "matchedPoints2");
  }
  k = matchedPoints1.size(1);
  loop_ub = matchedPoints1.size(0);
  points1.set_size(&bub_emlrtRTEI, &st, matchedPoints1.size(1),
                   matchedPoints1.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    for (int32_T i1{0}; i1 < k; i1++) {
      points1[i1 + points1.size(0) * i] =
          matchedPoints1[i + matchedPoints1.size(0) * i1];
    }
  }
  k = matchedPoints2.size(1);
  loop_ub = matchedPoints2.size(0);
  points2.set_size(&cub_emlrtRTEI, &st, matchedPoints2.size(1),
                   matchedPoints2.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    for (int32_T i1{0}; i1 < k; i1++) {
      points2[i1 + points2.size(0) * i] =
          matchedPoints2[i + matchedPoints2.size(0) * i1];
    }
  }
  st.site = &my_emlrtRSI;
  b_st.site = &oy_emlrtRSI;
  c_st.site = &qy_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 12)) {
    if ((!muSingleScalarIsInf(varargin_1[k])) &&
        (!muSingleScalarIsNaN(varargin_1[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:triangulate:expectedFinite", 3, 4, 13, "cameraMatrix1");
  }
  b_st.site = &py_emlrtRSI;
  c_st.site = &qy_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 12)) {
    if ((!muSingleScalarIsInf(varargin_2[k])) &&
        (!muSingleScalarIsNaN(varargin_2[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:triangulate:expectedFinite", 3, 4, 13, "cameraMatrix2");
  }
}

static void projectPoints(const emlrtStack &sp,
                          const array<real32_T, 2U> &points3d,
                          const real32_T P[12], array<real32_T, 2U> &points2d,
                          array<boolean_T, 1U> &isInFrontOfCamera)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  array<real32_T, 2U> b_points2dHomog;
  array<real32_T, 2U> b_r;
  array<real32_T, 2U> c_points2dHomog;
  array<real32_T, 2U> points2dHomog;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T loop_ub;
  int32_T result_tmp;
  real32_T alpha1;
  real32_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  int8_T input_sizes_idx_1;
  int8_T sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &ty_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  if (points3d.size(0) != 0) {
    result_tmp = points3d.size(0);
  } else {
    result_tmp = 0;
  }
  c_st.site = &jj_emlrtRSI;
  if ((points3d.size(0) != result_tmp) && (points3d.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((points3d.size(0) != result_tmp) && (points3d.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (result_tmp == 0);
  if (empty_non_axis_sizes || (points3d.size(0) != 0)) {
    input_sizes_idx_1 = 3;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (points3d.size(0) != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  b_r.set_size(&bt_emlrtRTEI, &b_st, result_tmp,
               input_sizes_idx_1 + sizes_idx_1);
  loop_ub = input_sizes_idx_1;
  for (int32_T i{0}; i < loop_ub; i++) {
    for (int32_T i1{0}; i1 < result_tmp; i1++) {
      b_r[i1 + b_r.size(0) * i] = points3d[i1 + result_tmp * i];
    }
  }
  loop_ub = sizes_idx_1;
  for (int32_T i{0}; i < loop_ub; i++) {
    for (int32_T i1{0}; i1 < result_tmp; i1++) {
      b_r[i1 + b_r.size(0) * input_sizes_idx_1] = 1.0F;
    }
  }
  st.site = &uy_emlrtRSI;
  b_st.site = &mn_emlrtRSI;
  if (b_r.size(1) != 4) {
    if ((b_r.size(0) == 1) && (b_r.size(1) == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &u_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &v_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &ln_emlrtRSI;
  if (b_r.size(0) == 0) {
    points2dHomog.set_size(&ct_emlrtRTEI, &b_st, 3, 0);
  } else {
    c_st.site = &nn_emlrtRSI;
    d_st.site = &on_emlrtRSI;
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0F;
    beta1 = 0.0F;
    m_t = (ptrdiff_t)3;
    n_t = (ptrdiff_t)b_r.size(0);
    k_t = (ptrdiff_t)4;
    lda_t = (ptrdiff_t)3;
    ldb_t = (ptrdiff_t)b_r.size(0);
    ldc_t = (ptrdiff_t)3;
    points2dHomog.set_size(&tn_emlrtRTEI, &d_st, 3, result_tmp);
    sgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real32_T *)&P[0],
          &lda_t, &(b_r.data())[0], &ldb_t, &beta1, &(points2dHomog.data())[0],
          &ldc_t);
  }
  loop_ub = points2dHomog.size(1);
  isInFrontOfCamera.set_size(&dt_emlrtRTEI, &sp, points2dHomog.size(1));
  b_points2dHomog.set_size(&et_emlrtRTEI, &sp, 2, points2dHomog.size(1));
  c_points2dHomog.set_size(&ft_emlrtRTEI, &sp, 1, points2dHomog.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    isInFrontOfCamera[i] = (points2dHomog[3 * i + 2] > 0.0F);
    b_points2dHomog[2 * i] = points2dHomog[3 * i];
    b_points2dHomog[2 * i + 1] = points2dHomog[3 * i + 1];
    c_points2dHomog[i] = points2dHomog[3 * i + 2];
  }
  st.site = &vy_emlrtRSI;
  bsxfun(st, b_points2dHomog, c_points2dHomog, points2d);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder
static void minus(const emlrtStack &sp, coder::array<real32_T, 2U> &in1,
                  const coder::array<real32_T, 2U> &in2)
{
  coder::array<real32_T, 2U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  b_in1.set_size(&afc_emlrtRTEI, &sp, loop_ub, 4);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  for (int32_T i{0}; i < 4; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in1[i1 + b_in1.size(0) * i] = in1[i1 * stride_0_0 + in1.size(0) * i] -
                                      in2[i1 * stride_1_0 + in2.size(0) * i];
    }
  }
  in1.set_size(&afc_emlrtRTEI, &sp, loop_ub, 4);
  for (int32_T i{0}; i < 4; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in1[i1 + b_in1.size(0) * i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void times(const emlrtStack &sp, coder::array<real32_T, 2U> &in1,
                  const coder::array<real32_T, 2U> &in2)
{
  coder::array<real32_T, 2U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  b_in1.set_size(&qs_emlrtRTEI, &sp, loop_ub, 4);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  for (int32_T i{0}; i < 4; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in1[i1 + b_in1.size(0) * i] = in1[i1 * stride_0_0 + in1.size(0) * i] *
                                      in2[i1 * stride_1_0 + in2.size(0) * i];
    }
  }
  in1.set_size(&qs_emlrtRTEI, &sp, loop_ub, 4);
  for (int32_T i{0}; i < 4; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in1[i1 + b_in1.size(0) * i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

namespace coder {
void b_triangulate(const emlrtStack &sp,
                   const array<real32_T, 2U> &matchedPoints1,
                   const array<real32_T, 2U> &matchedPoints2,
                   const real32_T varargin_1[12], const real32_T varargin_2[12],
                   array<real32_T, 2U> &xyzPoints,
                   array<real32_T, 1U> &reprojectionErrors,
                   array<boolean_T, 1U> &validIndex)
{
  __m128 b_r;
  __m128 r1;
  array<real32_T, 2U> accumulatedData;
  array<real32_T, 2U> b_inputPoints;
  array<real32_T, 2U> b_result;
  array<real32_T, 2U> errors1;
  array<real32_T, 2U> errors2;
  array<real32_T, 2U> inputPoints;
  array<real32_T, 2U> points1;
  array<real32_T, 2U> points1proj;
  array<real32_T, 2U> points2;
  array<real32_T, 2U> points2proj;
  array<real32_T, 2U> y;
  array<real32_T, 1U> c_result;
  array<boolean_T, 1U> isInFrontOfCam2;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T b_tmp;
  int32_T i;
  int32_T i1;
  int32_T ibmat_tmp;
  int32_T jcol;
  int32_T result;
  real32_T d_b[16];
  real32_T b[8];
  real32_T b_b[8];
  real32_T b_b_tmp;
  real32_T c_b_tmp;
  int8_T input_sizes_idx_0;
  int8_T sizes_idx_0;
  boolean_T c_b;
  boolean_T empty_non_axis_sizes;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &xx_emlrtRSI;
  parseInputs(st, matchedPoints1, matchedPoints2, varargin_1, varargin_2,
              points1, points2);
  result = points1.size(1);
  xyzPoints.set_size(&ns_emlrtRTEI, &sp, points1.size(1), 3);
  for (jcol = 0; jcol < 4; jcol++) {
    ibmat_tmp = jcol << 1;
    b_tmp = 3 * jcol + 2;
    b_b_tmp = varargin_1[b_tmp];
    b[ibmat_tmp] = b_b_tmp;
    c_b_tmp = varargin_2[b_tmp];
    b_b[ibmat_tmp] = c_b_tmp;
    b[ibmat_tmp + 1] = b_b_tmp;
    b_b[ibmat_tmp + 1] = c_b_tmp;
  }
  st.site = &by_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  c_b = ((points1.size(0) != 0) && (points1.size(1) != 0));
  if (c_b) {
    ibmat_tmp = points1.size(1);
  } else if ((points2.size(0) != 0) && (points2.size(1) != 0)) {
    ibmat_tmp = points2.size(1);
  } else {
    ibmat_tmp = points1.size(1);
    if (points2.size(1) > points1.size(1)) {
      ibmat_tmp = points2.size(1);
    }
  }
  c_st.site = &jj_emlrtRSI;
  if ((points1.size(1) != ibmat_tmp) &&
      ((points1.size(0) != 0) && (points1.size(1) != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((points2.size(1) != ibmat_tmp) &&
      ((points2.size(0) != 0) && (points2.size(1) != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (ibmat_tmp == 0);
  if (empty_non_axis_sizes || c_b) {
    input_sizes_idx_0 = static_cast<int8_T>(points1.size(0));
  } else {
    input_sizes_idx_0 = 0;
  }
  if (empty_non_axis_sizes ||
      ((points2.size(0) != 0) && (points2.size(1) != 0))) {
    sizes_idx_0 = static_cast<int8_T>(points2.size(0));
  } else {
    sizes_idx_0 = 0;
  }
  b_tmp = input_sizes_idx_0;
  jcol = sizes_idx_0;
  b_result.set_size(&rr_emlrtRTEI, &b_st, input_sizes_idx_0 + sizes_idx_0,
                    ibmat_tmp);
  for (i = 0; i < ibmat_tmp; i++) {
    for (i1 = 0; i1 < b_tmp; i1++) {
      b_result[i1 + b_result.size(0) * i] = points1[i1 + input_sizes_idx_0 * i];
    }
    for (i1 = 0; i1 < jcol; i1++) {
      b_result[(i1 + input_sizes_idx_0) + b_result.size(0) * i] =
          points2[i1 + sizes_idx_0 * i];
    }
  }
  ibmat_tmp = b_result.size(0) * b_result.size(1);
  c_result = b_result.reshape(ibmat_tmp);
  st.site = &cy_emlrtRSI;
  repmat(st, c_result, inputPoints);
  for (i = 0; i < 4; i++) {
    b_tmp = i << 1;
    ibmat_tmp = i << 2;
    d_b[ibmat_tmp] = b[b_tmp];
    d_b[ibmat_tmp + 2] = b_b[b_tmp];
    d_b[ibmat_tmp + 1] = b[b_tmp + 1];
    d_b[ibmat_tmp + 3] = b_b[b_tmp + 1];
  }
  st.site = &dy_emlrtRSI;
  b_repmat(st, d_b, static_cast<real_T>(points1.size(1)), b_inputPoints);
  if ((inputPoints.size(0) != b_inputPoints.size(0)) &&
      ((inputPoints.size(0) != 1) && (b_inputPoints.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(inputPoints.size(0), b_inputPoints.size(0),
                                &nb_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (inputPoints.size(0) == b_inputPoints.size(0)) {
    ibmat_tmp = inputPoints.size(0) << 2;
    inputPoints.set_size(&qs_emlrtRTEI, &sp, inputPoints.size(0), 4);
    b_tmp = (ibmat_tmp / 4) << 2;
    jcol = b_tmp - 4;
    for (i = 0; i <= jcol; i += 4) {
      b_r = _mm_loadu_ps(&inputPoints[i]);
      r1 = _mm_loadu_ps(&b_inputPoints[i]);
      _mm_storeu_ps(&inputPoints[i], _mm_mul_ps(b_r, r1));
    }
    for (i = b_tmp; i < ibmat_tmp; i++) {
      inputPoints[i] = inputPoints[i] * b_inputPoints[i];
    }
  } else {
    st.site = &dy_emlrtRSI;
    times(st, inputPoints, b_inputPoints);
  }
  for (i = 0; i < 4; i++) {
    b_tmp = i << 2;
    d_b[b_tmp] = varargin_1[3 * i];
    d_b[b_tmp + 2] = varargin_2[3 * i];
    ibmat_tmp = 3 * i + 1;
    d_b[b_tmp + 1] = varargin_1[ibmat_tmp];
    d_b[b_tmp + 3] = varargin_2[ibmat_tmp];
  }
  st.site = &ey_emlrtRSI;
  b_repmat(st, d_b, static_cast<real_T>(points1.size(1)), b_inputPoints);
  if ((inputPoints.size(0) != b_inputPoints.size(0)) &&
      ((inputPoints.size(0) != 1) && (b_inputPoints.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(inputPoints.size(0), b_inputPoints.size(0),
                                &mb_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (inputPoints.size(0) == b_inputPoints.size(0)) {
    ibmat_tmp = inputPoints.size(0) << 2;
    inputPoints.set_size(&rs_emlrtRTEI, &sp, inputPoints.size(0), 4);
    b_tmp = (ibmat_tmp / 4) << 2;
    jcol = b_tmp - 4;
    for (i = 0; i <= jcol; i += 4) {
      b_r = _mm_loadu_ps(&inputPoints[i]);
      r1 = _mm_loadu_ps(&b_inputPoints[i]);
      _mm_storeu_ps(&inputPoints[i], _mm_sub_ps(b_r, r1));
    }
    for (i = b_tmp; i < ibmat_tmp; i++) {
      inputPoints[i] = inputPoints[i] - b_inputPoints[i];
    }
  } else {
    st.site = &dy_emlrtRSI;
    minus(st, inputPoints, b_inputPoints);
  }
  for (b_tmp = 0; b_tmp < result; b_tmp++) {
    real_T d;
    real_T d1;
    real32_T fv[3];
    d = ((static_cast<real_T>(b_tmp) + 1.0) - 1.0) * 4.0 + 1.0;
    d1 = (static_cast<real_T>(b_tmp) + 1.0) * 4.0;
    if (d > d1) {
      i = 0;
      i1 = 0;
    } else {
      if ((static_cast<int32_T>(d) < 1) ||
          (static_cast<int32_T>(d) > inputPoints.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                      inputPoints.size(0), &ef_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i = static_cast<int32_T>(d) - 1;
      if ((static_cast<int32_T>(d1) < 1) ||
          (static_cast<int32_T>(d1) > inputPoints.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1,
                                      inputPoints.size(0), &df_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i1 = static_cast<int32_T>(d1);
    }
    ibmat_tmp = i1 - i;
    b_inputPoints.set_size(&ss_emlrtRTEI, &sp, ibmat_tmp, 4);
    for (i1 = 0; i1 < 4; i1++) {
      for (jcol = 0; jcol < ibmat_tmp; jcol++) {
        b_inputPoints[jcol + b_inputPoints.size(0) * i1] =
            inputPoints[(i + jcol) + inputPoints.size(0) * i1];
      }
    }
    st.site = &fy_emlrtRSI;
    compute3dPoint(st, b_inputPoints, fv);
    if (b_tmp + 1 > result) {
      emlrtDynamicBoundsCheckR2012b(b_tmp + 1, 1, result, &cf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    xyzPoints[b_tmp] = fv[0];
    xyzPoints[b_tmp + xyzPoints.size(0)] = fv[1];
    xyzPoints[b_tmp + xyzPoints.size(0) * 2] = fv[2];
  }
  st.site = &gy_emlrtRSI;
  projectPoints(st, xyzPoints, varargin_1, points1proj, validIndex);
  st.site = &hy_emlrtRSI;
  projectPoints(st, xyzPoints, varargin_2, points2proj, isInFrontOfCam2);
  if (points1.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, points1.size(0), &ut_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if ((points1.size(1) != points1proj.size(1)) &&
      ((points1.size(1) != 1) && (points1proj.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(points1.size(1), points1proj.size(1),
                                &lb_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (points1.size(0) < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, points1.size(0), &vt_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if ((points1.size(1) != points1proj.size(1)) &&
      ((points1.size(1) != 1) && (points1proj.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(points1.size(1), points1proj.size(1),
                                &kb_emlrtECI, (emlrtConstCTX)&sp);
  }
  st.site = &iy_emlrtRSI;
  if (points1.size(1) == points1proj.size(1)) {
    accumulatedData.set_size(&ts_emlrtRTEI, &st, 1, points1.size(1));
    for (i = 0; i < result; i++) {
      accumulatedData[i] = points1[points1.size(0) * i] - points1proj[2 * i];
    }
  } else {
    b_st.site = &iy_emlrtRSI;
    binary_expand_op_41(b_st, accumulatedData, points1, points1proj);
  }
  if (points1.size(1) == points1proj.size(1)) {
    ibmat_tmp = points1.size(1);
    y.set_size(&us_emlrtRTEI, &st, 1, points1.size(1));
    for (i = 0; i < ibmat_tmp; i++) {
      y[i] = points1[points1.size(0) * i + 1] - points1proj[2 * i + 1];
    }
  } else {
    b_st.site = &cjd_emlrtRSI;
    binary_expand_op_40(b_st, y, points1, points1proj);
  }
  b_st.site = &pn_emlrtRSI;
  c_st.site = &wy_emlrtRSI;
  if (accumulatedData.size(1) == y.size(1)) {
    ibmat_tmp = accumulatedData.size(1);
    errors1.set_size(&vs_emlrtRTEI, &c_st, 1, accumulatedData.size(1));
    for (i = 0; i < ibmat_tmp; i++) {
      b_b_tmp = accumulatedData[i];
      c_b_tmp = y[i];
      errors1[i] = muSingleScalarHypot(b_b_tmp, c_b_tmp);
    }
  } else {
    d_st.site = &xy_emlrtRSI;
    internal::expand_hypot(d_st, accumulatedData, y, errors1);
  }
  if (points2.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, points2.size(0), &wt_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  ibmat_tmp = points2.size(1);
  if ((points2.size(1) != points2proj.size(1)) &&
      ((points2.size(1) != 1) && (points2proj.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(points2.size(1), points2proj.size(1),
                                &jb_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (points2.size(0) < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, points2.size(0), &xt_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if ((points2.size(1) != points2proj.size(1)) &&
      ((points2.size(1) != 1) && (points2proj.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(points2.size(1), points2proj.size(1),
                                &ib_emlrtECI, (emlrtConstCTX)&sp);
  }
  st.site = &jy_emlrtRSI;
  if (points2.size(1) == points2proj.size(1)) {
    accumulatedData.set_size(&ws_emlrtRTEI, &st, 1, points2.size(1));
    for (i = 0; i < ibmat_tmp; i++) {
      accumulatedData[i] = points2[points2.size(0) * i] - points2proj[2 * i];
    }
  } else {
    b_st.site = &jy_emlrtRSI;
    binary_expand_op_41(b_st, accumulatedData, points2, points2proj);
  }
  if (points2.size(1) == points2proj.size(1)) {
    ibmat_tmp = points2.size(1);
    y.set_size(&xs_emlrtRTEI, &st, 1, points2.size(1));
    for (i = 0; i < ibmat_tmp; i++) {
      y[i] = points2[points2.size(0) * i + 1] - points2proj[2 * i + 1];
    }
  } else {
    b_st.site = &bjd_emlrtRSI;
    binary_expand_op_40(b_st, y, points2, points2proj);
  }
  b_st.site = &pn_emlrtRSI;
  c_st.site = &wy_emlrtRSI;
  if (accumulatedData.size(1) == y.size(1)) {
    ibmat_tmp = accumulatedData.size(1);
    errors2.set_size(&ys_emlrtRTEI, &c_st, 1, accumulatedData.size(1));
    for (i = 0; i < ibmat_tmp; i++) {
      b_b_tmp = accumulatedData[i];
      c_b_tmp = y[i];
      errors2[i] = muSingleScalarHypot(b_b_tmp, c_b_tmp);
    }
  } else {
    d_st.site = &xy_emlrtRSI;
    internal::expand_hypot(d_st, accumulatedData, y, errors2);
  }
  st.site = &ky_emlrtRSI;
  b_st.site = &ij_emlrtRSI;
  c_st.site = &jj_emlrtRSI;
  if (errors2.size(1) != errors1.size(1)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  st.site = &ky_emlrtRSI;
  ibmat_tmp = errors1.size(1);
  points1proj.set_size(&ps_emlrtRTEI, &st, 2, errors1.size(1));
  for (i = 0; i < ibmat_tmp; i++) {
    points1proj[2 * i] = errors1[i];
  }
  ibmat_tmp = errors2.size(1);
  for (i = 0; i < ibmat_tmp; i++) {
    points1proj[2 * i + 1] = errors2[i];
  }
  b_st.site = &mo_emlrtRSI;
  b_combineVectorElements(b_st, points1proj, accumulatedData);
  ibmat_tmp = accumulatedData.size(1);
  reprojectionErrors.set_size(&at_emlrtRTEI, &sp, accumulatedData.size(1));
  b_tmp = (accumulatedData.size(1) / 4) << 2;
  jcol = b_tmp - 4;
  for (i = 0; i <= jcol; i += 4) {
    b_r = _mm_loadu_ps(&accumulatedData[i]);
    _mm_storeu_ps(&reprojectionErrors[i], _mm_div_ps(b_r, _mm_set1_ps(2.0F)));
  }
  for (i = b_tmp; i < ibmat_tmp; i++) {
    reprojectionErrors[i] = accumulatedData[i] / 2.0F;
  }
  ibmat_tmp = validIndex.size(0);
  if ((validIndex.size(0) != isInFrontOfCam2.size(0)) &&
      ((validIndex.size(0) != 1) && (isInFrontOfCam2.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(validIndex.size(0), isInFrontOfCam2.size(0),
                                &hb_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (validIndex.size(0) == isInFrontOfCam2.size(0)) {
    for (i = 0; i < ibmat_tmp; i++) {
      validIndex[i] = (validIndex[i] && isInFrontOfCam2[i]);
    }
  } else {
    st.site = &oid_emlrtRSI;
    c_and(st, validIndex, isInFrontOfCam2);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void triangulate(const emlrtStack &sp,
                 const array<real32_T, 2U> &matchedPoints1,
                 const array<real32_T, 2U> &matchedPoints2,
                 const real_T varargin_1[12], const real32_T varargin_2_data[],
                 const int32_T varargin_2_size[2],
                 array<real32_T, 2U> &xyzPoints,
                 array<real32_T, 1U> &reprojectionErrors,
                 array<boolean_T, 1U> &validIndex)
{
  __m128 b_r;
  __m128 r1;
  array<real32_T, 2U> accumulatedData;
  array<real32_T, 2U> b_inputPoints;
  array<real32_T, 2U> errors1;
  array<real32_T, 2U> errors2;
  array<real32_T, 2U> inputPoints;
  array<real32_T, 2U> points1;
  array<real32_T, 2U> points1proj;
  array<real32_T, 2U> points2;
  array<real32_T, 2U> points2proj;
  array<real32_T, 2U> result;
  array<real32_T, 2U> y;
  array<real32_T, 1U> b_result;
  array<boolean_T, 1U> isInFrontOfCam2;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T i;
  int32_T i1;
  int32_T ibmat;
  int32_T input_sizes_idx_0_tmp;
  int32_T loop_ub;
  int32_T outsize_idx_0;
  real32_T varargin_1_data[16];
  real32_T camMatrix1[12];
  real32_T b_varargin_1[8];
  real32_T b_varargin_2_data[8];
  real32_T varargin_1_tmp;
  real32_T varargin_2;
  int8_T input_sizes_idx_0;
  boolean_T empty_non_axis_sizes;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &xx_emlrtRSI;
  parseInputs(st, matchedPoints1, matchedPoints2, varargin_1, varargin_2_data,
              varargin_2_size, points1, points2, camMatrix1);
  loop_ub = points1.size(1);
  xyzPoints.set_size(&ns_emlrtRTEI, &sp, points1.size(1), 3);
  st.site = &yx_emlrtRSI;
  for (outsize_idx_0 = 0; outsize_idx_0 < 4; outsize_idx_0++) {
    ibmat = outsize_idx_0 << 1;
    varargin_1_tmp = camMatrix1[3 * outsize_idx_0 + 2];
    b_varargin_1[ibmat] = varargin_1_tmp;
    b_varargin_1[ibmat + 1] = varargin_1_tmp;
  }
  b_st.site = &yx_emlrtRSI;
  i = varargin_2_size[1];
  c_st.site = &ry_emlrtRSI;
  for (outsize_idx_0 = 0; outsize_idx_0 < i; outsize_idx_0++) {
    ibmat = outsize_idx_0 << 1;
    varargin_1_tmp = varargin_2_data[3 * outsize_idx_0 + 2];
    b_varargin_2_data[ibmat] = varargin_1_tmp;
    b_varargin_2_data[ibmat + 1] = varargin_1_tmp;
  }
  b_st.site = &kn_emlrtRSI;
  c_st.site = &jj_emlrtRSI;
  if (varargin_2_size[1] != 4) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  st.site = &ay_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  c_st.site = &jj_emlrtRSI;
  if (varargin_2_size[1] != 4) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  st.site = &by_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  if (points1.size(1) != 0) {
    ibmat = points1.size(1);
  } else if (points2.size(1) != 0) {
    ibmat = points2.size(1);
  } else {
    ibmat = 0;
  }
  c_st.site = &jj_emlrtRSI;
  if ((points1.size(1) != ibmat) && (points1.size(1) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((points2.size(1) != ibmat) && (points2.size(1) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (ibmat == 0);
  if (empty_non_axis_sizes || (points1.size(1) != 0)) {
    input_sizes_idx_0 = 2;
  } else {
    input_sizes_idx_0 = 0;
  }
  if (empty_non_axis_sizes || (points2.size(1) != 0)) {
    outsize_idx_0 = 2;
  } else {
    outsize_idx_0 = 0;
  }
  input_sizes_idx_0_tmp = input_sizes_idx_0;
  result.set_size(&os_emlrtRTEI, &b_st, input_sizes_idx_0 + outsize_idx_0,
                  ibmat);
  for (i = 0; i < ibmat; i++) {
    for (i1 = 0; i1 < input_sizes_idx_0_tmp; i1++) {
      result[i1 + result.size(0) * i] = points1[i1 + input_sizes_idx_0 * i];
    }
    for (i1 = 0; i1 < outsize_idx_0; i1++) {
      result[(i1 + input_sizes_idx_0) + result.size(0) * i] =
          points2[i1 + outsize_idx_0 * i];
    }
  }
  ibmat = result.size(0) * result.size(1);
  b_result = result.reshape(ibmat);
  st.site = &cy_emlrtRSI;
  repmat(st, b_result, inputPoints);
  for (i = 0; i < 4; i++) {
    ibmat = i << 1;
    varargin_1_data[4 * i] = b_varargin_1[ibmat];
    varargin_1_data[4 * i + 2] = b_varargin_2_data[2 * i];
    varargin_1_data[4 * i + 1] = b_varargin_1[ibmat + 1];
    varargin_1_data[4 * i + 3] = b_varargin_2_data[2 * i + 1];
  }
  st.site = &dy_emlrtRSI;
  repmat(st, varargin_1_data, static_cast<real_T>(points1.size(1)),
         b_inputPoints);
  if ((inputPoints.size(0) != b_inputPoints.size(0)) &&
      ((inputPoints.size(0) != 1) && (b_inputPoints.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(inputPoints.size(0), b_inputPoints.size(0),
                                &nb_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (inputPoints.size(0) == b_inputPoints.size(0)) {
    ibmat = inputPoints.size(0) << 2;
    inputPoints.set_size(&qs_emlrtRTEI, &sp, inputPoints.size(0), 4);
    outsize_idx_0 = (ibmat / 4) << 2;
    input_sizes_idx_0_tmp = outsize_idx_0 - 4;
    for (i = 0; i <= input_sizes_idx_0_tmp; i += 4) {
      b_r = _mm_loadu_ps(&inputPoints[i]);
      r1 = _mm_loadu_ps(&b_inputPoints[i]);
      _mm_storeu_ps(&inputPoints[i], _mm_mul_ps(b_r, r1));
    }
    for (i = outsize_idx_0; i < ibmat; i++) {
      inputPoints[i] = inputPoints[i] * b_inputPoints[i];
    }
  } else {
    st.site = &dy_emlrtRSI;
    times(st, inputPoints, b_inputPoints);
  }
  for (i = 0; i < 4; i++) {
    varargin_1_data[4 * i] = camMatrix1[3 * i];
    varargin_1_data[4 * i + 2] = varargin_2_data[3 * i];
    ibmat = 3 * i + 1;
    varargin_1_data[4 * i + 1] = camMatrix1[ibmat];
    varargin_1_data[4 * i + 3] = varargin_2_data[ibmat];
  }
  st.site = &ey_emlrtRSI;
  repmat(st, varargin_1_data, static_cast<real_T>(points1.size(1)),
         b_inputPoints);
  if ((inputPoints.size(0) != b_inputPoints.size(0)) &&
      ((inputPoints.size(0) != 1) && (b_inputPoints.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(inputPoints.size(0), b_inputPoints.size(0),
                                &mb_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (inputPoints.size(0) == b_inputPoints.size(0)) {
    ibmat = inputPoints.size(0) << 2;
    inputPoints.set_size(&rs_emlrtRTEI, &sp, inputPoints.size(0), 4);
    outsize_idx_0 = (ibmat / 4) << 2;
    input_sizes_idx_0_tmp = outsize_idx_0 - 4;
    for (i = 0; i <= input_sizes_idx_0_tmp; i += 4) {
      b_r = _mm_loadu_ps(&inputPoints[i]);
      r1 = _mm_loadu_ps(&b_inputPoints[i]);
      _mm_storeu_ps(&inputPoints[i], _mm_sub_ps(b_r, r1));
    }
    for (i = outsize_idx_0; i < ibmat; i++) {
      inputPoints[i] = inputPoints[i] - b_inputPoints[i];
    }
  } else {
    st.site = &dy_emlrtRSI;
    minus(st, inputPoints, b_inputPoints);
  }
  for (outsize_idx_0 = 0; outsize_idx_0 < loop_ub; outsize_idx_0++) {
    real_T d;
    real_T d1;
    real32_T fv[3];
    d = ((static_cast<real_T>(outsize_idx_0) + 1.0) - 1.0) * 4.0 + 1.0;
    d1 = (static_cast<real_T>(outsize_idx_0) + 1.0) * 4.0;
    if (d > d1) {
      i = 0;
      i1 = 0;
    } else {
      if ((static_cast<int32_T>(d) < 1) ||
          (static_cast<int32_T>(d) > inputPoints.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                      inputPoints.size(0), &ef_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i = static_cast<int32_T>(d) - 1;
      if ((static_cast<int32_T>(d1) < 1) ||
          (static_cast<int32_T>(d1) > inputPoints.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1,
                                      inputPoints.size(0), &df_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i1 = static_cast<int32_T>(d1);
    }
    ibmat = i1 - i;
    b_inputPoints.set_size(&ss_emlrtRTEI, &sp, ibmat, 4);
    for (i1 = 0; i1 < 4; i1++) {
      for (input_sizes_idx_0_tmp = 0; input_sizes_idx_0_tmp < ibmat;
           input_sizes_idx_0_tmp++) {
        b_inputPoints[input_sizes_idx_0_tmp + b_inputPoints.size(0) * i1] =
            inputPoints[(i + input_sizes_idx_0_tmp) + inputPoints.size(0) * i1];
      }
    }
    st.site = &fy_emlrtRSI;
    compute3dPoint(st, b_inputPoints, fv);
    if (outsize_idx_0 + 1 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(outsize_idx_0 + 1, 1, loop_ub, &cf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    xyzPoints[outsize_idx_0] = fv[0];
    xyzPoints[outsize_idx_0 + xyzPoints.size(0)] = fv[1];
    xyzPoints[outsize_idx_0 + xyzPoints.size(0) * 2] = fv[2];
  }
  st.site = &gy_emlrtRSI;
  projectPoints(st, xyzPoints, camMatrix1, points1proj, validIndex);
  st.site = &hy_emlrtRSI;
  b_projectPoints(st, xyzPoints, varargin_2_data, varargin_2_size, points2proj,
                  isInFrontOfCam2);
  if ((points1.size(1) != points1proj.size(1)) &&
      ((points1.size(1) != 1) && (points1proj.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(points1.size(1), points1proj.size(1),
                                &lb_emlrtECI, (emlrtConstCTX)&sp);
  }
  st.site = &iy_emlrtRSI;
  if (points1.size(1) == points1proj.size(1)) {
    accumulatedData.set_size(&ts_emlrtRTEI, &st, 1, points1.size(1));
    for (i = 0; i < loop_ub; i++) {
      accumulatedData[i] = points1[2 * i] - points1proj[2 * i];
    }
  } else {
    b_st.site = &iy_emlrtRSI;
    binary_expand_op_17(b_st, accumulatedData, points1, points1proj);
  }
  if (points1.size(1) == points1proj.size(1)) {
    loop_ub = points1.size(1);
    y.set_size(&us_emlrtRTEI, &st, 1, points1.size(1));
    for (i = 0; i < loop_ub; i++) {
      y[i] = points1[2 * i + 1] - points1proj[2 * i + 1];
    }
  } else {
    b_st.site = &cjd_emlrtRSI;
    binary_expand_op_16(b_st, y, points1, points1proj);
  }
  b_st.site = &pn_emlrtRSI;
  c_st.site = &wy_emlrtRSI;
  if (accumulatedData.size(1) == y.size(1)) {
    loop_ub = accumulatedData.size(1);
    errors1.set_size(&vs_emlrtRTEI, &c_st, 1, accumulatedData.size(1));
    for (i = 0; i < loop_ub; i++) {
      varargin_1_tmp = accumulatedData[i];
      varargin_2 = y[i];
      errors1[i] = muSingleScalarHypot(varargin_1_tmp, varargin_2);
    }
  } else {
    d_st.site = &xy_emlrtRSI;
    internal::expand_hypot(d_st, accumulatedData, y, errors1);
  }
  loop_ub = points2.size(1);
  if ((points2.size(1) != points2proj.size(1)) &&
      ((points2.size(1) != 1) && (points2proj.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(points2.size(1), points2proj.size(1),
                                &jb_emlrtECI, (emlrtConstCTX)&sp);
  }
  st.site = &jy_emlrtRSI;
  if (points2.size(1) == points2proj.size(1)) {
    accumulatedData.set_size(&ws_emlrtRTEI, &st, 1, points2.size(1));
    for (i = 0; i < loop_ub; i++) {
      accumulatedData[i] = points2[2 * i] - points2proj[2 * i];
    }
  } else {
    b_st.site = &jy_emlrtRSI;
    binary_expand_op_17(b_st, accumulatedData, points2, points2proj);
  }
  if (points2.size(1) == points2proj.size(1)) {
    loop_ub = points2.size(1);
    y.set_size(&xs_emlrtRTEI, &st, 1, points2.size(1));
    for (i = 0; i < loop_ub; i++) {
      y[i] = points2[2 * i + 1] - points2proj[2 * i + 1];
    }
  } else {
    b_st.site = &bjd_emlrtRSI;
    binary_expand_op_16(b_st, y, points2, points2proj);
  }
  b_st.site = &pn_emlrtRSI;
  c_st.site = &wy_emlrtRSI;
  if (accumulatedData.size(1) == y.size(1)) {
    loop_ub = accumulatedData.size(1);
    errors2.set_size(&ys_emlrtRTEI, &c_st, 1, accumulatedData.size(1));
    for (i = 0; i < loop_ub; i++) {
      varargin_1_tmp = accumulatedData[i];
      varargin_2 = y[i];
      errors2[i] = muSingleScalarHypot(varargin_1_tmp, varargin_2);
    }
  } else {
    d_st.site = &xy_emlrtRSI;
    internal::expand_hypot(d_st, accumulatedData, y, errors2);
  }
  st.site = &ky_emlrtRSI;
  b_st.site = &ij_emlrtRSI;
  c_st.site = &jj_emlrtRSI;
  if (errors2.size(1) != errors1.size(1)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  st.site = &ky_emlrtRSI;
  loop_ub = errors1.size(1);
  points1.set_size(&ps_emlrtRTEI, &st, 2, errors1.size(1));
  for (i = 0; i < loop_ub; i++) {
    points1[2 * i] = errors1[i];
  }
  loop_ub = errors2.size(1);
  for (i = 0; i < loop_ub; i++) {
    points1[2 * i + 1] = errors2[i];
  }
  b_st.site = &mo_emlrtRSI;
  b_combineVectorElements(b_st, points1, accumulatedData);
  loop_ub = accumulatedData.size(1);
  reprojectionErrors.set_size(&at_emlrtRTEI, &sp, accumulatedData.size(1));
  outsize_idx_0 = (accumulatedData.size(1) / 4) << 2;
  input_sizes_idx_0_tmp = outsize_idx_0 - 4;
  for (i = 0; i <= input_sizes_idx_0_tmp; i += 4) {
    b_r = _mm_loadu_ps(&accumulatedData[i]);
    _mm_storeu_ps(&reprojectionErrors[i], _mm_div_ps(b_r, _mm_set1_ps(2.0F)));
  }
  for (i = outsize_idx_0; i < loop_ub; i++) {
    reprojectionErrors[i] = accumulatedData[i] / 2.0F;
  }
  loop_ub = validIndex.size(0);
  if ((validIndex.size(0) != isInFrontOfCam2.size(0)) &&
      ((validIndex.size(0) != 1) && (isInFrontOfCam2.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(validIndex.size(0), isInFrontOfCam2.size(0),
                                &hb_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (validIndex.size(0) == isInFrontOfCam2.size(0)) {
    for (i = 0; i < loop_ub; i++) {
      validIndex[i] = (validIndex[i] && isInFrontOfCam2[i]);
    }
  } else {
    st.site = &oid_emlrtRSI;
    c_and(st, validIndex, isInFrontOfCam2);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (triangulate.cpp)
