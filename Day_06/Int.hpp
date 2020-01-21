/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Int.hpp                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 11:02:38 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 11:11:57 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef INT_HPP
# define INT_HPP

# include "ScalarConversion.hpp"

class Int : public ScalarConversion
{

	public:
		Int(std::string const scalar);
		virtual ~Int(void);
		
	private:
		Int(void);
		Int(const Int &integer);
		Int &operator=(const Int &integer);
		std::string const	_scalar;
};

std::ostream	&operator<<(std::ostream &out, Int &integer);

#endif