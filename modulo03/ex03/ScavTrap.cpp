#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Unknown ScavTrap was created" << std::endl;
	this->_name = "Unknown";
	this->_hitpoints = 100;
	_energypresent = 50;
	this->_energypoints = 50;
	this->_attackdamage = 20;
}
ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitpoints = 100;
	_energypresent = 50;
	this->_energypoints = 50;
	this->_attackdamage = 20;
	std::cout << "ScavTrap " << this->_name << " was created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " was destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & rhs)
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

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
	return ;	
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " have enerred in Gate keeper mode " << std::endl;
}
