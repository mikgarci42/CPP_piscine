#include "Bureaucrat.hpp"
#include <stdexcept>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	this->setGrade(grade);
	std::cout << "Constructor called\n";
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor " << this->_name << " called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat & src) : _name(src.getName())
{
	*this = src;
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const & src)
{
	if (this != &src)
	{
		this->_grade = src.getGrade();
	}
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", buraucrat grade " << rhs.getGrade() << "." << std::endl;
	return o;
}

std::string		Bureaucrat::getName(void) const
{
	return(this->_name);
}

int		Bureaucrat::getGrade(void) const
{
	return(this->_grade);
}

void	Bureaucrat::setGrade(int const & grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = grade;
}

void	Bureaucrat::setGradeUp(void)
{
	this->setGrade(this->_grade - 1);
	std::cout << "Upgraded\n";
}

void		Bureaucrat::setGradeDown(void)
{
	this->setGrade(this->_grade + 1);
	std::cout << "Downgraded\n";
}
