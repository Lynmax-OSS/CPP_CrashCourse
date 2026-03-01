#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
	std::cout << "HumanB has not been given a weapon" << std::endl;
}

HumanB::HumanB(std::string name, Weapon &weapon): name(name), weapon(&weapon)
{
	std::cout << "HumanB has been birthed" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB has been gassed" << std::endl;
}

void	HumanB::attack()
{
	if (!this->weapon)
		std::cout << name << " has no weapon" << std::endl;
	else
		std::cout << name << " attacks with their weapon " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->weapon = &weapon;
}