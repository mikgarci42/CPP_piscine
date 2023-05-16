#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat mik("gol", 15);
		Form form("feo", 20, 15);
		std::cout << form.getGradeExecute() << std::endl;
	//	form.beSigned(mik);
		mik.signForm(form);
		Form fiu(form);
		mik.signForm(fiu);
		std::cout << fiu;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
