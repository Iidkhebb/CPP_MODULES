#pragma once

#include <iostream>
#include <string>

template <typename T>
void iter(T *array, size_t size, void(*func)(T const &s))
{
    for (size_t i = 0; i < size; i++)
        func(array[i]);
}