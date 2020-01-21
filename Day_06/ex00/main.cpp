/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 10:19:36 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 15:44:56 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "ScalarConversion.hpp"
//#include "Char.hpp"
//#include "Int.hpp"
//#include "Float.hpp"
//#include "Double.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Wrong number of argument,you must have one and only one argument !!!" << std::endl;
	else
	{
		std::string	scalar(argv[1]);
		ScalarConversion sc(scalar);
		std::cout << "char: ";
		try
		{
			char c = static_cast<char>(sc);
			std::cout << "'" << c << "'" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "int: ";
		try
		{
			int i = static_cast<int>(sc);
			std::cout << i << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "float: ";
		try
		{
			float f = static_cast<float>(sc);
			std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "double: ";
		try
		{
			float d = static_cast<double>(sc);
			std::cout << std::fixed << std::setprecision(1) << d << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}