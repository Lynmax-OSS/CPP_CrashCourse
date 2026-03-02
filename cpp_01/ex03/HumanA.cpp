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
	std::cout << this->name << " attacks with their weapon " << this->weapon->getType() << std::endl;
}
