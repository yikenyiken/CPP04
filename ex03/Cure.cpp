#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
	//std::cout << "Cure's Default Constructor called\n";
}

Cure::Cure(const Cure &other)  : AMateria("cure")
{
	//std::cout << "Cure's Copy Constructor called\n";

	*this = other;
}

Cure::~Cure() 
{
	//std::cout << "Cure's Destructor called\n";
}


Cure&	Cure::operator = (const Cure &rhs) 
{
	(void)rhs;

	return (*this);
}

Cure	*Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}