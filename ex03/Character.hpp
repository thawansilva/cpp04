#pragma once

#include "ICharacter.hpp"
#include "AMaterial.hpp"
#define INVENTORY_SIZE 4

class Character : public ICharacter
{
public:
	Character();
	Character(const std::string& name);
	~Character();
	Character(const Character& other);
	Character& operator=(const Character& other);

	//Member Functions
	bool	isFullInventory(void) const;
	// Getters & Setters

private:
	AMaterial*	_inventory[INVENTORY_SIZE];
	std::string	_name;
};

std::ostream&	operator<<(std::ostream& out, const Character& src);
