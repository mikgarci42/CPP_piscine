#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int	i;
	(void) name;
	Zombie* zombie = new Zombie[N];
	i = 0;
	while (i < N)
	{
		zombie[i].setName(name);
		zombie[i].announce();
		i++;
	}
	return (zombie);
}

