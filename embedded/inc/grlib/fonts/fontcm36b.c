//*****************************************************************************
//
// fontcm36b.c - Font definition for the 36pt Cm bold font.
//
// Copyright (c) 2011-2015 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.1.71 of the Tiva Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: cm
//     Size: 36 point
//     Bold: yes
//     Italic: no
//     Memory usage: 4408 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 36 point Cm bold font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cm36bData[4207] =
{
      5,  14,   0,  64,  96,  31,   9, 240,  68,  70,  54,  54,
     54,  54,  69,  68,  84,  84,  84,  84,  84,  99,  98, 114,
    114, 114, 240, 148,  70,  54,  54,  54,  68,   0,  10,  80,
     34,  18,   0,   6, 115,  99,  85,  69,  70,  54,  54,  54,
     54,  54,  67,  17,  67,  17, 129, 129, 114, 114, 113, 129,
    114, 114, 113, 129, 114, 114,  98, 114,   0,  48,  96,  29,
      0,  12,  50,  98, 240,  66,  98, 240,  51,  83, 240,  51,
     82, 240,  66,  98, 240,  66,  98, 240,  51,  83, 240,  50,
     98, 240,  66,  98, 240,  66,  98, 240,  51,  83, 159,  11,
     63,  11, 194,  83, 240,  51,  82, 240,  66,  98, 240,  66,
     98, 240,  66,  83, 240,  51,  82, 207,  11,  63,  11, 147,
     83, 240,  50,  98, 240,  66,  98, 240,  66,  98, 240,  51,
     83, 240,  50,  98, 240,  66,  98, 240,  66,  98, 240,  51,
     83, 240,  50,  98, 240,  66,  98,   0,   9,  16,  65,  17,
    240, 130, 242, 214, 154, 100,  18,  35,  83,  34,  50,  67,
     50,  36,  51,  50,  36,  51,  50,  36,  52,  34,  36,  52,
     34,  35,  72, 169, 154, 138, 152, 162,  21,  67,  34,  36,
     52,  34,  51,  53,  18,  51,  52,  34,  51,  52,  34,  51,
     50,  66,  50,  82,  50,  35,  83,  34,  19, 121, 166, 210,
    242,   0,  16,  90,  29,  67, 226, 135, 179, 116,  35, 148,
    115,  53,  85, 131,  77, 132,  66,  37,  19, 132,  66, 115,
    148,  66, 114, 164,  66,  99, 164,  66,  83, 180,  66,  82,
    196,  66,  67, 211,  50,  67, 243,  34,  67, 240,  21,  67,
    240, 163, 240, 179,  85, 243,  83,  34, 226,  83,  50, 211,
     68,  66, 179,  84,  66, 178, 100,  66, 163, 100,  66, 147,
    116,  66, 146, 132,  66, 131, 132,  66, 115, 163,  51, 114,
    180,  34, 115, 198, 145, 228,   0,  26,  16,  75,  28,   0,
      8,   4, 240, 119, 240,  99,  35, 240,  67,  66, 240,  52,
     66, 240,  52,  66, 240,  52,  66, 240,  52,  50, 240,  68,
     50, 240,  69,  18, 240,  87, 119, 133, 135, 132, 178, 181,
    162, 182, 130, 183, 114, 179,  21,  98, 163,  38,  66, 164,
     54,  34, 180,  70,  18, 165,  87, 181, 101, 129,  69, 101,
     98,  69,  67,  21,  51,  90,  57, 134, 117,   0,  32,  32,
     20,   9, 240, 211,  85,  70,  54,  54,  67,  17, 129, 114,
    113, 114, 113, 114,  98,   0,  24,  48,  40,  12, 240,  81,
    146, 147, 146, 147, 131, 147, 131, 147, 132, 132, 132, 131,
    132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 148,
    132, 132, 147, 147, 148, 147, 163, 147, 163, 163, 162,  48,
     39,  12, 194, 178, 163, 163, 147, 163, 147, 163, 147, 148,
    132, 147, 148, 132, 132, 132, 132, 132, 132, 132, 132, 132,
    132, 131, 147, 132, 132, 131, 147, 131, 147, 131, 146, 147,
    146, 145, 176,  35,  16, 240,  99, 211, 211, 145,  51,  49,
     67,  35,  35,  52,  33,  36,  68,  17,  20, 119, 165, 153,
     85,  17,  21,  52,  19,  20,  65,  51,  49, 147, 211, 211,
      0,  41,  52,  27,   0,  25,   2, 240, 162, 240, 162, 240,
    162, 240, 162, 240, 162, 240, 162, 240, 162, 240, 162, 240,
    162, 240, 162, 239,   9,  63,   9, 226, 240, 162, 240, 162,
    240, 162, 240, 162, 240, 162, 240, 162, 240, 162, 240, 162,
    240, 162, 240, 162,   0,  22,  20,   9,   0,  24, 115,  85,
     70,  54,  54,  67,  17, 129, 114, 113, 114, 113, 114,  98,
    240, 144,  11,  13,   0,  29,  42,  58,  58,  58,   0,  24,
     96,  13,   9,   0,  24, 116,  70,  54,  54,  54,  68,   0,
     10,  80,  40,  17, 240, 226, 242, 227, 226, 242, 227, 226,
    242, 226, 242, 227, 226, 242, 227, 226, 242, 227, 226, 242,
    227, 226, 242, 227, 226, 242, 227, 226, 242, 226, 242, 227,
    226, 242, 227, 226, 242, 240,  53,  19,   0,  10,  22, 179,
     67, 132,  83, 115,  99, 100, 100,  84, 100,  84, 101,  53,
    101,  53, 101,  53, 101,  53, 101,  53, 101,  53, 101,  53,
    101,  53, 101,  53, 101,  53, 101,  53, 101,  68, 100,  84,
    100,  99,  99, 116,  83, 132,  51, 182,   0,  22,  48,  32,
     16,   0,   8, 114, 196, 121, 116,  20, 196, 196, 196, 196,
    196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196,
    196, 196, 140,  76,   0,  18,  48,  41,  17,   0,   9,   5,
    169, 115,  53,  98,  85,  69,  68,  69,  69,  53,  69,  53,
     69,  67,  85, 197, 196, 196, 212, 195, 211, 226, 226,  82,
    114,  98,  98, 114,  91, 107,  92,  77,  77,   0,  19,  80,
     44,  18,   0,   9,  70, 178,  52, 130,  84, 101,  53,  85,
     53,  85,  53,  85,  53,  99,  68, 213, 211, 197, 214, 245,
    229, 213, 214,  68,  70,  54,  54,  54,  54,  54,  54,  53,
     69,  84,  53, 122, 166,   0,  21,  32,  45,  19,   0,  10,
    114, 240,  19, 240,  19, 244, 229, 229, 209,  20, 194,  20,
    178,  36, 177,  52, 162,  52, 146,  68, 145,  84, 130,  84,
    114, 100, 113, 116, 111,   1,  63,   1, 196, 244, 244, 244,
    202, 154,   0,  21,  96,  42,  17,   0,   8,  81, 146,  83,
     99,  91, 106, 121, 135, 162, 242, 242, 242,  37, 138, 115,
     68,  98, 100, 212, 213, 197,  67,  85,  52,  85,  53,  69,
     52,  85,  52,  69,  82,  84, 106, 150,   0,  20,  16,  49,
     17,   0,   9,  37, 163,  50, 131,  67, 100,  52, 100,  52,
     84,  68,  84,  82, 100, 197,  20, 124,  86,  37,  70,  52,
     69,  69,  53,  69,  53,  69,  53,  69,  53,  69,  53,  69,
     68,  69,  68,  68,  99,  68, 100,  36, 136, 181,   0,  20,
     36,  18,   0,   9,  30,  78,  77,  92, 108,  98, 114, 113,
    114, 114, 114, 242, 242, 240,  18, 243, 242, 240,  18, 243,
    243, 243, 228, 228, 228, 228, 228, 228, 242,   0,  21,  80,
     47,  17,   0,   9,   6, 162,  67, 114,  98,  99,  99,  83,
     99,  83,  99,  84,  83,  86,  50, 103,  19, 121, 152, 168,
    123,  83,  55,  67,  70,  51, 116,  51, 116,  51, 131,  51,
    131,  51, 131,  67,  99,  84,  67, 121, 166,   0,  20,  49,
     18,   0,   9,  85, 179,  51, 131,  83, 100,  84,  69,  84,
     69,  84,  69,  85,  53,  85,  53,  85,  53,  85,  53,  85,
     68,  85,  68,  70,  84,  54, 108, 117,  21, 212, 228,  99,
     84,  85,  67, 100,  68,  99,  68, 137, 166,   0,  21,  48,
     21,   9,   0,  13,  84,  70,  54,  54,  54,  68, 240, 240,
    180,  70,  54,  54,  54,  68,   0,  10,  80,  27,   9,   0,
     13,  84,  70,  54,  54,  54,  68, 240, 240, 179,  85,  70,
     54,  54,  69, 129, 114, 113, 114, 113, 114,  98, 240, 144,
     30,   9,   0,  11,  52,  70,  54,  54,  54,  68, 240, 146,
    114, 114, 114, 114, 100,  84,  84,  84,  84,  84,  69,  70,
     54,  54,  54,  54,  68, 208,  17,  27,   0,  47,  47,   9,
     63,   9,   0,  20,  95,   9,  63,   9,   0,  44,  32,  38,
     15,   0,  19,  50, 196, 180, 165, 180, 194, 240, 240, 210,
    210, 210, 210, 210, 195, 195, 179, 180, 165, 149,  66,  69,
     52,  53,  52,  53,  52,  53,  66,  84,  66, 118, 240, 240,
     96,  39,  16, 240, 240, 102, 137,  98,  69,  67,  85,  52,
     69,  52,  69,  52,  69,  66,  85, 165, 165, 179, 211, 195,
    210, 226, 226, 226, 226, 240, 240, 243, 197, 182, 165, 181,
    195,   0,  19,  16,  86,  27,   0,   7, 104, 240,  44, 228,
    101, 164, 164, 146, 227, 114,  85,  98,  99,  71,  83,  82,
     68,  50,  82,  82,  52,  82,  66,  66,  67, 100,  50,  50,
     52, 100,  50,  50,  52, 100,  50,  50,  52, 100,  50,  50,
     52, 100,  50,  50,  52, 100,  50,  50,  52, 100,  50,  50,
     68,  84,  50,  66,  52,  84,  50,  66,  68,  53,  34,  82,
     87,  23,  98,  85,  53, 130, 240, 163, 240,  18, 115, 197,
    147, 117, 234,   0,  31,  64,  60,  28,   0,  11, 115, 240,
    163, 240, 164, 240, 133, 240, 133, 240, 134, 240, 103, 240,
    103, 240, 104, 240,  66,  37, 240,  66,  37, 240,  51,  38,
    240,  34,  69, 240,  34,  69, 240,  19,  70, 242, 101, 242,
    102, 223, 223, 210, 134, 178, 165, 178, 165, 178, 166, 104,
    107,  56, 107,   0,  31, 112,  55,  24,   0,   9,  15,   1,
    143,   3, 149, 101, 133, 116, 133, 117, 117, 117, 117, 117,
    117, 117, 117, 117, 117, 101, 133,  85, 157, 190, 165, 101,
    133, 117, 117, 117, 117, 133, 101, 133, 101, 133, 101, 133,
    101, 118, 101, 117, 117, 102,  79,   4,  95,   2,   0,  27,
    112,  56,  25,   0,  10,  71,  81, 171,  34, 134,  86, 117,
    148, 101, 179,  85, 195,  70, 210,  69, 226,  69, 226,  54,
    241,  54, 240,  70, 240,  70, 240,  70, 240,  70, 240,  70,
    240,  85, 241,  70, 225,  70, 210,  85, 210, 101, 178, 133,
    147, 150,  99, 188, 240,  23,   0,  29,  32,  57,  26,   0,
      9, 111,   1, 175,   3, 181, 101, 165, 132, 149, 148, 133,
    149, 117, 149, 117, 164, 117, 165, 101, 165, 101, 165, 101,
    165, 101, 165, 101, 165, 101, 165, 101, 165, 101, 165, 101,
    164, 117, 164, 117, 149, 117, 148, 133, 132, 149, 101, 127,
      3, 143,   1,   0,  30,  64,  59,  24,   0,   9,  15,   4,
     95,   4, 133, 116, 133, 131, 133, 146, 133, 162, 117, 162,
    117,  66,  66, 117,  66,  66, 117,  66, 213,  51, 219, 219,
    213,  51, 213,  66, 213,  66,  82, 101,  66,  82, 101, 178,
    101, 177, 117, 162, 117, 162, 117, 147, 117, 117,  79,   5,
     79,   4,   0,  27,  80,  53,  23,   0,   8,  95,   4,  79,
      4, 117, 101, 117, 131, 117, 146, 117, 146, 117, 161, 117,
    161, 117,  66,  66, 101,  66, 197,  66, 197,  51, 203, 203,
    197,  51, 197,  66, 197,  66, 197,  66, 197, 240,  53, 240,
     53, 240,  53, 240,  53, 252, 188,   0,  27,  32,  56,  27,
      0,  11,  39,  81, 188,  34, 166,  86, 149, 133, 133, 164,
    117, 195, 102, 195, 102, 210, 101, 226,  86, 226,  86, 240,
    102, 240, 102, 240, 102, 240, 102, 240, 102, 123,  69, 123,
     69, 181, 102, 165, 117, 165, 133, 149, 134, 133, 166,  86,
    187,  35, 231,  66,   0,  31,  57,  27,   0,  10,  27,  43,
     59,  43, 101, 133, 149, 133, 149, 133, 149, 133, 149, 133,
    149, 133, 149, 133, 149, 133, 149, 133, 159,   3, 159,   3,
    149, 133, 149, 133, 149, 133, 149, 133, 149, 133, 149, 133,
    149, 133, 149, 133, 149, 133, 149, 133, 107,  43,  59,  43,
      0,  30,  96,  32,  16,   0,   6,  13,  61, 117, 181, 181,
    181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181,
    181, 181, 181, 181, 181, 181, 125,  61,   0,  18,  48,  38,
     20,   0,   8,  28, 140, 197, 245, 245, 245, 245, 245, 245,
    245, 245, 245, 245, 245, 245, 245, 245, 245, 116,  69, 102,
     53, 102,  53, 102,  53, 101,  68, 131,  68, 183,   0,  23,
     96,  60,  28,   0,  10,  75,  88,  75,  88, 117, 178, 165,
    162, 181, 146, 197, 130, 213, 114, 229,  98, 245,  82, 240,
     21,  51, 240,  37,  36, 240,  37,  22, 240,  29, 247,  21,
    246,  38, 229,  70, 213,  85, 213,  86, 197, 101, 197, 117,
    181, 118, 165, 133, 165, 149, 107,  59,  59,  59,   0,  31,
    112,  55,  21,   0,   7, 124, 156, 197, 240,  21, 240,  21,
    240,  21, 240,  21, 240,  21, 240,  21, 240,  21, 240,  21,
    240,  21, 240,  21, 240,  21, 240,  21, 240,  21, 145, 101,
    130, 101, 130, 101, 130, 101, 130, 101, 115, 101, 100, 101,
     85,  63,   2,  79,   2,   0,  24,  16,  93,  33,   0,  12,
     56, 232,  57, 216, 102, 198, 151, 177,  20, 146,  20, 177,
     20, 146,  20, 162,  20, 146,  21, 145,  36, 146,  36, 130,
     36, 146,  36, 130,  36, 146,  52, 113,  52, 146,  52,  98,
     52, 146,  53,  81,  68, 146,  68,  81,  68, 146,  68,  66,
     68, 146,  69,  49,  84, 146,  84,  49,  84, 146,  84,  34,
     84, 146,  85,  17, 100, 146, 102, 100, 146, 102, 100, 146,
    116, 116, 146, 116, 116, 146, 115, 132, 104,  82,  90,  56,
     82,  90,   0,  37,  64,  69,  28,   0,  10,  72, 152,  57,
    136, 103, 162, 152, 146, 146,  21, 146, 146,  22, 130, 146,
     38, 114, 146,  53, 114, 146,  54,  98, 146,  70,  82, 146,
     86,  66, 146, 101,  66, 146, 102,  50, 146, 118,  34, 146,
    133,  34, 146, 134,  18, 146, 152, 146, 167, 146, 182, 146,
    182, 146, 197, 146, 212, 146, 212, 104, 179, 104, 194,   0,
     32,  32,  56,  26,   0,  10, 103, 240,  36,  53, 196, 116,
    164, 148, 133, 149, 117, 149, 101, 181,  85, 181,  70, 182,
     54, 182,  54, 182,  54, 182,  54, 182,  54, 182,  54, 182,
     54, 182,  69, 182,  69, 181,  86, 150, 101, 149, 118, 133,
    133, 117, 166,  54, 219, 240,  39,   0,  30,  80,  53,  24,
      0,   9,  15,   1, 143,   3, 149,  86, 133, 117, 117, 118,
    101, 118, 101, 118, 101, 118, 101, 118, 101, 118, 101, 117,
    117, 101, 143, 157, 181, 240,  69, 240,  69, 240,  69, 240,
     69, 240,  69, 240,  69, 240,  69, 240,  69, 240,  27, 219,
      0,  28,  80,  77,  26,   0,  10, 103, 240,  20,  68, 212,
    116, 164, 148, 132, 180, 116, 180, 101, 196,  84, 212,  69,
    213,  53, 213,  53, 213,  53, 213,  53, 213,  53, 213,  53,
    213,  53, 213,  53, 213,  68, 212,  85, 181, 100,  67,  68,
    116,  53,  52, 132,  18,  50,  20, 165,  85, 197,  68, 240,
     25,  81, 240,  36,  50, 240,  56, 240,  56, 240,  56, 240,
     55, 240,  86, 240, 100,   0,   7,  16,  57,  28,   0,  10,
     79, 223,   3, 213,  86, 197, 117, 181, 118, 165, 118, 165,
    118, 165, 118, 165, 118, 165, 117, 181,  86, 206, 237, 245,
     84, 229, 100, 213, 101, 197, 101, 197, 101, 197, 101, 197,
    101, 197, 102,  65, 101, 117,  65, 101, 117,  65,  59,  85,
     34,  59, 118,   0,  32,  49,  19,   0,   7,  86,  50, 120,
     19,  99,  85,  84, 100,  68, 131,  68, 131,  68, 146,  69,
    130,  69, 130,  72, 203, 141, 124, 155, 185, 214, 229,  50,
    164,  50, 164,  50, 164,  51, 147,  68, 116,  70,  83,  83,
     25,  98,  70,   0,  22,  32,  63,  26,   0,   9, 127,   6,
     95,   6,  84,  69,  68,  83,  85,  83,  82, 101,  98,  82,
    101,  98,  81, 117, 113,  81, 117, 113,  66, 117, 114,  50,
    117, 114, 197, 240, 101, 240, 101, 240, 101, 240, 101, 240,
    101, 240, 101, 240, 101, 240, 101, 240, 101, 240, 101, 240,
    101, 240, 101, 240,  31, 191,   0,  30,  16,  56,  27,   0,
     10,  27,  88,  59,  88, 101, 178, 149, 178, 149, 178, 149,
    178, 149, 178, 149, 178, 149, 178, 149, 178, 149, 178, 149,
    178, 149, 178, 149, 178, 149, 178, 149, 178, 149, 178, 149,
    178, 149, 178, 164, 163, 165, 146, 196, 131, 212,  84, 251,
    240,  55,   0,  31,  96,  62,  28,   0,  10,  75, 104,  59,
    104, 101, 194, 150, 178, 165, 163, 165, 162, 182, 146, 197,
    130, 213, 130, 229, 114, 229,  98, 246,  82, 240,  21,  66,
    240,  37,  66, 240,  53,  50, 240,  53,  34, 240,  70,  18,
    240,  87, 240, 103, 240, 103, 240, 117, 240, 133, 240, 148,
    240, 147, 240, 163,   0,  33,  32,  92,  38,   0,  14,  43,
     27,  87,  59,  27,  87, 101, 118, 162, 133, 133, 146, 150,
    117, 146, 165, 118, 129, 181, 133, 114, 182, 102, 114, 197,
    103,  97, 213,  97,  21,  82, 214,  66,  21,  82, 229,  66,
     22,  65, 245,  65,  53,  50, 246,  34,  53,  50, 240,  21,
     34,  54,  33, 240,  37,  33,  85,  18, 240,  40,  85,  18,
    240,  55,  87, 240,  70, 118, 240,  70, 118, 240,  85, 117,
    240, 100, 148, 240, 100, 148, 240, 115, 162, 240, 130, 178,
      0,  44,  48,  64,  28,   0,  10,  91,  42,  91,  42, 133,
    131, 198, 114, 230,  82, 240,  21,  67, 240,  22,  50, 240,
     54,  18, 240,  88, 240,  87, 240, 117, 240, 134, 240, 134,
    240, 118, 240, 104, 240,  82,  22, 240,  50,  53, 240,  35,
     54, 240,  18,  85, 242, 102, 211, 118, 194, 149, 178, 166,
    105,  91,  57,  91,   0,  31, 112,  62,  30,   0,  11,  44,
    120,  60, 120, 117, 194, 182, 163, 198, 146, 229, 130, 246,
    114, 240,  21,  98, 240,  38,  82, 240,  54,  50, 240,  70,
     35, 240,  86,  18, 240, 119, 240, 135, 240, 149, 240, 165,
    240, 165, 240, 165, 240, 165, 240, 165, 240, 165, 240, 165,
    240, 165, 240, 123, 240,  75,   0,  35,  16,  51,  21,   0,
      7, 127,   3,  63,   3,  54, 101,  68, 118,  67, 133,  82,
    134,  82, 133,  98, 117, 114, 102, 245, 246, 245, 246, 245,
    245, 240,  21,  98, 117, 114, 102, 114, 101, 130,  85, 146,
     85, 131,  69, 132,  69, 117,  63,   3,  63,   3,   0,  24,
     39,   8, 133,  53,  50,  98,  98,  98,  98,  98,  98,  98,
     98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,
     98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,
    101,  53,  48,  35,  17,   0,   6,  98,  98,  98,  98, 113,
    113, 114,  98, 113, 113, 114,  98, 113, 113, 129,  19,  49,
     19,  70,  38,  54,  38,  54,  38,  69,  53,  83,  83,   0,
     45,  16,  39,   8, 133,  53,  98,  98,  98,  98,  98,  98,
     98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,
     98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,
     98,  98,  53,  53,  48,  15,  13, 240, 240, 210, 164, 134,
     99,  35,  67,  67,  65,  97,   0,  46,  11,   9, 240, 212,
     70,  54,  54,  54,  68,   0,  32,  20,   9, 240, 242,  98,
    113, 114, 113, 114, 113, 129,  19,  70,  54,  54,  69,  83,
      0,  24,  16,  36,  19,   0,  28, 119, 163,  68, 132,  68,
    116,  84, 114, 100, 244, 184, 139, 117,  52, 100,  84,  84,
    100,  84, 100,  84, 100,  84,  85, 100,  50,  21, 101,  68,
      0,  21,  96,  57,  21,   0,   7, 118, 246, 240,  36, 240,
     36, 240,  36, 240,  36, 240,  36, 240,  36, 240,  36, 240,
     36,  22, 166,  52, 132, 100, 116, 116, 100, 116, 100, 117,
     84, 117,  84, 117,  84, 117,  84, 117,  84, 117,  84, 116,
    100, 116, 101,  84, 115,  18,  52, 130,  54,   0,  24,  80,
     31,  16,   0,  24,  86, 132,  36,  84,  52,  68,  68,  68,
     67,  69, 181, 181, 181, 181, 181, 196, 113,  69,  82,  84,
     81, 116,  50, 149,   0,  18,  96,  54,  21,   0,   9,  22,
    246, 240,  36, 240,  36, 240,  36, 240,  36, 240,  36, 240,
     36, 240,  36, 166,  20, 132,  54, 116, 100, 100, 116, 100,
    116,  85, 116,  85, 116,  85, 116,  85, 116,  85, 116,  85,
    116, 100, 116, 100, 116, 116,  85, 132,  56, 134,  22,   0,
     24,  32,  18,   0,  27,  86, 163,  52, 116,  68,  84, 100,
     68, 100,  53, 100,  63,  63,  53, 213, 213, 228, 130,  69,
    114,  84,  98, 116,  66, 166,   0,  21,  16,  36,  17, 240,
    240, 166, 153, 117,  36, 100,  37,  84,  53,  84,  67, 100,
    212, 212, 212, 186, 122, 148, 212, 212, 212, 212, 212, 212,
    212, 212, 212, 212, 212, 186, 122,   0,  20,  50,  19,   0,
     29,   6,  35, 100,  36,  19,  68,  67,  19,  68,  68, 116,
     68, 116,  68, 116,  68, 116,  68, 132,  36, 153, 161,  37,
    162, 240,  35, 240,  27, 156, 125,  83, 116,  68, 132,  51,
    148,  52, 131,  83, 131,  99,  84, 152, 240, 240, 240,  56,
     21,   0,   7, 118, 246, 240,  36, 240,  36, 240,  36, 240,
     36, 240,  36, 240,  36, 240,  36, 240,  36,  53, 148,  18,
     51, 133,  84, 117,  84, 116, 100, 116, 100, 116, 100, 116,
    100, 116, 100, 116, 100, 116, 100, 116, 100, 116, 100, 116,
    100,  89,  24,  57,  24,   0,  24,  31,  11, 240, 240,  83,
    117, 101, 101, 101, 115, 240, 240, 150,  86, 116, 116, 116,
    116, 116, 116, 116, 116, 116, 116, 116, 116,  88,  56,   0,
     12,  96,  42,  14,   0,   6,   4, 150, 134, 134, 134, 148,
      0,   6,  39, 119, 164, 164, 164, 164, 164, 164, 164, 164,
    164, 164, 164, 164, 164, 164, 164, 164,  67,  52,  52,  52,
     52,  36,  68,  35, 117, 240, 240,  80,  54,  20,   0,   7,
     70, 230, 240,  20, 240,  20, 240,  20, 240,  20, 240,  20,
    240,  20, 240,  20, 240,  20,  71,  84,  71,  84,  83, 132,
     67, 148,  50, 180,  34, 196,  19, 201, 185, 180,  36, 164,
     52, 148,  53, 132,  68, 132,  84,  88,  24,  56,  24,   0,
     22, 112,  32,  11, 240, 240,  54,  86, 116, 116, 116, 116,
    116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116,
    116, 116, 116, 116, 116,  88,  56,   0,  12,  96,  57,  31,
      0,  46,  70,  53,  85, 118,  18,  51,  34,  51, 133,  85,
     84, 117,  85,  84, 116, 100, 100, 116, 100, 100, 116, 100,
    100, 116, 100, 100, 116, 100, 100, 116, 100, 100, 116, 100,
    100, 116, 100, 100, 116, 100, 100, 116, 100, 100,  89,  25,
     24,  57,  25,  24,   0,  35,  32,  39,  21,   0,  31,  70,
     53, 118,  18,  51, 133,  84, 117,  84, 116, 100, 116, 100,
    116, 100, 116, 100, 116, 100, 116, 100, 116, 100, 116, 100,
    116, 100, 116, 100,  89,  24,  57,  24,   0,  24,  37,  19,
      0,  29,  22, 179,  52, 132,  68, 100, 100,  84, 100,  69,
    101,  53, 101,  53, 101,  53, 101,  53, 101,  53, 101,  68,
    100,  84, 100, 100,  68, 132,  51, 182,   0,  22,  48,  50,
     21,   0,  31,  70,  22, 136,  52, 132, 100, 116, 101, 100,
    116, 100, 117,  84, 117,  84, 117,  84, 117,  84, 117,  84,
    117,  84, 116, 100, 101, 101,  84, 118,  52, 132,  22, 164,
    240,  36, 240,  36, 240,  36, 240,  36, 248, 216,   0,   6,
    112,  52,  21,   0,  32,  22,  50, 132,  50,  19, 116,  85,
    101, 100, 100, 116,  85, 116,  85, 116,  85, 116,  85, 116,
     85, 116,  85, 116, 100, 116, 101, 100, 116,  85, 132,  54,
    165,  36, 240,  36, 240,  36, 240,  36, 240,  36, 240,  36,
    248, 216, 240, 240, 240,  29,  16,   0,  24,   6,  36,  70,
     17,  20,  85,  36,  85,  36,  84,  66, 100, 196, 196, 196,
    196, 196, 196, 196, 196, 169, 121,   0,  18, 112,  33,  15,
      0,  22, 120,  83,  67,  67,  98,  67,  98,  68,  82,  70,
    153, 122, 120, 166,  50, 100,  50, 115,  50, 115,  51,  98,
     68,  67,  66,  37,   0,  17,  80,  36,  14,   0,   9,  34,
    194, 194, 194, 179, 179, 164, 138,  74, 100, 164, 164, 164,
    164, 164, 164, 164,  50,  84,  50,  84,  50,  84,  50,  84,
     50, 100,  18, 133,   0,  16,  48,  38,  21,   0,  31,  70,
     55,  86,  55, 116, 100, 116, 100, 116, 100, 116, 100, 116,
    100, 116, 100, 116, 100, 116, 100, 116, 100, 116, 100, 116,
    100, 116,  85, 132,  56, 118,  38,   0,  24,  36,  20,   0,
     30,   8,  54,  56,  54,  84, 114, 132,  97, 148,  82, 149,
     66, 164,  50, 180,  50, 196,  33, 212,  18, 215, 229, 245,
    240,  19, 240,  35, 240,  35,   0,  23,  96,  51,  27,   0,
     40,  72,  23,  38,  56,  23,  38,  84,  68,  98, 117,  67,
     98, 132,  68,  66, 148,  68,  66, 149,  37,  65, 180,  38,
     34, 180,  33,  35,  34, 198,  35,  33, 214,  38, 213,  69,
    228,  68, 244,  68, 243,  99, 240,  18,  98,   0,  31,  80,
     36,  20,   0,  30,   8,  39,  56,  39, 100,  67, 148,  66,
    180,  34, 214, 229, 240,  20, 240,  36, 246, 210,  20, 195,
     36, 178,  68, 146, 100,  87,  40,  55,  40,   0,  22, 112,
     49,  20,   0,  30,   8,  54,  56,  54,  85,  98, 132,  97,
    148,  82, 164,  66, 164,  65, 181,  34, 196,  34, 196,  18,
    230, 229, 245, 240,  20, 240,  19, 240,  35, 240,  49, 240,
     50, 194,  66, 180,  34, 196,  34, 195,  34, 228,   0,   6,
    112,  34,  16,   0,  24,  28,  67,  69,  66,  84,  82,  68,
     97,  69,  97,  68, 181, 180, 180, 181,  50, 100,  66,  85,
     66,  84,  82,  68,  83,  53,  68,  60,   0,  18,  64,  11,
     21,   0,  44,  95,   3,  63,   3,   0,  47,  80,  13,  39,
      0,  82, 127,  15,   6,  63,  15,   6,   0,  88,  16,  20,
     14, 240, 227,  51,  84,  36,  68,  36,  52,  36,  68,  36,
     67,  51,  82,  66,   0,  49,  96,  12,  15,   0,   5, 116,
    171,  74,  66,  68,   0,  56, 112,
};

//*****************************************************************************
//
// The font definition for the 36 point Cm bold font.
//
//*****************************************************************************
const tFont g_sFontCm36b =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    35,

    //
    // The height of the font.
    //
    37,

    //
    // The baseline of the font.
    //
    28,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   36,   70,  166,  231,  321,  396,
         416,  456,  495,  530,  582,  602,  613,  626,
         666,  719,  751,  792,  836,  881,  923,  972,
        1008, 1055, 1104, 1125, 1152, 1182, 1199, 1237,
        1276, 1362, 1422, 1477, 1533, 1590, 1649, 1702,
        1758, 1815, 1847, 1885, 1945, 2000, 2093, 2162,
        2218, 2271, 2348, 2405, 2454, 2517, 2573, 2635,
        2727, 2791, 2853, 2904, 2943, 2978, 3017, 3032,
        3043, 3063, 3099, 3156, 3187, 3241, 3273, 3309,
        3359, 3415, 3446, 3488, 3542, 3574, 3631, 3670,
        3707, 3757, 3809, 3838, 3871, 3907, 3945, 3981,
        4032, 4068, 4117, 4151, 4162, 4175, 4195,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cm36bData
};
