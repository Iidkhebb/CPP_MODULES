#pragma once
#include <string>
#include <iostream>
#define str std::string

class Zombie {
    public:
        Zombie(void);
        ~Zombie(void);
        void announce(void);
        void setname(str name);
    private:
        str _name;
};

Zombie* zombieHorde(int N, str name);