#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"

int main(void)
{
	IMateriaSource *src = new MateriaSource();
	AMateria *lel = new Ice();
	src->learnMateria(lel);
	AMateria *tet = src->createMateria("ice");
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	Character *bob1 = new Character("bob");
	me->use(4, *bob1);
	me->use(0, *bob1);
	MateriaSource bob;
	MateriaSource old(bob);
	(void) old;
	delete me;
	delete bob1;
	delete src;
	delete tet;
	return 1;
}
