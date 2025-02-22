#ifndef Character_HPP
# define Character_HPP
# include "ICharacter.hpp"
# define SLOTS_N 4

class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	*slots[SLOTS_N];
	public:
		Character();
		Character(std::string name);
		Character(const Character& other);
		~Character();

		Character	&operator = (const Character& rhs);
		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif