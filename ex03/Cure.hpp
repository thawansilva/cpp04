#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(const Cure& other);
	Cure& operator=(const Cure& other);

	//Member Functions
	AMateria*	clone() const;
	void		use(ICharacter&) const;
	// Getters & Setters
};
