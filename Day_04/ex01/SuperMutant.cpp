/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   SuperMutant.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:17:01 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 18:09:09 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "SuperMutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

void	SuperMutant::takeDamage(int damage)
{
	if (damage - 3 >= 0)
	{
		this->_hp -= damage - 3;
		if (this->_hp <= 0)
			SuperMutant::~SuperMutant();
	}
}