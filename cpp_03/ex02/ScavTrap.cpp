#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_HitPoint = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
	_HitPoint = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "ScavTrap " << _Name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;	
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _Name << " destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (_HitPoint == 0)
	{
		std::cout << "ScavTrap " << _Name << "is ded! Not big soup rise." << std::endl;
		return ;
	}
	if (_EnergyPoints == 0)
	{
		std::cout << "ScavTrap " << _Name << "is to tired to hit anything." << std::endl;
		return ;
	}
	_EnergyPoints--;
	std::cout << "ScavTrap " << _Name << " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _Name << " is now in Gatekeeper mode!" << std::endl;
}
