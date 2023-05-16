#include "AForm.hpp"

AForm::AForm(std::string name, int gradeSign, int gradeExecute) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	setValue(gradeSign);
	setValue(gradeExecute);
	std::cout << "Form constructor called\n";
}

AForm::AForm(const AForm & src) : _name(src.getName()), _signed(src.getSigned()), _gradeSign(src.getGradeSign()), _gradeExecute(src.getGradeExecute())
{
	*this = src;
}

AForm & AForm::operator = (AForm const & src)
{
	(void) src;
	return (*this);
}

bool	AForm::beSigned(Bureaucrat & src)
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

void	AForm::setValue(int	val)
{
	if (val > 150)
		throw (GradeTooLowException());
	else if (val < 1)
		throw (GradeTooHighException());
	else
		val = 0;
}

std::ostream & operator<<(std::ostream & o, AForm const & rhs)
{
	o << rhs.getName() << " Form is signed by grade " << rhs.getGradeSign() << " and it's executed by grade " << rhs.getGradeExecute() << std::endl;
	return o;
}

AForm::~AForm(void)
{
	std::cout << "Form destructor called\n";
}

std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

int		AForm::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int		AForm::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}
