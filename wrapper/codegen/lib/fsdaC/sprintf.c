/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: sprintf.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "sprintf.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : double varargin_1
 * Return Type  : void
 */
void b_sprintf(double varargin_1)
{
  emxArray_char_T *charStr;
  int i;
  int nbytes;
  emxInit_char_T(&charStr, 2);
  nbytes = (int)snprintf(NULL, 0,
                         "Attention : init1 should be >= length of supplied "
                         "subset. It is set equal to %.0f",
                         varargin_1) +
           1;
  i = charStr->size[0] * charStr->size[1];
  charStr->size[0] = 1;
  charStr->size[1] = nbytes;
  emxEnsureCapacity_char_T(charStr, i);
  snprintf(&charStr->data[0], (size_t)nbytes,
           "Attention : init1 should be >= length of supplied subset. It is "
           "set equal to %.0f",
           varargin_1);
  emxFree_char_T(&charStr);
}

/*
 * Arguments    : double varargin_1
 * Return Type  : void
 */
void c_sprintf(double varargin_1)
{
  emxArray_char_T *charStr;
  int i;
  int nbytes;
  emxInit_char_T(&charStr, 2);
  nbytes =
      (int)snprintf(NULL, 0, "Value of S2 at step %.0f is zero, mdr is NaN",
                    varargin_1) +
      1;
  i = charStr->size[0] * charStr->size[1];
  charStr->size[0] = 1;
  charStr->size[1] = nbytes;
  emxEnsureCapacity_char_T(charStr, i);
  snprintf(&charStr->data[0], (size_t)nbytes,
           "Value of S2 at step %.0f is zero, mdr is NaN", varargin_1);
  emxFree_char_T(&charStr);
}

/*
 * Arguments    : double varargin_1
 *                emxArray_char_T *str
 * Return Type  : void
 */
void d_sprintf(double varargin_1, emxArray_char_T *str)
{
  int i;
  int nbytes;
  nbytes = snprintf(NULL, 0, "%.0f", varargin_1);
  i = str->size[0] * str->size[1];
  str->size[0] = 1;
  str->size[1] = nbytes + 1;
  emxEnsureCapacity_char_T(str, i);
  snprintf(&str->data[0], (size_t)(nbytes + 1), "%.0f", varargin_1);
  i = str->size[0] * str->size[1];
  if (1 > nbytes) {
    str->size[1] = 0;
  } else {
    str->size[1] = nbytes;
  }
  emxEnsureCapacity_char_T(str, i);
}

/*
 * File trailer for sprintf.c
 *
 * [EOF]
 */
