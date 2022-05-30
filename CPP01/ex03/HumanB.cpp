#include "HumanB.hpp"

HumanB::HumanB(str name)
{
	this->_name = name;
	this->_weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}


HumanB::~HumanB()
{
}