/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Base.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 14:31:54 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 15:13:54 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Base.hpp"
#include <ctime>

Base::~Base(void)
{
}

Base *Base::generate(void)
{
	int rd;
	srand(clock());

	rd = rand() % 3;
	if (rd == 0)
		return new A();
	else if (rd == 1)
		return new B();
	else
		return new C();
}

void	Base::identify_from_pointer(Base *p)
{
	A *pa = dynamic_cast<A *>(p);
	B *pb = dynamic_cast<B *>(p);
	C *pc = dynamic_cast<C *>(p);
	if (pa)
		std::cout << "This pointer is from type A" << std::endl;
	if (pb)
		std::cout << "This pointer is from type B" << std::endl;
	if (pc)
		std::cout << "This pointer is from type C" << std::endl;
}

void	Base::identify_from_reference(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "This refererence is from type A "<< std::endl;
	}
	catch (std::exception &e){}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "This refererence is from type B" << std::endl;
	}
	catch (std::exception &e){}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "This refererence is from type C" << std::endl;
	}
	catch (std::exception &e){}
}
