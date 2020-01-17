/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Enemy.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:16:08 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 17:11:07 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

# include <iostream>

class Enemy
{
	private:
		Enemy(void);
		Enemy(const Enemy &enemy);
		Enemy &operator=(const Enemy &enemy);
	
	protected:
		int			_hp;
		std::string _type;

	public:
		Enemy(int hp, std::string const &type);
		virtual ~Enemy(void);

		std::string getType(void) const;
		int			getHP(void) const;
		virtual void takeDamage(int damage);
};

#endif