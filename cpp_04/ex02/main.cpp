#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	AAnimal* dog = new Dog();
	AAnimal* cat = new Cat();
	// AAnimal* animal = new AAnimal();

	std::cout << "Dog type: " << dog->getType() << std::endl;
	std::cout << "Cat type: " << cat->getType() << std::endl;

	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;

	return (0);
}

