#include "MateriaSource.hpp"
#include <iostream>

void	emptySlotsGarbage(AMateria **slots)
{
	for (int i = 0; i < SLOTS_N; i++)
		slots[i] = NULL;
}

MateriaSource::MateriaSource()
{
	//std::cout << "MateriaSource's Default Constructor called\n";

	emptySlotsGarbage(slots);
}

MateriaSource::MateriaSource(const MateriaSource &other) 
{
	//std::cout << "MateriaSource's Copy Constructor called\n";

	emptySlotsGarbage(slots);

	*this = other;
}

MateriaSource::~MateriaSource() 
{
	// std::cout << "MateriaSource's Destructor called\n";

	for (int i = 0; i < SLOTS_N; i++)
		delete slots[i];
}


MateriaSource	&MateriaSource::operator = (const MateriaSource &rhs) 
{
	for (int i = 0; i < SLOTS_N; i++)
	{
		delete slots[i];
		slots[i] = (!rhs.slots[i]) ? NULL : rhs.slots[i]->clone();
	}

	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < SLOTS_N; i++)
	{
		if (!slots[i])
		{
			slots[i] = m;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < SLOTS_N; i++)
	{
		if (slots[i] && slots[i]->getType() == type)
			return (slots[i]->clone());
	}

	return (NULL);
}
