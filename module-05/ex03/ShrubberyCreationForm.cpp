#include "ShrubberyCreationForm.h"
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const string &target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	AForm::operator=(other);
	this->target = other.target;
	return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (this->_isSigned == true)
		throw AForm::AlreadySignedException();
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else
		this->_isSigned = true;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() > this->_gradeToExecute)
		throw AForm::GradeTooLowException();
	else
	{
		std::ofstream file(this->target + "_shrubbery", std::ios::trunc);
		file <<
			 "    *\n"<<
			 "   /.\\\n"<<
			 "  /o..\\\n"<<
			 "  /..o\\\n"<<
			 " /.o..o\\\n"<<
			 " /...o.\\\n"<<
			 "/..o....\\\n"<<
			 "^^^[_]^^^"
			 << std::endl;
		file.close();
		std::cout << this->target + "_shrubbery created" << std::endl;
	}
}
