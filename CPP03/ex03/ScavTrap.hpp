#pragma once
#include "ClapTrap.hpp"

#include <iostream>
#include <string>
#define str std::string

class ScavTrap :virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(str name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();
		
		void attack(const str& target);
		void guardGate();
};

