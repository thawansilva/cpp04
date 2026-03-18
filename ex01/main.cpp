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

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

void separator(std::string title)
{
	std::cout << "\n========== " << title << " ==========\n";
}

int main() {
	Animal**	animals = new Animal*[ZOO_SIZE];
	for (int i = 0; i < ZOO_SIZE; ++i)
	{
		if (i < ZOO_SIZE / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	//for (int i = 0; i < 5; ++i)
	//{
	//	animals[0]->getIdea(i);
	//}
	for (int i = 0; i < ZOO_SIZE; ++i)
	{
		delete animals[i];
	}
	delete [] animals;
}
