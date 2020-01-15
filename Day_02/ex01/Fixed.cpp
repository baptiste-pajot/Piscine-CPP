/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 09:21:07 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 16:00:27 by bpajot      ###    #+. /#+    ###.fr     */
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
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer)
{
	this->_value = integer << Fixed::_nb_frac_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatnb)
{
	this->_value = (int)roundf(floatnb * (1 << Fixed::_nb_frac_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed			&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = fixed.getRawBits();
	return *this;
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


std::ostream	&operator<<(std::ostream &out, Fixed const &fixed)
{
	float	fl;

	out << fixed.toFloat();
	return out;
}
