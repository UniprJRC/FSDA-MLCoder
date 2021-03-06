/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pdist.c
 *
 * Code generation for function 'pdist'
 *
 */

/* Include files */
#include "pdist.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "rt_nonfinite.h"
#include "scanfornan.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo tu_emlrtRSI = {
    248,     /* lineNo */
    "pdist", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\pdist.m" /* pathName
                                                                       */
};

static emlrtRSInfo uu_emlrtRSI = {
    249,     /* lineNo */
    "pdist", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\pdist.m" /* pathName
                                                                       */
};

static emlrtRSInfo wu_emlrtRSI = {
    283,     /* lineNo */
    "pdist", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\pdist.m" /* pathName
                                                                       */
};

static emlrtBCInfo mn_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    290,     /* lineNo */
    75,      /* colNo */
    "",      /* aName */
    "pdist", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\pdist.m", /* pName
                                                                        */
    0 /* checkKind */
};

static emlrtBCInfo nn_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    290,     /* lineNo */
    66,      /* colNo */
    "",      /* aName */
    "pdist", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\pdist.m", /* pName
                                                                        */
    0 /* checkKind */
};

static emlrtDCInfo oi_emlrtDCI = {
    12,    /* lineNo */
    13,    /* colNo */
    "nan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\nan.m", /* pName */
    4                  /* checkKind */
};

static emlrtBCInfo on_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    285,     /* lineNo */
    40,      /* colNo */
    "",      /* aName */
    "pdist", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\pdist.m", /* pName
                                                                        */
    0 /* checkKind */
};

static emlrtDCInfo pi_emlrtDCI = {
    285,     /* lineNo */
    40,      /* colNo */
    "pdist", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\pdist.m", /* pName
                                                                        */
    1 /* checkKind */
};

static emlrtBCInfo pn_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    285,     /* lineNo */
    55,      /* colNo */
    "",      /* aName */
    "pdist", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\pdist.m", /* pName
                                                                        */
    0 /* checkKind */
};

static emlrtDCInfo qi_emlrtDCI = {
    285,     /* lineNo */
    55,      /* colNo */
    "pdist", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\pdist.m", /* pName
                                                                        */
    1 /* checkKind */
};

static emlrtBCInfo qn_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    302,     /* lineNo */
    33,      /* colNo */
    "",      /* aName */
    "pdist", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\pdist.m", /* pName
                                                                        */
    0 /* checkKind */
};

static emlrtRTEInfo bu_emlrtRTEI = {
    157,     /* lineNo */
    1,       /* colNo */
    "pdist", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\pdist.m" /* pName
                                                                       */
};

static emlrtRTEInfo cu_emlrtRTEI = {
    157,     /* lineNo */
    5,       /* colNo */
    "pdist", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\pdist.m" /* pName
                                                                       */
};

static emlrtRTEInfo du_emlrtRTEI = {
    249,     /* lineNo */
    5,       /* colNo */
    "pdist", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\pdist.m" /* pName
                                                                       */
};

static emlrtRTEInfo eu_emlrtRTEI = {
    248,     /* lineNo */
    5,       /* colNo */
    "pdist", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\pdist.m" /* pName
                                                                       */
};

