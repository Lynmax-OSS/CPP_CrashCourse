#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>

class Bureaucrat;

class AForm
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
		AForm();
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		~AForm();
		AForm(const std::string _name, const int _signGrade, const int _execGrade);
		std::string	getName() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		bool		getSignStatus() const;
		void		beSigned(Bureaucrat &worker);
		virtual	void	execute(Bureaucrat const & executor) const;
};

std::ostream	&operator<<(std::ostream &out, const AForm &outform);

#endif