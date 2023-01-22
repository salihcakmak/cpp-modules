#ifndef _PRESIDENTIALPARDONFORM_H_
#define _PRESIDENTIALPARDONFORM_H_

#include "AForm.h"


class PresidentialPardonForm : public AForm {
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& other);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
	~PresidentialPardonForm();
	PresidentialPardonForm(const string &target);
	void beSigned(Bureaucrat const &bureaucrat);
	void execute(Bureaucrat const &executor);

private:
	string target;
};


#endif
