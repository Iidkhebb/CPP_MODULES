#pragma once

#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() {};
    ~MutantStack() 
    {
        this->_stack.clear();
    };
    MutantStack(const MutantStack &src)
    {
        this->_stack = src._stack;
    };
    MutantStack &operator=(const MutantStack &)
    {
        this->_stack = other._stack;
        return (*this);
    };
    void push(T)
    {
        this->_stack.push_back(value);
    };
    T pop()
    {
        T value = this->_stack.back();
        this->_stack.pop_back();
        return (value);
    };
    T top()
    {
        return (this->_stack.back());
    };
    size_t size()
    {
        return (this->_stack.size());
    };

    
private:
    std::vector<T> _stack;
}; 