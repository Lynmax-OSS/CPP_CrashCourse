#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm()
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string _target): AForm("Pardon Form", 25, 5), target(_target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

std::string	PresidentialPardonForm::getTraget() const
{
	return (target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		PresidentialPardonForm::CanExecute(executor);
		std::cout << PresidentialPardonForm::getTraget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}