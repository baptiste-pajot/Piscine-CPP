/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 09:46:22 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 11:17:07 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent		ze;
	Zombie			*ptrZombie;

	ze.setZombieType("Dead Alive");
	ptrZombie = ze.newZombie("Arthur");
	delete ptrZombie;
	ze.randomChump();	
	ze.setZombieType("Ghost");	
	ptrZombie = ze.newZombie("Bouhhh");
	delete ptrZombie;
	ze.randomChump();	
	ze.setZombieType("Mummy");	
	ptrZombie = ze.newZombie("Toutankamon");
	delete ptrZombie;
	ze.randomChump();	
}