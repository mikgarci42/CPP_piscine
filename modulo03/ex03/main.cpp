#include <iostream>
#include "DiamondTrap.hpp"

int main (void)
{
	DiamondTrap mik("Mikel");	
	ScavTrap hol("miiii");
	mik.whoAmI();
	mik.attack("");
	std::cout << mik.getEnergypoints();
	std::cout << mik.getHitpoints();
}
