#ifndef Cat_HPP
# define Cat_HPP
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& other);
		~Cat();

		Cat		&operator = (const Cat& other);
		void	makeSound() const;
};

#endif