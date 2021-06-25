/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: driver.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "driver.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const emxArray_real_T *gradf
 *                bool b_hasFiniteBounds
 *                const double *projSteepestDescentInfNorm
 * Return Type  : double
 */
double computeFirstOrderOpt(const emxArray_real_T *gradf,
                            bool b_hasFiniteBounds,
                            const double *projSteepestDescentInfNorm)
{
  double absx;
  double b;
  double firstOrderOpt;
  int i;
  int k;
  if (b_hasFiniteBounds) {
    if (gradf->size[0] == 0) {
      b = 0.0;
    } else {
      b = 0.0;
      i = gradf->size[0];
      for (k = 0; k < i; k++) {
        absx = fabs(gradf->data[k]);
        if (rtIsNaN(absx) || (absx > b)) {
          b = absx;
        }
      }
    }
    if ((fabs(*projSteepestDescentInfNorm - b) <
         2.2204460492503131E-16 * fmax(*projSteepestDescentInfNorm, b)) ||
        (b == 0.0)) {
      firstOrderOpt = *projSteepestDescentInfNorm;
    } else {
      firstOrderOpt =
          *projSteepestDescentInfNorm * *projSteepestDescentInfNorm / b;
    }
  } else if (gradf->size[0] == 0) {
    firstOrderOpt = 0.0;
  } else {
    firstOrderOpt = 0.0;
    i = gradf->size[0];
    for (k = 0; k < i; k++) {
      absx = fabs(gradf->data[k]);
      if (rtIsNaN(absx) || (absx > firstOrderOpt)) {
        firstOrderOpt = absx;
      }
    }
  }
  return firstOrderOpt;
}

/*
 * File trailer for driver.c
 *
 * [EOF]
 */
