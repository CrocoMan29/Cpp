#include "Form.hpp"

Form::From(std::string name, int gradeToSign, int gradeToExecute):_name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::From(From const &src):_name(src.name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
    *this = src;
}

Form::~From()
{
    std::cout << "Form destructor called" << std::endl;
}

From &Form::operator=(From const &rhs)
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
    return this->getGradeToSign;
}

int Form::getGradeToExecute() const
{
    return this->getGradeToExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw Form::GradeTooLowException();
    this->_signed = true;
}
