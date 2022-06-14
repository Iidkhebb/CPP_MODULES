#pragma once

#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <array>

template<typename T>
int easyfind(T &container, int n)
{
    typename T::iterator it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        return -1;
    return std::distance(container.begin(), it);
}