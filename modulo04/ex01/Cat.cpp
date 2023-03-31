#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat has been created\n";
	this->type = "Cat";
	brain = new Brain();
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << "Cat has been deleted\n";
}

Cat & Cat::operator=(const Cat &rhs) 
{
	this->type = rhs.getType();
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain();
/*	for (int i = 0; i < 100; i++)
        	this->brain->setIdea(rhs.brain->getIdea(i), i);*/
	*(this->brain) = *(rhs.brain);
	return *this;
}

Cat::Cat(const Cat &src) 
{
	this->brain = NULL;
	*this = src;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat sound\n";
	return ;
}
