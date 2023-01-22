#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5) {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other) {
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	AForm::operator=(other);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(const string &target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}


void PresidentialPardonForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->_isSigned == true)
		throw AForm::AlreadySignedException();
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else
		this->_isSigned = true;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor)
{
	if (executor.getGrade() > this->_gradeToExecute)
		throw AForm::GradeTooLowException();
	else
		std::cout << this->target << " has been pardoned by Zafod Beeblebrox!" << std::endl;
}