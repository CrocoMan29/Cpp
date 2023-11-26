/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:52:45 by mac               #+#    #+#             */
/*   Updated: 2023/11/16 16:34:11 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute):_name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
        throw Bureaucrat::GradeTooLowException();
}

AForm::AForm(AForm const &src):_name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
    *this = src;
}

AForm::~AForm(){}

AForm &AForm::operator=(AForm const &rhs)
{
    this->_signed = rhs._signed;
    return *this;
}

std::string const AForm::getName() const
{
    return this->_name;
}

bool AForm::getSigned() const
{
    return this->_signed;
}

int AForm::getGradeToSign() const
{
    return this->_gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return this->_gradeToExecute;
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw Bureaucrat::GradeTooLowException();
    this->_signed = true;
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs)
{
    o << "AForm name: " << rhs.getName() << std::endl;
    o << "AForm grade to sign: " << rhs.getGradeToSign() << std::endl;
    o << "AForm grade to execute: " << rhs.getGradeToExecute() << std::endl;
    o << "AForm signed: " << rhs.getSigned() << std::endl;
    return o;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char *AForm::BeSignedException::what() const throw()
{
	return "You should be signed";
}
