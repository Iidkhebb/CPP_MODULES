#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	ScavTrap scav("robot");
	scav.attack("enemy_1");
	scav.guardGate();
	scav.takeDamage(3);
	scav.beRepaired(2);
	return 0;
}