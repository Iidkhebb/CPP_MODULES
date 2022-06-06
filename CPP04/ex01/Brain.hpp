#pragma once

#include <iostream>
#include <string>
#define str std::string

class Brain
{
    private:
        str ideas[100];
    public:
        Brain();
        Brain(const Brain &src);
        Brain &operator=(const Brain &rhs);
        virtual ~Brain();
}; 