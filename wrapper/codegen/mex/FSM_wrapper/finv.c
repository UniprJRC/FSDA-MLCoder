/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * finv.c
 *
 * Code generation for function 'finv'
 *
 */

/* Include files */
#include "finv.h"
#include "FSM_wrapper_data.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_mexutil.h"
#include "FSM_wrapper_types.h"
#include "betainc.h"
#include "betaincinv.h"
#include "chi2inv.h"
#include "gammainc.h"
#include "gammaincinv.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ek_emlrtRSI = {
    35,     /* lineNo */
    "finv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\finv.m" /* pathName
                                                                      */
};

static emlrtRSInfo fk_emlrtRSI = {
    32,     /* lineNo */
    "finv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\finv.m" /* pathName
                                                                      */
};

static emlrtRSInfo gk_emlrtRSI = {
    31,     /* lineNo */
    "finv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\finv.m" /* pathName
                                                                      */
};

static emlrtRSInfo hk_emlrtRSI = {
    28,     /* lineNo */
    "finv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\finv.m" /* pathName
                                                                      */
};

static emlrtRSInfo tx_emlrtRSI = {
    11,     /* lineNo */
    "finv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\finv.m" /* pathName
                                                                      */
};

static emlrtRSInfo ux_emlrtRSI = {
    25,     /* lineNo */
    "finv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\finv.m" /* pathName
                                                                      */
};

static emlrtRSInfo
    vx_emlrtRSI =
        {
            49,        /* lineNo */
            "sxalloc", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sxalloc.m" /* pathName */
};

static emlrtBCInfo co_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    13,     /* lineNo */
    32,     /* colNo */
    "",     /* aName */
    "finv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\finv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo do_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    15,     /* lineNo */
    39,     /* colNo */
    "",     /* aName */
    "finv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\finv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo eo_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    41,     /* lineNo */
    9,      /* colNo */
    "",     /* aName */
    "finv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\finv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo fo_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    22,     /* lineNo */
    21,     /* colNo */
    "",     /* aName */
    "finv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\finv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo go_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    20,     /* lineNo */
    21,     /* colNo */
    "",     /* aName */
    "finv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\finv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ho_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    28,     /* lineNo */
    13,     /* colNo */
    "",     /* aName */
    "finv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\finv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo io_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    38,     /* lineNo */
    13,     /* colNo */
    "",     /* aName */
    "finv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\finv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo jo_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    25,     /* lineNo */
    17,     /* colNo */
    "",     /* aName */
    "finv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\finv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ko_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    14,     /* lineNo */
    39,     /* colNo */
    "",     /* aName */
    "finv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\finv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtRTEInfo tn_emlrtRTEI = {
    11,     /* lineNo */
    5,      /* colNo */
    "finv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\finv.m" /* pName */
};

