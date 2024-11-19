#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
private:
    int                 value;
    static const int    bits = 8;
public:
    Fixed(/* args */);
    Fixed(const Fixed &fixed);
    ~Fixed();
    int     getRawBits() const;
    void    setRawBits(const int value);
    Fixed   &operator=(const Fixed &fixed);
};

#endif