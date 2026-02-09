#include "Zombie.hpp"

int main(void)
{
	Zombie harold("Harold");
	Zombie *dave = newZombie("Dave");
	harold.announce();
	dave->announce();
	randomChump("Diddy");
	delete dave;
	return (0);
}