/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 09:46:22 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 12:21:34 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ZombieHord.hpp"

int		main(void)
{
	ZombieHord *zh1 = new ZombieHord(-1);
	zh1->announce();
	delete zh1;
	ZombieHord *zh2 = new ZombieHord(3);
	zh2->announce();
	delete zh2;
	ZombieHord *zh3 = new ZombieHord(10);
	zh3->announce();
	delete zh3;
}