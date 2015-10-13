#ifndef IMAGE_H
#define IMAGE_H

#include <inttypes.h>
#include <avr/pgmspace.h>

static uint8_t IMG_MAVLINK[] PROGMEM =
{
	159, 45,
0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0,
0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
0x01, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xc0, 0x07, 0x00, 0xc0, 0x1f,
0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0,
0x0f, 0x00, 0xf0, 0x0f, 0x80, 0x0f, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xf8, 0x1f, 0x00, 0xf8, 0x03,
0xc0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc,
0x7f, 0x00, 0xfe, 0x01, 0xe0, 0x03, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xfe, 0xff, 0x80, 0x7f, 0x40,
0xe0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe,
0xff, 0xc1, 0x3f, 0x60, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xfc, 0xff, 0xf7, 0x0f, 0x30,
0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc,
0xff, 0xff, 0x03, 0x18, 0x7c, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x01, 0x0c,
0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc,
0xff, 0xff, 0x18, 0x06, 0x1f, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0x0f, 0x83,
0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8,
0xff, 0xff, 0x9f, 0xc1, 0x07, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0xe1,
0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0,
0xff, 0xff, 0xff, 0xf3, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0xfb,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0,
0xff, 0xff, 0xff, 0x7d, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0x7f, 0x1e,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8,
0xff, 0xff, 0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xfc, 0xe0, 0xff, 0xcf, 0x87,
0x1f, 0xfc, 0x80, 0x0f, 0x1f, 0x7c, 0x7c, 0x80,
0x8f, 0x0f, 0x1e, 0x1f, 0x7e, 0x00, 0x3c, 0x3f,
0x80, 0xc1, 0xe0, 0xc3, 0x0f, 0x7e, 0xe0, 0x87,
0x0f, 0x3e, 0x3f, 0xc0, 0xc7, 0x07, 0x8f, 0x8f,
0x1f, 0x00, 0xff, 0x0f, 0x70, 0x30, 0xf0, 0xe0,
0x87, 0x3f, 0xf0, 0x83, 0x87, 0x8f, 0x1f, 0xe0,
0xe3, 0xc7, 0xc7, 0xe7, 0x07, 0x80, 0xff, 0x07,
0x1f, 0x1c, 0x7c, 0xf8, 0xc3, 0x0f, 0xfc, 0xc1,
0xc3, 0xc7, 0x07, 0xf0, 0xf9, 0xe3, 0xe3, 0xfb,
0x00, 0x80, 0xff, 0xc7, 0x03, 0x06, 0x3e, 0xfc,
0xf1, 0x07, 0xff, 0xe0, 0xf3, 0xe1, 0x03, 0xf8,
0xfc, 0xf3, 0xf1, 0x3f, 0x00, 0x80, 0xff, 0x0f,
0x80, 0x81, 0x0f, 0xfe, 0xf9, 0x83, 0xff, 0xf0,
0xf9, 0xf0, 0x01, 0x3e, 0xfe, 0xf9, 0xfc, 0x0f,
0x00, 0x80, 0xff, 0x07, 0xf0, 0xc0, 0x07, 0xff,
0xfe, 0xe1, 0x7b, 0xf8, 0x3c, 0x7c, 0x00, 0x1f,
0xff, 0x3d, 0xfe, 0x07, 0x00, 0x80, 0xff, 0x01,
0x3c, 0xf0, 0x83, 0x7f, 0xff, 0xf0, 0x3c, 0x7c,
0x1f, 0x3e, 0x80, 0x8f, 0xff, 0x1f, 0xff, 0x07,
0x00, 0x80, 0x7f, 0x80, 0x07, 0xfc, 0xc0, 0xff,
0x7f, 0x7c, 0x1e, 0xbc, 0x07, 0x1f, 0xc0, 0xc7,
0xfb, 0x8f, 0xff, 0x03, 0x00, 0x00, 0x00, 0xf8,
0x01, 0x3f, 0xe0, 0xfd, 0x1e, 0x1e, 0x0f, 0xfe,
0x81, 0x0f, 0xe0, 0xf3, 0xf9, 0xc7, 0xff, 0x03,
0x00, 0x00, 0x00, 0x3f, 0xc0, 0x1f, 0xf8, 0x7e,
0x8f, 0xff, 0x0f, 0xff, 0xc0, 0x07, 0xf8, 0xf8,
0xfc, 0xe3, 0xf3, 0x01, 0x00, 0x00, 0x80, 0x03,
0xf0, 0x07, 0x3c, 0x9f, 0xc7, 0xff, 0x87, 0x3f,
0xf0, 0x03, 0x7c, 0x7c, 0xfc, 0xf8, 0xf8, 0x01,
0x00, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x9e, 0xcf,
0xf3, 0xff, 0xc3, 0x1f, 0xf8, 0x7f, 0x3e, 0x3e,
0x7e, 0x7c, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x80,
0x7f, 0x00, 0xcf, 0xf3, 0x79, 0xf0, 0xe1, 0x07,
0xfc, 0x3f, 0x1f, 0x1f, 0x3e, 0x3e, 0xfc, 0x00,
0x00, 0x00, 0x00, 0xf0, 0x1f, 0x80, 0xe7, 0xf9,
0x3e, 0xf0, 0xe0, 0x03, 0xfe, 0x9f, 0x8f, 0x07,
0x1f, 0x1f, 0x7e, 0x00, 0x00, 0x00, 0x00, 0xfe,
0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xe0, 0xff, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x1f,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x80, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x7f, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0xc0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static uint8_t IMG_LCD_BIG[] PROGMEM =
{
	45, 29,
0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x80,
0x03, 0x00, 0x00, 0x00, 0x00, 0x70, 0xe0, 0xff,
0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff,
0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7,
0xff, 0xff, 0xff, 0xff, 0xff, 0x1e, 0x00, 0x00,
0xf0, 0xff, 0xdf, 0x03, 0x00, 0x00, 0xfe, 0xff,
0x7b, 0x00, 0x00, 0xc0, 0xff, 0x7f, 0x0f, 0x00,
0x00, 0xf8, 0xff, 0xef, 0x11, 0x00, 0x10, 0x7f,
0xfe, 0x3d, 0x02, 0x00, 0xe2, 0xcf, 0xbf, 0x47,
0x00, 0x40, 0xfc, 0xff, 0xf7, 0x08, 0x00, 0x88,
0xe7, 0xf9, 0x1e, 0xfd, 0x7e, 0xf1, 0x3c, 0xdf,
0x23, 0x00, 0x20, 0xfe, 0xff, 0x7b, 0x04, 0x00,
0xc4, 0x9f, 0x7f, 0x8f, 0x00, 0x80, 0xf8, 0xf3,
0xef, 0x11, 0x00, 0x10, 0xff, 0xff, 0x3d, 0x00,
0x00, 0xe0, 0xff, 0xbf, 0x07, 0x00, 0x00, 0x9c,
0x9f, 0xf7, 0x00, 0x00, 0x80, 0xf3, 0xf3, 0xfe,
0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff,
0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0x7f,
0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff,
0xff, 0xff, 0xff, 0x01
};

static uint8_t IMG_LCD_SMALL[] PROGMEM =
{
	36, 34,
0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00,
0x03, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
0x00, 0x03, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00,
0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x00, 0x80, 0x07, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07,
0x00, 0xf0, 0xc7, 0x7f, 0xc7, 0x71, 0x7f, 0xfc,
0x07, 0x00, 0xf0, 0xc7, 0x7f, 0xc0, 0x01, 0xff,
0xff, 0x17, 0x00, 0x74, 0x7c, 0x7c, 0x01, 0x40,
0xc7, 0xc7, 0x17, 0x00, 0x74, 0x7c, 0x7c, 0x01,
0x40, 0xff, 0xff, 0xd7, 0xff, 0xf5, 0xc7, 0x7f,
0x01, 0x40, 0x7f, 0xfc, 0x17, 0x00, 0xf4, 0xc7,
0x7f, 0x01, 0x40, 0xff, 0xff, 0x97, 0xd9, 0x74,
0x7c, 0x7c, 0x00, 0x00, 0xc7, 0xc7, 0x07, 0x00,
0x70, 0x7c, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff,
};

static uint8_t IMG_SERVO[] PROGMEM =
{
36, 30,
0x00, 0xc0, 0xff, 0xff, 0x01, 0x00, 0xfc, 0xff,
0x1f, 0x00, 0xc0, 0xff, 0xff, 0x01, 0x00, 0xfc,
0xff, 0x1f, 0x00, 0xc0, 0xff, 0xff, 0x01, 0x00,
0x80, 0xff, 0x00, 0x00, 0x00, 0xf8, 0x0f, 0x00,
0x00, 0x80, 0xff, 0x00, 0x00, 0x00, 0xf8, 0x0f,
0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x0f,
0xf0, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff,
0x0f, 0xf0, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff,
0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0x00, 0xff,
0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0x00,
0xff, 0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff,
0x00, 0xff, 0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff,
0xff, 0x00, 0xff, 0xff, 0xff, 0x0f, 0xf0, 0xff,
0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x0f,
};

static uint8_t IMG_SENSOR[] PROGMEM =
{
	36, 26,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0x00,
0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x7e, 0x00,
0x00, 0x00, 0xe0, 0x07, 0x80, 0x01, 0x00, 0x7e,
0x00, 0x3c, 0x00, 0xe0, 0x07, 0xe0, 0x07, 0x00,
0x7e, 0x00, 0xdb, 0x00, 0xe0, 0x07, 0x80, 0x01,
0x00, 0x7e, 0x00, 0x18, 0x00, 0xe0, 0x07, 0x80,
0x81, 0x01, 0x7e, 0x00, 0x18, 0x30, 0xe0, 0x07,
0x9f, 0x01, 0x06, 0x7e, 0x80, 0xf9, 0xff, 0xe0,
0x07, 0x8c, 0xff, 0x0f, 0x7e, 0x60, 0x00, 0x60,
0xe0, 0x07, 0x06, 0x00, 0x03, 0x7e, 0xf0, 0x01,
0x18, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x7e, 0x00,
0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0xfe,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff,
};

static uint8_t IMG_MODE[] PROGMEM =
{
	36, 36,
0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0xe0, 0x00,
0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0xe0,
0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
0xe0, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00,
0x06, 0xe0, 0x00, 0x00, 0x60, 0xfe, 0xff, 0x07,
0x00, 0xe6, 0xff, 0x7f, 0x00, 0x60, 0xfe, 0xff,
0x07, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x7f, 0xff, 0xff, 0xdf, 0xff, 0xf7, 0xff, 0xff,
0xfd, 0x7f, 0xff, 0xff, 0xdf, 0xff, 0x80, 0xff,
0x3f, 0xe0, 0x7f, 0xff, 0xff, 0xdf, 0xff, 0xf7,
0xff, 0xff, 0xfd, 0x7f, 0xff, 0xff, 0xdf, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x00,
0xf4, 0xff, 0x7f, 0x00, 0xc0, 0xff, 0xff, 0x07,
0x00, 0xf4, 0xff, 0x7f, 0x00, 0xc0, 0xff, 0xff,
0x07, 0x00, 0xf4, 0xff, 0x7f, 0x00, 0xc0, 0xff,
0xff, 0x07, 0x00, 0xf4, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff,
};

static uint8_t IMG_SETUP[] PROGMEM =
{
	36, 34,
	0x00, 0x80, 0x1f, 0x00, 0x00, 0x00, 0xf8, 0x01,
0x00, 0x00, 0x80, 0x1f, 0x00, 0x00, 0x18, 0xf8,
0x81, 0x01, 0xc0, 0xc3, 0x3f, 0x3c, 0x00, 0x7e,
0xfe, 0xe7, 0x07, 0xf0, 0xff, 0xff, 0xff, 0x00,
0xff, 0xff, 0xff, 0x0f, 0xe0, 0xff, 0xff, 0x7f,
0x00, 0xfc, 0x07, 0xfe, 0x03, 0x80, 0x1f, 0x8f,
0x1f, 0x00, 0xf8, 0xfc, 0xf3, 0x01, 0xc0, 0xe7,
0x7f, 0x3e, 0x00, 0x7e, 0xff, 0xef, 0x07, 0xfe,
0xf3, 0xf9, 0xfc, 0xe7, 0xbf, 0x0f, 0xdf, 0x7f,
0xfe, 0x7b, 0xe0, 0xfd, 0xe7, 0xbf, 0x07, 0xde,
0x7f, 0xfe, 0xfb, 0xf0, 0xfd, 0xe7, 0x3f, 0x9f,
0xcf, 0x7f, 0xe0, 0xf7, 0xff, 0x7e, 0x00, 0x7c,
0xfe, 0xe7, 0x03, 0x80, 0xcf, 0x3f, 0x1f, 0x00,
0xf8, 0xf1, 0xf8, 0x01, 0xc0, 0x7f, 0xe0, 0x3f,
0x00, 0xfe, 0xff, 0xff, 0x07, 0xf0, 0xff, 0xff,
0xff, 0x00, 0xff, 0xff, 0xff, 0x0f, 0xe0, 0xe7,
0x7f, 0x7e, 0x00, 0x3c, 0xfc, 0xc3, 0x03, 0x80,
0x81, 0x1f, 0x18, 0x00, 0x00, 0xf8, 0x01, 0x00,
0x00, 0x80, 0x1f, 0x00, 0x00, 0x00, 0xf8, 0x01,
0x00,
};

static uint8_t IMG_UPGRADE[] PROGMEM =
{
	36, 32,
	0x00, 0x00, 0x00, 0xff, 0x0f, 0x00, 0x00, 0x30,
0xc0, 0x00, 0x00, 0x0e, 0x03, 0x0c, 0x00, 0xfe,
0x30, 0xc0, 0x00, 0xf0, 0x1f, 0x03, 0x0c, 0x80,
0xff, 0xf1, 0xff, 0x00, 0xfc, 0x3f, 0x60, 0x00,
0xe0, 0xff, 0x83, 0x1f, 0x00, 0xff, 0x0f, 0x00,
0x00, 0xf0, 0x7f, 0x00, 0x00, 0x80, 0xff, 0x03,
0x00, 0x00, 0xf8, 0x1f, 0x00, 0x00, 0xc0, 0xff,
0x01, 0x00, 0x00, 0xfc, 0x0f, 0x00, 0x18, 0xe3,
0xff, 0x00, 0xe0, 0x71, 0xfe, 0x07, 0x80, 0x3f,
0xfe, 0x7f, 0x00, 0xfe, 0xe3, 0xff, 0x03, 0xe0,
0x3f, 0xfe, 0x3f, 0x00, 0xfc, 0xc3, 0xff, 0x01,
0x00, 0x7f, 0xfc, 0x1f, 0x00, 0xf0, 0xc7, 0xff,
0x01, 0x80, 0x7f, 0xf8, 0x1f, 0x00, 0xf8, 0x8f,
0xff, 0x01, 0x80, 0xff, 0xf8, 0x7f, 0x00, 0xfc,
0x09, 0xff, 0x0f, 0xe0, 0x0f, 0xf0, 0xff, 0x01,
0xff, 0x00, 0xff, 0x07, 0xf8, 0x07, 0xe0, 0x3f,
0xe0, 0x7f, 0x00, 0xfe, 0x00, 0xfe, 0x03, 0xe0,
0x03, 0xc0, 0x1f, 0x00, 0x0c, 0x00, 0x78, 0x00,
};

static uint8_t IMG_AAT[] PROGMEM =
{
	36, 29,
0xfe, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xef, 0xff, 0xff, 0xff, 0x7f, 0x00, 0x00, 0xe0,
0x0f, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00,
0xc0, 0x07, 0x00, 0xff, 0xff, 0xff, 0x07, 0x08,
0x00, 0xc0, 0x87, 0x80, 0x00, 0x00, 0x7c, 0x08,
0x08, 0x00, 0xfc, 0x9f, 0x80, 0x00, 0x40, 0x6c,
0x09, 0x48, 0x02, 0xc4, 0x97, 0x80, 0x00, 0x40,
0x00, 0x09, 0x08, 0x00, 0xfc, 0x9f, 0x80, 0x00,
0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x80, 0x00,
0xff, 0xff, 0xff, 0x07, 0x00, 0xe0, 0xbf, 0x07,
0x00, 0x00, 0xfe, 0x7b, 0x00, 0x00, 0xe0, 0x3f,
0x00, 0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0xc0,
0x1f, 0x00, 0x00
};

static uint8_t IMG_POWER[] PROGMEM = 
{
36, 36,
0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xf8, 0x00,
0x00, 0x00, 0x80, 0x0f, 0x00, 0x00, 0x00, 0xf8,
0x00, 0x00, 0x00, 0x80, 0x0f, 0x00, 0x00, 0x1c,
0xf8, 0xc0, 0x01, 0xe0, 0x83, 0x0f, 0x3e, 0x00,
0x3f, 0xf8, 0xe0, 0x07, 0xf0, 0x83, 0x0f, 0x7e,
0x80, 0x1f, 0xf8, 0xc0, 0x0f, 0xfc, 0x80, 0x0f,
0xf8, 0xc1, 0x07, 0xf8, 0x00, 0x1f, 0x7e, 0x80,
0x0f, 0xf0, 0xe3, 0x03, 0xf8, 0x00, 0x3e, 0x3e,
0x80, 0x0f, 0xe0, 0xe3, 0x01, 0xf8, 0x00, 0x3c,
0x1f, 0x80, 0x0f, 0xc0, 0xf7, 0x01, 0xf8, 0x00,
0x7c, 0x1f, 0x00, 0x07, 0xc0, 0xf7, 0x01, 0x00,
0x00, 0x7c, 0x1f, 0x00, 0x00, 0xc0, 0xe7, 0x01,
0x00, 0x00, 0x3c, 0x3e, 0x00, 0x00, 0xe0, 0xe3,
0x03, 0x00, 0x00, 0x3e, 0x7e, 0x00, 0x00, 0xf0,
0xc3, 0x07, 0x00, 0x00, 0x1f, 0xfc, 0x00, 0x00,
0xf8, 0x81, 0x1f, 0x00, 0xc0, 0x0f, 0xf0, 0x03,
0x00, 0x7e, 0x00, 0xff, 0x00, 0xf8, 0x07, 0xe0,
0x3f, 0xe0, 0x3f, 0x00, 0xfc, 0xff, 0xff, 0x01,
0x00, 0xff, 0xff, 0x07, 0x00, 0xe0, 0xff, 0x3f,
0x00, 0x00, 0xf8, 0xff, 0x00, 0x00, 0x00, 0xf8,
0x00, 0x00,
};

static uint8_t IMG_SAT[] PROGMEM = 
{
12, 15,
0x0e, 0x16, 0x63, 0x41, 0x31, 0x08, 0x43, 0x61,
0x22, 0x1c, 0xc2, 0x41, 0x3c, 0x04, 0x4f, 0xd0,
0x03, 0x01, 0x38, 0xc0, 0x07, 0xfe, 0x00
};

static uint8_t IMG_TF[] PROGMEM = 
{
	12, 14,
0xfc, 0x20, 0x10, 0x02, 0x21, 0x10, 0x02, 0x21,
0x20, 0x02, 0x24, 0x60, 0x02, 0x22, 0x40, 0x02,
0x24, 0x40, 0x02, 0xc4, 0x3f,
};

static uint8_t IMG_HOME[] PROGMEM = 
{
	36, 35,
0x00, 0xe0, 0x3f, 0x00, 0x00, 0xc0, 0xff, 0x1f,
0x00, 0x00, 0xff, 0xff, 0x07, 0x00, 0xf8, 0x8f,
0xff, 0x00, 0xc0, 0x0f, 0x80, 0x1f, 0x00, 0x3e,
0x00, 0xe0, 0x03, 0xf0, 0x01, 0x00, 0x7c, 0x80,
0x0f, 0x00, 0x80, 0x0f, 0x7c, 0x3c, 0xe0, 0xf1,
0xc1, 0xc3, 0x03, 0x1e, 0x1e, 0x1e, 0x3c, 0xe0,
0xc1, 0xe3, 0xc1, 0x03, 0x1e, 0x3c, 0x0e, 0x3c,
0xe0, 0x81, 0xf3, 0xc0, 0x03, 0x1e, 0x78, 0x0f,
0x3c, 0xe0, 0x81, 0xf7, 0xc0, 0xff, 0x1f, 0x78,
0x07, 0xfc, 0xff, 0x01, 0x77, 0xc0, 0xff, 0x1f,
0x70, 0x07, 0xfc, 0xff, 0x01, 0xf7, 0xc0, 0x03,
0x1e, 0x78, 0x0f, 0x3c, 0xe0, 0x81, 0xf7, 0xc0,
0x03, 0x1e, 0x78, 0x0e, 0x3c, 0xe0, 0x81, 0xe3,
0xc1, 0x03, 0x1e, 0x3c, 0x1e, 0x3c, 0xe0, 0xc1,
0xc3, 0xc3, 0x03, 0x1e, 0x1e, 0x7c, 0x3c, 0xe0,
0xf1, 0x81, 0x0f, 0x00, 0x80, 0x0f, 0xf0, 0x01,
0x00, 0x7c, 0x00, 0x3e, 0x00, 0xe0, 0x03, 0xc0,
0x0f, 0x80, 0x1f, 0x00, 0xf8, 0x8f, 0xff, 0x00,
0x00, 0xff, 0xff, 0x07, 0x00, 0xc0, 0xff, 0x1f,
0x00, 0x00, 0xe0, 0x3f, 0x00, 0x00
};

static uint8_t IMG_RESET[] PROGMEM = 
{
	42, 36,
0x00, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x00, 0xfc,
0x7f, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x07, 0x00,
0x00, 0xf8, 0xff, 0x3f, 0x00, 0x00, 0xf8, 0xff,
0xff, 0x03, 0x00, 0xf0, 0x7f, 0xfc, 0x1f, 0x00,
0xe0, 0x1f, 0x00, 0xff, 0x00, 0x80, 0x3f, 0x00,
0xf8, 0x03, 0x00, 0x3f, 0x00, 0x80, 0x1f, 0x00,
0x7e, 0x00, 0x00, 0xfc, 0x00, 0xf8, 0x01, 0x00,
0xf0, 0x03, 0xf0, 0x03, 0x00, 0x80, 0x1f, 0xc0,
0x07, 0x00, 0x00, 0x7c, 0x00, 0x1f, 0x00, 0x00,
0xf0, 0x01, 0x3e, 0x00, 0x00, 0xc0, 0xc7, 0xff,
0x3f, 0x00, 0x00, 0x3f, 0xfe, 0x7f, 0x00, 0x00,
0xf8, 0xf0, 0xff, 0x00, 0x00, 0xe0, 0x83, 0xff,
0x01, 0x00, 0x80, 0x0f, 0xfc, 0x03, 0x00, 0x00,
0x3f, 0xe0, 0x07, 0x00, 0x00, 0x7c, 0x00, 0x0f,
0x00, 0x00, 0xf0, 0x01, 0x18, 0x00, 0x00, 0xc0,
0x07, 0x00, 0x00, 0x00, 0x80, 0x1f, 0x00, 0x00,
0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfc,
0x00, 0x00, 0x02, 0x00, 0xf8, 0x01, 0x00, 0x3c,
0x00, 0xf8, 0x03, 0x00, 0xf8, 0x01, 0xf0, 0x0f,
0x00, 0xf0, 0x7f, 0xfc, 0x1f, 0x00, 0x80, 0xff,
0xff, 0x3f, 0x00, 0x00, 0xf8, 0xff, 0x3f, 0x00,
0x00, 0xc0, 0xff, 0x7f, 0x00, 0x00, 0x00, 0xfc,
0x7f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00,
};

/*
enum IMAGE_ID
{
		IMG_ID_MAVLINK, IMG_ID_LCD_BIG, 
		IMG_ID_MODE, IMG_ID_SETUP, IMG_ID_UPGRADE, 
		IMG_ID_SERVO, IMG_ID_SENSOR, IMG_ID_LCD_SMALL,
		IMG_ID_AAT,
};*/

static uint8_t* IMAGES[] =
{
		IMG_MAVLINK, IMG_LCD_BIG,
		IMG_MODE, IMG_SETUP, IMG_UPGRADE,
		IMG_SERVO, IMG_SENSOR, IMG_LCD_SMALL,
		IMG_AAT, IMG_POWER, IMG_SAT, IMG_TF, IMG_HOME, IMG_RESET,
};

#endif //IMAGE_H