/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RobotomyRequestForm.cpp                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 18:47:53 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 20:33:00 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

bool RobotomyRequestForm::halfTime = false;

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("RobotonomyRequestForm", target, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

void	RobotomyRequestForm::action(void) const
{
	std::cout << "\a\a\a\a\a\a\a\a\a\a\a\a\a\a"; //drilling noise
	RobotomyRequestForm::halfTime = !RobotomyRequestForm::halfTime;
	if (RobotomyRequestForm::halfTime)
		std::cout << this->getTarget() << "  has been robotomized successfully." << std::endl;
	else
		std::cout << "it's failure." << std::endl;
}