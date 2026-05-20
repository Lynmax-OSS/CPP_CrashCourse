#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	Bobby("Bobby", 10);
		Form		one_billion_to_isreal("money pack", 10, 25);
		Bobby.signForm(Bobby, one_billion_to_isreal);
		
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}