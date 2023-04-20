#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal has been created\n";
	this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal has been deleted\n";
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &rhs) 
{

	this->type = rhs.getType();
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	*this = src;
}

void	WrongAnimal::setType(std::string const type)
{
	this->type = type;
	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound\n";
	return ;
}
