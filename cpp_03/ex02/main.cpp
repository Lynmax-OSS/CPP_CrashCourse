#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap frag("grenade");

    frag.attack("group of ducks");
    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.highFiveGuys();

    return (0);
}