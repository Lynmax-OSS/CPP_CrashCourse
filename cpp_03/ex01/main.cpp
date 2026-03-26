#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap bob("Bob");
    bob.attack("an enemy");
    bob.takeDamage(5);
    bob.beRepaired(3);

    ScavTrap scav("Rex");
    scav.attack("an enemy");
    scav.takeDamage(50);
    scav.beRepaired(10);
    scav.guardGate();

    return 0;
}