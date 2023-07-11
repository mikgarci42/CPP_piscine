#include "Intern.hpp"

Intern::Intern(void) 
{
	std::cout << "Intern constructor called\n";
}

Intern::Intern(const Intern & src)
{
	*this = src;
}

Intern & Intern::operator = (Intern const & src)
{
	(void) src;
	return (*this);
}

Intern::~Intern(void) 
{
	std::cout << "Intern destructor called\n";
}

AForm*	Intern::makeForm(std::string form, std::string target)
{
	int	i;
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *(*punterosFunciones[])(std::string) = {ShrubberyCreationForm::copy};
	i = 0;
	while (i < 4)
	{
		//if (!forms.compare(forms[i]))
		//{
			return (punterosFunciones[0](target));
		//}
		i++;
	}
	(void) form;
	(void) target;
	std::cout << "[ Probably complaining about insignificant problems ]\n";
	return NULL;
}
