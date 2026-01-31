#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Zombie has been created" << std::endl;
}


Zombie *newZombie( std::string name)
{
	Zombie *newzombie = new Zombie(name);
	return (newzombie);
}