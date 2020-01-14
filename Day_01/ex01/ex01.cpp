/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ex01.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 09:35:32 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 09:40:51 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include	<iostream>

void	memoryLeak()
{
	std::string*	panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere; //to avoid memory leak
}

int		main(void)
{
	memoryLeak();
}