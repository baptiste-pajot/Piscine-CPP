/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PlasmaRifle.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:16:50 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 15:12:15 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
}

void	PlasmaRifle::attack() const
{
	std::cout << "* pschhh... SBAM! *"	<< std::endl;
}
