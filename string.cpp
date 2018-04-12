//
//  string.cpp
//  Perfection
//
//  Created by Mathias Brekkan on 06/04/2018.
//  Copyright © 2018 Mathias Brekkan. All rights reserved.
//

#include "string.hpp"

inline int stlen(const char* value) {
    int length = 0;
    while (*value != '\0') {
        ++length;
        ++value;
    }
    return length;
}

string::string()
: value(nullptr)
{
}

string::string(const char* initValue) {
    length = stlen(initValue);
    value = new char[length];
    
    for(int i = 0; i < length; i++) {
        value[i] = initValue[i];
    }
}

string::string(int size) {
    length = size;
    value = new char[size];
}

string::string(const string& other) {
    length = other.length;
    value = new char[length];
    
    for(int i = 0; i < length; i++) {
        value[i] = other.value[i];
    }
}

void string::operator=(const string& other) {
    length = other.length;
    if(value != nullptr)
        delete[] value;
    value = new char[length];
    for(int i = 0; i < length; i++) {
        value[i] = other.value[i];
    }
}

bool string::operator==(const string& other) const {
    if(value == other.value)
        return true;
    return false;
}

string::~string() {
    delete[] value;
}

char string::operator[](int i) const {
    return value[i];
}

string string::operator+(const string& other) const {
    string sum(length + other.length);
    for(int i = 0; i < length; i++) {
        sum.value[i] = value[i];
    }
    for(int i = length; i < other.length + length; i++) {
        sum.value[i] = other.value[i - length];
    }
    
    return sum;
}


string string::operator+=(const string& other) {
    *this = *this + other;
    return *this;
}

std::ostream& operator<<(std::ostream& o, const string& msg) {
    for(int i = 0; i < msg.length; i++) {
        o << msg.value[i];
    }
    return o;
}
std::istream& operator>>(std::istream& i, string& msg) {
    char* value;
    i >> value;
    msg = string(value);
    return i;
}

