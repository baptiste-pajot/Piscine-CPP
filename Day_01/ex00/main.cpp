/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 08:56:07 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 09:31:55 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Pony.hpp"

static void		ponyOnTheHeap(void)
{
	Pony	*ptrPonny;

	ptrPonny = new Pony("Tornado", "black", 5);
	ptrPonny->neigh();
	delete ptrPonny;
}

static void		ponyOnTheStack(void)
{
	Pony	pony("Jolly Jumper", "white", 8);

	pony.neigh();
}

int     main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
}