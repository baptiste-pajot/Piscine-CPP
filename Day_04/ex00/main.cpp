/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 11:08:49 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 14:07:24 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

class Looser : public Victim 
{
	public:
		Looser(std::string name);
		~Looser(void);
		virtual void	getPolymorphed(void) const;
	private:
		std::string _name;
};

Looser::Looser(std::string name) : Victim(name), _name(name)
{
	std::cout <<  "I'm a looser." << std::endl;
}

Looser::~Looser(void)
{
	std::cout << "The looser was loosed" << std::endl;
}

void	Looser::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a winnner !" << std::endl;
}

int		main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Looser michel("Michel");
	std::cout << robert << jim << joe << michel;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(michel);
	return 0;
}