/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 09:28:25 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 18:02:42 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>

int		main()
{
	unsigned int amount;
	FragTrap a("Toto");
	FragTrap b("Hercule");
	FragTrap c(a);
	FragTrap d = FragTrap("Zoro");

	std::cout << std::endl;

	ScavTrap e("Toto");
	ScavTrap f("Hercule");
	ScavTrap g(e);
	ScavTrap h = ScavTrap("Zoro");

	std::cout << std::endl;

	NinjaTrap i("Toto");
	NinjaTrap j("Hercule");
	NinjaTrap k(i);
	NinjaTrap l = NinjaTrap("Zoro");

	std::cout << std::endl;
	
	ClapTrap m("Oups");

	std::cout << std::endl;
	
	SuperTrap n("Wouahh");

	std::cout << std::endl;

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

	std::cout << std::endl;
	
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

	std::cout << std::endl;
	
	amount = i.rangedAttack("Hercule");
	j.takeDamage(amount);
	amount = i.meleeAttack("Hercule");
	j.takeDamage(amount);
	j.beRepaired(10);
	j.ninjaShoebox(a);
	j.ninjaShoebox(e);
	j.ninjaShoebox(l);
	j.ninjaShoebox(m);

	std::cout << std::endl;
}