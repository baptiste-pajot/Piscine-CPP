/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ISquad.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 21:15:51 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 21:19:27 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ISQUAD_HPP_
#define ISQUAD_HPP_

#include <iostream>
#include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual ~ISquad(void) {}
		virtual int getCount(void) const = 0;
		virtual ISpaceMarine *getUnit(int i) const = 0;
		virtual int push(ISpaceMarine *src) = 0;
};

#endif