/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 09:46:50 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 11:51:45 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " deleted" << std::endl;
}

void	Zombie::setZombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name;
	std::cout << " (" << this->_type << ")> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}