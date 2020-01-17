/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RadScorpion.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:16:23 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 15:39:30 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef RADSCORPION_H
# define RADSCORPION_H

# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		virtual ~RadScorpion(void);

		virtual void	takeDamage(int damage);
};

#endif