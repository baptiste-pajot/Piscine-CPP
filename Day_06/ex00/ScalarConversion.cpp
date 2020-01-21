/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScalarConversion.cpp                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 10:54:04 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 12:09:54 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(std::string scalar) : _scalar(scalar)
{
}

ScalarConversion::~ScalarConversion(void)
{
}

ScalarConversion::operator char(void)
{
	if (this->_scalar.length() == 1)
		return (char)this->_scalar[0];
	else
		throw ScalarConversion::NonDisplayableException();
}

ScalarConversion::operator int(void)
{
	if ((this->_scalar[0] >= '0'
		&& this->_scalar[0] <= '9')
		|| this->_scalar[0] == '-')
		return std::stoi(this->_scalar);
	else
		throw ScalarConversion::ImpossibleException();
}



const char *ScalarConversion::NonDisplayableException::what(void) const throw()
{
	return "Non displayable";
}

const char *ScalarConversion::ImpossibleException::what(void) const throw()
{
	return "impossible";
}