#include "Dog.hpp"
#include <iostream>

Dog::Dog() : brain(new Brain)
{
	std::cout << "Dog's Default Constructor called\n";

	type = "Dog";
}

Dog::Dog(const Dog &other) : brain(new Brain)
{
	std::cout << "Dog's Copy Constructor called\n";

	type = "Dog";

	*this = other;
}

Dog::~Dog() 
{
	std::cout << "Dog's Destructor called\n";

	delete brain;
}


Dog&	Dog::operator = (const Dog &rhs) 
{
	*brain = *rhs.brain;

	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "WOOF\n";
}