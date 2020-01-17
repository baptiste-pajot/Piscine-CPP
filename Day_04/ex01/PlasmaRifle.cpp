/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PlasmaRifle.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:16:50 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 17:46:34 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle(void)
{
}


void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *"	<< std::endl;
}
