/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: driver.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef DRIVER_H
#define DRIVER_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
double computeFirstOrderOpt(const emxArray_real_T *gradf,
                            bool b_hasFiniteBounds,
                            const double *projSteepestDescentInfNorm);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for driver.h
 *
 * [EOF]
 */
