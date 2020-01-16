/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   FragTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 09:28:56 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 10:59:05 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>

class FragTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(const FragTrap &fragtrap);
		FragTrap &operator=(const FragTrap &fragtrap);

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