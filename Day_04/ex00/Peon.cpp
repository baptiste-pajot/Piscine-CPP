/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Peon.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 13:24:04 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 13:50:38 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Peon.hpp"
#include <iostream>

Peon::Peon(std::string name) : Victim(name), _name(name)
{
	std::cout <<  "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}
