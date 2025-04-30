//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// cameraIntrinsics.cpp
//
// Code generation for function 'cameraIntrinsics'
//

// Include files
#include "cameraIntrinsics.h"
#include "cameraIntrinsicsArray.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "coder_bounded_array.h"

// Variable Definitions
static emlrtRSInfo xc_emlrtRSI{
    25,                                  // lineNo
    "cameraIntrinsics/cameraIntrinsics", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsics.m" // pathName
};

static emlrtRSInfo yc_emlrtRSI{
    26,                                  // lineNo
    "cameraIntrinsics/cameraIntrinsics", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsics.m" // pathName
};

static emlrtRSInfo ad_emlrtRSI{
    79,                                          // lineNo
    "cameraIntrinsicsImpl/cameraIntrinsicsImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pathName
};

static emlrtRSInfo bd_emlrtRSI{
    99,                                          // lineNo
    "cameraIntrinsicsImpl/cameraIntrinsicsImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pathName
};

static emlrtRSInfo cd_emlrtRSI{
    107,                                         // lineNo
    "cameraIntrinsicsImpl/cameraIntrinsicsImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pathName
};

static emlrtRSInfo dd_emlrtRSI{
    1,                                           // lineNo
    "cameraIntrinsicsBase/cameraIntrinsicsBase", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsBase.m" // pathName
};

static emlrtRSInfo ed_emlrtRSI{
    23,                                  // lineNo
    "ImageTransformer/ImageTransformer", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\ImageTransformer.m" // pathName
};

static emlrtRSInfo fd_emlrtRSI{
    43,                                          // lineNo
    "ImageTransformerBase/ImageTransformerBase", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\ImageTransformerBase.m" // pathName
};

static emlrtRSInfo gd_emlrtRSI{
    305,                                                    // lineNo
    "cameraIntrinsics/initializeCameraIntrinsicsArrayData", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsics.m" // pathName
};

static emlrtRSInfo hd_emlrtRSI{
    34,                                            // lineNo
    "cameraIntrinsicsArray/cameraIntrinsicsArray", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsicsArray.m" // pathName
};

static emlrtRSInfo lub_emlrtRSI{
    78,                                // lineNo
    "cameraIntrinsics/parenReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsics.m" // pathName
};

static emlrtRSInfo mub_emlrtRSI{
    292,                          // lineNo
    "cameraIntrinsics/makeEmpty", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsics.m" // pathName
};

static emlrtRSInfo nub_emlrtRSI{
    295,                          // lineNo
    "cameraIntrinsics/makeEmpty", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsics.m" // pathName
};

static emlrtRSInfo oub_emlrtRSI{
    82,                                          // lineNo
    "cameraIntrinsicsImpl/cameraIntrinsicsImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pathName
};

static emlrtRSInfo pub_emlrtRSI{
    215,           // lineNo
    "parseInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pathName
};

static emlrtRSInfo qub_emlrtRSI{
    249,                  // lineNo
    "parseInputsCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pathName
};

static emlrtRSInfo rub_emlrtRSI{
    252,                  // lineNo
    "parseInputsCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pathName
};

static emlrtRSInfo sub_emlrtRSI{
    255,                  // lineNo
    "parseInputsCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pathName
};

static emlrtRSInfo tub_emlrtRSI{
    271,                  // lineNo
    "parseInputsCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pathName
};

static emlrtRSInfo uub_emlrtRSI{
    275,                  // lineNo
    "parseInputsCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pathName
};

static emlrtRSInfo vub_emlrtRSI{
    279,                  // lineNo
    "parseInputsCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pathName
};

static emlrtRSInfo wub_emlrtRSI{
    185,                                         // lineNo
    "cameraIntrinsicsImpl/buildIntrinsicMatrix", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pathName
};

static emlrtBCInfo tj_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    96,                                // lineNo
    63,                                // colNo
    "",                                // aName
    "cameraIntrinsics/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsics.m", // pName
    0                              // checkKind
};

