#ifndef Cure_HPP
# define Cure_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &other);
		~Cure();

		Cure	&operator = (const Cure &rhs);
		Cure	*clone() const;
		void	use(ICharacter &target);
};

#endif