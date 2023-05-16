#include "Bureaucrat.hpp"
#include <stdexcept>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	this->setGrade(grade);
	std::cout << "Bureaucrat constructor called\n";
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called\n";
}

//Al ser un atributo constante, tiene que estar inicializado en el parametro de construccion. No se puede hacer de otra forma.
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

void	Bureaucrat::signForm(AForm & src)
{
	if (!src.getSigned() && src.beSigned(*this))
		std::cout << this->_name << " signed " << src.getName() << std::endl;
	else if (src.getSigned())
		std::cout << this->_name << " couldn't sign " << src.getName() << " because it's already signed." << std::endl;
	else
		std::cout << this->_name << " couldn't sign " << src.getName() << " because it's already signed." << std::endl;
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
}

void		Bureaucrat::setGradeDown(void)
{
	this->setGrade(this->_grade + 1);
}
