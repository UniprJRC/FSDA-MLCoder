/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chi2cdf.c
 *
 * Code generation for function 'chi2cdf'
 *
 */

/* Include files */
#include "chi2cdf.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_types.h"
#include "gammainc.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ly_emlrtRSI = {
    20,        /* lineNo */
    "chi2cdf", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\chi2cdf.m" /* pathName
                                                                         */
};

static emlrtRSInfo my_emlrtRSI = {
    51,       /* lineNo */
    "gamcdf", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m" /* pathName
                                                                        */
};

static emlrtBCInfo ro_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    40,       /* lineNo */
    10,       /* colNo */
    "",       /* aName */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo so_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    76,       /* lineNo */
    9,        /* colNo */
    "",       /* aName */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo to_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    77,       /* lineNo */
    9,        /* colNo */
    "",       /* aName */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo uo_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    78,       /* lineNo */
    9,        /* colNo */
    "",       /* aName */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo vo_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    51,       /* lineNo */
    13,       /* colNo */
    "",       /* aName */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtRTEInfo so_emlrtRTEI = {
    36,       /* lineNo */
    5,        /* colNo */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m" /* pName
                                                                        */
};

static emlrtRTEInfo to_emlrtRTEI = {
    37,       /* lineNo */
    22,       /* colNo */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m" /* pName
                                                                        */
};

static emlrtRTEInfo uo_emlrtRTEI = {
    38,       /* lineNo */
    22,       /* colNo */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m" /* pName
                                                                        */
};

static emlrtRTEInfo vo_emlrtRTEI = {
    1,        /* lineNo */
    13,       /* colNo */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m" /* pName
                                                                        */
};

static emlrtRTEInfo wo_emlrtRTEI = {
    1,        /* lineNo */
    17,       /* colNo */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m" /* pName
                                                                        */
};

/* Function Definitions */
void chi2cdf(const emlrtStack *sp, const emxArray_real_T *x, real_T v,
             emxArray_real_T *p)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *plo;
  emxArray_real_T *pup;
  creal_T dc;
  real_T a;
  real_T xk;
  int32_T i;
  int32_T i1;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &plo, 2, &vo_emlrtRTEI, true);
  emxInit_real_T(sp, &pup, 2, &wo_emlrtRTEI, true);
  a = v / 2.0;
  st.site = &ly_emlrtRSI;
  i = p->size[0] * p->size[1];
  p->size[0] = x->size[0];
  p->size[1] = x->size[1];
  emxEnsureCapacity_real_T(&st, p, i, &so_emlrtRTEI);
  i = plo->size[0] * plo->size[1];
  plo->size[0] = x->size[0];
  plo->size[1] = x->size[1];
  emxEnsureCapacity_real_T(&st, plo, i, &to_emlrtRTEI);
  i = pup->size[0] * pup->size[1];
  pup->size[0] = x->size[0];
  pup->size[1] = x->size[1];
  emxEnsureCapacity_real_T(&st, pup, i, &uo_emlrtRTEI);
  i = x->size[0] * x->size[1];
  for (k = 0; k < i; k++) {
    i1 = x->size[0] * x->size[1];
    if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > i1)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, i1, &ro_emlrtBCI,
                                    &st);
    }
    xk = x->data[k];
    if (!muDoubleScalarIsNaN(x->data[k])) {
      if (x->data[k] < 0.0) {
        xk = 0.0;
      }
      b_st.site = &my_emlrtRSI;
      dc = gammainc(&b_st, xk / 2.0, a);
      i1 = p->size[0] * p->size[1];
      if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > i1)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, i1, &vo_emlrtBCI,
                                      &st);
      }
      p->data[k] = dc.re;
    } else {
      i1 = p->size[0] * p->size[1];
      if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > i1)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, i1, &so_emlrtBCI,
                                      &st);
      }
      p->data[k] = rtNaN;
      i1 = plo->size[0] * plo->size[1];
      if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > i1)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, i1, &to_emlrtBCI,
                                      &st);
      }
      plo->data[k] = rtNaN;
      i1 = pup->size[0] * pup->size[1];
      if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > i1)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, i1, &uo_emlrtBCI,
                                      &st);
      }
      pup->data[k] = rtNaN;
    }
  }
  emxFree_real_T(&pup);
  emxFree_real_T(&plo);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (chi2cdf.c) */
