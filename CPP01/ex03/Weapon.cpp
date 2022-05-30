#include "Weapon.hpp"

Weapon::Weapon(str type)
{
	this->_type = type;
}

const str& Weapon::getType()
{
	return this->_type;
}

void Weapon::setType(str type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
}