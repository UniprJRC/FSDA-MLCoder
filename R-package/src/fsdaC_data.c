/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fsdaC_data.c
 *
 * Code generation for function 'fsdaC_data'
 *
 */

/* Include files */
#include "fsdaC_data.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
unsigned int state[625];

double freq;

bool freq_not_empty;

const int iv[5] = {1, 99, 999, 9999, 99999};

const double dv2[31] = {0.0,
                        0.15342640972002736,
                        0.081061466795327261,
                        0.054814121051917651,
                        0.0413406959554093,
                        0.033162873519936291,
                        0.027677925684998338,
                        0.023746163656297496,
                        0.020790672103765093,
                        0.018488450532673187,
                        0.016644691189821193,
                        0.015134973221917378,
                        0.013876128823070748,
                        0.012810465242920227,
                        0.01189670994589177,
                        0.011104559758206917,
                        0.010411265261972096,
                        0.0097994161261588039,
                        0.0092554621827127329,
                        0.0087687001341393862,
                        0.00833056343336287,
                        0.00793411456431402,
                        0.0075736754879518406,
                        0.007244554301320383,
                        0.00694284010720953,
                        0.0066652470327076821,
                        0.0064089941880042071,
                        0.0061717122630394576,
                        0.0059513701127588475,
                        0.0057462165130101155,
                        0.0055547335519628011};

const bool bv[128] = {
    false, false, false, false, false, false, false, false, false, true,  true,
    true,  true,  true,  false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true,  true,  true,  true,  true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false};

const char cv[128] = {
    '\x00',     '\x01', '\x02', '\x03', '\x04', '\x05', '\x06', '\x07', '\x08',
    '	', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e', '\x0f', '\x10', '\x11',
    '\x12',     '\x13', '\x14', '\x15', '\x16', '\x17', '\x18', '\x19', '\x1a',
    '\x1b',     '\x1c', '\x1d', '\x1e', '\x1f', ' ',    '!',    '\"',   '#',
    '$',        '%',    '&',    '\'',   '(',    ')',    '*',    '+',    ',',
    '-',        '.',    '/',    '0',    '1',    '2',    '3',    '4',    '5',
    '6',        '7',    '8',    '9',    ':',    ';',    '<',    '=',    '>',
    '?',        '@',    'a',    'b',    'c',    'd',    'e',    'f',    'g',
    'h',        'i',    'j',    'k',    'l',    'm',    'n',    'o',    'p',
    'q',        'r',    's',    't',    'u',    'v',    'w',    'x',    'y',
    'z',        '[',    '\\',   ']',    '^',    '_',    '`',    'a',    'b',
    'c',        'd',    'e',    'f',    'g',    'h',    'i',    'j',    'k',
    'l',        'm',    'n',    'o',    'p',    'q',    'r',    's',    't',
    'u',        'v',    'w',    'x',    'y',    'z',    '{',    '|',    '}',
    '~',        '\x7f'};

bool isInitialized_fsdaC = false;

/* End of code generation (fsdaC_data.c) */