/* Function Definitions */
void b_finv(const emlrtStack *sp, const emxArray_real_T *p, real_T v1,
            const emxArray_real_T *v2, emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack st;
  creal_T dc;
  real_T t;
  int32_T ztemp_size[2];
  int32_T csz_idx_0;
  int32_T csz_idx_1;
  int32_T i;
  int32_T k;
  boolean_T b_p;
  boolean_T c_p;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tx_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &vx_emlrtRSI;
  if (p->size[0] <= v2->size[0]) {
    csz_idx_0 = p->size[0];
  } else {
    csz_idx_0 = v2->size[0];
  }
  if (p->size[1] <= v2->size[1]) {
    csz_idx_1 = p->size[1];
  } else {
    csz_idx_1 = v2->size[1];
  }
  ztemp_size[0] = csz_idx_0;
  ztemp_size[1] = csz_idx_1;
  b_p = true;
  c_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (ztemp_size[k] != p->size[k]) {
      c_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (c_p) {
    c_p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 2)) {
      if (ztemp_size[k] != v2->size[k]) {
        c_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
    if (!c_p) {
      b_p = false;
    }
  } else {
    b_p = false;
  }
  if (!b_p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &kb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  i = x->size[0] * x->size[1];
  x->size[0] = csz_idx_0;
  x->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(&st, x, i, &tn_emlrtRTEI);
  i = csz_idx_0 * csz_idx_1;
  for (k = 0; k < i; k++) {
    csz_idx_0 = p->size[0] * p->size[1];
    if ((k + 1 < 1) || (k + 1 > csz_idx_0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &co_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    csz_idx_0 = v2->size[0] * v2->size[1];
    if ((k + 1 < 1) || (k + 1 > csz_idx_0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &do_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((v1 > 0.0) && (v2->data[k] > 0.0) && (p->data[k] >= 0.0) &&
        (p->data[k] <= 1.0)) {
      if (muDoubleScalarIsInf(v1)) {
        if (muDoubleScalarIsInf(v2->data[k])) {
          if (p->data[k] > 0.0) {
            csz_idx_0 = x->size[0] * x->size[1];
            if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                            &go_emlrtBCI, (emlrtCTX)sp);
            }
            x->data[k] = 1.0;
          } else {
            csz_idx_0 = x->size[0] * x->size[1];
            if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                            &fo_emlrtBCI, (emlrtCTX)sp);
            }
            x->data[k] = 0.0;
          }
        } else {
          csz_idx_0 = x->size[0] * x->size[1];
          if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                          &jo_emlrtBCI, (emlrtCTX)sp);
          }
          st.site = &ux_emlrtRSI;
          x->data[k] =
              v2->data[k] / chi2inv(&st, 1.0 - p->data[k], v2->data[k]);
        }
      } else if (muDoubleScalarIsInf(v2->data[k])) {
        csz_idx_0 = x->size[0] * x->size[1];
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                        &ho_emlrtBCI, (emlrtCTX)sp);
        }
        st.site = &hk_emlrtRSI;
        x->data[k] = chi2inv(&st, p->data[k], v1) / v1;
      } else {
        st.site = &gk_emlrtRSI;
        dc = betainc(&st, v1 / 2.0, v2->data[k] / 2.0);
        if (p->data[k] > dc.re) {
          st.site = &fk_emlrtRSI;
          dc = betaincinv(&st, p->data[k], v2->data[k] / 2.0, v1 / 2.0);
          t = (1.0 - dc.re) / dc.re;
        } else {
          st.site = &ek_emlrtRSI;
          dc = b_betaincinv(&st, p->data[k], v1 / 2.0, v2->data[k] / 2.0);
          t = dc.re / (1.0 - dc.re);
        }
        csz_idx_0 = x->size[0] * x->size[1];
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                        &io_emlrtBCI, (emlrtCTX)sp);
        }
        x->data[k] = t * v2->data[k] / v1;
      }
    } else {
      csz_idx_0 = x->size[0] * x->size[1];
      if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                      &eo_emlrtBCI, (emlrtCTX)sp);
      }
      x->data[k] = rtNaN;
    }
  }
}

