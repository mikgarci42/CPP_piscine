#include "AMateria.hpp"


AMateria::AMateria(void)
{
	std::cout << "AMateria created\n";
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria deleted\n";
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

std::string const & AMateria::getType(void) const
{
	return(this->type);
}

void AMateria::use(ICharacter & target)
{
	std::cout << "An unknown materia has been USED by " << target.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &out, AMateria const &obj)
{
	out << obj.getType();
	return (out);
}
