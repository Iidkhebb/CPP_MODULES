#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: Called default constructor." << std::endl;
	this->name = "";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

}

ScavTrap::ScavTrap(str name)
{
	std::cout << "ScavTrap: Called overloaded constructor." << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap & src ) {
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: called destructor." << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->hitPoints > 0 and this->energyPoints > 0)
	{
		std::cout << "ScavTrap " << name << " is guarding the gate!" << std::endl;
	}
}

void ScavTrap::attack(const str& target)
{
	if (this->hitPoints > 0 and this->energyPoints > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
}