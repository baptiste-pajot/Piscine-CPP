/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ISpaceMarine.hpp                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 21:15:35 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 21:29:32 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP_
#define ISPACEMARINE_HPP_

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine(void) {}
		virtual ISpaceMarine *clone(void) const = 0;
		virtual void battleCry(void) const = 0;
		virtual void rangedAttack(void) const = 0;
		virtual void meleeAttack(void) const = 0;
};

#endif