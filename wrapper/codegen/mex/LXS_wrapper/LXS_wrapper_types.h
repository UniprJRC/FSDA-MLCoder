/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS_wrapper_types.h
 *
 * Code generation for function 'LXS_wrapper'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include <stddef.h>

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T {
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_boolean_T */
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /* typedef_emxArray_boolean_T */

#ifndef typedef_struct_LXS_T
#define typedef_struct_LXS_T
typedef struct {
  emxArray_boolean_T *weights;
  boolean_T rew;
  emxArray_real_T *beta;
  real_T scale;
  emxArray_real_T *residuals;
  emxArray_real_T *bs;
  emxArray_real_T *outliers;
  real_T conflev;
  real_T h;
  real_T singsub;
  emxArray_real_T *X;
  emxArray_real_T *y;
  char_T class[3];
} struct_LXS_T;
#endif /* typedef_struct_LXS_T */

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T {
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int32_T */
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /* typedef_emxArray_int32_T */

#ifndef typedef_emxArray_creal_T
#define typedef_emxArray_creal_T
typedef struct {
  creal_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_creal_T;
#endif /* typedef_emxArray_creal_T */

#ifndef struct_emxArray_uint32_T
#define struct_emxArray_uint32_T
struct emxArray_uint32_T {
  uint32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_uint32_T */
#ifndef typedef_emxArray_uint32_T
#define typedef_emxArray_uint32_T
typedef struct emxArray_uint32_T emxArray_uint32_T;
#endif /* typedef_emxArray_uint32_T */

#ifndef struct_emxArray_ptrdiff_t
#define struct_emxArray_ptrdiff_t
struct emxArray_ptrdiff_t {
  ptrdiff_t *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_ptrdiff_t */
#ifndef typedef_emxArray_ptrdiff_t
#define typedef_emxArray_ptrdiff_t
typedef struct emxArray_ptrdiff_t emxArray_ptrdiff_t;
#endif /* typedef_emxArray_ptrdiff_t */

#ifndef typedef_LXS_wrapperStackData
#define typedef_LXS_wrapperStackData
typedef struct {
  struct {
    creal_T The1max[7202];
    creal_T new1[7202];
  } f0;
} LXS_wrapperStackData;
#endif /* typedef_LXS_wrapperStackData */

/* End of code generation (LXS_wrapper_types.h) */
