//
//  scopetimer.cpp
//  Perfection
//
//  Created by Mathias Brekkan on 12/04/2018.
//  Copyright © 2018 Mathias Brekkan. All rights reserved.
//

#include "scopetimer.hpp"

namespace perf {
    ScopeTimer::ScopeTimer() {
        timer.start();
    }
    
    ScopeTimer::~ScopeTimer() {
        timer.stop();
        timer.out();
    }
}

