/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   NinjaTrap.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 16:49:08 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 17:10:07 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(std::string name);
		~NinjaTrap(void);

		unsigned int	rangedAttack(std::string const &target);
		unsigned int	meleeAttack(std::string const &target);
		unsigned int	ninjaShoebox(NinjaTrap &target);
		unsigned int	ninjaShoebox(FragTrap &target);
		unsigned int	ninjaShoebox(ScavTrap &target);
		unsigned int	ninjaShoebox(ClapTrap &target);
};
#endif