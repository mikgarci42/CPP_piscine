#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap const & src);
		FragTrap & operator=(FragTrap const & rhs);

		void	attack(std::string const & target);
		void	highFivesGuys(void);
};

#endif
