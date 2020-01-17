/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   SuperMutant.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:16:28 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 15:32:34 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant(void);
		virtual ~SuperMutant(void);

		virtual void	takeDamage(int damage);
};

#endif