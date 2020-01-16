/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ClapTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 15:08:51 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 16:20:25 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _name("Unknown")
{
	std::cout << "ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :	_name(name)
{
	std::cout << "ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " destructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
	std::cout << "ClapTrap " << this->_name << " copied" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	this->_hit_points = claptrap._hit_points;
	this->_max_hit_points = claptrap._max_hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_max_energy_points = claptrap._max_energy_points;
	this->_level = claptrap._level;
	this->_name = claptrap._name;
	this->_melee_attack_damage = claptrap._melee_attack_damage;
	this->_ranged_attack_damage = claptrap._ranged_attack_damage;
	this->_armor_damage_reduction = claptrap._armor_damage_reduction;
	std::cout << "ClapTrap assignation operator called" << std::endl;
	return *this;
}

unsigned int	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << " attacks " << target;
	std::cout << " at range, causing " << this->_ranged_attack_damage;
	std::cout << " points of damage !" << std::endl;
	return this->_ranged_attack_damage;
}

unsigned int	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << " attacks " << target;
	std::cout << " at melee, causing " << this->_melee_attack_damage;
	std::cout << " points of damage !" << std::endl;
	return this->_melee_attack_damage;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < this->_armor_damage_reduction)
		amount = 0;
	else
		amount -= this->_armor_damage_reduction;
	if (amount >= this->_hit_points)
	{
		this->_hit_points = 0;
		std::cout << this->_name << " are died !" << std::endl;
	}
	else
	{
		this->_hit_points -= amount;
		std::cout << this->_name << " loose "<< amount << " hit points" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hit_points += amount;
	if (this->_hit_points > this->_max_hit_points)
	{
		this->_hit_points = this->_max_hit_points;
		std::cout << this->_name << " have the max hit points" << std::endl;
	}
	else
		std::cout << this->_name << " win "<< amount << " hit points" << std::endl;
}
