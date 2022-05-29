#include "Zombie.hpp"

void randomChump(str name)
{
    Zombie* newZombie = new Zombie(name);
    newZombie->announce();
    delete newZombie;
}