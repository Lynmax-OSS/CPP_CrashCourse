#include "AAnimal.hpp"

AAnimal::AAnimal() : type("")
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string &type) : type(type)
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = other;
}

AAnimal& AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
	{
		std::cout << "AAnimal copy assignment operator called" << std::endl;
		type = other.type;
	}
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
	return (type);
}