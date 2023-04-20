#include "Cure.hpp"

Cure::Cure(void): AMateria()
{
	this->type = "cure";
	std::cout << "Cure created\n";
}


Cure::Cure(Cure const & src): AMateria()
{
	*this = src;
}

Cure::~Cure(void)
{
	std::cout << "Cure deleted\n";
}

Cure & Cure::operator=(Cure const & rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

AMateria *Cure::clone() const 
{
	return(new Cure());
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
