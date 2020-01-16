/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   NinjaTrap.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 16:49:02 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 17:25:08 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(std::string name) :	ClapTrap(name)	
{
	this->_hit_points = 60;
	this->_max_hit_points = 60;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_level = 1;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 0;
	std::cout << "NinjaTrap " << this->_name << " created" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NinjaTrap " << this->_name << " destructed" << std::endl;
}

unsigned int	NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "NINJA-TP " << this->_name;
	return ClapTrap::rangedAttack(target);
}

unsigned int	NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NINJA-TP " << this->_name;
	return ClapTrap::meleeAttack(target);
}

unsigned int	NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << "NINJA-TP " << this->_name;
	std::cout << " attacks " << target._name;
	std::cout << " with trahison attack";
	std::cout << ", causing " << target._hit_points;
	std::cout << " points of damage !" << std::endl;
	std::cout << target._name << " was killed by his friend !" << std::endl;
	return target._hit_points;
}

unsigned int	NinjaTrap::ninjaShoebox(FragTrap &target)
{
	(void)target;
	std::cout << "NINJA-TP " << this->_name;
	std::cout << " attacks a FR4G_TP";
	std::cout << " with fail attack";
	std::cout << ", causing  0 points of damage !" << std::endl;
	return 0;
}

unsigned int	NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	(void)target;
	std::cout << "NINJA-TP " << this->_name;
	std::cout << " attacks a SC4V_TP";
	std::cout << " with ultime attack";
	std::cout << ", causing  1000 points of damage !" << std::endl;
	return 1000;
}

unsigned int	NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	(void)target;
	std::cout << "NINJA-TP " << this->_name;
	std::cout << " attacks an unknown Trap";
	std::cout << " with foreigner attack";
	std::cout << ", causing 10 points of damage !" << std::endl;
	return 10;
}