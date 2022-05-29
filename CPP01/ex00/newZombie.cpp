#include "Zombie.hpp"

Zombie* newZombie(str name) 
{
    Zombie* newZombie = new Zombie(name);
    return newZombie;
}