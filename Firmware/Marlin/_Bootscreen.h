/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   4500
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

const unsigned char custom_start_bmp[1024] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00,
0x01, 0xFF, 0x00, 0x00, 0x01, 0xE0, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00,
0x01, 0xEF, 0x00, 0x00, 0x01, 0xE0, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00,
0x01, 0xEF, 0x3F, 0xC7, 0xF3, 0xF3, 0xF9, 0xFF, 0x1F, 0xE7, 0xDE, 0xF3, 0xDE, 0x3F, 0xCF, 0x60,
0x01, 0xEF, 0x7F, 0xEF, 0xFB, 0xF7, 0xFD, 0xFF, 0xBF, 0xF7, 0xFF, 0xFB, 0xFF, 0x7F, 0xEF, 0xE0,
0x01, 0xEF, 0x79, 0xEF, 0x7B, 0xF7, 0xBD, 0xE7, 0xBC, 0xF7, 0x9E, 0x7B, 0xCF, 0x79, 0xEF, 0xE0,
0x01, 0xEF, 0x79, 0xEF, 0x79, 0xE7, 0xBD, 0xE7, 0xBC, 0xF7, 0x9E, 0x7B, 0xCF, 0x79, 0xEF, 0xE0,
0x01, 0xEF, 0x79, 0xEF, 0x39, 0xE7, 0xBD, 0xE7, 0xBC, 0xF7, 0x9E, 0x7B, 0xCF, 0x79, 0xEF, 0xE0,
0x01, 0xFF, 0x79, 0xEF, 0x01, 0xE7, 0xBD, 0xE7, 0x80, 0xF7, 0x9E, 0x7B, 0xCF, 0x7F, 0xEF, 0x80,
0x01, 0xFE, 0x79, 0xEF, 0xF1, 0xE7, 0x81, 0xE7, 0x9F, 0xF7, 0x9E, 0x7B, 0xCF, 0x7F, 0xEF, 0x00,
0x01, 0xE0, 0x79, 0xE7, 0xF9, 0xE7, 0x81, 0xE7, 0xBC, 0xF7, 0x9E, 0x7B, 0xCF, 0x78, 0x0F, 0x00,
0x01, 0xE0, 0x79, 0xE0, 0x79, 0xE7, 0xBD, 0xE7, 0xBC, 0xF7, 0x9E, 0x7B, 0xCF, 0x79, 0xEF, 0x00,
0x01, 0xE0, 0x79, 0xEE, 0x79, 0xE7, 0xBD, 0xE7, 0xBC, 0xF7, 0x9E, 0x7B, 0xCF, 0x79, 0xEF, 0x00,
0x01, 0xE0, 0x79, 0xEF, 0x79, 0xE7, 0xBD, 0xE7, 0xBC, 0xF7, 0x9E, 0x7B, 0xCF, 0x79, 0xEF, 0x00,
0x01, 0xE0, 0x79, 0xEF, 0x79, 0xE7, 0xBD, 0xE7, 0xBC, 0xF7, 0x9E, 0x7B, 0xCF, 0x79, 0xEF, 0x00,
0x01, 0xE0, 0x7F, 0xEF, 0xF9, 0xF7, 0xFD, 0xE7, 0xBF, 0xF7, 0x9E, 0x7B, 0xFF, 0x79, 0xEF, 0x00,
0x01, 0xE0, 0x3F, 0xC7, 0xF0, 0xF3, 0xF9, 0xE7, 0x9E, 0xF7, 0x9E, 0x7B, 0xDE, 0x3F, 0xCF, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0xF3, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xFE, 0x78, 0x00, 0x00, 0xF3, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xDE, 0x78, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xDE, 0xFD, 0xE7, 0x9E, 0xF3, 0xCF, 0xF1, 0xFC, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xDE, 0xFD, 0xE7, 0xBF, 0xF3, 0xDF, 0xFB, 0xFE, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xCE, 0xFD, 0xE7, 0xBC, 0xF3, 0xDE, 0x7B, 0xDE, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xC0, 0x79, 0xE7, 0xBC, 0xF3, 0xDE, 0x7B, 0xDE, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xFC, 0x79, 0xE7, 0xBC, 0xF3, 0xDE, 0x7B, 0xCE, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xFE, 0x79, 0xE7, 0xBC, 0xF3, 0xDE, 0x7B, 0xC0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xFE, 0x79, 0xE7, 0xBC, 0xF3, 0xDE, 0x7B, 0xFC, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x1E, 0x79, 0xE7, 0xBC, 0xF3, 0xDE, 0x79, 0xFE, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0x9E, 0x79, 0xE7, 0xBC, 0xF3, 0xDE, 0x78, 0x1E, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xDE, 0x79, 0xE7, 0xBC, 0xF3, 0xDE, 0x7B, 0x9E, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xDE, 0x79, 0xE7, 0xBC, 0xF3, 0xDE, 0x7B, 0xDE, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xDE, 0x79, 0xE7, 0xBC, 0xF3, 0xDE, 0x7B, 0xDE, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xFE, 0x7D, 0xFF, 0xBF, 0xF3, 0xDF, 0xFB, 0xFE, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xFC, 0x3C, 0xF7, 0x9E, 0xF3, 0xCF, 0xF1, 0xFC, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};