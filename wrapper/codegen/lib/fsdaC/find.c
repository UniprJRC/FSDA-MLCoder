/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * find.c
 *
 * Code generation for function 'find'
 *
 */

/* Include files */
#include "find.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_eml_find(const emxArray_boolean_T *x, emxArray_int32_T *i)
{
  int idx;
  int ii;
  int nx;
  bool exitg1;
  nx = x->size[0];
  idx = 0;
  ii = i->size[0];
  i->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(i, ii);
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx - 1)) {
    if (x->data[ii]) {
      idx++;
      i->data[idx - 1] = ii + 1;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (x->size[0] == 1) {
    if (idx == 0) {
      i->size[0] = 0;
    }
  } else {
    ii = i->size[0];
    if (1 > idx) {
      i->size[0] = 0;
    } else {
      i->size[0] = idx;
    }
    emxEnsureCapacity_int32_T(i, ii);
  }
}

void c_eml_find(const emxArray_uint8_T *x, emxArray_int32_T *i,
                emxArray_int32_T *j)
{
  int idx;
  int ii;
  int jj;
  int nx;
  bool exitg1;
  bool guard1 = false;
  nx = x->size[0] * x->size[1];
  if (nx == 0) {
    i->size[0] = 0;
    j->size[0] = 0;
  } else {
    idx = 0;
    ii = i->size[0];
    i->size[0] = nx;
    emxEnsureCapacity_int32_T(i, ii);
    ii = j->size[0];
    j->size[0] = nx;
    emxEnsureCapacity_int32_T(j, ii);
    ii = 1;
    jj = 1;
    exitg1 = false;
    while ((!exitg1) && (jj <= x->size[1])) {
      guard1 = false;
      if (x->data[(ii + x->size[0] * (jj - 1)) - 1] != 0) {
        idx++;
        i->data[idx - 1] = ii;
        j->data[idx - 1] = jj;
        if (idx >= nx) {
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      if (guard1) {
        ii++;
        if (ii > x->size[0]) {
          ii = 1;
          jj++;
        }
      }
    }
    if (nx == 1) {
      if (idx == 0) {
        i->size[0] = 0;
        j->size[0] = 0;
      }
    } else {
      ii = i->size[0];
      if (1 > idx) {
        i->size[0] = 0;
      } else {
        i->size[0] = idx;
      }
      emxEnsureCapacity_int32_T(i, ii);
      ii = j->size[0];
      if (1 > idx) {
        j->size[0] = 0;
      } else {
        j->size[0] = idx;
      }
      emxEnsureCapacity_int32_T(j, ii);
    }
  }
}

void d_eml_find(const emxArray_boolean_T *x, emxArray_int32_T *i)
{
  int idx;
  int ii;
  int k;
  bool exitg1;
  k = (1 <= x->size[0]);
  idx = 0;
  ii = i->size[0];
  i->size[0] = k;
  emxEnsureCapacity_int32_T(i, ii);
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= x->size[0] - 1)) {
    if (x->data[ii]) {
      idx++;
      i->data[idx - 1] = ii + 1;
      if (idx >= k) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (k == 1) {
    if (idx == 0) {
      i->size[0] = 0;
    }
  } else {
    ii = i->size[0];
    i->size[0] = (1 <= idx);
    emxEnsureCapacity_int32_T(i, ii);
  }
}

void e_eml_find(const emxArray_boolean_T *x, int i_data[], int i_size[2])
{
  int idx;
  int ii;
  int k;
  bool exitg1;
  k = (1 <= x->size[1]);
  ii = x->size[1];
  idx = 0;
  i_size[0] = 1;
  i_size[1] = k;
  exitg1 = false;
  while ((!exitg1) && (ii > 0)) {
    if (x->data[ii - 1]) {
      idx = 1;
      i_data[0] = ii;
      exitg1 = true;
    } else {
      ii--;
    }
  }
  if (k == 1) {
    if (idx == 0) {
      i_size[0] = 1;
      i_size[1] = 0;
    }
  } else {
    i_size[1] = (1 <= idx);
  }
}

void eml_find(const emxArray_boolean_T *x, emxArray_int32_T *i)
{
  int idx;
  int ii;
  int nx;
  bool exitg1;
  nx = x->size[1];
  idx = 0;
  ii = i->size[0] * i->size[1];
  i->size[0] = 1;
  i->size[1] = x->size[1];
  emxEnsureCapacity_int32_T(i, ii);
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx - 1)) {
    if (x->data[ii]) {
      idx++;
      i->data[idx - 1] = ii + 1;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (x->size[1] == 1) {
    if (idx == 0) {
      i->size[0] = 1;
      i->size[1] = 0;
    }
  } else {
    ii = i->size[0] * i->size[1];
    if (1 > idx) {
      i->size[1] = 0;
    } else {
      i->size[1] = idx;
    }
    emxEnsureCapacity_int32_T(i, ii);
  }
}

/* End of code generation (find.c) */
