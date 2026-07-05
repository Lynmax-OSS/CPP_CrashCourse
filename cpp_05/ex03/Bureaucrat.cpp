#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Bureaucrat"), grade(1)
{
	std::cout << "Bureaucrat has been employed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): name(other.name), grade(other.grade)
{}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		this->grade = other.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(std::string _Name, int _Grade): name(_Name)
{
	if (_Grade < 1)
		throw GradeTooHighException();
	if (_Grade > 150)
		throw GradeTooLowException();
	grade = _Grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat has been purged" << std::endl;
}

int	Bureaucrat::getGrade() const
{
	return (grade);
}

std::string	Bureaucrat::getName() const
{
	return(name);
}

void	Bureaucrat::increaseGrade()
{
	if ((grade - 1) >= 1)
		grade--;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::decreaseGrade()
{
	if ((grade + 1) >= 150)
		grade++;
	else
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
} 

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
} 

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}

void	Bureaucrat::signForm(Bureaucrat &guy, AForm &form)
{
	try
	{
		form.beSigned(guy);
		if (form.getSignStatus() == false)
			throw (GradeTooLowException());
		else
			std::cout << guy.getName() << " signed " << form.getName() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << guy.getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}