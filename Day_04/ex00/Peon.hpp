/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Peon.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 13:24:06 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 14:30:42 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim 
{
	public:
		Peon(std::string name);
		virtual ~Peon(void);

		virtual void	getPolymorphed(void) const;

	private:
		std::string _name;
};

#endif