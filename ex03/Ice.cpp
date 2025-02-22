#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice's Default Constructor called\n";
}

Ice::Ice(const Ice &other) : AMateria("ice")
{
	//std::cout << "Ice's Copy Constructor called\n";

	*this = other;
}

Ice::~Ice() 
{
	//std::cout << "Ice's Destructor called\n";
}


Ice	&Ice::operator = (const Ice &rhs) 
{
	(void)rhs;

	return (*this);
}

Ice	*Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}