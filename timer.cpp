//
//  timer.cpp
//  Perfection
//
//  Created by Mathias Brekkan on 10/04/2018.
//  Copyright © 2018 Mathias Brekkan. All rights reserved.
//

#include <iostream>
#include "timer.hpp"
using namespace perf;

void Timer::out() {
    std::cout << "It took " << getSeconds() << " s" << std::endl;
}
