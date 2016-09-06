//*****************************************************************************
//
// fontcmsc28.c - Font definition for the 28pt Cmsc font.
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
//     Style: cmsc
//     Size: 28 point
//     Bold: no
//     Italic: no
//     Memory usage: 3460 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 28 point Cmsc font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cmsc28Data[3260] =
{
      5,  11,   0,  38,  64,  23,   5,  83,  35,  35,  35,  35,
     35,  35,  49,  65,  65,  65,  65,  65,  65,  65, 211,  35,
     35, 240, 240, 112,  22,  11, 240, 130,  50,  52,  35,  51,
     35,  81,  65,  81,  65,  65,  65,  81,  65,  65,  65,   0,
     25,  32,  55,  23,   0,   7,   1,  97, 241,  82, 226,  81,
    241,  97, 241,  97, 241,  81, 241,  97, 241,  97, 241,  81,
    143,   6, 145,  97, 241,  82, 226,  81, 241,  97, 159,   6,
    129,  81, 241,  97, 241,  97, 241,  81, 241,  97, 241,  97,
    241,  82, 226,  81, 241,  97,   0,   7,  32,  52,  14, 240,
     65, 182,  98,  33,  50,  65,  49,  66,  34,  49,  51,  34,
     49,  51,  34,  49,  51,  35,  33, 149, 167, 150, 145,  35,
    129,  51,  35,  33,  66,  35,  33,  66,  35,  33,  66,  33,
     65,  65,  65,  49,  50,  66,  33,  34, 117, 177,   0,  11,
     64,  72,  23,  51, 177,  98,  34, 146,  98,  51,  98,  98,
     81,  22,  17,  98,  81, 113, 114,  81,  97, 130,  81,  82,
    130,  81,  81, 146,  81,  65, 178,  49,  66, 193,  33,  81,
    226,  81, 240,  98,  68, 209,  66,  49, 177,  81,  81, 146,
     66,  81, 130,  82,  81, 129,  98,  81, 114,  98,  81,  98,
    114,  81,  97, 146,  49,  97, 162,  34,  97, 195,   0,  14,
    112,  56,  21, 240, 180, 240,  18,  34, 226,  65, 226,  65,
    226,  65, 226,  65, 226,  49, 242,  33, 240,  35, 102,  98,
    146, 131, 129, 129,  18, 113, 129,  50,  97, 113,  67,  65,
    114,  83,  33, 130,  98,  33, 130, 115,  97,  35, 114,  97,
     51,  66,  19,  49, 101,  84,   0,  18, 112,  12,   6, 210,
     52,  51,  81,  81,  65,  81,  65,   0,  14,  31,   9,  97,
    113, 113, 114, 113, 114, 113, 114, 114, 113, 114, 114, 114,
    114, 114, 114, 114, 114, 129, 130, 114, 114, 130, 114, 130,
    129, 145, 145,  32,  31,   9,   1, 145, 145, 145, 130, 129,
    130, 114, 114, 130, 114, 114, 114, 114, 114, 114, 114, 114,
    114, 113, 114, 114, 113, 114, 113, 113, 113, 113, 128,  28,
     13,  66, 178, 178, 113,  50,  50,  35,  18,  19,  83,  18,
    146, 147,  18,  83,  18,  19,  49,  50,  50,  98, 178, 178,
      0,  25,  32,  45,  21,   0,  11,  81, 240,  81, 240,  81,
    240,  81, 240,  81, 240,  81, 240,  81, 240,  81, 240,  81,
    240,  81, 191,   4, 177, 240,  81, 240,  81, 240,  81, 240,
     81, 240,  81, 240,  81, 240,  81, 240,  81,   0,  11, 112,
     14,   6,   0,  13,  82,  52,  51,  81,  81,  65,  81,  65,
    240,  16,   9,  10,   0,  17,  72,  40,   0,  15,  32,  10,
      5,   0,  11,  35,  35,  35, 240, 240, 112,  31,  13, 161,
    193, 177, 193, 178, 177, 193, 177, 193, 193, 177, 193, 178,
    177, 193, 178, 177, 193, 177, 193, 193, 177, 193, 178, 177,
    193, 177, 193, 192,  40,  13, 240, 240, 197, 114,  50,  82,
     82,  65, 113,  50, 114,  34, 114,  34, 114,  34, 114,  34,
    114,  34, 114,  34, 114,  34, 114,  34, 114,  34, 114,  49,
    113,  66,  82,  82,  50, 117,   0,  12,  26,  12, 240, 240,
    177, 147,  99,  18, 162, 162, 162, 162, 162, 162, 162, 162,
    162, 162, 162, 162, 162, 162, 106,   0,  10,  96,  33,  13,
    240, 240, 197,  98,  67,  65,  98,  51,  98,  35,  98,  35,
     98, 178, 162, 178, 162, 162, 162, 162, 177,  81,  81,  97,
     65, 113,  58,  42,   0,  11,  96,  33,  15,   0,   6,   6,
    129,  83,  83,  83,  67,  83,  67,  83, 195, 194, 194, 149,
    227, 211, 211, 195,  50, 115,  35, 115,  35, 114,  66,  83,
    118,   0,  13, 112,  35,  15,   0,   6,  97, 210, 210, 177,
     18, 177,  18, 161,  34, 145,  50, 145,  50, 129,  66, 113,
     82, 113,  82,  97,  98,  81, 114,  93, 162, 210, 210, 168,
      0,  13,  48,  33,  14, 240, 240, 226,  82,  88, 102, 129,
    209, 209, 209,  36, 115,  50,  97,  98, 209, 210, 194,  50,
    114,  35, 114,  50, 114,  49, 114,  81,  82, 117,   0,  13,
     39,  13, 240, 240, 228, 114,  65,  82,  66,  81,  82,  66,
    177, 178,  36,  82,  17,  50,  67,  82,  50, 114,  34, 114,
     34, 114,  34, 114,  49, 114,  49, 114,  50,  82,  82,  50,
    117,   0,  12,  26,  13, 240, 240, 145, 203,  43,  33, 129,
    177, 177, 177, 193, 177, 193, 178, 177, 193, 178, 178, 178,
    178, 178,   0,  12,  48,  40,  14,   0,   5, 101, 129,  66,
     97,  98,  66, 113,  66, 113,  67,  97,  83,  65, 116,  17,
    149, 129,  36,  82,  83,  66,  99,  34, 130,  34, 130,  34,
    130,  50, 113,  82,  81, 118,   0,  12, 112,  39,  13, 240,
    240, 197, 114,  50,  82,  82,  50, 113,  50, 114,  34, 114,
     34, 114,  34, 114,  34, 114,  50,  83,  66,  49,  18,  84,
     34, 177, 178, 178,  66,  66,  82,  50, 116,   0,  12,  32,
     15,   5, 240, 240, 243,  35,  35, 240, 240,  35,  35,  35,
    240, 240, 112,  18,   5, 240, 240, 243,  35,  34, 240, 240,
     50,  51,  35,  65,  65,  49,  65,  49, 224,  32,  20,   0,
     17,   2, 240,  19, 242, 243, 243, 243, 242, 243, 240,  35,
    240,  82, 240,  83, 240,  67, 240,  67, 240,  82, 240,  83,
    240,  66,   0,  15,  32,  13,  21,   0,  28, 127,   4,   0,
     10, 111,   4,   0,  29,  16,  32,  20,   0,  15,   2, 240,
     67, 240,  83, 240,  67, 240,  67, 240,  82, 240,  83, 240,
     67, 240,  34, 243, 243, 242, 243, 243, 243, 240,  17,   0,
     17,  48,  29,  12, 240, 182,  81,  82,  50,  98,  34,  98,
     34,  98, 146, 146, 161, 161, 177, 161, 177, 177, 177, 240,
    240,  67, 147, 147,   0,  11,  32,  68,  21,   0,   6,  22,
    195,  83, 146, 146, 113,  68,  81,  82,  50,  49,  66,  65,
     50,  81,  65,  65,  50,  98,  34,  33,  50, 114,  49,  33,
     50, 114,  49,  33,  50, 114,  49,  33,  50, 114,  49,  33,
     50, 114,  49,  49,  50,  98,  49,  49,  50,  83,  49,  50,
     50,  49,  18,  33,  82,  52,  51, 114, 240,  83, 131, 153,
      0,  19,  16,  49,  22, 240, 240,  18, 240,  82, 240,  82,
    240,  68, 240,  49,  18, 240,  33,  35, 240,  17,  35, 240,
     17,  50, 241,  67, 225,  67, 225,  82, 209,  99, 193,  99,
    203, 161, 131, 161, 131, 145, 163, 129, 163, 114, 163,  86,
    104,   0,  19,  64,  42,  20, 240, 240, 173, 162, 115, 130,
    131, 114, 147,  98, 147,  98, 147,  98, 147,  98, 131, 114,
    115, 138, 162, 131, 114, 147,  98, 163,  82, 163,  82, 163,
     82, 163,  82, 147,  98, 131,  78,   0,  18,  32,  45,  20,
      0,   5, 118,  65, 115,  82,  18,  83, 147,  67, 163,  66,
    194,  51, 209,  50, 225,  35, 240,  35, 240,  35, 240,  35,
    240,  35, 240,  50, 225,  51, 209,  66, 209,  67, 177,  99,
    145, 147,  82, 198,   0,  18,  48,  43,  22, 240, 240, 238,
    178, 116, 146, 147, 130, 163, 114, 179,  98, 179,  98, 195,
     82, 195,  82, 195,  82, 195,  82, 195,  82, 195,  82, 195,
     82, 194,  98, 179,  98, 163, 114, 147, 130, 131, 110,   0,
     20,  32,  46,  20, 240, 240, 175,   1, 114, 147,  98, 162,
     98, 177,  98, 177,  98, 177,  98,  97,  65,  98,  97, 178,
     82, 185, 178,  82, 178,  97, 178,  97,  81,  82, 193,  82,
    177,  98, 177,  98, 177,  98, 147,  63,   2,   0,  17, 112,
     42,  19, 240, 240, 143,   1,  98, 146,  98, 161,  98, 177,
     82, 177,  82, 177,  82,  97, 162,  97, 162,  82, 169, 162,
     82, 162,  97, 162,  97, 162, 240,  34, 240,  34, 240,  34,
    240,  34, 233,   0,  17, 112,  47,  21,   0,   6,  22,  49,
    147,  81,  33, 115, 131,  99, 162,  98, 193,  83, 193,  82,
    209,  67, 240,  51, 240,  51, 240,  51, 240,  51, 136,  50,
    194,  83, 178,  98, 178,  99, 162, 115, 146, 147,  82,  17,
    182,  49,   0,  18, 112,  44,  22, 240, 240, 232,  72,  82,
    162, 130, 162, 130, 162, 130, 162, 130, 162, 130, 162, 130,
    162, 130, 162, 142, 130, 162, 130, 162, 130, 162, 130, 162,
    130, 162, 130, 162, 130, 162, 130, 162,  88,  72,   0,  19,
     64,  24,  10, 240,  88,  82, 130, 130, 130, 130, 130, 130,
    130, 130, 130, 130, 130, 130, 130, 130, 130, 130,  88,   0,
      9,  29,  13, 240, 247, 146, 178, 178, 178, 178, 178, 178,
    178, 178, 178, 178, 178, 178,  67,  66,  67,  66,  67,  66,
     81,  66, 116,   0,  12,  32,  47,  22, 240, 240, 232, 101,
     98, 162, 130, 145, 162, 129, 178, 113, 194,  97, 210,  81,
    226,  65, 242,  51, 226,  33,  19, 210,  17,  50, 211,  67,
    194,  99, 178, 115, 162, 115, 162, 131, 146, 147, 130, 148,
     72,  87,   0,  19,  64,  31,  17, 240, 240,  73, 178, 242,
    242, 242, 242, 242, 242, 242, 242, 242, 242, 242, 242, 145,
     82, 145,  82, 145,  82, 130,  82, 115,  47,   0,  15,  16,
     74,  26,   0,   6,  70, 198,  83, 195, 129,  18, 161,  18,
    129,  18, 161,  18, 129,  19, 145,  18, 129,  34, 129,  34,
    129,  34, 129,  34, 129,  50,  97,  50, 129,  50,  97,  50,
    129,  51,  81,  50, 129,  66,  65,  66, 129,  66,  65,  66,
    129,  82,  33,  82, 129,  82,  33,  82, 129,  83,  17,  82,
    129,  99,  98, 129,  99,  98, 115,  97, 114,  87,  65,  72,
      0,  23,  57,  22, 240, 240, 230, 119,  84, 131, 113,  18,
    145, 129,  19, 129, 129,  35, 113, 129,  51,  97, 129,  51,
     97, 129,  67,  81, 129,  83,  65, 129,  98,  65, 129,  99,
     49, 129, 115,  33, 129, 130,  33, 129, 131,  17, 129, 148,
    129, 163, 129, 163, 115, 162,  87, 145,   0,  19, 112,  43,
     21,   0,   6,  22, 195,  83, 147, 115, 115, 147,  98, 179,
     67, 179,  66, 211,  35, 211,  35, 211,  35, 211,  35, 211,
     35, 211,  35, 211,  51, 179,  67, 179,  83, 147, 115, 115,
    147,  83, 199,   0,  19,  48,  40,  19, 240, 240, 141, 146,
    115, 114, 131,  98, 147,  82, 147,  82, 147,  82, 147,  82,
    147,  82, 131,  98, 115, 122, 146, 240,  34, 240,  34, 240,
     34, 240,  34, 240,  34, 240,  34, 232,   0,  18,  55,  21,
      0,   6,  22, 210,  83, 147, 115, 115, 147,  98, 179,  67,
    179,  66, 210,  51, 211,  35, 211,  35, 211,  35, 211,  35,
    211,  35, 211,  51, 194,  67, 179,  83,  51,  66, 114,  33,
     49,  34, 148,  66, 215,  81, 226,  65, 226,  50, 246, 245,
    240,  35,   0,   5,  96,  45,  23,   0,   5, 109, 210, 115,
    178, 131, 162, 147, 146, 147, 146, 147, 146, 147, 146, 131,
    162, 115, 185, 226,  99, 194, 115, 178, 130, 178, 131, 162,
    131, 162, 131, 162, 131,  65,  82, 147,  34,  54, 133,   0,
     20,  64,  39,  15, 240, 240,  53,  49,  82,  68,  66,  99,
     50, 130,  50, 145,  50, 145,  51, 129,  68, 184, 152, 181,
    211, 195,  33, 162,  33, 162,  34, 146,  34, 130,  52,  82,
     65,  54,   0,  13,  96,  48,  20, 240, 240, 175,   3,  34,
     98,  98,  33, 114, 113,  33, 114, 113,  33, 114, 113,  33,
    114, 113, 162, 240,  50, 240,  50, 240,  50, 240,  50, 240,
     50, 240,  50, 240,  50, 240,  50, 240,  50, 240,  50, 240,
     50, 234,   0,  18,  32,  44,  22, 240, 240, 232,  87,  82,
    163, 114, 177, 130, 177, 130, 177, 130, 177, 130, 177, 130,
    177, 130, 177, 130, 177, 130, 177, 130, 177, 130, 177, 130,
    177, 130, 177, 146, 145, 177, 129, 210,  81, 246,   0,  20,
     48,  47,  22, 240, 240, 231, 133,  67, 178, 114, 177, 131,
    161, 146, 161, 147, 129, 163, 129, 178, 113, 195,  97, 210,
     97, 211,  65, 242,  65, 243,  33, 240,  19,  33, 240,  34,
     17, 240,  52, 240,  67, 240,  66, 240,  82,   0,  20,  80,
     72,  30,   0,   7,  71,  71,  85,  67, 131, 131,  98, 131,
    145, 114, 146, 129, 131, 131, 113, 146, 116, 113, 147,  81,
     34,  97, 163,  81,  35,  81, 178,  81,  35,  81, 179,  49,
     66,  65, 195,  49,  67,  49, 210,  49,  82,  49, 211,  17,
     98,  33, 227,  17,  99,  17, 242,  17, 115, 240,  19, 131,
    240,  19, 131, 240,  34, 145, 240,  49, 161,   0,  27,  64,
     50,  22, 240, 240, 232,  71,  99, 130, 163, 113, 195,  81,
    211,  81, 227,  49, 240,  19,  17, 240,  35,  17, 240,  51,
    240,  83, 240,  49,  18, 240,  49,  19, 240,  17,  51, 225,
     83, 193,  99, 193, 115, 161, 147, 130, 148,  71, 103,   0,
     19,  64,  46,  22, 240, 240, 231, 118,  68, 162, 115, 161,
    147, 129, 163, 129, 179,  97, 210,  81, 227,  65, 243,  33,
    240,  34,  17, 240,  52, 240,  66, 240,  82, 240,  82, 240,
     82, 240,  82, 240,  82, 240,  82, 240,  40,   0,  20,  32,
     36,  17, 240, 240,  79,  36, 130,  50, 147,  49, 147,  65,
    131,  81, 131, 211, 211, 226, 227, 211, 226, 227, 211, 129,
     82, 145,  66, 161,  51, 146,  50, 147,  47,   0,  15,  16,
     30,   6, 100,  33,  81,  81,  81,  81,  81,  81,  81,  81,
     81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,
     81,  81,  81,  81,  84,  32,  22,  11, 240, 145,  65,  65,
     65,  81,  65,  65,  65,  81,  65,  83,  35,  51,  36,  50,
     50,   0,  25,  16,  30,   6, 100,  81,  81,  81,  81,  81,
     81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,
     81,  81,  81,  81,  81,  81,  81,  81,  36,  32,  14,   9,
    240,  97, 113,  17,  97,  33,  65,  65,  33,   0,  24,  80,
      7,   5, 243,  35,  35,   0,  14,  13,   6, 225,  65,  81,
     65,  81,  83,  52,  50,   0,  13, 112,  33,  17,   0,  13,
     81, 240,  17, 243, 227, 209,  19, 193,  34, 193,  34, 177,
     51, 161,  66, 145,  83, 137, 129,  98, 113, 115,  97, 130,
     68,  86,   0,  15,  16,  32,  15,   0,  13,  26, 114,  83,
     82,  98,  82,  98,  82,  98,  82,  82, 104, 114,  98,  82,
    114,  66, 114,  66, 114,  66, 114,  66,  98,  58,   0,  13,
     96,  31,  16,   0,  14,  85,  49,  82,  84,  66, 130,  50,
    146,  49, 177,  34, 177,  34, 226, 226, 241, 177,  50, 161,
     66, 129,  99,  66, 149,   0,  14,  96,  33,  16,   0,  14,
     10, 130,  83,  98, 114,  82, 114,  82, 130,  66, 130,  66,
    130,  66, 130,  66, 130,  66, 130,  66, 114,  82, 114,  82,
     83,  74,   0,  14,  96,  31,  15,   0,  13,  28,  82, 113,
     82, 129,  66, 129,  66,  65, 130,  65, 135, 130,  65, 130,
     65, 130, 210, 129,  66, 129,  66, 114,  45,   0,  13,  48,
     29,  15,   0,  13,  28,  82,  98,  82, 113,  82, 113,  82,
    129,  66,  65, 130,  65, 135, 130,  65, 130,  65, 130, 210,
    210, 182,   0,  14,  32,  37,  18,   0,  16,  53,  49, 114,
     82,  17,  98, 130,  82, 161,  81, 177,  66, 240,  18, 240,
     18, 240,  18, 119,  50, 146,  82, 146,  98, 130, 115,  81,
     17, 150,  33,   0,  16,  32,  34,  17,   0,  14, 118,  54,
     66, 114,  98, 114,  98, 114,  98, 114,  98, 114, 107,  98,
    114,  98, 114,  98, 114,  98, 114,  98, 114,  98, 114,  70,
     54,   0,  15,  16,  21,   8,   0,   7,   6,  66,  98,  98,
     98,  98,  98,  98,  98,  98,  98,  98,  98,  70,   0,   7,
     32,  23,  11,   0,  10,   6, 130, 146, 146, 146, 146, 146,
    146, 146, 146, 146,  50,  66,  50,  50,  85,   0,  10,  32,
     35,  17,   0,  14, 118,  84,  66, 114,  98,  98, 114,  81,
    146,  65, 162,  49, 178,  35, 164,  19, 146,  66, 146,  82,
    130,  98, 114,  99,  98, 115,  54,  69,   0,  15,  16,  25,
     14,   0,  12,  38, 162, 194, 194, 194, 194, 194, 194, 194,
    194, 113,  66, 113,  66,  98,  66,  82,  59,   0,  12,  80,
     55,  20,   0,  17,  68, 164,  67, 131,  97,  17, 113,  18,
     97,  18,  97,  18,  97,  18,  97,  18,  97,  34,  65,  34,
     97,  34,  65,  34,  97,  49,  49,  50,  97,  50,  33,  50,
     97,  50,  33,  50,  97,  67,  66,  97,  67,  66,  97,  81,
     82,  69,  49,  54,   0,  17,  96,  43,  17,   0,  14, 117,
     85,  67, 113,  97,  18,  97,  97,  19,  81,  97,  34,  81,
     97,  50,  65,  97,  66,  49,  97,  67,  33,  97,  82,  33,
     97,  98,  17,  97, 115,  97, 115,  98, 114,  69, 113,   0,
     15,  48,  33,  17,   0,  15,  69, 162,  82, 114, 114,  82,
    146,  65, 178,  34, 178,  34, 178,  34, 178,  34, 178,  35,
    162,  50, 146,  82, 114, 114,  82, 165,   0,  15,  96,  27,
     15,   0,  13,  26, 114,  98,  82, 114,  66, 114,  66, 114,
     66, 114,  66,  98,  88, 114, 210, 210, 210, 210, 182,   0,
     14,  32,  42,  17,   0,  15,  70, 147,  66, 114, 114,  82,
    146,  66, 161,  50, 178,  34, 178,  34, 178,  34, 178,  34,
    178,  50, 146,  82,  51,  33, 114,  17,  50, 166, 240,  17,
     49, 194,  33, 212, 211,   0,   6,  96,  35,  17,   0,  14,
    121, 162,  82, 130,  98, 114,  98, 114,  98, 114,  82, 135,
    162,  66, 146,  82, 130,  82, 130,  82, 130,  82,  49,  66,
     83,  33,  38,  68,   0,  15,  32,  30,  13,   0,  11, 100,
     33,  66,  67,  50,  98,  50, 113,  50, 113,  52, 167, 150,
    179,  33, 130,  33, 130,  34, 114,  35,  82,  49,  37,   0,
     12,  29,  16,   0,  14,  14,  34,  66,  66,  33,  82,  81,
     33,  82,  81,  33,  82,  81, 130, 226, 226, 226, 226, 226,
    226, 226, 184,   0,  14,  80,  34,  17,   0,  14, 118,  69,
     66, 129,  98, 129,  98, 129,  98, 129,  98, 129,  98, 129,
     98, 129,  98, 129,  98, 129,  98, 129, 114,  97, 146,  65,
    181,   0,  15,  96,  31,  17,   0,  14, 117, 100,  51, 130,
     82, 129,  99,  97, 130,  97, 130,  97, 146,  65, 162,  65,
    178,  33, 194,  33, 196, 227, 226, 240,  17,   0,  16,  51,
     23,   0,  20,  21,  53,  68,  51,  83,  98,  82,  98,  97,
     98,  98,  97,  98,  81,  18,  65, 130,  65,  18,  65, 130,
     65,  18,  65, 146,  33,  50,  33, 162,  33,  50,  33, 162,
     17,  82,  17, 179,  83, 195,  83, 194, 114, 209, 113,   0,
     21,  16,  32,  17,   0,  14, 118,  53,  83,  82, 130,  81,
    162,  49, 179,  17, 212, 226, 243, 209,  34, 177,  51, 161,
     66, 145,  98, 114,  99,  69,  70,   0,  15,  16,  32,  18,
      0,  15, 102, 100,  67, 114, 114, 113, 146,  81, 163,  65,
    178,  49, 210,  17, 228, 242, 240,  18, 240,  18, 240,  18,
    240,  18, 230,   0,  16,  80,  29,  13,   0,  11,  59,  34,
     98,  49, 114,  49,  98,  65,  82, 163, 162, 162, 162, 178,
     81,  66,  97,  50, 113,  49, 114,  43,   0,  11,  80,   8,
     16,   0,  26,  14,   0,  28,  32,   9,  31,   0,  50,  63,
     14,   0,  54,  64,  16,  11, 240, 146,  50,  66,  50,  50,
     50,  65,  65,  65,  65,   0,  29,  64,  12,  11, 240, 240,
     83, 113,  37,  33,  67,   0,  30,  80,
};

//*****************************************************************************
//
// The font definition for the 28 point Cmsc font.
//
//*****************************************************************************
const tFont g_sFontCmsc28 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    28,

    //
    // The height of the font.
    //
    28,

    //
    // The baseline of the font.
    //
    21,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   28,   50,  105,  157,  229,  285,
         297,  328,  359,  387,  432,  446,  455,  465,
         496,  536,  562,  595,  628,  663,  696,  735,
         761,  801,  840,  855,  873,  905,  918,  950,
         979, 1047, 1096, 1138, 1183, 1226, 1272, 1314,
        1361, 1405, 1429, 1458, 1505, 1536, 1610, 1667,
        1710, 1750, 1805, 1850, 1889, 1937, 1981, 2028,
        2100, 2150, 2196, 2232, 2262, 2284, 2314, 2328,
        2335, 2348, 2381, 2413, 2444, 2477, 2508, 2537,
        2574, 2608, 2629, 2652, 2687, 2712, 2767, 2810,
        2843, 2870, 2912, 2947, 2977, 3006, 3040, 3071,
        3122, 3154, 3186, 3215, 3223, 3232, 3248,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cmsc28Data
};
