/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 09:28:25 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 11:06:39 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main()
{
	unsigned int amount;
	FragTrap a;
	FragTrap b("Toto");
	FragTrap c("Hercule");
	FragTrap d(FragTrap b);
	a = FragTrap("Zoro");

	amount = a.rangedAttack("Toto");
	b.takeDamage(amount);
	amount = a.meleeAttack("Toto");
	b.takeDamage(amount);
	amount = a.vaulthunter_dot_exe("Toto");
	b.takeDamage(amount);
	b.beRepaired(10);
	amount = a.rangedAttack("Toto");
	b.takeDamage(amount);
	amount = a.meleeAttack("Toto");
	b.takeDamage(amount);
	amount = a.vaulthunter_dot_exe("Toto");
	b.takeDamage(amount);
	amount = a.vaulthunter_dot_exe("Hercule");
	c.takeDamage(amount);
	amount = a.vaulthunter_dot_exe("Hercule");
	c.takeDamage(amount);
	amount = a.vaulthunter_dot_exe("Hercule");
	c.takeDamage(amount);
}