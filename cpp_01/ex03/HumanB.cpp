#include "HumanB.hpp"

HumanB::HumanB()
{
	std::cout << "HumanB has not been given a weapon" << std::endl;
}

HumanB::HumanB(std::string name): name(name)
{
	std::cout << "HumanB has been birthed" << std::endl;
}