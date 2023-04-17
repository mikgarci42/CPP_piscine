#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
	Bureaucrat mik("gol", 1);
	std::cout << mik.getGrade() << std::endl;
	mik.setGrade(2);
	std::cout << mik.getGrade() << std::endl;
	mik.setGradeUp();
	std::cout << mik.getGrade() << std::endl;
	mik.setGrade(2);
	std::cout << mik.getGrade() << std::endl;
	mik.setGradeUp();
	std::cout << mik.getGrade() << std::endl;
	Bureaucrat lol(mik);
	std::cout << lol.getName() << std::endl;
	std::cout << mik.getName() << std::endl;
	std::cout << mik;
	lol.getName();
	Bureaucrat * kkk = new Bureaucrat("sisisi", 1);
	std::cout << *kkk ;
	Bureaucrat * ll = new Bureaucrat("sisisi", 151);
	std::cout << *ll ;
		delete kkk;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
}
