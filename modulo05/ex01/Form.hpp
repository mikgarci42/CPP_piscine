#ifndef FORM_H
#define FORM_H
#include <iostream>

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int	const			_gradeSign;
		int	const			_gradeExecute;
		Form(void);

	public:
		Form(std::string name, int gradeSign, int gradeExecute);
		~Form(void);
	//	Form(Form const & src);
	//	Form & operator=(Form const & src);
};

#endif
