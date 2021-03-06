/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 13:36:55 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 21:21:04 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

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

	ShrubberyCreationForm f("target1");
	RobotomyRequestForm g("target2");
	PresidentialPardonForm h("target3");

	std::cout << std::endl;

	b.signeForm(h);
	c.signeForm(h);

	std::cout << std::endl;

	std::cout << f << std::endl;
	std::cout << g << std::endl;
	std::cout << h << std::endl;

	std::cout << std::endl;

	f.action();
	g.action();
	g.action();
	g.action();
	g.action();
	h.action();

	std::cout << std::endl;

	f.execute(b);
	g.execute(b);
	h.execute(b);

	std::cout << std::endl;

	b.signeForm(f);
	b.signeForm(g);

	std::cout << std::endl;

	f.execute(b);
	g.execute(b);
	h.execute(b);
	
	std::cout << std::endl;

	b.executeForm(g);
	c.executeForm(h);
	
	std::cout << std::endl;

}
