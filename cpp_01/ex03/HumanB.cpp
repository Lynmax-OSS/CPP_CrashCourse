#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL)
{
	std::cout << "HumanB has been summoned" << std::endl;
	// std::cout << weapon << std::endl;
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
		std::cout << "This bud hasn't got a weapon in the streets of London" << std::endl;
	else
		std::cout << this->name << " attacks with their weapon " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}