#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class	Zombie
{
	public:
	
	Zombie(void);
	~Zombie(void);
	void setName(std::string name);
	std::string getName(void);
	void	announce(void);
	Zombie*	zombieHorde(int N, std::string name);

	private:
	std::string name;

};

#endif
