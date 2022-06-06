#pragma once
#include "ClapTrap.hpp"

#include <iostream>
#include <string>
#define str std::string

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(str name);
		ScavTrap( ScavTrap const & src );
		ScavTrap & operator=(ScavTrap const & rhs);
		~ScavTrap();
		
		void attack(const str& target);
		void guardGate();
};

