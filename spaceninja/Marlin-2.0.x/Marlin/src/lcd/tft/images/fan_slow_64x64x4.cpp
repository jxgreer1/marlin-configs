/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

extern const uint8_t fan_slow0_64x64x4[2048] = {
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x77, 0x89, 0x9A, 0xBB, 0xBB, 0xAA, 0x99, 0x87, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0xAB, 0xDE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xDB, 0x97, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x79, 0xCE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x97, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0xAE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x8B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA7, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x89, 0xBC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE8, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0xAC, 0xCB, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8B, 0xCB, 0xBB, 0xBE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0xBC, 0xBB, 0xBB, 0xBC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8A, 0xCB, 0xBB, 0xBB, 0xBB, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8B, 0xCB, 0xBB, 0xBB, 0xBB, 0xBD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE9, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8A, 0xCC, 0xBB, 0xBB, 0xBB, 0xBB, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xD7, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x9B, 0xCB, 0xBB, 0xBB, 0xBB, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA7, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0xAC, 0xCB, 0xBB, 0xBB, 0xBC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x89, 0xBC, 0xBB, 0xBB, 0xBB, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x8A, 0xBC, 0xBB, 0xBB, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x9B, 0xCB, 0xBB, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x79, 0xBC, 0xBB, 0xBE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x9B, 0xCB, 0xBD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB7, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x78, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x79, 0xCB, 0xBD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x88, 0x87, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0xAC, 0xBD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC8, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0xAB, 0xA8, 0x78, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x9B, 0xBE, 0xFF, 0xCA, 0xAB, 0xCE, 0xFD, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0xAB, 0xCC, 0xCA, 0x78, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8B, 0xCF, 0xD9, 0x77, 0x77, 0x79, 0xC8, 0x77, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0x9B, 0xCC, 0xBB, 0xCB, 0x87, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8A, 0xCC, 0x87, 0x77, 0x77, 0x77, 0x77, 0x88, 0x77, 0x77, 0x77, 0x77, 0x78, 0x9B, 0xCC, 0xBB, 0xBB, 0xCB, 0x87, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x77, 0x77, 0x77, 0x77, 0x78, 0x88, 0x79, 0xB8, 0x77, 0x8A, 0xCB, 0x97, 0x77, 0x8A, 0xA9, 0x88, 0x88, 0x89, 0xAB, 0xCC, 0xBB, 0xBB, 0xBB, 0xBC, 0x97, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x77, 0x78, 0x99, 0xAA, 0x99, 0x98, 0x87, 0x77, 0x79, 0x97, 0x78, 0xDF, 0xFF, 0xEA, 0x77, 0x8A, 0xCB, 0xBB, 0xBB, 0xBB, 0xCC, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0x97, 0x88,
  0x88, 0x88, 0x88, 0x87, 0x7A, 0xCE, 0xFF, 0xFF, 0xFF, 0xEE, 0xDC, 0xA9, 0x88, 0x87, 0x8C, 0xFF, 0xFF, 0xFE, 0x97, 0x8C, 0xCB, 0xBC, 0xCC, 0xCB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0x97, 0x88,
  0x88, 0x88, 0x88, 0x78, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEB, 0x77, 0x9F, 0xFF, 0xFF, 0xFF, 0xB7, 0x7C, 0xFD, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0x97, 0x88,
  0x88, 0x88, 0x87, 0x8D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x77, 0x9F, 0xFF, 0xFF, 0xFF, 0xC7, 0x7B, 0xFF, 0xEC, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0xCD, 0xCC, 0x97, 0x88,
  0x88, 0x88, 0x87, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x77, 0x8E, 0xFF, 0xFF, 0xFF, 0xA7, 0x7B, 0xFF, 0xFF, 0xED, 0xDC, 0xCC, 0xCD, 0xDE, 0xFF, 0xFF, 0xFE, 0x97, 0x88,
  0x88, 0x88, 0x78, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x87, 0x7B, 0xFF, 0xFF, 0xFD, 0x87, 0x7D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA7, 0x88,
  0x88, 0x88, 0x79, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA7, 0x78, 0xBE, 0xFF, 0xC8, 0x77, 0x8E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA7, 0x88,
  0x88, 0x88, 0x79, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xD8, 0x77, 0x79, 0x99, 0x87, 0x78, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA7, 0x88,
  0x88, 0x88, 0x79, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x87, 0x77, 0x77, 0x77, 0x8C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x97, 0x88,
  0x88, 0x88, 0x78, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEB, 0x97, 0x78, 0x7B, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x87, 0x88,
  0x88, 0x88, 0x78, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCA, 0x98, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x78, 0x88,
  0x88, 0x88, 0x77, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDC, 0xCC, 0xA8, 0x7A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x78, 0x88,
  0x88, 0x88, 0x87, 0xAF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEC, 0xBB, 0xCA, 0x87, 0x78, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE8, 0x78, 0x88,
  0x88, 0x88, 0x87, 0x8E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xBB, 0xBC, 0xA8, 0x78, 0x77, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x7B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEB, 0xBB, 0xBB, 0x87, 0x88, 0x87, 0xAF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x97, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x79, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCB, 0xBB, 0xCA, 0x78, 0x88, 0x87, 0x8E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x87, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x77, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xBB, 0xBC, 0xB8, 0x78, 0x88, 0x87, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x78, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x87, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEB, 0xBB, 0xBC, 0xA8, 0x78, 0x88, 0x88, 0x79, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x78, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x87, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDB, 0xBB, 0xBC, 0x97, 0x88, 0x88, 0x88, 0x87, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x87, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x78, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBB, 0xBB, 0xBC, 0x97, 0x88, 0x88, 0x88, 0x87, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0x78, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x87, 0x9E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xBB, 0xBB, 0xBB, 0x87, 0x88, 0x88, 0x88, 0x87, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB7, 0x78, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x79, 0xEF, 0xFF, 0xFF, 0xFF, 0xFC, 0xBB, 0xBB, 0xCB, 0x87, 0x88, 0x88, 0x88, 0x88, 0x78, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0x77, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xAF, 0xFF, 0xFF, 0xFF, 0xEB, 0xBB, 0xBB, 0xCB, 0x87, 0x88, 0x88, 0x88, 0x88, 0x87, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x78, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7A, 0xFF, 0xFF, 0xFF, 0xDB, 0xBB, 0xBB, 0xCB, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7A, 0xEF, 0xFF, 0xFF, 0xFF, 0xFB, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0xAE, 0xFF, 0xFF, 0xCB, 0xBB, 0xBB, 0xCB, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x9D, 0xFF, 0xFF, 0xFD, 0x97, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x79, 0xDF, 0xFD, 0xBB, 0xBB, 0xBB, 0xCB, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0xAC, 0xCB, 0x98, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8A, 0xCC, 0xBB, 0xBB, 0xBB, 0xCB, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x77, 0x77, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x8A, 0xBC, 0xBB, 0xBB, 0xCB, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x8A, 0xBC, 0xCB, 0xCA, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x8A, 0xBB, 0xB9, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88
};

