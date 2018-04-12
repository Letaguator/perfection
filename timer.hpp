//
//  timer.hpp
//  Perfection
//
//  Created by Mathias Brekkan on 10/04/2018.
//  Copyright © 2018 Mathias Brekkan. All rights reserved.
//

#ifndef timer_hpp
#define timer_hpp

#include <ctime>
#include <chrono>

namespace perf {
    class Timer {
    private:
        std::chrono::steady_clock::time_point begin;
        std::chrono::steady_clock::time_point end;
    public:
        Timer() {
            
        }
        
        ~Timer() {
            
        }
        
        void start() {
            begin = std::chrono::high_resolution_clock::now();
        }
        
        void stop() {
            end = std::chrono::high_resolution_clock::now();
        }
        
        void out();
        
        double getSeconds() {
            std::chrono::duration<double> duration = (end - begin);
            return  duration.count();
        }
        
        double getMilliseconds() {
            std::chrono::duration<double> duration = (end - begin);
            return  duration.count() * 1000.0;
        }
    };
}

#endif /* timer_hpp */
