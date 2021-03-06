/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   SuperTrap.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 17:41:42 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 09:08:57 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_energy_points = NinjaTrap::_energy_points;
	this->_max_energy_points = NinjaTrap::_max_energy_points;
	this->_level = 1;
	this->_melee_attack_damage = NinjaTrap::_melee_attack_damage;
	this->_hit_points = FragTrap::_hit_points;
	this->_max_hit_points = FragTrap::_max_hit_points;
	this->_ranged_attack_damage = FragTrap::_ranged_attack_damage;
	this->_armor_damage_reduction = FragTrap::_armor_damage_reduction;
	std::cout << "SuperTrap " << this->_name << " created" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SuperTrap " << this->_name << " destructed" << std::endl;
}

unsigned int	SuperTrap::rangedAttack(std::string const &target)
{
	std::cout << "SUPER-TP " << this->_name;
	return ClapTrap::rangedAttack(target);
}

unsigned int	SuperTrap::meleeAttack(std::string const &target)
{
	std::cout << "SUPER-TP " << this->_name;
	return ClapTrap::meleeAttack(target);
}
