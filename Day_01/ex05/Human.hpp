/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 12:58:17 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 15:44:18 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include <string>
# include "Brain.hpp"

class Human
{
	public:
		Brain const	brain;

		Human(void);
		~Human(void);

		std::string	identify(void) const;
		Brain const	&getBrain(void) const;
};

#endif