/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Sorcerer.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 11:00:18 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 12:00:21 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

std::string  toUpperStr(std::string str)
{
	std::transform(str.begin(), str.end(),str.begin(), ::toupper);
	return str;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout <<  toUpperStr(this->_name) << ", ";
	std::cout << toUpperStr(this->_title) << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout <<  toUpperStr(this->_name) << ", ";
	std::cout << toUpperStr(this->_title) << ", is dead.";
	std::cout << " Consequences will never be the same !" << std::endl;
}

void	Sorcerer::introduce(void) const
{
	std::cout <<  "I am " << toUpperStr(this->_name) << ", ";
	std::cout << toUpperStr(this->_title) << ", and I like ponies !" << std::endl;
}

std::string	Sorcerer::getName(void) const
{
	return this->_name;
}

std::string	Sorcerer::getTitle(void) const
{
	return this->_title;
}

std::ostream	&operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
	out <<  "I am " << toUpperStr(sorcerer.getName()) << ", ";
	out << toUpperStr(sorcerer.getTitle()) << ", and I like ponies !" << std::endl;
	return out;
}