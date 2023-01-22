#ifndef _AFORM_H_
#define _AFORM_H_

#include <iostream>
#include "Bureaucrat.h"

using std::cout;
using std::endl;
using std::string;
using std::ostream;

class Bureaucrat;

class AForm {
public:
	AForm();
	AForm(const string &name, int gradeToSign, int gradeToExecute);
	AForm(const AForm& other);
	AForm& operator=(const AForm& other);
	virtual ~AForm();

	string getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	virtual void execute(const Bureaucrat &executor) = 0;
	virtual void beSigned(const Bureaucrat &bureaucrat) = 0;

protected:
	const string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;


	class GradeTooHighException: public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class AlreadySignedException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

ostream& operator<<(ostream& out, AForm const& form);

#endif
