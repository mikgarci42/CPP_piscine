#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name) : AForm(name, 25, 5)
{
	std::cout << "Shrubberry created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src) : AForm(src.getName(), 25, 5, src.getSigned())
{
	*this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	(void) src;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Form destructor called\n";
}

bool	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->checkExecute(executor))
		return (false);
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return (true);
}
