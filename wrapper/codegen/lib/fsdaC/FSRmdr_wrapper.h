/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: FSRmdr_wrapper.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef FSRMDR_WRAPPER_H
#define FSRMDR_WRAPPER_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void FSRmdr_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                           const emxArray_real_T *bsb, bool bsbmfullrank,
                           const emxArray_real_T *bsbsteps,
                           const emxArray_real_T *constr, double init,
                           bool intercept, bool internationaltrade, bool msg,
                           bool nocheck, const double threshlevoutX_data[],
                           const int threshlevoutX_size[2],
                           emxArray_real_T *mdr, emxArray_real_T *Un,
                           emxArray_real_T *BB, emxArray_real_T *Bols,
                           emxArray_real_T *S2);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for FSRmdr_wrapper.h
 *
 * [EOF]
 */
