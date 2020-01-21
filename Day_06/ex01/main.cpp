/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 13:02:18 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 14:26:53 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include "DataClass.hpp"

int main()
{
	DataClass *dataClass = new DataClass();

	std::cout << dataClass->serialize() << std::endl;
	std::cout << dataClass->deserialize(dataClass->serialize()) << std::endl;
	
	delete dataClass;
}
