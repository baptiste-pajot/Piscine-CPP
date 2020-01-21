/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScalarConversion.hpp                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 10:52:27 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 15:45:40 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <iostream>

class ScalarConversion
{
	public:
		ScalarConversion(std::string scalar);
		~ScalarConversion(void);

		operator char(void);
		operator int(void);
		operator float(void);
		operator double(void);
		
	private:
		ScalarConversion(void);
		ScalarConversion(const ScalarConversion &scalarconv);
		ScalarConversion &operator=(const ScalarConversion &scalarconv);
		
		std::string const	_scalar;

		class NonDisplayableException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};
		class ImpossibleException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};
};

#endif