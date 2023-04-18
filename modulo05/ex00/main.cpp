#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat *aita = NULL;
	try
	{
		Bureaucrat mik("gol", 1);
		std::cout << mik.getGrade() << std::endl;
		mik.setGrade(2);
		std::cout << mik.getGrade() << std::endl;
		mik.setGradeUp();
		std::cout << mik.getGrade() << " AAA" << std::endl;
		mik.setGrade(23);
		std::cout << mik.getGrade() << std::endl;
		mik.setGradeUp();
		std::cout << mik.getGrade() << std::endl;
		Bureaucrat lol(mik);
		std::cout << lol.getName() << std::endl;
		std::cout << mik.getName() << std::endl;
		std::cout << mik;
		lol.getName();
		aita = new Bureaucrat("siii", 2);
		std::cout << *aita;
	}
	catch (std::exception & e)
	{
		std::cout << "Se ha producido una expecion: " << e.what() << std::endl;
	}
	delete aita;
}
