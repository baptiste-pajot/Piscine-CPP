/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 11:17:17 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 18:26:49 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <string>

int main(void)
{
	Phonebook phonebook;
	std::string action;

	while (1)
	{
		std::cout << "Choose a command : ADD, SEARCH, EXIT" << std::endl;
		if(std::getline(std::cin, action) == NULL)
			exit(0);
		if (action.compare("ADD") == 0)
			phonebook.add();
		else if (action.compare("SEARCH") == 0)
			phonebook.search();
		else if (action.compare("EXIT") == 0)
			break;
		else
			std::cout << "Invalid Command" << std::endl;
	}
	return (0);
}