static emlrtBCInfo uj_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    186,                                         // lineNo
    80,                                          // colNo
    "",                                          // aName
    "cameraIntrinsicsImpl/buildIntrinsicMatrix", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m", // pName
    0                                   // checkKind
};

static emlrtBCInfo vj_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    186,                                         // lineNo
    56,                                          // colNo
    "",                                          // aName
    "cameraIntrinsicsImpl/buildIntrinsicMatrix", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m", // pName
    0                                   // checkKind
};

static emlrtBCInfo wj_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    185,                                         // lineNo
    80,                                          // colNo
    "",                                          // aName
    "cameraIntrinsicsImpl/buildIntrinsicMatrix", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m", // pName
    0                                   // checkKind
};

static emlrtBCInfo xj_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    185,                                         // lineNo
    35,                                          // colNo
    "",                                          // aName
    "cameraIntrinsicsImpl/buildIntrinsicMatrix", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m", // pName
    0                                   // checkKind
};

static emlrtRTEInfo hj_emlrtRTEI{
    28,                      // lineNo
    13,                      // colNo
    "cameraIntrinsicsArray", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsicsArray.m" // pName
};

static emlrtRTEInfo ij_emlrtRTEI{
    29,                      // lineNo
    13,                      // colNo
    "cameraIntrinsicsArray", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsicsArray.m" // pName
};

static emlrtRTEInfo jj_emlrtRTEI{
    30,                      // lineNo
    13,                      // colNo
    "cameraIntrinsicsArray", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsicsArray.m" // pName
};

static emlrtRTEInfo kj_emlrtRTEI{
    31,                      // lineNo
    13,                      // colNo
    "cameraIntrinsicsArray", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsicsArray.m" // pName
};

static emlrtRTEInfo lj_emlrtRTEI{
    32,                      // lineNo
    13,                      // colNo
    "cameraIntrinsicsArray", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsicsArray.m" // pName
};

static emlrtRTEInfo mj_emlrtRTEI{
    33,                      // lineNo
    13,                      // colNo
    "cameraIntrinsicsArray", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsicsArray.m" // pName
};

static emlrtRTEInfo nj_emlrtRTEI{
    308,                // lineNo
    13,                 // colNo
    "cameraIntrinsics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsics.m" // pName
};

static emlrtRTEInfo hbb_emlrtRTEI{
    99,                 // lineNo
    13,                 // colNo
    "cameraIntrinsics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsics.m" // pName
};

static emlrtRTEInfo ibb_emlrtRTEI{
    100,                // lineNo
    13,                 // colNo
    "cameraIntrinsics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsics.m" // pName
};

static emlrtRTEInfo jbb_emlrtRTEI{
    101,                // lineNo
    13,                 // colNo
    "cameraIntrinsics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsics.m" // pName
};

static emlrtRTEInfo kbb_emlrtRTEI{
    102,                // lineNo
    13,                 // colNo
    "cameraIntrinsics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsics.m" // pName
};

static emlrtRTEInfo lbb_emlrtRTEI{
    103,                // lineNo
    13,                 // colNo
    "cameraIntrinsics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsics.m" // pName
};

static emlrtRTEInfo mbb_emlrtRTEI{
    104,                // lineNo
    13,                 // colNo
    "cameraIntrinsics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsics.m" // pName
};

static emlrtRTEInfo nbb_emlrtRTEI{
    105,                // lineNo
    13,                 // colNo
    "cameraIntrinsics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsics.m" // pName
};

static emlrtRTEInfo obb_emlrtRTEI{
    88,                     // lineNo
    17,                     // colNo
    "cameraIntrinsicsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pName
};

static emlrtRTEInfo pbb_emlrtRTEI{
    90,                     // lineNo
    13,                     // colNo
    "cameraIntrinsicsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pName
};

static emlrtRTEInfo qbb_emlrtRTEI{
    91,                     // lineNo
    13,                     // colNo
    "cameraIntrinsicsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pName
};

static emlrtRTEInfo rbb_emlrtRTEI{
    94,                     // lineNo
    13,                     // colNo
    "cameraIntrinsicsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pName
};

