/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mrdivide_helper.c
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

/* Include files */
#include "mrdivide_helper.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "infocheck.h"
#include "qrsolve.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xgeqp3.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo gy_emlrtRSI = {
    42,      /* lineNo */
    "mrdiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_"
    "helper.m" /* pathName */
};

static emlrtRSInfo hy_emlrtRSI = {
    44,      /* lineNo */
    "mrdiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_"
    "helper.m" /* pathName */
};

static emlrtRSInfo
    ky_emlrtRSI =
        {
            107,          /* lineNo */
            "lusolveNxN", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo
    ly_emlrtRSI =
        {
            135,          /* lineNo */
            "XtimesInvA", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo
    my_emlrtRSI =
        {
            140,          /* lineNo */
            "XtimesInvA", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo
    ny_emlrtRSI =
        {
            142,          /* lineNo */
            "XtimesInvA", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo
    oy_emlrtRSI =
        {
            147,          /* lineNo */
            "XtimesInvA", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo
    gab_emlrtRSI =
        {
            126,         /* lineNo */
            "LSQFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo lab_emlrtRSI = {
    108,              /* lineNo */
    "ceval_xunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xunormqr.m" /* pathName */
};

static emlrtRSInfo mab_emlrtRSI = {
    18,          /* lineNo */
    "xzunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzunormqr.m" /* pathName */
};

static emlrtRSInfo nab_emlrtRSI = {
    21,          /* lineNo */
    "xzunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzunormqr.m" /* pathName */
};

static emlrtRSInfo oab_emlrtRSI = {
    23,          /* lineNo */
    "xzunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzunormqr.m" /* pathName */
};

static emlrtRSInfo pab_emlrtRSI = {
    29,          /* lineNo */
    "xzunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzunormqr.m" /* pathName */
};

static emlrtRTEInfo yjb_emlrtRTEI = {
    31,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_"
    "helper.m" /* pName */
};

static emlrtRTEInfo akb_emlrtRTEI = {
    44,                /* lineNo */
    35,                /* colNo */
    "mrdivide_helper", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_"
    "helper.m" /* pName */
};

static emlrtRTEInfo
    bkb_emlrtRTEI =
        {
            85,        /* lineNo */
            1,         /* colNo */
            "qrsolve", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pName */
};

static emlrtRTEInfo ckb_emlrtRTEI = {
    44,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_"
    "helper.m" /* pName */
};

static emlrtRTEInfo dkb_emlrtRTEI = {
    44,                /* lineNo */
    9,                 /* colNo */
    "mrdivide_helper", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_"
    "helper.m" /* pName */
};

static emlrtRTEInfo ekb_emlrtRTEI = {
    25,                /* lineNo */
    14,                /* colNo */
    "mrdivide_helper", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_"
    "helper.m" /* pName */
};

/* Function Definitions */
void mrdiv(const emlrtStack *sp, emxArray_real_T *A, const emxArray_real_T *B)
{
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t n_t;
  ptrdiff_t nrc_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_ptrdiff_t *ipiv_t;
  emxArray_ptrdiff_t *r;
  emxArray_real_T *Y;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  real_T wj;
  int32_T a_tmp;
  int32_T b_i;
  int32_T b_nb;
  int32_T i;
  int32_T info;
  int32_T j;
  int32_T k;
  int32_T m;
  int32_T nb;
  int32_T rankA;
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &Y, 2, &dkb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_B, 2, &akb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_A, 2, &ekb_emlrtRTEI, true);
  emxInit_real_T(sp, &tau, 1, &ekb_emlrtRTEI, true);
  emxInit_int32_T(sp, &jpvt, 2, &ekb_emlrtRTEI, true);
  emxInit_ptrdiff_t(sp, &ipiv_t, 1, &or_emlrtRTEI, true);
  emxInit_ptrdiff_t(sp, &r, 1, &jr_emlrtRTEI, true);
  if ((A->size[0] == 0) || (A->size[1] == 0) ||
      ((B->size[0] == 0) || (B->size[1] == 0))) {
    m = A->size[0];
    i = A->size[0] * A->size[1];
    A->size[1] = B->size[0];
    emxEnsureCapacity_real_T(sp, A, i, &yjb_emlrtRTEI);
    nb = B->size[0];
    for (i = 0; i < nb; i++) {
      for (a_tmp = 0; a_tmp < m; a_tmp++) {
        A->data[a_tmp + A->size[0] * i] = 0.0;
      }
    }
  } else if (B->size[0] == B->size[1]) {
    st.site = &gy_emlrtRSI;
    b_st.site = &iy_emlrtRSI;
    c_st.site = &ky_emlrtRSI;
    info = B->size[1];
    d_st.site = &ly_emlrtRSI;
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[0];
    b_A->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&d_st, b_A, i, &ir_emlrtRTEI);
    nb = B->size[0] * B->size[1];
    for (i = 0; i < nb; i++) {
      b_A->data[i] = B->data[i];
    }
    e_st.site = &uw_emlrtRSI;
    f_st.site = &ww_emlrtRSI;
    repmat(&f_st, (ptrdiff_t)0.0, muIntScalarMin_sint32(info, info), r);
    i = ipiv_t->size[0];
    ipiv_t->size[0] = r->size[0];
    emxEnsureCapacity_ptrdiff_t(&e_st, ipiv_t, i, &jr_emlrtRTEI);
    nrc_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)B->size[1],
                                (ptrdiff_t)B->size[1], &b_A->data[0],
                                (ptrdiff_t)B->size[1], &ipiv_t->data[0]);
    info = (int32_T)nrc_t;
    i = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&e_st, jpvt, i, &kr_emlrtRTEI);
    f_st.site = &vw_emlrtRSI;
    if (info < 0) {
      if (info == -1010) {
        emlrtErrorWithMessageIdR2018a(&f_st, &q_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &f_st, &r_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv17[0], 12, info);
      }
    }
    i = ipiv_t->size[0] - 1;
    for (k = 0; k <= i; k++) {
      jpvt->data[k] = (int32_T)ipiv_t->data[k];
    }
    b_nb = A->size[0];
    d_st.site = &my_emlrtRSI;
    if (A->size[0] >= 1) {
      e_st.site = &gx_emlrtRSI;
      f_st.site = &hx_emlrtRSI;
      wj = 1.0;
      DIAGA1 = 'N';
      TRANSA1 = 'N';
      UPLO1 = 'U';
      SIDE1 = 'R';
      nrc_t = (ptrdiff_t)A->size[0];
      n_t = (ptrdiff_t)B->size[1];
      lda_t = (ptrdiff_t)B->size[1];
      ldb_t = (ptrdiff_t)A->size[0];
      dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &nrc_t, &n_t, &wj, &b_A->data[0],
            &lda_t, &A->data[0], &ldb_t);
    }
    d_st.site = &ny_emlrtRSI;
    if (b_nb >= 1) {
      e_st.site = &gx_emlrtRSI;
      f_st.site = &hx_emlrtRSI;
      wj = 1.0;
      DIAGA1 = 'U';
      TRANSA1 = 'N';
      UPLO1 = 'L';
      SIDE1 = 'R';
      nrc_t = (ptrdiff_t)b_nb;
      n_t = (ptrdiff_t)B->size[1];
      lda_t = (ptrdiff_t)B->size[1];
      ldb_t = (ptrdiff_t)b_nb;
      dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &nrc_t, &n_t, &wj, &b_A->data[0],
            &lda_t, &A->data[0], &ldb_t);
    }
    i = B->size[1] - 1;
    for (j = i; j >= 1; j--) {
      a_tmp = jpvt->data[j - 1];
      if (a_tmp != j) {
        d_st.site = &oy_emlrtRSI;
        if ((1 <= b_nb) && (b_nb > 2147483646)) {
          e_st.site = &hb_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }
        for (b_i = 0; b_i < b_nb; b_i++) {
          wj = A->data[b_i + A->size[0] * (j - 1)];
          A->data[b_i + A->size[0] * (j - 1)] =
              A->data[b_i + A->size[0] * (a_tmp - 1)];
          A->data[b_i + A->size[0] * (a_tmp - 1)] = wj;
        }
      }
    }
    if (((B->size[0] != 1) || (B->size[1] != 1)) && (info > 0)) {
      c_st.site = &jy_emlrtRSI;
      d_st.site = &py_emlrtRSI;
      f_warning(&d_st);
    }
  } else {
    st.site = &hy_emlrtRSI;
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = A->size[1];
    b_B->size[1] = A->size[0];
    emxEnsureCapacity_real_T(&st, b_B, i, &akb_emlrtRTEI);
    nb = A->size[0];
    for (i = 0; i < nb; i++) {
      info = A->size[1];
      for (a_tmp = 0; a_tmp < info; a_tmp++) {
        b_B->data[a_tmp + b_B->size[0] * i] = A->data[i + A->size[0] * a_tmp];
      }
    }
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[1];
    b_A->size[1] = B->size[0];
    emxEnsureCapacity_real_T(&st, b_A, i, &my_emlrtRTEI);
    nb = B->size[0];
    for (i = 0; i < nb; i++) {
      info = B->size[1];
      for (a_tmp = 0; a_tmp < info; a_tmp++) {
        b_A->data[a_tmp + b_A->size[0] * i] = B->data[i + B->size[0] * a_tmp];
      }
    }
    b_st.site = &qy_emlrtRSI;
    xgeqp3(&b_st, b_A, tau, jpvt);
    b_st.site = &ry_emlrtRSI;
    rankA = rankFromQR(&b_st, b_A);
    b_st.site = &sy_emlrtRSI;
    b_nb = b_B->size[1];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_A->size[1];
    Y->size[1] = b_B->size[1];
    emxEnsureCapacity_real_T(&b_st, Y, i, &bkb_emlrtRTEI);
    nb = b_A->size[1] * b_B->size[1];
    for (i = 0; i < nb; i++) {
      Y->data[i] = 0.0;
    }
    c_st.site = &fab_emlrtRSI;
    d_st.site = &jab_emlrtRSI;
    if ((b_A->size[0] != 0) && (b_A->size[1] != 0) &&
        ((b_B->size[0] != 0) && (b_B->size[1] != 0))) {
      nrc_t = (ptrdiff_t)b_B->size[0];
      nrc_t = LAPACKE_dormqr(
          102, 'L', 'T', nrc_t, (ptrdiff_t)b_B->size[1],
          (ptrdiff_t)muIntScalarMin_sint32(b_A->size[0], b_A->size[1]),
          &b_A->data[0], (ptrdiff_t)b_A->size[0], &tau->data[0], &b_B->data[0],
          nrc_t);
      info = (int32_T)nrc_t;
      e_st.site = &kab_emlrtRSI;
      if (infocheck(&e_st, info)) {
        if ((info == -10) && (b_B->size[1] > 1)) {
          e_st.site = &lab_emlrtRSI;
          m = b_A->size[0];
          nb = b_B->size[1];
          info = muIntScalarMin_sint32(b_A->size[0], b_A->size[1]);
          f_st.site = &mab_emlrtRSI;
          if (info > 2147483646) {
            g_st.site = &hb_emlrtRSI;
            check_forloop_overflow_error(&g_st);
          }
          for (j = 0; j < info; j++) {
            if (tau->data[j] != 0.0) {
              f_st.site = &nab_emlrtRSI;
              if (nb > 2147483646) {
                g_st.site = &hb_emlrtRSI;
                check_forloop_overflow_error(&g_st);
              }
              for (k = 0; k < nb; k++) {
                wj = b_B->data[j + b_B->size[0] * k];
                a_tmp = j + 2;
                f_st.site = &oab_emlrtRSI;
                if ((j + 2 <= m) && (m > 2147483646)) {
                  g_st.site = &hb_emlrtRSI;
                  check_forloop_overflow_error(&g_st);
                }
                for (b_i = a_tmp; b_i <= m; b_i++) {
                  wj += b_A->data[(b_i + b_A->size[0] * j) - 1] *
                        b_B->data[(b_i + b_B->size[0] * k) - 1];
                }
                wj *= tau->data[j];
                if (wj != 0.0) {
                  b_B->data[j + b_B->size[0] * k] -= wj;
                  f_st.site = &pab_emlrtRSI;
                  for (b_i = a_tmp; b_i <= m; b_i++) {
                    b_B->data[(b_i + b_B->size[0] * k) - 1] -=
                        b_A->data[(b_i + b_A->size[0] * j) - 1] * wj;
                  }
                }
              }
            }
          }
        } else {
          m = b_B->size[0];
          info = b_B->size[1];
          i = b_B->size[0] * b_B->size[1];
          b_B->size[0] = m;
          b_B->size[1] = info;
          emxEnsureCapacity_real_T(&d_st, b_B, i, &ty_emlrtRTEI);
          nb = m * info;
          for (i = 0; i < nb; i++) {
            b_B->data[i] = rtNaN;
          }
        }
      }
    }
    c_st.site = &gab_emlrtRSI;
    if ((1 <= b_nb) && (b_nb > 2147483646)) {
      d_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 0; k < b_nb; k++) {
      c_st.site = &hab_emlrtRSI;
      if ((1 <= rankA) && (rankA > 2147483646)) {
        d_st.site = &hb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (b_i = 0; b_i < rankA; b_i++) {
        Y->data[(jpvt->data[b_i] + Y->size[0] * k) - 1] =
            b_B->data[b_i + b_B->size[0] * k];
      }
      for (j = rankA; j >= 1; j--) {
        i = jpvt->data[j - 1];
        Y->data[(i + Y->size[0] * k) - 1] /=
            b_A->data[(j + b_A->size[0] * (j - 1)) - 1];
        c_st.site = &iab_emlrtRSI;
        for (b_i = 0; b_i <= j - 2; b_i++) {
          Y->data[(jpvt->data[b_i] + Y->size[0] * k) - 1] -=
              Y->data[(jpvt->data[j - 1] + Y->size[0] * k) - 1] *
              b_A->data[b_i + b_A->size[0] * (j - 1)];
        }
      }
    }
    i = A->size[0] * A->size[1];
    A->size[0] = Y->size[1];
    A->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(sp, A, i, &ckb_emlrtRTEI);
    nb = Y->size[0];
    for (i = 0; i < nb; i++) {
      info = Y->size[1];
      for (a_tmp = 0; a_tmp < info; a_tmp++) {
        A->data[a_tmp + A->size[0] * i] = Y->data[i + Y->size[0] * a_tmp];
      }
    }
  }
  emxFree_ptrdiff_t(&r);
  emxFree_ptrdiff_t(&ipiv_t);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
  emxFree_real_T(&b_B);
  emxFree_real_T(&Y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (mrdivide_helper.c) */
