#include <iostream>
#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap mikel("Mikel");

	mikel.takeDamage(2);
	mikel.beRepaired(15);
	mikel.attack("aitor");
}
