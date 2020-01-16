/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 09:28:25 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 14:44:47 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	unsigned int amount;
	FragTrap a("Toto");
	FragTrap b("Hercule");
	FragTrap c(a);
	FragTrap d = FragTrap("Zoro");
	ScavTrap e("Toto");
	ScavTrap f("Hercule");
	ScavTrap g(e);
	ScavTrap h = ScavTrap("Zoro");

	amount = a.rangedAttack("Hercule");
	b.takeDamage(amount);
	amount = a.meleeAttack("Hercule");
	b.takeDamage(amount);
	amount = a.vaulthunter_dot_exe("Hercule");
	b.takeDamage(amount);
	b.beRepaired(10);
	amount = a.rangedAttack("Hercule");
	b.takeDamage(amount);
	amount = a.meleeAttack("Hercule");
	b.takeDamage(amount);
	amount = a.vaulthunter_dot_exe("Hercule");
	b.takeDamage(amount);
	amount = a.vaulthunter_dot_exe("Zoro");
	d.takeDamage(amount);
	amount = a.vaulthunter_dot_exe("Zoro");
	d.takeDamage(amount);
	amount = a.vaulthunter_dot_exe("Zoro");
	d.takeDamage(amount);

	amount = e.rangedAttack("Hercule");
	f.takeDamage(amount);
	amount = e.meleeAttack("Hercule");
	f.takeDamage(amount);
	e.challengeNewcomer("Hercule");
	f.beRepaired(10);
	amount = e.rangedAttack("Hercule");
	f.takeDamage(amount);
	amount = e.meleeAttack("Hercule");
	f.takeDamage(amount);
	e.challengeNewcomer("Hercule");
	e.challengeNewcomer("Zoro");
	e.challengeNewcomer("Zoro");
	e.challengeNewcomer("Zoro");
}