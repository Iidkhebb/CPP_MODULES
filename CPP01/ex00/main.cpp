#include <iostream>
#include "Zombie.hpp"
#include <stdlib.h>
#define str std::string

int main()
{
    Zombie *obj = newZombie("Foo");
    obj->announce();
    delete obj;

    randomChump("Foo2");
    return 0;
}
