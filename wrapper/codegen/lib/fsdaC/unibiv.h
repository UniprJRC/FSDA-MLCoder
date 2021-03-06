/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * unibiv.h
 *
 * Code generation for function 'unibiv'
 *
 */

#ifndef UNIBIV_H
#define UNIBIV_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_unibiv(const emxArray_real_T *Y, emxArray_real_T *fre);

void tiedrankFS(const emxArray_real_T *x, emxArray_real_T *r);

void unibiv(const emxArray_real_T *Y, double varargin_2, emxArray_real_T *fre);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (unibiv.h) */
