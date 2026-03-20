#include <iostream>
#include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria("Cure")
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = other;
}

Cure&	Cure::operator=(const Cure& other)
{
	(void) other;
	return *this;
}

void	Cure::use(ICharacter& character) const
{
	std::cout << "* heals " << character.getName() << "'s wounds *" << std::endl;
}

AMateria*	Cure::clone() const
{
	AMateria*	newCure = new Cure();
	return (newCure);
}
