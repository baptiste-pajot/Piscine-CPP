/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 11:08:49 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 12:00:52 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Sorcerer.hpp"

int		main(void)
{
	Sorcerer a = Sorcerer("Merlin", "magus");

	a.introduce();
	std::cout << a;
}