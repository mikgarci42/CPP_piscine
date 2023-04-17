#include "Bureaucrat.hpp"
#include <stdexcept>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		if (grade > 150)
			throw GradeTooLowException();
		else if (grade < 1)
			throw GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch (GradeTooLowException& e)
	{
		this->_grade = 150;
		std::cout << "Se ha producido una expecion: " << e.what() << std::endl;
	}
	catch (GradeTooHighException& e)
	{
		this->_grade = 1;
		std::cout << "Se ha producido una expecion: " << e.what() << std::endl;
	}
	std::cout << "Constructor called\n";
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called\n";
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
	o << "The Bureaucrat " << rhs.getName() << " has " << rhs.getGrade() << " grade." << std::endl;
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
	try
	{
		if (grade > 150)
			throw GradeTooLowException();
		else if (grade < 1)
			throw GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch (GradeTooLowException& e)
	{
		this->_grade = 150;
		std::cout << "Se ha producido una expecion: " << e.what() << std::endl;
	}
	catch (GradeTooHighException& e)
	{
		this->_grade = 1;
		std::cout << "Se ha producido una expecion: " << e.what() << std::endl;
	}
}

void	Bureaucrat::setGradeUp(void)
{
	this->_grade -= 1;
	try
	{
		if (this->_grade < 1)
			throw GradeTooHighException();
		else
			std::cout << "Upgraded\n";
	}
	catch (GradeTooHighException& e)
	{
		this->_grade = 1;
		std::cout << "Se ha producido una expecion: " << e.what() << std::endl;
	}
}

void		Bureaucrat::setGradeDown(void)
{
	this->_grade += 1;
	try
	{
		if (this->_grade > 150)
			throw GradeTooLowException();
		else
			std::cout << "Downgraded\n";
	}
	catch (GradeTooLowException& e)
	{
		this->_grade = 150;
		std::cout << "Se ha producido una expecion: " << e.what() << std::endl;
	}
}
