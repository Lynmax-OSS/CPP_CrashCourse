#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(&weapon)
{
	std::cout << "HumanA has been birthed" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA has been sent to hell" << std::endl;
}

void	HumanA::attack()
{
<<<<<<< HEAD
	std::cout << name << " attacks with their weapon " << weapon->getType() << std::endl;
=======
	std::cout << this->name << " attacks with their weapon " << this->weapon->getType() << std::endl;
>>>>>>> 3b83e0d388736b95eb533c506b82418b5711cdd9
}
