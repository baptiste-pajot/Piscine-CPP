/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Victim.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 13:06:39 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 14:30:32 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

#include <iostream>

class Victim
{
	public:
		Victim(std::string name);
		virtual ~Victim(void);
		Victim(const Victim &victim);
		Victim &operator=(const Victim &victim);

		void			introduce(void) const;
		std::string		getName(void) const;
		virtual void	getPolymorphed(void) const;

	private:
		Victim(void);

		std::string _name;
};

std::ostream	&operator<<(std::ostream &out, Victim const &victim);

#endif