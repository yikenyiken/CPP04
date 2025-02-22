#include "Character.hpp"
#include <iostream>

Character::Character() : name("defaultName")
{
	//std::cout << "Character's Default Constructor called\n";

	for (int i = 0; i < SLOTS_N; i++)
		slots[i] = NULL ;
}

Character::Character(std::string name) : name(name)
{
	// std::cout << "Character's String Constructor called\n";

	for (int i = 0; i < SLOTS_N; i++)
		slots[i] = NULL ;
}

Character::Character(const Character &other) 
{
	// std::cout << "Character's Copy Constructor called\n";

	for (int i = 0; i < SLOTS_N; i++)
		slots[i] = NULL;

	*this = other;
}

Character::~Character() 
{
	// std::cout << "Character's Destructor called\n";

	for (int i = 0; i < SLOTS_N; i++)
		delete slots[i];
}


Character&	Character::operator = (const Character &rhs) 
{
	name = rhs.name;

	for (int i = 0; i < SLOTS_N; i++)
	{
		delete slots[i];
		slots[i] = (!rhs.slots[i]) ? NULL : rhs.slots[i]->clone();
	}

	return (*this);
}

std::string const	&Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria *m)
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

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > SLOTS_N)
		return ;

	slots[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > SLOTS_N || !slots[idx])
		return ;

	slots[idx]->use(target);
}