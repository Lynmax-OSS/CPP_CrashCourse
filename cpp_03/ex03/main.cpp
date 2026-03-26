#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamond("Diamond");

    diamond.attack("group of miners");
    diamond.takeDamage(50);
    diamond.beRepaired(20);
    diamond.guardGate();
    diamond.highFiveGuys();
    diamond.whoAmI();

    return (0);
}