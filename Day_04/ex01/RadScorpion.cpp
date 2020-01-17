/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RadScorpion.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:16:58 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 18:08:40 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

void	RadScorpion::takeDamage(int damage)
{
	if (damage >= 0)
	{
		this->_hp -= damage;
		if (this->_hp <= 0)
			RadScorpion::~RadScorpion();
	}
}