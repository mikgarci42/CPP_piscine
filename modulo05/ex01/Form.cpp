#include "Form.hpp"


Form::Form(std::string name, int gradeSign, int gradeExecute) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
//	if (this->_gradeSign > 150 || this->_gradeExecute > 150)
//		throw (GradeTooLowException());
//	else if (this->_gradeSign < 1 || this->_gradeExecute < 1)
//		throw (GradeTooHighException());
//	else
		std::cout << "Form constructor called\n";
}

Form::~Form(void)
{
	std::cout << "Form destructor called\n";
}
/*Form::Form(Form const & src) : _name(src.getName()), _gradeSign(src.getGradeSign()), _gradeExecute(src.getGradeExecute())
{
	*this = src;
}*/

	//	Form & operator=(Form const & src);


