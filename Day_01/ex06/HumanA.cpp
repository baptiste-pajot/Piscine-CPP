/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HumanA.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 16:24:38 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:26:02 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout <<"HumanA "<< this->_name << " with weapon " << this->_weapon.getType() << " created" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout <<"HumanA "<< this->_name << " with weapon " << this->_weapon.getType() << " deleted" << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}