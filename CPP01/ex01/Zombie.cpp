#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->_name = "";
}

void Zombie::announce(void)
{   
    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setname(str name)
{
    this->_name = name;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " : destructed." << std::endl;
}
