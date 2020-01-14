/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 12:58:24 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 15:33:52 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

Human::Human(void)
{
	std::cout << "Human created" << std::endl;

}

Human::~Human(void)
{
	std::cout << "Human deleted" << std::endl;
}

std::string	Human::identify(void) const
{
	return(this->brain.identify());
}

Brain	const	&Human::getBrain(void) const
{
	return(this->brain);
}