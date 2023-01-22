#ifndef _SHRUBBERYCREATIONFORM_H_
#define _SHRUBBERYCREATIONFORM_H_

#include "AForm.h"
#include <fstream>

class ShrubberyCreationForm : public AForm {
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	~ShrubberyCreationForm();

	ShrubberyCreationForm(const std::string &target);
	void beSigned(Bureaucrat const &bureaucrat);
	void execute(Bureaucrat const &executor);

private:
	string target;
};


#endif
