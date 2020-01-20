/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   TacticalMarine.cpp                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 21:16:18 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 21:31:19 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & copy)
{
	*this = copy;
}

TacticalMarine &TacticalMarine:: operator=(TacticalMarine const & copy)
{
	//cpy
	(void)copy;
	return (*this);
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
	ISpaceMarine *ret = new TacticalMarine(*this);
	return (ret);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}
