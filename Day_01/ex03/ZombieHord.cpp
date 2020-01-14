/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieHord.cpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 11:34:58 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 12:23:25 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ZombieHord.hpp"
#include <iostream>

ZombieHord::ZombieHord(int N)
{
	std::string listName[9] = {"Dracula", "Mr. Adams", "Mrs. Adams", "Casper", "Mr. Wolf", "Skeleton", "The Death", "The Evil", "Frankenstein"};
	int randIndex;
	std::string randomName;
	int i = -1;

	this->_N = N;
	if (N > 0)
	{
		this->_type = "Dead Alive";
		this->_zombieTab = new Zombie[N];
		std::cout << "ZombiHord created" << std::endl;
		while (++i < N)
		{
			randIndex = std::rand() % 9;
			randomName = listName[randIndex];
			_zombieTab[i].setZombie(randomName, this->_type);
		}
	}
}

ZombieHord::~ZombieHord(void)
{
	if (this->_N > 0)
	{
		delete [] this->_zombieTab;
		std::cout << "ZombieHord deleted" << std::endl << std::endl;
	}
}

void		ZombieHord::announce(void) const
{
	int		i = -1;

	if (this->_N > 0)
	{
		while(++i < this->_N)
		{
			this->_zombieTab[i].announce();
		}
	}
}