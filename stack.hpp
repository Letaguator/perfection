//
//  stack.hpp
//  Perfection
//
//  Created by Mathias Brekkan on 09/04/2018.
//  Copyright © 2018 Mathias Brekkan. All rights reserved.
//

#ifndef stack_hpp
#define stack_hpp

namespace perf {
    template<typename T>
    class Stack {
    public:
        struct container;
    private:
        container* current;
    public:
        Stack() {
            current = nullptr;
        }
        
        ~Stack() {
            while(!isEmpty())
                pop();
        }
        
        struct container {
            T value;
            container* prev;
            
            container(T value, container* prev)
            : value(value), prev(prev)
            {
                
            }
        };
        
        bool isEmpty() {
            return current == nullptr ? true : false;
        }
        
        void stash(T value) {
            container* ncurrent = new container(value, current);
            current = ncurrent;
        }
        
        T pop() {
            T value = current->value;
            container* ncurrent = current->prev;
            delete current;
            current = ncurrent;
            return value;
        }
    };
}



#endif /* stack_hpp */
