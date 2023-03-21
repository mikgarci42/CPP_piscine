#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"

int main(void)
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->createMateria("ice");
	return 1;
}
