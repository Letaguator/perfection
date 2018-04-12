//
//  logging.hpp
//  Perfection
//
//  Created by Mathias Brekkan on 10/04/2018.
//  Copyright © 2018 Mathias Brekkan. All rights reserved.
//

#ifndef logging_hpp
#define logging_hpp

#include <iostream>

namespace perf {
    template<typename T>
    inline void print(T value) {
        std::cout << value;
    }
    
    template<typename T>
    inline void println(T value) {
        std::cout << value << '\n';
    }
    
    inline void flush() {
        std::cout << std::flush;
    }
}



#endif /* logging_hpp */
