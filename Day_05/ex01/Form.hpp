/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Form.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 16:21:18 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 17:18:40 by bpajot      ###    #+. /#+    ###.fr     */
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

		Form(std::string const name, int gradeSign, int gradeExecut);
		~Form(void);
		Form(const Form &form);
		Form &operator=(const Form &form);

		std::string const	getName(void) const;
		bool				getsigned(void) const;
		int					getGradeSign(void) const;
		int					getGradeExecut(void) const;

		void				beSigned(Bureaucrat const &bureaucrat);

	private:
		Form(void);

		std::string	const	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExecut;

		
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
};

std::ostream	&operator<<(std::ostream &out, Form const &form);

#endif