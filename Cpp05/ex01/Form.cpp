/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:52:45 by mac               #+#    #+#             */
/*   Updated: 2023/11/19 15:35:15 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute):_name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &src):_name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
    *this = src;
}

Form::~Form(){}

Form &Form::operator=(Form const &rhs)
{
    this->_signed = rhs._signed;
    return *this;
}

std::string const Form::getName() const
{
    return this->_name;
}

bool Form::getSigned() const
{
    return this->_signed;
}

int Form::getGradeToSign() const
{
    return this->_gradeToSign;
}

int Form::getGradeToExecute() const
{
    return this->_gradeToExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw Form::GradeTooLowException();
    this->_signed = true;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
    o << "Form name: " << rhs.getName() << std::endl;
    o << "Form grade to sign: " << rhs.getGradeToSign() << std::endl;
    o << "Form grade to execute: " << rhs.getGradeToExecute() << std::endl;
    o << "Form signed: " << rhs.getSigned() << std::endl;
    return o;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}