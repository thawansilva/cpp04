#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain was created" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain was destroyed" << std::endl;
}

Brain::Brain(const Brain& other)
{
	*this = other;
	std::cout << "Brain copy constructor was called" << std::endl;
}

Brain&	Brain::operator=(const Brain& other)
{
	if (this != &other)
		*this = other;
	return *this;
}

std::string[]		getIdeas(void) const
{
	return ideas;
}

void				setNewIdeas(std::string& idea);
{
	(void)idea;
}
