/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScalarConversion.hpp                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 10:52:27 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 11:10:35 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <iostream>

class ScalarConversion
{
	public:
		ScalarConversion(std::string const scalar);
		virtual ~ScalarConversion(void);
		
	private:
		ScalarConversion(void);
		ScalarConversion(const ScalarConversion &scalarconv);
		ScalarConversion &operator=(const ScalarConversion &scalarconv);
		
		std::string const	_scalar;
};

std::ostream	&operator<<(std::ostream &out, ScalarConversion &scalarconv);

#endif