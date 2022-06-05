#pragma once

#include "ClapTrap.hpp"

#include <iostream>
#include <string>
#define str std::string

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(str name);
        FragTrap(FragTrap const & src);
        FragTrap & operator=(FragTrap const & rhs);
        ~FragTrap();

        void highFivesGuys(void);
        void attack(const str& target);
};
