/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AWeapon.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:16:35 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 17:13:55 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::~AWeapon(void)
{
}


std::string		AWeapon::getName() const
{
	return this->_name;
}

int				AWeapon::getAPCost(void) const
{
	return this->_apcost;
}

int				AWeapon::getDamage(void) const
{
	return this->_damage;
}
