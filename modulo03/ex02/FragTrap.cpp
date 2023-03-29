#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_name = "Unknown";
	std::cout << "Unknown FragTrap was created" << std::endl;
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
}
FragTrap::FragTrap(std::string const name) : ClapTrap("MIKEEEL")
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
	std::cout << "FragTrap " << this->_name << " was created" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " was destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const & rhs)
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

void	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
	return ;	
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << ": would you give me a high five? " << std::endl;
}
