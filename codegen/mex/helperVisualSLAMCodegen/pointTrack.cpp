//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// pointTrack.cpp
//
// Code generation for function 'pointTrack'
//

// Include files
#include "pointTrack.h"
#include "checkAndConvertPoints.h"
#include "helperVisualSLAMCodegen_data.h"
#include "pointTrackImpl.h"
#include "rt_nonfinite.h"
#include "validateattributes.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo ppb_emlrtRSI{
    57,                           // lineNo
    "pointTrackImpl/set.ViewIds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\pointTrackImpl.m" // pathName
};

static emlrtRSInfo rpb_emlrtRSI{
    66,                                  // lineNo
    "pointTrackImpl/set.FeatureIndices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\pointTrackImpl.m" // pathName
};

static emlrtRSInfo wtb_emlrtRSI{
    25,                               // lineNo
    "pointTrackArray/parenReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrackArray.m" // pathName
};

static emlrtRSInfo xtb_emlrtRSI{
    44,                               // lineNo
    "pointTrackArray/parenReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrackArray.m" // pathName
};

static emlrtRSInfo ytb_emlrtRSI{
    45,                               // lineNo
    "pointTrackArray/parenReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrackArray.m" // pathName
};

static emlrtRSInfo aub_emlrtRSI{
    46,                               // lineNo
    "pointTrackArray/parenReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrackArray.m" // pathName
};

static emlrtRSInfo bub_emlrtRSI{
    48,                     // lineNo
    "pointTrack/makeEmpty", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrack.m" // pathName
};

static emlrtBCInfo sj_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    40,                               // lineNo
    42,                               // colNo
    "",                               // aName
    "pointTrackArray/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrackArray.m", // pName
    0                             // checkKind
};

static emlrtRTEInfo aab_emlrtRTEI{
    61,               // lineNo
    13,               // colNo
    "pointTrackImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\pointTrackImpl.m" // pName
};

static emlrtRTEInfo fbb_emlrtRTEI{
    43,           // lineNo
    13,           // colNo
    "pointTrack", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrack.m" // pName
};

static emlrtRTEInfo gbb_emlrtRTEI{
    43,                // lineNo
    13,                // colNo
    "pointTrackArray", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrackArray.m" // pName
};

