/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: randsample.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "randsample.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rand.h"
#include "randperm.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : double varargin_1
 * Return Type  : double
 */
double b_randsample(double varargin_1)
{
  emxArray_boolean_T *selected;
  emxArray_real_T *r;
  double rp_data[3];
  double b_r;
  double n;
  double y;
  int i;
  int loop_ub_tmp;
  n = floor(varargin_1);
  if (4.0 > n) {
    emxInit_real_T(&r, 2);
    randperm(n, r);
    loop_ub_tmp = r->size[1];
    for (i = 0; i < loop_ub_tmp; i++) {
      rp_data[i] = r->data[i];
    }
    emxFree_real_T(&r);
    y = rp_data[0];
  } else {
    emxInit_boolean_T(&selected, 2);
    i = selected->size[0] * selected->size[1];
    selected->size[0] = 1;
    loop_ub_tmp = (int)n;
    selected->size[1] = (int)n;
    emxEnsureCapacity_boolean_T(selected, i);
    for (i = 0; i < loop_ub_tmp; i++) {
      selected->data[i] = false;
    }
    do {
      b_r = c_rand();
      b_r = floor(b_r * n);
    } while (!!selected->data[(int)(b_r + 1.0) - 1]);
    emxFree_boolean_T(&selected);
    y = b_r + 1.0;
  }
  return y;
}

/*
 * Arguments    : double varargin_1
 *                double varargin_2
 *                emxArray_real_T *y
 * Return Type  : void
 */
void randsample(double varargin_1, double varargin_2, emxArray_real_T *y)
{
  emxArray_boolean_T *selected;
  emxArray_real_T *rp;
  double n;
  double r;
  double x_tmp;
  int j;
  int nsel;
  n = floor(varargin_1);
  x_tmp = floor(varargin_2);
  nsel = (int)floor(varargin_2);
  j = y->size[0];
  y->size[0] = (int)x_tmp;
  emxEnsureCapacity_real_T(y, j);
  if (((int)x_tmp << 2) > n) {
    emxInit_real_T(&rp, 2);
    randperm(n, rp);
    for (j = 0; j < nsel; j++) {
      y->data[j] = rp->data[j];
    }
    emxFree_real_T(&rp);
  } else {
    emxInit_boolean_T(&selected, 2);
    j = selected->size[0] * selected->size[1];
    selected->size[0] = 1;
    nsel = (int)n;
    selected->size[1] = (int)n;
    emxEnsureCapacity_boolean_T(selected, j);
    for (j = 0; j < nsel; j++) {
      selected->data[j] = false;
    }
    nsel = 0;
    while (nsel < (int)x_tmp) {
      r = c_rand();
      r = floor(r * n);
      if (!selected->data[(int)(r + 1.0) - 1]) {
        selected->data[(int)(r + 1.0) - 1] = true;
        nsel++;
        y->data[nsel - 1] = r + 1.0;
      }
    }
    emxFree_boolean_T(&selected);
  }
}

/*
 * File trailer for randsample.c
 *
 * [EOF]
 */
