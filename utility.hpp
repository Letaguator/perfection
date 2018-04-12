//
//  utility.hpp
//  Perfection
//
//  Created by Mathias Brekkan on 10/04/2018.
//  Copyright © 2018 Mathias Brekkan. All rights reserved.
//

#ifndef utility_hpp
#define utility_hpp

#include <stdio.h>
#include <iostream> // Used for isnumber, try to replace this

namespace perf {
    template<typename T>
    struct pair {
        T first;
        T second;
    };
    
    template<typename T>
    T& max(T& first, T& second) {
        if(first > second)
            return first;
        return second;
    }
    
    template<typename T>
    T& min(T& first, T& second) {
        if(first < second)
            return first;
        return second;
    }
    
    inline int readInt() {
        int value = 0;
        
        char current;
        
        current = getchar();
        while(isnumber(current) && current != ' ') {
            value += (current - 48);
            value *= 10;
            current = getchar() ;
        }
        return (value/10);
    }
    
    inline long readLong() {
        long value = 0l;
        
        char current;
        
        current = getchar();
        while(isnumber(current) && current != ' ') {
            value += (current - 48);
            value *= 10l;
            current = getchar() ;
        }
        return (value/10l);
    }
}


#endif /* utility_hpp */
