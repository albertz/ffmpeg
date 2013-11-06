/*
 * VC-1 and WMV3 decoder
 * copyright (c) 2006 Konstantin Shishkov
 *
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef AVCODEC_VC1ACDATA_H
#define AVCODEC_VC1ACDATA_H

#include <stdint.h>

#include "vc1data.h"

/* which indexes point to last=1 entries in tables */
static const int vc1_last_decode_table[AC_MODES] = {
    119, 99, 85, 81, 67, 58, 126, 109
};

static const uint8_t vc1_index_decode_table[AC_MODES][185][2] = {
{
{  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  0,  7}, {  0,  8},
{  0,  9}, {  0, 10}, {  0, 11}, {  0, 12}, {  0, 13}, {  0, 14}, {  0, 15}, {  0, 16},
{  0, 17}, {  0, 18}, {  0, 19}, {  1,  1}, {  1,  2}, {  1,  3}, {  1,  4}, {  1,  5},
{  1,  6}, {  1,  7}, {  1,  8}, {  1,  9}, {  1, 10}, {  1, 11}, {  1, 12}, {  1, 13},
{  1, 14}, {  1, 15}, {  2,  1}, {  2,  2}, {  2,  3}, {  2,  4}, {  2,  5}, {  2,  6},
{  2,  7}, {  2,  8}, {  2,  9}, {  2, 10}, {  2, 11}, {  2, 12}, {  3,  1}, {  3,  2},
{  3,  3}, {  3,  4}, {  3,  5}, {  3,  6}, {  3,  7}, {  3,  8}, {  3,  9}, {  3, 10},
{  3, 11}, {  4,  1}, {  4,  2}, {  4,  3}, {  4,  4}, {  4,  5}, {  4,  6}, {  5,  1},
{  5,  2}, {  5,  3}, {  5,  4}, {  5,  5}, {  6,  1}, {  6,  2}, {  6,  3}, {  6,  4},
{  7,  1}, {  7,  2}, {  7,  3}, {  7,  4}, {  8,  1}, {  8,  2}, {  8,  3}, {  8,  4},
{  9,  1}, {  9,  2}, {  9,  3}, {  9,  4}, { 10,  1}, { 10,  2}, { 10,  3}, { 11,  1},
{ 11,  2}, { 11,  3}, { 12,  1}, { 12,  2}, { 12,  3}, { 13,  1}, { 13,  2}, { 13,  3},
{ 14,  1}, { 14,  2}, { 14,  3}, { 15,  1}, { 15,  2}, { 15,  3}, { 16,  1}, { 16,  2},
{ 17,  1}, { 17,  2}, { 18,  1}, { 19,  1}, { 20,  1}, { 21,  1}, { 22,  1}, { 23,  1},
{ 24,  1}, { 25,  1}, { 26,  1}, { 27,  1}, { 28,  1}, { 29,  1}, { 30,  1}, {  0,  1},
{  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  1,  1}, {  1,  2}, {  1,  3},
{  1,  4}, {  1,  5}, {  2,  1}, {  2,  2}, {  2,  3}, {  2,  4}, {  3,  1}, {  3,  2},
{  3,  3}, {  3,  4}, {  4,  1}, {  4,  2}, {  4,  3}, {  5,  1}, {  5,  2}, {  6,  1},
{  6,  2}, {  7,  1}, {  7,  2}, {  8,  1}, {  8,  2}, {  9,  1}, {  9,  2}, { 10,  1},
{ 10,  2}, { 11,  1}, { 11,  2}, { 12,  1}, { 12,  2}, { 13,  1}, { 13,  2}, { 14,  1},
{ 14,  2}, { 15,  1}, { 15,  2}, { 16,  1}, { 17,  1}, { 18,  1}, { 19,  1}, { 20,  1},
{ 21,  1}, { 22,  1}, { 23,  1}, { 24,  1}, { 25,  1}, { 26,  1}, { 27,  1}, { 28,  1},
{ 29,  1}, { 30,  1}, { 31,  1}, { 32,  1}, { 33,  1}, { 34,  1}, { 35,  1}, { 36,  1},
{ 37,  1}
},
{
{  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  0,  7}, {  0,  8},
{  0,  9}, {  0, 10}, {  0, 11}, {  0, 12}, {  0, 13}, {  0, 14}, {  0, 15}, {  0, 16},
{  0, 17}, {  0, 18}, {  0, 19}, {  0, 20}, {  0, 21}, {  0, 22}, {  0, 23}, {  1,  1},
{  1,  2}, {  1,  3}, {  1,  4}, {  1,  5}, {  1,  6}, {  1,  7}, {  1,  8}, {  1,  9},
{  1, 10}, {  1, 11}, {  2,  1}, {  2,  2}, {  2,  3}, {  2,  4}, {  2,  5}, {  2,  6},
{  2,  7}, {  2,  8}, {  3,  1}, {  3,  2}, {  3,  3}, {  3,  4}, {  3,  5}, {  3,  6},
{  3,  7}, {  4,  1}, {  4,  2}, {  4,  3}, {  4,  4}, {  4,  5}, {  5,  1}, {  5,  2},
{  5,  3}, {  5,  4}, {  5,  5}, {  6,  1}, {  6,  2}, {  6,  3}, {  6,  4}, {  7,  1},
{  7,  2}, {  7,  3}, {  7,  4}, {  8,  1}, {  8,  2}, {  8,  3}, {  9,  1}, {  9,  2},
{  9,  3}, { 10,  1}, { 10,  2}, { 10,  3}, { 11,  1}, { 11,  2}, { 11,  3}, { 12,  1},
{ 12,  2}, { 13,  1}, { 13,  2}, { 14,  1}, { 14,  2}, { 15,  1}, { 15,  2}, { 16,  1},
{ 16,  2}, { 17,  1}, { 18,  1}, { 19,  1}, { 20,  1}, { 21,  1}, { 22,  1}, { 23,  1},
{ 24,  1}, { 25,  1}, { 26,  1}, {  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5},
{  0,  6}, {  0,  7}, {  0,  8}, {  0,  9}, {  1,  1}, {  1,  2}, {  1,  3}, {  1,  4},
{  1,  5}, {  2,  1}, {  2,  2}, {  2,  3}, {  2,  4}, {  3,  1}, {  3,  2}, {  3,  3},
{  3,  4}, {  4,  1}, {  4,  2}, {  4,  3}, {  5,  1}, {  5,  2}, {  5,  3}, {  6,  1},
{  6,  2}, {  6,  3}, {  7,  1}, {  7,  2}, {  8,  1}, {  8,  2}, {  9,  1}, {  9,  2},
{ 10,  1}, { 10,  2}, { 11,  1}, { 11,  2}, { 12,  1}, { 12,  2}, { 13,  1}, { 13,  2},
{ 14,  1}, { 14,  2}, { 15,  1}, { 16,  1}, { 17,  1}, { 18,  1}, { 19,  1}, { 20,  1},
{ 21,  1}, { 22,  1}, { 23,  1}, { 24,  1}, { 25,  1}, { 26,  1}, { 27,  1}, { 28,  1},
{ 29,  1}, { 30,  1}, { 31,  1}, { 32,  1}, { 33,  1}, { 34,  1}, { 35,  1}, { 36,  1}
},
{
{  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  0,  7}, {  0,  8},
{  0,  9}, {  0, 10}, {  0, 11}, {  0, 12}, {  0, 13}, {  0, 14}, {  0, 15}, {  0, 16},
{  1,  1}, {  1,  2}, {  1,  3}, {  1,  4}, {  1,  5}, {  1,  6}, {  1,  7}, {  1,  8},
{  1,  9}, {  1, 10}, {  1, 11}, {  2,  1}, {  2,  2}, {  2,  3}, {  2,  4}, {  2,  5},
{  2,  6}, {  2,  7}, {  2,  8}, {  3,  1}, {  3,  2}, {  3,  3}, {  3,  4}, {  3,  5},
{  3,  6}, {  3,  7}, {  4,  1}, {  4,  2}, {  4,  3}, {  4,  4}, {  4,  5}, {  5,  1},
{  5,  2}, {  5,  3}, {  5,  4}, {  6,  1}, {  6,  2}, {  6,  3}, {  6,  4}, {  7,  1},
{  7,  2}, {  7,  3}, {  8,  1}, {  8,  2}, {  8,  3}, {  9,  1}, {  9,  2}, {  9,  3},
{ 10,  1}, { 10,  2}, { 10,  3}, { 11,  1}, { 11,  2}, { 11,  3}, { 12,  1}, { 12,  2},
{ 12,  3}, { 13,  1}, { 13,  2}, { 13,  3}, { 14,  1}, { 14,  2}, { 15,  1}, { 15,  2},
{ 16,  1}, { 17,  1}, { 18,  1}, { 19,  1}, { 20,  1}, {  0,  1}, {  0,  2}, {  0,  3},
{  0,  4}, {  1,  1}, {  1,  2}, {  1,  3}, {  1,  4}, {  2,  1}, {  2,  2}, {  2,  3},
{  3,  1}, {  3,  2}, {  3,  3}, {  4,  1}, {  4,  2}, {  5,  1}, {  5,  2}, {  6,  1},
{  6,  2}, {  7,  1}, {  7,  2}, {  8,  1}, {  8,  2}, {  9,  1}, {  9,  2}, { 10,  1},
{ 10,  2}, { 11,  1}, { 11,  2}, { 12,  1}, { 12,  2}, { 13,  1}, { 13,  2}, { 14,  1},
{ 15,  1}, { 16,  1}, { 17,  1}, { 18,  1}, { 19,  1}, { 20,  1}, { 21,  1}, { 22,  1},
{ 23,  1}, { 24,  1}, { 25,  1}, { 26,  1}
},
{
{  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  0,  7}, {  0,  8},
{  0,  9}, {  0, 10}, {  0, 11}, {  0, 12}, {  0, 13}, {  0, 14}, {  1,  1}, {  1,  2},
{  1,  3}, {  1,  4}, {  1,  5}, {  1,  6}, {  1,  7}, {  1,  8}, {  1,  9}, {  2,  1},
{  2,  2}, {  2,  3}, {  2,  4}, {  2,  5}, {  3,  1}, {  3,  2}, {  3,  3}, {  3,  4},
{  4,  1}, {  4,  2}, {  4,  3}, {  4,  4}, {  5,  1}, {  5,  2}, {  5,  3}, {  5,  4},
{  6,  1}, {  6,  2}, {  6,  3}, {  7,  1}, {  7,  2}, {  7,  3}, {  8,  1}, {  8,  2},
{  8,  3}, {  9,  1}, {  9,  2}, {  9,  3}, { 10,  1}, { 10,  2}, { 10,  3}, { 11,  1},
{ 11,  2}, { 11,  3}, { 12,  1}, { 12,  2}, { 12,  3}, { 13,  1}, { 13,  2}, { 14,  1},
{ 14,  2}, { 15,  1}, { 15,  2}, { 16,  1}, { 17,  1}, { 18,  1}, { 19,  1}, { 20,  1},
{ 21,  1}, { 22,  1}, { 23,  1}, { 24,  1}, { 25,  1}, { 26,  1}, { 27,  1}, { 28,  1},
{ 29,  1}, {  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  1,  1}, {  1,  2},
{  1,  3}, {  1,  4}, {  2,  1}, {  2,  2}, {  2,  3}, {  3,  1}, {  3,  2}, {  3,  3},
{  4,  1}, {  4,  2}, {  5,  1}, {  5,  2}, {  6,  1}, {  6,  2}, {  7,  1}, {  7,  2},
{  8,  1}, {  8,  2}, {  9,  1}, {  9,  2}, { 10,  1}, { 10,  2}, { 11,  1}, { 11,  2},
{ 12,  1}, { 12,  2}, { 13,  1}, { 13,  2}, { 14,  1}, { 14,  2}, { 15,  1}, { 15,  2},
{ 16,  1}, { 17,  1}, { 18,  1}, { 19,  1}, { 20,  1}, { 21,  1}, { 22,  1}, { 23,  1},
{ 24,  1}, { 25,  1}, { 26,  1}, { 27,  1}, { 28,  1}, { 29,  1}, { 30,  1}, { 31,  1},
{ 32,  1}, { 33,  1}, { 34,  1}, { 35,  1}, { 36,  1}, { 37,  1}, { 38,  1}, { 39,  1},
{ 40,  1}, { 41,  1}, { 42,  1}, { 43,  1}
},
{
{  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  0,  7}, {  0,  8},
{  0,  9}, {  0, 10}, {  0, 11}, {  0, 12}, {  0, 13}, {  0, 14}, {  0, 15}, {  0, 16},
{  0, 17}, {  0, 18}, {  0, 19}, {  0, 20}, {  0, 21}, {  0, 22}, {  0, 23}, {  0, 24},
{  0, 25}, {  0, 26}, {  0, 27}, {  1,  1}, {  1,  2}, {  1,  3}, {  1,  4}, {  1,  5},
{  1,  6}, {  1,  7}, {  1,  8}, {  1,  9}, {  1, 10}, {  2,  1}, {  2,  2}, {  2,  3},
{  2,  4}, {  2,  5}, {  3,  1}, {  3,  2}, {  3,  3}, {  3,  4}, {  4,  1}, {  4,  2},
{  4,  3}, {  5,  1}, {  5,  2}, {  5,  3}, {  6,  1}, {  6,  2}, {  6,  3}, {  7,  1},
{  7,  2}, {  7,  3}, {  8,  1}, {  8,  2}, {  9,  1}, {  9,  2}, { 10,  1}, { 11,  1},
{ 12,  1}, { 13,  1}, { 14,  1}, {  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5},
{  0,  6}, {  0,  7}, {  0,  8}, {  1,  1}, {  1,  2}, {  1,  3}, {  2,  1}, {  2,  2},
{  3,  1}, {  3,  2}, {  4,  1}, {  4,  2}, {  5,  1}, {  5,  2}, {  6,  1}, {  6,  2},
{  7,  1}, {  8,  1}, {  9,  1}, { 10,  1}, { 11,  1}, { 12,  1}, { 13,  1}, { 14,  1},
{ 15,  1}, { 16,  1}, { 17,  1}, { 18,  1}, { 19,  1}, { 20,  1}
},
{
{  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  0,  7}, {  0,  8},
{  0,  9}, {  0, 10}, {  0, 11}, {  0, 12}, {  1,  1}, {  1,  2}, {  1,  3}, {  1,  4},
{  1,  5}, {  1,  6}, {  2,  1}, {  2,  2}, {  2,  3}, {  2,  4}, {  3,  1}, {  3,  2},
{  3,  3}, {  4,  1}, {  4,  2}, {  4,  3}, {  5,  1}, {  5,  2}, {  5,  3}, {  6,  1},
{  6,  2}, {  6,  3}, {  7,  1}, {  7,  2}, {  8,  1}, {  8,  2}, {  9,  1}, {  9,  2},
{ 10,  1}, { 10,  2}, { 11,  1}, { 12,  1}, { 13,  1}, { 14,  1}, { 15,  1}, { 16,  1},
{ 17,  1}, { 18,  1}, { 19,  1}, { 20,  1}, { 21,  1}, { 22,  1}, { 23,  1}, { 24,  1},
{ 25,  1}, { 26,  1}, {  0,  1}, {  0,  2}, {  0,  3}, {  1,  1}, {  1,  2}, {  2,  1},
{  3,  1}, {  4,  1}, {  5,  1}, {  6,  1}, {  7,  1}, {  8,  1}, {  9,  1}, { 10,  1},
{ 11,  1}, { 12,  1}, { 13,  1}, { 14,  1}, { 15,  1}, { 16,  1}, { 17,  1}, { 18,  1},
{ 19,  1}, { 20,  1}, { 21,  1}, { 22,  1}, { 23,  1}, { 24,  1}, { 25,  1}, { 26,  1},
{ 27,  1}, { 28,  1}, { 29,  1}, { 30,  1}, { 31,  1}, { 32,  1}, { 33,  1}, { 34,  1},
{ 35,  1}, { 36,  1}, { 37,  1}, { 38,  1}, { 39,  1}, { 40,  1}
},
{
{  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  0,  7}, {  0,  8},
{  0,  9}, {  0, 10}, {  0, 11}, {  0, 12}, {  0, 13}, {  0, 14}, {  0, 15}, {  0, 16},
{  0, 17}, {  0, 18}, {  0, 19}, {  0, 20}, {  0, 21}, {  0, 22}, {  0, 23}, {  0, 24},
{  0, 25}, {  0, 26}, {  0, 27}, {  0, 28}, {  0, 29}, {  0, 30}, {  0, 31}, {  0, 32},
{  0, 33}, {  0, 34}, {  0, 35}, {  0, 36}, {  0, 37}, {  0, 38}, {  0, 39}, {  0, 40},
{  0, 41}, {  0, 42}, {  0, 43}, {  0, 44}, {  0, 45}, {  0, 46}, {  0, 47}, {  0, 48},
{  0, 49}, {  0, 50}, {  0, 51}, {  0, 52}, {  0, 53}, {  0, 54}, {  0, 55}, {  0, 56},
{  1,  1}, {  1,  2}, {  1,  3}, {  1,  4}, {  1,  5}, {  1,  6}, {  1,  7}, {  1,  8},
{  1,  9}, {  1, 10}, {  1, 11}, {  1, 12}, {  1, 13}, {  1, 14}, {  1, 15}, {  1, 16},
{  1, 17}, {  1, 18}, {  1, 19}, {  1, 20}, {  2,  1}, {  2,  2}, {  2,  3}, {  2,  4},
{  2,  5}, {  2,  6}, {  2,  7}, {  2,  8}, {  2,  9}, {  2, 10}, {  3,  1}, {  3,  2},
{  3,  3}, {  3,  4}, {  3,  5}, {  3,  6}, {  3,  7}, {  4,  1}, {  4,  2}, {  4,  3},
{  4,  4}, {  4,  5}, {  4,  6}, {  5,  1}, {  5,  2}, {  5,  3}, {  5,  4}, {  5,  5},
{  6,  1}, {  6,  2}, {  6,  3}, {  6,  4}, {  7,  1}, {  7,  2}, {  7,  3}, {  8,  1},
{  8,  2}, {  8,  3}, {  9,  1}, {  9,  2}, {  9,  3}, { 10,  1}, { 10,  2}, { 11,  1},
{ 11,  2}, { 12,  1}, { 12,  2}, { 13,  1}, { 13,  2}, { 14,  1}, {  0,  1}, {  0,  2},
{  0,  3}, {  0,  4}, {  1,  1}, {  1,  2}, {  1,  3}, {  2,  1}, {  2,  2}, {  2,  3},
{  3,  1}, {  3,  2}, {  4,  1}, {  4,  2}, {  5,  1}, {  5,  2}, {  6,  1}, {  6,  2},
{  7,  1}, {  7,  2}, {  8,  1}, {  8,  2}, {  9,  1}, {  9,  2}, { 10,  1}, { 10,  2},
{ 11,  1}, { 11,  2}, { 12,  1}, { 12,  2}, { 13,  1}, { 13,  2}, { 14,  1}, { 14,  2},
{ 15,  1}, { 16,  1}
},
{
{  0,  1}, {  0,  2}, {  0,  3}, {  0,  4}, {  0,  5}, {  0,  6}, {  0,  7}, {  0,  8},
{  0,  9}, {  0, 10}, {  0, 11}, {  0, 12}, {  0, 13}, {  0, 14}, {  0, 15}, {  0, 16},
{  0, 17}, {  0, 18}, {  0, 19}, {  0, 20}, {  0, 21}, {  0, 22}, {  0, 23}, {  0, 24},
{  0, 25}, {  0, 26}, {  0, 27}, {  0, 28}, {  0, 29}, {  0, 30}, {  0, 31}, {  0, 32},
{  1,  1}, {  1,  2}, {  1,  3}, {  1,  4}, {  1,  5}, {  1,  6}, {  1,  7}, {  1,  8},
{  1,  9}, {  1, 10}, {  1, 11}, {  1, 12}, {  1, 13}, {  2,  1}, {  2,  2}, {  2,  3},
{  2,  4}, {  2,  5}, {  2,  6}, {  2,  7}, {  2,  8}, {  3,  1}, {  3,  2}, {  3,  3},
{  3,  4}, {  3,  5}, {  3,  6}, {  4,  1}, {  4,  2}, {  4,  3}, {  4,  4}, {  4,  5},
{  5,  1}, {  5,  2}, {  5,  3}, {  5,  4}, {  6,  1}, {  6,  2}, {  6,  3}, {  6,  4},
{  7,  1}, {  7,  2}, {  7,  3}, {  8,  1}, {  8,  2}, {  8,  3}, {  9,  1}, {  9,  2},
{  9,  3}, { 10,  1}, { 10,  2}, { 11,  1}, { 11,  2}, { 12,  1}, { 12,  2}, { 13,  1},
{ 13,  2}, { 14,  1}, { 14,  2}, { 15,  1}, { 15,  2}, { 16,  1}, { 16,  2}, { 17,  1},
{ 17,  2}, { 18,  1}, { 18,  2}, { 19,  1}, { 19,  2}, { 20,  1}, { 20,  2}, { 21,  1},
{ 21,  2}, { 22,  1}, { 22,  2}, { 23,  1}, { 24,  1}, {  0,  1}, {  0,  2}, {  0,  3},
{  0,  4}, {  1,  1}, {  1,  2}, {  1,  3}, {  2,  1}, {  2,  2}, {  2,  3}, {  3,  1},
{  3,  2}, {  3,  3}, {  4,  1}, {  4,  2}, {  5,  1}, {  5,  2}, {  6,  1}, {  6,  2},
{  7,  1}, {  7,  2}, {  8,  1}, {  8,  2}, {  9,  1}, {  9,  2}, { 10,  1}, { 10,  2},
{ 11,  1}, { 11,  2}, { 12,  1}, { 12,  2}, { 13,  1}, { 13,  2}, { 14,  1}, { 14,  2},
{ 15,  1}, { 15,  2}, { 16,  1}, { 16,  2}, { 17,  1}, { 17,  2}, { 18,  1}, { 18,  2},
{ 19,  1}, { 19,  2}, { 20,  1}, { 20,  2}, { 21,  1}, { 21,  2}, { 22,  1}, { 22,  2},
{ 23,  1}, { 23,  2}, { 24,  1}, { 24,  2}, { 25,  1}, { 25,  2}, { 26,  1}, { 26,  2},
{ 27,  1}, { 27,  2}, { 28,  1}, { 28,  2}, { 29,  1}, { 30,  1}
}
};

