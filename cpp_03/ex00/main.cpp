#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Heavy("Heavy");
	ClapTrap Spy("Engineer");

	Heavy.attack("Engineer");
	Spy.takeDamage(5);
	Spy.beRepaired(5);

	Spy.attack("Heavy");
	Heavy.takeDamage(100);
	Heavy.attack("Spy");

	return (0);
}