/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PlasmaRifle.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:16:13 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 17:35:24 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(void);
		virtual ~PlasmaRifle(void);

		virtual void		attack(void) const;
};

#endif