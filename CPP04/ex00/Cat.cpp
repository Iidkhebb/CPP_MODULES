#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat : Default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &src)
{
    std::cout << "Cat : Copy constructor called" << std::endl;
    *this = src;
}
Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << "Cat : Assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return *this;
}
Cat::~Cat()
{
    std::cout << "Cat : Destructor called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "makeSound called : Moaw!" << std::endl;
}
str Cat::getType(void) const
{
    return this->type;
}