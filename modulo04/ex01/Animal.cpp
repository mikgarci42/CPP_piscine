#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal has been created\n";
	this->type = "Animal";
}

Animal::~Animal(void)
{
	std::cout << "Animal has been deleted\n";
}

Animal & Animal::operator=(const Animal &rhs) 
{
	std::cout << "Animal cpy  has been created\n";
	this->type = rhs.getType();
	return *this;
}

Animal::Animal(const Animal &src) {
	*this = src;
}

void	Animal::setType(std::string type)
{
	this->type = type;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound\n";
	return ;
}
