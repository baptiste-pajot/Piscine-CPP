/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Brain.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 12:58:32 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 14:59:10 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <string>

class Brain
{
	public:
		Brain();
		~Brain();

		std::string identify(void) const;
};

#endif