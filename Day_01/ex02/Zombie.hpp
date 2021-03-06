/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 09:46:57 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 11:46:33 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#	include <string>

class Zombie
{
	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);

		void	announce(void) const;

	private:
		std::string		_name;
		std::string		_type;
};

#endif
