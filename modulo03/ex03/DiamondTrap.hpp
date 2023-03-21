#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;

	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		~DiamondTrap(void);
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap & operator=(DiamondTrap const & rhs);

		void	attack(std::string const & target);
};

#endif
