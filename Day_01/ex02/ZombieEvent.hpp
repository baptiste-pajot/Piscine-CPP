/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieEvent.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 09:59:41 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 11:23:40 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include <string>
# include "Zombie.hpp" 

class ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		void		setZombieType(std::string type);
		Zombie*		newZombie(std::string name) const;
		void		randomChump(void) const;

	private:
		std::string	_type;
};

#endif