#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() : name("Default") {
	grade = 150;
	cout << "Bureaucrat constructor called" << endl;
}

Bureaucrat::Bureaucrat(const string &name, int grade) : name(name){
	setGrade(grade);
	cout << this->name << " created" << endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : name(bureaucrat.getName()){
	*this = bureaucrat;
	cout << "Bureaucrat copy constructor called" << endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat) {
	setGrade(bureaucrat.grade);
	return *this;
}

Bureaucrat::~Bureaucrat() {
	cout << "Bureaucrat destructor called" << endl;
}


string Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

void Bureaucrat::increment() {
	setGrade(grade - 1);
}

void Bureaucrat::decrement() {
	setGrade(grade + 1);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

void Bureaucrat::setGrade(int grade) {
	if(grade < 1) {
		throw GradeTooHighException();
	}
	else if(grade > 150) {
		throw GradeTooLowException();
	}
	else {
		this->grade = grade;
	}
}

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->name << " could not sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

ostream& operator<<(ostream& out, Bureaucrat const& bureaucrat)
{
	out << bureaucrat.getName() << ", grade " << bureaucrat.getGrade() << "." << endl;
	return (out);
}
