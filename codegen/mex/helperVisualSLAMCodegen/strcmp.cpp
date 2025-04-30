//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// strcmp.cpp
//
// Code generation for function 'strcmp'
//

// Include files
#include "strcmp.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "rt_nonfinite.h"
#include "string1.h"
#include "coder_array.h"
#include "coder_bounded_array.h"

// Variable Definitions
static emlrtRSInfo mmb_emlrtRSI{
    76,       // lineNo
    "strcmp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m" // pathName
};

static emlrtRSInfo nmb_emlrtRSI{
    167,          // lineNo
    "loc_strcmp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m" // pathName
};

static emlrtRSInfo omb_emlrtRSI{
    240,       // lineNo
    "charcmp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m" // pathName
};

static emlrtRTEInfo gg_emlrtRTEI{
    15,                      // lineNo
    9,                       // colNo
    "assertSupportedString", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertSupportedString.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
boolean_T b_strcmp(const emlrtStack &sp, const rtString &a)
{
  static const char_T b_cv[128]{
      '\x00', '\x01', '\x02', '\x03', '\x04', '\x05', '\x06', '\a',   '\b',
      '\t',   '\n',   '\v',   '\f',   '\r',   '\x0e', '\x0f', '\x10', '\x11',
      '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18', '\x19', '\x1a',
      '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ',    '!',    '\"',   '#',
      '$',    '%',    '&',    '\'',   '(',    ')',    '*',    '+',    ',',
      '-',    '.',    '/',    '0',    '1',    '2',    '3',    '4',    '5',
      '6',    '7',    '8',    '9',    ':',    ';',    '<',    '=',    '>',
      '?',    '@',    'a',    'b',    'c',    'd',    'e',    'f',    'g',
      'h',    'i',    'j',    'k',    'l',    'm',    'n',    'o',    'p',
      'q',    'r',    's',    't',    'u',    'v',    'w',    'x',    'y',
      'z',    '[',    '\\',   ']',    '^',    '_',    '`',    'a',    'b',
      'c',    'd',    'e',    'f',    'g',    'h',    'i',    'j',    'k',
      'l',    'm',    'n',    'o',    'p',    'q',    'r',    's',    't',
      'u',    'v',    'w',    'x',    'y',    'z',    '{',    '|',    '}',
      '~',    '\x7f'};
  static const char_T b_cv1[2]{'L', '2'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  boolean_T b_bool;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &mmb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &nmb_emlrtRSI;
  b_bool = false;
  if (a.Value.size(1) == 2) {
    int32_T kstr;
    kstr = 0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (kstr < 2) {
        uint8_T u;
        c_st.site = &omb_emlrtRSI;
        u = static_cast<uint8_T>(a.Value[kstr]);
        if (u > 127) {
          emlrtErrorWithMessageIdR2018a(
              &c_st, &gg_emlrtRTEI, "Coder:toolbox:unsupportedString",
              "Coder:toolbox:unsupportedString", 2, 12, 127);
        }
        if (b_cv[u] != b_cv[static_cast<int32_T>(b_cv1[kstr])]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  return b_bool;
}

void c_strcmp(const cell_wrap_188 b_data[], boolean_T bool_data[],
              int32_T bool_size[2])
{
  static const char_T b_cv[6]{'P', 'o', 'i', 'n', 't', 's'};
  bool_size[0] = 1;
  bool_size[1] = 2;
  for (int32_T k{0}; k < 2; k++) {
    bool_data[k] = false;
    if (b_data[k].f1.size[1] == 6) {
      int32_T kstr;
      kstr = 0;
      int32_T exitg1;
      do {
        exitg1 = 0;
        if (kstr < 6) {
          if (b_cv[kstr] != b_data[k].f1.data[kstr]) {
            exitg1 = 1;
          } else {
            kstr++;
          }
        } else {
          bool_data[k] = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
  }
}

void d_strcmp(const cell_wrap_188 b_data[], boolean_T bool_data[],
              int32_T bool_size[2])
{
  static const char_T b_cv[8]{'F', 'e', 'a', 't', 'u', 'r', 'e', 's'};
  bool_size[0] = 1;
  bool_size[1] = 2;
  for (int32_T k{0}; k < 2; k++) {
    bool_data[k] = false;
    if (b_data[k].f1.size[1] == 8) {
      int32_T kstr;
      kstr = 0;
      int32_T exitg1;
      do {
        exitg1 = 0;
        if (kstr < 8) {
          if (b_cv[kstr] != b_data[k].f1.data[kstr]) {
            exitg1 = 1;
          } else {
            kstr++;
          }
        } else {
          bool_data[k] = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
  }
}

void e_strcmp(const cell_wrap_188 b_data[], boolean_T bool_data[],
              int32_T bool_size[2])
{
  static const char_T b_cv[7]{'a', 'b', 's', 'P', 'o', 's', 'e'};
  bool_size[0] = 1;
  bool_size[1] = 2;
  for (int32_T k{0}; k < 2; k++) {
    bool_data[k] = false;
    if (b_data[k].f1.size[1] == 7) {
      int32_T kstr;
      kstr = 0;
      int32_T exitg1;
      do {
        exitg1 = 0;
        if (kstr < 7) {
          if (b_cv[kstr] != b_data[k].f1.data[kstr]) {
            exitg1 = 1;
          } else {
            kstr++;
          }
        } else {
          bool_data[k] = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
  }
}

} // namespace internal
} // namespace coder

// End of code generation (strcmp.cpp)
