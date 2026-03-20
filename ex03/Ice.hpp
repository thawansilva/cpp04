#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(const Ice& other);
	Ice& operator=(const Ice& other);

	//Member Functions
	AMateria*	clone() const;
	void		use(ICharacter& target) const;
};
