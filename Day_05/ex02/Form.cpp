/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Form.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 16:21:02 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 21:07:18 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, std::string const target, int gradeSign, int gradeExecut) : _name(name), _target(target), _signed(false), _gradeSign(gradeSign), _gradeExecut(gradeExecut)
{
	try 
	{
		if (this->_gradeSign < 1 || this->_gradeExecut < 1)
			throw Form::GradeTooHighException();
		else if (this->_gradeSign > 150 || this->_gradeExecut > 150)
			throw Form::GradeTooLowException();
		std::cout << "Form called " << this->_name;
		std::cout << " with target " << this->_target;
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

const char *Form::NotSignedException::what(void) const throw()
{
	return "Form: Not signed.";
}

std::string const	Form::getName(void) const
{
	return this->_name;
}

std::string const	Form::getTarget(void) const
{
	return this->_target;
}

bool				Form::getSigned(void) const
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
	{
		this->_signed = true;
		std::cout << "Form signed" << std::endl;
	}
	else
		throw Form::GradeTooLowException();
}

void				Form::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->getSigned())
		{
			if (executor.getGrade() <= this->getGradeExecut())
				this->action();
			else
				throw Form::GradeTooLowException();
		}
		else
			throw Form::NotSignedException();
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &out, Form const &form)
{
	out <<  form.getName() << " form with " << form.getTarget();
	out << " with grade required to sign " << form.getGradeSign();
	out << " and grade required to execut " << form.getGradeExecut() << "." ;
	return out;
}