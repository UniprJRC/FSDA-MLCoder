/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_betainc.c
 *
 * Code generation for function 'eml_betainc'
 *
 */

/* Include files */
#include "eml_betainc.h"
#include "FSRfan_wrapper_data.h"
#include "eml_gammainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo gp_emlrtRSI = {
    128,           /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo hp_emlrtRSI = {
    126,           /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo ip_emlrtRSI = {
    125,           /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo jp_emlrtRSI = {
    118,           /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo kp_emlrtRSI = {
    115,           /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo lp_emlrtRSI = {
    114,           /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo mp_emlrtRSI = {
    102,           /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo np_emlrtRSI = {
    97,            /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo op_emlrtRSI = {
    92,            /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo pp_emlrtRSI = {
    89,            /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

/* Function Declarations */
static real_T betainc_cf(real_T x, real_T a, real_T b);

/* Function Definitions */
static real_T betainc_cf(real_T x, real_T a, real_T b)
{
  real_T C;
  real_T Dinv;
  real_T aplusb;
  real_T d;
  real_T d_tmp;
  real_T y;
  real_T yold;
  int32_T exitg1;
  int32_T m;
  int32_T twom;
  aplusb = a + b;
  C = 1.0;
  Dinv = 1.0 - aplusb * x / (a + 1.0);
  y = 1.0 / Dinv;
  m = 0;
  do {
    exitg1 = 0;
    if (m < 1000) {
      yold = y;
      twom = (m + 1) << 1;
      d_tmp = a + (real_T)twom;
      d = ((real_T)m + 1.0) * (b - ((real_T)m + 1.0)) * x /
          (((a - 1.0) + (real_T)twom) * d_tmp);
      C = d / C + 1.0;
      Dinv = d / Dinv + 1.0;
      y *= C / Dinv;
      d = -(a + ((real_T)m + 1.0)) * (aplusb + ((real_T)m + 1.0)) * x /
          (d_tmp * ((a + 1.0) + (real_T)twom));
      C = d / C + 1.0;
      Dinv = d / Dinv + 1.0;
      y *= C / Dinv;
      if (muDoubleScalarAbs(y - yold) < 2.2204460492503131E-15) {
        exitg1 = 1;
      } else {
        m++;
      }
    } else {
      y = rtNaN;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  return y;
}

real_T eml_betainc(const emlrtStack *sp, real_T x, real_T a, real_T b,
                   real_T lbeta, boolean_T upper)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T b_x;
  real_T log1mx;
  real_T logx;
  real_T rval;
  real_T w2;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((0.0 < x) && (x < 1.0)) {
    if (muDoubleScalarIsInf(a)) {
      rval = upper;
    } else {
      guard1 = false;
      if (a + 0.5 < 1.0E+7) {
        st.site = &pp_emlrtRSI;
        logx = muDoubleScalarLog(x);
        if (1.0 - x != 1.0) {
          st.site = &op_emlrtRSI;
          log1mx = muDoubleScalarLog(1.0 - x) * (-x / ((1.0 - x) - 1.0));
        } else {
          log1mx = -x;
        }
        if (x < (a + 1.0) / ((a + 0.5) + 2.0)) {
          st.site = &np_emlrtRSI;
          if (a < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &jb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          rval =
              muDoubleScalarExp(
                  ((a * logx + 0.5 * log1mx) - muDoubleScalarLog(a)) - lbeta) *
              betainc_cf(x, a, 0.5);
          if (upper) {
            rval = 1.0 - rval;
          }
        } else {
          st.site = &mp_emlrtRSI;
          if (b < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &jb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          rval =
              muDoubleScalarExp(
                  ((a * logx + 0.5 * log1mx) - -0.69314718055994529) - lbeta) *
              betainc_cf(1.0 - x, 0.5, a);
          if (!upper) {
            rval = 1.0 - rval;
          }
        }
        if (!(rval == rval)) {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      if (guard1) {
        st.site = &lp_emlrtRSI;
        log1mx = muDoubleScalarPower(0.5 * x, 0.33333333333333331);
        st.site = &kp_emlrtRSI;
        logx = a * (1.0 - x);
        b_st.site = &qf_emlrtRSI;
        w2 = muDoubleScalarPower(logx, 0.33333333333333331);
        if (logx < 0.0) {
          emlrtErrorWithMessageIdR2018a(&b_st, &eb_emlrtRTEI,
                                        "Coder:toolbox:power_domainError",
                                        "Coder:toolbox:power_domainError", 0);
        }
        if (((a + 0.5) - 1.0) * (1.0 - x) > 0.8) {
          st.site = &jp_emlrtRSI;
          b_x = log1mx * log1mx / 0.5 + w2 * w2 / a;
          if (b_x < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &kb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          b_x = muDoubleScalarSqrt(b_x);
          logx = 3.0 *
                 (0.77777777777777779 * log1mx - (1.0 - 1.0 / (9.0 * a)) * w2) /
                 b_x;
          if (upper) {
            b_x = 0.70710678118654746 * logx;
            logx =
                3.97886080735226 / (muDoubleScalarAbs(b_x) + 3.97886080735226);
            rval = 0.5 *
                   ((((((((((((((((((((((0.0012710976495261409 * (logx - 0.5) +
                                         0.00011931402283834095) *
                                            (logx - 0.5) +
                                        -0.0039638509736051354) *
                                           (logx - 0.5) +
                                       -0.00087077963531729586) *
                                          (logx - 0.5) +
                                      0.0077367252831352668) *
                                         (logx - 0.5) +
                                     0.0038333512626488732) *
                                        (logx - 0.5) +
                                    -0.012722381378212275) *
                                       (logx - 0.5) +
                                   -0.013382364453346007) *
                                      (logx - 0.5) +
                                  0.016131532973325226) *
                                     (logx - 0.5) +
                                 0.039097684558848406) *
                                    (logx - 0.5) +
                                0.0024936720005350331) *
                                   (logx - 0.5) +
                               -0.0838864557023002) *
                                  (logx - 0.5) +
                              -0.11946395996432542) *
                                 (logx - 0.5) +
                             0.016620792496936737) *
                                (logx - 0.5) +
                            0.35752427444953105) *
                               (logx - 0.5) +
                           0.80527640875291062) *
                              (logx - 0.5) +
                          1.1890298290927332) *
                             (logx - 0.5) +
                         1.3704021768233816) *
                            (logx - 0.5) +
                        1.313146538310231) *
                           (logx - 0.5) +
                       1.0792551515585667) *
                          (logx - 0.5) +
                      0.77436819911953858) *
                         (logx - 0.5) +
                     0.49016508058531844) *
                        (logx - 0.5) +
                    0.27537474159737679) *
                   logx * muDoubleScalarExp(-b_x * b_x);
            if (b_x < 0.0) {
              rval = 1.0 - rval;
            }
          } else {
            b_x = 0.70710678118654746 * -logx;
            logx =
                3.97886080735226 / (muDoubleScalarAbs(b_x) + 3.97886080735226);
            rval = 0.5 *
                   ((((((((((((((((((((((0.0012710976495261409 * (logx - 0.5) +
                                         0.00011931402283834095) *
                                            (logx - 0.5) +
                                        -0.0039638509736051354) *
                                           (logx - 0.5) +
                                       -0.00087077963531729586) *
                                          (logx - 0.5) +
                                      0.0077367252831352668) *
                                         (logx - 0.5) +
                                     0.0038333512626488732) *
                                        (logx - 0.5) +
                                    -0.012722381378212275) *
                                       (logx - 0.5) +
                                   -0.013382364453346007) *
                                      (logx - 0.5) +
                                  0.016131532973325226) *
                                     (logx - 0.5) +
                                 0.039097684558848406) *
                                    (logx - 0.5) +
                                0.0024936720005350331) *
                                   (logx - 0.5) +
                               -0.0838864557023002) *
                                  (logx - 0.5) +
                              -0.11946395996432542) *
                                 (logx - 0.5) +
                             0.016620792496936737) *
                                (logx - 0.5) +
                            0.35752427444953105) *
                               (logx - 0.5) +
                           0.80527640875291062) *
                              (logx - 0.5) +
                          1.1890298290927332) *
                             (logx - 0.5) +
                         1.3704021768233816) *
                            (logx - 0.5) +
                        1.313146538310231) *
                           (logx - 0.5) +
                       1.0792551515585667) *
                          (logx - 0.5) +
                      0.77436819911953858) *
                         (logx - 0.5) +
                     0.49016508058531844) *
                        (logx - 0.5) +
                    0.27537474159737679) *
                   logx * muDoubleScalarExp(-b_x * b_x);
            if (b_x < 0.0) {
              rval = 1.0 - rval;
            }
          }
        } else {
          st.site = &ip_emlrtRSI;
          if (b < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &jb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          logx = 0.5;
          st.site = &hp_emlrtRSI;
          gammaln(&st, &logx);
          st.site = &gp_emlrtRSI;
          rval = eml_gammainc(
              &st, 0.5 * (((a + 0.5) - 1.0) * (3.0 - x) - -0.5) * (1.0 - x),
              logx, !upper);
        }
      }
    }
  } else if (x == 0.0) {
    rval = upper;
  } else if (x == 1.0) {
    rval = 1.0 - (real_T)upper;
  } else {
    rval = rtNaN;
  }
  return rval;
}

/* End of code generation (eml_betainc.c) */
