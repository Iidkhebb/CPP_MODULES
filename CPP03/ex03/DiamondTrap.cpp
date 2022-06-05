#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap: Called default constructor." << std::endl;
	this->name = "";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}
DiamondTrap::DiamondTrap(str name)
{
	std::cout << "DiamondTrap Called overloaded constructor." << std::endl;
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}
DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	*this = src;
	std::cout << "ClapTrap " << this->name << " called copy contructor" << std::endl;
}

DiamondTrap &operator=(DiamondTrap const &rhs)
{
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	std::cout << "DiamondTrap " << this->name << " called operator overloader" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " is destroyed" << std::endl;
}

void DiamondTrap::whoAmI()
{

}