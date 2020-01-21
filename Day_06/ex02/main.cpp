/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 14:42:29 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 15:06:20 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"

int main(void)
{
	Base b;
	Base *one = b.generate();
	Base *two = b.generate();
	Base *three = b.generate();

	b.identify_from_pointer(one);
	b.identify_from_pointer(two);
	b.identify_from_pointer(three);

	b.identify_from_reference(*one);
	b.identify_from_reference(*two);
	b.identify_from_reference(*three);
}