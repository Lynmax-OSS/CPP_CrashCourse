#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    const int SIZE = 10;
    Animal* animals[SIZE];

    for (int i = 0; i < SIZE / 2; i++)
        animals[i] = new Dog();
    for (int i = SIZE / 2; i < SIZE; i++)
        animals[i] = new Cat();

    Dog original;
    original.getBrain()->ideas[0] = "Chase the cat";
    Dog copy = original;
	original.getBrain()->ideas[0] = "Eat cheese";
	std::cout << original.getBrain()->ideas[0] << std::endl;
    std::cout << copy.getBrain()->ideas[0] << std::endl;

    for (int i = 0; i < SIZE; i++)
        delete animals[i];
    return (0);
}