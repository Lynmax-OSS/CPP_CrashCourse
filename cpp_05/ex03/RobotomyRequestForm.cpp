#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): target("N/A")
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): target(other.target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string _target): AForm("Robotomy Form", 72, 45), target(_target)
{}

std::string	RobotomyRequestForm::getTraget() const
{
	return (target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		RobotomyRequestForm::CanExecute(executor);

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
}