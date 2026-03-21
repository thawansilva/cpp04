/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 11:20:03 by thaperei          #+#    #+#             */
/*   Updated: 2026/03/21 19:57:35 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Undefined")
{
	for (int i = 0; i < INVENTORY_SIZE; ++i)
		_inventory[i] = NULL;
	std::cout << "Default character constructor called" << std::endl;
}

Character::Character(const std::string& name) : _name(name)
{
	for (int i = 0; i < INVENTORY_SIZE; ++i)
		_inventory[i] = NULL;
	std::cout << "Character constructor " << _name << " called" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < INVENTORY_SIZE; ++i)
	{
		delete _inventory[i];
		_inventory[i] = NULL;
	}
	std::cout << "Character Destructor " << _name << " called" << std::endl;
}

Character::Character(const Character& other)
{
	*this = other;
	std::cout << "Character copy constructor called" << std::endl;
}

Character&	Character::operator=(const Character& other)
{
	std::cout << "Character assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < INVENTORY_SIZE; ++i)
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
		for (int i = 0; i < INVENTORY_SIZE; ++i)
			_inventory[i] = other._inventory[i]->clone();
	}
	return *this;
}

std::string const&	Character::getName() const
{
	return (_name);
}

void				Character::setName(const std::string& name)
{
	_name = name;
}

AMateria*			Character::getItem(const int idx)
{
	if (_inventory[idx])
	{
		return _inventory[idx];
	}
}

bool				Character::isFullInventory(void) const
{
	for (int i = 0; i < INVENTORY_SIZE; ++i)
	{
		if (_inventory[i] == NULL)
			return false;
	}
	return true;
}

void				Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < INVENTORY_SIZE; ++i)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx >= INVENTORY_SIZE || _inventory[idx] == NULL)
		return ;
	_inventory[idx] = NULL;
}

void				Character::use(int idx, ICharacter& target) const
{
	if (idx < 0 || idx >= 4)
		return ;
	if (_inventory[idx] == NULL)
		return ;
	_inventory[idx]->use(target);
}

std::ostream&	operator<<(std::ostream& out, const Character& src)
{
	out << "My name is " << src.getName();
	return (out);
}
