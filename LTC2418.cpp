/*
   LTC2418.cpp - Arduino library for interfacing with the LTC2481 ADC

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


/*
class LTC2418 {

uint32_t read(dac_ch_t ch);
uint32_t read_update(dac_ch_t ch_next);

private:
    int _current_channel;
    

};



#endif*/

#include "LTC2418.h"


LTC2418::LTC2418(int cs) : _cs(cs){
    pinMode(_cs, OUTPUT);
    digitalWrite(_cs, HIGH);
}
    
int32_t LTC2418::read(){
    SPI.beginTransaction(_spi_settings);
    digitalWrite(_cs, LOW);
    byte cmd = (0x80); // 0b1000....
    byte data[4];
    // read in data
    for (int i = 0; i < 4; i++){
        data[i] = SPI.transfer(cmd);
    }
    
    // parse out data
    data[0] & 0x