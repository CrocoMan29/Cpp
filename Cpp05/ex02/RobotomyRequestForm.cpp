#include "RobotomyRequestForm.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:35:58 by yismaail          #+#    #+#             */
/*   Updated: 2023/11/28 11:36:22 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("default", 72, 45), _target("default")
{
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Random", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &rfh) : AForm(rfh.getName(), 72, 45), _target(rfh.getTarget())
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &obj)
{
	if (this != &obj)
	{
		this->_target = obj._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

std::string RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw(BeSignedException());
	if (executor.getGrade() > this->getGradeToExecute())
		throw(GradeTooLowException());
	std::cout << "Make NOISE !!!!!@@##$$$$#" << std::endl;
	std::time_t curr_time = std::time(0);
	std::cout << curr_time << std::endl;
	if (curr_time % 2 == 0)
		std::cout << this->_target << " has been robotomized" << std:: endl;
	else
		std::cout << this->_target << " robotomize faild" << std::endl;	
}

