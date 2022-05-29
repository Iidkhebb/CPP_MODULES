#include "Zombie.hpp"

Zombie::Zombie(str name) {
    this->_name = name;
}

void Zombie::announce(void) {
    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << this->_name << " : destructed." << std::endl;
}