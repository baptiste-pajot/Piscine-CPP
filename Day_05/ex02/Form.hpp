/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Form.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 16:21:18 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 20:24:06 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
	public:

		Form(std::string const name, std::string target, int gradeSign, int gradeExecut);
		virtual ~Form(void);
		Form(const Form &form);
		Form &operator=(const Form &form);

		std::string const	getName(void) const;
		std::string const	getTarget(void) const;
		bool				getsigned(void) const;
		int					getGradeSign(void) const;
		int					getGradeExecut(void) const;

		void				beSigned(Bureaucrat const &bureaucrat);
		void				execute(Bureaucrat const &executor) const;
		virtual	void 		action(void) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};

	private:
		std::string	const	_name;
		std::string	const	_target;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExecut;

		Form(void);
};

std::ostream	&operator<<(std::ostream &out, Form const &form);

#endif