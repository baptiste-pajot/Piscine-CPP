/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Double.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 11:10:24 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 11:11:37 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef DOUBLE_HPP
# define DOUBLE_HPP

# include "ScalarConversion.hpp"

class Double : public ScalarConversion
{

	public:
		Double(std::string const scalar);
		virtual ~Double(void);
		
	private:
		Double(void);
		Double(const Double &dbn);
		Double &operator=(const Double &dbn);
		std::string const	_scalar;
};

std::ostream	&operator<<(std::ostream &out, Double &dbn);

#endif