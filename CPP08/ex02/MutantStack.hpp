#pragma once

#include <iostream>
#include <string>
#include <stack>

template <typename T>
#define STACK std::stack<T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename STACK::container_type::iterator iterator;
    MutantStack() {};
    MutantStack(const MutantStack &other) : STACK(other) {};
    MutantStack &operator=(const MutantStack &src)
    {
        if (this != &src)
            this->c = src->c;
        return (*this);
    };
    iterator begin() 
    { 
        return (this->c.begin()); 
    };
    iterator end() 
    { 
        return (this->c.end()); 
    };

}; 