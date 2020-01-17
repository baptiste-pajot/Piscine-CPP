/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Sorcerer.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 11:00:18 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 13:34:38 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout <<  this->_name << ", ";
	std::cout << this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout <<  this->_name << ", ";
	std::cout << this->_title << ", is dead.";
	std::cout << " Consequences will never be the same !" << std::endl;
}

void	Sorcerer::introduce(void) const
{
	std::cout <<  "I am " << this->_name << ", ";
	std::cout << this->_title << ", and I like ponies !" << std::endl;
}

std::string	Sorcerer::getName(void) const
{
	return this->_name;
}

std::string	Sorcerer::getTitle(void) const
{
	return this->_title;
}

void	Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream	&operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
	out <<  "I am " << sorcerer.getName() << ", ";
	out << sorcerer.getTitle() << ", and I like ponies !" << std::endl;
	return out;
}