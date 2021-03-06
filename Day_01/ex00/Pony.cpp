/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Pony.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 08:56:14 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 11:28:01 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name, std::string color, int age) : _name(name), _color(color), _age(age)
{
	std::cout << "pony " << this->_name << " created";
	std::cout << " with " << this->_color << " color";
	std::cout << " and " << this->_age << " years old" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "pony " << this->_name << " deleted" << std::endl;
}

void	Pony::neigh(void) const
{
	std::cout << "pony " << this->_name << " is neighing : HUHHHHHHH, HIIIIHHHHHHHHHHH !!!" << std::endl;
}