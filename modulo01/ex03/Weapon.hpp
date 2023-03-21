#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class	Weapon
{
	public:
		std::string	const &getType(void);
		void		setType(std::string  type);
	
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);

	private:
		std::string	_Type;
};

#endif
