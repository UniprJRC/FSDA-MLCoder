/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * nullAssignment.c
 *
 * Code generation for function 'nullAssignment'
 *
 */

/* Include files */
#include "nullAssignment.h"
#include "addt_wrapper_data.h"
#include "addt_wrapper_emxutil.h"
#include "addt_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo cc_emlrtRSI = {
    29,               /* lineNo */
    "nullAssignment", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo dc_emlrtRSI = {
    33,               /* lineNo */
    "nullAssignment", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo ec_emlrtRSI = {
    356,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo fc_emlrtRSI = {
    357,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo gc_emlrtRSI = {
    365,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo hc_emlrtRSI = {
    367,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = {
    370,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo jc_emlrtRSI = {
    372,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo kc_emlrtRSI = {
    259,             /* lineNo */
    "make_bitarray", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = {
    132,        /* lineNo */
    "num_true", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    379,              /* lineNo */
    1,                /* colNo */
    "delete_columns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI = {
    81,                /* lineNo */
    27,                /* colNo */
    "validate_inputs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo td_emlrtRTEI = {
    365,              /* lineNo */
    9,                /* colNo */
    "nullAssignment", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = {
    33,               /* lineNo */
    13,               /* colNo */
    "nullAssignment", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = {
    363,              /* lineNo */
    9,                /* colNo */
    "nullAssignment", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

/* Function Definitions */
void nullAssignment(const emlrtStack *sp, emxArray_real_T *x,
                    const emxArray_int32_T *idx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_boolean_T *b;
  int32_T b_b;
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T ncols;
  int32_T ncolx;
  int32_T nrowx;
  boolean_T exitg1;
  boolean_T overflow;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &cc_emlrtRSI;
  overflow = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= idx->size[1] - 1)) {
    if (idx->data[k] > x->size[1]) {
      overflow = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!overflow) {
    emlrtErrorWithMessageIdR2018a(&st, &u_emlrtRTEI,
                                  "MATLAB:subsdeldimmismatch",
                                  "MATLAB:subsdeldimmismatch", 0);
  }
  st.site = &dc_emlrtRSI;
  nrowx = x->size[0];
  ncolx = x->size[1];
  if (idx->size[1] == 1) {
    ncols = x->size[1] - 1;
    b_b = idx->data[0];
    b_st.site = &ec_emlrtRSI;
    if (idx->data[0] > x->size[1] - 1) {
      overflow = false;
    } else {
      overflow = (x->size[1] - 1 > 2147483646);
    }
    if (overflow) {
      c_st.site = &kb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (j = b_b; j <= ncols; j++) {
      b_st.site = &fc_emlrtRSI;
      if ((1 <= nrowx) && (nrowx > 2147483646)) {
        c_st.site = &kb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (i = 0; i < nrowx; i++) {
        x->data[i + x->size[0] * (j - 1)] = x->data[i + x->size[0] * j];
      }
    }
  } else {
    emxInit_boolean_T(&st, &b, 2, &vd_emlrtRTEI, true);
    b_st.site = &gc_emlrtRSI;
    i = b->size[0] * b->size[1];
    b->size[0] = 1;
    b->size[1] = x->size[1];
    emxEnsureCapacity_boolean_T(&b_st, b, i, &td_emlrtRTEI);
    j = x->size[1];
    for (i = 0; i < j; i++) {
      b->data[i] = false;
    }
    b_b = idx->size[1];
    c_st.site = &kc_emlrtRSI;
    if ((1 <= idx->size[1]) && (idx->size[1] > 2147483646)) {
      d_st.site = &kb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 0; k < b_b; k++) {
      b->data[idx->data[k] - 1] = true;
    }
    b_st.site = &hc_emlrtRSI;
    ncols = 0;
    b_b = b->size[1];
    c_st.site = &lc_emlrtRSI;
    if ((1 <= b->size[1]) && (b->size[1] > 2147483646)) {
      d_st.site = &kb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 0; k < b_b; k++) {
      ncols += b->data[k];
    }
    ncols = x->size[1] - ncols;
    j = 0;
    b_st.site = &ic_emlrtRSI;
    if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
      c_st.site = &kb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (k = 0; k < ncolx; k++) {
      if ((k + 1 > b->size[1]) || (!b->data[k])) {
        b_st.site = &jc_emlrtRSI;
        if ((1 <= nrowx) && (nrowx > 2147483646)) {
          c_st.site = &kb_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }
        for (i = 0; i < nrowx; i++) {
          x->data[i + x->size[0] * j] = x->data[i + x->size[0] * k];
        }
        j++;
      }
    }
    emxFree_boolean_T(&b);
  }
  if (ncols > ncolx) {
    emlrtErrorWithMessageIdR2018a(&st, &t_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (1 > ncols) {
    j = 0;
  } else {
    j = ncols;
  }
  b_b = x->size[0] - 1;
  ncols = x->size[0];
  for (i = 0; i < j; i++) {
    for (nrowx = 0; nrowx < ncols; nrowx++) {
      x->data[nrowx + (b_b + 1) * i] = x->data[nrowx + x->size[0] * i];
    }
  }
  i = x->size[0] * x->size[1];
  x->size[0] = b_b + 1;
  x->size[1] = j;
  emxEnsureCapacity_real_T(&st, x, i, &ud_emlrtRTEI);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (nullAssignment.c) */
