#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Zombie has been created" << std::endl;
}

void	randomChump(std::string name)
{
	Zombie rando(name);
	rando.announce();
}