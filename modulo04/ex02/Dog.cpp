#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog has been created\n";
	this->type = "Dog";
	brain = new Brain();
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << "Dog has been deleted\n";
}

Dog & Dog::operator=(const Dog &rhs) 
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

Dog::Dog(const Dog &src) 
{
	this->brain = NULL;
	*this = src;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog sound\n";
	return ;
}
