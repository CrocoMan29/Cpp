#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("default", 1, 1)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("yassir", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rfh):AForm(rfh.getName(), 145, 137), _target(rfh.getTarget())
{
    // *this = rfh;
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

std::string ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw AForm::BeSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::ofstream file((this->_target + "_shrubbery").c_str());
	if (file.is_open())
	{
		file << "     /\\  \n";
		file << "    /  \\ \n";
		file << "   /    \\\n";
		file << "  /      \\\n";
		file << " /________\\\n";
		file << "     ||   \n";
		file << "     ||   \n";
		file.close();
		// file << "Ascii tree" << std::endl;
	}
	else
		std::cerr << "we cannot open this file" << std::endl;

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj)
{
	if (this != &obj)
	{
		this->_target = obj.getTarget();
	}
	return (*this);
}
