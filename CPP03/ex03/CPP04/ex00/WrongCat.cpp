#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat : Default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src)
{
    std::cout << "WrongCat : Copy constructor called" << std::endl;
    *this = src;
}
WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
    std::cout << "WrongCat : Assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat : Destructor called" << std::endl;
}
str WrongCat::getType(void) const
{
    return this->type;
}