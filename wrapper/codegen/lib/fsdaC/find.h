/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * find.h
 *
 * Code generation for function 'find'
 *
 */

#ifndef FIND_H
#define FIND_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_eml_find(const emxArray_boolean_T *x, emxArray_int32_T *i);

void c_eml_find(const emxArray_uint8_T *x, emxArray_int32_T *i,
                emxArray_int32_T *j);

void d_eml_find(const emxArray_boolean_T *x, emxArray_int32_T *i);

void e_eml_find(const emxArray_boolean_T *x, int i_data[], int i_size[2]);

void eml_find(const emxArray_boolean_T *x, emxArray_int32_T *i);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (find.h) */
