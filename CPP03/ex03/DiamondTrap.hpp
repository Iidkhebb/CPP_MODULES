#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>
#include <string>

#define str std::string

class DiamondTrap : public FragTrap,  public ScavTrap
{
private:
	str name;
public:
	DiamondTrap();
	DiamondTrap(str name);
	DiamondTrap(DiamondTrap const &src);
	DiamondTrap &operator=(DiamondTrap const &rhs);
	~DiamondTrap();
	void whoAmI();
};

