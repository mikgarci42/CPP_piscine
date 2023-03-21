#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int		_hitpoints;
		int		_energypoints;
		int		_attackdamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string const name);
		~ClapTrap(void);
		ClapTrap(ClapTrap const & src);
		ClapTrap & operator=(ClapTrap const & rhs);

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	getName(void) const;
		void		setName(std::string name);
		int			getHitpoints(void) const;
		void		setHitpoints(int val);
		int			getEnergypoints(void) const;
		void		setEnergypoints(int val);
		int			getAttackdamage(void) const;
		void		setAttackdamage(int val);
};

#endif
