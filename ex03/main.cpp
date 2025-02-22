#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void	addToStress()
{
	std::cout << "# ADD TO STRESS #\n";

	MateriaSource	*tmpSrc = new MateriaSource;
	MateriaSource	src;
	Character		*tmpMaster = new Character("master");

	tmpSrc->learnMateria(new Ice);
	tmpSrc->learnMateria(new Cure);
	tmpSrc->learnMateria(new Cure);

	AMateria	*tmpCure = new Cure;

	tmpSrc->learnMateria(tmpCure);
	tmpSrc->learnMateria(tmpCure); //exceeded number of slots

	src = *tmpSrc; // no shallow copy

	delete tmpSrc; // no leaked Materias

	tmpMaster->equip(src.createMateria("ice"));
	tmpMaster->equip(src.createMateria("ice"));
	tmpMaster->equip(src.createMateria("cure"));

	AMateria	*tmpIce = src.createMateria("ice");

	tmpMaster->equip(tmpIce);
	tmpMaster->equip(tmpIce); // exceeded number of slots

	Character	master = *tmpMaster; // no shallow copy

	tmpMaster->unequip(3);
	delete tmpMaster; // no leaked Materias


	master.use(2, master); // no relation to tmpMaster

	delete tmpIce; // no double free
}

void	stressErrors()
{
	std::cout << "# STRESS ERRORS #\n";

	IMateriaSource	*src = new MateriaSource();
	AMateria		*tmp = src->createMateria("ice"); // no Materias yet

	src->learnMateria(new Cure);

	ICharacter	*defaulted = new Character;
	Character	master("master");

	tmp = src->createMateria("cure");
	defaulted->equip(tmp);
	defaulted->use(0, master);

	defaulted->unequip(-1); // out of range

	defaulted->use(3, master); // out of range or empty Materia slot
	defaulted->use(-1, master);
	defaulted->unequip(0);

	delete defaulted; // no leaked Materias
	delete src; // no leaked Materias
	delete tmp; // no double free
}

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	std::cout << std::endl;
	stressErrors();

	std::cout << std::endl;
	addToStress();
	
	return 0;
}