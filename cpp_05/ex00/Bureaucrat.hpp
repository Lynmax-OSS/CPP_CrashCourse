#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		class GradeTooHighException: public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				const char* what() const throw();
		};
		Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat	&operator=(const Bureaucrat &other);
		~Bureaucrat();
		Bureaucrat(std::string _Name, int _Grade): name(_Name)
		{
			if (_Grade < 1)
				throw GradeTooHighException();
			if (_Grade > 150)
				throw GradeTooLowException();
			grade = _Grade;
		}
		std::string	getName() const;
		int			getGrade() const;
		void		increaseGrade();
		void		decreaseGrade();
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif