//
//  boolbyte.hpp
//  Perfection
//
//  Created by Mathias Brekkan on 11/04/2018.
//  Copyright © 2018 Mathias Brekkan. All rights reserved.
//

#ifndef boolbyte_hpp
#define boolbyte_hpp

class BoolByte {
private:
    char data;
public:
    BoolByte();
    const bool operator[](int i);
    bool get(int i);
    void set(int i, bool value);
};

#endif /* boolbyte_hpp */
