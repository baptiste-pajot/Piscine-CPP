/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Form.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 16:21:02 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 18:00:48 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int gradeSign, int gradeExecut) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecut(gradeExecut)
{
	try 
	{
		if (this->_gradeSign < 1 || this->_gradeExecut < 1)
			throw Form::GradeTooHighException();
		else if (this->_gradeSign > 150 || this->_gradeExecut > 150)
			throw Form::GradeTooLowException();
		std::cout << "Form called " << this->_name;
		std::cout << " was created with grade required to sign " << this->_gradeSign;
		std::cout << " and grade required to execut " << this->_gradeExecut << std::endl;
	}
	catch (std::exception &e) 
	{
		std::cout << e.what() << std::endl;
	}
}

Form::~Form() 
{
	std::cout << "Form called " << this->_name;
	std::cout << " was deleted" << std::endl;
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return "Form: The grade is too high.";
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return "Form: The grade is too low.";
}

std::string const	Form::getName(void) const
{
	return this->_name;
}

bool				Form::getsigned(void) const
{
	return this->_signed;
}

int					Form::getGradeSign(void) const
{
	return this->_gradeSign;
}

int					Form::getGradeExecut(void) const
{
	return this->_gradeExecut;
}

void				Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeSign)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &out, Form const &form)
{
	out <<  form.getName() << " form ";
	out << "with grade required to sign " << form.getGradeSign();
	out << " and grade required to execut " << form.getGradeExecut() << "." ;
	return out;
}