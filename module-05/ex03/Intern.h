#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.h"
# include "ShrubberyCreationForm.h"
# include "RobotomyRequestForm.h"
# include "PresidentialPardonForm.h"

class Intern
{
public:
	Intern();
	~Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	AForm *makeForm(const std::string &name, const std::string &target);
	class UnknownFormException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

#endif