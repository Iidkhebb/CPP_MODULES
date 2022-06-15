#pragma once

#include <algorithm>
#include <iostream>
#include <string>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef std::stack<T> sk;
    typedef typename sk::container_type::iterator iterator;
    MutantStack() {};
    MutantStack(const MutantStack &other) : sk(other) {};
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