#pragma once
#include <iostream>
#include <string>
#define str std::string

class Weapon
{
public:
	Weapon(str type);
	const str& getType(void);
	void setType(str type);
	~Weapon(void);
private:
	str _type;	
};
