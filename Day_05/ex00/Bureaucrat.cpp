/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Bureaucrat.cpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 13:33:30 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 15:01:13 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	try 
	{
		this->_grade = grade;
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		std::cout << "Bureaucrat called " << this->_name;
		std::cout << " was created with grade " << this->_grade << std::endl;
	}
	catch (std::exception &e) 
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat() 
{
	std::cout << "Bureaucrat called " << this->_name;
	std::cout << " was deleted with grade " << this->_grade << std::endl;
}

std::string const	Bureaucrat::getName(void) const
{
	return this->_name;
}

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void Bureaucrat::incrementGrade(void)
{
	try
	{
		if (this->_grade < 2)
			throw Bureaucrat::GradeTooHighException();
		this->_grade--;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade(void)
{
	try
	{
		if (this->_grade > 149)
			throw Bureaucrat::GradeTooLowException();
		this->_grade++;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "The grade is too high.";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "The grade is too low.";
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out <<  bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." ;
	return out;
}