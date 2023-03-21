#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog has been created\n";
	this->type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Dog has been deleted\n";
}

Dog & Dog::operator=(const Dog &rhs) 
{

	this->type = rhs.getType();
	return *this;
}

Dog::Dog(const Dog &src) {
	*this = src;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog sound\n";
	return ;
}
