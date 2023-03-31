#include "Animal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "Animal has been created\n";
	this->type = "Animal";
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal has been deleted\n";
}

AAnimal & AAnimal::operator=(const AAnimal &rhs) 
{

	this->type = rhs.getType();
	return *this;
}

AAnimal::AAnimal(const AAnimal &src) {
	*this = src;
}

void	AAnimal::setType(std::string const type)
{
	this->type = type;
	return ;
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}
