#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_HitPoint = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	_HitPoint = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "FragTrap " << _Name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _Name << " destructor called" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (_HitPoint == 0)
	{
		std::cout << "FragTrap " << _Name << "is ded! Not big soup rise." << std::endl;
		return ;
	}
	if (_EnergyPoints == 0)
	{
		std::cout << "FragTrap " << _Name << "is to tired to hit anything." << std::endl;
		return ;
	}
	_EnergyPoints--;
	std::cout << "FragTrap " << _Name << " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << _Name << " reqeusts a high five! Gimme some!" <<std::endl;
}