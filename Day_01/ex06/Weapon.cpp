/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Weapon.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 16:24:55 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:39:19 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : _type(type) 
{
	std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon deleted" << std::endl;
}

const std::string	&Weapon::getType(void) const
{
	return(this->_type);
}

void				Weapon::setType(std::string type)
{
	this->_type = type;
	std::cout << "Weapon modified" << std::endl;
}		