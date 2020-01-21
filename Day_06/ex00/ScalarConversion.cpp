/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScalarConversion.cpp                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 10:54:04 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 12:18:45 by bpajot      ###    #+. /#+    ###.fr     */
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
		if (this->_scalar[0] >= '0'
			&& this->_scalar[0] <= '9')
			throw ScalarConversion::NonDisplayableException();
		else
			return (char)this->_scalar[0];
	else if (this->_scalar[0] == '4'
		&& this->_scalar[1] == '2')
		throw ScalarConversion::FourtyTwoException();
	else
		throw ScalarConversion::ImpossibleException();
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

const char *ScalarConversion::FourtyTwoException::what(void) const throw()
{
	return "'*'";
}