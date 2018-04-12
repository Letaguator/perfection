//
//  random.hpp
//  Perfection
//
//  Created by Mathias Brekkan on 10/04/2018.
//  Copyright © 2018 Mathias Brekkan. All rights reserved.
//

#ifndef random_hpp
#define random_hpp

namespace perf {
    namespace Random {
        int getInt(int min, int max);
        long getLong(long min, long max);
        float getFloat();
        double getDouble();
    }
}


#endif /* random_hpp */
