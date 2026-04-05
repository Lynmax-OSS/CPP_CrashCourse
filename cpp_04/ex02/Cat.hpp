#ifndef CAT_HPP
 #define CAT_HPP
 #include "AAnimal.hpp"
 #include "Brain.hpp"

class Cat : virtual public AAnimal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &other);
		Cat& operator=(const Cat &other);
		Cat(const std::string &type);
		~Cat();
		void	makeSound() const;
		Brain *getBrain() const;
};

#endif