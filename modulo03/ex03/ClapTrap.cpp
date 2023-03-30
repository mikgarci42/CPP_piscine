#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Unknown ClapTrap was created" << std::endl;
	this->_name = "Unknown";
	this->_hitpoints = 10;
	this->_energypoints = 10;
	this->_attackdamage = 0;
}
ClapTrap::ClapTrap(std::string const name) : _energypoints(10)
{
	this->_name = name;
	this->_hitpoints = 10;
	this->_attackdamage = 0;
	std::cout << "ClapTrap " << this->_name << " was created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " was destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & rhs)
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

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
	return ;	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((this->_hitpoints - (int) amount) <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		this->_hitpoints = 0;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " has recived " << amount << " damage" << std::endl;
	this->_hitpoints -= (int) amount;
	std::cout << "ClapTrap " << this->_name << " life is " << this->_hitpoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((this->_energypoints - (int) amount) < 0)
	{
		std::cout << "ClapTrap " << this->_name << " hasn't got enough energypoints (" << this->_energypoints << ")" << std::endl;
		return ;
	}
	this->_energypoints -= (int) amount;
	this->_hitpoints += (int) amount;
	std::cout << "ClapTrap " << this->_name << " has healed to " << this->_hitpoints << " Hitpoints" << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getHitpoints(void) const
{
	return (this->_hitpoints);
}

int	ClapTrap::getEnergypoints(void) const
{
	return (this->_energypoints);
}

int	ClapTrap::getAttackdamage(void) const
{
	return (this->_attackdamage);
}

void	ClapTrap::setName(std::string const name)
{
	this->_name = name;
}

void	ClapTrap::setHitpoints(int const val)
{
	this->_hitpoints = val;
}

void	ClapTrap::setEnergypoints(int const val)
{
	this->_energypoints = val;
}

void	ClapTrap::setAttackdamage(int const val)
{
	this->_attackdamage = val;
}