static const uint8_t vc1_delta_level_table[AC_MODES][31] = {
{
      19,    15,    12,    11,     6,     5,     4,     4,     4,     4,
       3,     3,     3,     3,     3,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
},
{
      23,    11,     8,     7,     5,     5,     4,     4,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
},
{
      16,    11,     8,     7,     5,     4,     4,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     1,     1,     1,     1,
       1
},
{
      14,     9,     5,     4,     4,     4,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
},
{
      27,    10,     5,     4,     3,     3,     3,     3,     2,     2,
       1,     1,     1,     1,     1
},
{
      12,     6,     4,     3,     3,     3,     3,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
},
{
      56,    20,    10,     7,     6,     5,     4,     3,     3,     3,
       2,     2,     2,     2,     1
},
{
      32,    13,     8,     6,     5,     4,     4,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1
}
};

static const uint8_t vc1_last_delta_level_table[AC_MODES][44] = {
{
       6,     5,     4,     4,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
},
{
       9,     5,     4,     4,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
},
{
       4,     4,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
},
{
       5,     4,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
},
{
       8,     3,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
},
{
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
},
{
       4,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1
},
{
       4,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1
}
};

static const uint8_t vc1_delta_run_table[AC_MODES][57] = {
{
      -1,    30,    17,    15,     9,     5,     4,     3,     3,     3,
       3,     3,     2,     1,     1,     1,     0,     0,     0,
       0
},
{
      -1,    26,    16,    11,     7,     5,     3,     3,     2,     1,
       1,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
},
{
      -1,    20,    15,    13,     6,     4,     3,     3,     2,     1,
       1,     1,     0,     0,     0,     0,     0
},
{
      -1,    29,    15,    12,     5,     2,     1,     1,     1,     1,
       0,     0,     0,     0,     0
},
{
      -1,    14,     9,     7,     3,     2,     1,     1,     1,     1,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0
},
{
      -1,    26,    10,     6,     2,     1,     1,     0,     0,     0,
       0,     0,     0
},
{
      -1,    14,    13,     9,     6,     5,     4,     3,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
},
{
      -1,    24,    22,     9,     6,     4,     3,     2,     2,     1,
       1,     1,     1,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
}
};

static const uint8_t vc1_last_delta_run_table[AC_MODES][10] = {
{
      -1,    37,    15,     4,     3,     1,     0
},
{
      -1,    36,    14,     6,     3,     1,     0,     0,     0,
       0
},
{
      -1,    26,    13,     3,     1
},
{
      -1,    43,    15,     3,     1,     0
},
{
      -1,    20,     6,     1,     0,     0,     0,     0,     0
},
{
      -1,    40,     1,     0
},
{
      -1,    16,    14,     2,     0
},
{
      -1,    30,    28,     3,     0
}
};

#endif /* AVCODEC_VC1ACDATA_H */
