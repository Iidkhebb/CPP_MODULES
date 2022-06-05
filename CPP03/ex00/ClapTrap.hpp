#pragma once

#include <iostream>
#include <string>
#define str std::string

class ClapTrap
{
private:
	str name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
public:
	// --- Canonical Form ---
	ClapTrap();
	ClapTrap(str name);
	ClapTrap(ClapTrap const & src);
	ClapTrap & operator=(ClapTrap const & rhs);
	~ClapTrap();
	// --- Canonical Form ---
	void attack(const str& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};