#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): Name("Default form"), IsSigned(false), SignGrade(150), ExecGrade(150)
{}

AForm::AForm(const AForm &other): Name(other.Name), IsSigned(other.IsSigned), SignGrade(other.SignGrade), ExecGrade(other.ExecGrade)
{}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		this->IsSigned = other.IsSigned;
	return (*this);
}

AForm::~AForm()
{}

AForm::AForm(const std::string _name, const int _signGrade, const int _execGrade): Name(_name), IsSigned(false), SignGrade(_signGrade), ExecGrade(_execGrade)
{
	if (_signGrade > 150 || _execGrade > 150)
		throw (GradeTooLowException());
	else if (_signGrade < 1 || _execGrade < 1)
		throw (GradeTooHighException());
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high to exist as form");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low to form");
}

const char* AForm::FormNotSigned::what() const throw()
{
	return ("This form is not signed");
}

std::string	AForm::getName() const
{
	return (Name);
}

int	AForm::getSignGrade() const
{
	return (SignGrade);
}

int	AForm::getExecGrade() const
{
	return (ExecGrade);
}

bool	AForm::getSignStatus() const
{
	return (IsSigned);
}

void	AForm::beSigned(Bureaucrat &worker)
{
	try
	{
		if (worker.getGrade() > AForm::getSignGrade())
			throw(GradeTooLowException());
		else
			IsSigned = true;
	}
	catch(const GradeTooLowException& e)
	{
		std::cout << "grade too low to sign form" << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &out, AForm &outForm)
{
	out << outForm.getName() << std::endl <<
	"Sign grade: " << outForm.getSignGrade() << std::endl <<
	"Execute grade: " << outForm.getExecGrade() << std::endl <<
	"AForm sign status: " << outForm.getSignStatus() << std::endl;
	return (out);
}

void	AForm::CanExecute(const Bureaucrat &executor) const
{
	if (this->getSignStatus() == false)
		throw(FormNotSigned());
	else if (executor.getGrade() > this->getExecGrade())
		throw(GradeTooLowException());
}
