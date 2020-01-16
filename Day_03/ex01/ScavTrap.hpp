/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScavTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 13:56:00 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 13:59:38 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <string>

class ScavTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &scavtrap);
		ScavTrap &operator=(const ScavTrap &scavtrap);

		unsigned int	getHitPoints() const;
		unsigned int	getMaxHitPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getLevel() const;
		std::string		getName() const;
		unsigned int	getMeleeAttackDamage() const;
		unsigned int	getRangedAttackDamage() const;
		unsigned int	getArmorDamageReduction() const;

		unsigned int	rangedAttack(std::string const &target);
		unsigned int	meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		unsigned int	vaulthunter_dot_exe(std::string const &target);

	private:
		unsigned int	_hit_points;
		unsigned int	_max_hit_points;
		unsigned int	_energy_points;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_melee_attack_damage;
		unsigned int	_ranged_attack_damage;
		unsigned int	_armor_damage_reduction;
};
#endif