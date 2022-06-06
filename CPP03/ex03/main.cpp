#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap monster("Monster");
	monster.beRepaired(2);
	monster.attack("enemy");
	monster.whoAmI();
	return 0;
}
