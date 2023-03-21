#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string type) : _Type(type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string	const &Weapon::getType(void)
{
	return (this->_Type);
}

void	Weapon::setType(std::string  type)
{
	this->_Type = type;
	return ;
}
