#pragma once

#include "ICharacter.hpp"
#include <string>

class ICharacter;

class AMateria
{
public:
	AMateria();
	virtual ~AMateria ();
	AMateria(std::string const& type);
	AMateria(AMateria const& type);
	AMateria&	operator=(const AMateria& other);
	// Member Functions
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);

	// Getters & Setters
	std::string const&	getType(void) const;
	void				setType(const std::string& type);

protected:
	std::string		type;
};
