#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat mik("gol", 161);
	std::cout << mik.getGrade() << std::endl;
	mik.setGrade(2);
	std::cout << mik.getGrade() << std::endl;
	mik.setGradeUp();
	std::cout << mik.getGrade() << std::endl;
	mik.setGrade(151);
	std::cout << mik.getGrade() << std::endl;
	mik.setGradeUp();
	std::cout << mik.getGrade() << std::endl;
	Bureaucrat lol(mik);
	std::cout << lol.getGrade() << std::endl;
}
