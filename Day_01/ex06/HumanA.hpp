/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HumanA.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 16:24:42 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:26:42 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"
# include <string>

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		
		void		attack(void) const;

	private:
		std::string _name;
		Weapon		&_weapon;

};

#endif