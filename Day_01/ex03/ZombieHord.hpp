/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieHord.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 11:33:25 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 12:20:11 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIEHORD_H
# define ZOMBIEHORD_H

# include <string>
# include "Zombie.hpp" 

class ZombieHord
{
	public:
		ZombieHord(int N);
		~ZombieHord(void);

		void		announce(void) const;

	private:
		std::string	_type;
		int			_N;
		Zombie		*_zombieTab;
};

#endif