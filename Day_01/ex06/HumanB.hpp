/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HumanB.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 16:24:49 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:37:10 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"
# include <string>

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		
		void		attack(void) const;
		void		setWeapon(Weapon &weapon);

	private:
		std::string _name;
		Weapon		*_weapon;
};

#endif