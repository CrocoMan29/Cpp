/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:08:25 by yismaail          #+#    #+#             */
/*   Updated: 2023/11/11 14:20:54 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade)
{
    this->_name = name;
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    this->_name = rhs._name;
    this->_grade = rhs._grade;
    return *this;
}

std::string const Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

Bureaucrat std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
    o << rhs.getname() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return o;
}