/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   SuperTrap.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 17:41:49 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 17:59:02 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <string>

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(std::string name);
		~SuperTrap(void);

		unsigned int	rangedAttack(std::string const &target);
		unsigned int	meleeAttack(std::string const &target);
		unsigned int	vaulthunter_dot_exe(std::string const &target);
		unsigned int	ninjaShoebox(NinjaTrap &target);
		unsigned int	ninjaShoebox(FragTrap &target);
		unsigned int	ninjaShoebox(ScavTrap &target);
		unsigned int	ninjaShoebox(ClapTrap &target);
};
#endif
