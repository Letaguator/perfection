//
//  string.hpp
//  Perfection
//
//  Created by Mathias Brekkan on 06/04/2018.
//  Copyright © 2018 Mathias Brekkan. All rights reserved.
//

#ifndef string_hpp
#define string_hpp

#include <iostream>

class string {
    char* value;
    int length;
public:
    string();
    string(const char* value);
    string(const string& string);
    void operator=(const string& other);
    bool operator==(const string& other) const;
    ~string();
    char operator[](int i) const;
    string operator+(const string& other) const;
    string operator+=(const string& other);
    friend std::ostream& operator<<(std::ostream& o, const string& msg);
    friend std::istream& operator>>(std::istream& i, string& msg);
private:
    string(int size);
};

#endif /* string_hpp */
