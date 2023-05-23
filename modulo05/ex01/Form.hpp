#ifndef FORM_H
#define FORM_H
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int	const			_gradeSign;
		int	const			_gradeExecute;
		Form(void);

	public:
		Form(std::string name, int gradeSign, int gradeExecute, bool _signed = false);
		Form(Form const & src);
		Form & operator=(Form const & src);
		~Form(void);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("El grado para firmar o ejecutar es demasiado alto");
				}
		};
		class  GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("El grado para firmar o ejecutar es demasiado bajo");
				}
		};

		bool		beSigned(Bureaucrat & src);
		std::string getName(void) const;
		bool		getSigned(void) const;
		void		setValue(int	val);
		int			getGradeSign(void) const;
		int 		getGradeExecute(void) const;
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif
