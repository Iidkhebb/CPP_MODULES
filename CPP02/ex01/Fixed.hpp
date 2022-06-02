#pragma once
#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(Fixed const &src);
    int getRawBits( void ) const;
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
    Fixed &operator=(Fixed const &rhs);

    private:
        int value;
        static const int bits = 8;
};
std::ostream &operator<<(std::ostream &o, Fixed const &i);