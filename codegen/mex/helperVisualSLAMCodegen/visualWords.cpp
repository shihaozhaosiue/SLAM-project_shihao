//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// visualWords.cpp
//
// Code generation for function 'visualWords'
//

// Include files
#include "visualWords.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "validateattributes.h"
#include "visualWordsImpl.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo lob_emlrtRSI{
    242,                   // lineNo
    "visualWords/vertcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\visualWords.m" // pathName
};

static emlrtRSInfo mob_emlrtRSI{
    243,                   // lineNo
    "visualWords/vertcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\visualWords.m" // pathName
};

static emlrtRSInfo nob_emlrtRSI{
    245,                   // lineNo
    "visualWords/vertcat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\visualWords.m" // pathName
};

static emlrtRSInfo oob_emlrtRSI{
    404,                               // lineNo
    "visualWords/initializeArrayData", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\visualWords.m" // pathName
};

static emlrtRSInfo pob_emlrtRSI{
    53,                            // lineNo
    "visualWordsImpl/checkInputs", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\visualWordsImpl.m" // pathName
};

static emlrtRTEInfo pg_emlrtRTEI{
    234,                   // lineNo
    13,                    // colNo
    "visualWords/vertcat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\visualWords.m" // pName
};

static emlrtBCInfo udb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    373,                    // lineNo
    46,                     // colNo
    "",                     // aName
    "visualWords/copyData", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\visualWords.m", // pName
    0                         // checkKind
};

static emlrtRTEInfo qg_emlrtRTEI{
    57,                            // lineNo
    13,                            // colNo
    "visualWordsImpl/checkInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\visualWordsImpl.m" // pName
};

static emlrtRTEInfo jwb_emlrtRTEI{
    379,           // lineNo
    21,            // colNo
    "visualWords", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\visualWords.m" // pName
};

static emlrtRTEInfo kwb_emlrtRTEI{
    245,           // lineNo
    20,            // colNo
    "visualWords", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\visualWords.m" // pName
};

static emlrtRTEInfo lwb_emlrtRTEI{
    384,           // lineNo
    13,            // colNo
    "visualWords", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\visualWords.m" // pName
};

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
void visualWords::vertcat(const emlrtStack &sp)
{
  array<visualWordsImpl, 2U> dataArray;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T dataArray_tmp;
  int32_T i;
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
  if ((Data.size(0) == 1) && (Data.size(0) * Data.size(1) != 1)) {
    emlrtErrorWithMessageIdR2018a(&sp, &pg_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  st.site = &lob_emlrtRSI;
  b_st.site = &oob_emlrtRSI;
  c_st.site = &blb_emlrtRSI;
  d_st.site = &clb_emlrtRSI;
  validateattributes(d_st, Location);
  d_st.site = &pob_emlrtRSI;
  e_st.site = &be_emlrtRSI;
  if (VocabularySize <= 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:visualWords:expectedPositive", 3, 4, 31,
        "input number 3, VocabularySize,");
  }
  e_st.site = &be_emlrtRSI;
  if (muDoubleScalarIsInf(VocabularySize) ||
      muDoubleScalarIsNaN(VocabularySize) ||
      (!(muDoubleScalarFloor(VocabularySize) == VocabularySize))) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &qc_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedInteger",
        "MATLAB:visualWords:expectedInteger", 3, 4, 31,
        "input number 3, VocabularySize,");
  }
  if (WordIndex.size(0) != Location.size(0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &qg_emlrtRTEI,
                                  "vision:visualWords:invalidNumelWords",
                                  "vision:visualWords:invalidNumelWords", 0);
  }
  st.site = &mob_emlrtRSI;
  b_st.site = &ne_emlrtRSI;
  st.site = &nob_emlrtRSI;
  dataArray.set_size(&jwb_emlrtRTEI, &st, 0, 1);
  i = Data.size(0) * Data.size(1);
  for (int32_T n{0}; n < i; n++) {
    if (n > i - 1) {
      emlrtDynamicBoundsCheckR2012b(n, 0, i - 1, &udb_emlrtBCI, &st);
    }
    dataArray_tmp = dataArray.size(0) + 1;
    dataArray.set_size(&kwb_emlrtRTEI, &st, dataArray.size(0) + 1, 1);
    dataArray[dataArray_tmp - 1] = Data[n];
  }
  dataArray_tmp = dataArray.size(0);
  Data.set_size(&lwb_emlrtRTEI, &st, dataArray.size(0), 1);
  for (i = 0; i < dataArray_tmp; i++) {
    Data[i] = dataArray[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (visualWords.cpp)
