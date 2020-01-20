/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Squad.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 21:16:10 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 21:45:46 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#ifndef SQUAD_HPP_
#define SQUAD_HPP_

#include <iostream>
#include "ISquad.hpp"
#include "TacticalMarine.hpp"

class Squad : public ISquad
{
	public:
		Squad(void);
		Squad(Squad const &copy);
		Squad &operator=(Squad const &copy);
		~Squad(void);
		
		int getCount(void) const;
		ISpaceMarine *getUnit(int n) const;
		int push(ISpaceMarine *sm);

	private :
		int 			_units;
		ISpaceMarine**	_spaceMarine;
};


#endif