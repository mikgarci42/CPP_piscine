#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat mik("gol", 15);
		ShrubberyCreationForm lol("mik");
		std::cout << lol.getGradeSign();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
