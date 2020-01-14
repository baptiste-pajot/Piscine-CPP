/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HumanB.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 16:24:46 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:37:05 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _name(name)
{
	std::cout <<"HumanB "<< this->_name << " created" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout <<"HumanB "<< this->_name << " deleted" << std::endl;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon; 
}