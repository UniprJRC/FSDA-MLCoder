/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * betainc.h
 *
 * Code generation for function 'betainc'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
creal_T b_betainc(const emlrtStack *sp, real_T x, real_T b);

creal_T betainc(const emlrtStack *sp, real_T x, real_T a);

/* End of code generation (betainc.h) */
