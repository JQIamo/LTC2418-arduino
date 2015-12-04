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

#ifndef LTC2418_h
#define LTC2418_h

#define CCH0 0b10000
#define CCH1 0b11000
#define CCH2 0b10001
#define CCH3 0b11001
#define CCH4 0b10010
#define CCH5 0b11010
#define CCH6 0b10011
#define CCH7 0b11011
// other channels could be defined too...

enum dac_ch_t { CH0, CH1, CH2, CH3, CH4, CH5, CH6, CH7 };

// use, eg, 0x80 | UPDATE | CH0 to update next reading to CH0 (single ended)
#define UPDATE 0b00100000


class LTC2418 {

uint32_t read(dac_ch_t ch);
uint32_t read_update(dac_ch_t ch_next);

private:
    int _current_channel;
    

};



#endif