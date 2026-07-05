#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{}

const char* Intern::InvalidFormException::what() const throw()
{
	std::cout << "Invalid form name: ";
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	try
	{
		list forms[] = {
			{"PresidentialPardonForm", new PresidentialPardonForm(target)},
			{"RobotomyRequestForm", new RobotomyRequestForm(target)},
			{"ShrubberyCreationForm", new ShrubberyCreationForm(target)}
		};
		AForm *retForm = NULL;

		for (int i; forms[i].formtype != NULL; i++)
		{
			if (forms[i].form_name == formName)
				retForm = forms[i].formtype;
			else
				delete forms[i].formtype;
		}
		if (retForm == NULL)
			throw  (InvalidFormException());
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << formName << std::endl;
	}
}