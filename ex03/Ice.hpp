#ifndef Ice_HPP
# define Ice_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &other);
		~Ice();

		Ice		&operator = (const Ice &rhs);
		Ice		*clone() const;
		void	use(ICharacter &target);
};

#endif