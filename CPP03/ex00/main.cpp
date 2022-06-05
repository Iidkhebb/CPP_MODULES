#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("PLAYER_1");
	clap.attack("bobiz");
	clap.attack("bobiz_2");
	clap.attack("bobiz_3");
	clap.attack("bobiz_4");
	clap.attack("bobiz_5");
	clap.attack("bobiz_6");
	clap.attack("bobiz_7");
	clap.attack("bobiz_8");
	clap.attack("bobiz_9");
	clap.attack("bobiz_10");
	// LOST ALL HIT POINTS 
	clap.attack("bobiz_11"); // <- CAN NOT ATTACK
	clap.takeDamage(2); // < - CAN NOT TAKE DAMAGE
	clap.beRepaired(10); // GAINED 10 HIT POINTS
	return 0;
}