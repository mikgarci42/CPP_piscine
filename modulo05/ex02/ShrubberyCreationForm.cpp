#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm(name, 145, 137)
{
	std::cout << "Shrubberry created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Form destructor called\n";
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	(void) executor;
}
