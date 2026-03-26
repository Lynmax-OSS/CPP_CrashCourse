#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_Name("default"), _HitPoint(10), _AttackDamage(10), _EnergyPoints(10)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name):_Name(name), _HitPoint(10), _AttackDamage(10), _EnergyPoints(10)
{
	std::cout << "ClapTrap " << _Name << " constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if(this != &other)
	{
        _Name         = other._Name;
        _HitPoint    = other._HitPoint;
        _EnergyPoints = other._EnergyPoints;
        _AttackDamage = other._AttackDamage;
	}
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _Name << " destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_HitPoint == 0)
	{
		std::cout << "ClapTrap " << _Name << " is ded! Not big soup rise." << std::endl;
		return ;
	}
	if (_EnergyPoints == 0)
    {
        std::cout << "ClapTrap " << _Name
                  << " has no energy to attack!" << std::endl;
        return ;
    }
	_EnergyPoints--;
	std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoint == 0)
	{
		std::cout << "ClapTrap " << _Name << " is ded! Not big soup rise." << std::endl;
		return ;
	}
	if (amount >= (unsigned int) _HitPoint)
		_HitPoint = 0;
	else
		_HitPoint -= amount;
	std::cout << "ClapTrap " << _Name << " takes " << amount << " damage!\n HP remaining: " << _HitPoint << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_HitPoint == 0)
	{
		std::cout << "ClapTrap " << _Name << " is ded! Not big soup rise." << std::endl;
		return ;		
	}
	if (_EnergyPoints == 0)
	{
		std::cout << "Claptrap " << _Name << " has no energy to repair!" << std::endl;
		return ;
	}
	_EnergyPoints--;
	_HitPoint += amount;
	std::cout << "ClapTrap " << _Name << " repairs itself for " << amount << "HP!\n HP now: " << _HitPoint << std::endl;
}