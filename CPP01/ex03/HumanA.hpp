#pragma once 
#include <iostream>
#include <string>
#include "Weapon.hpp"
#define str std::string

class HumanA
{
public:
	HumanA(str name, Weapon &weapon);
	void attack(void);
	~HumanA(void);
private:
	str _name;
	Weapon &_weapon;
};

