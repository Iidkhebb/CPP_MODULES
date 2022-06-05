#include "ClapTrap.hpp"

// --- Canonical Form ---
ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap: Called default constructor." << std::endl;
	this->name = "";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(str name)
{
	std::cout << "ClapTrap: Called overloaded constructor." << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	std::cout << "ClapTrap: " << name << " called copy contructor" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	std::cout << "ClapTrap: " << name << " called operator overloader" << std::endl;
	return *this;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: " << name << " called destructor." << std::endl;
}
// --- Canonical Form ---

void ClapTrap::attack(const str& target)
{
	if (this->hitPoints > 0 and this->energyPoints > 0)
	{
	std::cout << "ClapTrap " << name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0 and this->energyPoints > 0)
	{
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << name << " lost " << amount << " hit points" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 0 or this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << name << " is repaired and got " << amount << " of hit point back." << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
}