/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:54:19 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/01 14:46:37 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	{
		std::cout << "\nTEST 1 shrubbery\n" << std::endl;
		try
		{
			Bureaucrat bob("Bob", 137);
			// bob.decGrade();
			bob.decrementGrade();
			ShrubberyCreationForm shrubbery("Shrubbery");
			ShrubberyCreationForm shrubbery2("home");
			bob.signForm(shrubbery2);
			shrubbery2 = shrubbery;
			bob.executeForm(shrubbery2);
		}
		catch (std::exception& e)
		{
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTEST 2 robotomy\n" << std::endl;
		try
		{
			Bureaucrat bob("Bob", 45);
			// bob.decGrade();
			bob.decrementGrade();
			RobotomyRequestForm robotomy("home");
			RobotomyRequestForm robotomy2("home");
			bob.signForm(robotomy2);
			robotomy2 = robotomy;
			bob.executeForm(robotomy2);
		}
		catch (std::exception& e)
		{
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTEST 3 PresidentialPardonForm\n" << std::endl;
		try
		{
			Bureaucrat bob("Bob", 1);
			// bob.decGrade();
			bob.decrementGrade();
			PresidentialPardonForm pardon("home");
			PresidentialPardonForm pardon2("home");
			bob.signForm(pardon2);
			pardon2 = pardon;
			bob.executeForm(pardon2);
		}
		catch (std::exception& e)
		{
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}
	}
	return 0;
}