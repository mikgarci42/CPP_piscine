#include "Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Harl	hola;

	if (argc == 2)
		hola.complain(argv[1]);
	else
		std::cout << "[ Probably complaining about insignificant problems ]\n";
}
