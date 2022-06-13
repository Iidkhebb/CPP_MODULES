#pragma once

#include <string>
#include <iostream>

template<typename T>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &src);
        ~Array();
        Array &operator=(Array const &rhs);

        T &operator[](unsigned int n);
        T const &operator[](unsigned int n) const;
        unsigned int size() const;
    
    private:
        T *_array;
        unsigned int _size;
};

#include "Array.tpp"
