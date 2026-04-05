#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		std::cout << "Animal copy assignment operator called" << std::endl;
		type = other.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "vague animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}