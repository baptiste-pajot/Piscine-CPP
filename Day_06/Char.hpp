/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Char.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 11:03:13 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 11:07:00 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CHAR_HPP
# define CHAR_HPP

# include "ScalarConversion.hpp"

class Char : public ScalarConversion
{

	public:
		Char(std::string const scalar);
		virtual ~Char(void);
		
	private:
		Char(void);
		Char(const Char &ch);
		Char &operator=(const Char &ch);
		std::string const	_scalar;
};

std::ostream	&operator<<(std::ostream &out, Char &ch);

#endif