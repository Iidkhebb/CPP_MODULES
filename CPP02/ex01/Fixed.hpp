#pragma once
#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    public:
    Fixed();
    Fixed(Fixed const &src);
    ~Fixed();
    Fixed &operator=(Fixed const &rhs);
    int getRawBits( void ) const;
    void setRawBits( int const raw );

    private:
        int value;
        static const int bits = 8;
};