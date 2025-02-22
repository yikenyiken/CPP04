#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal's Default Constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) 
{
	std::cout << "WrongAnimal's Copy Constructor called\n";

	*this = other;
}

WrongAnimal::~WrongAnimal() 
{
	std::cout << "WrongAnimal's Destructor called\n";
}


WrongAnimal&	WrongAnimal::operator = (const WrongAnimal &rhs) 
{
	(void)rhs;

	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "HISS\n";
}

const std::string	&WrongAnimal::getType() const
{
	return (type);
}