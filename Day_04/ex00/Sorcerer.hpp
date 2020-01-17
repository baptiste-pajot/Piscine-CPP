/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Sorcerer.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 10:53:20 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 11:56:18 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

#include <iostream>

class Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer(void);
		Sorcerer(const Sorcerer &sorcerer);
		Sorcerer &operator=(const Sorcerer &sorcerer);

		void			introduce(void) const;
		std::string		getName(void) const;
		std::string		getTitle(void) const;

	private:
		Sorcerer(void);

		std::string _name;
		std::string _title;
};

std::ostream	&operator<<(std::ostream &out, Sorcerer const &sorcerer);

#endif