#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal : Default constructor called" << std::endl;
    this->type = "NO TYPE";
}
WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    std::cout << "WrongAnimal : Copy constructor called" << std::endl;
    *this = src;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    std::cout << "WrongAnimal : Assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return *this;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal : Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "makeSound called : --WRONG SOUND--" << std::endl;
}

str WrongAnimal::getType(void) const
{
    return this->type;
}