void c_finv(const emlrtStack *sp, const emxArray_real_T *p,
            const emxArray_real_T *v1, const emxArray_real_T *v2,
            emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack st;
  creal_T dc;
  real_T t;
  int32_T csz[2];
  int32_T csz_idx_0;
  int32_T csz_idx_1;
  int32_T k;
  int32_T ztemp_size_idx_0;
  int32_T ztemp_size_idx_1;
  boolean_T b_p;
  boolean_T c_p;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tx_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &vx_emlrtRSI;
  if (p->size[0] <= v1->size[0]) {
    csz[0] = p->size[0];
  } else {
    csz[0] = v1->size[0];
  }
  if (p->size[1] <= v1->size[1]) {
    csz[1] = p->size[1];
  } else {
    csz[1] = v1->size[1];
  }
  if (p->size[0] <= v1->size[0]) {
    ztemp_size_idx_0 = p->size[0];
  } else {
    ztemp_size_idx_0 = v1->size[0];
  }
  if (p->size[1] <= v1->size[1]) {
    ztemp_size_idx_1 = p->size[1];
  } else {
    ztemp_size_idx_1 = v1->size[1];
  }
  if (csz[0] <= v2->size[0]) {
    csz_idx_0 = csz[0];
  } else {
    csz_idx_0 = v2->size[0];
  }
  if (csz[1] <= v2->size[1]) {
    csz_idx_1 = csz[1];
  } else {
    csz_idx_1 = v2->size[1];
  }
  if (ztemp_size_idx_0 <= v2->size[0]) {
    csz[0] = ztemp_size_idx_0;
  } else {
    csz[0] = v2->size[0];
  }
  if (ztemp_size_idx_1 <= v2->size[1]) {
    csz[1] = ztemp_size_idx_1;
  } else {
    csz[1] = v2->size[1];
  }
  b_p = true;
  c_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (csz[k] != p->size[k]) {
      c_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (c_p) {
    c_p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 2)) {
      if (csz[k] != v1->size[k]) {
        c_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
    if (c_p) {
      c_p = true;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k < 2)) {
        if (csz[k] != v2->size[k]) {
          c_p = false;
          exitg1 = true;
        } else {
          k++;
        }
      }
      if (!c_p) {
        b_p = false;
      }
    } else {
      b_p = false;
    }
  } else {
    b_p = false;
  }
  if (!b_p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &kb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  ztemp_size_idx_1 = x->size[0] * x->size[1];
  x->size[0] = csz_idx_0;
  x->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(&st, x, ztemp_size_idx_1, &tn_emlrtRTEI);
  ztemp_size_idx_1 = csz_idx_0 * csz_idx_1;
  for (k = 0; k < ztemp_size_idx_1; k++) {
    ztemp_size_idx_0 = p->size[0] * p->size[1];
    if ((k + 1 < 1) || (k + 1 > ztemp_size_idx_0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, ztemp_size_idx_0, &co_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    ztemp_size_idx_0 = v1->size[0] * v1->size[1];
    if ((k + 1 < 1) || (k + 1 > ztemp_size_idx_0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, ztemp_size_idx_0, &ko_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    ztemp_size_idx_0 = v2->size[0] * v2->size[1];
    if ((k + 1 < 1) || (k + 1 > ztemp_size_idx_0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, ztemp_size_idx_0, &do_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((v1->data[k] > 0.0) && (v2->data[k] > 0.0)) {
      if (muDoubleScalarIsInf(v1->data[k])) {
        if (muDoubleScalarIsInf(v2->data[k])) {
          ztemp_size_idx_0 = x->size[0] * x->size[1];
          if (((int32_T)(k + 1U) < 1) ||
              ((int32_T)(k + 1U) > ztemp_size_idx_0)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1,
                                          ztemp_size_idx_0, &go_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          x->data[k] = 1.0;
        } else {
          ztemp_size_idx_0 = x->size[0] * x->size[1];
          if (((int32_T)(k + 1U) < 1) ||
              ((int32_T)(k + 1U) > ztemp_size_idx_0)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1,
                                          ztemp_size_idx_0, &jo_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          st.site = &ux_emlrtRSI;
          x->data[k] =
              v2->data[k] / chi2inv(&st, 1.0 - p->data[k], v2->data[k]);
        }
      } else if (muDoubleScalarIsInf(v2->data[k])) {
        ztemp_size_idx_0 = x->size[0] * x->size[1];
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > ztemp_size_idx_0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, ztemp_size_idx_0,
                                        &ho_emlrtBCI, (emlrtCTX)sp);
        }
        st.site = &hk_emlrtRSI;
        x->data[k] = chi2inv(&st, p->data[k], v1->data[k]) / v1->data[k];
      } else {
        st.site = &gk_emlrtRSI;
        dc = betainc(&st, v1->data[k] / 2.0, v2->data[k] / 2.0);
        if (p->data[k] > dc.re) {
          st.site = &fk_emlrtRSI;
          dc =
              betaincinv(&st, p->data[k], v2->data[k] / 2.0, v1->data[k] / 2.0);
          t = (1.0 - dc.re) / dc.re;
        } else {
          st.site = &ek_emlrtRSI;
          dc = b_betaincinv(&st, p->data[k], v1->data[k] / 2.0,
                            v2->data[k] / 2.0);
          t = dc.re / (1.0 - dc.re);
        }
        ztemp_size_idx_0 = x->size[0] * x->size[1];
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > ztemp_size_idx_0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, ztemp_size_idx_0,
                                        &io_emlrtBCI, (emlrtCTX)sp);
        }
        x->data[k] = t * v2->data[k] / v1->data[k];
      }
    } else {
      ztemp_size_idx_0 = x->size[0] * x->size[1];
      if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > ztemp_size_idx_0)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, ztemp_size_idx_0,
                                      &eo_emlrtBCI, (emlrtCTX)sp);
      }
      x->data[k] = rtNaN;
    }
  }
}

real_T finv(const emlrtStack *sp, real_T p, real_T v2)
{
  static const int32_T iv[2] = {1, 6};
  static const int32_T iv1[2] = {1, 6};
  static const char_T rfmt[6] = {'%', '1', '2', '.', '4', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  creal_T dc;
  creal_T dc1;
  real_T t;
  real_T x;
  char_T b_str[12];
  char_T str[12];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if ((v2 > 0.0) && (p >= 0.0)) {
    if (muDoubleScalarIsInf(v2)) {
      st.site = &hk_emlrtRSI;
      b_st.site = &ik_emlrtRSI;
      c_st.site = &nk_emlrtRSI;
      dc = gammaincinv(&c_st, p, 1.0);
      c_st.site = &mk_emlrtRSI;
      c_st.site = &mk_emlrtRSI;
      dc1 = gammainc(&c_st, dc.re, 1.0);
      if (muDoubleScalarHypot(dc1.re - p, dc1.im) > p * 1.4901161193847656E-8) {
        c_st.site = &lk_emlrtRSI;
        y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(&c_st, 6, m, &rfmt[0]);
        emlrtAssign(&y, m);
        b_y = NULL;
        m = emlrtCreateDoubleScalar(2.0);
        emlrtAssign(&b_y, m);
        d_st.site = &qeb_emlrtRSI;
        e_emlrt_marshallIn(&d_st, b_sprintf(&d_st, y, b_y, &yb_emlrtMCI),
                           "<output of sprintf>", str);
        c_st.site = &kk_emlrtRSI;
        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&c_st, 6, m, &rfmt[0]);
        emlrtAssign(&c_y, m);
        d_y = NULL;
        m = emlrtCreateDoubleScalar(p);
        emlrtAssign(&d_y, m);
        d_st.site = &qeb_emlrtRSI;
        e_emlrt_marshallIn(&d_st, b_sprintf(&d_st, c_y, d_y, &yb_emlrtMCI),
                           "<output of sprintf>", b_str);
        c_st.site = &jk_emlrtRSI;
        b_warning(&c_st, str, b_str);
      }
      x = dc.re * 2.0 / 2.0;
    } else {
      st.site = &gk_emlrtRSI;
      dc = betainc(&st, 1.0, v2 / 2.0);
      if (p > dc.re) {
        st.site = &fk_emlrtRSI;
        dc = betaincinv(&st, p, v2 / 2.0, 1.0);
        t = (1.0 - dc.re) / dc.re;
      } else {
        st.site = &ek_emlrtRSI;
        dc = b_betaincinv(&st, p, 1.0, v2 / 2.0);
        t = dc.re / (1.0 - dc.re);
      }
      x = t * v2 / 2.0;
    }
  } else {
    x = rtNaN;
  }
  return x;
}

/* End of code generation (finv.c) */
