/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PowerFist.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:16:54 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 15:12:00 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("PowerFist", 8, 50)
{
}

void	PowerFist::attack() const
{
	std::cout << "* piouuu piouuu piouuu *"	<< std::endl;
}
