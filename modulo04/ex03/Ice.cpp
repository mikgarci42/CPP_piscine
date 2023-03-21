#include "Ice.hpp"

Ice::Ice(void): AMateria()
{
	this->type = "ice";
	std::cout << "Ice created\n";
}


Ice::Ice(Ice const & src): AMateria()
{
	*this = src;
}

Ice::~Ice(void)
{
	std::cout << "Ice deleted\n";
}

Ice & Ice::operator=(Ice const & rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

AMateria *Ice::clone() const 
{
	return(new Ice());
}

void Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
