/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AWeapon.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:15:54 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 14:24:01 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "AWeapon.cpp"
#include <iostream>

class AWeapon
{
	private:
		AWeapon(void);
		AWeapon(const AWeapon &aweapon);
		AWeapon &operator=(const AWeapon &aweapon);

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		[...] ~AWeapon();
		std::string [...] getName() const;
		int getAPCost() const;
		int getDamage() const;
		[...] void attack() const = 0;
};