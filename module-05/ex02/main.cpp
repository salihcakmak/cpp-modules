#include "AForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

int main()
{
	AForm *form = new PresidentialPardonForm("presidental_test");
	Bureaucrat *bureaucrat = new Bureaucrat("salih", 1);
	bureaucrat->signForm(*form);
	bureaucrat->executeForm(*form);
	Bureaucrat *bureaucrat2 = new Bureaucrat("fatih", 140);
	AForm *form2 = new RobotomyRequestForm("imrobbott");
	bureaucrat2->signForm(*form2);
	bureaucrat->signForm(*form2);
	bureaucrat2->executeForm(*form2);
	bureaucrat->executeForm(*form2);
	bureaucrat->signForm(*form2);
	Bureaucrat *bureaucrat3 = new Bureaucrat("ali", 2);
	AForm *form3 = new ShrubberyCreationForm("tree");
	bureaucrat3->signForm(*form3);
	bureaucrat3->executeForm(*form3);
	delete bureaucrat3;
	delete form3;
	delete form2;
	delete bureaucrat2;
	delete bureaucrat;
	delete form;
	return 0;
}