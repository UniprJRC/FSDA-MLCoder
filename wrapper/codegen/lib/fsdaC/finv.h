/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * finv.h
 *
 * Code generation for function 'finv'
 *
 */

#ifndef FINV_H
#define FINV_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_finv(const emxArray_real_T *p, double v1, const emxArray_real_T *v2,
            emxArray_real_T *x);

void c_finv(const emxArray_real_T *p, const emxArray_real_T *v1,
            const emxArray_real_T *v2, emxArray_real_T *x);

void d_finv(const emxArray_real_T *p, const emxArray_real_T *v1,
            const emxArray_real_T *v2, emxArray_real_T *x);

double finv(double p, double v2);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (finv.h) */
