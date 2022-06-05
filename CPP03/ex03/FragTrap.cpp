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

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	std::cout << "FragTrap : " << this->name << " called operator overloader" << std::endl;
	return *this;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap: called destructor." << std::endl;
}
// --- Canonical Form ---

void FragTrap::highFivesGuys(void)
{
    if (this->hitPoints > 0 and this->energyPoints > 0)
    {
        std::cout << "FragTrap : " << this->name << "shows a high fives." << std::endl;
    }
}

void FragTrap::attack(const str& target)
{
	if (this->hitPoints > 0 and this->energyPoints > 0)
	{
	std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
	}
}