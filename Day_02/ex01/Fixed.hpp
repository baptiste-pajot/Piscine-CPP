/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 09:22:46 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:52:41 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int integer);
		Fixed(const	float floatnb);
		~Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed			&operator=(const Fixed &fixed);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_value;
		static const int	_nb_frac_bits;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);

#endif