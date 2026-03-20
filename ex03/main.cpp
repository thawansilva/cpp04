/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 15:59:56 by thaperei          #+#    #+#             */
/*   Updated: 2026/03/17 20:54:22 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void separator(std::string title)
{
	std::cout << "\n========== " << title << " ==========\n";
}

int main() {
	separator("ICE AND CURE");
	AMateria*	ice = new Ice();
	AMateria*	cure = new Cure();

//	ice->use();
//	cure->use();

	delete ice;
	delete cure;
}