extern const uint8_t fan_slow1_64x64x4[2048] = {
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x79, 0xBB, 0xBA, 0x87, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8A, 0xCB, 0xCC, 0xBA, 0x88, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8B, 0xCB, 0xBB, 0xBC, 0xBA, 0x87, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x77, 0x77, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8B, 0xCB, 0xBB, 0xBB, 0xBC, 0xCA, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0x9B, 0xCC, 0xA8, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8B, 0xCB, 0xBB, 0xBB, 0xBD, 0xFF, 0xD9, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x9D, 0xFF, 0xFF, 0xFD, 0x97, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8B, 0xCB, 0xBB, 0xBB, 0xCF, 0xFF, 0xFE, 0xA7, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x7B, 0xFF, 0xFF, 0xFF, 0xFF, 0xEA, 0x78, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8B, 0xCB, 0xBB, 0xBB, 0xDF, 0xFF, 0xFF, 0xFA, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x97, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8B, 0xCB, 0xBB, 0xBB, 0xEF, 0xFF, 0xFF, 0xFF, 0xA7, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x87, 0x7B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE8, 0x78, 0x88, 0x88, 0x88, 0x87, 0x8B, 0xCB, 0xBB, 0xBC, 0xFF, 0xFF, 0xFF, 0xFF, 0xE9, 0x78, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x77, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x77, 0x88, 0x88, 0x88, 0x87, 0x8B, 0xBB, 0xBB, 0xBD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x97, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x79, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x97, 0x88, 0x88, 0x88, 0x87, 0x9C, 0xBB, 0xBB, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xD8, 0x78, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x87, 0x8E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x88, 0x88, 0x88, 0x87, 0x9C, 0xBB, 0xBB, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x77, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x77, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0x78, 0x88, 0x88, 0x78, 0xAC, 0xBB, 0xBB, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x97, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x7A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x77, 0x88, 0x88, 0x78, 0xBC, 0xBB, 0xBD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x78, 0x88, 0x88,
  0x88, 0x88, 0x87, 0x8D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x87, 0x88, 0x88, 0x7A, 0xCB, 0xBB, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0x78, 0x88, 0x88,
  0x88, 0x88, 0x87, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA7, 0x88, 0x87, 0x8B, 0xBB, 0xBB, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0x78, 0x88, 0x88,
  0x88, 0x88, 0x87, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x78, 0x78, 0xAC, 0xBB, 0xBE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x87, 0x88, 0x88,
  0x88, 0x88, 0x78, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE8, 0x77, 0x8A, 0xCB, 0xBC, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA7, 0x88, 0x88,
  0x88, 0x88, 0x7A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x78, 0xAC, 0xCC, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x78, 0x88,
  0x88, 0x88, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x78, 0x9A, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xD8, 0x78, 0x88,
  0x88, 0x87, 0x8D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEB, 0x78, 0x77, 0x9B, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE8, 0x78, 0x88,
  0x88, 0x87, 0x9E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x87, 0x77, 0x77, 0x77, 0x8D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0x78, 0x88,
  0x88, 0x87, 0xAF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC8, 0x77, 0x89, 0x99, 0x77, 0x78, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0x78, 0x88,
  0x88, 0x87, 0xAF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x87, 0x78, 0xCF, 0xFE, 0xB8, 0x77, 0xAF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0x78, 0x88,
  0x88, 0x87, 0xAF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x77, 0x8D, 0xFF, 0xFF, 0xFB, 0x77, 0x8E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xD8, 0x78, 0x88,
  0x88, 0x87, 0x9E, 0xFF, 0xFF, 0xFE, 0xDD, 0xCC, 0xCC, 0xDD, 0xEF, 0xFF, 0xFB, 0x77, 0xAF, 0xFF, 0xFF, 0xFE, 0x87, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB7, 0x88, 0x88,
  0x88, 0x87, 0x9C, 0xCD, 0xCC, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0xEF, 0xFB, 0x77, 0xCF, 0xFF, 0xFF, 0xFF, 0x97, 0x7D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x87, 0x88, 0x88,
  0x88, 0x87, 0x9C, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBD, 0xFC, 0x77, 0xBF, 0xFF, 0xFF, 0xFF, 0x97, 0x7B, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC8, 0x78, 0x88, 0x88,
  0x88, 0x87, 0x9C, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xCC, 0xCC, 0xBB, 0xCC, 0x87, 0x9E, 0xFF, 0xFF, 0xFC, 0x87, 0x88, 0x89, 0xAC, 0xDE, 0xEF, 0xFF, 0xFF, 0xFE, 0xCA, 0x77, 0x88, 0x88, 0x88,
  0x88, 0x87, 0x9C, 0xBB, 0xBB, 0xBB, 0xBB, 0xBC, 0xCB, 0xBB, 0xBB, 0xBB, 0xCA, 0x87, 0x7A, 0xEF, 0xFF, 0xD8, 0x77, 0x99, 0x77, 0x77, 0x88, 0x99, 0x9A, 0xA9, 0x98, 0x77, 0x78, 0x88, 0x88, 0x88,
  0x88, 0x87, 0x9C, 0xBB, 0xBB, 0xBB, 0xBC, 0xCB, 0xA9, 0x88, 0x88, 0x89, 0xAA, 0x87, 0x77, 0x9B, 0xCA, 0x87, 0x78, 0xB9, 0x78, 0x88, 0x77, 0x77, 0x77, 0x77, 0x77, 0x78, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x87, 0x8B, 0xCB, 0xBB, 0xBC, 0xCB, 0x98, 0x77, 0x77, 0x77, 0x77, 0x78, 0x87, 0x77, 0x77, 0x77, 0x77, 0x8C, 0xCA, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x87, 0x8B, 0xCB, 0xBC, 0xCB, 0x98, 0x77, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0xC9, 0x77, 0x77, 0x79, 0xDF, 0xCB, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x7A, 0xCC, 0xCB, 0xA8, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8D, 0xFE, 0xCB, 0xAA, 0xCF, 0xFE, 0xBB, 0x97, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x78, 0xAB, 0xA8, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xBC, 0xA8, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x87, 0x88, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xBB, 0xC9, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x77, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xBB, 0xCB, 0x97, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xBB, 0xBC, 0xB9, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCB, 0xBB, 0xCB, 0x98, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDB, 0xBB, 0xBC, 0xBA, 0x87, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEB, 0xBB, 0xBB, 0xBC, 0xB9, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xBB, 0xBB, 0xBB, 0xCC, 0xA8, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xAF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCB, 0xBB, 0xBB, 0xBB, 0xCB, 0x98, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEB, 0xBB, 0xBB, 0xBB, 0xBC, 0xCA, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x79, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xBB, 0xBB, 0xBB, 0xBB, 0xCB, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCB, 0xBB, 0xBB, 0xBB, 0xCA, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xBB, 0xBB, 0xBC, 0xB8, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xBB, 0xBB, 0xCB, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDB, 0xCC, 0xA8, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xB9, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xAF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0x87, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x7A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xA8, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x9D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xC9, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x77, 0x9B, 0xDE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xDB, 0xA8, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x77, 0x89, 0x9A, 0xAB, 0xBB, 0xBA, 0x99, 0x87, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88
};

#endif // HAS_GRAPHICAL_TFT
