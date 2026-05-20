#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	Slave("Johnny", -1);
		Bureaucrat	Drone("Craig", 151);

		std::cout << Drone << std::endl;
		std::cout << Slave << std::endl;
		
		Bureaucrat	_new(Drone);
		Drone = Slave;

		std::cout << Drone << std::endl;
		std::cout << _new << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}
