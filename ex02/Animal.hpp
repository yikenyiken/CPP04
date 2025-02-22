#ifndef Animal_HPP
# define Animal_HPP
# include <string>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal& other);
		virtual ~Animal();

		Animal				&operator = (const Animal& other);
		virtual void		makeSound() const = 0;
		const std::string	&getType() const;
};

#endif