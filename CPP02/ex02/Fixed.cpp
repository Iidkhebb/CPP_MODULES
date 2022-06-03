#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
}
Fixed::Fixed(Fixed const &src)
{
    *this = src;
}

Fixed::Fixed(const int value)
{
    this->value = value << this->bits;
}

Fixed::Fixed(const float value)
{
    this->value = roundf(value * 256);
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    this->value = rhs.getRawBits();
    return *this;
}
bool Fixed::operator>(Fixed const &rhs) const
{
    return (this->value > rhs.getRawBits());
}
bool Fixed::operator<(Fixed const &rhs) const
{
    return (this->value < rhs.getRawBits());
}
bool Fixed::operator>=(Fixed const &rhs) const
{
    return (this->value >= rhs.getRawBits());
}
bool Fixed::operator<=(Fixed const &rhs) const
{
    return (this->value <= rhs.getRawBits());
}
bool Fixed::operator==(Fixed const &rhs) const
{
    return (this->value == rhs.getRawBits());
}
bool Fixed::operator!=(Fixed const &rhs) const
{
    return (this->value != rhs.getRawBits());
}
Fixed Fixed::operator+(Fixed const &rhs) const
{
    Fixed result;
    result.value = this->value + rhs.getRawBits();
    return result;
}
Fixed Fixed::operator-(Fixed const &rhs) const
{
    Fixed result;
    result.value = this->value - rhs.getRawBits();
    return result;
}
Fixed Fixed::operator*(Fixed const &rhs) const
{
    Fixed result;
    result.value = (this->value * rhs.getRawBits()) >> this->bits;
    return result;
}
Fixed Fixed::operator/(Fixed const &rhs) const
{
    Fixed result;
    result.value = (this->value << this->bits) / rhs.getRawBits();
    return result;
}
Fixed Fixed::operator++()
{
    this->value++;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed result = *this;
    this->value++;
    return result;
}
Fixed Fixed::operator--()
{
    this->value--;
    return *this;
}
Fixed Fixed::operator--(int)
{
    Fixed result = *this;
    this->value--;
    return result;
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

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    return b;
}
Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return a;
    return b;
} 
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return b;
}
Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a > b)
        return a;
    return b;
}
std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return o;
}

Fixed::~Fixed()
{
}
