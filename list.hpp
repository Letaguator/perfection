//
//  list.hpp
//  Perfection
//
//  Created by Mathias Brekkan on 10/04/2018.
//  Copyright © 2018 Mathias Brekkan. All rights reserved.
//

#ifndef list_hpp
#define list_hpp

namespace perf {
    template<typename T>
    class List {
    private:
        T* data;
        int length;
        int size;
    public:
        List() {
            data = nullptr;
            length = 0;
            size = 0;
        }
        
        List(int initReserve) : List() {
            reserve(initReserve);
        }
        
        ~List() {
            if(data != nullptr)
                delete [] data;
        }
        
        struct iterator {
        private:
            T* data;
        public:
            iterator(T* data) {
                this->data = data;
            }
            iterator operator++() {
                ++data;
                return *this;
            }
            T& operator*() {
                return *data;
            }
            bool operator!=(const iterator& other) {
                if(data == other.data)
                    return false;
                return true;
            }
        };
        
        iterator begin() { return iterator(data); }
        iterator end() {  return iterator(nullptr); }
        
        int& operator[](int i) {
            return data[i];
        }
        
        void add(T value) {
            if(length < size) {
                data[length] = value;
                length++;
            }
            else {
                reserve(size + 1);
                data[length] = value;
                length++;
            }
        }
        
        void erase(T value) {
            for(int i = 0; i < length; i++) {
                if(data[i] == value) {
                    for(int j = i; j < length - 1; j++) {
                        data[j] = data[j + 1];
                    }
                    length--;
                    break;
                }
            }
        }
        
        void eraseAllOf(T value) {
            for(int i = 0; i < length; i++) {
                if(data[i] == value) {
                    for(int j = i; j < length - 1; j++) {
                        data[j] = data[j + 1];
                    }
                    length--;
                }
            }
        }
        
        void reserve(int newSize) {
            if(newSize < size)
                return;
            
            T* temp = new T[newSize];
            
            for(int i = 0; i < size; i++) {
                temp[i] = data[i];
            }
            if(data != nullptr) {
                delete[] data;
            }
            
            data = temp;
            size = newSize;
        }
        
        int getLength() const {
            return length;
        }
    };
}



#endif /* list_hpp */
