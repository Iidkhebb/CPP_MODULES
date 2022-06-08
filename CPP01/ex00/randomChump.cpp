#include "Zombie.hpp"

void randomChump(str name)
{
    Zombie newZombie = Zombie(name);
    newZombie.announce();
}