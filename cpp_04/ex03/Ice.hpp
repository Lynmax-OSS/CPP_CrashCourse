#ifndef ICE_HPP
# define ICE_HPP
# include "AMeteria.hpp"
# include "ICharacter.hpp"

class Ice : public AMeteria
{
	Ice();
	Ice(const Ice &other);
	Ice& operator=(const Ice &other);
	~Ice();
	AMeteria* clone() const;
	void use(ICharacter& target);
};

#endif