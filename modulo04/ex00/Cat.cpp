#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat has been created\n";
	this->type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat has been deleted\n";
}

Cat & Cat::operator=(const Cat &rhs) 
{

	this->type = rhs.getType();
	return *this;
}

Cat::Cat(const Cat &src) {
	*this = src;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat sound\n";
	return ;
}
