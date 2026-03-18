#include "iostream"

#pragma once

class Brain
{
public:
	Brain();
	~Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);

	//Member Functions

	// Getters & Setters
	std::string&		getIdeas(void) const;
	void				setNewIdeas(std::string& idea);

private:
	std::string	ideas[100];
};
