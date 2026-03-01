#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string name;
		Weapon	*weapon;
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon &weapon);
		~HumanB();
		void	attack();
<<<<<<< HEAD
		void	setWeapon(Weapon weapon);
=======
		void	setWeapon(Weapon &weapon);
>>>>>>> 3b83e0d388736b95eb533c506b82418b5711cdd9
};

#endif