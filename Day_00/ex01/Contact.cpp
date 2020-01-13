/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Contact.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 11:01:53 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 12:57:20 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_login = "";
	this->_postal_adress = "";
	this->_email_adress = "";
	this->_phone_number = "";
    this->_birthday_date = "";
	this->_favorite_meal = "";
	this->_underwear_color = "";
	this->_darkest_secret = "";
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::add(void)
{
    std::cout << "first name :" << std::endl;
	std::cin >> this->_first_name;
    std::cout << "last name :" << std::endl;
	std::cin >> this->_last_name;
}

void	Contact::display(int i) const
{
	char	format[11];
	
    std::cout << "|    " << i << "     ";
	if (this->_first_name.length() > 10) {
		this->_first_name.copy(format, 9);
		
	}
	else
		this->_first_name.copy(format, 10);
	std::cout << "|" << format << "|";
	std::cout << "|" << this->_last_name << "|";
	std::cout << std::endl;
}
