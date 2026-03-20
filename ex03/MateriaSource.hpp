#pragma once

#include "IMateriaSource.hpp"
#define AMOUNT_ELEMENTS 4

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource& operator=(const MateriaSource& other);

	// Enheritaged Functions
	void learnMateria(AMateria*);
	AMateria* createMateria(const std::string & type);

private:
	AMateria*	_elements[AMOUNT_ELEMENTS];
};

std::ostream&	operator<<(std::ostream& out, const MateriaSource& src);
