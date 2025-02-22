#ifndef MateriaSource_HPP
# define MateriaSource_HPP
# include "IMateriaSource.hpp"
# define SLOTS_N 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*slots[SLOTS_N];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		~MateriaSource();

		MateriaSource	&operator = (const MateriaSource &rhs);
		void			learnMateria(AMateria *m);
		AMateria		*createMateria(std::string const &type);
};

#endif