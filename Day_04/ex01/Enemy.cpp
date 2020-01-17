/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Enemy.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:16:46 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 17:12:12 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
}

Enemy::~Enemy(void)
{
}

std::string		Enemy::getType(void) const
{
	return this->_type;
}

int				Enemy::getHP(void) const
{
	return this->_hp;
}

void			Enemy::takeDamage(int damage)
{
	if (damage >= 0)
	{
		this->_hp -= damage;
		if (this->_hp <= 0)
			std::cout << "Enemy is dead" << std::endl;
	}
}
