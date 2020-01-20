/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Bureaucrat.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 13:34:39 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 14:44:17 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

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

	private:
		Bureaucrat(void);

		std::string	const	_name;
		unsigned int		_grade;
		
		class GradeTooHighException : public std::exception
		{
			public:
				//GradeTooHighException(void);
				//virtual ~GradeTooHighException(void);
				//GradeTooHighException(const GradeTooHighException &e);
				//GradeTooHighException &operator=(const GradeTooHighException &e);

				virtual const char* what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				//GradeTooLowException(void);
				//virtual ~GradeTooLowException(void);
				//GradeTooLowException(const GradeTooLowException &e);
				//GradeTooLowException &operator=(const GradeTooLowException &e);
				
				virtual const char* what(void) const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif