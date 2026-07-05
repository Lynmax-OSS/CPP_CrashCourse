#ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern
{
	private:
		struct list{
			const std::string form_name;
			AForm *formtype;
		};
	public:
		class	InvalidFormException: public std::exception
		{
			public:
				const char* what() const throw();
		};
		Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);
		~Intern();
		AForm *makeForm(std::string formName, std::string target);
};

#endif