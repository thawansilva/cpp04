#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#define INVENTORY_SIZE 4

class Character : public ICharacter
{
public:
	Character();
	Character(const std::string& name);
	~Character();
	Character(const Character& other);
	Character& operator=(const Character& other);

	// Enheritaged functions
	std::string const&	getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target) const;

	//Member Functions
	bool	isFullInventory(void) const;

	// Getters & Setters
	void	setName(const std::string& name);

private:
	AMateria*	_inventory[INVENTORY_SIZE];
	std::string	_name;
};

std::ostream&	operator<<(std::ostream& out, const Character& src);
