#include <iostream>

int	main(void)
{
	std::string std = "HI THIS IS BRAIN";
	std::string *stringPTR = &std;
	std::string &stringREF = std;
	
	std::cout << &std << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << std << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
