#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog's Default Constructor called\n";

	type = "Dog";
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog's Copy Constructor called\n";

	type = "Dog";

	*this = other;
}

Dog::~Dog() 
{
	std::cout << "Dog's Destructor called\n";
}


Dog&	Dog::operator = (const Dog &rhs) 
{
	(void)rhs;

	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "WOOF\n";
}