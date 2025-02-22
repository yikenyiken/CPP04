#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain's Default Constructor called\n";
}

Brain::Brain(const Brain &other) 
{
	std::cout << "Brain's Copy Constructor called\n";

	*this = other;
}

Brain::~Brain() 
{
	std::cout << "Brain's Destructor called\n";
}


Brain&	Brain::operator = (const Brain &rhs) 
{
	for (int i = 0; i < IDEAS_N; i++)
		ideas[i] = rhs.ideas[i];

	return (*this);
}