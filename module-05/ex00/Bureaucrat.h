#ifndef _BUREAUCRAT_H_
#define _BUREAUCRAT_H_

#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::ostream;

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(const string& name, int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	~Bureaucrat();

	string getName() const;
	int getGrade() const;

	void increment();
	void decrement();

private:
	const string name;
	int grade;
	void setGrade(int grade);

	class GradeTooHighException: public std::exception {
	public:
		const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
	public:
		const char* what() const throw();
	};

};

ostream& operator<<(ostream& out, Bureaucrat const& bureaucrat);

#endif