/* Function Definitions */
void pdist(const emlrtStack *sp, const emxArray_real_T *Xin, emxArray_real_T *Y)
{
  jmp_buf emlrtJBEnviron;
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_boolean_T *logIndX;
  emxArray_real_T *X;
  emxArray_real_T *b_Xin;
  real_T ii;
  real_T qq;
  int32_T i;
  int32_T kk;
  int32_T loop_ub;
  int32_T nd;
  int32_T nx;
  boolean_T emlrtHadParallelError = false;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  nx = Xin->size[0];
  nd = Xin->size[0] * (Xin->size[0] - 1) / 2;
  if (Xin->size[0] == 0) {
    Y->size[0] = 1;
    Y->size[1] = 0;
  } else {
    emxInit_real_T(sp, &X, 2, &bu_emlrtRTEI, true);
    i = X->size[0] * X->size[1];
    X->size[0] = 1;
    X->size[1] = Xin->size[0];
    emxEnsureCapacity_real_T(sp, X, i, &bu_emlrtRTEI);
    loop_ub = Xin->size[0];
    for (i = 0; i < loop_ub; i++) {
      X->data[i] = Xin->data[i];
    }
    emxInit_real_T(sp, &b_Xin, 2, &cu_emlrtRTEI, true);
    i = b_Xin->size[0] * b_Xin->size[1];
    b_Xin->size[0] = 1;
    b_Xin->size[1] = Xin->size[0];
    emxEnsureCapacity_real_T(sp, b_Xin, i, &cu_emlrtRTEI);
    loop_ub = Xin->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_Xin->data[i] = Xin->data[i];
    }
    emxInit_boolean_T(sp, &logIndX, 2, &eu_emlrtRTEI, true);
    st.site = &tu_emlrtRSI;
    scanfornan(&st, b_Xin, Xin->size[0], logIndX);
    st.site = &uu_emlrtRSI;
    i = Y->size[0] * Y->size[1];
    Y->size[0] = 1;
    emxEnsureCapacity_real_T(&st, Y, i, &du_emlrtRTEI);
    emxFree_real_T(&b_Xin);
    if (nd < 0) {
      emlrtNonNegativeCheckR2012b(nd, &oi_emlrtDCI, &st);
    }
    i = Y->size[0] * Y->size[1];
    Y->size[1] = nd;
    emxEnsureCapacity_real_T(&st, Y, i, &du_emlrtRTEI);
    for (i = 0; i < nd; i++) {
      Y->data[i] = rtNaN;
    }
    nd--;
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
#pragma omp parallel num_threads(emlrtAllocRegionTLSs(                         \
    sp->tls, omp_in_parallel(), omp_get_max_threads(),                         \
    omp_get_num_procs())) private(qq, ii, emlrtJBEnviron, c_st, kk)            \
    firstprivate(b_st, emlrtHadParallelError)
    {
      if (setjmp(emlrtJBEnviron) == 0) {

        b_st.prev = sp;
        b_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
        b_st.site = NULL;
        emlrtSetJmpBuf(&b_st, &emlrtJBEnviron);
        c_st.prev = &b_st;
        c_st.tls = b_st.tls;
      } else {
        emlrtHadParallelError = true;
      }
#pragma omp for nowait
      for (kk = 0; kk <= nd; kk++) {
        if (emlrtHadParallelError)
          continue;
        if (setjmp(emlrtJBEnviron) == 0) {

          c_st.site = &wu_emlrtRSI;
          qq = (-8.0 * (((real_T)kk + 1.0) - 1.0) +
                4.0 * (real_T)nx * ((real_T)nx - 1.0)) -
               7.0;
          if (qq < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &c_st, &wb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          qq = muDoubleScalarSqrt(qq);
          ii = (((real_T)nx - 2.0) - muDoubleScalarFloor(qq / 2.0 - 0.5)) + 1.0;
          qq = (real_T)nx - ii;
          qq = ((((real_T)kk + 1.0) + ii) -
                (real_T)nx * ((real_T)nx - 1.0) / 2.0) +
               qq * (qq + 1.0) / 2.0;
          if (ii != (int32_T)ii) {
            emlrtIntegerCheckR2012b(ii, &pi_emlrtDCI, &b_st);
          }
          if (((int32_T)ii < 1) || ((int32_T)ii > logIndX->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, logIndX->size[1],
                                          &on_emlrtBCI, &b_st);
          }
          if (logIndX->data[(int32_T)ii - 1]) {
            if (qq != (int32_T)muDoubleScalarFloor(qq)) {
              emlrtIntegerCheckR2012b(qq, &qi_emlrtDCI, &b_st);
            }
            if (((int32_T)qq < 1) || ((int32_T)qq > logIndX->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)qq, 1, logIndX->size[1],
                                            &pn_emlrtBCI, &b_st);
            }
            if (logIndX->data[(int32_T)qq - 1]) {
              if (((int32_T)ii < 1) || ((int32_T)ii > X->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, X->size[1],
                                              &nn_emlrtBCI, &b_st);
              }
              if (((int32_T)qq < 1) || ((int32_T)qq > X->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)qq, 1, X->size[1],
                                              &mn_emlrtBCI, &b_st);
              }
              qq = muDoubleScalarAbs(X->data[(int32_T)ii - 1] -
                                     X->data[(int32_T)qq - 1]);
              if (kk + 1 > Y->size[1]) {
                emlrtDynamicBoundsCheckR2012b(kk + 1, 1, Y->size[1],
                                              &qn_emlrtBCI, &b_st);
              }
              Y->data[kk] = qq;
            }
          }
        } else {
          emlrtHadParallelError = true;
        }
      }
    }
    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emxFree_boolean_T(&logIndX);
    emxFree_real_T(&X);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (pdist.c) */
