/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Victim.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 13:06:42 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 13:50:09 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>

Victim::Victim(std::string name) : _name(name)
{
	std::cout <<  "Some random victim called " << this->_name;
	std::cout << " just popped !" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name;
	std::cout << " just died for no apparent reason !" << std::endl;
}

void	Victim::introduce(void) const
{
	std::cout <<  "I'm " << this->_name << " and I like otters !" << std::endl;
}

std::string	Victim::getName(void) const
{
	return this->_name;
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, Victim const &victim)
{
	out <<  "I'm " << victim.getName() << " and I like otters !" << std::endl;
	return out;
}