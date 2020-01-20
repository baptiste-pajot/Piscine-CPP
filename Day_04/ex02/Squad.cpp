/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Squad.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 21:16:03 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 21:51:18 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _units(0), _spaceMarine(NULL)
{
}

Squad::Squad(Squad const &copy)
{
	*this = copy;
}

Squad &Squad::operator=(Squad const &copy)
{
	this->_units = copy.getCount();
	this->_spaceMarine = new ISpaceMarine*[this->_units];
	int i = -1;
	while (++i < this->_units)
		this->_spaceMarine[i] = copy.getUnit(i);
}

Squad::~Squad(void)
{
	for (int i = 0; i < this->_units; i++)
		delete this->_spaceMarine[i];
	delete [] this->_spaceMarine;
}

int Squad::getCount(void) const
{
	return this->_units;
}

ISpaceMarine *Squad::getUnit(int n) const
{
	if (n >= 0 && n < this->_units)
		return this->_spaceMarine[n];
	return(NULL);
}

int Squad::push(ISpaceMarine *sm)
{
	this->_units++;
	ISpaceMarine **newSquad = new ISpaceMarine*[this->_units];
	for (int i = 0; i < this->_units - 1; i++)
	{
		newSquad[i] = this->_spaceMarine[i]->clone();
	}

	if (this->_units > 1)
	{
		delete [] this->_spaceMarine;
	}

	newSquad[this->_units - 1] = sm;

	return this->_units;
}

