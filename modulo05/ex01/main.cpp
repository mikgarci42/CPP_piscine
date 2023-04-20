#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat mik("gol", 1);
		Form form("feo", 1, 15);
		std::cout << form.getGradeExecute() << std::endl;
		form.beSigned(mik);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
