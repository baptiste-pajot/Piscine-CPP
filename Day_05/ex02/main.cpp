/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 13:36:55 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 18:00:19 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat a("tata", 0);
	Bureaucrat b("titi", 1);
	Bureaucrat c("tutu", 3);
	Bureaucrat d("toto", 150);
	Bureaucrat e("tete", 151);
	
	std::cout << std::endl;

	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	std::cout << std::endl;

	b.incrementGrade();
	std::cout << b << std::endl;
	c.incrementGrade();
	std::cout << c << std::endl;
	c.decrementGrade();
	std::cout << c << std::endl;
	d.decrementGrade();
	std::cout << d << std::endl;
	d.incrementGrade();
	std::cout << d << std::endl;

	std::cout << std::endl;

	Form f("form1", 0, 75);
	Form g("form2", 3, 151);
	Form h("form3", 1, 150);

	std::cout << std::endl;

	std::cout << h << std::endl;

	std::cout << std::endl;

	b.signeForm(h);
	c.signeForm(h);

	std::cout << std::endl;
}