#ifndef WRONGCAT_HPP
 #define WRONGCAT_HPP
 #include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &other);
		WrongCat& operator=(const WrongCat &other);
		WrongCat(const std::string type);
		~WrongCat();
		void	makeSound() const;
};

#endif