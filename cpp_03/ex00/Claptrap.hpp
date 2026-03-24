#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	private:
		std::string Name;
		int HitPoints = 10;
		int	EnergyPonits = 10;
		int AttackDamage = 0;
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};

#endif