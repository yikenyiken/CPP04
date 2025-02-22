#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

#define ANIMALS_N 2

int main()
{
	std::cout << "#ANIMAL ARRAY\n";
	{
		int		i = 0;
		Animal	*animalArray[ANIMALS_N];

		while (i < ANIMALS_N / 2)
			animalArray[i++] = new Dog();

		std::cout <<std::endl;

		while (i < ANIMALS_N)
			animalArray[i++] = new Cat();

		std::cout <<std::endl;

		for (int i = 0; i < ANIMALS_N; i++)
		{
			delete animalArray[i];
			std::cout <<std::endl;
		}
	}

	std::cout << "#DEEP COPY\n";
	{
		Dog	someDog;
		std::cout <<std::endl;

		Dog	hound = someDog;
		std::cout <<std::endl;
	}

	std::cout << "#COMPLETE DESTRUCTION\n";
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << std::endl;

		delete j; //should not leave a leak
		delete i;
	}
}