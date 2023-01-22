#include "AForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include "Intern.h"

int main()
{
	Intern someRandomIntern;
	AForm *form;
	Bureaucrat *bureaucrat;
	bureaucrat = new Bureaucrat("Salih", 1);
	form = someRandomIntern.makeForm("shrubbery creation", "Test");
	bureaucrat->signForm(*form);
	bureaucrat->executeForm(*form);
	delete bureaucrat;
	delete form;
	return 0;
}