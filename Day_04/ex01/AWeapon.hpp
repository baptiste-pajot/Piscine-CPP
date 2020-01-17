/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AWeapon.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:15:54 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 15:11:21 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

# include <iostream>

class AWeapon
{
	private:
		AWeapon(void);
		AWeapon(const AWeapon &aweapon);
		AWeapon &operator=(const AWeapon &aweapon);

	protected:
		std::string		_name;
		int				_damage;
		int				_apcost;

	public:
		AWeapon(std::string const &name, int apcost, int damage);
		virtual ~AWeapon();

		std::string 		getName(void) const;
		int					getAPCost(void) const;
		int					getDamage(void) const;
		virtual void		attack(void) const = 0;
};

#endif