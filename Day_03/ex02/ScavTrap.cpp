/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScavTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 13:55:57 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 16:38:10 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) :	ClapTrap(name)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 50;
	this->_max_energy_points = 50;
	this->_level = 1;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
	std::cout << "ScavTrap " << this->_name << " created" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " destructed" << std::endl;
}

unsigned int	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->_name;
	return ClapTrap::rangedAttack(target);
}

unsigned int	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->_name;
	return ClapTrap::meleeAttack(target);
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{

	std::string		listName[5] = {	"jump on one foot",
									"lick your elbow",
									"sing the reverse alphabet",
									"choose between the egg and the chicken",
									"wait the death coming"}; 
	int				randIndex = std::rand() % 5;
	std::string		randChalName = listName[randIndex];
	
	std::cout << "SC4V-TP " << this->_name;
	std::cout << " challenge " << target;
	std::cout << " with \"" << randChalName ;
	std::cout << "\"" << std::endl;
}