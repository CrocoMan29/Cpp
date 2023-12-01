/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:39:24 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/01 17:08:45 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(){}

Intern::Intern(Intern const &rfh){
	(void)rfh;
}

Intern::~Intern(){}

Intern &Intern::operator=(Intern const &obj)
{
	(void)obj;
	return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string forms[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			std::cout << "Intern creates " << forms[i] << std::endl;
			switch (i)
			{
			case 0:
				return (new PresidentialPardonForm(target));
			case 1:
				return (new RobotomyRequestForm(target));
			case 2:
				return (new ShrubberyCreationForm(target));
			}
		}
	}
	std::cerr << "Intern cannot create " << name << std::endl;
	return (0);
}
