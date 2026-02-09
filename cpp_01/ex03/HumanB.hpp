#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string name;
		Weapon	*weapon;
	public:
		Weapon weaponType;
		HumanB();
		HumanB(std::string weapon);
		~HumanB();
		void	attack();
		std::string	getName();
		void	setWeapon();
};