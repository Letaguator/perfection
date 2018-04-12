//
//  boolbyte.cpp
//  Perfection
//
//  Created by Mathias Brekkan on 11/04/2018.
//  Copyright © 2018 Mathias Brekkan. All rights reserved.
//

#include "boolbyte.hpp"
using namespace perf;

static const short binArray[8] = {
    0b00000001,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00100000,
    0b01000000,
    0b10000000
};


BoolByte::BoolByte()
: data(0)
{
    
}

void BoolByte::set(int i, bool value) {
    if(value)
        data |= 1 << i;
    else
        data |= 0 << i;
    }


bool BoolByte::get(int i) {
    return (data & binArray[i]) == binArray[i];
}

const bool BoolByte::operator[](int i) {
    return (data & binArray[i]) == binArray[i];
}



