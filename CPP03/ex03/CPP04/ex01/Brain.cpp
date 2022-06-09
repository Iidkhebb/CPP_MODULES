#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain : Default constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
    std::cout << "Brain : Copy constructor called" << std::endl;
    *this = src;
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::cout << "Brain : Assignment operator called" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = rhs.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain : Destructor called" << std::endl;
}