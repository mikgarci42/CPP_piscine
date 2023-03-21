#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

std::string const & HumanA::getWeapon(void)
{
//	if (!this->_Type.getType())
//		return ("");
	return (this->_Type.getType());
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->_Type = weapon;
	return ;
}

std::string	HumanA::getName(void)
{
	return(this->_name);
}

HumanA::HumanA(std::string name, Weapon &type) : _Type(type)
{
	this->_name = name;	
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->getName() << " attacks with their " << this->getWeapon() << std::endl;
}

HumanA::~HumanA(void)
{
	return ;
}
