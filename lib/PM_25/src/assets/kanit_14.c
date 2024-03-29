/*******************************************************************************
 * Size: 14 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "../../lvgl/src/lvgl.h"
#endif

#ifndef KANIT_14
#define KANIT_14 1
#endif

#if KANIT_14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x5f, 0x35, 0xf3, 0x5f, 0x25, 0xf2, 0x4f, 0x24,
    0xf1, 0x4f, 0x11, 0x30, 0x6f, 0x30,

    /* U+0022 "\"" */
    0x6e, 0x2f, 0x16, 0xd2, 0xf0, 0x48, 0x1b, 0x0,

    /* U+0023 "#" */
    0x0, 0x5, 0xf0, 0xa, 0xa0, 0x0, 0xb, 0x90,
    0x1f, 0x40, 0xc, 0xff, 0xff, 0xff, 0xf3, 0x0,
    0x7e, 0x11, 0xba, 0x10, 0x0, 0xb9, 0x0, 0xf4,
    0x0, 0x5f, 0xff, 0xff, 0xff, 0x80, 0x6, 0xf2,
    0x2b, 0xb2, 0x10, 0x9, 0xb0, 0xe, 0x60, 0x0,
    0xd, 0x70, 0x2f, 0x20, 0x0,

    /* U+0024 "$" */
    0x0, 0x8, 0x60, 0x0, 0x0, 0xa, 0x80, 0x0,
    0x5, 0xcf, 0xfe, 0x70, 0x2f, 0xcc, 0xa7, 0x60,
    0x5f, 0x3a, 0x80, 0x0, 0x2f, 0xcc, 0x80, 0x0,
    0x3, 0xaf, 0xfb, 0x20, 0x0, 0xa, 0xbd, 0xe0,
    0x0, 0xa, 0x86, 0xf1, 0x29, 0x6c, 0xbd, 0xe0,
    0x1c, 0xff, 0xfb, 0x20, 0x0, 0xa, 0x80, 0x0,

    /* U+0025 "%" */
    0xa, 0xfc, 0x10, 0x8e, 0x0, 0x4b, 0x8, 0x71,
    0xf6, 0x0, 0x5b, 0x9, 0x79, 0xd0, 0x0, 0xa,
    0xec, 0x3f, 0x50, 0x0, 0x0, 0x0, 0xac, 0x0,
    0x0, 0x0, 0x2, 0xf4, 0xaf, 0xc1, 0x0, 0xb,
    0xb4, 0xb0, 0x97, 0x0, 0x3f, 0x35, 0xb0, 0x78,
    0x0, 0xca, 0x0, 0xbd, 0xc1,

    /* U+0026 "&" */
    0x0, 0x9f, 0xe6, 0x0, 0x0, 0x5e, 0x35, 0xf1,
    0x0, 0x6, 0xd0, 0x1f, 0x20, 0x0, 0xc, 0x8b,
    0x90, 0x0, 0x2, 0xcf, 0xf2, 0x0, 0x1, 0xea,
    0x1b, 0xe3, 0xf2, 0x5f, 0x20, 0xb, 0xfe, 0x2,
    0xf8, 0x23, 0x9f, 0xf3, 0x5, 0xcf, 0xeb, 0x49,
    0x60,

    /* U+0027 "'" */
    0x6e, 0x6d, 0x48,

    /* U+0028 "(" */
    0x0, 0xdc, 0x0, 0x8f, 0x10, 0xe, 0x90, 0x3,
    0xf5, 0x0, 0x5f, 0x30, 0x5, 0xf2, 0x0, 0x4f,
    0x30, 0x2, 0xf6, 0x0, 0xe, 0xa0, 0x0, 0x7f,
    0x20, 0x0, 0xab, 0x0,

    /* U+0029 ")" */
    0x4f, 0x70, 0x8, 0xf2, 0x1, 0xf7, 0x0, 0xdb,
    0x0, 0xad, 0x0, 0xae, 0x0, 0xbd, 0x0, 0xdb,
    0x2, 0xf6, 0x9, 0xf1, 0x4d, 0x50,

    /* U+002A "*" */
    0x0, 0x89, 0x0, 0x3d, 0xcc, 0xd3, 0x4, 0xff,
    0x40, 0x9, 0xba, 0xa0, 0x5, 0x11, 0x50,

    /* U+002B "+" */
    0x0, 0x4e, 0x0, 0x0, 0x4e, 0x0, 0x5f, 0xff,
    0xff, 0x13, 0x7f, 0x33, 0x0, 0x4e, 0x0, 0x0,
    0x15, 0x0,

    /* U+002C "," */
    0xb, 0x32, 0xf1, 0x5d, 0x0,

    /* U+002D "-" */
    0x0, 0x0, 0x0, 0x6f, 0xff, 0xff, 0x13, 0x33,
    0x33,

    /* U+002E "." */
    0x13, 0x6e,

    /* U+002F "/" */
    0x0, 0x4, 0xf4, 0x0, 0x9, 0xe0, 0x0, 0xe,
    0x90, 0x0, 0x4f, 0x40, 0x0, 0x9e, 0x0, 0x0,
    0xea, 0x0, 0x4, 0xf4, 0x0, 0x9, 0xf0, 0x0,
    0xe, 0xa0, 0x0, 0x3f, 0x50, 0x0,

    /* U+0030 "0" */
    0x0, 0x8e, 0xfe, 0x91, 0x0, 0xaf, 0x96, 0x8f,
    0xc0, 0x1f, 0x80, 0x0, 0x7f, 0x34, 0xf3, 0x0,
    0x2, 0xf6, 0x5f, 0x20, 0x0, 0xf, 0x75, 0xf3,
    0x0, 0x2, 0xf7, 0x1f, 0x80, 0x0, 0x7f, 0x30,
    0xaf, 0x96, 0x8f, 0xc0, 0x0, 0x8e, 0xfe, 0x91,
    0x0,

    /* U+0031 "1" */
    0x1, 0x43, 0x6f, 0xf9, 0x12, 0xf9, 0x0, 0xf9,
    0x0, 0xf9, 0x0, 0xf9, 0x0, 0xf9, 0x0, 0xf9,
    0x0, 0xf9, 0x0, 0xf9,

    /* U+0032 "2" */
    0xb, 0xef, 0xd5, 0x0, 0x96, 0x6c, 0xf2, 0x0,
    0x0, 0x2f, 0x50, 0x0, 0x3, 0xf4, 0x0, 0x1,
    0xdb, 0x0, 0x2, 0xeb, 0x0, 0x3, 0xea, 0x0,
    0x1, 0xed, 0x33, 0x31, 0x6f, 0xff, 0xff, 0x80,

    /* U+0033 "3" */
    0x2c, 0xef, 0xc5, 0x2, 0x86, 0x6c, 0xf3, 0x0,
    0x0, 0x2f, 0x60, 0x0, 0x7, 0xf3, 0x0, 0xff,
    0xf9, 0x0, 0x2, 0x37, 0xf5, 0x0, 0x0, 0xf,
    0x94, 0x86, 0x6a, 0xf6, 0x4d, 0xff, 0xd7, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x5f, 0x50, 0x0, 0x2, 0xff, 0x50,
    0x0, 0xd, 0x8f, 0x50, 0x0, 0xab, 0xf, 0x50,
    0x7, 0xd1, 0xf, 0x50, 0x3f, 0x30, 0xf, 0x50,
    0xaf, 0xff, 0xff, 0xf4, 0x23, 0x33, 0x5f, 0x70,
    0x0, 0x0, 0x2f, 0x50,

    /* U+0035 "5" */
    0x3f, 0xff, 0xfe, 0x4, 0xf4, 0x33, 0x20, 0x5f,
    0x0, 0x0, 0x6, 0xff, 0xfe, 0x70, 0x13, 0x33,
    0x9f, 0x40, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x1f,
    0x74, 0x86, 0x6c, 0xf3, 0x3d, 0xff, 0xc4, 0x0,

    /* U+0036 "6" */
    0x0, 0x8e, 0xfe, 0x60, 0xb, 0xe7, 0x56, 0x40,
    0x3f, 0x30, 0x0, 0x0, 0x5f, 0x8e, 0xfd, 0x40,
    0x6f, 0xa4, 0x4a, 0xf1, 0x6f, 0x0, 0x0, 0xf5,
    0x4f, 0x20, 0x0, 0xf5, 0xe, 0xc4, 0x4b, 0xe1,
    0x3, 0xbe, 0xec, 0x30,

    /* U+0037 "7" */
    0x8f, 0xff, 0xff, 0x81, 0x33, 0x37, 0xf4, 0x0,
    0x0, 0xbd, 0x0, 0x0, 0x2f, 0x70, 0x0, 0x8,
    0xf0, 0x0, 0x0, 0xe9, 0x0, 0x0, 0x6f, 0x20,
    0x0, 0xd, 0xb0, 0x0, 0x3, 0xf4, 0x0, 0x0,

    /* U+0038 "8" */
    0x2, 0xbe, 0xfc, 0x50, 0xd, 0xc5, 0x4a, 0xf2,
    0x1f, 0x50, 0x1, 0xf5, 0xd, 0x90, 0x4, 0xf2,
    0x5, 0xfd, 0xcf, 0x70, 0x2f, 0x60, 0x15, 0xf5,
    0x5f, 0x10, 0x0, 0xd9, 0x2f, 0xa4, 0x47, 0xf6,
    0x4, 0xcf, 0xfd, 0x70,

    /* U+0039 "9" */
    0x4, 0xcf, 0xeb, 0x30, 0x1f, 0xa4, 0x4a, 0xe0,
    0x5f, 0x0, 0x1, 0xf4, 0x3f, 0x60, 0x15, 0xf6,
    0x8, 0xff, 0xfb, 0xf6, 0x0, 0x2, 0x1, 0xf6,
    0x0, 0x0, 0x5, 0xf3, 0x5, 0x65, 0x8f, 0xc0,
    0x6, 0xef, 0xe9, 0x0,

    /* U+003A ":" */
    0x0, 0x6e, 0x12, 0x0, 0x0, 0x6e, 0x13,

    /* U+003B ";" */
    0x0, 0x0, 0xf5, 0x3, 0x10, 0x0, 0x0, 0x0,
    0x0, 0xb, 0x32, 0xf1, 0x5d, 0x0,

    /* U+003C "<" */
    0x0, 0x0, 0x4, 0xb0, 0x0, 0x5, 0xcf, 0xb0,
    0x6, 0xdf, 0xa2, 0x0, 0x6f, 0xb1, 0x0, 0x0,
    0x2b, 0xfb, 0x40, 0x0, 0x0, 0x3a, 0xfd, 0x50,
    0x0, 0x0, 0x29, 0xf0, 0x0, 0x0, 0x0, 0x10,

    /* U+003D "=" */
    0x5f, 0xff, 0xff, 0x2, 0x22, 0x22, 0x6f, 0xff,
    0xff, 0x2, 0x22, 0x22,

    /* U+003E ">" */
    0x59, 0x10, 0x0, 0x0, 0x3e, 0xf9, 0x20, 0x0,
    0x0, 0x5c, 0xfa, 0x30, 0x0, 0x0, 0x4e, 0xf0,
    0x0, 0x7, 0xef, 0x80, 0x18, 0xfe, 0x71, 0x0,
    0x6e, 0x70, 0x0, 0x0, 0x10, 0x0, 0x0, 0x0,

    /* U+003F "?" */
    0x3c, 0xef, 0xc4, 0x4, 0x86, 0x6c, 0xf1, 0x0,
    0x0, 0x4f, 0x40, 0x0, 0x9, 0xf1, 0x0, 0x9,
    0xe3, 0x0, 0x8, 0xf2, 0x0, 0x0, 0x98, 0x0,
    0x0, 0x2, 0x20, 0x0, 0x0, 0xeb, 0x0, 0x0,

    /* U+0040 "@" */
    0x0, 0x29, 0xde, 0xda, 0x30, 0x0, 0x3f, 0x94,
    0x23, 0x7f, 0x40, 0xd, 0x63, 0xcd, 0xb2, 0x6d,
    0x3, 0xf0, 0x0, 0x5, 0xa2, 0xf0, 0x5c, 0x4,
    0xcc, 0xdb, 0x1f, 0x5, 0xc0, 0xe3, 0x4, 0xb6,
    0xc0, 0x4e, 0xf, 0x20, 0x7e, 0xb2, 0x0, 0xf3,
    0x6e, 0xc6, 0x0, 0x0, 0x6, 0xe5, 0x0, 0x2,
    0x0, 0x0, 0x5, 0xcf, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x1, 0x0, 0x0, 0x0,

    /* U+0041 "A" */
    0x0, 0x2, 0xfe, 0x0, 0x0, 0x0, 0x8, 0xdf,
    0x50, 0x0, 0x0, 0xe, 0x69, 0xb0, 0x0, 0x0,
    0x4e, 0x2, 0xf1, 0x0, 0x0, 0xa8, 0x0, 0xb7,
    0x0, 0x1, 0xff, 0xff, 0xfd, 0x0, 0x6, 0xf3,
    0x33, 0x5f, 0x30, 0xd, 0xa0, 0x0, 0xd, 0x90,
    0x3f, 0x50, 0x0, 0x8, 0xf0,

    /* U+0042 "B" */
    0x2f, 0xff, 0xff, 0xb2, 0x2, 0xf8, 0x33, 0x4e,
    0xa0, 0x2f, 0x60, 0x0, 0x9d, 0x2, 0xf6, 0x0,
    0x1c, 0xa0, 0x2f, 0xff, 0xff, 0xf3, 0x2, 0xf8,
    0x22, 0x3b, 0xe0, 0x2f, 0x60, 0x0, 0x5f, 0x32,
    0xf7, 0x22, 0x3b, 0xf1, 0x2f, 0xff, 0xff, 0xd5,
    0x0,

    /* U+0043 "C" */
    0x0, 0x5c, 0xff, 0xd7, 0x7, 0xfc, 0x75, 0x78,
    0xf, 0xb0, 0x0, 0x0, 0x4f, 0x40, 0x0, 0x0,
    0x5f, 0x20, 0x0, 0x0, 0x4f, 0x40, 0x0, 0x0,
    0x1f, 0xa0, 0x0, 0x0, 0x7, 0xfb, 0x65, 0x77,
    0x0, 0x5c, 0xff, 0xe8,

    /* U+0044 "D" */
    0x2f, 0xff, 0xfe, 0x91, 0x2, 0xf8, 0x34, 0x6e,
    0xc0, 0x2f, 0x60, 0x0, 0x6f, 0x32, 0xf6, 0x0,
    0x2, 0xf6, 0x2f, 0x60, 0x0, 0x1f, 0x72, 0xf6,
    0x0, 0x2, 0xf6, 0x2f, 0x60, 0x0, 0x5f, 0x32,
    0xf8, 0x33, 0x6e, 0xc0, 0x2f, 0xff, 0xfe, 0x91,
    0x0,

    /* U+0045 "E" */
    0x2f, 0xff, 0xff, 0xf2, 0x2f, 0x83, 0x33, 0x30,
    0x2f, 0x60, 0x0, 0x0, 0x2f, 0x60, 0x0, 0x0,
    0x2f, 0xff, 0xff, 0xa0, 0x2f, 0x83, 0x33, 0x20,
    0x2f, 0x60, 0x0, 0x0, 0x2f, 0x83, 0x33, 0x30,
    0x2f, 0xff, 0xff, 0xf2,

    /* U+0046 "F" */
    0x2f, 0xff, 0xff, 0xf0, 0x2f, 0x83, 0x33, 0x30,
    0x2f, 0x60, 0x0, 0x0, 0x2f, 0x60, 0x0, 0x0,
    0x2f, 0xff, 0xff, 0x80, 0x2f, 0x83, 0x33, 0x10,
    0x2f, 0x60, 0x0, 0x0, 0x2f, 0x60, 0x0, 0x0,
    0x2f, 0x60, 0x0, 0x0,

    /* U+0047 "G" */
    0x0, 0x5c, 0xef, 0xe8, 0x0, 0x6f, 0xb6, 0x57,
    0x80, 0xf, 0xb0, 0x0, 0x0, 0x4, 0xf4, 0x0,
    0x0, 0x0, 0x5f, 0x20, 0x2e, 0xee, 0x55, 0xf4,
    0x0, 0x11, 0xf6, 0x1f, 0xa0, 0x0, 0xf, 0x60,
    0x8f, 0xb6, 0x57, 0xf6, 0x0, 0x6c, 0xff, 0xea,
    0x20,

    /* U+0048 "H" */
    0x2f, 0x60, 0x0, 0x4f, 0x42, 0xf6, 0x0, 0x4,
    0xf4, 0x2f, 0x60, 0x0, 0x4f, 0x42, 0xf6, 0x0,
    0x4, 0xf4, 0x2f, 0xff, 0xff, 0xff, 0x42, 0xf8,
    0x33, 0x36, 0xf4, 0x2f, 0x60, 0x0, 0x4f, 0x42,
    0xf6, 0x0, 0x4, 0xf4, 0x2f, 0x60, 0x0, 0x4f,
    0x40,

    /* U+0049 "I" */
    0x2f, 0x62, 0xf6, 0x2f, 0x62, 0xf6, 0x2f, 0x62,
    0xf6, 0x2f, 0x62, 0xf6, 0x2f, 0x60,

    /* U+004A "J" */
    0x0, 0x4, 0xf3, 0x0, 0x4, 0xf3, 0x0, 0x4,
    0xf3, 0x0, 0x4, 0xf3, 0x0, 0x4, 0xf3, 0x0,
    0x4, 0xf3, 0x0, 0x5, 0xf3, 0x55, 0x6d, 0xe0,
    0x8e, 0xfc, 0x40,

    /* U+004B "K" */
    0x2f, 0x60, 0x3, 0xf8, 0x2, 0xf6, 0x3, 0xfa,
    0x0, 0x2f, 0x62, 0xeb, 0x0, 0x2, 0xf8, 0xee,
    0x0, 0x0, 0x2f, 0xfd, 0xf3, 0x0, 0x2, 0xfd,
    0x1b, 0xd0, 0x0, 0x2f, 0x60, 0x1f, 0x80, 0x2,
    0xf6, 0x0, 0x6f, 0x30, 0x2f, 0x60, 0x0, 0xcc,
    0x0,

    /* U+004C "L" */
    0x2f, 0x60, 0x0, 0x0, 0x2f, 0x60, 0x0, 0x0,
    0x2f, 0x60, 0x0, 0x0, 0x2f, 0x60, 0x0, 0x0,
    0x2f, 0x60, 0x0, 0x0, 0x2f, 0x60, 0x0, 0x0,
    0x2f, 0x60, 0x0, 0x0, 0x2f, 0x83, 0x33, 0x30,
    0x2f, 0xff, 0xff, 0xf0,

    /* U+004D "M" */
    0x2f, 0xb0, 0x0, 0x1, 0xfb, 0x2f, 0xf3, 0x0,
    0x9, 0xfb, 0x2f, 0xea, 0x0, 0x1f, 0xeb, 0x2f,
    0x8f, 0x20, 0x9b, 0xcb, 0x2f, 0x69, 0xa1, 0xf3,
    0xcb, 0x2f, 0x62, 0xfa, 0xb0, 0xcb, 0x2f, 0x60,
    0x9f, 0x30, 0xcb, 0x2f, 0x60, 0x16, 0x0, 0xcb,
    0x2f, 0x60, 0x0, 0x0, 0xcb,

    /* U+004E "N" */
    0x2f, 0x90, 0x0, 0x1f, 0x72, 0xff, 0x40, 0x1,
    0xf7, 0x2f, 0xde, 0x10, 0x1f, 0x72, 0xf6, 0xcb,
    0x1, 0xf7, 0x2f, 0x62, 0xf6, 0x1f, 0x72, 0xf6,
    0x6, 0xf3, 0xf7, 0x2f, 0x60, 0xa, 0xdf, 0x72,
    0xf6, 0x0, 0x1e, 0xf7, 0x2f, 0x60, 0x0, 0x4f,
    0x70,

    /* U+004F "O" */
    0x0, 0x7d, 0xff, 0xc5, 0x0, 0xa, 0xfa, 0x67,
    0xcf, 0x60, 0x1f, 0x80, 0x0, 0xc, 0xd0, 0x5f,
    0x30, 0x0, 0x7, 0xf1, 0x6f, 0x20, 0x0, 0x6,
    0xf1, 0x5f, 0x40, 0x0, 0x8, 0xf1, 0x1f, 0x90,
    0x0, 0xd, 0xd0, 0x9, 0xfa, 0x66, 0xcf, 0x50,
    0x0, 0x7d, 0xff, 0xc5, 0x0,

    /* U+0050 "P" */
    0x2f, 0xff, 0xfe, 0x90, 0x2f, 0x83, 0x37, 0xf8,
    0x2f, 0x60, 0x0, 0xbd, 0x2f, 0x60, 0x0, 0xad,
    0x2f, 0x60, 0x4, 0xf9, 0x2f, 0xff, 0xff, 0xb1,
    0x2f, 0x83, 0x31, 0x0, 0x2f, 0x60, 0x0, 0x0,
    0x2f, 0x60, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x7d, 0xff, 0xc4, 0x0, 0x8, 0xfa, 0x67,
    0xcf, 0x50, 0x1f, 0x90, 0x0, 0xd, 0xc0, 0x4f,
    0x40, 0x0, 0x8, 0xf0, 0x5f, 0x20, 0x0, 0x6,
    0xf1, 0x5f, 0x20, 0x0, 0x6, 0xf1, 0x3f, 0x50,
    0x0, 0x9, 0xf0, 0xe, 0xc1, 0x0, 0x3f, 0xa0,
    0x4, 0xff, 0xcc, 0xfd, 0x10, 0x0, 0x17, 0xfc,
    0x50, 0x0, 0x0, 0x0, 0xcb, 0x32, 0x0, 0x0,
    0x0, 0x3d, 0xf6, 0x0,

    /* U+0052 "R" */
    0x2f, 0xff, 0xff, 0xb1, 0x2f, 0x83, 0x36, 0xfa,
    0x2f, 0x60, 0x0, 0xae, 0x2f, 0x60, 0x3, 0xeb,
    0x2f, 0xff, 0xff, 0xa1, 0x2f, 0x83, 0x4f, 0x80,
    0x2f, 0x60, 0x9, 0xe0, 0x2f, 0x60, 0x4, 0xf5,
    0x2f, 0x60, 0x0, 0xdb,

    /* U+0053 "S" */
    0x4, 0xcf, 0xfd, 0x70, 0x2f, 0xc6, 0x57, 0x60,
    0x5f, 0x30, 0x0, 0x0, 0x2f, 0xb4, 0x0, 0x0,
    0x2, 0xaf, 0xfa, 0x20, 0x0, 0x0, 0x4d, 0xd0,
    0x0, 0x0, 0x7, 0xf1, 0x29, 0x65, 0x6d, 0xe0,
    0x1b, 0xef, 0xeb, 0x20,

    /* U+0054 "T" */
    0xaf, 0xff, 0xff, 0xf9, 0x23, 0x3d, 0xc3, 0x32,
    0x0, 0xc, 0xc0, 0x0, 0x0, 0xc, 0xc0, 0x0,
    0x0, 0xc, 0xc0, 0x0, 0x0, 0xc, 0xc0, 0x0,
    0x0, 0xc, 0xc0, 0x0, 0x0, 0xc, 0xc0, 0x0,
    0x0, 0xc, 0xc0, 0x0,

    /* U+0055 "U" */
    0x3f, 0x50, 0x0, 0xe, 0xa3, 0xf5, 0x0, 0x0,
    0xea, 0x3f, 0x50, 0x0, 0xe, 0xa3, 0xf5, 0x0,
    0x0, 0xea, 0x3f, 0x50, 0x0, 0xe, 0xa2, 0xf5,
    0x0, 0x0, 0xe9, 0x1f, 0x90, 0x0, 0x2f, 0x80,
    0xaf, 0x95, 0x7d, 0xf2, 0x0, 0x7d, 0xfe, 0xa2,
    0x0,

    /* U+0056 "V" */
    0x3f, 0x60, 0x0, 0x9, 0xf0, 0xd, 0xc0, 0x0,
    0xe, 0x90, 0x6, 0xf2, 0x0, 0x5f, 0x30, 0x1,
    0xf7, 0x0, 0xad, 0x0, 0x0, 0xad, 0x1, 0xf7,
    0x0, 0x0, 0x4f, 0x36, 0xf1, 0x0, 0x0, 0xe,
    0x9c, 0xb0, 0x0, 0x0, 0x8, 0xff, 0x50, 0x0,
    0x0, 0x2, 0xfe, 0x0, 0x0,

    /* U+0057 "W" */
    0x4f, 0x30, 0xa, 0xb0, 0x0, 0xf6, 0xf, 0x70,
    0xc, 0xf0, 0x4, 0xf3, 0xc, 0xa0, 0x1f, 0xf4,
    0x8, 0xf0, 0x9, 0xe0, 0x6e, 0x99, 0xb, 0xb0,
    0x5, 0xf2, 0xa9, 0x5d, 0xf, 0x80, 0x1, 0xf6,
    0xf4, 0xf, 0x5f, 0x40, 0x0, 0xdd, 0xf0, 0xc,
    0xdf, 0x0, 0x0, 0xaf, 0xb0, 0x7, 0xfd, 0x0,
    0x0, 0x6f, 0x60, 0x2, 0xf9, 0x0,

    /* U+0058 "X" */
    0x1e, 0xc0, 0x0, 0x5f, 0x70, 0x4f, 0x70, 0x1e,
    0xb0, 0x0, 0x9f, 0x2a, 0xe1, 0x0, 0x0, 0xde,
    0xf5, 0x0, 0x0, 0x5, 0xfd, 0x0, 0x0, 0x0,
    0xde, 0xf5, 0x0, 0x0, 0x9f, 0x3b, 0xf1, 0x0,
    0x5f, 0x70, 0x1e, 0xc0, 0x1e, 0xb0, 0x0, 0x4f,
    0x80,

    /* U+0059 "Y" */
    0x2f, 0x70, 0x0, 0x4f, 0x40, 0x8e, 0x10, 0xd,
    0xb0, 0x0, 0xe8, 0x6, 0xf2, 0x0, 0x6, 0xf2,
    0xe9, 0x0, 0x0, 0xc, 0xee, 0x10, 0x0, 0x0,
    0x4f, 0x70, 0x0, 0x0, 0x2, 0xf5, 0x0, 0x0,
    0x0, 0x2f, 0x50, 0x0, 0x0, 0x2, 0xf5, 0x0,
    0x0,

    /* U+005A "Z" */
    0x2f, 0xff, 0xff, 0xf6, 0x4, 0x44, 0x4d, 0xe1,
    0x0, 0x0, 0x6f, 0x50, 0x0, 0x2, 0xf9, 0x0,
    0x0, 0xc, 0xd0, 0x0, 0x0, 0x8f, 0x30, 0x0,
    0x3, 0xf8, 0x0, 0x0, 0xd, 0xe3, 0x33, 0x31,
    0x6f, 0xff, 0xff, 0xf7,

    /* U+005B "[" */
    0x0, 0x0, 0x6, 0xff, 0xf6, 0x6f, 0x43, 0x16,
    0xf2, 0x0, 0x6f, 0x20, 0x6, 0xf2, 0x0, 0x6f,
    0x20, 0x6, 0xf2, 0x0, 0x6f, 0x20, 0x6, 0xf2,
    0x0, 0x6f, 0x20, 0x6, 0xff, 0xf6, 0x13, 0x33,
    0x10,

    /* U+005C "\\" */
    0x3f, 0x50, 0x0, 0xe, 0xa0, 0x0, 0x8, 0xf0,
    0x0, 0x3, 0xf5, 0x0, 0x0, 0xea, 0x0, 0x0,
    0x8f, 0x0, 0x0, 0x3f, 0x50, 0x0, 0xd, 0xb0,
    0x0, 0x8, 0xf0, 0x0, 0x3, 0xf5, 0x0, 0x0,
    0x74,

    /* U+005D "]" */
    0x0, 0x0, 0x8, 0xff, 0xf5, 0x13, 0x6f, 0x50,
    0x3, 0xf5, 0x0, 0x3f, 0x50, 0x3, 0xf5, 0x0,
    0x3f, 0x50, 0x3, 0xf5, 0x0, 0x3f, 0x50, 0x3,
    0xf5, 0x0, 0x3f, 0x58, 0xff, 0xf5, 0x13, 0x33,
    0x10,

    /* U+005E "^" */
    0x0, 0x37, 0x0, 0x0, 0xd, 0xf7, 0x0, 0x7,
    0xd3, 0xf2, 0x2, 0xf4, 0xa, 0xb0,

    /* U+005F "_" */
    0x6f, 0xff, 0xff, 0xe0, 0x22, 0x22, 0x22,

    /* U+0060 "`" */
    0x28, 0x0, 0xe, 0x60, 0x6, 0xc0,

    /* U+0061 "a" */
    0x6, 0xdf, 0xea, 0x10, 0x55, 0x45, 0xf9, 0x0,
    0x0, 0xa, 0xd0, 0x7d, 0xef, 0xfd, 0x4f, 0x52,
    0x2a, 0xd5, 0xf5, 0x25, 0xed, 0x9, 0xef, 0xba,
    0xd0,

    /* U+0062 "b" */
    0x2f, 0x60, 0x0, 0x0, 0x2f, 0x60, 0x0, 0x0,
    0x2f, 0x60, 0x0, 0x0, 0x2f, 0xbd, 0xfd, 0x40,
    0x2f, 0xc4, 0x4b, 0xf2, 0x2f, 0x60, 0x2, 0xf6,
    0x2f, 0x60, 0x0, 0xf8, 0x2f, 0x60, 0x2, 0xf6,
    0x2f, 0xc4, 0x4b, 0xf1, 0x2f, 0x8d, 0xfd, 0x40,

    /* U+0063 "c" */
    0x1, 0xae, 0xfd, 0x20, 0xce, 0x63, 0x52, 0x3f,
    0x50, 0x0, 0x5, 0xf2, 0x0, 0x0, 0x3f, 0x50,
    0x0, 0x0, 0xde, 0x53, 0x52, 0x2, 0xae, 0xfd,
    0x30,

    /* U+0064 "d" */
    0x0, 0x0, 0x4, 0xf4, 0x0, 0x0, 0x4, 0xf4,
    0x0, 0x0, 0x4, 0xf4, 0x2, 0xbf, 0xeb, 0xf4,
    0xd, 0xe5, 0x4b, 0xf4, 0x3f, 0x50, 0x4, 0xf4,
    0x5f, 0x20, 0x4, 0xf4, 0x5f, 0x30, 0x4, 0xf4,
    0x1f, 0xc4, 0x4b, 0xf4, 0x4, 0xdf, 0xd7, 0xf4,

    /* U+0065 "e" */
    0x2, 0xbe, 0xe9, 0x0, 0xda, 0x34, 0xd9, 0x4f,
    0x20, 0x7, 0xd5, 0xfe, 0xee, 0xfe, 0x3f, 0x41,
    0x11, 0x10, 0xdc, 0x53, 0x43, 0x2, 0xae, 0xfe,
    0x50,

    /* U+0066 "f" */
    0x1, 0xcf, 0xb0, 0x9f, 0x44, 0xb, 0xc0, 0xa,
    0xff, 0xf8, 0x2c, 0xd3, 0x10, 0xbc, 0x0, 0xb,
    0xc0, 0x0, 0xbc, 0x0, 0xb, 0xc0, 0x0, 0xbc,
    0x0,

    /* U+0067 "g" */
    0x6, 0xdf, 0xff, 0xf5, 0x2f, 0x93, 0x5f, 0x80,
    0x5f, 0x10, 0xb, 0xa0, 0x3f, 0x60, 0x2e, 0x70,
    0xa, 0xff, 0xfa, 0x0, 0x2f, 0x83, 0x31, 0x0,
    0x1c, 0xff, 0xff, 0x60, 0x0, 0x0, 0xb, 0xc0,
    0x29, 0x53, 0x4d, 0xa0, 0x1c, 0xef, 0xea, 0x10,

    /* U+0068 "h" */
    0x2f, 0x60, 0x0, 0x0, 0x2f, 0x60, 0x0, 0x0,
    0x2f, 0x60, 0x0, 0x0, 0x2f, 0x9b, 0xfe, 0x60,
    0x2f, 0xe6, 0x3b, 0xf1, 0x2f, 0x60, 0x4, 0xf3,
    0x2f, 0x60, 0x4, 0xf4, 0x2f, 0x60, 0x4, 0xf4,
    0x2f, 0x60, 0x4, 0xf4, 0x2f, 0x60, 0x4, 0xf4,

    /* U+0069 "i" */
    0x9, 0xf1, 0x2, 0x40, 0x0, 0x0, 0x5f, 0xf1,
    0x18, 0xf1, 0x7, 0xf1, 0x7, 0xf1, 0x7, 0xf1,
    0x7, 0xf1, 0x7, 0xf1,

    /* U+006A "j" */
    0x0, 0x3f, 0x70, 0x1, 0x42, 0x0, 0x0, 0x0,
    0xf, 0xf7, 0x0, 0x4f, 0x70, 0x1, 0xf7, 0x0,
    0x1f, 0x70, 0x1, 0xf7, 0x0, 0x1f, 0x70, 0x1,
    0xf7, 0x0, 0x1f, 0x70, 0x4, 0xf5, 0x1f, 0xfd,
    0x0, 0x12, 0x0,

    /* U+006B "k" */
    0x2f, 0x60, 0x0, 0x0, 0x2f, 0x60, 0x0, 0x0,
    0x2f, 0x60, 0x0, 0x0, 0x2f, 0x60, 0x5f, 0x70,
    0x2f, 0x65, 0xf8, 0x0, 0x2f, 0xbf, 0x90, 0x0,
    0x2f, 0xfe, 0xb0, 0x0, 0x2f, 0x92, 0xf6, 0x0,
    0x2f, 0x60, 0x8f, 0x10, 0x2f, 0x60, 0xd, 0xb0,

    /* U+006C "l" */
    0x2f, 0x60, 0x2f, 0x60, 0x2f, 0x60, 0x2f, 0x60,
    0x2f, 0x60, 0x2f, 0x60, 0x2f, 0x60, 0x2f, 0x60,
    0x1f, 0x92, 0xa, 0xf8,

    /* U+006D "m" */
    0x2f, 0x9c, 0xfd, 0x6b, 0xee, 0x60, 0x2f, 0xc3,
    0x2e, 0xe3, 0x1a, 0xf0, 0x2f, 0x60, 0xb, 0xb0,
    0x5, 0xf2, 0x2f, 0x60, 0xb, 0xb0, 0x5, 0xf2,
    0x2f, 0x60, 0xb, 0xb0, 0x5, 0xf2, 0x2f, 0x60,
    0xb, 0xb0, 0x5, 0xf2, 0x2f, 0x60, 0xb, 0xb0,
    0x5, 0xf2,

    /* U+006E "n" */
    0x2f, 0x9c, 0xfe, 0x60, 0x2f, 0xc3, 0x19, 0xf1,
    0x2f, 0x60, 0x4, 0xf3, 0x2f, 0x60, 0x4, 0xf4,
    0x2f, 0x60, 0x4, 0xf4, 0x2f, 0x60, 0x4, 0xf4,
    0x2f, 0x60, 0x4, 0xf4,

    /* U+006F "o" */
    0x2, 0xbe, 0xeb, 0x30, 0xd, 0xe6, 0x6d, 0xe1,
    0x4f, 0x40, 0x2, 0xf6, 0x5f, 0x20, 0x0, 0xf7,
    0x4f, 0x40, 0x2, 0xf6, 0xd, 0xd6, 0x6c, 0xf1,
    0x2, 0xbe, 0xfc, 0x30,

    /* U+0070 "p" */
    0x2f, 0x9d, 0xfd, 0x50, 0x2f, 0xb2, 0x19, 0xf3,
    0x2f, 0x60, 0x1, 0xf7, 0x2f, 0x60, 0x0, 0xf8,
    0x2f, 0x60, 0x3, 0xf6, 0x2f, 0xc4, 0x4c, 0xf1,
    0x2f, 0xbd, 0xfc, 0x40, 0x2f, 0x60, 0x0, 0x0,
    0x2f, 0x60, 0x0, 0x0, 0x2f, 0x60, 0x0, 0x0,

    /* U+0071 "q" */
    0x2, 0xcf, 0xd7, 0xf4, 0x0, 0xdd, 0x44, 0xbf,
    0x40, 0x3f, 0x40, 0x4, 0xf4, 0x5, 0xf2, 0x0,
    0x4f, 0x40, 0x5f, 0x40, 0x4, 0xf4, 0x1, 0xfc,
    0x44, 0xaf, 0x40, 0x3, 0xcf, 0xeb, 0xf4, 0x0,
    0x0, 0x0, 0x4f, 0x40, 0x0, 0x0, 0x3, 0xf5,
    0x0, 0x0, 0x0, 0xe, 0xf9, 0x0, 0x0, 0x0,
    0x2, 0x0,

    /* U+0072 "r" */
    0x0, 0x0, 0x2, 0xf8, 0xcc, 0x2f, 0xe7, 0x22,
    0xf6, 0x0, 0x2f, 0x60, 0x2, 0xf6, 0x0, 0x2f,
    0x60, 0x2, 0xf6, 0x0,

    /* U+0073 "s" */
    0x9, 0xef, 0xe4, 0x4f, 0x85, 0x63, 0x3f, 0x92,
    0x0, 0x6, 0xef, 0xc3, 0x0, 0x4, 0xec, 0x27,
    0x55, 0xdc, 0x2d, 0xff, 0xc3,

    /* U+0074 "t" */
    0x0, 0x0, 0x0, 0x7c, 0x0, 0xb, 0xd0, 0xa,
    0xff, 0xf8, 0x2c, 0xd3, 0x10, 0xbd, 0x0, 0xb,
    0xd0, 0x0, 0xbd, 0x0, 0x9, 0xf4, 0x30, 0x2c,
    0xf9,

    /* U+0075 "u" */
    0x3f, 0x50, 0x5, 0xf3, 0x3f, 0x50, 0x5, 0xf3,
    0x3f, 0x50, 0x5, 0xf3, 0x3f, 0x50, 0x5, 0xf3,
    0x2f, 0x50, 0x5, 0xf3, 0xf, 0xc3, 0x5d, 0xf3,
    0x4, 0xdf, 0xc7, 0xf3,

    /* U+0076 "v" */
    0x3f, 0x50, 0x4, 0xf4, 0xd, 0xb0, 0x9, 0xe0,
    0x7, 0xf1, 0xe, 0x80, 0x1, 0xf6, 0x4f, 0x20,
    0x0, 0xbb, 0xac, 0x0, 0x0, 0x5f, 0xf6, 0x0,
    0x0, 0xe, 0xf1, 0x0,

    /* U+0077 "w" */
    0x4f, 0x30, 0x6e, 0x0, 0xcb, 0xf, 0x70, 0x9f,
    0x20, 0xf7, 0xc, 0xb0, 0xee, 0x73, 0xf3, 0x8,
    0xe3, 0xe6, 0xb7, 0xf0, 0x4, 0xfa, 0x91, 0xfb,
    0xb0, 0x0, 0xff, 0x40, 0xcf, 0x70, 0x0, 0xcf,
    0x0, 0x7f, 0x30,

    /* U+0078 "x" */
    0x2f, 0x80, 0xe, 0xb0, 0x6, 0xf3, 0xae, 0x10,
    0x0, 0xbe, 0xf4, 0x0, 0x0, 0x3f, 0xc0, 0x0,
    0x0, 0xcd, 0xf5, 0x0, 0x8, 0xf2, 0x9f, 0x20,
    0x3f, 0x60, 0xd, 0xc0,

    /* U+0079 "y" */
    0x3f, 0x60, 0x0, 0xbd, 0x0, 0xcc, 0x0, 0x2f,
    0x70, 0x6, 0xf2, 0x8, 0xf1, 0x0, 0xe, 0x80,
    0xea, 0x0, 0x0, 0x9e, 0x5f, 0x40, 0x0, 0x2,
    0xfe, 0xd0, 0x0, 0x0, 0xc, 0xf7, 0x0, 0x0,
    0x0, 0x9f, 0x10, 0x0, 0x4, 0x6f, 0x80, 0x0,
    0x0, 0xcf, 0xa0, 0x0, 0x0,

    /* U+007A "z" */
    0x3f, 0xff, 0xff, 0x11, 0x44, 0x5f, 0xb0, 0x0,
    0xa, 0xe1, 0x0, 0x6, 0xf3, 0x0, 0x2, 0xf7,
    0x0, 0x0, 0xdd, 0x33, 0x30, 0x6f, 0xff, 0xff,
    0x30,

    /* U+007B "{" */
    0x6, 0xfc, 0xb, 0xd2, 0xc, 0xc0, 0xc, 0xc0,
    0xe, 0xb0, 0xaf, 0x40, 0x1e, 0xa0, 0xc, 0xc0,
    0xc, 0xc0, 0xc, 0xd0, 0x8, 0xfc, 0x0, 0x22,

    /* U+007C "|" */
    0x25, 0x6, 0xf2, 0x6f, 0x26, 0xf2, 0x6f, 0x26,
    0xf2, 0x6f, 0x26, 0xf2, 0x6f, 0x26, 0xf2, 0x6f,
    0x26, 0xf2, 0x6f, 0x20,

    /* U+007D "}" */
    0x8f, 0xa0, 0x1b, 0xf0, 0x8, 0xf0, 0x8, 0xf0,
    0x7, 0xf2, 0x1, 0xfe, 0x6, 0xf4, 0x8, 0xf0,
    0x8, 0xf0, 0x9, 0xf0, 0x8f, 0xc0, 0x12, 0x0,

    /* U+007E "~" */
    0x0, 0x10, 0x0, 0x0, 0x3e, 0xfd, 0x62, 0x63,
    0x58, 0x5a, 0xff, 0xf2, 0x0, 0x0, 0x14, 0x10
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 52, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 45, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 76, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 22, .adv_w = 157, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 124, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 115, .adv_w = 163, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 150, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 41, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 204, .adv_w = 73, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 232, .adv_w = 73, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 254, .adv_w = 97, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 269, .adv_w = 106, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 287, .adv_w = 47, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 292, .adv_w = 105, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 301, .adv_w = 40, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 97, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 146, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 71, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 114, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 116, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 122, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 115, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 562, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 594, .adv_w = 132, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 666, .adv_w = 40, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 47, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 687, .adv_w = 122, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 719, .adv_w = 106, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 731, .adv_w = 122, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 763, .adv_w = 111, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 171, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 856, .adv_w = 157, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 901, .adv_w = 141, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 942, .adv_w = 134, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 978, .adv_w = 145, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1019, .adv_w = 123, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1055, .adv_w = 117, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1091, .adv_w = 144, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1132, .adv_w = 146, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1173, .adv_w = 53, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1187, .adv_w = 97, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1214, .adv_w = 140, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1255, .adv_w = 118, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1291, .adv_w = 170, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1336, .adv_w = 149, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1377, .adv_w = 156, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1422, .adv_w = 132, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1458, .adv_w = 156, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1518, .adv_w = 137, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1554, .adv_w = 124, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1590, .adv_w = 127, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1626, .adv_w = 151, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1667, .adv_w = 157, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1712, .adv_w = 195, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1766, .adv_w = 152, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1807, .adv_w = 147, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1848, .adv_w = 129, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1884, .adv_w = 79, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1917, .adv_w = 101, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1950, .adv_w = 79, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1983, .adv_w = 107, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1997, .adv_w = 121, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2004, .adv_w = 58, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 2010, .adv_w = 123, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2035, .adv_w = 130, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2075, .adv_w = 106, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2100, .adv_w = 130, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2140, .adv_w = 120, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2165, .adv_w = 81, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2190, .adv_w = 124, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2230, .adv_w = 129, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2270, .adv_w = 64, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2290, .adv_w = 69, .box_w = 5, .box_h = 14, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 2325, .adv_w = 120, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2365, .adv_w = 63, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2385, .adv_w = 192, .box_w = 12, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2427, .adv_w = 129, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2455, .adv_w = 130, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2483, .adv_w = 130, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2523, .adv_w = 130, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2573, .adv_w = 80, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2593, .adv_w = 104, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2614, .adv_w = 80, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2639, .adv_w = 129, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2667, .adv_w = 129, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2695, .adv_w = 167, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2730, .adv_w = 121, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2758, .adv_w = 134, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2803, .adv_w = 109, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2828, .adv_w = 68, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2852, .adv_w = 44, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2872, .adv_w = 68, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2896, .adv_w = 126, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 4, 5, 0,
    6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 8, 9, 10, 11, 12,
    13, 14, 14, 15, 16, 17, 14, 14,
    10, 18, 10, 19, 20, 21, 22, 23,
    24, 25, 26, 27, 0, 0, 0, 0,
    0, 0, 28, 29, 30, 31, 29, 32,
    33, 34, 35, 36, 37, 38, 34, 34,
    29, 29, 39, 40, 41, 42, 43, 44,
    45, 46, 47, 48, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 2, 0, 3,
    0, 4, 5, 0, 0, 6, 0, 0,
    0, 4, 4, 0, 0, 0, 0, 0,
    0, 0, 7, 8, 9, 8, 8, 8,
    9, 8, 8, 10, 8, 8, 8, 8,
    9, 8, 9, 8, 11, 12, 13, 14,
    15, 16, 17, 18, 0, 0, 0, 0,
    0, 0, 19, 20, 21, 21, 21, 22,
    23, 20, 24, 25, 20, 26, 27, 27,
    21, 27, 21, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, -6, 0, -15, -28, 0,
    -6, -19, 0, 0, 0, 0, 0, 0,
    0, 0, -10, 0, -8, -6, -8, -8,
    -6, 0, -10, -10, -8, -8, -8, -8,
    -8, -10, -10, 0, 0, 0, 0, -10,
    -1, 0, 0, 0, 0, 0, -12, 0,
    -19, 0, 0, -12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, -15, -8, 0, -10, 0, 0, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -19, -4, 0, 0, 0, 0,
    -8, 0, -12, 0, -12, -19, -10, -26,
    -21, -7, -32, -3, -8, 0, -10, -10,
    0, -15, -8, -11, 0, 0, -12, -8,
    -19, -17, -10, -19, -3, -3, -4, 1,
    0, 0, 0, -8, 0, 0, 0, -2,
    -6, 0, -15, -6, -12, -17, -4, 0,
    0, 0, 0, 0, -3, -3, 0, 0,
    0, 0, 0, -8, -6, -8, -8, -3,
    0, 0, 0, 0, 0, 0, -9, 0,
    -4, 0, -4, 0, 0, -7, 0, -3,
    -6, 0, 0, 0, -1, 0, 0, 0,
    -3, 0, 0, 3, 0, 0, -3, -3,
    -8, -3, 0, -3, -17, 0, 0, 0,
    0, -12, 0, 0, -7, -4, -2, 0,
    -9, -9, -15, -19, 0, -3, 0, 0,
    0, 0, -6, -8, 0, 0, -1, 0,
    0, -2, 0, -10, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    -4, 0, 0, -3, 0, -6, 0, 0,
    -4, 0, -4, 0, 0, -3, -6, 0,
    0, 0, 1, 0, -11, -8, -6, -6,
    0, 0, -28, 0, 0, 0, 0, -18,
    0, 0, -7, -7, 0, 0, 0, -1,
    -6, -6, -3, -12, 0, -9, -4, -8,
    -3, -3, 0, -8, -8, -6, -8, -15,
    -10, -17, -12, -9, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 0, -10, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, -8, 0, 0, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, -4, -4,
    0, 0, 0, 0, 0, 0, -6, 0,
    0, 0, 0, 0, 0, -3, -6, -6,
    -8, 0, 0, -10, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, -3, -3, 0,
    0, 0, 0, -10, 0, -15, 0, -8,
    -8, -11, -8, -7, -8, -8, -1, -8,
    -2, -15, -10, -3, -10, -12, -6, -6,
    -6, -15, -12, -19, -19, -15, -19, -6,
    -10, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, -29, 0, -35, -13, -6,
    -37, 0, 0, 0, -6, -6, 0, -8,
    0, 0, 0, 0, -6, 0, -19, -12,
    0, -19, 0, 0, -24, -11, 0, 0,
    0, -18, 0, 0, -16, 0, 0, 0,
    -10, -8, -12, -10, 0, -4, 0, 0,
    0, 0, 1, -3, 0, 0, 0, 0,
    0, -3, -10, -3, 0, 0, 0, -8,
    0, 0, 0, 0, -10, 0, -3, -4,
    0, 0, 0, -15, -7, -6, -15, 0,
    -10, 0, -3, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, -3, -7, -6,
    0, -3, 0, 0, 0, 0, 0, -12,
    0, 0, -7, -7, -9, 0, -15, -7,
    -12, -17, -7, -3, 0, 0, -1, 0,
    -6, 0, 0, 0, -3, -3, -1, -10,
    -6, -10, -10, 0, 0, -21, 0, 0,
    0, 0, -19, 0, -2, -13, -7, 0,
    0, 0, -3, -6, -2, -3, -21, 0,
    -21, -8, -17, -11, -10, -3, -19, -21,
    -10, -15, -24, -26, -26, -28, -26, 0,
    0, 0, 0, 0, 0, -10, 0, 0,
    0, 0, 0, 0, 0, 0, -8, -8,
    -6, -1, 0, 0, 0, 0, -3, -3,
    0, 0, -1, 0, -3, -6, -6, -10,
    -6, -3, -3, -28, 0, 0, 0, 0,
    -30, -3, -9, -22, -10, 0, -4, 0,
    -8, -6, -8, -6, -21, -3, -20, -10,
    -18, -10, -15, -3, -13, -17, -12, -10,
    -21, -21, -24, -19, -15, 0, -21, 0,
    0, 0, 0, -21, 0, -9, -13, -7,
    -3, 0, -8, -3, -8, -8, -6, -17,
    -8, -17, -10, -12, -10, -15, 0, -8,
    -15, -6, -12, -15, -15, -15, -15, -15,
    0, -10, 0, 0, 0, 0, -7, -4,
    -15, -12, -10, 0, -6, -6, -8, 0,
    -8, -8, -10, 0, -15, -10, -7, -19,
    0, -6, -6, -6, -15, -10, -19, -19,
    -10, -19, -10, -4, -30, 0, 0, 0,
    0, -32, -4, -19, -27, -15, -6, 0,
    -8, -8, -8, -8, -8, -30, -6, -21,
    -12, -21, -15, -17, -4, -18, -21, -15,
    -21, -24, -24, -24, -24, -24, 0, 0,
    0, 0, 0, 0, -6, 0, 0, 0,
    -2, 0, 0, -6, -8, -8, -6, -3,
    0, 0, 0, -1, 0, -4, -7, 0,
    0, 0, -1, 0, -8, -8, -3, -10,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -15, 0, -17, -8,
    0, -26, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -10,
    -6, -6, -10, 0, 0, -10, 0, 0,
    0, 0, -15, 0, -3, 0, 0, -21,
    0, -21, -17, -15, -21, -6, 0, 0,
    0, 0, 0, -4, -6, 0, 0, -1,
    0, 0, -12, -10, -10, -12, -4, 0,
    -3, 0, 0, 0, 0, -1, 0, 0,
    0, 0, -4, 0, -8, -1, -9, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -6, -6, -6,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, -8, 0, -1, 0, -2, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    -6, -6, -8, -6, 0, 0, -24, 0,
    0, 0, 0, -17, 0, 0, -19, 0,
    0, 0, 0, -6, 0, 0, 0, -12,
    0, -8, -9, -10, -12, -8, 0, -6,
    -2, -7, 0, -11, -4, -15, -11, -4,
    0, -8, 0, 0, 0, 0, 0, 0,
    -4, -8, -4, -21, -3, -8, -10, -17,
    -19, -8, -9, 0, -2, 0, -3, -6,
    -6, 0, -6, -6, 0, 0, -4, -4,
    -10, -10, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -24, 0,
    -17, -8, -6, -19, 0, -3, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, -6, 0, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, -8, -6, -12, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, -7,
    0, -8, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, -10,
    0, 0, -7, 0, 0, -10, 0, 0,
    0, 0, -6, -9, -9, -10, -8, -19,
    0, -19, -10, 0, -15, -10, -12, 0,
    -15, -8, -8, -12, -15, -7, 0, -8,
    -8, -6, -15, -10, -10, -10, -6, -6,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, -6, 0, -8, -10, -6, -10,
    0, 0, 0, 0, -8, 0, -8, -12,
    -6, 0, 0, -6, -6, -15, -10, -10,
    -15, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, -13, 0, -13,
    -7, -7, -16, 0, 0, 0, -2, 0,
    0, -4, 4, 0, 0, 0, 0, 0,
    -9, 0, -4, 0, 0, 0, -21, 0,
    0, 0, 0, -15, 0, 0, -19, 0,
    -17, 0, -12, -8, -8, -15, -8, -7,
    0, -4, 0, 0, 0, -8, 0, 0,
    -1, 0, 0, -8, -8, -8, -8, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, -19, 0, -17, -10, -12,
    -24, 0, -3, 0, -3, -6, 0, 0,
    0, 0, 0, -6, -3, 0, -10, -10,
    -10, -10, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -15, -12, -10, -17, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, -4, -4, -6, -10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, -12, -10, 0, -21, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, -6, -8, -8,
    0, 0, -21, 0, 0, 0, 0, -19,
    -3, -2, -17, 0, -12, -6, -21, -15,
    -19, -24, -15, -10, 0, -12, -8, -15,
    -8, -12, 0, -6, -15, -1, -6, -6,
    -10, -10, -10, -10, 0, -21, 0, 0,
    0, 0, -15, 0, -1, -10, 0, -19,
    -3, -19, -15, -17, -21, -6, -10, 0,
    -10, -4, -6, -8, -12, 0, -6, -10,
    -4, -6, -6, -8, -15, -10, -6, 0,
    -6, 0, 0, 0, 0, -10, -8, -10,
    -15, -3, -26, -10, -24, -15, -10, -24,
    -10, -10, 0, -10, 0, -10, -8, 0,
    0, 0, -10, -6, -8, -10, -10, -6,
    -8, -8, 0, -17, 0, 0, 0, 0,
    -17, 0, -4, -21, -1, -21, -1, -17,
    -12, -19, -24, -10, -15, 0, -10, -3,
    -10, -6, -8, 0, 0, -10, 0, -3,
    -10, -6, -8, -6, -3, 0, -1, 0,
    0, 0, 0, -3, 0, 0, -1, 0,
    -15, -1, -15, -8, -15, -26, 0, -4,
    0, -4, 0, -6, 0, -4, 0, 0,
    -3, 0, -3, -8, -6, -8, -8, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 48,
    .right_class_cnt     = 35,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t kanit_14 = {
#else
lv_font_t kanit_14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 15,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if KANIT_14*/

