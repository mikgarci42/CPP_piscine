#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "Unknown DiamondTrap was created" << std::endl;
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
}
DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	//this->_hitpoints = 100;
	//this->_energypoints = 100;
	//this->_attackdamage = 30;
	//this->hitPoints = FragTrap::hitPoints;
	//this->energyPoints = ScavTrap::energyPoints;
	//this->attackDamage = FragTrap::attackDamage;
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

void	DiamondTrap::attack(std::string const & target)
{
	std::cout << "DiamondTrap " << this->_name << " attacks " << target << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
	return ;	
}
