#include "Bureaucrat.hpp"
#include <stdexcept>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw GradeTooHighException();
	else if (grade < 1)
		throw GradeTooLowException();
	else
		this->_grade = grade;
	std::cout << "Constructor called\n";
}

std::string		Bureaucrat::getName(void)
{
	return(this->_name);
}

int				Bureaucrat::getGrade(void)
{
	return(this->_grade);
}
