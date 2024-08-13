#ifdef __has_include
#if __has_include("lvgl.h")
#ifndef LV_LVGL_H_INCLUDE_SIMPLE
#define LV_LVGL_H_INCLUDE_SIMPLE
#endif
#endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_SLEEPBERT
#define LV_ATTRIBUTE_IMG_SLEEPBERT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SLEEPBERT uint8_t
    sleepbert_map[] = {
#if CONFIG_NICE_PERI_VIEW_DISPLAY_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

#if CONFIG_KUNIBOARD_CUSTOM_DISPLAY_ROTATE_CLOCKWISE
        0x02, 0xaa, 0x2a, 0x0a, 0xa2, 0xa8, 0x88, 0xa8, 0x8a, 0xa2, 0xa2, 0x80, 0xaf, 0xff, 0xea,
        0x8b, 0x0c, 0x00, 0x00, 0x40, 0x74, 0x55, 0x00, 0x05, 0x04, 0x15, 0x54, 0x00, 0x11, 0x54,
        0x04, 0x45, 0x1c, 0xfc, 0xf4, 0x55, 0x06, 0x00, 0x19, 0xc0, 0xce, 0x20, 0xaa, 0xa2, 0x00,
        0x88, 0x0a, 0x80, 0x08, 0x20, 0x82, 0x02, 0x1c, 0xf1, 0x3a, 0x8b, 0x03, 0x00, 0x3f, 0x80,
        0x55, 0x50, 0x01, 0x00, 0x04, 0x10, 0x01, 0x54, 0x00, 0x05, 0x50, 0x50, 0x7e, 0x7f, 0x9d,
        0x41, 0x01, 0xc3, 0xfd, 0xc0, 0xa0, 0xa2, 0x0a, 0x8a, 0x0a, 0x00, 0xa8, 0x08, 0x00, 0x22,
        0x22, 0x88, 0xff, 0x6f, 0xfe, 0xab, 0x00, 0x3f, 0xea, 0xc0, 0x14, 0x65, 0x55, 0x15, 0x55,
        0x15, 0x55, 0x44, 0x54, 0x04, 0x05, 0x47, 0xff, 0x9f, 0x57, 0x55, 0x80, 0x0f, 0x51, 0x40,
        0x88, 0xe8, 0x8a, 0x00, 0x80, 0xb8, 0xae, 0xea, 0x82, 0x22, 0xa0, 0x27, 0xee, 0xba, 0xab,
        0xea, 0x80, 0x06, 0xa0, 0xe0, 0x44, 0xf4, 0x11, 0x41, 0x55, 0x47, 0x77, 0x74, 0x45, 0x00,
        0x01, 0x07, 0xf3, 0x75, 0x15, 0x7f, 0xc0, 0x05, 0x04, 0x58, 0x42, 0x22, 0x02, 0x22, 0xab,
        0xab, 0xf2, 0xae, 0xa8, 0x82, 0x02, 0x03, 0xe7, 0x68, 0x8a, 0xff, 0xf0, 0x0c, 0x0a, 0x8f,
        0x53, 0x94, 0x05, 0x14, 0x05, 0x55, 0xfd, 0x5f, 0x41, 0x44, 0x54, 0x51, 0x75, 0xd1, 0x55,
        0xf0, 0x30, 0x0c, 0x54, 0x5f, 0xea, 0xc0, 0xa8, 0xa0, 0xaf, 0xff, 0xbf, 0xff, 0xa8, 0x02,
        0x02, 0xa3, 0xbd, 0xaa, 0x8b, 0xc0, 0x1e, 0x1a, 0x28, 0xf0, 0x93, 0x55, 0x04, 0x47, 0x57,
        0xff, 0xdf, 0x75, 0x41, 0x53, 0x54, 0x55, 0x3f, 0xf5, 0x47, 0x80, 0x03, 0xf5, 0x15, 0xc0,
        0xca, 0x68, 0xa8, 0x2b, 0xff, 0xe7, 0xff, 0xf4, 0xe2, 0x02, 0x6e, 0x39, 0x2f, 0xfe, 0x2e,
        0x00, 0x07, 0xff, 0x8b, 0x80, 0x4d, 0x54, 0x15, 0x5f, 0x7f, 0xf0, 0x7b, 0xe4, 0xc4, 0x1c,
        0x06, 0x39, 0xdf, 0xff, 0x57, 0x00, 0x38, 0x1d, 0xff, 0x00, 0x8e, 0x00, 0xa0, 0xbe, 0xaf,
        0xdf, 0x0a, 0x64, 0xbf, 0xf9, 0xf3, 0x3e, 0xf7, 0x7f, 0xeb, 0x80, 0xe0, 0x30, 0x02, 0x00,
        0x57, 0xd5, 0x04, 0x57, 0x5f, 0x4d, 0xc9, 0x0c, 0xc7, 0x27, 0x78, 0x1d, 0xe7, 0xe6, 0xfd,
        0xe1, 0x80, 0x70, 0x06, 0x00, 0x2a, 0x88, 0xa8, 0xaf, 0xff, 0x26, 0x69, 0x08, 0xee, 0xf8,
        0x87, 0xf8, 0xf2, 0x7f, 0xea, 0xf3, 0x00, 0x18, 0x03, 0x00, 0x40, 0x11, 0x55, 0x7f, 0xff,
        0xb3, 0x09, 0x08, 0xfd, 0x78, 0x75, 0x57, 0xb7, 0xff, 0x54, 0x7f, 0x00, 0x0e, 0x07, 0x80,
        0xba, 0xe2, 0x2a, 0xff, 0x1d, 0x93, 0x00, 0x10, 0xaf, 0xaa, 0xeb, 0xee, 0xdf, 0x3a, 0xa0,
        0x3c, 0x00, 0x01, 0xff, 0xe0, 0x58, 0x50, 0x05, 0x7f, 0xe3, 0x00, 0x00, 0x31, 0x5f, 0xdf,
        0x77, 0xfe, 0xc0, 0x75, 0x45, 0x17, 0xe0, 0x00, 0x18, 0x3f, 0x8f, 0xba, 0x2a, 0xbd, 0xb0,
        0x00, 0x00, 0x01, 0xfb, 0xee, 0xff, 0xee, 0xc7, 0xea, 0x8a, 0xbf, 0xf0, 0x01, 0xf0, 0x00,
        0x47, 0x4d, 0x75, 0xfe, 0x8c, 0x00, 0x00, 0x03, 0xdf, 0xff, 0xff, 0xff, 0xdf, 0xd5, 0x41,
        0x7c, 0xf0, 0x0f, 0xc0, 0x00, 0x22, 0x28, 0xaa, 0xbf, 0xc6, 0x00, 0x00, 0x03, 0xf8, 0x00,
        0x00, 0x03, 0xf7, 0xa8, 0xaa, 0xf8, 0x1f, 0xff, 0x80, 0x00, 0x57, 0xd1, 0x57, 0x7f, 0x61,
        0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x01, 0xff, 0x45, 0x15, 0xe0, 0x00, 0x37, 0xc0, 0x00,
        0xeb, 0x9a, 0xae, 0xaf, 0x30, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0xff, 0xaa, 0xab,
        0xc0, 0x00, 0x6b, 0x80, 0x04, 0xdc, 0x11, 0x5f, 0xff, 0x10, 0x00, 0x60, 0x03, 0xe8, 0x00,
        0x00, 0x00, 0x1f, 0xd5, 0x57, 0x80, 0x00, 0x75, 0x40, 0x18, 0xfa, 0xc8, 0xbf, 0xff, 0x18,
        0x00, 0x0f, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x03, 0xfa, 0xaf, 0x00, 0x00, 0xe3, 0x80, 0xfa,
        0xd5, 0x5d, 0x55, 0xf9, 0xe0, 0x01, 0x85, 0x80, 0xdc, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfe,
        0x00, 0x05, 0xd5, 0xff, 0x54, 0xa6, 0x6e, 0xef, 0xee, 0x60, 0x00, 0xc4, 0x83, 0xfe, 0x00,
        0x00, 0x00, 0x0f, 0x7f, 0xff, 0x00, 0x0f, 0xaa, 0xaa, 0x82, 0x05, 0x4d, 0x5f, 0xe3, 0x20,
        0x06, 0x65, 0x81, 0x06, 0x02, 0x00, 0x00, 0x0d, 0xd0, 0xf5, 0xf0, 0x1f, 0xc0, 0x41, 0x10,
        0x2e, 0x0f, 0xef, 0xc1, 0x00, 0x02, 0x20, 0xc1, 0x80, 0x03, 0x00, 0x00, 0x1f, 0xbe, 0xea,
        0xaf, 0xff, 0x8a, 0x2a, 0xa8, 0x7e, 0x7d, 0x5f, 0x00, 0x00, 0x00, 0x20, 0x46, 0x80, 0x03,
        0x80, 0x00, 0x7b, 0x3a, 0xd4, 0x45, 0x7f, 0xd5, 0x05, 0x14, 0x38, 0xfa, 0xbc, 0x00, 0x00,
        0x00, 0x00, 0x03, 0x80, 0x01, 0xc0, 0x00, 0x7c, 0x87, 0xa8, 0x22, 0xf6, 0x82, 0x22, 0xa0,
        0x0d, 0x5d, 0xf0, 0xf8, 0x00, 0x0c, 0x03, 0x81, 0xc0, 0x60, 0xe0, 0x00, 0x0f, 0xbf, 0xd1,
        0x55, 0xc3, 0x55, 0x55, 0x5c, 0x86, 0x2b, 0xff, 0x80, 0x00, 0x06, 0xc8, 0x8e, 0xc0, 0x60,
        0x70, 0x00, 0x01, 0xff, 0xa2, 0x8b, 0x81, 0xaa, 0xac, 0xe0, 0x5e, 0x57, 0x00, 0x00, 0x00,
        0x06, 0x4c, 0x8b, 0xc0, 0x30, 0x38, 0x00, 0x00, 0x3f, 0x50, 0x57, 0x00, 0x7f, 0xfb, 0x80,
        0x0f, 0xaf, 0xe0, 0x00, 0x00, 0x02, 0x04, 0x08, 0xc7, 0xfe, 0x18, 0x00, 0x00, 0x0e, 0x82,
        0xae, 0x00, 0x0f, 0x06, 0x00, 0xc4, 0x15, 0xff, 0xe0, 0x0a, 0x00, 0x04, 0x08, 0x0f, 0xff,
        0xfc, 0x00, 0x00, 0x1f, 0x55, 0x5c, 0x00, 0x1c, 0x0c, 0x00, 0x8c, 0xaa, 0xe0, 0x20, 0x0e,
        0xd8, 0xe0, 0x30, 0x0e, 0x19, 0xf8, 0x00, 0x00, 0x3f, 0xfa, 0xb8, 0x00, 0x38, 0x18, 0x00,
        0x8d, 0x57, 0xf0, 0x00, 0x04, 0x8c, 0xf8, 0x30, 0x07, 0x0c, 0x00, 0x00, 0x00, 0x73, 0xff,
        0x70, 0x00, 0x20, 0x30, 0x00, 0xae, 0x2e, 0xf8, 0x08, 0x06, 0xc4, 0x0b, 0x30, 0x03, 0x8c,
        0x00, 0x00, 0x00, 0xf2, 0x7f, 0xfc, 0x00, 0x60, 0x60, 0x00, 0x5d, 0x7f, 0x00, 0xf0, 0x06,
        0x66, 0xc3, 0xe0, 0x03, 0x80, 0x00, 0x00, 0x01, 0xe6, 0x0f, 0x7c, 0x01, 0xc0, 0x38, 0x07,
        0x3a, 0xbc, 0x07, 0x80, 0x07, 0x30, 0x66, 0x40, 0x01, 0xc0, 0x30, 0x00, 0x01, 0xed, 0xfe,
        0xaf, 0xff, 0x80, 0x0f, 0xf8, 0xa0, 0x7f, 0xfc, 0x00, 0x03, 0x94, 0x04, 0x00, 0x00, 0xe0,
        0x38, 0x00, 0x03, 0xcc, 0xfd, 0x55, 0x55, 0x00, 0x03, 0x80, 0xba, 0x3b, 0xe0, 0x00, 0x03,
        0xdc, 0x04, 0x00, 0x00, 0x63, 0x1c, 0x00, 0x03, 0xcc, 0x3a, 0xaa, 0xaf, 0x00, 0x07, 0x00,
        0x57, 0x5f, 0x20, 0x30, 0x00, 0xc0, 0x0c, 0x00, 0x00, 0x43, 0x8c, 0x00, 0x00, 0xf9, 0xf0,
        0x05, 0x7f, 0x00, 0x0f, 0x00, 0x2e, 0x3f, 0xa0, 0xe0, 0x00, 0x62, 0x08, 0x00, 0x00, 0x11,
        0xfe, 0x00, 0x00, 0x7f, 0xe0, 0x8a, 0xe9, 0xe0, 0x2e, 0x00, 0x05, 0x77, 0xe3, 0x00, 0x00,
        0x03, 0x38, 0x00, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x1f, 0xe5, 0x05, 0xc0, 0x7e, 0x76, 0x00,
        0x38, 0xbb, 0x8e, 0x00, 0x00, 0x03, 0x70, 0x00, 0x00, 0x1f, 0x60, 0x00, 0x00, 0x03, 0xff,
        0xab, 0x80, 0x6b, 0xaa, 0x00, 0x44, 0x77, 0x8c, 0xc8, 0x00, 0x05, 0x60, 0x00, 0x00, 0x1c,
        0x70, 0x00, 0x00, 0x01, 0xff, 0xf1, 0x00, 0x94, 0x56, 0x00, 0x8a, 0xef, 0x39, 0x88, 0x00,
        0x65, 0x60, 0x00, 0x00, 0x0e, 0x30, 0x00, 0x00, 0x03, 0xbf, 0xfe, 0x01, 0xaa, 0xae, 0x00,
        0x55, 0x5f, 0xe7, 0x08, 0x06, 0x6d, 0xc0, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0xa4,
        0xff, 0x01, 0x40, 0x4c, 0x00, 0xaa, 0x2f, 0xff, 0x18, 0xc6, 0x58, 0x80, 0x00, 0x00, 0x03,
        0x81, 0x80, 0x00, 0x0f, 0xe3, 0xa4, 0x02, 0x8a, 0x2c, 0x01, 0x44, 0x5f, 0xc7, 0x30, 0x8e,
        0xd0, 0x00, 0x00, 0x00, 0x01, 0xc1, 0x80, 0x00, 0x0e, 0x4f, 0x5e, 0x03, 0x54, 0x5c, 0x03,
        0x8e, 0xeb, 0xfe, 0x29, 0x8a, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x8d, 0xc0, 0x00, 0x1f, 0xfe,
        0x8f, 0xfe, 0x20, 0xbc, 0x07, 0xd6, 0x75, 0x7c, 0x79, 0x1a, 0xc0, 0x00, 0x00, 0x00, 0x00,
        0x0c, 0xc0, 0x00, 0x1e, 0x3d, 0x15, 0x5d, 0x55, 0x7c, 0x07, 0xa2, 0xaa, 0xbd, 0xfe, 0x33,
        0x80, 0x00, 0x00, 0x00, 0x00, 0x06, 0xc0, 0x00, 0x0f, 0x9a, 0xaa, 0x26, 0x2a, 0xec, 0x0e,
        0x05, 0x4d, 0x5f, 0xfc, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x60, 0x00, 0x0f, 0xed,
        0x44, 0x5d, 0x53, 0xdc, 0x1d, 0xa8, 0xce, 0xab, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x3f, 0xe0, 0x00, 0x01, 0xfe, 0xa8, 0xff, 0xfc, 0xac, 0x3e, 0x54, 0x76, 0x45, 0xfc, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0xc0, 0x00, 0x00, 0x7f, 0xd5, 0xd7, 0x54, 0x5c, 0x75,
        0xb8, 0xf9, 0xc2, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x1f,
        0xfb, 0xee, 0x8a, 0x8d, 0xee, 0x05, 0xb1, 0x74, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x19, 0x80, 0x00, 0x00, 0x1d, 0x57, 0x9d, 0x55, 0x1f, 0xd5, 0x8e, 0xba, 0x32, 0xe0, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x80, 0x00, 0x00, 0x3a, 0xaa, 0x2a, 0xaa, 0xbe, 0xae,
        0x5f, 0x01, 0x5f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x75,
        0x07, 0x1d, 0x04, 0x74, 0x5d, 0x9e, 0xa0, 0xad, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x01, 0xea, 0x0e, 0x8e, 0xaa, 0xe8, 0xaa, 0x59, 0x36, 0x7d, 0xe0, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x44, 0x55, 0x43, 0xd7, 0xd5, 0x5d,
        0x08, 0xb2, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xa2,
        0xae, 0xa8, 0xfa, 0xe8, 0xba, 0x07, 0x10, 0x34, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x01, 0xc5, 0x5d, 0x55, 0x55, 0x75, 0x75,
#else
        0xae, 0xae, 0xaa, 0xaa, 0xba, 0xa3, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x02, 0x2c, 0x08, 0xe0, 0x5d, 0x17, 0x5f, 0x15, 0x75, 0x45, 0xc0, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x4d, 0x10, 0xba, 0xab, 0xeb, 0xc2, 0xaa,
        0x22, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xbe, 0x6c, 0x9a,
        0x55, 0x17, 0x55, 0x71, 0x70, 0x57, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x05, 0xb5, 0x05, 0x79, 0xba, 0x2e, 0x20, 0xb8, 0xe0, 0xae, 0x00, 0x00, 0x00, 0x30,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfa, 0x80, 0xfa, 0x75, 0x7d, 0x55, 0x54, 0x55,
        0x5c, 0x00, 0x00, 0x01, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x4c, 0x5d, 0x71,
        0xab, 0xf8, 0xaa, 0xb9, 0xea, 0xb8, 0x00, 0x00, 0x01, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x07, 0x2e, 0x8d, 0xa0, 0x77, 0xb1, 0x51, 0x77, 0xdf, 0xf8, 0x00, 0x00, 0x00, 0xcc,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x43, 0x9f, 0x1d, 0xae, 0x3a, 0x2a, 0xeb, 0xab,
        0xfe, 0x00, 0x00, 0x03, 0xec, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xa2, 0x6e, 0x2a,
        0x7c, 0x35, 0x3f, 0xff, 0x15, 0x7f, 0x80, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xfd, 0xd5, 0x73, 0x15, 0xb8, 0x3b, 0xca, 0xba, 0x22, 0xb7, 0xf0, 0x00, 0x06, 0x7c,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x3f, 0xfa, 0xb2, 0xa0, 0x70, 0x37, 0x54, 0x64, 0x55,
        0x59, 0xf0, 0x00, 0x03, 0x60, 0x00, 0x00, 0x00, 0x00, 0x01, 0xcc, 0x7f, 0xbd, 0x55, 0x45,
        0xe0, 0x3e, 0xaa, 0xba, 0xa8, 0xbc, 0x78, 0x00, 0x03, 0x30, 0x00, 0x00, 0x00, 0x00, 0x03,
        0x58, 0x9e, 0x3e, 0xae, 0x6b, 0xe0, 0x3d, 0x04, 0x7f, 0xf1, 0x7f, 0xf8, 0x00, 0x03, 0xb1,
        0x00, 0x00, 0x00, 0x00, 0x07, 0x51, 0x94, 0x7f, 0xd7, 0x71, 0xc0, 0x3a, 0x2a, 0xc0, 0x7a,
        0xf2, 0x70, 0x00, 0x01, 0x83, 0x80, 0x00, 0x00, 0x00, 0x0b, 0x71, 0x0c, 0xe3, 0xfa, 0x22,
        0x80, 0x34, 0x51, 0x40, 0x25, 0xc7, 0xf0, 0x00, 0x01, 0x81, 0xc0, 0x00, 0x00, 0x01, 0x1a,
        0x63, 0x18, 0xff, 0xf4, 0x55, 0x00, 0x32, 0x02, 0x80, 0xff, 0x25, 0xe0, 0x00, 0x00, 0x00,
        0xe0, 0x00, 0x00, 0x03, 0xb6, 0x60, 0x10, 0xe7, 0xfa, 0xaa, 0x00, 0x75, 0x55, 0x80, 0x7f,
        0xfd, 0xc0, 0x00, 0x00, 0x0c, 0x70, 0x00, 0x00, 0x06, 0xa6, 0x00, 0x11, 0x9c, 0xf7, 0x51,
        0x00, 0x6a, 0x29, 0x00, 0x8f, 0xff, 0x80, 0x00, 0x00, 0x0e, 0x38, 0x00, 0x00, 0x06, 0xa0,
        0x00, 0x13, 0x31, 0xee, 0x22, 0x00, 0x55, 0xd6, 0x01, 0xd5, 0xff, 0xc0, 0x00, 0x00, 0x06,
        0xf8, 0x00, 0x00, 0x0e, 0xc0, 0x00, 0x00, 0x71, 0xdd, 0x1c, 0x00, 0x6e, 0x7e, 0x03, 0xa0,
        0xa7, 0xf8, 0x00, 0x00, 0x7f, 0xf8, 0x00, 0x00, 0x1c, 0xc0, 0x00, 0x00, 0xc7, 0xee, 0xa0,
        0x00, 0x74, 0x07, 0x97, 0x51, 0x07, 0xfe, 0x00, 0x00, 0x7f, 0x88, 0x00, 0x00, 0x10, 0x46,
        0x00, 0x07, 0x05, 0xfc, 0x74, 0x00, 0xf0, 0x00, 0xfe, 0xa0, 0x0f, 0x9f, 0x00, 0x00, 0x31,
        0xc2, 0x00, 0x00, 0x30, 0x03, 0x00, 0x0c, 0x04, 0xfa, 0xea, 0x00, 0xe0, 0x00, 0xf5, 0x55,
        0x5c, 0x33, 0xc0, 0x00, 0x38, 0xc6, 0x00, 0x00, 0x20, 0x3b, 0xc0, 0x00, 0x07, 0xdc, 0x5d,
        0x01, 0xc0, 0x00, 0xaa, 0xaa, 0xbf, 0x33, 0xc0, 0x00, 0x1c, 0x07, 0x00, 0x00, 0x20, 0x29,
        0xc0, 0x00, 0x3f, 0xfe, 0x05, 0x1f, 0xf0, 0x01, 0xff, 0xf5, 0x7f, 0xb7, 0x80, 0x00, 0x0c,
        0x03, 0x80, 0x02, 0x66, 0x0c, 0xe0, 0x01, 0xe0, 0x3d, 0x5c, 0xe0, 0x1c, 0x03, 0x80, 0x3e,
        0xf0, 0x67, 0x80, 0x00, 0x00, 0x01, 0xc0, 0x07, 0xc3, 0x66, 0x60, 0x0f, 0x00, 0xfe, 0xba,
        0x00, 0x06, 0x06, 0x00, 0x3f, 0xfe, 0x4f, 0x00, 0x00, 0x00, 0x31, 0xc0, 0x0c, 0xd0, 0x23,
        0x60, 0x10, 0x1f, 0x74, 0x75, 0x00, 0x0c, 0x04, 0x00, 0x0e, 0xff, 0xce, 0x00, 0x00, 0x00,
        0x30, 0xe0, 0x0c, 0x1f, 0x31, 0x20, 0x00, 0x0f, 0xea, 0xb1, 0x00, 0x18, 0x1c, 0x00, 0x1d,
        0x5f, 0xfc, 0x00, 0x00, 0x1f, 0x98, 0x70, 0x0c, 0x07, 0x1b, 0x70, 0x04, 0x07, 0x55, 0x31,
        0x00, 0x30, 0x38, 0x00, 0x3a, 0xaa, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xf0, 0x10, 0x20, 0x00,
        0x50, 0x07, 0xff, 0xa8, 0x23, 0x00, 0x60, 0xf0, 0x00, 0x75, 0x41, 0x70, 0x00, 0x00, 0x18,
        0x7f, 0xe3, 0x10, 0x20, 0x40, 0x00, 0x00, 0x07, 0xf5, 0xf0, 0x01, 0xdf, 0xfe, 0x00, 0xea,
        0x0a, 0xfc, 0x00, 0x00, 0x1c, 0x0c, 0x03, 0xd1, 0x32, 0x60, 0x00, 0x00, 0x00, 0xea, 0x7a,
        0x07, 0x35, 0x55, 0x81, 0xd1, 0x45, 0xff, 0x80, 0x00, 0x0e, 0x06, 0x03, 0x71, 0x13, 0x60,
        0x00, 0x01, 0xff, 0xd4, 0x61, 0x3a, 0xaa, 0xaa, 0xc3, 0xaa, 0x8b, 0xfd, 0xf0, 0x00, 0x07,
        0x06, 0x03, 0x81, 0xc0, 0x30, 0x00, 0x1f, 0x0f, 0xba, 0xb0, 0x05, 0x44, 0x41, 0x6f, 0x44,
        0x15, 0xe1, 0x3e, 0x00, 0x03, 0x80, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x3d, 0x5f, 0x1c,
        0x28, 0xa0, 0xab, 0xfe, 0xa2, 0x2b, 0x5c, 0xde, 0x00, 0x01, 0xc0, 0x01, 0x62, 0x04, 0x00,
        0x00, 0x00, 0xfa, 0xbe, 0x7e, 0x15, 0x54, 0x51, 0xff, 0xf5, 0x57, 0x7d, 0xf8, 0x00, 0x00,
        0xc0, 0x01, 0x83, 0x04, 0x40, 0x00, 0x83, 0xf7, 0xf0, 0x74, 0x08, 0x82, 0x03, 0xf8, 0x0f,
        0xaf, 0x0b, 0xb0, 0x00, 0x00, 0x40, 0x60, 0x81, 0xa6, 0x60, 0x04, 0xc7, 0xfa, 0xb2, 0xa0,
        0x41, 0x55, 0x55, 0xf0, 0x00, 0xff, 0xfe, 0xf0, 0x00, 0x00, 0x00, 0x7f, 0xc1, 0x23, 0x00,
        0x06, 0x77, 0xf7, 0x76, 0x65, 0x2a, 0xff, 0xab, 0xa0, 0x00, 0x7f, 0xff, 0xe0, 0x00, 0x00,
        0x00, 0x3b, 0x01, 0xa1, 0x80, 0x07, 0x9f, 0xaa, 0xba, 0xab, 0x5f, 0x01, 0xc7, 0x00, 0x00,
        0xf5, 0x5f, 0xc0, 0x00, 0x00, 0x00, 0x3c, 0x00, 0xf0, 0x00, 0x18, 0xff, 0xfd, 0x13, 0x5f,
        0x18, 0x02, 0xae, 0x00, 0x01, 0xea, 0xab, 0xf8, 0x00, 0x00, 0x00, 0x17, 0xc0, 0x06, 0x00,
        0x08, 0xff, 0xfa, 0x88, 0x3b, 0x20, 0x01, 0xd6, 0x00, 0x03, 0xd5, 0x55, 0xff, 0x00, 0x00,
        0x00, 0x18, 0x00, 0x00, 0x00, 0x0c, 0xf5, 0x75, 0x59, 0xd7, 0x00, 0x03, 0xec, 0x00, 0x07,
        0xa8, 0xa2, 0xff, 0x80, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x86, 0xfe, 0xea, 0x8b, 0xea,
        0x00, 0x01, 0xff, 0xf8, 0x1f, 0x55, 0x15, 0xef, 0xc0, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00,
        0x63, 0xfd, 0x55, 0x14, 0x44, 0x00, 0x03, 0xf0, 0x0f, 0x3e, 0x82, 0xab, 0xfb, 0xff, 0xff,
        0xff, 0xfb, 0xc0, 0x00, 0x00, 0x31, 0x7f, 0xae, 0xb2, 0xe2, 0x00, 0x0f, 0x80, 0x0f, 0xfd,
        0x51, 0x57, 0xe3, 0x77, 0xff, 0x77, 0xdf, 0x80, 0x00, 0x00, 0x0d, 0xbd, 0x54, 0x5d, 0xf1,
        0xfc, 0x18, 0x00, 0x07, 0xe8, 0xa2, 0xae, 0x03, 0x7f, 0xee, 0xfb, 0xfa, 0x8c, 0x00, 0x00,
        0xc7, 0xfe, 0xa0, 0x0a, 0x1a, 0x07, 0xff, 0x80, 0x00, 0x3c, 0x05, 0x5c, 0xfb, 0x77, 0xd7,
        0x55, 0xf5, 0x08, 0x00, 0xc9, 0xb8, 0xff, 0x54, 0x47, 0x5d, 0x01, 0xe0, 0x70, 0x00, 0xfe,
        0x2a, 0xff, 0xed, 0xea, 0xae, 0x1e, 0xbf, 0x10, 0x90, 0xcd, 0xff, 0xfe, 0xaa, 0x88, 0x02,
        0x00, 0xc0, 0x18, 0x00, 0xcf, 0x57, 0xfe, 0x4f, 0x1f, 0xe1, 0x1f, 0x77, 0x10, 0x96, 0x64,
        0xff, 0xf5, 0x15, 0x11, 0x54, 0x00, 0x60, 0x0e, 0x01, 0x87, 0xbf, 0x67, 0xe7, 0xb8, 0x1e,
        0xe4, 0xe3, 0x30, 0x93, 0xb2, 0xfa, 0xea, 0x20, 0xab, 0xea, 0x00, 0x40, 0x0c, 0x07, 0x01,
        0xd7, 0xfe, 0xef, 0x7c, 0xcf, 0x9f, 0xfd, 0x26, 0x50, 0xfb, 0xf5, 0x7d, 0x05, 0x00, 0x71,
        0x00, 0xff, 0xb8, 0x1c, 0x00, 0xea, 0xff, 0xfb, 0x9c, 0x60, 0x38, 0x23, 0x27, 0xde, 0x0f,
        0xfe, 0xfa, 0xa8, 0x2a, 0xb2, 0x01, 0xd1, 0xff, 0xe0, 0x00, 0x74, 0x7f, 0xf4, 0x9c, 0x76,
        0x40, 0x47, 0x2f, 0xff, 0xe7, 0xff, 0xd4, 0x15, 0x16, 0x53, 0x03, 0xa8, 0xaf, 0xc0, 0x01,
        0xe2, 0xaf, 0xfc, 0xaa, 0x2a, 0xca, 0x82, 0xae, 0xfb, 0xff, 0xea, 0xe2, 0x20, 0xaa, 0xc9,
        0x0f, 0x14, 0x58, 0x78, 0x03, 0xd1, 0x55, 0xbd, 0xc5, 0x40, 0x40, 0x15, 0xff, 0xfd, 0xff,
        0xf5, 0x05, 0x15, 0x03, 0x57, 0xfa, 0x2a, 0x30, 0x0c, 0x0f, 0xaa, 0x8b, 0xae, 0x8a, 0x2a,
        0x22, 0x82, 0xfa, 0xbf, 0xaa, 0xa0, 0x28, 0xa0, 0x29, 0xca, 0xf1, 0x50, 0x30, 0x0f, 0xff,
        0x51, 0x16, 0xe7, 0xc0, 0x40, 0x41, 0x15, 0x75, 0x4f, 0xd5, 0xd5, 0x44, 0x40, 0x44, 0x42,
        0x1a, 0x20, 0xa0, 0x03, 0xfe, 0xa8, 0xae, 0xcf, 0xe0, 0x80, 0x00, 0xa2, 0x2e, 0xee, 0xe2,
        0xaa, 0x82, 0x88, 0x2f, 0x22, 0x07, 0x05, 0x60, 0x01, 0x57, 0xd5, 0x5d, 0x77, 0xe4, 0x05,
        0x44, 0x41, 0x57, 0x75, 0x1d, 0x01, 0x00, 0x51, 0x17, 0x11, 0x02, 0x8a, 0xf0, 0x01, 0xaa,
        0xea, 0xf9, 0xff, 0xe2, 0xa0, 0x20, 0x2a, 0x22, 0xaa, 0xa8, 0xaa, 0xa8, 0xaa, 0xa6, 0x28,
        0x03, 0x57, 0xfc, 0x00, 0xd5, 0x7f, 0xf6, 0xff, 0x11, 0x44, 0x44, 0x00, 0x10, 0x15, 0x00,
        0x50, 0x51, 0x50, 0x45, 0x05, 0x03, 0xbf, 0xc3, 0x80, 0x82, 0xb9, 0xfe, 0x7e, 0x0a, 0x0a,
        0xa0, 0x00, 0x2a, 0x80, 0x08, 0x20, 0x00, 0x80, 0x0a, 0xaa, 0x01, 0xfc, 0x00, 0xc0, 0xd1,
        0x5c, 0x8f, 0x38, 0x40, 0x41, 0x04, 0x10, 0x01, 0x50, 0x11, 0x00, 0x45, 0x55, 0x04, 0x73,
        0x03, 0x98, 0x00, 0x60, 0xaa, 0x2f, 0x3f, 0x38, 0xa2, 0x20, 0x2a, 0x88, 0x00, 0x2a, 0xa8,
        0x20, 0xa0, 0x00, 0xaa, 0x2e, 0x02, 0x00, 0x00, 0x30, 0xd1, 0x57, 0xff, 0xf5, 0x01, 0x45,
        0x45, 0x51, 0x15, 0x11, 0x15, 0x45, 0x50, 0x54, 0x55, 0x40,
#endif
};

const lv_img_dsc_t sleepbert = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 160,
    .header.h = 68,
    .data_size = 1368,
    .data = sleepbert_map,
};
