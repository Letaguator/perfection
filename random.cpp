//
//  random.cpp
//  Perfection
//
//  Created by Mathias Brekkan on 10/04/2018.
//  Copyright © 2018 Mathias Brekkan. All rights reserved.
//

#include <random>
#include "random.hpp"
using namespace perf;

const int floatGetter = 1000000 + 1;
const int doubleGetter = 1000000000 + 1;

int Random::getInt(int min, int max) {
    return rand()%(max - min) + min;
}
long Random::getLong(long min, long max) {
    return rand()%(max - min) + min;
}
float Random::getFloat() {
    return ( rand()%(floatGetter) ) / ( static_cast<float>(floatGetter) );
}
double Random::getDouble() {
    return ( rand()%(doubleGetter) ) / ( static_cast<double>(doubleGetter) );
}

