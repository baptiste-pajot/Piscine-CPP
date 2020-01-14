/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Weapon.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 16:25:10 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:00:57 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);

		const std::string	&getType(void) const;
		void				setType(std::string type);		

	private:
		std::string		_type;
};

#endif