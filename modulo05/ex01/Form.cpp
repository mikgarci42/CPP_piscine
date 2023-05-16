#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExecute) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	setValue(gradeSign);
	setValue(gradeExecute);
	std::cout << "Form constructor called\n";
}

Form::Form(const Form & src) : _name(src.getName()), _signed(src.getSigned()), _gradeSign(src.getGradeSign()), _gradeExecute(src.getGradeExecute())
{
	*this = src;
}

Form & Form::operator = (Form const & src)
{
	(void) src;
	return (*this);
}

bool	Form::beSigned(Bureaucrat & src)
{
	if (src.getGrade() <= this->_gradeSign)
	{
		std::cout << "Form signed by " << src.getName() << std::endl;
		this->_signed = true;
		return (true);
	}
	else
		throw (GradeTooLowException());
	return (false);
}

void	Form::setValue(int	val)
{
	if (val > 150)
		throw (GradeTooLowException());
	else if (val < 1)
		throw (GradeTooHighException());
	else
		val = 0;
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	o << rhs.getName() << " form is signed by grade " << rhs.getGradeSign() << " and it's executed by grade " << rhs.getGradeExecute() << std::endl;
	return o;
}

Form::~Form(void)
{
	std::cout << "Form destructor called\n";
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

int		Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int		Form::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}
