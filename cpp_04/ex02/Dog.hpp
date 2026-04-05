#ifndef DOG_HPP
 #define DOG_HPP
 #include "AAnimal.hpp"
 #include "Brain.hpp"

class Dog : virtual public AAnimal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &other);
		Dog& operator=(const Dog &other);
		Dog(const std::string &);
		~Dog();
		void	makeSound() const;
		Brain *getBrain() const;
};

#endif