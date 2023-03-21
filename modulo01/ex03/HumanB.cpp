#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

std::string HumanB::getWeapon(void)
{
	if (!this->_Type)
		return ("");
	return (this->_Type->getType());
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_Type = &weapon;
	return ;
}

/*HumanB::HumanB(std::string name, Weapon type)
{
	this->_name = name;	
	this->_Type = &type;
	return ;
}*/

std::string	HumanB::getName(void)
{
	return(this->_name);
}

HumanB::HumanB(std::string name) : _name(name)
{
	this->_Type = NULL;
	return ;
}

/*HumanB::HumanB(std::string name, Weapon &type) : _Type(type)
{
	this->_name = name;	
	return ;
}*/

void	HumanB::attack(void)
{
	std::cout << this->getName() << " attacks with their " << this->getWeapon() << std::endl;
}


HumanB::~HumanB(void)
{
	return ;
}
