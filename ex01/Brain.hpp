#include "iostream"
#define IDEAS_SIZE 100

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
	const std::string*		getIdeas(void) const;
	const std::string		getIdea(const unsigned int idx) const;
	void					setNewIdeas(const unsigned int idx,
			std::string& idea);

private:
	std::string	ideas[IDEAS_SIZE];
};
