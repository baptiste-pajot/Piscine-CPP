/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScavTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 13:55:57 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 14:31:47 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) :	_hit_points(100),
							_max_hit_points(100),
							_energy_points(50),
							_max_energy_points(50),
							_level(1),
							_name("Unknown"),
							_melee_attack_damage(20),
							_ranged_attack_damage(15),
							_armor_damage_reduction(3)
{
	std::cout << "ScavTrap " << this->_name << " created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :	_hit_points(100),
										_max_hit_points(100),
										_energy_points(50),
										_max_energy_points(50),
										_level(1),
										_name(name),
										_melee_attack_damage(20),
										_ranged_attack_damage(15),
										_armor_damage_reduction(3)
{
	std::cout << "ScavTrap " << this->_name << " created" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " destructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	*this = scavtrap;
	std::cout << "ScavTrap " << this->_name << " copied" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	this->_hit_points = scavtrap._hit_points;
	this->_max_hit_points = scavtrap._max_hit_points;
	this->_energy_points = scavtrap._energy_points;
	this->_max_energy_points = scavtrap._max_energy_points;
	this->_level = scavtrap._level;
	this->_name = scavtrap._name;
	this->_melee_attack_damage = scavtrap._melee_attack_damage;
	this->_ranged_attack_damage = scavtrap._ranged_attack_damage;
	this->_armor_damage_reduction = scavtrap._armor_damage_reduction;
	std::cout << "ScavTrap assignation operator called" << std::endl;
	return *this;
}

unsigned int	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->_name;
	std::cout << " attacks " << target;
	std::cout << " at range, causing " << this->_ranged_attack_damage;
	std::cout << " points of damage !" << std::endl;
	return this->_ranged_attack_damage;
}

unsigned int	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->_name;
	std::cout << " attacks " << target;
	std::cout << " at melee, causing " << this->_melee_attack_damage;
	std::cout << " points of damage !" << std::endl;
	return this->_melee_attack_damage;
}

void	ScavTrap::takeDamage(unsigned int amount)
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

void	ScavTrap::beRepaired(unsigned int amount)
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