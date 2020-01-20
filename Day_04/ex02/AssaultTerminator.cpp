/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AssaultTerminator.cpp                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 21:15:06 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 21:15:07 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & copy)
{
	*this = copy;
}

AssaultTerminator &AssaultTerminator:: operator=(AssaultTerminator const & copy)
{
	(void)copy;
	return (*this);
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back ..." << std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	ISpaceMarine *ret = new AssaultTerminator(*this);
	return (ret);
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
