/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * gammaincinv.c
 *
 * Code generation for function 'gammaincinv'
 *
 */

/* Include files */
#include "gammaincinv.h"
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_mexutil.h"
#include "eml_gammainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo km_emlrtRSI =
    {
        29,            /* lineNo */
        "gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo lm_emlrtRSI =
    {
        30,            /* lineNo */
        "gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo mm_emlrtRSI =
    {
        31,            /* lineNo */
        "gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo nm_emlrtRSI =
    {
        34,            /* lineNo */
        "gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo um_emlrtRSI =
    {
        322,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo vm_emlrtRSI =
    {
        323,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo wm_emlrtRSI =
    {
        308,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo xm_emlrtRSI =
    {
        291,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo ym_emlrtRSI =
    {
        284,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo an_emlrtRSI =
    {
        266,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo bn_emlrtRSI =
    {
        262,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo cn_emlrtRSI =
    {
        237,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo dn_emlrtRSI =
    {
        233,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo en_emlrtRSI =
    {
        230,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo fn_emlrtRSI =
    {
        208,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo gn_emlrtRSI =
    {
        207,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo hn_emlrtRSI =
    {
        201,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo in_emlrtRSI =
    {
        196,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo jn_emlrtRSI =
    {
        405,      /* lineNo */
        "PHIinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo kn_emlrtRSI =
    {
        403,      /* lineNo */
        "PHIinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

/* Function Definitions */
creal_T gammaincinv(const emlrtStack *sp, real_T x)
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const char_T rfmt[7] = {'%', '2', '3', '.', '1', '5', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  creal_T b;
  real_T ftol1;
  real_T lga;
  real_T lgap1;
  real_T log1mpLower;
  real_T oldz;
  real_T p;
  real_T pLower;
  real_T r;
  real_T z;
  real_T zhi;
  int32_T i;
  int32_T sgn;
  char_T b_str[23];
  char_T str[23];
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T upper;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &km_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  lga = 0.5;
  st.site = &lm_emlrtRSI;
  gammaln(&st, &lga);
  lgap1 = 1.5;
  st.site = &mm_emlrtRSI;
  gammaln(&st, &lgap1);
  st.site = &nm_emlrtRSI;
  p = x;
  upper = false;
  if (lga == rtInf) {
    z = 0.5;
  } else {
    if (x > 0.5) {
      p = 1.0 - x;
      upper = true;
      pLower = 1.0 - (1.0 - x);
      b_st.site = &in_emlrtRSI;
      if (1.0 - x < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &jb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
      }
      log1mpLower = muDoubleScalarLog(1.0 - x);
    } else {
      pLower = x;
      b_st.site = &hn_emlrtRSI;
      log1mpLower = muDoubleScalarLog(1.0 - x) * (-x / ((1.0 - x) - 1.0));
    }
    b_st.site = &gn_emlrtRSI;
    if (pLower < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &jb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
    }
    r = muDoubleScalarLog(pLower);
    if (1.0 < -1.24 * r) {
      b_st.site = &fn_emlrtRSI;
      c_st.site = &qf_emlrtRSI;
      r = muDoubleScalarPower(
          pLower * muDoubleScalarExp(lgap1 + 0.34657359027997248), 2.0);
    } else {
      b_st.site = &en_emlrtRSI;
      if (muDoubleScalarAbs(pLower - 0.5) <= 0.425) {
        r = 0.180625 - (pLower - 0.5) * (pLower - 0.5);
        z = (pLower - 0.5) *
            (((((((2509.0809287301227 * r + 33430.575583588128) * r +
                  67265.7709270087) *
                     r +
                 45921.95393154987) *
                    r +
                13731.693765509461) *
                   r +
               1971.5909503065513) *
                  r +
              133.14166789178438) *
                 r +
             3.3871328727963665) /
            (((((((5226.4952788528544 * r + 28729.085735721943) * r +
                  39307.895800092709) *
                     r +
                 21213.794301586597) *
                    r +
                5394.1960214247511) *
                   r +
               687.18700749205789) *
                  r +
              42.313330701600911) *
                 r +
             1.0);
      } else {
        if (pLower - 0.5 < 0.0) {
          c_st.site = &kn_emlrtRSI;
          c_st.site = &kn_emlrtRSI;
          if (-r < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &c_st, &kb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          r = muDoubleScalarSqrt(-r);
        } else {
          c_st.site = &jn_emlrtRSI;
          if (1.0 - pLower < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &c_st, &jb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          c_st.site = &jn_emlrtRSI;
          r = muDoubleScalarSqrt(-muDoubleScalarLog(1.0 - pLower));
        }
        if (r <= 5.0) {
          r -= 1.6;
          z = (((((((0.00077454501427834139 * r + 0.022723844989269184) * r +
                    0.24178072517745061) *
                       r +
                   1.2704582524523684) *
                      r +
                  3.6478483247632045) *
                     r +
                 5.769497221460691) *
                    r +
                4.6303378461565456) *
                   r +
               1.4234371107496835) /
              (((((((1.0507500716444169E-9 * r + 0.00054759380849953455) * r +
                    0.015198666563616457) *
                       r +
                   0.14810397642748008) *
                      r +
                  0.6897673349851) *
                     r +
                 1.6763848301838038) *
                    r +
                2.053191626637759) *
                   r +
               1.0);
        } else {
          r -= 5.0;
          z = (((((((2.0103343992922881E-7 * r + 2.7115555687434876E-5) * r +
                    0.0012426609473880784) *
                       r +
                   0.026532189526576124) *
                      r +
                  0.29656057182850487) *
                     r +
                 1.7848265399172913) *
                    r +
                5.4637849111641144) *
                   r +
               6.6579046435011033) /
              (((((((2.0442631033899397E-15 * r + 1.4215117583164459E-7) * r +
                    1.8463183175100548E-5) *
                       r +
                   0.00078686913114561329) *
                      r +
                  0.014875361290850615) *
                     r +
                 0.13692988092273581) *
                    r +
                0.599832206555888) *
                   r +
               1.0);
        }
        if (pLower - 0.5 < 0.0) {
          z = -z;
        }
      }
      b_st.site = &dn_emlrtRSI;
      r = (z * 0.47140428508871235 + 1.0) - 0.222222;
      r *= r * r;
      if (r > 8.2) {
        b_st.site = &cn_emlrtRSI;
        r = -2.0 * ((log1mpLower - -0.5 * muDoubleScalarLog(0.5 * r)) + lga);
      }
    }
    z = 0.5 * r;
    log1mpLower = rtInf;
    oldz = rtInf;
    ftol1 = 2.2204460492503131E-14 * p;
    if (upper) {
      sgn = -1;
    } else {
      sgn = 1;
    }
    r = 0.0;
    zhi = 1.7976931348623157E+308;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 1000)) {
      b_st.site = &bn_emlrtRSI;
      pLower = (real_T)sgn * (eml_gammainc(&b_st, z, lgap1, upper) - p);
      if ((pLower * log1mpLower < 0.0) &&
          (muDoubleScalarAbs(log1mpLower) <= muDoubleScalarAbs(pLower))) {
        z = 0.5 * z + 0.5 * oldz;
        b_st.site = &an_emlrtRSI;
        pLower = (real_T)sgn * (eml_gammainc(&b_st, z, lgap1, upper) - p);
      }
      if (pLower > 0.0) {
        zhi = z;
      } else {
        r = z;
      }
      if ((muDoubleScalarAbs(pLower) < ftol1) ||
          (muDoubleScalarAbs(z - oldz) <
           2.2204460492503131E-16 * z + 2.2250738585072014E-308)) {
        exitg1 = true;
      } else {
        oldz = z;
        log1mpLower = pLower;
        guard1 = false;
        if (i < 500) {
          b_st.site = &ym_emlrtRSI;
          if (z < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &jb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          z *=
              1.0 - pLower / (z * muDoubleScalarExp(
                                      (-0.5 * muDoubleScalarLog(z) - z) - lga) +
                              pLower * ((z + 1.0) - 0.5) / 2.0);
          if (z <= r) {
            if (r == 0.0) {
              b_st.site = &xm_emlrtRSI;
              r = eml_gammainc(&b_st, 2.2250738585072014E-308, lgap1, upper) -
                  p;
              if (muDoubleScalarAbs((real_T)upper - p) < muDoubleScalarAbs(r)) {
                z = 0.0;
                exitg1 = true;
              } else {
                r = 2.2250738585072014E-308;
                guard1 = true;
              }
            } else {
              guard1 = true;
            }
          } else {
            if (z >= zhi) {
              z = 0.01 * r + 0.99 * zhi;
            }
            i++;
          }
        } else {
          if (1.0E+8 * r < zhi) {
            oldz = 1.0E+8 * r;
            b_st.site = &wm_emlrtRSI;
            log1mpLower =
                (real_T)sgn * (eml_gammainc(&b_st, oldz, lgap1, upper) - p);
            if (log1mpLower > 0.0) {
              zhi = oldz;
            } else {
              r = oldz;
            }
          }
          z = 0.5 * r + 0.5 * zhi;
          i++;
        }
        if (guard1) {
          z = 0.99 * r + 0.01 * zhi;
          i++;
        }
      }
    }
    if (i >= 1000) {
      b_st.site = &vm_emlrtRSI;
      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&b_st, 7, m, &rfmt[0]);
      emlrtAssign(&y, m);
      b_y = NULL;
      m = emlrtCreateDoubleScalar(x);
      emlrtAssign(&b_y, m);
      c_st.site = &mu_emlrtRSI;
      g_emlrt_marshallIn(&c_st, b_sprintf(&c_st, y, b_y, &s_emlrtMCI),
                         "<output of sprintf>", str);
      b_st.site = &vm_emlrtRSI;
      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&b_st, 7, m, &rfmt[0]);
      emlrtAssign(&c_y, m);
      d_y = NULL;
      m = emlrtCreateDoubleScalar(0.5);
      emlrtAssign(&d_y, m);
      c_st.site = &mu_emlrtRSI;
      g_emlrt_marshallIn(&c_st, b_sprintf(&c_st, c_y, d_y, &s_emlrtMCI),
                         "<output of sprintf>", b_str);
      b_st.site = &um_emlrtRSI;
      c_warning(&b_st, str, b_str);
    }
  }
  b.re = z;
  b.im = 0.0;
  return b;
}

/* End of code generation (gammaincinv.c) */
