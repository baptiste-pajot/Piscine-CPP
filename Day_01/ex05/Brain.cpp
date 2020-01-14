/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Brain.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 12:58:37 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 15:54:10 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain deleted" << std::endl;
}

std::string		Brain::identify(void) const
{
	std::ostringstream ostr;

	ostr << this;
	return(ostr.str());
}