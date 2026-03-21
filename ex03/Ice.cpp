/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 11:19:31 by thaperei          #+#    #+#             */
/*   Updated: 2026/03/21 11:19:37 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria("Ice")
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = other;
}

Ice&		Ice::operator=(const Ice& other)
{
	(void) other;
	return *this;
}

AMateria*	Ice::clone() const
{
	AMateria*	newIce = new Ice();
	return (newIce);
}

void		Ice::use(ICharacter& character) const
{
	std::cout << "* shoots an ice bolt at" << character.getName() << "*" << std::endl;
}
