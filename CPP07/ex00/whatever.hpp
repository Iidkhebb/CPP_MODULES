#pragma once

#include <iostream>
#include <string>

template<typename T>
T &min(T &a, T &b)
{
    if (a == b)
        return b;
    else
        return a < b ? a : b;
}

template<typename T>
T &max(T &a, T &b)
{
    if (a == b)
        return b;
    else
        return a > b ? a : b;
}

template<typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}