#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm(name, 72, 45)
{
	std::cout << "Shrubberry created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src) : AForm(src.getName(), 72, 45, src.getSigned())
{
	*this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	(void) src;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Form destructor called\n";
}

bool	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->checkExecute(executor))
		return (false);
    std::time_t tiempoActual = std::time(nullptr);
    std::tm* tiempoLocal = std::localtime(&tiempoActual);
    int segundosActuales = tiempoLocal->tm_sec;
	if (segundosActuales % 2 == 0)
		std::cout << this->getName() << " has been robotomized successfully (50\% of the time)." << std::endl;
	else
		std::cout << "Robotomy failed." << std::endl;
	return (true);
}
