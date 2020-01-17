/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Character.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:16:41 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 18:37:39 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _ap(40), _aweapon(NULL)
{
}

Character::~Character(void)
{
}

std::string		Character::getName(void) const
{
	return this->_name;
}

AWeapon			*Character::getWeapon(void) const
{
	return this->_aweapon;
}

int				Character::getAP(void) const
{
	return this->_ap;
}

void	Character::recoverAP(void)
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void	Character::equip(AWeapon *aweapon)
{
	if (aweapon != NULL)
		this->_aweapon = aweapon;
}

void	Character::attack(Enemy *enemy)
{
	if (this->_aweapon != NULL 
		&& enemy != NULL
		&& this->_ap >= this->_aweapon->getAPCost()) 
	{
		std::cout << this->_name << " attacks ";
		std::cout << enemy->getType() << " with a ";
		std::cout << this->_aweapon->getName() << std::endl;
		this->_aweapon->attack();
		enemy->takeDamage(this->_aweapon->getDamage());
		this->_ap -= this->_aweapon->getAPCost();
	}
}

std::ostream	&operator<<(std::ostream &out, Character const &character)
{
	out << character.getName();
	out << " has " << character.getAP() << " AP ";
	if (character.getWeapon() != NULL)
		out << "and wields a " << character.getWeapon()->getName() << std::endl;
	else
		out << "and is unarmed" << std::endl;
	return out;
}