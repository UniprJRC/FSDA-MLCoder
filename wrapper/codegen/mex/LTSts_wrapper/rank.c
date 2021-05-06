/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rank.c
 *
 * Code generation for function 'rank'
 *
 */

/* Include files */
#include "rank.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "svd.h"
#include "mwmathutil.h"
#include <math.h>

/* Variable Definitions */
static emlrtRSInfo ff_emlrtRSI =
    {
        46,    /* lineNo */
        "eps", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\eps.m" /* pathName
                                                                          */
};

static emlrtRSInfo mt_emlrtRSI = {
    20,           /* lineNo */
    "local_rank", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\rank.m" /* pathName
                                                                        */
};

static emlrtRSInfo nt_emlrtRSI = {
    22,           /* lineNo */
    "local_rank", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\rank.m" /* pathName
                                                                        */
};

static emlrtRSInfo ot_emlrtRSI = {
    31,           /* lineNo */
    "local_rank", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\rank.m" /* pathName
                                                                        */
};

static emlrtRSInfo pt_emlrtRSI = {
    12,    /* lineNo */
    "svd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m" /* pathName
                                                                       */
};

static emlrtRSInfo qt_emlrtRSI = {
    15,    /* lineNo */
    "svd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m" /* pathName
                                                                       */
};

static emlrtRSInfo rt_emlrtRSI = {
    20,    /* lineNo */
    "svd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m" /* pathName
                                                                       */
};

static emlrtRSInfo st_emlrtRSI = {
    29,             /* lineNo */
    "anyNonFinite", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\anyNonFinite."
    "m" /* pathName */
};

static emlrtRSInfo tt_emlrtRSI =
    {
        44,          /* lineNo */
        "vAllOrAny", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\vAllOrAny.m" /* pathName */
};

static emlrtRSInfo ut_emlrtRSI =
    {
        103,                  /* lineNo */
        "flatVectorAllOrAny", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\vAllOrAny.m" /* pathName */
};

static emlrtRTEInfo jt_emlrtRTEI = {
    19,    /* lineNo */
    14,    /* colNo */
    "svd", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m" /* pName
                                                                       */
};

static emlrtRTEInfo kt_emlrtRTEI = {
    20,     /* lineNo */
    5,      /* colNo */
    "rank", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\rank.m" /* pName
                                                                        */
};

/* Function Definitions */
int32_T local_rank(const emlrtStack *sp, const emxArray_real_T *A)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_real_T *r;
  emxArray_real_T *s;
  real_T absx;
  int32_T exponent;
  int32_T irank;
  int32_T k;
  int32_T nx;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  irank = 0;
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    st.site = &mt_emlrtRSI;
    b_st.site = &pt_emlrtRSI;
    c_st.site = &st_emlrtRSI;
    d_st.site = &tt_emlrtRSI;
    nx = A->size[0] * A->size[1];
    p = true;
    e_st.site = &ut_emlrtRSI;
    if ((1 <= nx) && (nx > 2147483646)) {
      f_st.site = &qf_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }
    for (k = 0; k < nx; k++) {
      if ((!p) || (muDoubleScalarIsInf(A->data[k]) ||
                   muDoubleScalarIsNaN(A->data[k]))) {
        p = false;
      }
    }
    emxInit_real_T(&st, &s, 1, &kt_emlrtRTEI, true);
    if (p) {
      b_st.site = &qt_emlrtRSI;
      svd(&b_st, A, s);
    } else {
      emxInit_real_T(&st, &r, 2, &jt_emlrtRTEI, true);
      k = r->size[0] * r->size[1];
      r->size[0] = A->size[0];
      r->size[1] = A->size[1];
      emxEnsureCapacity_real_T(&st, r, k, &jt_emlrtRTEI);
      nx = A->size[0] * A->size[1];
      for (k = 0; k < nx; k++) {
        r->data[k] = 0.0;
      }
      b_st.site = &rt_emlrtRSI;
      svd(&b_st, r, s);
      nx = s->size[0];
      k = s->size[0];
      s->size[0] = nx;
      emxEnsureCapacity_real_T(&st, s, k, &kt_emlrtRTEI);
      emxFree_real_T(&r);
      for (k = 0; k < nx; k++) {
        s->data[k] = rtNaN;
      }
    }
    st.site = &nt_emlrtRSI;
    b_st.site = &ff_emlrtRSI;
    absx = muDoubleScalarAbs(s->data[0]);
    if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = rtNaN;
    }
    absx *= (real_T)muIntScalarMax_sint32(A->size[0], A->size[1]);
    st.site = &ot_emlrtRSI;
    if ((1 <= s->size[0]) && (s->size[0] > 2147483646)) {
      b_st.site = &qf_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    k = 0;
    while ((k <= s->size[0] - 1) && (s->data[k] > absx)) {
      irank++;
      k++;
    }
    emxFree_real_T(&s);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return irank;
}

/* End of code generation (rank.c) */
