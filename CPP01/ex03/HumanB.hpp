#pragma once 
#include <iostream>
#include <string>
#include "Weapon.hpp"
#define str std::string

class HumanB
{
public:
	HumanB(str name);
	void attack(void);
	void setWeapon(Weapon &weapon);
	~HumanB(void);
private:
	str _name;
	Weapon *_weapon;
};

