#ifndef CURE_HPP
# define CURE_HPP
# include "AMeteria.hpp"
# include "ICharacter.hpp"

class Cure : public AMeteria
{
	Cure();
	Cure(const Cure &other);
	Cure& operator=(const Cure &other);
	~Cure();
	AMeteria* clone() const;
	void use(ICharacter& target);
};

#endif