/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Character.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:15:59 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 16:58:45 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		Character(void);
		Character(const Character &character);
		Character &operator=(const Character &character);

	protected:
		std::string		_name;
		int				_ap;
		AWeapon			*_aweapon;

	public:
		Character(std::string const &name);
		virtual ~Character();
		
		std::string getName(void) const;
		AWeapon		*getWeapon(void) const;
		int			getAP(void) const;
		
		void 		recoverAP(void);
		void 		equip(AWeapon *aweapon);
		void 		attack(Enemy *enemy);
};

std::ostream	&operator<<(std::ostream &out, Character const &character);

#endif