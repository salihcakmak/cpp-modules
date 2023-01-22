#include "AForm.h"

AForm::AForm() : _name("default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {
	cout << "AForm Default Constructor" << endl;
}

AForm::AForm(const string &name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (this->getGradeToSign() > 150 || this->getGradeToExecute() > 150)
		throw(AForm::GradeTooLowException());
	else if( this->getGradeToSign() < 1 || this->getGradeToExecute() < 1)
		throw(AForm::GradeTooHighException());
	cout << "AForm `" << this->_name << "` is created" << endl;
}

AForm::AForm(const AForm &form) : _name(form._name), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute) {
	*this = form;
}

AForm &AForm::operator=(const AForm &form) {
	cout << "AForm Assignment Operator" << endl;
	this->_isSigned = form.getIsSigned();
	return *this;
}

AForm::~AForm() {

}

string AForm::getName() const {
	return this->_name;
}

bool AForm::getIsSigned() const {
	return this->_isSigned;
}

int AForm::getGradeToSign() const {
	return this->_gradeToSign;
}

int AForm::getGradeToExecute() const {
	return this->_gradeToExecute;
}


const char *AForm::GradeTooHighException::what() const throw() {
	return  "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

const char *AForm::AlreadySignedException::what() const throw()
{
	return "Form is already signed";
}

ostream& operator<<(ostream& out, AForm const& form)
{
	out << form.getName() << " is signed : " << form.getIsSigned() << ", this form sign grade : " << form.getGradeToSign() << ", execute grade : " << form.getGradeToExecute() << "." << endl;
	return (out);
}