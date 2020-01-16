/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScavTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 13:55:57 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 14:01:35 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) :	_hit_points(100),
							_max_hit_points(100),
							_energy_points(100),
							_level(1),
							_name("Unknown"),
							_melee_attack_damage(30),
							_ranged_attack_damage(20),
							_armor_damage_reduction(5)
{
	std::cout << "ScavTrap " << this->_name << " created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :	_hit_points(100),
										_max_hit_points(100),
										_energy_points(100),
										_level(1),
										_name(name),
										_melee_attack_damage(30),
										_ranged_attack_damage(20),
										_armor_damage_reduction(5)
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
	this->_hit_points = scavtrap.getHitPoints();
	this->_max_hit_points = scavtrap.getMaxHitPoints();
	this->_energy_points = scavtrap.getEnergyPoints();
	this->_level = scavtrap.getLevel();
	this->_name = scavtrap.getName();
	this->_melee_attack_damage = scavtrap.getMeleeAttackDamage();
	this->_ranged_attack_damage = scavtrap.getRangedAttackDamage();
	this->_armor_damage_reduction = scavtrap.getArmorDamageReduction();
	std::cout << "ScavTrap assignation operator called" << std::endl;
	return *this;
}

unsigned int	ScavTrap::getHitPoints() const
{
	return this->_hit_points;
}

unsigned int	ScavTrap::getMaxHitPoints() const
{

	return this->_max_hit_points;
}

unsigned int	ScavTrap::getEnergyPoints() const
{
	return this->_energy_points;
}

unsigned int	ScavTrap::getLevel() const
{
	return this->_level;
}

std::string		ScavTrap::getName() const
{
	return this->_name;
}

unsigned int	ScavTrap::getMeleeAttackDamage() const
{
	return this->_melee_attack_damage;
}

unsigned int	ScavTrap::getRangedAttackDamage() const
{
	return this->_ranged_attack_damage;
}

unsigned int	ScavTrap::getArmorDamageReduction() const
{
	return this->_armor_damage_reduction;
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

unsigned int	ScavTrap::vaulthunter_dot_exe(std::string const &target)
{

	std::string		listName[5] = {"flying", "atomic", "secret", "magic", "ultim"}; 
	int				randIndex = std::rand() % 5;
	std::string		randAttackName = listName[randIndex];
	int				randAmount = (randIndex + 1) * 5;
	
	if (this->_energy_points >= 25)
	{
		this->_energy_points -= 25;
		std::cout << "SC4V-TP " << this->_name;
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