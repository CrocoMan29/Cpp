#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("default", 1, 1)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("yassir", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rfh):AForm(rfh)
{
    *this = rfh;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.signForm(*this) == -1)
		throw AForm::BeSignedException();
	if (executor.getGrade() > this->_gradeToExecute)
		throw AForm::GradeTooLowException();
	std::ofstream file((this->_target + "_shrubbery").c_str());
	if (file.is_open())
		file << "Ascii tree" << std::endl;
	else
		std::cerr << "we cannot open this file" << std::endl;

}