static emlrtRTEInfo sbb_emlrtRTEI{
    95,                     // lineNo
    13,                     // colNo
    "cameraIntrinsicsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pName
};

static emlrtRTEInfo tbb_emlrtRTEI{
    96,                     // lineNo
    13,                     // colNo
    "cameraIntrinsicsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pName
};

static emlrtRTEInfo ubb_emlrtRTEI{
    185,                    // lineNo
    39,                     // colNo
    "cameraIntrinsicsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\cameraIntrinsicsImpl.m" // pName
};

static emlrtRTEInfo vbb_emlrtRTEI{
    143,                // lineNo
    13,                 // colNo
    "cameraIntrinsics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\cameraIntrinsics.m" // pName
};

// Function Definitions
namespace coder {
b_cameraIntrinsics *cameraIntrinsics::makeEmpty(const emlrtStack &sp,
                                                b_cameraIntrinsics &iobj_0)
{
  b_cameraIntrinsics *obj;
  vision::internal::codegen::cameraIntrinsicsArray b_r;
  array<real_T, 2U> result;
  array<real_T, 2U> varargin_2;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T reshapes_f1;
  real_T reshapes_f3;
  int32_T i;
  int32_T loop_ub;
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
  st.site = &mub_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  c_st.site = &oub_emlrtRSI;
  d_st.site = &pub_emlrtRSI;
  e_st.site = &qub_emlrtRSI;
  e_st.site = &rub_emlrtRSI;
  e_st.site = &sub_emlrtRSI;
  e_st.site = &tub_emlrtRSI;
  e_st.site = &uub_emlrtRSI;
  e_st.site = &vub_emlrtRSI;
  c_st.site = &ad_emlrtRSI;
  d_st.site = &dd_emlrtRSI;
  iobj_0.FocalLength.set_size(&obb_emlrtRTEI, &b_st, 1, 2);
  iobj_0.PrincipalPoint.set_size(&pbb_emlrtRTEI, &b_st, 1, 2);
  iobj_0.ImageSize.set_size(&qbb_emlrtRTEI, &b_st, 1, 2);
  iobj_0.RadialDistortion.set_size(&rbb_emlrtRTEI, &b_st, 1, 2);
  iobj_0.TangentialDistortion.set_size(&sbb_emlrtRTEI, &b_st, 1, 2);
  iobj_0.FocalLength[0] = 1.0;
  iobj_0.PrincipalPoint[0] = 1.0;
  iobj_0.ImageSize[0] = 1.0;
  iobj_0.RadialDistortion[0] = 0.0;
  iobj_0.TangentialDistortion[0] = 0.0;
  iobj_0.FocalLength[1] = 1.0;
  iobj_0.PrincipalPoint[1] = 1.0;
  iobj_0.ImageSize[1] = 1.0;
  iobj_0.RadialDistortion[1] = 0.0;
  iobj_0.TangentialDistortion[1] = 0.0;
  iobj_0.Skew.set_size(&tbb_emlrtRTEI, &b_st, 1, 1);
  iobj_0.Skew[0] = 0.0;
  c_st.site = &bd_emlrtRSI;
  i = iobj_0.FocalLength.size(0) * iobj_0.FocalLength.size(1);
  if (i < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i, &xj_emlrtBCI, &c_st);
  }
  i = iobj_0.PrincipalPoint.size(0) * iobj_0.PrincipalPoint.size(1);
  if (i < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i, &wj_emlrtBCI, &c_st);
  }
  i = iobj_0.FocalLength.size(0) * iobj_0.FocalLength.size(1);
  if (i < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i, &vj_emlrtBCI, &c_st);
  }
  i = iobj_0.PrincipalPoint.size(0) * iobj_0.PrincipalPoint.size(1);
  if (i < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i, &uj_emlrtBCI, &c_st);
  }
  d_st.site = &wub_emlrtRSI;
  reshapes_f1 = iobj_0.FocalLength[0];
  varargin_2.set_size(&ubb_emlrtRTEI, &d_st, iobj_0.Skew.size(0),
                      iobj_0.Skew.size(1));
  loop_ub = iobj_0.Skew.size(0) * iobj_0.Skew.size(1);
  for (i = 0; i < loop_ub; i++) {
    varargin_2[i] = iobj_0.Skew[i];
  }
  reshapes_f3 = iobj_0.PrincipalPoint[0];
  e_st.site = &kn_emlrtRSI;
  f_st.site = &jj_emlrtRSI;
  if ((varargin_2.size(0) != 1) &&
      ((varargin_2.size(0) != 0) && (varargin_2.size(1) != 0))) {
    emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((varargin_2.size(0) != 0) && (varargin_2.size(1) != 0)) {
    loop_ub = varargin_2.size(1);
  } else {
    loop_ub = 0;
  }
  result.set_size(&rr_emlrtRTEI, &e_st, 1, loop_ub + 2);
  result[0] = reshapes_f1;
  for (i = 0; i < loop_ub; i++) {
    result[i + 1] = varargin_2[i];
  }
  result[loop_ub + 1] = reshapes_f3;
  d_st.site = &wub_emlrtRSI;
  reshapes_f1 = iobj_0.FocalLength[1];
  reshapes_f3 = iobj_0.PrincipalPoint[1];
  e_st.site = &ij_emlrtRSI;
  f_st.site = &jj_emlrtRSI;
  if (result.size(1) != 3) {
    emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  for (i = 0; i < 3; i++) {
    iobj_0.K[3 * i] = result[i];
  }
  iobj_0.K[1] = 0.0;
  iobj_0.K[2] = 0.0;
  iobj_0.K[4] = reshapes_f1;
  iobj_0.K[5] = 0.0;
  iobj_0.K[7] = reshapes_f3;
  iobj_0.K[8] = 1.0;
  c_st.site = &cd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  b_st.site = &yc_emlrtRSI;
  c_st.site = &gd_emlrtRSI;
  b_r.FocalLength.set_size(&hj_emlrtRTEI, &c_st, iobj_0.FocalLength.size(0),
                           iobj_0.FocalLength.size(1));
  loop_ub = iobj_0.FocalLength.size(0) * iobj_0.FocalLength.size(1);
  for (i = 0; i < loop_ub; i++) {
    b_r.FocalLength[i] = iobj_0.FocalLength[i];
  }
  b_r.PrincipalPoint.set_size(&ij_emlrtRTEI, &c_st,
                              iobj_0.PrincipalPoint.size(0),
                              iobj_0.PrincipalPoint.size(1));
  loop_ub = iobj_0.PrincipalPoint.size(0) * iobj_0.PrincipalPoint.size(1);
  for (i = 0; i < loop_ub; i++) {
    b_r.PrincipalPoint[i] = iobj_0.PrincipalPoint[i];
  }
  b_r.ImageSize.set_size(&jj_emlrtRTEI, &c_st, iobj_0.ImageSize.size(0),
                         iobj_0.ImageSize.size(1));
  loop_ub = iobj_0.ImageSize.size(0) * iobj_0.ImageSize.size(1);
  for (i = 0; i < loop_ub; i++) {
    b_r.ImageSize[i] = iobj_0.ImageSize[i];
  }
  b_r.RadialDistortion.set_size(&kj_emlrtRTEI, &c_st,
                                iobj_0.RadialDistortion.size(0),
                                iobj_0.RadialDistortion.size(1));
  loop_ub = iobj_0.RadialDistortion.size(0) * iobj_0.RadialDistortion.size(1);
  for (i = 0; i < loop_ub; i++) {
    b_r.RadialDistortion[i] = iobj_0.RadialDistortion[i];
  }
  b_r.TangentialDistortion.set_size(&lj_emlrtRTEI, &c_st,
                                    iobj_0.TangentialDistortion.size(0),
                                    iobj_0.TangentialDistortion.size(1));
  loop_ub =
      iobj_0.TangentialDistortion.size(0) * iobj_0.TangentialDistortion.size(1);
  for (i = 0; i < loop_ub; i++) {
    b_r.TangentialDistortion[i] = iobj_0.TangentialDistortion[i];
  }
  b_r.Skew.set_size(&mj_emlrtRTEI, &c_st, iobj_0.Skew.size(0),
                    iobj_0.Skew.size(1));
  loop_ub = iobj_0.Skew.size(0) * iobj_0.Skew.size(1);
  for (i = 0; i < loop_ub; i++) {
    b_r.Skew[i] = iobj_0.Skew[i];
  }
  d_st.site = &hd_emlrtRSI;
  iobj_0.cameraIntrinsicsArrayData.set_size(&nj_emlrtRTEI, &b_st, 1, 1);
  iobj_0.cameraIntrinsicsArrayData[0] = b_r;
  st.site = &nub_emlrtRSI;
  obj = &iobj_0;
  iobj_0.cameraIntrinsicsArrayData.set_size(&vbb_emlrtRTEI, &st, 0, 0);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return obj;
}

cameraIntrinsics *cameraIntrinsics::init(const emlrtStack &sp)
{
  cameraIntrinsics *this_;
  vision::internal::codegen::cameraIntrinsicsArray b_r;
  emlrtStack b_st;
  emlrtStack st;
  real_T intrinsicMat[9];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  this_ = this;
  st.site = &xc_emlrtRSI;
  this_->FocalLength[0] = 535.4;
  this_->PrincipalPoint[0] = 320.1;
  this_->ImageSize[0] = 480.0;
  this_->RadialDistortion[0] = 0.0;
  this_->TangentialDistortion[0] = 0.0;
  this_->FocalLength[1] = 539.2;
  this_->PrincipalPoint[1] = 247.6;
  this_->ImageSize[1] = 640.0;
  this_->RadialDistortion[1] = 0.0;
  this_->TangentialDistortion[1] = 0.0;
  this_->Skew = 0.0;
  intrinsicMat[0] = this_->FocalLength[0];
  intrinsicMat[3] = this_->Skew;
  intrinsicMat[6] = this_->PrincipalPoint[0];
  intrinsicMat[1] = 0.0;
  intrinsicMat[4] = this_->FocalLength[1];
  intrinsicMat[7] = this_->PrincipalPoint[1];
  intrinsicMat[2] = 0.0;
  intrinsicMat[5] = 0.0;
  intrinsicMat[8] = 1.0;
  for (int32_T i{0}; i < 9; i++) {
    this_->K[i] = intrinsicMat[i];
  }
  st.site = &yc_emlrtRSI;
  b_st.site = &gd_emlrtRSI;
  b_r.FocalLength.set_size(&hj_emlrtRTEI, &b_st, 1, 2);
  b_r.PrincipalPoint.set_size(&ij_emlrtRTEI, &b_st, 1, 2);
  b_r.ImageSize.set_size(&jj_emlrtRTEI, &b_st, 1, 2);
  b_r.RadialDistortion.set_size(&kj_emlrtRTEI, &b_st, 1, 2);
  b_r.TangentialDistortion.set_size(&lj_emlrtRTEI, &b_st, 1, 2);
  b_r.FocalLength[0] = this_->FocalLength[0];
  b_r.PrincipalPoint[0] = this_->PrincipalPoint[0];
  b_r.ImageSize[0] = this_->ImageSize[0];
  b_r.RadialDistortion[0] = this_->RadialDistortion[0];
  b_r.TangentialDistortion[0] = this_->TangentialDistortion[0];
  b_r.FocalLength[1] = this_->FocalLength[1];
  b_r.PrincipalPoint[1] = this_->PrincipalPoint[1];
  b_r.ImageSize[1] = this_->ImageSize[1];
  b_r.RadialDistortion[1] = this_->RadialDistortion[1];
  b_r.TangentialDistortion[1] = this_->TangentialDistortion[1];
  b_r.Skew.set_size(&mj_emlrtRTEI, &b_st, 1, 1);
  b_r.Skew[0] = this_->Skew;
  this_->cameraIntrinsicsArrayData.set_size(&nj_emlrtRTEI, &st, 1, 1);
  this_->cameraIntrinsicsArrayData[0] = b_r;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return this_;
}

b_cameraIntrinsics *
cameraIntrinsics::parenReference(const emlrtStack &sp, real_T idx,
                                 b_cameraIntrinsics &iobj_0) const
{
  b_cameraIntrinsics *this1;
  bounded_array<vision::internal::codegen::cameraIntrinsicsArray, 1U, 2U>
      dataArray;
  emlrtStack st;
  int32_T i;
  int32_T loop_ub_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &lub_emlrtRSI;
  this1 = cameraIntrinsics::makeEmpty(st, iobj_0);
  dataArray.size[0] = 1;
  dataArray.size[1] = 1;
  i = cameraIntrinsicsArrayData.size(0) * cameraIntrinsicsArrayData.size(1);
  if ((static_cast<int32_T>(idx) - 1 < 0) ||
      (static_cast<int32_T>(idx) - 1 > i - 1)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx) - 1, 0, i - 1,
                                  &tj_emlrtBCI, (emlrtConstCTX)&sp);
  }
  dataArray.data[0] = cameraIntrinsicsArrayData[static_cast<int32_T>(idx) - 1];
  this1->cameraIntrinsicsArrayData.set_size(&hbb_emlrtRTEI, &sp, 1, 1);
  this1->cameraIntrinsicsArrayData[0] = dataArray.data[0];
  this1->FocalLength.set_size(&ibb_emlrtRTEI, &sp,
                              dataArray.data[0].FocalLength.size(0),
                              dataArray.data[0].FocalLength.size(1));
  loop_ub_tmp = dataArray.data[0].FocalLength.size(0) *
                dataArray.data[0].FocalLength.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    this1->FocalLength[i] = dataArray.data[0].FocalLength[i];
  }
  this1->PrincipalPoint.set_size(&jbb_emlrtRTEI, &sp,
                                 dataArray.data[0].PrincipalPoint.size(0),
                                 dataArray.data[0].PrincipalPoint.size(1));
  loop_ub_tmp = dataArray.data[0].PrincipalPoint.size(0) *
                dataArray.data[0].PrincipalPoint.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    this1->PrincipalPoint[i] = dataArray.data[0].PrincipalPoint[i];
  }
  this1->ImageSize.set_size(&kbb_emlrtRTEI, &sp,
                            dataArray.data[0].ImageSize.size(0),
                            dataArray.data[0].ImageSize.size(1));
  loop_ub_tmp =
      dataArray.data[0].ImageSize.size(0) * dataArray.data[0].ImageSize.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    this1->ImageSize[i] = dataArray.data[0].ImageSize[i];
  }
  this1->RadialDistortion.set_size(&lbb_emlrtRTEI, &sp,
                                   dataArray.data[0].RadialDistortion.size(0),
                                   dataArray.data[0].RadialDistortion.size(1));
  loop_ub_tmp = dataArray.data[0].RadialDistortion.size(0) *
                dataArray.data[0].RadialDistortion.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    this1->RadialDistortion[i] = dataArray.data[0].RadialDistortion[i];
  }
  this1->TangentialDistortion.set_size(
      &mbb_emlrtRTEI, &sp, dataArray.data[0].TangentialDistortion.size(0),
      dataArray.data[0].TangentialDistortion.size(1));
  loop_ub_tmp = dataArray.data[0].TangentialDistortion.size(0) *
                dataArray.data[0].TangentialDistortion.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    this1->TangentialDistortion[i] = dataArray.data[0].TangentialDistortion[i];
  }
  this1->Skew.set_size(&nbb_emlrtRTEI, &sp, dataArray.data[0].Skew.size(0),
                       dataArray.data[0].Skew.size(1));
  loop_ub_tmp = dataArray.data[0].Skew.size(0) * dataArray.data[0].Skew.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    this1->Skew[i] = dataArray.data[0].Skew[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return this1;
}

} // namespace coder

// End of code generation (cameraIntrinsics.cpp)
