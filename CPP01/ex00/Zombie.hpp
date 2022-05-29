#pragma once
#include <iostream>
#define str std::string

class Zombie {
	public:
		Zombie(str name);
		~Zombie(void);
		void announce(void);
	private:
		str _name;
};
Zombie* newZombie(str name);
void randomChump(str name);