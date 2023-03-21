#include <iostream>
#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}
void	Harl::warning( void )
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}
void	Harl::error( void )
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::complain(std::string level)
{
	int	i;
	std::string lib[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	i = 0;
	while (i < 4)
	{
		if (!level.compare(lib[i]))
		{
			while (i < 4)
			{
				switch (i)
				{
					case 0: this->debug();
							break;
					case 1: this->info();
							break;
					case 2: this->warning();
							break;
					case 3: this->error();
							break;
				}
				i++;
				std::cout << "\n";
			}
			return ;
		}
		i++;
	}
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}
