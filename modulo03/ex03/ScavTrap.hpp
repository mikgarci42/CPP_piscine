#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(std::string name, bool ea);
		~ScavTrap(void);
		ScavTrap(ScavTrap const & src);
		ScavTrap & operator=(ScavTrap const & rhs);

		void	attack(std::string const & target);
		void	guardGate(void);
};

#endif
