#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm(name, 145, 137)
{
	std::cout << "Shrubberry created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src) : AForm(src.getName(), 145, 137, src.getSigned())
{
	*this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	(void) src;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Form destructor called\n";
}

bool	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->checkExecute(executor))
		return (false);
	std::ofstream	ofs(this->getName() + "_shruberry", std::ios::trunc);
	if (!ofs.is_open())
	{
		ofs.open(this->getName() + "_shruberry");
	}
	ofs << "   oxoxoo    ooxoo\n  ooxoxo oo  oxoxooo\n oooo xxoxoo ooo ooox\n oxo o oxoxo  xoxxoxo\n  oxo xooxoooo o ooo\n    ooo\\oo\\  /o/o\n        \\  \\/ /\n         |   /\n         |  |\n         | D|\n         |  |\n         |  |\n  ______/____\\____\n ";
	ofs.close();
	return (true);
}

