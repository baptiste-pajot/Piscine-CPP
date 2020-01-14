/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 09:46:50 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 11:46:55 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << "Zombie " << name << " created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " deleted" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name;
	std::cout << " (" << this->_type << ")> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}