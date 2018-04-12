//
//  scopetimer.hpp
//  Perfection
//
//  Created by Mathias Brekkan on 12/04/2018.
//  Copyright © 2018 Mathias Brekkan. All rights reserved.
//

#ifndef scopetimer_hpp
#define scopetimer_hpp

#include "timer.hpp"

namespace perf {
    class ScopeTimer {
    private:
        Timer timer;
    public:
        ScopeTimer();
        ~ScopeTimer();
    };
}

#endif /* scopetimer_hpp */
