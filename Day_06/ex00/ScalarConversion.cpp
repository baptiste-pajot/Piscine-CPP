/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScalarConversion.cpp                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 10:54:04 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 15:56:58 by bpajot      ###    #+. /#+    ###.fr     */
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
	try
	{
		int		value = std::stoi(this->_scalar);
		if (value >= 32 && value <= 126)
			return((char)value);
		else
		{
			throw ScalarConversion::NonDisplayableException();
		}
	}
	catch(const std::invalid_argument &e)
	{
		throw ScalarConversion::ImpossibleException();
	}
	catch(const std::out_of_range &e)
	{
		throw ScalarConversion::ImpossibleException();
	}
}

ScalarConversion::operator int(void)
{	
	try
	{
		return std::stoi(this->_scalar);
	}
	catch(const std::exception &e)
	{
		throw ScalarConversion::ImpossibleException();
	}
}

ScalarConversion::operator float(void)
{
	try
	{
		return std::stof(this->_scalar);
	}
	catch(const std::exception &e)
	{
		throw ScalarConversion::ImpossibleException();
	}
}

ScalarConversion::operator double(void)
{
	try
	{
		return std::stod(this->_scalar);
	}
	catch(const std::exception &e)
	{
		throw ScalarConversion::ImpossibleException();
	}
}


const char *ScalarConversion::NonDisplayableException::what(void) const throw()
{
	return "Non displayable";
}

const char *ScalarConversion::ImpossibleException::what(void) const throw()
{
	return "impossible";
}