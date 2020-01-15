/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 09:21:07 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 17:27:22 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_nb_frac_bits = 8;

Fixed::Fixed(void)
{
	this->_value = 0;
}

Fixed::Fixed(const int integer)
{
	this->_value = integer << Fixed::_nb_frac_bits;
}

Fixed::Fixed(const float floatnb)
{
	this->_value = (int)roundf(floatnb * (1 << Fixed::_nb_frac_bits));
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed			&Fixed::operator=(const Fixed &fixed)
{
	this->_value = fixed.getRawBits();
	return *this;
}

bool			Fixed::operator>(const Fixed &fixed) const
{
	if (this->_value > fixed.getRawBits())
		return true;
	else
		return false;
}

bool			Fixed::operator<(const Fixed &fixed) const
{
	if (this->_value < fixed.getRawBits())
		return true;
	else
		return false;
}

bool			Fixed::operator>=(const Fixed &fixed) const
{
	if (this->_value >= fixed.getRawBits())
		return true;
	else
		return false;
}

bool			Fixed::operator<=(const Fixed &fixed) const
{
	if (this->_value <= fixed.getRawBits())
		return true;
	else
		return false;
}

bool			Fixed::operator==(const Fixed &fixed) const
{
	if (this->_value == fixed.getRawBits())
		return true;
	else
		return false;
}

bool			Fixed::operator!=(const Fixed &fixed) const
{
	if (this->_value != fixed.getRawBits())
		return true;
	else
		return false;
}

Fixed			Fixed::operator+(const Fixed &fixed) const
{
	Fixed	sum;

	sum.setRawBits(this->_value + fixed.getRawBits());
	return sum;
}

Fixed			Fixed::operator-(const Fixed &fixed) const
{
	Fixed	diff;

	diff.setRawBits(this->_value - fixed.getRawBits());
	return diff;
}

Fixed			Fixed::operator*(const Fixed &fixed) const
{
	Fixed	cross(this->toFloat() * fixed.toFloat());
	return cross;
}

Fixed			Fixed::operator/(const Fixed &fixed) const
{
	Fixed	frac(this->toFloat() / fixed.toFloat());
	return frac;
}

Fixed			Fixed::operator++()
{
	++this->_value;
	Fixed ret(*this);
	return ret;
}

Fixed			Fixed::operator++(int)
{
	Fixed ret(*this);
	this->_value++;
	return ret;
}

Fixed			Fixed::operator--()
{
	--this->_value;
	Fixed ret(*this);
	return ret;
}

Fixed			Fixed::operator--(int)
{
	Fixed ret(*this);
	this->_value--;
	return ret;
}

int				Fixed::getRawBits(void) const
{
	return this->_value;
}

void			Fixed::setRawBits(int const raw)
{
	this->_value = raw;	
}

float			Fixed::toFloat(void) const
{
	float	fl;

	fl = this->getRawBits() / (float)(1 << Fixed::_nb_frac_bits);
	return fl;
}

int			Fixed::toInt(void) const
{
	int	integer;

	integer = this->getRawBits() >> Fixed::_nb_frac_bits;
	return integer;
}

Fixed const	&Fixed::max(const Fixed &fixedA, const Fixed &fixedB)
{
	if (fixedA > fixedB)
		return fixedA;
	else
		return fixedB;
} 

Fixed const	&Fixed::min(const Fixed &fixedA, const Fixed &fixedB)
{
	if (fixedA < fixedB)
		return fixedA;
	else
		return fixedB;
} 

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed)
{
	float	fl;

	out << fixed.toFloat();
	return out;
}
