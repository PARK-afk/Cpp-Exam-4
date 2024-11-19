#include <iostream>

#include "Fixed.hpp"

// << >> = [] () ->

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(const int num)
{
	this->value = num << this->bits;
}

Fixed::Fixed(const float num)
{
	this->value = roundf(num * (1 << this->bits));
}

Fixed::Fixed(const Fixed &fixed)
{
	this->value = fixed.getRawBits();
}

Fixed::~Fixed()
{
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (this->getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->getRawBits() < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this->getRawBits() != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	Fixed	ret(this->toFloat() + fixed.toFloat());
	return (ret);
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	Fixed	ret(this->toFloat() - fixed.toFloat());
	return (ret);
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	Fixed	ret(this->toFloat() * fixed.toFloat());
	return (ret);
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	Fixed	ret(this->toFloat() / fixed.toFloat());
	return (ret);
}

Fixed &Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

const Fixed Fixed::operator++(int)
{
	const Fixed	ret(*this);
	this->value++;
	return (ret);
}

Fixed &Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

const Fixed Fixed::operator--(int) 
{
	const Fixed	ret(*this);
	this->value--;
	return (ret);
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	if (this == &fixed)
		return (*this);
	this->value = fixed.getRawBits();
	return (*this);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

int	Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->bits));
}

int		Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}
