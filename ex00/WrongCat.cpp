#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	std::cout << "WrongCat's Default Constructor called\n";

	type = "Wrong Cat";
}

WrongCat::WrongCat(const WrongCat &other) 
{
	std::cout << "WrongCat's Copy Constructor called\n";

	*this = other;
}

WrongCat::~WrongCat() 
{
	std::cout << "WrongCat's Destructor called\n";
}


WrongCat&	WrongCat::operator = (const WrongCat &rhs) 
{
	(void)rhs;

	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "MEOW\n";
}