/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PowerFist.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:16:18 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 17:35:55 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		virtual ~PowerFist(void);

		virtual void		attack(void) const;
};

#endif