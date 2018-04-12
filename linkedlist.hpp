//
//  linkedlist.hpp
//  Perfection
//
//  Created by Mathias Brekkan on 10/04/2018.
//  Copyright © 2018 Mathias Brekkan. All rights reserved.
//

#ifndef linkedlist_hpp
#define linkedlist_hpp

namespace perf {
    template<typename T>
    class LinkedList {
    private:
        struct Entry;
        Entry* first;
        Entry* last;
    public:
        LinkedList() {
            first = nullptr;
            last = nullptr;
        }
        
        ~LinkedList() {
            while(first->next != nullptr) {
                Entry* toDelete = first;
                first = first->next;
                delete toDelete;
            }
        }
        
        class iterator {
        private:
            Entry* entry;
        public:
            iterator(Entry* entry) {
                this->entry = entry;
            }
            
            T& operator*() {
                return entry->data;
            }
            bool operator!=(iterator& other) {
                if(entry == other.entry)
                    return false;
                return true;
            }
            iterator operator++() {
                entry = entry->next;
                return *this;
            }
            iterator operator--() {
                entry = entry->previous;
                return *this;
            }
        };
        
        iterator begin() { return iterator(first); }
        iterator end() { return iterator(nullptr); }
        
        void addBegin(T value) {
            if(first == nullptr) {
                first = new Entry(value, nullptr, nullptr);
                last = first;
            }
            else {
                Entry* temp = new Entry(value, first, nullptr);
                first->previous = temp;
                first = temp;
            }
        }
        
        void addEnd(T value) {
            if(last == nullptr) {
                last = new Entry(value, nullptr, nullptr);
                first = last;
            }
            else {
                Entry* temp = new Entry(value, nullptr, last);
                last->next = temp;
                last = temp;
            }
        }
        
    private:
        struct Entry {
            T data;
            Entry* previous;
            Entry* next;
            Entry(T data, Entry* next, Entry* previous)
            : data(data), next(next), previous(previous)
            {
                
            }
        };
    };
}


#endif /* linkedlist_hpp */
