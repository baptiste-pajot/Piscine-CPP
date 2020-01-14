/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Pony.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 08:56:18 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 09:48:17 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#ifndef PONY_H
# define PONY_H

# include <string>

class Pony
{
	public:
		Pony(std::string name, std::string color, int age);
		~Pony(void);

		void			neigh(void);

	private:
		std::string		_name;
		std::string		_color;
		int				_age;
};

#endif