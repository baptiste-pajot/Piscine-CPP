/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Contact.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 11:01:53 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 18:23:32 by bpajot      ###    #+. /#+    ###.fr     */
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

void			Contact::add(void)
{
    std::cout << "first name :" << std::endl;
	std::getline(std::cin, this->_first_name);
    std::cout << "last name :" << std::endl;
	std::getline(std::cin, this->_last_name);
    std::cout << "nickname :" << std::endl;
	std::getline(std::cin, this->_nickname);
    std::cout << "login :" << std::endl;
	std::getline(std::cin, this->_login);
    std::cout << "postal adress :" << std::endl;
	std::getline(std::cin, this->_postal_adress);
    std::cout << "email adress :" << std::endl;
	std::getline(std::cin, this->_email_adress);
    std::cout << "phone number :" << std::endl;
	std::getline(std::cin, this->_phone_number);
    std::cout << "birthday date :" << std::endl;
	std::getline(std::cin, this->_birthday_date);
    std::cout << "favorite meal :" << std::endl;
	std::getline(std::cin, this->_favorite_meal);
    std::cout << "underwear color :" << std::endl;
	std::getline(std::cin, this->_underwear_color);
    std::cout << "darkest secret :" << std::endl;
	std::getline(std::cin, this->_darkest_secret);
}

void			Contact::displayAll(int i) const
{
    std::cout << "|    " << i << "     ";
	std::cout << "|" << this->_resizeString(this->_first_name);
	std::cout << "|" << this->_resizeString(this->_last_name);
	std::cout << "|" << this->_resizeString(this->_nickname);
	std::cout << "|" << std::endl;
}

void			Contact::displayOne(void) const
{
	std::cout << "first name : " << this->_first_name << std::endl;
	std::cout << "last name : " << this->_last_name << std::endl;
	std::cout << "nickname : " << this->_nickname << std::endl;
	std::cout << "login : " << this->_login << std::endl;
	std::cout << "postal adress : " << this->_postal_adress << std::endl;
	std::cout << "email adress : " << this->_email_adress << std::endl;
	std::cout << "phone number : " << this->_phone_number << std::endl;
	std::cout << "birthday date : " << this->_birthday_date << std::endl;
	std::cout << "favorite meal : " << this->_favorite_meal << std::endl;
	std::cout << "underwear color : " << this->_underwear_color << std::endl;
	std::cout << "darkest secret : " << this->_darkest_secret << std::endl;
}

std::string		Contact::_resizeString(std::string in) const
{
	std::string		resizeStr;

	if (in.length() > 10)
	{
		resizeStr.assign(in, 0, 9);
		resizeStr.replace(9, 1, ".");
	}
	else
	{
		resizeStr.assign(10, ' ');
		resizeStr.replace(10 - in.length(), in.length(), in);
	}
	return(resizeStr);
}
