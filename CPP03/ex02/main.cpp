#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	FragTrap scav("robot");
	scav.attack("enemy_1");
	scav.highFivesGuys();
	scav.takeDamage(3);
	scav.beRepaired(2);
	return 0;
}