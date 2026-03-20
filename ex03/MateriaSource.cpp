#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Default character constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "Materia Source Destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;
	std::cout << "Materia Source copy constructor called" << std::endl;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	std::cout << "Materia Source assignment operator called" << std::endl;
	if (this != &other)
	{}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	if (!materia)
		return ;
	AMateria*	copy(materia);
	(void) copy;
	for (int i = 0; i < AMOUNT_ELEMENTS; ++i)
	{
		if (_elements[i] == NULL)
		{
			_elements[i] = materia;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	(void) type;
	return (_elements[0]);
}

std::ostream&	operator<<(std::ostream& out, const MateriaSource& src)
{
	(void) src;
	return (out);
}
