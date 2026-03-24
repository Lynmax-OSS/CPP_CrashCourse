#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// int main(void)
// {
// 	ClapTrap Heavy("Heavy");

// 	Heavy.attack("Engineer");
// 	Heavy.takeDamage(5);
// 	Heavy.beRepaired(2);

// 	ScavTrap Engineer("Engineer");
// 	Engineer.attack("Heavy");
// 	Engineer.takeDamage(50);
// 	Engineer.beRepaired(10);
// 	Engineer.guardGate();

// 	return (0);
// }

int main()
{
    std::cout << "--- ClapTrap ---" << std::endl;
    ClapTrap bob("Bob");
    bob.attack("an enemy");
    bob.takeDamage(5);
    bob.beRepaired(3);

    std::cout << "\n--- ScavTrap ---" << std::endl;
    ScavTrap scav("Rex");     // Watch: ClapTrap constructor fires FIRST
    scav.attack("an enemy");  // ScavTrap's version, 20 damage
    scav.takeDamage(50);      // inherited from ClapTrap
    scav.beRepaired(10);      // inherited from ClapTrap
    scav.guardGate();         // ScavTrap exclusive

    return 0;
    // Destruction order: ScavTrap destructor → ClapTrap destructor
}