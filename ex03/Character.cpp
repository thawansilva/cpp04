#include "Character.hpp"

Character::Character() : _name("Undefined")
{
	std::cout << "Default character constructor called" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; ++i)
		_inventory[i] = NULL;
}

Character::Character(const std::string& name) : _name(name)
{
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; ++i)
		_inventory[i] = NULL;
}

Character::~Character()
{
	delete _inventory;
	std::cout << "Character Destructor called" << std::endl;
}

Character::Character(const Character& other)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = other;
}

Character&	Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->_name = other.name;
	}
	return *this;
}

std::string const&	getName() const
{
	return (_name);
}

bool	isFullInventory(void) const
{
	for (int i = 0; i < INVENTORY_SIZE; ++i)
	{
		if (_inventory[i] == NULL)
			return false;
	}
	return true;
}

void				equip(AMateria* m) const
{}

void				unequip(int idx) const
{}

void				use(int idx, ICharacter& target) const
{}

std::ostream&	operator<<(std::ostream& out, const Character& src)
{
	out << "My name is " << src.getName();
	return (out);
}
