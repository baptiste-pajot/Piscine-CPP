/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Phonebook.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 11:43:28 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 18:31:14 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->_nb_contact = 0;
	return;
}

Phonebook::~Phonebook(void)
{
	return;
}

void Phonebook::add(void)
{
	if (this->_nb_contact < 8)
	{
		this->_nb_contact++;
		this->_contacts[this->_nb_contact - 1].add();
	}
	else
		std::cout << "Phonebook is full" << std::endl;
}

void Phonebook::search(void) const
{
	int				i = -1;
	std::string		indexStr;
	int				index;

	if (this->_nb_contact == 0)
		std::cout << "Phonebook empty" << std::endl;
	else
	{
		std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
		std::cout << "|  index   |first name|last name | nickname | " << std::endl;
		std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
		while (++i < this->_nb_contact)
			this->_contacts[i].displayAll(i + 1);
		std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
		std::cout << " Choose an index between 1 and " << this->_nb_contact << " :" << std::endl;
		if (std::getline(std::cin, indexStr) == NULL)
			exit(0);
		if (std::isdigit(indexStr[0]) && (index = std::stoi(indexStr))
			&& index > 0 && index <= this->_nb_contact)
			this->_contacts[index - 1].displayOne();
		else
			std::cout << "This index doesn't exist" << std::endl;
		
	}
}