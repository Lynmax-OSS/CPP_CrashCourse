#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(&weapon)
{
	std::cout << "HumanA has been birthed" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA has been sent to hell" << std::endl;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their weapon " << weapon->getType() << std::endl;
}

std::string HumanA::getName()
{
	return(name);
}
