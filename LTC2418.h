/*
   LTC2418.h - Arduino library for interfacing with the LTC2481 ADC

   Created by Neal Pisenti, 2015
   JQI - Joint Quantum Institute

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#include "Arduino.h"

#ifndef LTC2481_h
#define LTC2481_h

// from LTC2481 datasheet: http://cds.linear.com/docs/en/datasheet/2481fd.pdf

// Useful defines for the LTC2481 and LTC2485 - OR them together to make the
// 8 bit config word.
#define READ 0x01               // bitwise OR with address for read or write
#define WRITE 0x00
#define LTC248XADDR 0b01001000  // The one and only LTC248X in this circuit,
                                // with both address lines floating.
 
// Select gain - 1 to 256 (also depends on speed setting)
#define GAIN1 0b00000000 // G = 1 (SPD = 0), G = 1 (SPD = 1)
#define GAIN2 0b00100000 // G = 4 (SPD = 0), G = 2 (SPD = 1)
#define GAIN3 0b01000000 // G = 8 (SPD = 0), G = 4 (SPD = 1)
#define GAIN4 0b01100000 // G = 16 (SPD = 0), G = 8 (SPD = 1)
#define GAIN5 0b10000000 // G = 32 (SPD = 0), G = 16 (SPD = 1)
#define GAIN6 0b10100000 // G = 64 (SPD = 0), G = 32 (SPD = 1)
#define GAIN7 0b11000000 // G = 128 (SPD = 0), G = 64 (SPD = 1)
#define GAIN8 0b11100000 // G = 256 (SPD = 0), G = 128 (SPD = 1)

// Select ADC source - differential input or PTAT circuit
#define VIN 0b00000000
#define PTAT 0b00001000

// Select rejection frequency - 50, 55, or 60Hz
#define R50 0b00000010
#define R55 0b00000000
#define R60 0b00000100

// Speed settings is bit 7 in the 2nd byte
#define SLOW 0b00000000 // slow output rate with autozero
#define FAST 0b00000001 // fast output rate with no autozero


class LTC2481 {


};



#endif