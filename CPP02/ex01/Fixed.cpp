#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(const int value)
{

    this->value = value << this->bits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
    this->value = roundf(value * 256);
    std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    return this->value;
}

float Fixed::toFloat( void ) const
{
    return (float)this->getRawBits() / 256;
}

int Fixed::toInt( void ) const
{
    return this->getRawBits() >> this->bits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return o;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
