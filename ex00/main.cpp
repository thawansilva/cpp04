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

void separator(std::string title)
{
	std::cout << "\n========== " << title << " ==========\n";
}


int main() {
	std::cout << "=== TESTE 1: Instanciação básica ===" << std::endl;
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	
	std::cout << "\n=== TESTE 2: Polimorfismo ===" << std::endl;
	const Animal* zoo[4];
	
	zoo[0] = new Dog();
	zoo[1] = new Cat();
	zoo[2] = new Dog();
	zoo[3] = new Cat();
	
	for (int i = 0; i < 4; i++) {
		std::cout << zoo[i]->getType() << ": ";
		zoo[i]->makeSound();
	}
	
	std::cout << "\n=== TESTE 3: Destrutores ===" << std::endl;
	delete animal;
	delete dog;
	delete cat;
	
	for (int i = 0; i < 4; i++) {
		delete zoo[i];
	}
	
	std::cout << "\n=== TESTE 4: Cópia e atribuição ===" << std::endl;
	Dog originalDog;
	Dog copiedDog(originalDog); // construtor de cópia
	
	Dog assignedDog;
	assignedDog = originalDog; // operador =
	
	std::cout << "Original: ";
	originalDog.makeSound();
	std::cout << "Copy: ";
	copiedDog.makeSound();
	std::cout << "Assigned: ";
	assignedDog.makeSound();
	
	std::cout << "\n=== TESTE 5: Const correctness ===" << std::endl;
	const Dog constDog;
	constDog.makeSound(); // só funciona se método for const
	
	std::cout << "\n=== TESTE 6: Array grande (stress test) ===" << std::endl;
	const Animal* bigZoo[100];
	
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0)
			bigZoo[i] = new Dog();
		else
			bigZoo[i] = new Cat();
	}
	
	for (int i = 0; i < 100; i++) {
		bigZoo[i]->makeSound();
	}
	
	for (int i = 0; i < 100; i++) {
	    delete bigZoo[i];
	}
	
	std::cout << "\n=== TESTE FINALIZADO ===" << std::endl;

	return 0;
}
