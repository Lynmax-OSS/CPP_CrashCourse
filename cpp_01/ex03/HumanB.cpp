#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL)
{
	std::cout << "HumanB has not been given a weapon" << std::endl;
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
<<<<<<< HEAD
		std::cout << name << " has no weapon" << std::endl;
	else
		std::cout << name << " attacks with their weapon " << weapon->getType() << std::endl;
=======
		std::cout << "This bud hasn't got a weapon in the streets of London" << std::endl;
	else
		std::cout << this->name << " attacks with their weapon " << this->weapon->getType() << std::endl;
>>>>>>> 3b83e0d388736b95eb533c506b82418b5711cdd9
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}