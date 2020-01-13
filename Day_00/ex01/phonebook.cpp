/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Phonebook.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 11:43:28 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 12:46:43 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
    return;
}

Phonebook::~Phonebook(void)
{
    this->_nb_contact = 0;
    return;
}

void    Phonebook::add(void)
{
    if (this->_nb_contact <= 8)
    {
        this->_nb_contact++;
        this->_contacts[this->_nb_contact - 1].add();
    }
    else
        std::cout << "Phonebook is full" << std::endl;
}

void    Phonebook::search(void) const
{
    int     i = -1;

    std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
    std::cout << "|  index   |first name|last name | nickname | " << std::endl;
    std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
    if (this->_nb_contact == 0)
        std::cout << "Phonebook empty" << std::endl;
    while(++i < this->_nb_contact)
        this->_contacts[i].display(i + 1);
}