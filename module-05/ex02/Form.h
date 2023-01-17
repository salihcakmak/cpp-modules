#ifndef _FORM_H_
#define _FORM_H_

#include <iostream>
#include "Bureaucrat.h"

using std::cout;
using std::endl;
using std::string;
using std::ostream;

class Bureaucrat;

class Form {
public:
	Form();
	Form(const string &name, int gradeToSign, int gradeToExecute);
	Form(const Form& other);
	Form& operator=(const Form& other);
	~Form();

	string getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(const Bureaucrat& bureaucrat);

private:
	const string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;


	class GradeTooHighException: public std::exception {
	public:
		const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
	public:
		const char* what() const throw();
	};
};

ostream& operator<<(ostream& out, Form const& form);

#endif