// Function Definitions
namespace coder {
void pointTrack::init(const emlrtStack &sp,
                      const array<uint32_T, 1U> &varargin_1,
                      const array<real32_T, 2U> &varargin_2,
                      const array<real_T, 1U> &varargin_3)
{
  vision::internal::pointTrackImpl b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &kpb_emlrtRSI;
  b_st.site = &mpb_emlrtRSI;
  loop_ub = varargin_1.size(0);
  ViewIds.set_size(&aab_emlrtRTEI, &b_st, 1, varargin_1.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    ViewIds[i] = varargin_1[i];
  }
  b_st.site = &npb_emlrtRSI;
  Points.set_size(&sy_emlrtRTEI, &b_st, varargin_2.size(0), varargin_2.size(1));
  loop_ub_tmp = varargin_2.size(0) * varargin_2.size(1);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    Points[i] = varargin_2[i];
  }
  c_st.site = &qpb_emlrtRSI;
  vision::internal::inputValidation::checkAndConvertPoints(c_st, Points);
  b_st.site = &opb_emlrtRSI;
  c_st.site = &rpb_emlrtRSI;
  validateattributes(c_st, varargin_3);
  st.site = &lpb_emlrtRSI;
  b_st.site = &mpb_emlrtRSI;
  b_r.ViewIds.set_size(&aab_emlrtRTEI, &b_st, 1, varargin_1.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_r.ViewIds[i] = varargin_1[i];
  }
  b_st.site = &npb_emlrtRSI;
  b_r.Points.set_size(&sy_emlrtRTEI, &b_st, varargin_2.size(0),
                      varargin_2.size(1));
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    b_r.Points[i] = varargin_2[i];
  }
  c_st.site = &qpb_emlrtRSI;
  vision::internal::inputValidation::checkAndConvertPoints(c_st, b_r.Points);
  b_st.site = &opb_emlrtRSI;
  c_st.site = &rpb_emlrtRSI;
  validateattributes(c_st, varargin_3);
  loop_ub = varargin_3.size(0);
  b_r.FeatureIndices.set_size(&ry_emlrtRTEI, &b_st, 1, varargin_3.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    real_T d;
    uint32_T u;
    d = muDoubleScalarRound(varargin_3[i]);
    if (d < 4.294967296E+9) {
      if (d >= 0.0) {
        u = static_cast<uint32_T>(d);
      } else {
        u = 0U;
      }
    } else if (d >= 4.294967296E+9) {
      u = MAX_uint32_T;
    } else {
      u = 0U;
    }
    b_r.FeatureIndices[i] = u;
  }
  Data.set_size(&ty_emlrtRTEI, &sp, 1, 1);
  Data[0] = b_r;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void pointTrack::parenReference(const emlrtStack &sp, real_T idx,
                                pointTrack &this1) const
{
  array<real32_T, 2U> b_r;
  array<uint32_T, 2U> b_featureIndices_data;
  array<uint32_T, 2U> featureIndices_data;
  bounded_array<vision::internal::pointTrackImpl, 1U, 2U> dataArray;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T i;
  int32_T loop_ub_tmp;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &wtb_emlrtRSI;
  b_r.set_size(&fbb_emlrtRTEI, &st, 0, 2);
  b_st.site = &bub_emlrtRSI;
  c_st.site = &kpb_emlrtRSI;
  d_st.site = &mpb_emlrtRSI;
  d_st.site = &npb_emlrtRSI;
  e_st.site = &qpb_emlrtRSI;
  vision::internal::inputValidation::checkAndConvertPoints(e_st, b_r);
  d_st.site = &opb_emlrtRSI;
  featureIndices_data.set(nullptr, 1, 0);
  e_st.site = &rpb_emlrtRSI;
  validateattributes(e_st, featureIndices_data);
  c_st.site = &lpb_emlrtRSI;
  d_st.site = &mpb_emlrtRSI;
  d_st.site = &npb_emlrtRSI;
  e_st.site = &qpb_emlrtRSI;
  vision::internal::inputValidation::checkAndConvertPoints(e_st, b_r);
  d_st.site = &opb_emlrtRSI;
  b_featureIndices_data.set(nullptr, 1, 0);
  e_st.site = &rpb_emlrtRSI;
  validateattributes(e_st, b_featureIndices_data);
  dataArray.size[0] = 1;
  dataArray.size[1] = 1;
  i = Data.size(0) * Data.size(1);
  if ((static_cast<int32_T>(idx) - 1 < 0) ||
      (static_cast<int32_T>(idx) - 1 > i - 1)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx) - 1, 0, i - 1,
                                  &sj_emlrtBCI, (emlrtConstCTX)&sp);
  }
  dataArray.data[0] = Data[static_cast<int32_T>(idx) - 1];
  this1.Data.set_size(&gbb_emlrtRTEI, &sp, 1, 1);
  this1.Data[0] = dataArray.data[0];
  st.site = &xtb_emlrtRSI;
  this1.Points.set_size(&sy_emlrtRTEI, &st, dataArray.data[0].Points.size(0),
                        dataArray.data[0].Points.size(1));
  loop_ub_tmp =
      dataArray.data[0].Points.size(0) * dataArray.data[0].Points.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    this1.Points[i] = dataArray.data[0].Points[i];
  }
  b_st.site = &qpb_emlrtRSI;
  vision::internal::inputValidation::checkAndConvertPoints(b_st, this1.Points);
  st.site = &ytb_emlrtRSI;
  b_st.site = &ppb_emlrtRSI;
  c_st.site = &be_emlrtRSI;
  loop_ub_tmp = dataArray.data[0].ViewIds.size(1);
  this1.ViewIds.set_size(&aab_emlrtRTEI, &st, 1,
                         dataArray.data[0].ViewIds.size(1));
  for (i = 0; i < loop_ub_tmp; i++) {
    this1.ViewIds[i] = dataArray.data[0].ViewIds[i];
  }
  st.site = &aub_emlrtRSI;
  b_st.site = &rpb_emlrtRSI;
  validateattributes(b_st, dataArray.data[0].FeatureIndices);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (pointTrack.cpp)
