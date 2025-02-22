#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria()
{
	//std::cout << "AMateria's Default Constructor called\n";
}

AMateria::AMateria(std::string const &type) : type(type)
{
	// std::cout << "AMateria's String Constructor called\n";
}

AMateria::AMateria(const AMateria &other)
{
	//std::cout << "AMateria's Copy Constructor called\n";

	*this = other;
}

AMateria::~AMateria() 
{
	//std::cout << "AMateria's Destructor called\n";
}


AMateria&	AMateria::operator = (const AMateria &rhs) 
{
	(void)rhs;

	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
}