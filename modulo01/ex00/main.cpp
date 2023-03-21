#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie aitor("aitor");
	Zombie *mikel;

	mikel = newZombie("mikel");
	delete mikel;
	randomChump("COSA");
}
