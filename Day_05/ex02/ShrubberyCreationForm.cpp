/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ShrubberyCreationForm.cpp                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 18:47:58 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 20:39:39 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("ShrubberyCreationForm", target, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

void	ShrubberyCreationForm::action(void) const
{
	std::ofstream	ofs(this->getTarget() + "_schrubbery");
	if (ofs.is_open() > 0 )
	{
		ofs << "  ____   " << std::endl;
		ofs << " /    \\  " << std::endl;
		ofs << "|      | " << std::endl;
		ofs << " \\____/  " << std::endl;
		ofs << "   ||    " << std::endl;
		ofs << "   ||    " << std::endl;
	}
}