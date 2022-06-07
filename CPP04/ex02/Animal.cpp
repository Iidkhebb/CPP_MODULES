#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal : Default constructor called" << std::endl;
    this->type = "NO TYPE";
}
Animal::Animal(const Animal &src)
{
    std::cout << "Animal : Copy constructor called" << std::endl;
    *this = src;
}
Animal &Animal::operator=(const Animal &rhs)
{
    std::cout << "Animal : Assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return *this;
}
Animal::~Animal()
{
    std::cout << "Animal : Destructor called" << std::endl;
}

str Animal::getType(void) const
{
    return this->type;
}