#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat	Bobby("Bobby", 1);
		PresidentialPardonForm Netinyahu("Netinyahu");
		// Bobby.signForm(Bobby, Netinyahu);
		Netinyahu.execute(Bobby);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}