#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "weapon class has been created" << std::endl;
}

Weapon::Weapon(std::string type): type(type)
{
	std::cout <<  type <<" has been created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "weapon has been destroyed" << std::endl;
}

std::string Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}