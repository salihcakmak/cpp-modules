#include "Form.h"

Form::Form() : _name("default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {
	cout << "Form Default Constructor" << endl;
}

Form::Form(const string &name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (this->getGradeToSign() > 150 || this->getGradeToExecute() > 150)
		throw(Form::GradeTooLowException());
	else if( this->getGradeToSign() < 1 || this->getGradeToExecute() < 1)
		throw(Form::GradeTooHighException());
	cout << "Form `" << this->_name << "` is created" << endl;
}

Form::Form(const Form &form) : _name(form._name), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute) {
	*this = form;
	cout << "Form Copy Constructor" << endl;
}

Form &Form::operator=(const Form &form) {
	cout << "Form Assignment Operator" << endl;
	this->_isSigned = form.getIsSigned();
	return *this;
}

Form::~Form() {
	cout << "Form Destructor called" << endl;
}

string Form::getName() const {
	return this->_name;
}

bool Form::getIsSigned() const {
	return this->_isSigned;
}

int Form::getGradeToSign() const {
	return this->_gradeToSign;
}

int Form::getGradeToExecute() const {
	return this->_gradeToExecute;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= this->getGradeToSign())
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw() {
	return  "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

ostream& operator<<(ostream& out, Form const& form)
{
	out << form.getName() << " is signed : " << form.getIsSigned() << ", this form sign grade : " << form.getGradeToSign() << ", execute grade : " << form.getGradeToExecute() << "." << endl;
	return (out);
}