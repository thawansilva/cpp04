/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 11:20:17 by thaperei          #+#    #+#             */
/*   Updated: 2026/03/21 11:20:18 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
