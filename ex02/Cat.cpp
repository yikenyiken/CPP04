#include "Cat.hpp"
#include <iostream>

Cat::Cat() : brain(new Brain)
{
	std::cout << "Cat's Default Constructor called\n";

	type = "Cat";
}

Cat::Cat(const Cat &other)  : brain(new Brain)
{
	std::cout << "Cat's Copy Constructor called\n";

	type = "Cat";

	*this = other;
}

Cat::~Cat() 
{
	std::cout << "Cat's Destructor called\n";

	delete brain;
}


Cat&	Cat::operator = (const Cat &rhs) 
{
	*brain = *rhs.brain;

	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "MEOW\n";
}