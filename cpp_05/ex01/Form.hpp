#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string	Name;
		bool				IsSigned;
		const int			SignGrade;
		const int			ExecGrade;
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
		Form();
		Form(const Form &other);
		Form &operator=(const Form &other);
		~Form();
		Form(const std::string _name, const int _signGrade, const int _execGrade);
		std::string	getName() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		bool		getSignStatus() const;
		void		beSigned(Bureaucrat &worker);
};

std::ostream	&operator<<(std::ostream &out, const Form &outform);

#endif