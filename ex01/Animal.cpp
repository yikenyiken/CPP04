#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Animal's Default Constructor called\n";
}

Animal::Animal(const Animal &other) 
{
	std::cout << "Animal's Copy Constructor called\n";

	*this = other;
}

Animal::~Animal() 
{
	std::cout << "Animal's Destructor called\n";
}


Animal& Animal::operator = (const Animal &rhs) 
{
	(void)rhs;

	return( *this);
}

void	Animal::makeSound() const
{

}

const std::string	&Animal::getType() const
{
	return (type);
}