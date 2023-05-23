#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat mik("gol", 136);
		ShrubberyCreationForm * lol = new ShrubberyCreationForm("mik");
		std::cout << lol->getSigned() << std::endl;
		mik.signForm(*lol);
		mik.executeForm(*lol);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
