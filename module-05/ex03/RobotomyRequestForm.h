#ifndef _ROBOTOMYREQUESTFORM_H_
#define _ROBOTOMYREQUESTFORM_H_

#include "AForm.h"

class RobotomyRequestForm : public AForm {
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& other);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
	~RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	void beSigned(Bureaucrat const &bureaucrat);
	void execute(Bureaucrat const &executor);

private:
	string target;
};


#endif
