#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP
# include <string>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		virtual ~WrongAnimal();

		WrongAnimal	&operator = (const WrongAnimal& other);
		void		makeSound() const;
		const std::string	&getType() const;
};

#endif