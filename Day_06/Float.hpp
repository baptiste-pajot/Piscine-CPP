/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Float.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 11:02:05 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 11:10:07 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FLOAT_HPP
# define FLOAT_HPP

# include "ScalarConversion.hpp"

class Float : public ScalarConversion
{

	public:
		Float(std::string const scalar);
		virtual ~Float(void);
		
	private:
		Float(void);
		Float(const Float &fpn);
		Float &operator=(const Float &fpn);
		std::string const	_scalar;
};

std::ostream	&operator<<(std::ostream &out, Float &fpn);

#endif
