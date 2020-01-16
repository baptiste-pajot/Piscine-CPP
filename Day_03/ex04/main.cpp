/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 09:28:25 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 18:31:28 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int		main()
{
	SuperTrap a("Wouahh");

	std::cout << std::endl;

	FragTrap b("Toto");
	ScavTrap c("Titi");
	NinjaTrap d("Tata");
	ClapTrap e("Tutu");
	
	std::cout << std::endl;
	
	a.rangedAttack("Hercule");
	a.meleeAttack("Hercule");
	a.takeDamage(10);
	a.takeDamage(100);
	a.beRepaired(10);
	a.beRepaired(100);
	a.vaulthunter_dot_exe("Hercule");
	a.ninjaShoebox(b);
	a.ninjaShoebox(c);
	a.ninjaShoebox(d);
	a.ninjaShoebox(e);

	std::cout << std::endl;
}