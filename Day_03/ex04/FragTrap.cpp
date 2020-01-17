/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   FragTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 09:01:23 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 08:56:00 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)	
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << "FragTrap " << this->_name << " created" << std::endl;
}

FragTrap::FragTrap(std::string name) :	ClapTrap(name)	
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << "FragTrap " << this->_name << " created" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " destructed" << std::endl;
}

unsigned int	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name;
	return ClapTrap::rangedAttack(target);
}

unsigned int	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name;
	return ClapTrap::meleeAttack(target);
}

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string		listName[5] = {"flying", "atomic", "secret", "magic", "ultim"}; 
	int				randIndex = std::rand() % 5;
	std::string		randAttackName = listName[randIndex];
	int				randAmount = (randIndex + 1) * 5;
	
	if (this->_energy_points >= 25)
	{
		this->_energy_points -= 25;
		std::cout << "FR4G-TP " << this->_name;
		std::cout << " attacks " << target;
		std::cout << " with " << randAttackName << " attack";
		std::cout << ", causing " << randAmount;
		std::cout << " points of damage !" << std::endl;
		return randAmount;
	}
	else
	{
		std::cout << this->_name << " don't have enought energy" << std::endl;
		return 0;
	}
}