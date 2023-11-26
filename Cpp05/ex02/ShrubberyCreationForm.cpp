#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):_name("yassir"), _target(target), _gradeToSign(145), _gradeToExecute(137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rfh): _name(rfh._name), _target(rfh._target), _gradeToSign(rfh._gradeToSign), _gradeToExecute(rfh._gradeToExecute)
{
    *this = rfh;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream file(this._target + "_shrubbery");

	if (executor.signForm(*this) == false)
		throw AForm::BeSignedException();
	if (file.is_open())
		std::cout << "Ascii tree" << std::endl;
	else


}
