#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): Name("Default form"), IsSigned(false), SignGrade(150), ExecGrade(150)
{}

Form::Form(const Form &other): Name(other.Name), IsSigned(other.IsSigned), SignGrade(other.SignGrade), ExecGrade(other.ExecGrade)
{}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
		this->IsSigned = other.IsSigned;
	return (*this);
}

Form::~Form()
{}

Form::Form(const std::string _name, const int _signGrade, const int _execGrade): Name(_name), IsSigned(false), SignGrade(_signGrade), ExecGrade(_execGrade)
{
	if (_signGrade > 150 || _execGrade > 150)
		throw (GradeTooLowException());
	else if (_signGrade < 1 || _execGrade < 1)
		throw (GradeTooHighException());
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high to exist as form");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low to form");
}

std::string	Form::getName() const
{
	return (Name);
}

int	Form::getSignGrade() const
{
	return (SignGrade);
}

int	Form::getExecGrade() const
{
	return (ExecGrade);
}

bool	Form::getSignStatus() const
{
	return (IsSigned);
}

void	Form::beSigned(Bureaucrat &worker)
{
	try
	{
		if (worker.getGrade() > Form::getSignGrade())
			throw(GradeTooLowException());
		else
			IsSigned = true;
	}
	catch(const GradeTooLowException& e)
	{
		std::cout << "grade too low to sign form" << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &out, Form &outForm)
{
	out << outForm.getName() << std::endl <<
	"Sign grade: " << outForm.getSignGrade() << std::endl <<
	"Execute grade: " << outForm.getExecGrade() << std::endl <<
	"Form sign status: " << outForm.getSignStatus() << std::endl;
	return (out);
}