/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Base.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 14:32:05 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 15:06:06 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

#include <iostream>

class Base
{
	public:
		virtual ~Base(void);

		Base	*generate(void);
		void	identify_from_pointer(Base *p);
		void	identify_from_reference(Base &p);
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif