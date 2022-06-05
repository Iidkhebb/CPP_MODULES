#include "FragTrap.hpp"

// --- Canonical Form ---
FragTrap::FragTrap()
{
	std::cout << "FragTrap: Called default constructor." << std::endl;
	this->name = "";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;

}

FragTrap::FragTrap(str name)
{
	std::cout << "FragTrap: Called default constructor." << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;

}

FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "FragTrap: Copy constructor called" << std::endl;
    *this = src;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: called destructor." << std::endl;
}
// --- Canonical Form ---

void FragTrap::highFivesGuys(void)
{

}