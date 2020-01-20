/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Bureaucrat.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 13:34:39 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 17:18:52 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Bureaucrat
{
	public:

		Bureaucrat(std::string const name, int grade);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &bureaucrat);
		Bureaucrat &operator=(const Bureaucrat &bureaucrat);

		std::string const	getName(void) const;
		int					getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);

		void				signeForm(Form const &form);

	private:
		Bureaucrat(void);

		std::string	const	_name;
		unsigned int		_grade;
		
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

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif