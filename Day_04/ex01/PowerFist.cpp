/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PowerFist.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:16:54 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 17:48:47 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist(void)
{
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *"	<< std::endl;
}
