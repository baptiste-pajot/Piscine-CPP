/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   FragTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 09:01:23 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 14:22:22 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) :	_hit_points(100),
							_max_hit_points(100),
							_energy_points(100),
							_max_energy_points(100),
							_level(1),
							_name("Unknown"),
							_melee_attack_damage(30),
							_ranged_attack_damage(20),
							_armor_damage_reduction(5)
{
	std::cout << "FragTrap " << this->_name << " created" << std::endl;
}

FragTrap::FragTrap(std::string name) :	_hit_points(100),
										_max_hit_points(100),
										_energy_points(100),
										_max_energy_points(100),
										_level(1),
										_name(name),
										_melee_attack_damage(30),
										_ranged_attack_damage(20),
										_armor_damage_reduction(5)
{
	std::cout << "FragTrap " << this->_name << " created" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " destructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
	*this = fragtrap;
	std::cout << "FragTrap " << this->_name << " copied" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
	this->_hit_points = fragtrap._hit_points;
	this->_max_hit_points = fragtrap._max_hit_points;
	this->_energy_points = fragtrap._energy_points;
	this->_max_energy_points = fragtrap._max_energy_points;
	this->_level = fragtrap._level;
	this->_name = fragtrap._name;
	this->_melee_attack_damage = fragtrap._melee_attack_damage;
	this->_ranged_attack_damage = fragtrap._ranged_attack_damage;
	this->_armor_damage_reduction = fragtrap._armor_damage_reduction;
	std::cout << "FragTrap assignation operator called" << std::endl;
	return *this;
}

unsigned int	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name;
	std::cout << " attacks " << target;
	std::cout << " at range, causing " << this->_ranged_attack_damage;
	std::cout << " points of damage !" << std::endl;
	return this->_ranged_attack_damage;
}

unsigned int	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name;
	std::cout << " attacks " << target;
	std::cout << " at melee, causing " << this->_melee_attack_damage;
	std::cout << " points of damage !" << std::endl;
	return this->_melee_attack_damage;
}

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
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