/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieEvent.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 10:01:50 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 12:23:36 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent(void)
{
	std::cout << "ZombieEvent created" << std::endl;
	this->_type = "Dead Alive";
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "ZombieEvent deleted" << std::endl;
}

void		ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*		ZombieEvent::newZombie(std::string name) const
{
	return new Zombie(name, this->_type);
}

void		ZombieEvent::randomChump(void) const
{
	std::string		listName[9] = {"Dracula", "Mr. Adams", "Mrs. Adams", "Casper", "Mr. Wolf", "Skeleton", "The Death", "The Evil", "Frankenstein"}; 
	int				randIndex = std::rand() % 9;
	std::string		randomName = listName[randIndex];
	Zombie			zombie(randomName, this->_type);
	
	zombie.announce();
}