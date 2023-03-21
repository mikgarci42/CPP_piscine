#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	this->announce();
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << name << " ha sido destruido\n";
	return ;
}
