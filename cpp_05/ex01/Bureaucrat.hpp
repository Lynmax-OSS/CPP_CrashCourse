#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

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
		Bureaucrat(std::string _Name, int _Grade);
		std::string	getName() const;
		int			getGrade() const;
		void		increaseGrade();
		void		decreaseGrade();
		void		signForm(Bureaucrat &guy, Form &form);
	};
	
std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif