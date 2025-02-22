#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat's Default Constructor called\n";

	type = "Cat";
}

Cat::Cat(const Cat &other) 
{
	std::cout << "Cat's Copy Constructor called\n";

	type = "Cat";

	*this = other;
}

Cat::~Cat() 
{
	std::cout << "Cat's Destructor called\n";
}


Cat&	Cat::operator = (const Cat &rhs) 
{
	(void)rhs;

	return( *this);
}

void	Cat::makeSound() const
{
	std::cout << "MEOW\n";
}