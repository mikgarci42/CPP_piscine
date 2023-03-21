#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);


int	main(void)
{
	Zombie* mikel;

	mikel = zombieHorde(3, "mikel");	
	delete [] mikel;
}
