#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	try
	{
		Bureaucrat mik("gol", 45);
		ShrubberyCreationForm * lol = new ShrubberyCreationForm("mik");
		//PresidentialPardonForm * lol = new PresidentialPardonForm("mik");
		//PresidentialPardonForm * lol = new PresidentialPardonForm("mik");
		std::cout << lol->getSigned() << std::endl;
		mik.signForm(*lol);
		mik.executeForm(*lol);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
