#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "Unknown DiamondTrap was created" << std::endl;
}
DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	ClapTrap::_name = (name + "_clap_name"); 
	this->_name = name;
	this->_energypoints = ScavTrap::_energypresent;
	this->_attackdamage = FragTrap::_attackpresent;
	this->_hitpoints = FragTrap::_hitpresent;
	std::cout << "DiamondTrap " << this->_name << " was created" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " was destroyed" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitpoints = rhs.getHitpoints();
		this->_energypoints = rhs.getEnergypoints();
		this->_attackdamage = rhs.getAttackdamage();
	}
	return *this;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << this->_name << " and ClapTrap " << ClapTrap::getName() << std::endl;
	return ;	
}
