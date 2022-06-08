#include <iostream>
#include "Zombie.hpp"
#include <stdlib.h>
#define str std::string

int main()
{
    Zombie *obj = newZombie("Foo"); // <- on Heap
    obj->announce(); 
    delete obj;

    randomChump("Foo2"); // <- on Stack 
    return 0;
}
