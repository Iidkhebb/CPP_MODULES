#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog : Default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &src)
{
    std::cout << "Dog : Copy constructor called" << std::endl;
    *this = src;
}
Dog &Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog : Assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
        this->brain = new Brain(*rhs.brain);
    }
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog : Destructor called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "makeSound called : Woof!" << std::endl;
}
str Dog::getType(void) const
{
    return this->type;
}